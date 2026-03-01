/*
** Automatically generated from `equiv_type.m'
** by the Mercury compiler,
** version rotd-2026-03-01
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




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_and_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0;

static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_equiv_params_0_0[3];

static const MR_ConstString parse_tree__equiv_type__parse_tree__equiv_type__field_names_equiv_params_0_0[3];

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_equiv_params_0_0;

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_equiv_params_0_0[1];

static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_equiv_params_0[1];

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_equiv_params_0[1];

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_equiv_params_0[1];

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

static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__report_contains_circular_eqv_type__2647__1_1_f_0(
  MR_Word LambdaHeadVar__1_55);

static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_pred_types_and_maybe_modes__1987__1_2_p_0(
  MR_Word Types1_63,
  MR_Word HeadVar__2_159);

static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_pred_types_and_maybe_modes__2007__1_2_p_0(
  MR_Word TypesAndModes1_69,
  MR_Word HeadVar__2_191);

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
parse_tree__equiv_type____Compare____equiv_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____equiv_params_0_0(
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
parse_tree__equiv_type__replace_in_type_and_mode_10_p_0(
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
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Constraint0_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_TVarSet_0_23,
  MR_Word * STATE_VARIABLE_TVarSet_24,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_25,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28);

static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
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
parse_tree__equiv_type__replace_in_var_or_ground_type_location_10_p_0(
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
parse_tree__equiv_type__replace_in_subst_10_p_0(
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
parse_tree__equiv_type__replace_in_class_decl_10_p_0(
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
parse_tree__equiv_type__replace_in_type_repn_info_10_p_0(
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
parse_tree__equiv_type__report_circular_eqv_type_2_f_0(
  MR_Word TypeCtor_4,
  MR_Word Context_5);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_ctor_checked_defn_11_p_0(
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
parse_tree__equiv_type__replace_in_type_defn_info_general__ho8_10_p_0(
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
parse_tree__equiv_type__replace_in_type_defn_info_general__ho7_10_p_0(
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
parse_tree__equiv_type__replace_in_type_defn_info_general__ho6_10_p_0(
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
parse_tree__equiv_type__replace_in_type_defn_info_general__ho5_10_p_0(
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
parse_tree__equiv_type__replace_in_maybe__ho4_11_p_0(
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__661__1__ho31_10_p_0(
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
parse_tree__equiv_type__replace_in_maybe__ho3_11_p_0(
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__664__1__ho32_10_p_0(
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
parse_tree__equiv_type__replace_in_list__ho2_11_p_0(
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
parse_tree__equiv_type__replace_in_list_loop__ho33_12_p_0(
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__714__1__ho36_10_p_0(
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
parse_tree__equiv_type__replace_in_list__ho1_11_p_0(
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
parse_tree__equiv_type__replace_in_list_loop__ho34_12_p_0(
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__717__1__ho35_10_p_0(
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
parse_tree__equiv_type__replace_in_parse_tree_trans_opt_9_p_0(
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_9_p_0(
  MR_Word ParseTreeTransOpt_11,
  MR_Word * ParseTreeTransOpt_3,
  MR_Word RecompInfo_12,
  MR_Word * RecompInfo_5,
  MR_Word UsedModules_13,
  MR_Word * UsedModules_7,
  MR_Word Specs_14,
  MR_Word * Specs_9);

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_plain_opt_9_p_0(
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
parse_tree__equiv_type__replace_in_list_loop__ho25_12_p_0(
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_parse_tree_plain_opt__594__1__ho38_10_p_0(
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
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_115_117_98_95_95_91_51_44_32_52_93_95_48_13_p_0_1(
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_115_117_98_95_95_91_51_44_32_52_93_95_48_13_p_0(
  MR_Word Params_14,
  MR_Word MaybeRecord_15,
  MR_Word DetailsSub0_18,
  MR_Word * DetailsSub_19,
  MR_Word STATE_VARIABLE_TVarSet_0_30,
  MR_Word * STATE_VARIABLE_TVarSet_31,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_32,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_33,
  MR_Word STATE_VARIABLE_UsedModules_0_34,
  MR_Word * STATE_VARIABLE_UsedModules_35,
  MR_Word * Specs_23);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_93_95_48_13_p_0_1(
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_93_95_48_13_p_0(
  MR_Word Params_14,
  MR_Word MaybeRecord_15,
  MR_Word DetailsDu0_18,
  MR_Word * DetailsDu_19,
  MR_Word STATE_VARIABLE_TVarSet_0_29,
  MR_Word * STATE_VARIABLE_TVarSet_30,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_31,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_32,
  MR_Word STATE_VARIABLE_UsedModules_0_33,
  MR_Word * STATE_VARIABLE_UsedModules_34,
  MR_Word * Specs_23);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_solver_13_p_0(
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
parse_tree__equiv_type__replace_in_constraint_store_8_p_0(
  MR_Word Params_1,
  MR_Word MaybeRecord_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_5,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_6,
  MR_Word STATE_VARIABLE_UsedModules_0_7,
  MR_Word * STATE_VARIABLE_UsedModules_8);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_eqv_13_p_0(
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
parse_tree__equiv_type__replace_in_list__ho9_11_p_0(
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
parse_tree__equiv_type__replace_in_list_loop__ho30_12_p_0(
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
parse_tree__equiv_type__replace_in_int_for_opt_spec_9_p_0_2(
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
parse_tree__equiv_type__replace_in_int_for_opt_spec_9_p_0_1(
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
parse_tree__equiv_type__replace_in_int_for_opt_spec_9_p_0(
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
parse_tree__equiv_type__replace_in_parse_tree_int1_9_p_0_2(
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
parse_tree__equiv_type__replace_in_parse_tree_int1_9_p_0_1(
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
parse_tree__equiv_type__replace_in_parse_tree_int1_9_p_0(
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
parse_tree__equiv_type__replace_in_indirect_int2_spec_9_p_0_2(
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
parse_tree__equiv_type__replace_in_indirect_int2_spec_9_p_0_1(
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
parse_tree__equiv_type__replace_in_indirect_int2_spec_9_p_0(
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
parse_tree__equiv_type__replace_in_direct_int1_spec_9_p_0_2(
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
parse_tree__equiv_type__replace_in_direct_int1_spec_9_p_0_1(
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
parse_tree__equiv_type__replace_in_direct_int1_spec_9_p_0(
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
parse_tree__equiv_type__replace_in_list__ho16_11_p_0(
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
parse_tree__equiv_type__replace_in_list_loop__ho23_12_p_0(
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
parse_tree__equiv_type__replace_in_abstract_typeclass_info_9_p_0_1(
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
parse_tree__equiv_type__replace_in_abstract_typeclass_info_9_p_0(
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
parse_tree__equiv_type__replace_in_ancestor_int_spec_9_p_0(
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
parse_tree__equiv_type__replace_in_parse_tree_int0_9_p_0_1(
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
parse_tree__equiv_type__replace_in_parse_tree_int0_9_p_0(
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
parse_tree__equiv_type__replace_in_list__ho15_11_p_0(
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
parse_tree__equiv_type__replace_in_list_loop__ho24_12_p_0(
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
parse_tree__equiv_type__replace_in_abstract_instance_info_9_p_0_1(
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
parse_tree__equiv_type__replace_in_abstract_instance_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word InstanceInfo0_12,
  MR_Word * InstanceInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_38,
  MR_Word * STATE_VARIABLE_RecompInfo_39,
  MR_Word STATE_VARIABLE_UsedModules_0_40,
  MR_Word * STATE_VARIABLE_UsedModules_41,
  MR_Word * HeadVar__9_9);

static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_type_report_circular_eqvs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Ctor0_13,
  MR_Word * Ctor_14,
  MR_Word STATE_VARIABLE_TVarSet_0_34,
  MR_Word * STATE_VARIABLE_TVarSet_35,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_36,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_37,
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
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_10,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_11,
  MR_Word STATE_VARIABLE_UsedModules_0_12,
  MR_Word * STATE_VARIABLE_UsedModules_13);

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_6(
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
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_5(
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
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_4(
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
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_3(
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
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_2(
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
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_1(
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
parse_tree__equiv_type__replace_in_parse_tree_module_src_9_p_0_1(
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
parse_tree__equiv_type__replace_in_parse_tree_module_src_9_p_0(
  MR_Word Params_10,
  MR_Word ParseTreeModuleSrc0_11,
  MR_Word * ParseTreeModuleSrc_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_70,
  MR_Word * STATE_VARIABLE_RecompInfo_71,
  MR_Word STATE_VARIABLE_UsedModules_0_72,
  MR_Word * STATE_VARIABLE_UsedModules_73,
  MR_Word STATE_VARIABLE_Specs_0_74,
  MR_Word * STATE_VARIABLE_Specs_75);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_93_95_48_11_p_0(
  MR_Word Params_12,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_57_95_95_91_50_93_95_48_12_p_0(
  MR_Word HeadVar__1_1,
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_93_95_48_9_p_0(
  MR_Word Params_10,
  MR_Word Info0_12,
  MR_Word * Info_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_42,
  MR_Word * STATE_VARIABLE_RecompInfo_43,
  MR_Word STATE_VARIABLE_UsedModules_0_44,
  MR_Word * STATE_VARIABLE_UsedModules_45,
  MR_Word * Specs_16);

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho19_11_p_0(
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
parse_tree__equiv_type__replace_in_list_loop__ho20_12_p_0(
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
parse_tree__equiv_type__replace_in_foreign_proc_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__equiv_type__replace_in_foreign_proc_9_p_0(
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
parse_tree__equiv_type__replace_in_list__ho18_11_p_0(
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
parse_tree__equiv_type__replace_in_list_loop__ho21_12_p_0(
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
parse_tree__equiv_type__replace_in_mutable_info_9_p_0(
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
parse_tree__equiv_type__replace_in_list__ho17_11_p_0(
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
parse_tree__equiv_type__replace_in_list_loop__ho22_12_p_0(
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
parse_tree__equiv_type__replace_in_decl_pragma_info_9_p_0_2(
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
parse_tree__equiv_type__replace_in_decl_pragma_info_9_p_0_1(
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
parse_tree__equiv_type__replace_in_decl_pragma_info_9_p_0(
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
parse_tree__equiv_type__replace_in_decl_pragma_type_spec_9_p_0(
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
parse_tree__equiv_type__replace_in_tvar_substs_12_p_0(
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
parse_tree__equiv_type__replace_in_list__ho13_11_p_0(
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
parse_tree__equiv_type__replace_in_list_loop__ho26_12_p_0(
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
parse_tree__equiv_type__replace_in_typeclass_info_9_p_0_2(
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
parse_tree__equiv_type__replace_in_typeclass_info_9_p_0_1(
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
parse_tree__equiv_type__replace_in_typeclass_info_9_p_0(
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
parse_tree__equiv_type__replace_in_list__ho12_11_p_0(
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
parse_tree__equiv_type__replace_in_list_loop__ho27_12_p_0(
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
parse_tree__equiv_type__replace_in_instance_info_9_p_0_1(
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
parse_tree__equiv_type__replace_in_instance_info_9_p_0(
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
parse_tree__equiv_type__replace_in_list__ho11_11_p_0(
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
parse_tree__equiv_type__replace_in_list_loop__ho28_12_p_0(
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
parse_tree__equiv_type__replace_in_pred_decl_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word PredDeclInfo0_12,
  MR_Word * PredDeclInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_45,
  MR_Word * STATE_VARIABLE_RecompInfo_46,
  MR_Word STATE_VARIABLE_UsedModules_0_47,
  MR_Word * STATE_VARIABLE_UsedModules_48,
  MR_Word * Specs_16);

static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_22_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_22_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_22_p_0(
  MR_Word Params_23,
  MR_Word MaybeRecord_24,
  MR_Word PredName_25,
  MR_Word PredOrFunc_26,
  MR_Word Context_27,
  MR_Word ClassContext0_28,
  MR_Word * ClassContext_29,
  MR_Word TypesAndMaybeModes0_30,
  MR_Word * TypesAndMaybeModes_31,
  MR_Word STATE_VARIABLE_TVarSet_0_77,
  MR_Word * STATE_VARIABLE_TVarSet_78,
  MR_Word MaybeWithType0_33,
  MR_Word * MaybeWithType_34,
  MR_Word MaybeWithInst0_35,
  MR_Word * MaybeWithInst_36,
  MR_Word STATE_VARIABLE_MaybeDetism_0_79,
  MR_Word * STATE_VARIABLE_MaybeDetism_80,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_81,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_82,
  MR_Word STATE_VARIABLE_UsedModules_0_83,
  MR_Word * STATE_VARIABLE_UsedModules_84,
  MR_Word * STATE_VARIABLE_Specs_85);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_119_105_116_104_95_105_110_115_116_95_95_91_50_93_95_48_18_p_0(
  MR_Word Params_19,
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
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_54,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_55,
  MR_Word STATE_VARIABLE_UsedModules_0_56,
  MR_Word * STATE_VARIABLE_UsedModules_57,
  MR_Word * Specs_33);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(
  MR_Word InstEqvMap_10,
  MR_Word ExpandedInstCtors0_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_26,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_27,
  MR_Word STATE_VARIABLE_UsedModules_0_28,
  MR_Word * STATE_VARIABLE_UsedModules_29);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(
  MR_Word TypeEqvMap_12,
  MR_Word MaybeRecord_13,
  MR_Word Type0_14,
  MR_Word * Type_15,
  MR_Word * Changed_16,
  MR_Word STATE_VARIABLE_TVarSet_0_21,
  MR_Word * STATE_VARIABLE_TVarSet_22,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_23,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(
  MR_Word TypeEqvMap_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeCtorsAlreadyExpanded_16,
  MR_Word Type0_17,
  MR_Word * Type_18,
  MR_Word * Changed_19,
  MR_Word * Circ_20,
  MR_Word STATE_VARIABLE_TVarSet_0_45,
  MR_Word * STATE_VARIABLE_TVarSet_46,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_47,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_48,
  MR_Word STATE_VARIABLE_UsedModules_0_49,
  MR_Word * STATE_VARIABLE_UsedModules_50);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(
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
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_11,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_12,
  MR_Word STATE_VARIABLE_UsedModules_0_13,
  MR_Word * STATE_VARIABLE_UsedModules_14);

static void MR_CALL 
parse_tree__equiv_type__maybe_record_type_ctor_sym_name_use_4_p_0(
  MR_Word MaybeRecord_5,
  MR_Word TypeCtor_6,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12);

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
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_26,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_27,
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
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Cs0_13,
  MR_Word * Cs_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_24,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27);

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
parse_tree__equiv_type____Unify____equiv_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____equiv_params_0_0_10001(
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


static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[101][2];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[4][3];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[8][13];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[2][14];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[3][5];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_7[8][12];




static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[101][2] = {
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
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: circular type expansion"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the representation of solver type"))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In type declaration for"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to be a"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "with_type"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: expected the type after"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[21])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "higher order"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type,"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it is not."))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but the declaration"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has a \140with_inst\140 annotation,"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the declaration"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not specify"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the mode of any of the other arguments."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "However,"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "accompanied by a \140with_type\140 annotation."))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the \140with_inst\140 annotation must be"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is missing."))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "this \140with_type\140 annotation"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "accompanied by a \140with_inst\140 annotation."))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[43])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the \140with_type\140 annotation must be"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[53])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the mode of each argument, so"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the declaration specifies"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[57])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "this \140with_inst\140 annotation"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[49])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "annotations are"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[62]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the \140with_type\140 and \140with_inst\140"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[63])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "incompatible,"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because they specify"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the declaration of"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "with_inst"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[17])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: expected the inst after"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[77])))
  },
  /* row  80 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[79])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[80])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inst,"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[83]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: equivalence type"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "circular."))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[91]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because its expansion contains the"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot have its equivalences fully expanded,"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[94])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "circular equivalence type"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[97]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "circular equivalence types"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[99]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[4][3] = {
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
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[2])),
    ((MR_Box) (parse_tree__equiv_type__replace_in_type_report_circular_eqvs_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[8][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__equiv_type__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
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

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[2][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
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

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[3][5] = {
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

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_7[8][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0)),
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
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0)),
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
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0)),
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
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0)),
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
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0)),
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
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)
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

static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_TypeInfo) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_equiv_params_0_0[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0),
  (MR_PseudoTypeInfo) (&parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0)
};

static const MR_ConstString parse_tree__equiv_type__parse_tree__equiv_type__field_names_equiv_params_0_0[3] = {
  (MR_String) "ep_module_name",
  (MR_String) "ep_type_eqv_map",
  (MR_String) "ep_inst_eqv_map"
};

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_equiv_params_0_0 = {
  (MR_String) "equiv_params",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__equiv_type__parse_tree__equiv_type__field_types_equiv_params_0_0,
  parse_tree__equiv_type__parse_tree__equiv_type__field_names_equiv_params_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_equiv_params_0_0[1] = { &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_equiv_params_0_0 };

static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_equiv_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_equiv_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_equiv_params_0[1] = { &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_equiv_params_0_0 };

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_equiv_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_equiv_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__equiv_type____Unify____equiv_params_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____equiv_params_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "equiv_params",
  { parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_equiv_params_0 },
  { parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_equiv_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_equiv_params_0,

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

static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__report_contains_circular_eqv_type__2647__1_1_f_0(
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

static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_pred_types_and_maybe_modes__1987__1_2_p_0(
  MR_Word Types1_63,
  MR_Word HeadVar__2_159)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), ((MR_Box) (Types1_63)), ((MR_Box) (HeadVar__2_159)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_pred_types_and_maybe_modes__2007__1_2_p_0(
  MR_Word TypesAndModes1_69,
  MR_Word HeadVar__2_191)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[8]), ((MR_Box) (TypesAndModes1_69)), ((MR_Box) (HeadVar__2_191)));
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
parse_tree__equiv_type____Compare____equiv_params_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____equiv_params_0_0(
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
      TypeInfo_12_12 = (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
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

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____circ_types_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[9]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_and_mode_10_p_0(
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
  MR_Word Var_28;

  parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_11, MaybeRecord_12, (MR_Word) ((MR_Unsigned) 0U), Type0_18, &Type_20, &Var_21, &Var_28, STATE_VARIABLE_TVarSet_0_22, STATE_VARIABLE_TVarSet_23, STATE_VARIABLE_ItemRecompDeps_0_24, STATE_VARIABLE_ItemRecompDeps_25, STATE_VARIABLE_UsedModules_0_26, STATE_VARIABLE_UsedModules_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TypeAndMode_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Type_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (Mode_19));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Constraint0_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_TVarSet_0_23,
  MR_Word * STATE_VARIABLE_TVarSet_24,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_25,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_26,
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
  parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_11, MaybeRecord_12, (MR_Word) ((MR_Unsigned) 0U), ArgTypes0_19, &ArgTypes_20, &Var_21, Var_30, &Var_22, STATE_VARIABLE_TVarSet_0_23, STATE_VARIABLE_TVarSet_24, STATE_VARIABLE_ItemRecompDeps_0_25, STATE_VARIABLE_ItemRecompDeps_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Constraint_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypes_20));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
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
    MR_Word Var_27;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_10, MaybeRecord_11, (MR_Word) ((MR_Unsigned) 0U), Type0_19, &Type_20, &Var_21, &Var_27, TVarSet_12, &Var_22, STATE_VARIABLE_ItemRecompDeps_0_23, STATE_VARIABLE_ItemRecompDeps_24, STATE_VARIABLE_UsedModules_0_25, STATE_VARIABLE_UsedModules_26);
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
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_24;
  MR_Word conv0_STATE_VARIABLE_UsedModules_26;

  parse_tree__equiv_type__replace_in_unit_selector_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Sel_14, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ItemRecompDeps_24, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_UsedModules_26);
  *wrapper_arg_2 = ((MR_Box) (conv2_Sel_14));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_24));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_26));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
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
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[7]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (TypeEqvMap_10));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (MaybeRecord_11));
    MR_hl_field(0, Var_28, 5) = ((MR_Box) (TVarSet_12));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_28, Sel0_26, &Sel_27, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_0_19)), &conv4_STATE_VARIABLE_ItemRecompDeps_1_23, ((MR_Box) (STATE_VARIABLE_UsedModules_0_21)), &conv3_STATE_VARIABLE_UsedModules_1_24);
  STATE_VARIABLE_ItemRecompDeps_1_23 = ((MR_Word) (conv4_STATE_VARIABLE_ItemRecompDeps_1_23));
  STATE_VARIABLE_UsedModules_1_24 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_1_24));
  {
    SSA_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SSA_15, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, SSA_15, 1) = ((MR_Box) (Sel_27));
  }
  Var_32 = ((MR_Word) ((MR_hl_field(0, SSB0_14, 0))));
  Sel0_33 = ((MR_Word) ((MR_hl_field(0, SSB0_14, 1))));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_28, Sel0_33, &Sel_34, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_1_23)), &conv6_STATE_VARIABLE_ItemRecompDeps_20, ((MR_Box) (STATE_VARIABLE_UsedModules_1_24)), &conv5_STATE_VARIABLE_UsedModules_22);
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
parse_tree__equiv_type__replace_in_var_or_ground_type_location_10_p_0(
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
    MR_Word Var_36;
    MR_Word GroundType_24;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_11, MaybeRecord_12, (MR_Word) ((MR_Unsigned) 0U), Type0_21, &Type_22, &Var_23, &Var_36, STATE_VARIABLE_TVarSet_0_25, STATE_VARIABLE_TVarSet_26, STATE_VARIABLE_ItemRecompDeps_0_27, STATE_VARIABLE_ItemRecompDeps_28, STATE_VARIABLE_UsedModules_0_29, STATE_VARIABLE_UsedModules_30);
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.equiv_type.replace_in_var_or_ground_type_location\'/10", (MR_String) "expanded ground type is not ground");
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
parse_tree__equiv_type__replace_in_subst_10_p_0(
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

  parse_tree__equiv_type__replace_in_tvar_substs_12_p_0(TypeEqvMap_11, MaybeRecord_12, HeadSubst0_18, &HeadSubst_20, TailSubsts0_19, &TailSubsts_21, STATE_VARIABLE_TVarSet_0_22, STATE_VARIABLE_TVarSet_23, STATE_VARIABLE_ItemRecompDeps_0_24, STATE_VARIABLE_ItemRecompDeps_25, STATE_VARIABLE_UsedModules_0_26, STATE_VARIABLE_UsedModules_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Subst_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadSubst_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (TailSubsts_21));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_class_decl_10_p_0(
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
    MR_Word PredName_62 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_39, 0))));
    MR_Word WithInst0_63 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_39, 3))));
    MR_Word MaybeDetism0_64 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_39, 4))));
    MR_Word InstVarSet_65 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_39, 5))));
    MR_Word Context_66 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_39, 6))));
    MR_Word WithInst_67;
    MR_Word MaybeDetism_68;
    MR_Word NewSpecs_69;

    PredFormArity_42 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_41);
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_119_105_116_104_95_105_110_115_116_95_95_91_50_93_95_48_18_p_0(Params_11, PredName_62, PredFormArity_42, Context_66, (MR_Integer) 1, MaybePredOrFunc0_40, &MaybePredOrFunc_43, WithInst0_63, &WithInst_67, &ExtraModes_44, MaybeDetism0_64, &MaybeDetism_68, STATE_VARIABLE_ItemRecompDeps_0_49, STATE_VARIABLE_ItemRecompDeps_50, STATE_VARIABLE_UsedModules_0_51, STATE_VARIABLE_UsedModules_52, &NewSpecs_69);
    if ((ExtraModes_44 == (MR_Word) ((MR_Unsigned) 0U)))
      Modes_45 = Modes0_41;
    else
      Modes_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_41, ExtraModes_44);
    *STATE_VARIABLE_Specs_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_69, STATE_VARIABLE_Specs_0_53);
    {
      ModeInfo_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModeInfo_48, 0) = ((MR_Box) (PredName_62));
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
    MR_Word PredName_19 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_18, 0))));
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

    parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_22_p_0(Params_11, MaybeRecord_12, PredName_19, PredOrFunc_20, Context_30, ClassContext0_29, &ClassContext_31, TypesAndModes0_21, &TypesAndModes_32, TVarSet0_25, &TVarSet_33, WithType0_22, &WithType_34, WithInst0_23, &WithInst_35, MaybeDetism0_24, &MaybeDetism_36, STATE_VARIABLE_ItemRecompDeps_0_49, STATE_VARIABLE_ItemRecompDeps_50, STATE_VARIABLE_UsedModules_0_51, STATE_VARIABLE_UsedModules_52, &NewSpecs_37);
    *STATE_VARIABLE_Specs_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_37, STATE_VARIABLE_Specs_0_53);
    {
      PredOrFuncInfo_38 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PredOrFuncInfo_38, 0) = ((MR_Box) (PredName_19));
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
parse_tree__equiv_type__replace_in_type_repn_info_10_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), ArgTypeVars_19, &Arity_25);
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
          Var_99 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[90])));
          Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_99, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])));
          Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[88])), Var_98);
          Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, Var_93);
          Pieces_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[86])), Var_88);
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_64, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type.report_circular_eqv_type\'/2"));
            MR_hl_field(0, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Unsigned) 48U));
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

          Var_70 = parse_tree__equiv_type__report_circular_eqv_type_2_f_0(TypeCtor_72, Context_22);
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
  Var_23 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[90])));
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])));
  Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[88])), Var_22);
  Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_13, Var_17);
  Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[86])), Var_12);
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
parse_tree__equiv_type__replace_in_type_ctor_checked_defn_11_p_0(
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

      parse_tree__equiv_type__replace_in_type_defn_info_general__ho8_10_p_0(Params_12, MaybeRecordImp_14, ItemSolverDefn0_26, &ItemSolverDefn_27, STATE_VARIABLE_RecompInfo_0_58, &STATE_VARIABLE_RecompInfo_1_65, STATE_VARIABLE_UsedModules_0_60, &STATE_VARIABLE_UsedModules_1_66, &SolverSpecs_28);
      STATE_VARIABLE_Specs_1_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SolverSpecs_28, STATE_VARIABLE_Specs_0_62);
      {
        SolverDefn_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SolverDefn_24, 0) = ((MR_Box) (MaybeAbstractDefn0_25));
        MR_hl_field(1, SolverDefn_24, 1) = ((MR_Box) (ItemSolverDefn_27));
      }
    }
    MaybeIntDefn0_29 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_21, 0))));
    MaybeImpDefn0_30 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_21, 1))));
    parse_tree__equiv_type__replace_in_maybe__ho4_11_p_0(Params_12, MaybeRecordInt_13, MaybeIntDefn0_29, &MaybeIntDefn_31, STATE_VARIABLE_RecompInfo_1_65, &STATE_VARIABLE_RecompInfo_2_69, STATE_VARIABLE_UsedModules_1_66, &STATE_VARIABLE_UsedModules_2_70, STATE_VARIABLE_Specs_1_67, &STATE_VARIABLE_Specs_2_71);
    parse_tree__equiv_type__replace_in_maybe__ho3_11_p_0(Params_12, MaybeRecordImp_14, MaybeImpDefn0_30, &MaybeImpDefn_32, STATE_VARIABLE_RecompInfo_2_69, STATE_VARIABLE_RecompInfo_59, STATE_VARIABLE_UsedModules_2_70, STATE_VARIABLE_UsedModules_61, STATE_VARIABLE_Specs_2_71, STATE_VARIABLE_Specs_63);
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

          parse_tree__equiv_type__replace_in_type_defn_info_general__ho7_10_p_0(Params_12, MaybeRecordImp_14, ItemEqvDefn0_36, &ItemEqvDefn_37, STATE_VARIABLE_RecompInfo_0_58, &STATE_VARIABLE_RecompInfo_4_79, STATE_VARIABLE_UsedModules_0_60, &STATE_VARIABLE_UsedModules_4_80, &EqvSpecs_38);
          STATE_VARIABLE_Specs_4_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EqvSpecs_38, STATE_VARIABLE_Specs_0_62);
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

          parse_tree__equiv_type__replace_in_type_defn_info_general__ho6_10_p_0(Params_12, MaybeRecordImp_14, ItemSubDefn0_40, &ItemSubDefn_41, STATE_VARIABLE_RecompInfo_0_58, &STATE_VARIABLE_RecompInfo_4_79, STATE_VARIABLE_UsedModules_0_60, &STATE_VARIABLE_UsedModules_4_80, &SubSpecs_42);
          STATE_VARIABLE_Specs_4_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SubSpecs_42, STATE_VARIABLE_Specs_0_62);
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

          parse_tree__equiv_type__replace_in_type_defn_info_general__ho5_10_p_0(Params_12, MaybeRecordImp_14, ItemDuDefn0_43, &ItemDuDefn_47, STATE_VARIABLE_RecompInfo_0_58, &STATE_VARIABLE_RecompInfo_4_79, STATE_VARIABLE_UsedModules_0_60, &STATE_VARIABLE_UsedModules_4_80, &DuSpecs_48);
          STATE_VARIABLE_Specs_4_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), DuSpecs_48, STATE_VARIABLE_Specs_0_62);
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

              parse_tree__equiv_type__replace_in_type_defn_info_general__ho5_10_p_0(Params_12, MaybeRecordImp_14, ItemDuDefn0_107, &ItemDuDefn_108, STATE_VARIABLE_RecompInfo_0_58, &STATE_VARIABLE_RecompInfo_4_79, STATE_VARIABLE_UsedModules_0_60, &STATE_VARIABLE_UsedModules_4_80, &DuSpecs_109);
              STATE_VARIABLE_Specs_4_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), DuSpecs_109, STATE_VARIABLE_Specs_0_62);
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
    parse_tree__equiv_type__replace_in_list__ho2_11_p_0(Params_12, MaybeRecordInt_13, IntDefns0_53, &IntDefns_56, STATE_VARIABLE_RecompInfo_4_79, &STATE_VARIABLE_RecompInfo_8_95, STATE_VARIABLE_UsedModules_4_80, &STATE_VARIABLE_UsedModules_8_96, STATE_VARIABLE_Specs_4_81, &STATE_VARIABLE_Specs_8_97);
    parse_tree__equiv_type__replace_in_list__ho1_11_p_0(Params_12, MaybeRecordImp_14, ImpDefns0_54, &ImpDefns_57, STATE_VARIABLE_RecompInfo_8_95, STATE_VARIABLE_RecompInfo_59, STATE_VARIABLE_UsedModules_8_96, STATE_VARIABLE_UsedModules_61, STATE_VARIABLE_Specs_8_97, STATE_VARIABLE_Specs_63);
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
parse_tree__equiv_type__replace_in_type_defn_info_general__ho8_10_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), ArgTypeVars_20, &Arity_26);
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
  parse_tree__equiv_type__replace_in_type_defn_solver_13_p_0(Params_12, MaybeRecord_13, TypeCtor_30, Context_23, TypeDefn0_21, &TypeDefn_31, TVarSet0_22, &TVarSet_32, ItemRecompDeps0_29, &ItemRecompDeps_33, STATE_VARIABLE_UsedModules_0_36, STATE_VARIABLE_UsedModules_37, Specs_18);
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
parse_tree__equiv_type__replace_in_type_defn_info_general__ho7_10_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), ArgTypeVars_20, &Arity_26);
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
  parse_tree__equiv_type__replace_in_type_defn_eqv_13_p_0(Params_12, MaybeRecord_13, TypeCtor_30, Context_23, TypeDefn0_21, &TypeDefn_31, TVarSet0_22, &TVarSet_32, ItemRecompDeps0_29, &ItemRecompDeps_33, STATE_VARIABLE_UsedModules_0_36, STATE_VARIABLE_UsedModules_37, Specs_18);
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
parse_tree__equiv_type__replace_in_type_defn_info_general__ho6_10_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), ArgTypeVars_20, &Arity_26);
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
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_115_117_98_95_95_91_51_44_32_52_93_95_48_13_p_0(Params_12, MaybeRecord_13, TypeDefn0_21, &TypeDefn_31, TVarSet0_22, &TVarSet_32, ItemRecompDeps0_29, &ItemRecompDeps_33, STATE_VARIABLE_UsedModules_0_36, STATE_VARIABLE_UsedModules_37, Specs_18);
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
parse_tree__equiv_type__replace_in_type_defn_info_general__ho5_10_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), ArgTypeVars_20, &Arity_26);
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
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_93_95_48_13_p_0(Params_12, MaybeRecord_13, TypeDefn0_21, &TypeDefn_31, TVarSet0_22, &TVarSet_32, ItemRecompDeps0_29, &ItemRecompDeps_33, STATE_VARIABLE_UsedModules_0_36, STATE_VARIABLE_UsedModules_37, Specs_18);
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
parse_tree__equiv_type__replace_in_maybe__ho4_11_p_0(
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

    parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__661__1__ho31_10_p_0(Params_12, MaybeRecord_13, Item0_20, &Item_21, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, &ItemSpecs_22);
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
      *STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_22, STATE_VARIABLE_Specs_0_29);
      *MaybeItem_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__661__1__ho31_10_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), ArgTypeVars_139, &Arity_145);
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
  parse_tree__equiv_type__replace_in_type_defn_13_p_0(HeadVar__2_127, HeadVar__3_128, TypeCtor_149, Context_142, TypeDefn0_140, &TypeDefn_150, TVarSet0_141, &TVarSet_151, ItemRecompDeps0_148, &ItemRecompDeps_152, HeadVar__8_133, HeadVar__9_134, HeadVar__10_135);
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
parse_tree__equiv_type__replace_in_maybe__ho3_11_p_0(
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

    parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__664__1__ho32_10_p_0(Params_12, MaybeRecord_13, Item0_20, &Item_21, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, &ItemSpecs_22);
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
      *STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_22, STATE_VARIABLE_Specs_0_29);
      *MaybeItem_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__664__1__ho32_10_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), ArgTypeVars_163, &Arity_169);
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
  parse_tree__equiv_type__replace_in_type_defn_13_p_0(HeadVar__2_151, HeadVar__3_152, TypeCtor_173, Context_166, TypeDefn0_164, &TypeDefn_174, TVarSet0_165, &TVarSet_175, ItemRecompDeps0_172, &ItemRecompDeps_176, HeadVar__8_157, HeadVar__9_158, HeadVar__10_159);
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
parse_tree__equiv_type__replace_in_list__ho2_11_p_0(
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

  parse_tree__equiv_type__replace_in_list_loop__ho33_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[4]), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho33_12_p_0(
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

      parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__714__1__ho36_10_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
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
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__714__1__ho36_10_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), ArgTypeVars_246, &Arity_252);
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
  parse_tree__equiv_type__replace_in_type_defn_13_p_0(HeadVar__2_234, HeadVar__3_235, TypeCtor_256, Context_249, TypeDefn0_247, &TypeDefn_257, TVarSet0_248, &TVarSet_258, ItemRecompDeps0_255, &ItemRecompDeps_259, HeadVar__8_240, HeadVar__9_241, HeadVar__10_242);
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
parse_tree__equiv_type__replace_in_list__ho1_11_p_0(
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

  parse_tree__equiv_type__replace_in_list_loop__ho34_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[4]), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho34_12_p_0(
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

      parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__717__1__ho35_10_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
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
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__717__1__ho35_10_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), ArgTypeVars_270, &Arity_276);
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
  parse_tree__equiv_type__replace_in_type_defn_13_p_0(HeadVar__2_258, HeadVar__3_259, TypeCtor_280, Context_273, TypeDefn0_271, &TypeDefn_281, TVarSet0_272, &TVarSet_282, ItemRecompDeps0_279, &ItemRecompDeps_283, HeadVar__8_264, HeadVar__9_265, HeadVar__10_266);
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
parse_tree__equiv_type__replace_in_parse_tree_trans_opt_9_p_0(
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
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_9_p_0(ParseTreeTransOpt_11, ParseTreeTransOpt_3, RecompInfo_12, RecompInfo_5, UsedModules_13, UsedModules_7, Specs_14, Specs_9);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_9_p_0(
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
parse_tree__equiv_type__replace_in_parse_tree_plain_opt_9_p_0(
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

  parse_tree__equiv_type__replace_in_list_loop__ho25_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), TypeDefns0_21, (MR_Word) ((MR_Unsigned) 0U), &RevItems_154, STATE_VARIABLE_RecompInfo_0_51, &STATE_VARIABLE_RecompInfo_1_58, STATE_VARIABLE_UsedModules_0_53, &STATE_VARIABLE_UsedModules_1_59, STATE_VARIABLE_Specs_0_55, &STATE_VARIABLE_Specs_1_60);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[4]), RevItems_154, &TypeDefns_45);
  parse_tree__equiv_type__replace_in_list_loop__ho26_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), TypeClasses0_25, (MR_Word) ((MR_Unsigned) 0U), &RevItems_159, STATE_VARIABLE_RecompInfo_1_58, &STATE_VARIABLE_RecompInfo_2_63, STATE_VARIABLE_UsedModules_1_59, &STATE_VARIABLE_UsedModules_2_64, STATE_VARIABLE_Specs_1_60, &STATE_VARIABLE_Specs_2_65);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_159, &TypeClasses_46);
  parse_tree__equiv_type__replace_in_list_loop__ho27_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), Instances0_26, (MR_Word) ((MR_Unsigned) 0U), &RevItems_163, STATE_VARIABLE_RecompInfo_2_63, &STATE_VARIABLE_RecompInfo_3_67, STATE_VARIABLE_UsedModules_2_64, &STATE_VARIABLE_UsedModules_3_68, STATE_VARIABLE_Specs_2_65, &STATE_VARIABLE_Specs_3_69);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevItems_163, &Instances_47);
  parse_tree__equiv_type__replace_in_list_loop__ho28_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), PredDecls0_27, (MR_Word) ((MR_Unsigned) 0U), &RevItems_167, STATE_VARIABLE_RecompInfo_3_67, &STATE_VARIABLE_RecompInfo_4_71, STATE_VARIABLE_UsedModules_3_68, &STATE_VARIABLE_UsedModules_4_72, STATE_VARIABLE_Specs_3_69, &STATE_VARIABLE_Specs_4_73);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevItems_167, &PredDecls_48);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_93_95_48_11_p_0(Params_10, ModeDecls0_28, &ModeDecls_49, STATE_VARIABLE_RecompInfo_4_71, &STATE_VARIABLE_RecompInfo_5_75, STATE_VARIABLE_UsedModules_4_72, &STATE_VARIABLE_UsedModules_5_76, STATE_VARIABLE_Specs_4_73, &STATE_VARIABLE_Specs_5_77);
  parse_tree__equiv_type__replace_in_list__ho9_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), TypeSpecs0_34, &TypeSpecs_50, STATE_VARIABLE_RecompInfo_5_75, STATE_VARIABLE_RecompInfo_52, STATE_VARIABLE_UsedModules_5_76, STATE_VARIABLE_UsedModules_54, STATE_VARIABLE_Specs_5_77, STATE_VARIABLE_Specs_56);
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
parse_tree__equiv_type__replace_in_list_loop__ho25_12_p_0(
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

      parse_tree__equiv_type__IntroducedFrom__pred__replace_in_parse_tree_plain_opt__594__1__ho38_10_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
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
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_parse_tree_plain_opt__594__1__ho38_10_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), ArgTypeVars_91, &Arity_97);
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
  parse_tree__equiv_type__replace_in_type_defn_13_p_0(HeadVar__2_79, HeadVar__3_80, TypeCtor_101, Context_94, TypeDefn0_92, &TypeDefn_102, TVarSet0_93, &TVarSet_103, ItemRecompDeps0_100, &ItemRecompDeps_104, HeadVar__8_85, HeadVar__9_86, HeadVar__10_87);
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
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
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

        parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_93_95_48_13_p_0(Params_14, MaybeRecord_15, DetailsDu0_26, &DetailsDu_27, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_ItemRecompDeps_0_36, STATE_VARIABLE_ItemRecompDeps_37, STATE_VARIABLE_UsedModules_0_38, STATE_VARIABLE_UsedModules_39, Specs_23);
        *TypeDefn_19 = (MR_Word) ((MR_Word) (DetailsDu_27));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetailsSub0_28 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_18), (MR_Integer) 1));
        MR_Word DetailsSub_29;

        parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_115_117_98_95_95_91_51_44_32_52_93_95_48_13_p_0(Params_14, MaybeRecord_15, DetailsSub0_28, &DetailsSub_29, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_ItemRecompDeps_0_36, STATE_VARIABLE_ItemRecompDeps_37, STATE_VARIABLE_UsedModules_0_38, STATE_VARIABLE_UsedModules_39, Specs_23);
        *TypeDefn_19 = (MR_Word) (MR_mkword(1, (MR_Word) (DetailsSub_29)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DetailsSolver0_30 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_18), (MR_Integer) 2));
        MR_Word DetailsSolver_31;

        parse_tree__equiv_type__replace_in_type_defn_solver_13_p_0(Params_14, MaybeRecord_15, TypeCtor_16, Context_17, DetailsSolver0_30, &DetailsSolver_31, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_ItemRecompDeps_0_36, STATE_VARIABLE_ItemRecompDeps_37, STATE_VARIABLE_UsedModules_0_38, STATE_VARIABLE_UsedModules_39, Specs_23);
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

            parse_tree__equiv_type__replace_in_type_defn_eqv_13_p_0(Params_14, MaybeRecord_15, TypeCtor_16, Context_17, DetailsEqv0_24, &DetailsEqv_25, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_ItemRecompDeps_0_36, STATE_VARIABLE_ItemRecompDeps_37, STATE_VARIABLE_UsedModules_0_38, STATE_VARIABLE_UsedModules_39, Specs_23);
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_115_117_98_95_95_91_51_44_32_52_93_95_48_13_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_37;
  MR_Word conv0_STATE_VARIABLE_UsedModules_39;

  parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Ctor_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_35, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_37, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_39);
  *wrapper_arg_2 = ((MR_Box) (conv3_Ctor_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_35));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_37));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_39));
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_115_117_98_95_95_91_51_44_32_52_93_95_48_13_p_0(
  MR_Word Params_14,
  MR_Word MaybeRecord_15,
  MR_Word DetailsSub0_18,
  MR_Word * DetailsSub_19,
  MR_Word STATE_VARIABLE_TVarSet_0_30,
  MR_Word * STATE_VARIABLE_TVarSet_31,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_32,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_33,
  MR_Word STATE_VARIABLE_UsedModules_0_34,
  MR_Word * STATE_VARIABLE_UsedModules_35,
  MR_Word * Specs_23)
{
  MR_Word SuperType0_24 = ((MR_Word) ((MR_hl_field(0, DetailsSub0_18, 0))));
  MR_Word Ctors0_25 = ((MR_Word) ((MR_hl_field(0, DetailsSub0_18, 1))));
  MR_Word TypeEqvMap_26 = ((MR_Word) ((MR_hl_field(0, Params_14, 1))));
  MR_Word SuperType_27;
  MR_Word Ctors_29;
  MR_Word STATE_VARIABLE_TVarSet_1_36;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_37;
  MR_Word STATE_VARIABLE_UsedModules_1_38;
  MR_Word HeadCtor0_43;
  MR_Word TailCtors0_44;
  MR_Word HeadCtor_45;
  MR_Word TailCtors_46;
  MR_Word STATE_VARIABLE_TVarSet_1_47;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_48;
  MR_Word STATE_VARIABLE_UsedModules_1_49;
  MR_Word Var_50;
  MR_Word Var_28;
  MR_Word Var_41;
  MR_Box conv6_STATE_VARIABLE_TVarSet_31;
  MR_Box conv5_STATE_VARIABLE_ItemRecompDeps_33;
  MR_Box conv4_STATE_VARIABLE_UsedModules_35;

  parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_26, MaybeRecord_15, (MR_Word) ((MR_Unsigned) 0U), SuperType0_24, &SuperType_27, &Var_28, &Var_41, STATE_VARIABLE_TVarSet_0_30, &STATE_VARIABLE_TVarSet_1_36, STATE_VARIABLE_ItemRecompDeps_0_32, &STATE_VARIABLE_ItemRecompDeps_1_37, STATE_VARIABLE_UsedModules_0_34, &STATE_VARIABLE_UsedModules_1_38);
  HeadCtor0_43 = ((MR_Word) ((MR_hl_field(0, Ctors0_25, 0))));
  TailCtors0_44 = ((MR_Word) ((MR_hl_field(0, Ctors0_25, 1))));
  parse_tree__equiv_type__replace_in_ctor_10_p_0(TypeEqvMap_26, MaybeRecord_15, HeadCtor0_43, &HeadCtor_45, STATE_VARIABLE_TVarSet_1_36, &STATE_VARIABLE_TVarSet_1_47, STATE_VARIABLE_ItemRecompDeps_1_37, &STATE_VARIABLE_ItemRecompDeps_1_48, STATE_VARIABLE_UsedModules_1_38, &STATE_VARIABLE_UsedModules_1_49);
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[6]));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_115_117_98_95_95_91_51_44_32_52_93_95_48_13_p_0_1));
    MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_50, 3) = ((MR_Box) (TypeEqvMap_26));
    MR_hl_field(0, Var_50, 4) = ((MR_Box) (MaybeRecord_15));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_50, TailCtors0_44, &TailCtors_46, ((MR_Box) (STATE_VARIABLE_TVarSet_1_47)), &conv6_STATE_VARIABLE_TVarSet_31, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_1_48)), &conv5_STATE_VARIABLE_ItemRecompDeps_33, ((MR_Box) (STATE_VARIABLE_UsedModules_1_49)), &conv4_STATE_VARIABLE_UsedModules_35);
  *STATE_VARIABLE_TVarSet_31 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_31));
  *STATE_VARIABLE_ItemRecompDeps_33 = ((MR_Word) (conv5_STATE_VARIABLE_ItemRecompDeps_33));
  *STATE_VARIABLE_UsedModules_35 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_35));
  {
    Ctors_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Ctors_29, 0) = ((MR_Box) (HeadCtor_45));
    MR_hl_field(0, Ctors_29, 1) = ((MR_Box) (TailCtors_46));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DetailsSub_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SuperType_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Ctors_29));
  }
  *Specs_23 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_93_95_48_13_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_37;
  MR_Word conv0_STATE_VARIABLE_UsedModules_39;

  parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Ctor_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_35, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_37, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_39);
  *wrapper_arg_2 = ((MR_Box) (conv3_Ctor_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_35));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_37));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_39));
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_93_95_48_13_p_0(
  MR_Word Params_14,
  MR_Word MaybeRecord_15,
  MR_Word DetailsDu0_18,
  MR_Word * DetailsDu_19,
  MR_Word STATE_VARIABLE_TVarSet_0_29,
  MR_Word * STATE_VARIABLE_TVarSet_30,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_31,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_32,
  MR_Word STATE_VARIABLE_UsedModules_0_33,
  MR_Word * STATE_VARIABLE_UsedModules_34,
  MR_Word * Specs_23)
{
  MR_Word Ctors0_24 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_18, 0))));
  MR_Word MaybeCanon_25 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_18, 1))));
  MR_Word DirectArgFunctors_26 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_18, 2))));
  MR_Word TypeEqvMap_27 = ((MR_Word) ((MR_hl_field(0, Params_14, 1))));
  MR_Word Ctors_28;
  MR_Word HeadCtor0_37 = ((MR_Word) ((MR_hl_field(0, Ctors0_24, 0))));
  MR_Word TailCtors0_38 = ((MR_Word) ((MR_hl_field(0, Ctors0_24, 1))));
  MR_Word HeadCtor_39;
  MR_Word TailCtors_40;
  MR_Word STATE_VARIABLE_TVarSet_1_41;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_42;
  MR_Word STATE_VARIABLE_UsedModules_1_43;
  MR_Word Var_44;
  MR_Box conv6_STATE_VARIABLE_TVarSet_30;
  MR_Box conv5_STATE_VARIABLE_ItemRecompDeps_32;
  MR_Box conv4_STATE_VARIABLE_UsedModules_34;

  parse_tree__equiv_type__replace_in_ctor_10_p_0(TypeEqvMap_27, MaybeRecord_15, HeadCtor0_37, &HeadCtor_39, STATE_VARIABLE_TVarSet_0_29, &STATE_VARIABLE_TVarSet_1_41, STATE_VARIABLE_ItemRecompDeps_0_31, &STATE_VARIABLE_ItemRecompDeps_1_42, STATE_VARIABLE_UsedModules_0_33, &STATE_VARIABLE_UsedModules_1_43);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[6]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_93_95_48_13_p_0_1));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (TypeEqvMap_27));
    MR_hl_field(0, Var_44, 4) = ((MR_Box) (MaybeRecord_15));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_44, TailCtors0_38, &TailCtors_40, ((MR_Box) (STATE_VARIABLE_TVarSet_1_41)), &conv6_STATE_VARIABLE_TVarSet_30, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_1_42)), &conv5_STATE_VARIABLE_ItemRecompDeps_32, ((MR_Box) (STATE_VARIABLE_UsedModules_1_43)), &conv4_STATE_VARIABLE_UsedModules_34);
  *STATE_VARIABLE_TVarSet_30 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_30));
  *STATE_VARIABLE_ItemRecompDeps_32 = ((MR_Word) (conv5_STATE_VARIABLE_ItemRecompDeps_32));
  *STATE_VARIABLE_UsedModules_34 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_34));
  {
    Ctors_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Ctors_28, 0) = ((MR_Box) (HeadCtor_39));
    MR_hl_field(0, Ctors_28, 1) = ((MR_Box) (TailCtors_40));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *DetailsDu_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Ctors_28));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeCanon_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (DirectArgFunctors_26));
  }
  *Specs_23 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_solver_13_p_0(
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
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[14])));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[11])));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
    }
    {
      Pieces_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_37, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[10])));
      MR_hl_field(1, Pieces_37, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_64, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type.replace_in_type_defn_solver\'/13"));
      MR_hl_field(0, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Unsigned) 48U));
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
  parse_tree__equiv_type__replace_in_constraint_store_8_p_0(Params_14, MaybeRecord_15, MutableInfos0_29, &MutableInfos_38, STATE_VARIABLE_ItemRecompDeps_1_48, STATE_VARIABLE_ItemRecompDeps_43, STATE_VARIABLE_UsedModules_1_49, STATE_VARIABLE_UsedModules_45);
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
parse_tree__equiv_type__replace_in_constraint_store_8_p_0(
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
    MR_Word Inst_46;
    MR_Word STATE_VARIABLE_ItemRecompDeps_1_47;
    MR_Word STATE_VARIABLE_UsedModules_1_48;
    MR_Word InstEqvMap_54;
    MR_Word Var_55;
    MR_Word _TypeChanged_44;
    MR_Word _TVarSet_45;
    MR_Word Var_52;

    TVarSet0_42 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_41, MaybeRecord_2, (MR_Word) ((MR_Unsigned) 0U), Type0_33, &Type_43, &_TypeChanged_44, &Var_52, TVarSet0_42, &_TVarSet_45, STATE_VARIABLE_ItemRecompDeps_0_5, &STATE_VARIABLE_ItemRecompDeps_1_47, STATE_VARIABLE_UsedModules_0_7, &STATE_VARIABLE_UsedModules_1_48);
    InstEqvMap_54 = ((MR_Word) ((MR_hl_field(0, Params_1, 2))));
    Var_55 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0));
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(InstEqvMap_54, Var_55, Inst0_35, &Inst_46, STATE_VARIABLE_ItemRecompDeps_1_47, &STATE_VARIABLE_ItemRecompDeps_1_29, STATE_VARIABLE_UsedModules_1_48, &STATE_VARIABLE_UsedModules_1_30);
    {
      MutableInfo_21 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MutableInfo_21, 0) = ((MR_Box) (MutName_31));
      MR_hl_field(0, MutableInfo_21, 1) = ((MR_Box) (OrigType_32));
      MR_hl_field(0, MutableInfo_21, 2) = ((MR_Box) (Type_43));
      MR_hl_field(0, MutableInfo_21, 3) = ((MR_Box) (OrigInst_34));
      MR_hl_field(0, MutableInfo_21, 4) = ((MR_Box) (Inst_46));
      MR_hl_field(0, MutableInfo_21, 5) = ((MR_Box) (InitValue_36));
      MR_hl_field(0, MutableInfo_21, 6) = ((MR_Box) (Attrs_37));
      MR_hl_field(0, MutableInfo_21, 7) = ((MR_Box) (Varset_38));
      MR_hl_field(0, MutableInfo_21, 8) = ((MR_Box) (Context_39));
      MR_hl_field(0, MutableInfo_21, 9) = ((MR_Box) (SeqNum_40));
    }
    parse_tree__equiv_type__replace_in_constraint_store_8_p_0(Params_1, MaybeRecord_2, MutableInfos0_20, &MutableInfos_22, STATE_VARIABLE_ItemRecompDeps_1_29, STATE_VARIABLE_ItemRecompDeps_6, STATE_VARIABLE_UsedModules_1_30, STATE_VARIABLE_UsedModules_8);
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
parse_tree__equiv_type__replace_in_type_defn_eqv_13_p_0(
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
    Var_64 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[90])));
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])));
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[88])), Var_63);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_58);
    Pieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[86])), Var_53);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_43, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type.report_circular_eqv_type\'/2"));
      MR_hl_field(0, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Unsigned) 48U));
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
parse_tree__equiv_type__replace_in_list__ho9_11_p_0(
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

  parse_tree__equiv_type__replace_in_list_loop__ho30_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho30_12_p_0(
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

      parse_tree__equiv_type__replace_in_decl_pragma_type_spec_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
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
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
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
parse_tree__equiv_type__replace_in_int_for_opt_spec_9_p_0_2(
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

  parse_tree__equiv_type__replace_in_type_repn_info_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_TypeRepnInfo_14, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_54, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_56, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_58);
  *wrapper_arg_2 = ((MR_Box) (conv10_TypeRepnInfo_14));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_54));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_56));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_58));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_int_for_opt_spec_9_p_0_1(
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

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_59, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_61, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_63);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_59));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_61));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_63));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_int_for_opt_spec_9_p_0(
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

        parse_tree__equiv_type__replace_in_parse_tree_int0_9_p_0(Params_10, OrigParseTree0_16, &ParseTree0_18, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
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
        MR_Word ReadWhy1_20 = ((MR_Unsigned) ((MR_hl_field(1, IntForOptSpec0_11, 1))) & (MR_Integer) 7);
        MR_Word ParseTree1_21;

        parse_tree__equiv_type__replace_in_parse_tree_int1_9_p_0(Params_10, OrigParseTree1_19, &ParseTree1_21, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
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
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[1]));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_int_for_opt_spec_9_p_0_1));
          MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_50, 3) = ((MR_Box) (Params_10));
          MR_hl_field(0, Var_50, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_50, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_50, TypeCtorCheckedMap0_40, &TypeCtorCheckedMap_44, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_25)), &conv6_STATE_VARIABLE_RecompInfo_1_51, ((MR_Box) (STATE_VARIABLE_UsedModules_0_27)), &conv5_STATE_VARIABLE_UsedModules_1_52, ((MR_Box) (STATE_VARIABLE_Specs_0_29)), &conv4_STATE_VARIABLE_Specs_1_53);
        STATE_VARIABLE_RecompInfo_1_51 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_51));
        STATE_VARIABLE_UsedModules_1_52 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_52));
        STATE_VARIABLE_Specs_1_53 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_53));
        parse_tree__equiv_type__replace_in_list_loop__ho26_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntTypeClasses0_41, (MR_Word) ((MR_Unsigned) 0U), &RevItems_72, STATE_VARIABLE_RecompInfo_1_51, &STATE_VARIABLE_RecompInfo_2_55, STATE_VARIABLE_UsedModules_1_52, &STATE_VARIABLE_UsedModules_2_56, STATE_VARIABLE_Specs_1_53, &STATE_VARIABLE_Specs_2_57);
        mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_72, &IntTypeClasses_47);
        parse_tree__equiv_type__replace_in_list_loop__ho24_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntInstances0_42, (MR_Word) ((MR_Unsigned) 0U), &RevItems_76, STATE_VARIABLE_RecompInfo_2_55, &STATE_VARIABLE_RecompInfo_3_59, STATE_VARIABLE_UsedModules_2_56, &STATE_VARIABLE_UsedModules_3_60, STATE_VARIABLE_Specs_2_57, &STATE_VARIABLE_Specs_3_61);
        mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), RevItems_76, &IntInstances_48);
        {
          Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_62, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[7]));
          MR_hl_field(0, Var_62, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_int_for_opt_spec_9_p_0_2));
          MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_62, 3) = ((MR_Box) (Params_10));
          MR_hl_field(0, Var_62, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_62, IntTypeRepnMap0_43, &IntTypeRepnMap_49, ((MR_Box) (STATE_VARIABLE_RecompInfo_3_59)), &conv13_STATE_VARIABLE_RecompInfo_26, ((MR_Box) (STATE_VARIABLE_UsedModules_3_60)), &conv12_STATE_VARIABLE_UsedModules_28, ((MR_Box) (STATE_VARIABLE_Specs_3_61)), &conv11_STATE_VARIABLE_Specs_30);
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
parse_tree__equiv_type__replace_in_parse_tree_int1_9_p_0_2(
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

  parse_tree__equiv_type__replace_in_type_repn_info_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_TypeRepnInfo_14, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_54, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_56, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_58);
  *wrapper_arg_2 = ((MR_Box) (conv10_TypeRepnInfo_14));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_54));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_56));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_58));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_int1_9_p_0_1(
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

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_59, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_61, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_63);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_59));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_61));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_63));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_int1_9_p_0(
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
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[1]));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_parse_tree_int1_9_p_0_1));
    MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_53, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_53, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_53, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_53, TypeCtorCheckedMap0_25, &TypeCtorCheckedMap_37, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_47)), &conv6_STATE_VARIABLE_RecompInfo_1_54, ((MR_Box) (STATE_VARIABLE_UsedModules_0_49)), &conv5_STATE_VARIABLE_UsedModules_1_55, ((MR_Box) (STATE_VARIABLE_Specs_0_51)), &conv4_STATE_VARIABLE_Specs_1_56);
  STATE_VARIABLE_RecompInfo_1_54 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_54));
  STATE_VARIABLE_UsedModules_1_55 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_55));
  STATE_VARIABLE_Specs_1_56 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_56));
  parse_tree__equiv_type__replace_in_list_loop__ho26_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntTypeClasses0_28, (MR_Word) ((MR_Unsigned) 0U), &RevItems_165, STATE_VARIABLE_RecompInfo_1_54, &STATE_VARIABLE_RecompInfo_2_58, STATE_VARIABLE_UsedModules_1_55, &STATE_VARIABLE_UsedModules_2_59, STATE_VARIABLE_Specs_1_56, &STATE_VARIABLE_Specs_2_60);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_165, &IntTypeClasses_40);
  parse_tree__equiv_type__replace_in_list_loop__ho24_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntInstances0_29, (MR_Word) ((MR_Unsigned) 0U), &RevItems_169, STATE_VARIABLE_RecompInfo_2_58, &STATE_VARIABLE_RecompInfo_3_62, STATE_VARIABLE_UsedModules_2_59, &STATE_VARIABLE_UsedModules_3_63, STATE_VARIABLE_Specs_2_60, &STATE_VARIABLE_Specs_3_64);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), RevItems_169, &IntInstances_41);
  parse_tree__equiv_type__replace_in_list__ho11_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntPredDecls0_30, &IntPredDecls_42, STATE_VARIABLE_RecompInfo_3_62, &STATE_VARIABLE_RecompInfo_4_66, STATE_VARIABLE_UsedModules_3_63, &STATE_VARIABLE_UsedModules_4_67, STATE_VARIABLE_Specs_3_64, &STATE_VARIABLE_Specs_4_68);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_93_95_48_11_p_0(Params_10, IntModeDecls0_31, &IntModeDecls_43, STATE_VARIABLE_RecompInfo_4_66, &STATE_VARIABLE_RecompInfo_5_70, STATE_VARIABLE_UsedModules_4_67, &STATE_VARIABLE_UsedModules_5_71, STATE_VARIABLE_Specs_4_68, &STATE_VARIABLE_Specs_5_72);
  parse_tree__equiv_type__replace_in_list__ho17_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntDeclPragmas0_32, &IntDeclPragmas_44, STATE_VARIABLE_RecompInfo_5_70, &STATE_VARIABLE_RecompInfo_6_74, STATE_VARIABLE_UsedModules_5_71, &STATE_VARIABLE_UsedModules_6_75, STATE_VARIABLE_Specs_5_72, &STATE_VARIABLE_Specs_6_76);
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[7]));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_parse_tree_int1_9_p_0_2));
    MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_77, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_77, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_77, IntTypeRepnMap0_35, &IntTypeRepnMap_45, ((MR_Box) (STATE_VARIABLE_RecompInfo_6_74)), &conv13_STATE_VARIABLE_RecompInfo_7_78, ((MR_Box) (STATE_VARIABLE_UsedModules_6_75)), &conv12_STATE_VARIABLE_UsedModules_7_79, ((MR_Box) (STATE_VARIABLE_Specs_6_76)), &conv11_STATE_VARIABLE_Specs_7_80);
  STATE_VARIABLE_RecompInfo_7_78 = ((MR_Word) (conv13_STATE_VARIABLE_RecompInfo_7_78));
  STATE_VARIABLE_UsedModules_7_79 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_7_79));
  STATE_VARIABLE_Specs_7_80 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_7_80));
  parse_tree__equiv_type__replace_in_list__ho16_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), ImpTypeClasses0_36, &ImpTypeClasses_46, STATE_VARIABLE_RecompInfo_7_78, STATE_VARIABLE_RecompInfo_48, STATE_VARIABLE_UsedModules_7_79, STATE_VARIABLE_UsedModules_50, STATE_VARIABLE_Specs_7_80, STATE_VARIABLE_Specs_52);
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
parse_tree__equiv_type__replace_in_indirect_int2_spec_9_p_0_2(
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

  parse_tree__equiv_type__replace_in_type_repn_info_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_TypeRepnInfo_14, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_54, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_56, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_58);
  *wrapper_arg_2 = ((MR_Box) (conv10_TypeRepnInfo_14));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_54));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_56));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_58));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_indirect_int2_spec_9_p_0_1(
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

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_59, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_61, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_63);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_59));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_61));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_63));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_indirect_int2_spec_9_p_0(
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
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[1]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_indirect_int2_spec_9_p_0_1));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_44, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_44, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_44, TypeCtorCheckedMap0_34, &TypeCtorCheckedMap_38, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_19)), &conv6_STATE_VARIABLE_RecompInfo_1_45, ((MR_Box) (STATE_VARIABLE_UsedModules_0_21)), &conv5_STATE_VARIABLE_UsedModules_1_46, ((MR_Box) (STATE_VARIABLE_Specs_0_23)), &conv4_STATE_VARIABLE_Specs_1_47);
  STATE_VARIABLE_RecompInfo_1_45 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_45));
  STATE_VARIABLE_UsedModules_1_46 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_46));
  STATE_VARIABLE_Specs_1_47 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_47));
  parse_tree__equiv_type__replace_in_list_loop__ho26_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntTypeClasses0_35, (MR_Word) ((MR_Unsigned) 0U), &RevItems_66, STATE_VARIABLE_RecompInfo_1_45, &STATE_VARIABLE_RecompInfo_2_49, STATE_VARIABLE_UsedModules_1_46, &STATE_VARIABLE_UsedModules_2_50, STATE_VARIABLE_Specs_1_47, &STATE_VARIABLE_Specs_2_51);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_66, &IntTypeClasses_41);
  parse_tree__equiv_type__replace_in_list_loop__ho24_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntInstances0_36, (MR_Word) ((MR_Unsigned) 0U), &RevItems_70, STATE_VARIABLE_RecompInfo_2_49, &STATE_VARIABLE_RecompInfo_3_53, STATE_VARIABLE_UsedModules_2_50, &STATE_VARIABLE_UsedModules_3_54, STATE_VARIABLE_Specs_2_51, &STATE_VARIABLE_Specs_3_55);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), RevItems_70, &IntInstances_42);
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[7]));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_indirect_int2_spec_9_p_0_2));
    MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_56, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_56, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_56, IntTypeRepnMap0_37, &IntTypeRepnMap_43, ((MR_Box) (STATE_VARIABLE_RecompInfo_3_53)), &conv13_STATE_VARIABLE_RecompInfo_20, ((MR_Box) (STATE_VARIABLE_UsedModules_3_54)), &conv12_STATE_VARIABLE_UsedModules_22, ((MR_Box) (STATE_VARIABLE_Specs_3_55)), &conv11_STATE_VARIABLE_Specs_24);
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
parse_tree__equiv_type__replace_in_direct_int1_spec_9_p_0_2(
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

  parse_tree__equiv_type__replace_in_type_repn_info_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_TypeRepnInfo_14, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_54, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_56, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_58);
  *wrapper_arg_2 = ((MR_Box) (conv10_TypeRepnInfo_14));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_54));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_56));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_58));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_direct_int1_spec_9_p_0_1(
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

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_59, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_61, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_63);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_59));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_61));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_63));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_direct_int1_spec_9_p_0(
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
  MR_Word ReadWhy1_17 = ((MR_Unsigned) ((MR_hl_field(0, DirectIntSpec0_11, 1))) & (MR_Integer) 7);
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
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[1]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_direct_int1_spec_9_p_0_1));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_54, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_54, TypeCtorCheckedMap0_34, &TypeCtorCheckedMap_44, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_19)), &conv6_STATE_VARIABLE_RecompInfo_1_55, ((MR_Box) (STATE_VARIABLE_UsedModules_0_21)), &conv5_STATE_VARIABLE_UsedModules_1_56, ((MR_Box) (STATE_VARIABLE_Specs_0_23)), &conv4_STATE_VARIABLE_Specs_1_57);
  STATE_VARIABLE_RecompInfo_1_55 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_55));
  STATE_VARIABLE_UsedModules_1_56 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_56));
  STATE_VARIABLE_Specs_1_57 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_57));
  parse_tree__equiv_type__replace_in_list_loop__ho26_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntTypeClasses0_35, (MR_Word) ((MR_Unsigned) 0U), &RevItems_96, STATE_VARIABLE_RecompInfo_1_55, &STATE_VARIABLE_RecompInfo_2_59, STATE_VARIABLE_UsedModules_1_56, &STATE_VARIABLE_UsedModules_2_60, STATE_VARIABLE_Specs_1_57, &STATE_VARIABLE_Specs_2_61);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_96, &IntTypeClasses_47);
  parse_tree__equiv_type__replace_in_list_loop__ho24_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntInstances0_36, (MR_Word) ((MR_Unsigned) 0U), &RevItems_100, STATE_VARIABLE_RecompInfo_2_59, &STATE_VARIABLE_RecompInfo_3_63, STATE_VARIABLE_UsedModules_2_60, &STATE_VARIABLE_UsedModules_3_64, STATE_VARIABLE_Specs_2_61, &STATE_VARIABLE_Specs_3_65);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), RevItems_100, &IntInstances_48);
  parse_tree__equiv_type__replace_in_list__ho11_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntPredDecls0_37, &IntPredDecls_49, STATE_VARIABLE_RecompInfo_3_63, &STATE_VARIABLE_RecompInfo_4_67, STATE_VARIABLE_UsedModules_3_64, &STATE_VARIABLE_UsedModules_4_68, STATE_VARIABLE_Specs_3_65, &STATE_VARIABLE_Specs_4_69);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_93_95_48_11_p_0(Params_10, IntModeDecls0_38, &IntModeDecls_50, STATE_VARIABLE_RecompInfo_4_67, &STATE_VARIABLE_RecompInfo_5_71, STATE_VARIABLE_UsedModules_4_68, &STATE_VARIABLE_UsedModules_5_72, STATE_VARIABLE_Specs_4_69, &STATE_VARIABLE_Specs_5_73);
  parse_tree__equiv_type__replace_in_list__ho17_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntDeclPragmas0_39, &IntDeclPragmas_51, STATE_VARIABLE_RecompInfo_5_71, &STATE_VARIABLE_RecompInfo_6_75, STATE_VARIABLE_UsedModules_5_72, &STATE_VARIABLE_UsedModules_6_76, STATE_VARIABLE_Specs_5_73, &STATE_VARIABLE_Specs_6_77);
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[7]));
    MR_hl_field(0, Var_78, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_direct_int1_spec_9_p_0_2));
    MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_78, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_78, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_78, IntTypeRepnMap0_42, &IntTypeRepnMap_52, ((MR_Box) (STATE_VARIABLE_RecompInfo_6_75)), &conv13_STATE_VARIABLE_RecompInfo_7_79, ((MR_Box) (STATE_VARIABLE_UsedModules_6_76)), &conv12_STATE_VARIABLE_UsedModules_7_80, ((MR_Box) (STATE_VARIABLE_Specs_6_77)), &conv11_STATE_VARIABLE_Specs_7_81);
  STATE_VARIABLE_RecompInfo_7_79 = ((MR_Word) (conv13_STATE_VARIABLE_RecompInfo_7_79));
  STATE_VARIABLE_UsedModules_7_80 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_7_80));
  STATE_VARIABLE_Specs_7_81 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_7_81));
  parse_tree__equiv_type__replace_in_list__ho16_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), ImpTypeClasses0_43, &ImpTypeClasses_53, STATE_VARIABLE_RecompInfo_7_79, STATE_VARIABLE_RecompInfo_20, STATE_VARIABLE_UsedModules_7_80, STATE_VARIABLE_UsedModules_22, STATE_VARIABLE_Specs_7_81, STATE_VARIABLE_Specs_24);
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
parse_tree__equiv_type__replace_in_list__ho16_11_p_0(
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

  parse_tree__equiv_type__replace_in_list_loop__ho23_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho23_12_p_0(
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

      parse_tree__equiv_type__replace_in_abstract_typeclass_info_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
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
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
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
parse_tree__equiv_type__replace_in_abstract_typeclass_info_9_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_abstract_typeclass_info_9_p_0(
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
  MR_Word Var_44;
  MR_Box conv6_TVarSet_32;
  MR_Box conv5_ItemRecompDeps_33;
  MR_Box conv4_STATE_VARIABLE_UsedModules_37;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), Vars_18, &Arity_26);
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
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_abstract_typeclass_info_9_p_0_1));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (TypeEqvMap_30));
    MR_hl_field(0, Var_44, 4) = ((MR_Box) (MaybeRecord_11));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_44, Constraints0_19, &Constraints_31, ((MR_Box) (TVarSet0_22)), &conv6_TVarSet_32, ((MR_Box) (ItemRecompDeps0_29)), &conv5_ItemRecompDeps_33, ((MR_Box) (STATE_VARIABLE_UsedModules_0_36)), &conv4_STATE_VARIABLE_UsedModules_37);
  TVarSet_32 = ((MR_Word) (conv6_TVarSet_32));
  ItemRecompDeps_33 = ((MR_Word) (conv5_ItemRecompDeps_33));
  *STATE_VARIABLE_UsedModules_37 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_37));
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
parse_tree__equiv_type__replace_in_ancestor_int_spec_9_p_0(
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

  parse_tree__equiv_type__replace_in_parse_tree_int0_9_p_0(Params_10, OrigParseTree0_16, &ParseTree0_18, STATE_VARIABLE_RecompInfo_0_19, STATE_VARIABLE_RecompInfo_20, STATE_VARIABLE_UsedModules_0_21, STATE_VARIABLE_UsedModules_22, STATE_VARIABLE_Specs_0_23, STATE_VARIABLE_Specs_24);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *AncestorIntSpec_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTree0_18));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_17));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_int0_9_p_0_1(
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

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_59, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_61, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_63);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_59));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_61));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_63));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_int0_9_p_0(
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
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[1]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_parse_tree_int0_9_p_0_1));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_61, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_61, TypeCtorCheckedMap0_25, &TypeCtorCheckedMap_42, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_55)), &conv6_STATE_VARIABLE_RecompInfo_1_62, ((MR_Box) (STATE_VARIABLE_UsedModules_0_57)), &conv5_STATE_VARIABLE_UsedModules_1_63, ((MR_Box) (STATE_VARIABLE_Specs_0_59)), &conv4_STATE_VARIABLE_Specs_1_64);
  STATE_VARIABLE_RecompInfo_1_62 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_62));
  STATE_VARIABLE_UsedModules_1_63 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_63));
  STATE_VARIABLE_Specs_1_64 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_64));
  parse_tree__equiv_type__replace_in_list__ho13_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntTypeClasses0_28, &IntTypeClasses_45, STATE_VARIABLE_RecompInfo_1_62, &STATE_VARIABLE_RecompInfo_2_66, STATE_VARIABLE_UsedModules_1_63, &STATE_VARIABLE_UsedModules_2_67, STATE_VARIABLE_Specs_1_64, &STATE_VARIABLE_Specs_2_68);
  parse_tree__equiv_type__replace_in_list__ho15_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntInstances0_29, &IntInstances_46, STATE_VARIABLE_RecompInfo_2_66, &STATE_VARIABLE_RecompInfo_3_70, STATE_VARIABLE_UsedModules_2_67, &STATE_VARIABLE_UsedModules_3_71, STATE_VARIABLE_Specs_2_68, &STATE_VARIABLE_Specs_3_72);
  parse_tree__equiv_type__replace_in_list__ho11_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntPredDecls0_30, &IntPredDecls_47, STATE_VARIABLE_RecompInfo_3_70, &STATE_VARIABLE_RecompInfo_4_74, STATE_VARIABLE_UsedModules_3_71, &STATE_VARIABLE_UsedModules_4_75, STATE_VARIABLE_Specs_3_72, &STATE_VARIABLE_Specs_4_76);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_93_95_48_11_p_0(Params_10, IntModeDecls0_31, &IntModeDecls_48, STATE_VARIABLE_RecompInfo_4_74, &STATE_VARIABLE_RecompInfo_5_78, STATE_VARIABLE_UsedModules_4_75, &STATE_VARIABLE_UsedModules_5_79, STATE_VARIABLE_Specs_4_76, &STATE_VARIABLE_Specs_5_80);
  parse_tree__equiv_type__replace_in_list__ho17_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntDeclPragmas0_32, &IntDeclPragmas_49, STATE_VARIABLE_RecompInfo_5_78, &STATE_VARIABLE_RecompInfo_6_82, STATE_VARIABLE_UsedModules_5_79, &STATE_VARIABLE_UsedModules_6_83, STATE_VARIABLE_Specs_5_80, &STATE_VARIABLE_Specs_6_84);
  parse_tree__equiv_type__replace_in_list__ho13_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), ImpTypeClasses0_35, &ImpTypeClasses_50, STATE_VARIABLE_RecompInfo_6_82, &STATE_VARIABLE_RecompInfo_7_86, STATE_VARIABLE_UsedModules_6_83, &STATE_VARIABLE_UsedModules_7_87, STATE_VARIABLE_Specs_6_84, &STATE_VARIABLE_Specs_7_88);
  parse_tree__equiv_type__replace_in_list__ho15_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), ImpInstances0_36, &ImpInstances_51, STATE_VARIABLE_RecompInfo_7_86, &STATE_VARIABLE_RecompInfo_8_90, STATE_VARIABLE_UsedModules_7_87, &STATE_VARIABLE_UsedModules_8_91, STATE_VARIABLE_Specs_7_88, &STATE_VARIABLE_Specs_8_92);
  parse_tree__equiv_type__replace_in_list__ho11_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), ImpPredDecls0_37, &ImpPredDecls_52, STATE_VARIABLE_RecompInfo_8_90, &STATE_VARIABLE_RecompInfo_9_94, STATE_VARIABLE_UsedModules_8_91, &STATE_VARIABLE_UsedModules_9_95, STATE_VARIABLE_Specs_8_92, &STATE_VARIABLE_Specs_9_96);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_93_95_48_11_p_0(Params_10, ImpModeDecls0_38, &ImpModeDecls_53, STATE_VARIABLE_RecompInfo_9_94, &STATE_VARIABLE_RecompInfo_10_98, STATE_VARIABLE_UsedModules_9_95, &STATE_VARIABLE_UsedModules_10_99, STATE_VARIABLE_Specs_9_96, &STATE_VARIABLE_Specs_10_100);
  parse_tree__equiv_type__replace_in_list__ho17_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), ImpDeclPragmas0_39, &ImpDeclPragmas_54, STATE_VARIABLE_RecompInfo_10_98, STATE_VARIABLE_RecompInfo_56, STATE_VARIABLE_UsedModules_10_99, STATE_VARIABLE_UsedModules_58, STATE_VARIABLE_Specs_10_100, STATE_VARIABLE_Specs_60);
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
parse_tree__equiv_type__replace_in_list__ho15_11_p_0(
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

  parse_tree__equiv_type__replace_in_list_loop__ho24_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho24_12_p_0(
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

      parse_tree__equiv_type__replace_in_abstract_instance_info_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
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
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
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
parse_tree__equiv_type__replace_in_abstract_instance_info_9_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_abstract_instance_info_9_p_0(
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
  MR_Word Var_54;
  MR_Word Var_60;
  MR_Box conv6_TVarSet1_29;
  MR_Box conv5_ItemRecompDeps1_30;
  MR_Box conv4_STATE_VARIABLE_UsedModules_1_43;
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
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_abstract_instance_info_9_p_0_1));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (TypeEqvMap_27));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) (MaybeRecord_11));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_54, Constraints0_19, &Constraints_28, ((MR_Box) (TVarSet0_21)), &conv6_TVarSet1_29, ((MR_Box) (ItemRecompDeps0_26)), &conv5_ItemRecompDeps1_30, ((MR_Box) (STATE_VARIABLE_UsedModules_0_40)), &conv4_STATE_VARIABLE_UsedModules_1_43);
  TVarSet1_29 = ((MR_Word) (conv6_TVarSet1_29));
  ItemRecompDeps1_30 = ((MR_Word) (conv5_ItemRecompDeps1_30));
  STATE_VARIABLE_UsedModules_1_43 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_1_43));
  Var_60 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_27, MaybeRecord_11, (MR_Word) ((MR_Unsigned) 0U), Types0_17, &Types_31, &Var_32, Var_60, &Var_33, TVarSet1_29, &TVarSet_34, ItemRecompDeps1_30, &ItemRecompDeps_35, STATE_VARIABLE_UsedModules_1_43, STATE_VARIABLE_UsedModules_41);
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
parse_tree__equiv_type__replace_in_type_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word Type0_10,
  MR_Word * Type_11,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_TVarSet_0_17,
  MR_Word * STATE_VARIABLE_TVarSet_18,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_19,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_20)
{
  MR_Word Var_25;
  MR_Word _Circ_15;
  MR_Word Var_16;

  Var_25 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Type0_10, Type_11, Changed_12, &_Circ_15, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_ItemRecompDeps_0_19, STATE_VARIABLE_ItemRecompDeps_20, Var_25, &Var_16);
}

static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_type_report_circular_eqvs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_56;

  conv0_LambdaHeadVar__2_56 = parse_tree__equiv_type__IntroducedFrom__func__report_contains_circular_eqv_type__2647__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
  parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Type0_12, Type_13, Changed_14, &Circ_16, TVarSet0_10, &_TVarSet_17, (MR_Word) ((MR_Unsigned) 0U), &Var_18, Var_29, &Var_19);
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
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[96])));
    MainPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[92])), Var_39);
    if ((TailCircTypeCtors_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_44;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;

      Var_44 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[98])));
      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (HeadCircTypeCtor_21));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[70])));
      }
      Var_47 = parse_tree__error_spec__color_as_subject_1_f_0(Var_48);
      Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])));
      CircSpecs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_46);
    }
    else
    {
      MR_Word TypeCtorPieces_34;
      MR_Word Var_54;
      MR_Word Var_56;
      MR_Word Var_57;

      TypeCtorPieces_34 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[3]), CircTypes_20);
      Var_54 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[100])));
      Var_57 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[70])), TypeCtorPieces_34);
      Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])));
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
parse_tree__equiv_type__replace_in_type_list_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word STATE_VARIABLE_Types_0_15,
  MR_Word * STATE_VARIABLE_Types_16,
  MR_Word * Changed_11,
  MR_Word STATE_VARIABLE_TVarSet_0_17,
  MR_Word * STATE_VARIABLE_TVarSet_18,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_19,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_20)
{
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_14;
  MR_Word Var_26;

  Var_25 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  Var_28 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Types_0_15, STATE_VARIABLE_Types_16, Changed_11, Var_28, &Var_26, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_ItemRecompDeps_0_19, STATE_VARIABLE_ItemRecompDeps_20, Var_25, &Var_14);
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
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word STATE_VARIABLE_Constraints_0_13,
  MR_Word * STATE_VARIABLE_Constraints_14,
  MR_Word STATE_VARIABLE_TVarSet_0_15,
  MR_Word * STATE_VARIABLE_TVarSet_16,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_17,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_18)
{
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Box conv6_STATE_VARIABLE_TVarSet_16;
  MR_Box conv5_STATE_VARIABLE_ItemRecompDeps_18;
  MR_Box conv4_Var_12;

  Var_23 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (TypeEqvMap_8));
    MR_hl_field(0, Var_24, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_24, STATE_VARIABLE_Constraints_0_13, STATE_VARIABLE_Constraints_14, ((MR_Box) (STATE_VARIABLE_TVarSet_0_15)), &conv6_STATE_VARIABLE_TVarSet_16, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_0_17)), &conv5_STATE_VARIABLE_ItemRecompDeps_18, ((MR_Box) (Var_23)), &conv4_Var_12);
  *STATE_VARIABLE_TVarSet_16 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_16));
  *STATE_VARIABLE_ItemRecompDeps_18 = ((MR_Word) (conv5_STATE_VARIABLE_ItemRecompDeps_18));
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
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

void MR_CALL 
parse_tree__equiv_type__replace_in_univ_exist_constraints_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word Cs0_9,
  MR_Word * Cs_10,
  MR_Word STATE_VARIABLE_TVarSet_0_14,
  MR_Word * STATE_VARIABLE_TVarSet_15,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_16,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_17)
{
  MR_Word Var_21;
  MR_Word UnivCs0_22;
  MR_Word ExistCs0_23;
  MR_Word UnivCs_24;
  MR_Word ExistCs_25;
  MR_Word STATE_VARIABLE_TVarSet_1_26;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_27;
  MR_Word STATE_VARIABLE_UsedModules_1_28;
  MR_Word Var_29;
  MR_Box conv6_STATE_VARIABLE_TVarSet_1_26;
  MR_Box conv5_STATE_VARIABLE_ItemRecompDeps_1_27;
  MR_Box conv4_STATE_VARIABLE_UsedModules_1_28;
  MR_Box conv9_STATE_VARIABLE_TVarSet_15;
  MR_Box conv8_STATE_VARIABLE_ItemRecompDeps_17;
  MR_Box conv7_Var_13;

  Var_21 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  UnivCs0_22 = ((MR_Word) ((MR_hl_field(0, Cs0_9, 0))));
  ExistCs0_23 = ((MR_Word) ((MR_hl_field(0, Cs0_9, 1))));
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_univ_exist_constraints_7_p_0_1));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (TypeEqvMap_8));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_29, UnivCs0_22, &UnivCs_24, ((MR_Box) (STATE_VARIABLE_TVarSet_0_14)), &conv6_STATE_VARIABLE_TVarSet_1_26, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_0_16)), &conv5_STATE_VARIABLE_ItemRecompDeps_1_27, ((MR_Box) (Var_21)), &conv4_STATE_VARIABLE_UsedModules_1_28);
  STATE_VARIABLE_TVarSet_1_26 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_1_26));
  STATE_VARIABLE_ItemRecompDeps_1_27 = ((MR_Word) (conv5_STATE_VARIABLE_ItemRecompDeps_1_27));
  STATE_VARIABLE_UsedModules_1_28 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_1_28));
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_29, ExistCs0_23, &ExistCs_25, ((MR_Box) (STATE_VARIABLE_TVarSet_1_26)), &conv9_STATE_VARIABLE_TVarSet_15, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_1_27)), &conv8_STATE_VARIABLE_ItemRecompDeps_17, ((MR_Box) (STATE_VARIABLE_UsedModules_1_28)), &conv7_Var_13);
  *STATE_VARIABLE_TVarSet_15 = ((MR_Word) (conv9_STATE_VARIABLE_TVarSet_15));
  *STATE_VARIABLE_ItemRecompDeps_17 = ((MR_Word) (conv8_STATE_VARIABLE_ItemRecompDeps_17));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Cs_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (UnivCs_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExistCs_25));
  }
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
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_37;
  MR_Word conv0_STATE_VARIABLE_UsedModules_39;

  parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Ctor_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_35, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_37, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_39);
  *wrapper_arg_2 = ((MR_Box) (conv3_Ctor_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_35));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_37));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_39));
}

void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word STATE_VARIABLE_Ctors_0_13,
  MR_Word * STATE_VARIABLE_Ctors_14,
  MR_Word STATE_VARIABLE_TVarSet_0_15,
  MR_Word * STATE_VARIABLE_TVarSet_16,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_17,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_18)
{
  MR_Word Var_23;
  MR_Word HeadCtor0_24;
  MR_Word TailCtors0_25;
  MR_Word HeadCtor_26;
  MR_Word TailCtors_27;
  MR_Word STATE_VARIABLE_TVarSet_1_28;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_29;
  MR_Word STATE_VARIABLE_UsedModules_1_30;
  MR_Word Var_31;
  MR_Box conv6_STATE_VARIABLE_TVarSet_16;
  MR_Box conv5_STATE_VARIABLE_ItemRecompDeps_18;
  MR_Box conv4_Var_12;

  Var_23 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  HeadCtor0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Ctors_0_13, 0))));
  TailCtors0_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Ctors_0_13, 1))));
  parse_tree__equiv_type__replace_in_ctor_10_p_0(TypeEqvMap_8, (MR_Word) ((MR_Unsigned) 0U), HeadCtor0_24, &HeadCtor_26, STATE_VARIABLE_TVarSet_0_15, &STATE_VARIABLE_TVarSet_1_28, STATE_VARIABLE_ItemRecompDeps_0_17, &STATE_VARIABLE_ItemRecompDeps_1_29, Var_23, &STATE_VARIABLE_UsedModules_1_30);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[6]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_7_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (TypeEqvMap_8));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_31, TailCtors0_25, &TailCtors_27, ((MR_Box) (STATE_VARIABLE_TVarSet_1_28)), &conv6_STATE_VARIABLE_TVarSet_16, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_1_29)), &conv5_STATE_VARIABLE_ItemRecompDeps_18, ((MR_Box) (STATE_VARIABLE_UsedModules_1_30)), &conv4_Var_12);
  *STATE_VARIABLE_TVarSet_16 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_16));
  *STATE_VARIABLE_ItemRecompDeps_18 = ((MR_Word) (conv5_STATE_VARIABLE_ItemRecompDeps_18));
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
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Ctor0_13,
  MR_Word * Ctor_14,
  MR_Word STATE_VARIABLE_TVarSet_0_34,
  MR_Word * STATE_VARIABLE_TVarSet_35,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_36,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_37,
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
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_41;
  MR_Word STATE_VARIABLE_UsedModules_1_42;
  MR_Word Var_44;
  MR_Word Var_25;

  Var_44 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_ctor_arg_list_loop_13_p_0(TypeEqvMap_11, MaybeRecord_12, (MR_Word) ((MR_Unsigned) 0U), CtorArgs0_21, &CtorArgs_24, Var_44, &Var_25, STATE_VARIABLE_TVarSet_0_34, &STATE_VARIABLE_TVarSet_1_40, STATE_VARIABLE_ItemRecompDeps_0_36, &STATE_VARIABLE_ItemRecompDeps_1_41, STATE_VARIABLE_UsedModules_0_38, &STATE_VARIABLE_UsedModules_1_42);
  if ((MaybeExistConstraints0_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeExistConstraints_26 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TVarSet_35 = STATE_VARIABLE_TVarSet_1_40;
    *STATE_VARIABLE_ItemRecompDeps_37 = STATE_VARIABLE_ItemRecompDeps_1_41;
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
    MR_Box conv5_STATE_VARIABLE_ItemRecompDeps_37;
    MR_Box conv4_STATE_VARIABLE_UsedModules_39;

    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_46, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0]));
      MR_hl_field(0, Var_46, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_10_p_0_1));
      MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_46, 3) = ((MR_Box) (TypeEqvMap_11));
      MR_hl_field(0, Var_46, 4) = ((MR_Box) (MaybeRecord_12));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_46, Constraints0_29, &Constraints_32, ((MR_Box) (STATE_VARIABLE_TVarSet_1_40)), &conv6_STATE_VARIABLE_TVarSet_35, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_1_41)), &conv5_STATE_VARIABLE_ItemRecompDeps_37, ((MR_Box) (STATE_VARIABLE_UsedModules_1_42)), &conv4_STATE_VARIABLE_UsedModules_39);
    *STATE_VARIABLE_TVarSet_35 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_35));
    *STATE_VARIABLE_ItemRecompDeps_37 = ((MR_Word) (conv5_STATE_VARIABLE_ItemRecompDeps_37));
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
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_10,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_11,
  MR_Word STATE_VARIABLE_UsedModules_0_12,
  MR_Word * STATE_VARIABLE_UsedModules_13)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UsedModules_13 = STATE_VARIABLE_UsedModules_0_12;
    *STATE_VARIABLE_ItemRecompDeps_11 = STATE_VARIABLE_ItemRecompDeps_0_10;
    *STATE_VARIABLE_TVarSet_9 = STATE_VARIABLE_TVarSet_0_8;
    *STATE_VARIABLE_Circ_7 = STATE_VARIABLE_Circ_0_6;
  }
  else
  {
    MR_Word CtorArg0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word CtorArgs0_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word CtorArg_34;
    MR_Word CtorArgs_35;
    MR_Word Name_40 = ((MR_Word) ((MR_hl_field(0, CtorArg0_32, 0))));
    MR_Word Type0_41 = ((MR_Word) ((MR_hl_field(0, CtorArg0_32, 1))));
    MR_Word Context_42 = ((MR_Word) ((MR_hl_field(0, CtorArg0_32, 2))));
    MR_Word Type_43;
    MR_Word TypeCirc_45;
    MR_Word STATE_VARIABLE_TVarSet_1_54;
    MR_Word STATE_VARIABLE_ItemRecompDeps_1_55;
    MR_Word STATE_VARIABLE_UsedModules_1_56;
    MR_Word STATE_VARIABLE_Circ_1_57;
    MR_Word Var_44;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Type0_41, &Type_43, &Var_44, &TypeCirc_45, STATE_VARIABLE_TVarSet_0_8, &STATE_VARIABLE_TVarSet_1_54, STATE_VARIABLE_ItemRecompDeps_0_10, &STATE_VARIABLE_ItemRecompDeps_1_55, STATE_VARIABLE_UsedModules_0_12, &STATE_VARIABLE_UsedModules_1_56);
    {
      CtorArg_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CtorArg_34, 0) = ((MR_Box) (Name_40));
      MR_hl_field(0, CtorArg_34, 1) = ((MR_Box) (Type_43));
      MR_hl_field(0, CtorArg_34, 2) = ((MR_Box) (Context_42));
    }
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeCirc_45, STATE_VARIABLE_Circ_0_6, &STATE_VARIABLE_Circ_1_57);
    parse_tree__equiv_type__replace_in_ctor_arg_list_loop_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, CtorArgs0_33, &CtorArgs_35, STATE_VARIABLE_Circ_1_57, STATE_VARIABLE_Circ_7, STATE_VARIABLE_TVarSet_1_54, STATE_VARIABLE_TVarSet_9, STATE_VARIABLE_ItemRecompDeps_1_55, STATE_VARIABLE_ItemRecompDeps_11, STATE_VARIABLE_UsedModules_1_56, STATE_VARIABLE_UsedModules_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (CtorArg_34));
      MR_hl_field(1, base, 1) = ((MR_Box) (CtorArgs_35));
    }
  }
}

void MR_CALL 
parse_tree__equiv_type__replace_in_type_repn_eqv_5_p_0(
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), ArgTypeVars_11, &Arity_16);
  {
    TypeCtor_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_17, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(0, TypeCtor_17, 1) = ((MR_Box) (Arity_16));
  }
  Var_32 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
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
    Var_53 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[90])));
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])));
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[88])), Var_52);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_47);
    Pieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[86])), Var_42);
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
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_6(
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

  parse_tree__equiv_type__replace_in_int_for_opt_spec_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv38_IntForOptSpec_12, ((MR_Word) (wrapper_arg_3)), &conv37_STATE_VARIABLE_RecompInfo_26, ((MR_Word) (wrapper_arg_5)), &conv36_STATE_VARIABLE_UsedModules_28, ((MR_Word) (wrapper_arg_7)), &conv35_STATE_VARIABLE_Specs_30);
  *wrapper_arg_2 = ((MR_Box) (conv38_IntForOptSpec_12));
  *wrapper_arg_4 = ((MR_Box) (conv37_STATE_VARIABLE_RecompInfo_26));
  *wrapper_arg_6 = ((MR_Box) (conv36_STATE_VARIABLE_UsedModules_28));
  *wrapper_arg_8 = ((MR_Box) (conv35_STATE_VARIABLE_Specs_30));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_5(
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

  parse_tree__equiv_type__replace_in_parse_tree_plain_opt_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv31_ParseTreePlainOpt_12, ((MR_Word) (wrapper_arg_3)), &conv30_STATE_VARIABLE_RecompInfo_52, ((MR_Word) (wrapper_arg_5)), &conv29_STATE_VARIABLE_UsedModules_54, ((MR_Word) (wrapper_arg_7)), &conv28_STATE_VARIABLE_Specs_56);
  *wrapper_arg_2 = ((MR_Box) (conv31_ParseTreePlainOpt_12));
  *wrapper_arg_4 = ((MR_Box) (conv30_STATE_VARIABLE_RecompInfo_52));
  *wrapper_arg_6 = ((MR_Box) (conv29_STATE_VARIABLE_UsedModules_54));
  *wrapper_arg_8 = ((MR_Box) (conv28_STATE_VARIABLE_Specs_56));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_4(
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

  parse_tree__equiv_type__replace_in_parse_tree_trans_opt_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv24_ParseTreeTransOpt_3, ((MR_Word) (wrapper_arg_3)), &conv23_RecompInfo_5, ((MR_Word) (wrapper_arg_5)), &conv22_UsedModules_7, ((MR_Word) (wrapper_arg_7)), &conv21_Specs_9);
  *wrapper_arg_2 = ((MR_Box) (conv24_ParseTreeTransOpt_3));
  *wrapper_arg_4 = ((MR_Box) (conv23_RecompInfo_5));
  *wrapper_arg_6 = ((MR_Box) (conv22_UsedModules_7));
  *wrapper_arg_8 = ((MR_Box) (conv21_Specs_9));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_3(
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

  parse_tree__equiv_type__replace_in_indirect_int2_spec_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv17_IndirectIntSpec_12, ((MR_Word) (wrapper_arg_3)), &conv16_STATE_VARIABLE_RecompInfo_20, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_UsedModules_22, ((MR_Word) (wrapper_arg_7)), &conv14_STATE_VARIABLE_Specs_24);
  *wrapper_arg_2 = ((MR_Box) (conv17_IndirectIntSpec_12));
  *wrapper_arg_4 = ((MR_Box) (conv16_STATE_VARIABLE_RecompInfo_20));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_UsedModules_22));
  *wrapper_arg_8 = ((MR_Box) (conv14_STATE_VARIABLE_Specs_24));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_2(
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

  parse_tree__equiv_type__replace_in_direct_int1_spec_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv10_DirectIntSpec_12, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_20, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_22, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_24);
  *wrapper_arg_2 = ((MR_Box) (conv10_DirectIntSpec_12));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_20));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_22));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_24));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_1(
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

  parse_tree__equiv_type__replace_in_ancestor_int_spec_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_AncestorIntSpec_12, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_20, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_22, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_24);
  *wrapper_arg_2 = ((MR_Box) (conv3_AncestorIntSpec_12));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_20));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_22));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_24));
}

void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0(
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
  STATE_VARIABLE_UsedModules_1_44 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  parse_tree__equiv_type__replace_in_parse_tree_module_src_9_p_0(Params_29, ParseTreeModuleSrc0_18, &ParseTreeModuleSrc_30, STATE_VARIABLE_RecompInfo_0_41, &STATE_VARIABLE_RecompInfo_1_46, STATE_VARIABLE_UsedModules_1_44, &STATE_VARIABLE_UsedModules_2_47, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_2_48);
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[1]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_1));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (Params_29));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49, AncestorIntSpecs0_19, &AncestorIntSpecs_31, ((MR_Box) (STATE_VARIABLE_RecompInfo_1_46)), &conv6_STATE_VARIABLE_RecompInfo_2_50, ((MR_Box) (STATE_VARIABLE_UsedModules_2_47)), &conv5_STATE_VARIABLE_UsedModules_3_51, ((MR_Box) (STATE_VARIABLE_Specs_2_48)), &conv4_STATE_VARIABLE_Specs_3_52);
  STATE_VARIABLE_RecompInfo_2_50 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_2_50));
  STATE_VARIABLE_UsedModules_3_51 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_3_51));
  STATE_VARIABLE_Specs_3_52 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_3_52));
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[2]));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_2));
    MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_53, 3) = ((MR_Box) (Params_29));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_53, DirectInt1Specs0_20, &DirectInt1Specs_32, ((MR_Box) (STATE_VARIABLE_RecompInfo_2_50)), &conv13_STATE_VARIABLE_RecompInfo_3_54, ((MR_Box) (STATE_VARIABLE_UsedModules_3_51)), &conv12_STATE_VARIABLE_UsedModules_4_55, ((MR_Box) (STATE_VARIABLE_Specs_3_52)), &conv11_STATE_VARIABLE_Specs_4_56);
  STATE_VARIABLE_RecompInfo_3_54 = ((MR_Word) (conv13_STATE_VARIABLE_RecompInfo_3_54));
  STATE_VARIABLE_UsedModules_4_55 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_4_55));
  STATE_VARIABLE_Specs_4_56 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_4_56));
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[3]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_3));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (Params_29));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_57, IndirectInt2Specs0_21, &IndirectInt2Specs_33, ((MR_Box) (STATE_VARIABLE_RecompInfo_3_54)), &conv20_STATE_VARIABLE_RecompInfo_4_58, ((MR_Box) (STATE_VARIABLE_UsedModules_4_55)), &conv19_STATE_VARIABLE_UsedModules_5_59, ((MR_Box) (STATE_VARIABLE_Specs_4_56)), &conv18_STATE_VARIABLE_Specs_5_60);
  STATE_VARIABLE_RecompInfo_4_58 = ((MR_Word) (conv20_STATE_VARIABLE_RecompInfo_4_58));
  STATE_VARIABLE_UsedModules_5_59 = ((MR_Word) (conv19_STATE_VARIABLE_UsedModules_5_59));
  STATE_VARIABLE_Specs_5_60 = ((MR_Word) (conv18_STATE_VARIABLE_Specs_5_60));
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[4]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_4));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (Params_29));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_61, TransOpts0_23, &TransOpts_34, ((MR_Box) (STATE_VARIABLE_RecompInfo_4_58)), &conv27_STATE_VARIABLE_RecompInfo_5_62, ((MR_Box) (STATE_VARIABLE_UsedModules_5_59)), &conv26_STATE_VARIABLE_UsedModules_6_63, ((MR_Box) (STATE_VARIABLE_Specs_5_60)), &conv25_STATE_VARIABLE_Specs_6_64);
  STATE_VARIABLE_RecompInfo_5_62 = ((MR_Word) (conv27_STATE_VARIABLE_RecompInfo_5_62));
  STATE_VARIABLE_UsedModules_6_63 = ((MR_Word) (conv26_STATE_VARIABLE_UsedModules_6_63));
  STATE_VARIABLE_Specs_6_64 = ((MR_Word) (conv25_STATE_VARIABLE_Specs_6_64));
  {
    Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_65, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[5]));
    MR_hl_field(0, Var_65, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_5));
    MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_65, 3) = ((MR_Box) (Params_29));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_65, PlainOpts0_22, &PlainOpts_35, ((MR_Box) (STATE_VARIABLE_RecompInfo_5_62)), &conv34_STATE_VARIABLE_RecompInfo_6_66, ((MR_Box) (STATE_VARIABLE_UsedModules_6_63)), &conv33_STATE_VARIABLE_UsedModules_7_67, ((MR_Box) (STATE_VARIABLE_Specs_6_64)), &conv32_STATE_VARIABLE_Specs_7_68);
  STATE_VARIABLE_RecompInfo_6_66 = ((MR_Word) (conv34_STATE_VARIABLE_RecompInfo_6_66));
  STATE_VARIABLE_UsedModules_7_67 = ((MR_Word) (conv33_STATE_VARIABLE_UsedModules_7_67));
  STATE_VARIABLE_Specs_7_68 = ((MR_Word) (conv32_STATE_VARIABLE_Specs_7_68));
  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[6]));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_6));
    MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_69, 3) = ((MR_Box) (Params_29));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_69, IntForOptSpecs0_24, &IntForOptSpecs_36, ((MR_Box) (STATE_VARIABLE_RecompInfo_6_66)), &conv41_STATE_VARIABLE_RecompInfo_42, ((MR_Box) (STATE_VARIABLE_UsedModules_7_67)), &conv40_STATE_VARIABLE_UsedModules_8_71, ((MR_Box) (STATE_VARIABLE_Specs_7_68)), &conv39_STATE_VARIABLE_Specs_43);
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
  parse_tree__equiv_type__replace_in_event_specs_5_p_0(*TypeEqvMap_14, EventSpecList0_38, &EventSpecList_39, STATE_VARIABLE_UsedModules_8_71, STATE_VARIABLE_UsedModules_40);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecList_39, EventSpecMap_13);
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
    MR_Word _ItemRecompDeps_28;
    MR_Word Var_32;

    TVarSet0_24 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(HeadVar__1_1, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), AttrType0_21, &AttrType_25, &_Changed_26, &Var_32, TVarSet0_24, &_TVarSet_27, (MR_Word) ((MR_Unsigned) 0U), &_ItemRecompDeps_28, STATE_VARIABLE_UsedModules_0_4, &STATE_VARIABLE_UsedModules_1_18);
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
parse_tree__equiv_type__replace_in_parse_tree_module_src_9_p_0_1(
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

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_59, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_61, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_63);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_59));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_61));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_63));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_module_src_9_p_0(
  MR_Word Params_10,
  MR_Word ParseTreeModuleSrc0_11,
  MR_Word * ParseTreeModuleSrc_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_70,
  MR_Word * STATE_VARIABLE_RecompInfo_71,
  MR_Word STATE_VARIABLE_UsedModules_0_72,
  MR_Word * STATE_VARIABLE_UsedModules_73,
  MR_Word STATE_VARIABLE_Specs_0_74,
  MR_Word * STATE_VARIABLE_Specs_75)
{
  MR_Word MaybeRecordInt_16 = (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_3[0]));
  MR_Word MaybeRecordImp_17 = (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_3[1]));
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 0))));
  MR_Word ModuleNameContext_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 1))));
  MR_Word InclMap_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 2))));
  MR_Word ImportUseMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 3))));
  MR_Word IntFIMSpecMap_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 4))));
  MR_Word ImpFIMSpecMap_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 5))));
  MR_Word IntSelfFIMLangs_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 6))));
  MR_Word ImpSelfFIMLangs_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 7))));
  MR_Word TypeCtorCheckedMap0_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 8))));
  MR_Word TypeSpecs_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 11))));
  MR_Word InstModeSpecs_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 12))));
  MR_Word IntTypeClasses0_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 13))));
  MR_Word IntInstances0_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 14))));
  MR_Word IntPredDecls0_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 15))));
  MR_Word IntModeDecls0_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 16))));
  MR_Word IntDeclPragmas0_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 17))));
  MR_Word IntDeclMarkers_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 18))));
  MR_Word IntPromises_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 19))));
  MR_Word IntBadPreds_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 20))));
  MR_Word ImpTypeClasses0_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 21))));
  MR_Word ImpInstances0_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 22))));
  MR_Word ImpPredDecls0_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 23))));
  MR_Word ImpModeDecls0_42 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 24))));
  MR_Word ImpForeignProcs0_44 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 26))));
  MR_Word ImpForeignExportEnums_45 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 27))));
  MR_Word ImpDeclPragmas0_46 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 28))));
  MR_Word ImpDeclMarkers_47 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 29))));
  MR_Word ImpImplPragmas_48 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 30))));
  MR_Word ImpImplMarkers_49 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 31))));
  MR_Word ImpPromises_50 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 32))));
  MR_Word ImpInitialises_51 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 33))));
  MR_Word ImpFinalises_52 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 34))));
  MR_Word ImpMutables0_53 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 35))));
  MR_Word TypeCtorCheckedMap_54;
  MR_Word InstCtorCheckedMap_55 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 9))));
  MR_Word ModeCtorCheckedMap_56 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 10))));
  MR_Word IntTypeClasses_57;
  MR_Word IntInstances_58;
  MR_Word IntPredDecls_59;
  MR_Word IntModeDecls_60;
  MR_Word IntDeclPragmas_61;
  MR_Word ImpTypeClasses_62;
  MR_Word ImpInstances_63;
  MR_Word ImpPredDecls_64;
  MR_Word ImpModeDecls_65;
  MR_Word ImpClauses_66 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 25))));
  MR_Word ImpDeclPragmas_67;
  MR_Word ImpForeignProcs_68;
  MR_Word ImpMutables_69;
  MR_Word Var_78;
  MR_Word STATE_VARIABLE_RecompInfo_1_79;
  MR_Word STATE_VARIABLE_UsedModules_1_80;
  MR_Word STATE_VARIABLE_Specs_1_81;
  MR_Word STATE_VARIABLE_RecompInfo_2_83;
  MR_Word STATE_VARIABLE_UsedModules_2_84;
  MR_Word STATE_VARIABLE_Specs_2_85;
  MR_Word STATE_VARIABLE_RecompInfo_3_87;
  MR_Word STATE_VARIABLE_UsedModules_3_88;
  MR_Word STATE_VARIABLE_Specs_3_89;
  MR_Word STATE_VARIABLE_RecompInfo_4_91;
  MR_Word STATE_VARIABLE_UsedModules_4_92;
  MR_Word STATE_VARIABLE_Specs_4_93;
  MR_Word STATE_VARIABLE_RecompInfo_5_95;
  MR_Word STATE_VARIABLE_UsedModules_5_96;
  MR_Word STATE_VARIABLE_Specs_5_97;
  MR_Word STATE_VARIABLE_RecompInfo_6_99;
  MR_Word STATE_VARIABLE_UsedModules_6_100;
  MR_Word STATE_VARIABLE_Specs_6_101;
  MR_Word STATE_VARIABLE_RecompInfo_7_103;
  MR_Word STATE_VARIABLE_UsedModules_7_104;
  MR_Word STATE_VARIABLE_Specs_7_105;
  MR_Word STATE_VARIABLE_RecompInfo_8_107;
  MR_Word STATE_VARIABLE_UsedModules_8_108;
  MR_Word STATE_VARIABLE_Specs_8_109;
  MR_Word STATE_VARIABLE_RecompInfo_9_111;
  MR_Word STATE_VARIABLE_UsedModules_9_112;
  MR_Word STATE_VARIABLE_Specs_9_113;
  MR_Word STATE_VARIABLE_RecompInfo_10_115;
  MR_Word STATE_VARIABLE_UsedModules_10_116;
  MR_Word STATE_VARIABLE_Specs_10_117;
  MR_Word STATE_VARIABLE_RecompInfo_11_119;
  MR_Word STATE_VARIABLE_UsedModules_11_120;
  MR_Word STATE_VARIABLE_Specs_11_121;
  MR_Word STATE_VARIABLE_RecompInfo_12_123;
  MR_Word STATE_VARIABLE_UsedModules_12_124;
  MR_Word STATE_VARIABLE_Specs_12_125;
  MR_Box conv6_STATE_VARIABLE_RecompInfo_1_79;
  MR_Box conv5_STATE_VARIABLE_UsedModules_1_80;
  MR_Box conv4_STATE_VARIABLE_Specs_1_81;

  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[1]));
    MR_hl_field(0, Var_78, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_parse_tree_module_src_9_p_0_1));
    MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_78, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_78, 4) = ((MR_Box) (MaybeRecordInt_16));
    MR_hl_field(0, Var_78, 5) = ((MR_Box) (MaybeRecordImp_17));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_78, TypeCtorCheckedMap0_26, &TypeCtorCheckedMap_54, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_70)), &conv6_STATE_VARIABLE_RecompInfo_1_79, ((MR_Box) (STATE_VARIABLE_UsedModules_0_72)), &conv5_STATE_VARIABLE_UsedModules_1_80, ((MR_Box) (STATE_VARIABLE_Specs_0_74)), &conv4_STATE_VARIABLE_Specs_1_81);
  STATE_VARIABLE_RecompInfo_1_79 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_79));
  STATE_VARIABLE_UsedModules_1_80 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_80));
  STATE_VARIABLE_Specs_1_81 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_81));
  parse_tree__equiv_type__replace_in_list__ho13_11_p_0(Params_10, MaybeRecordInt_16, IntTypeClasses0_31, &IntTypeClasses_57, STATE_VARIABLE_RecompInfo_1_79, &STATE_VARIABLE_RecompInfo_2_83, STATE_VARIABLE_UsedModules_1_80, &STATE_VARIABLE_UsedModules_2_84, STATE_VARIABLE_Specs_1_81, &STATE_VARIABLE_Specs_2_85);
  parse_tree__equiv_type__replace_in_list__ho12_11_p_0(Params_10, MaybeRecordInt_16, IntInstances0_32, &IntInstances_58, STATE_VARIABLE_RecompInfo_2_83, &STATE_VARIABLE_RecompInfo_3_87, STATE_VARIABLE_UsedModules_2_84, &STATE_VARIABLE_UsedModules_3_88, STATE_VARIABLE_Specs_2_85, &STATE_VARIABLE_Specs_3_89);
  parse_tree__equiv_type__replace_in_list__ho11_11_p_0(Params_10, MaybeRecordInt_16, IntPredDecls0_33, &IntPredDecls_59, STATE_VARIABLE_RecompInfo_3_87, &STATE_VARIABLE_RecompInfo_4_91, STATE_VARIABLE_UsedModules_3_88, &STATE_VARIABLE_UsedModules_4_92, STATE_VARIABLE_Specs_3_89, &STATE_VARIABLE_Specs_4_93);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_93_95_48_11_p_0(Params_10, IntModeDecls0_34, &IntModeDecls_60, STATE_VARIABLE_RecompInfo_4_91, &STATE_VARIABLE_RecompInfo_5_95, STATE_VARIABLE_UsedModules_4_92, &STATE_VARIABLE_UsedModules_5_96, STATE_VARIABLE_Specs_4_93, &STATE_VARIABLE_Specs_5_97);
  parse_tree__equiv_type__replace_in_list__ho17_11_p_0(Params_10, MaybeRecordInt_16, IntDeclPragmas0_35, &IntDeclPragmas_61, STATE_VARIABLE_RecompInfo_5_95, &STATE_VARIABLE_RecompInfo_6_99, STATE_VARIABLE_UsedModules_5_96, &STATE_VARIABLE_UsedModules_6_100, STATE_VARIABLE_Specs_5_97, &STATE_VARIABLE_Specs_6_101);
  parse_tree__equiv_type__replace_in_list__ho13_11_p_0(Params_10, MaybeRecordImp_17, ImpTypeClasses0_39, &ImpTypeClasses_62, STATE_VARIABLE_RecompInfo_6_99, &STATE_VARIABLE_RecompInfo_7_103, STATE_VARIABLE_UsedModules_6_100, &STATE_VARIABLE_UsedModules_7_104, STATE_VARIABLE_Specs_6_101, &STATE_VARIABLE_Specs_7_105);
  parse_tree__equiv_type__replace_in_list__ho12_11_p_0(Params_10, MaybeRecordImp_17, ImpInstances0_40, &ImpInstances_63, STATE_VARIABLE_RecompInfo_7_103, &STATE_VARIABLE_RecompInfo_8_107, STATE_VARIABLE_UsedModules_7_104, &STATE_VARIABLE_UsedModules_8_108, STATE_VARIABLE_Specs_7_105, &STATE_VARIABLE_Specs_8_109);
  parse_tree__equiv_type__replace_in_list__ho11_11_p_0(Params_10, MaybeRecordImp_17, ImpPredDecls0_41, &ImpPredDecls_64, STATE_VARIABLE_RecompInfo_8_107, &STATE_VARIABLE_RecompInfo_9_111, STATE_VARIABLE_UsedModules_8_108, &STATE_VARIABLE_UsedModules_9_112, STATE_VARIABLE_Specs_8_109, &STATE_VARIABLE_Specs_9_113);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_93_95_48_11_p_0(Params_10, ImpModeDecls0_42, &ImpModeDecls_65, STATE_VARIABLE_RecompInfo_9_111, &STATE_VARIABLE_RecompInfo_10_115, STATE_VARIABLE_UsedModules_9_112, &STATE_VARIABLE_UsedModules_10_116, STATE_VARIABLE_Specs_9_113, &STATE_VARIABLE_Specs_10_117);
  parse_tree__equiv_type__replace_in_list__ho17_11_p_0(Params_10, MaybeRecordImp_17, ImpDeclPragmas0_46, &ImpDeclPragmas_67, STATE_VARIABLE_RecompInfo_10_115, &STATE_VARIABLE_RecompInfo_11_119, STATE_VARIABLE_UsedModules_10_116, &STATE_VARIABLE_UsedModules_11_120, STATE_VARIABLE_Specs_10_117, &STATE_VARIABLE_Specs_11_121);
  parse_tree__equiv_type__replace_in_list__ho19_11_p_0(Params_10, MaybeRecordImp_17, ImpForeignProcs0_44, &ImpForeignProcs_68, STATE_VARIABLE_RecompInfo_11_119, &STATE_VARIABLE_RecompInfo_12_123, STATE_VARIABLE_UsedModules_11_120, &STATE_VARIABLE_UsedModules_12_124, STATE_VARIABLE_Specs_11_121, &STATE_VARIABLE_Specs_12_125);
  parse_tree__equiv_type__replace_in_list__ho18_11_p_0(Params_10, MaybeRecordImp_17, ImpMutables0_53, &ImpMutables_69, STATE_VARIABLE_RecompInfo_12_123, STATE_VARIABLE_RecompInfo_71, STATE_VARIABLE_UsedModules_12_124, STATE_VARIABLE_UsedModules_73, STATE_VARIABLE_Specs_12_125, STATE_VARIABLE_Specs_75);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeModuleSrc_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (InclMap_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (ImportUseMap_21));
    MR_hl_field(0, base, 4) = ((MR_Box) (IntFIMSpecMap_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (ImpFIMSpecMap_23));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntSelfFIMLangs_24));
    MR_hl_field(0, base, 7) = ((MR_Box) (ImpSelfFIMLangs_25));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeCtorCheckedMap_54));
    MR_hl_field(0, base, 9) = ((MR_Box) (InstCtorCheckedMap_55));
    MR_hl_field(0, base, 10) = ((MR_Box) (ModeCtorCheckedMap_56));
    MR_hl_field(0, base, 11) = ((MR_Box) (TypeSpecs_29));
    MR_hl_field(0, base, 12) = ((MR_Box) (InstModeSpecs_30));
    MR_hl_field(0, base, 13) = ((MR_Box) (IntTypeClasses_57));
    MR_hl_field(0, base, 14) = ((MR_Box) (IntInstances_58));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntPredDecls_59));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntModeDecls_60));
    MR_hl_field(0, base, 17) = ((MR_Box) (IntDeclPragmas_61));
    MR_hl_field(0, base, 18) = ((MR_Box) (IntDeclMarkers_36));
    MR_hl_field(0, base, 19) = ((MR_Box) (IntPromises_37));
    MR_hl_field(0, base, 20) = ((MR_Box) (IntBadPreds_38));
    MR_hl_field(0, base, 21) = ((MR_Box) (ImpTypeClasses_62));
    MR_hl_field(0, base, 22) = ((MR_Box) (ImpInstances_63));
    MR_hl_field(0, base, 23) = ((MR_Box) (ImpPredDecls_64));
    MR_hl_field(0, base, 24) = ((MR_Box) (ImpModeDecls_65));
    MR_hl_field(0, base, 25) = ((MR_Box) (ImpClauses_66));
    MR_hl_field(0, base, 26) = ((MR_Box) (ImpForeignProcs_68));
    MR_hl_field(0, base, 27) = ((MR_Box) (ImpForeignExportEnums_45));
    MR_hl_field(0, base, 28) = ((MR_Box) (ImpDeclPragmas_67));
    MR_hl_field(0, base, 29) = ((MR_Box) (ImpDeclMarkers_47));
    MR_hl_field(0, base, 30) = ((MR_Box) (ImpImplPragmas_48));
    MR_hl_field(0, base, 31) = ((MR_Box) (ImpImplMarkers_49));
    MR_hl_field(0, base, 32) = ((MR_Box) (ImpPromises_50));
    MR_hl_field(0, base, 33) = ((MR_Box) (ImpInitialises_51));
    MR_hl_field(0, base, 34) = ((MR_Box) (ImpFinalises_52));
    MR_hl_field(0, base, 35) = ((MR_Box) (ImpMutables_69));
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_93_95_48_11_p_0(
  MR_Word Params_12,
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

  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_57_95_95_91_50_93_95_48_12_p_0(Params_12, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_57_95_95_91_50_93_95_48_12_p_0(
  MR_Word HeadVar__1_1,
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

      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_93_95_48_9_p_0(HeadVar__1_1, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
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
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_93_95_48_9_p_0(
  MR_Word Params_10,
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
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_119_105_116_104_95_105_110_115_116_95_95_91_50_93_95_48_18_p_0(Params_10, PredSymName_17, PredFormArity_27, Context_23, (MR_Integer) 1, MaybePredOrFunc0_18, &MaybePredOrFunc_28, WithInst0_20, &WithInst_29, &ExtraModes_30, MaybeDetism0_21, &MaybeDetism_31, ItemRecompDeps0_26, &ItemRecompDeps_32, STATE_VARIABLE_UsedModules_0_44, STATE_VARIABLE_UsedModules_45, Specs_16);
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
parse_tree__equiv_type__replace_in_list__ho19_11_p_0(
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

  parse_tree__equiv_type__replace_in_list_loop__ho20_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho20_12_p_0(
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

      parse_tree__equiv_type__replace_in_foreign_proc_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
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
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
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
parse_tree__equiv_type__replace_in_foreign_proc_9_p_0_1(
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

  parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ItemRecompDeps_20, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_UsedModules_22);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_20));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_22));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_foreign_proc_9_p_0(
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
  MR_Word PredName_17;
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
  PredName_17 = ((MR_Word) ((MR_hl_field(0, FPInfo0_12, 1))));
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
    MR_hl_field(0, ItemName_26, 0) = ((MR_Box) (PredName_17));
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
    MR_Word Var_61;
    MR_Word _AnythingChanged_36;
    MR_Word Var_59;

    Var_61 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_34, MaybeRecord_11, (MR_Word) ((MR_Unsigned) 0U), Types0_32, &Types_35, &_AnythingChanged_36, Var_61, &Var_59, TVarSet0_33, &TVarSet_37, ItemRecompDeps0_28, &ItemRecompDeps1_38, STATE_VARIABLE_UsedModules_0_46, &STATE_VARIABLE_UsedModules_1_51);
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
          MR_Word SharingPairs0_63 = ((MR_Word) ((MR_hl_field(1, Sharing0_30, 0))));
          MR_Word SharingPairs_64;
          MR_Word Var_65;
          MR_Box conv4_ItemRecompDeps_40;
          MR_Box conv3_STATE_VARIABLE_UsedModules_47;

          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_65, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[0]));
            MR_hl_field(0, Var_65, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_foreign_proc_9_p_0_1));
            MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_65, 3) = ((MR_Box) (TypeEqvMap_34));
            MR_hl_field(0, Var_65, 4) = ((MR_Box) (MaybeRecord_11));
            MR_hl_field(0, Var_65, 5) = ((MR_Box) (TVarSet0_33));
          }
          mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_65, SharingPairs0_63, &SharingPairs_64, ((MR_Box) (ItemRecompDeps1_38)), &conv4_ItemRecompDeps_40, ((MR_Box) (STATE_VARIABLE_UsedModules_1_51)), &conv3_STATE_VARIABLE_UsedModules_47);
          ItemRecompDeps_40 = ((MR_Word) (conv4_ItemRecompDeps_40));
          *STATE_VARIABLE_UsedModules_47 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_47));
          {
            Sharing_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Sharing_39, 0) = ((MR_Box) (SharingPairs_64));
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
    MR_hl_field(0, base, 1) = ((MR_Box) (PredName_17));
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
parse_tree__equiv_type__replace_in_list__ho18_11_p_0(
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

  parse_tree__equiv_type__replace_in_list_loop__ho21_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho21_12_p_0(
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

      parse_tree__equiv_type__replace_in_mutable_info_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
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
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
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
parse_tree__equiv_type__replace_in_mutable_info_9_p_0(
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
  MR_Word Inst_55;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_56;
  MR_Word STATE_VARIABLE_UsedModules_1_57;
  MR_Word InstEqvMap_63;
  MR_Word Var_64;
  MR_Word _TypeChanged_53;
  MR_Word _TVarSet_54;
  MR_Word Var_61;

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
  parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_50, MaybeRecord_11, (MR_Word) ((MR_Unsigned) 0U), Type0_42, &Type_52, &_TypeChanged_53, &Var_61, TVarSet0_51, &_TVarSet_54, ItemRecompDeps0_20, &STATE_VARIABLE_ItemRecompDeps_1_56, STATE_VARIABLE_UsedModules_0_24, &STATE_VARIABLE_UsedModules_1_57);
  InstEqvMap_63 = ((MR_Word) ((MR_hl_field(0, Params_10, 2))));
  Var_64 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0));
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(InstEqvMap_63, Var_64, Inst0_44, &Inst_55, STATE_VARIABLE_ItemRecompDeps_1_56, &ItemRecompDeps_21, STATE_VARIABLE_UsedModules_1_57, STATE_VARIABLE_UsedModules_25);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *MutableInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MutName_40));
    MR_hl_field(0, base, 1) = ((MR_Box) (OrigType_41));
    MR_hl_field(0, base, 2) = ((MR_Box) (Type_52));
    MR_hl_field(0, base, 3) = ((MR_Box) (OrigInst_43));
    MR_hl_field(0, base, 4) = ((MR_Box) (Inst_55));
    MR_hl_field(0, base, 5) = ((MR_Box) (InitValue_45));
    MR_hl_field(0, base, 6) = ((MR_Box) (Attrs_46));
    MR_hl_field(0, base, 7) = ((MR_Box) (Varset_47));
    MR_hl_field(0, base, 8) = ((MR_Box) (Context_48));
    MR_hl_field(0, base, 9) = ((MR_Box) (SeqNum_49));
  }
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_19, ItemRecompDeps_21, STATE_VARIABLE_RecompInfo_0_22, STATE_VARIABLE_RecompInfo_23);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho17_11_p_0(
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

  parse_tree__equiv_type__replace_in_list_loop__ho22_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho22_12_p_0(
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

      parse_tree__equiv_type__replace_in_decl_pragma_info_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
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
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
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
parse_tree__equiv_type__replace_in_decl_pragma_info_9_p_0_2(
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

  parse_tree__equiv_type__replace_in_subst_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_Subst_14, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_TVarSet_23, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_ItemRecompDeps_25, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_2 = ((MR_Box) (conv10_Subst_14));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_TVarSet_23));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_ItemRecompDeps_25));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_UsedModules_27));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_decl_pragma_info_9_p_0_1(
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

  parse_tree__equiv_type__replace_in_var_or_ground_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_23, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_25, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_23));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_25));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_27));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_decl_pragma_info_9_p_0(
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
            MR_Word ItemIds0_38;
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
            MR_Word ItemIds_62;
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
            ItemIds0_38 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_17, 5))));
            Context_39 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_17, 6))));
            SeqNum_40 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_17, 7))));
            HeadConstraint0_41 = ((MR_Word) ((MR_hl_field(0, OoMConstraints0_34, 0))));
            TailConstraints0_42 = ((MR_Word) ((MR_hl_field(0, OoMConstraints0_34, 1))));
            ModuleName_43 = ((MR_Word) ((MR_hl_field(0, Params_10, 0))));
            TypeEqvMap_45 = ((MR_Word) ((MR_hl_field(0, Params_10, 1))));
            {
              ItemRecompDeps0_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ItemRecompDeps0_44, 0) = ((MR_Box) (ModuleName_43));
              MR_hl_field(1, ItemRecompDeps0_44, 1) = ((MR_Box) (ItemIds0_38));
            }
            parse_tree__equiv_type__replace_in_var_or_ground_constraint_location_10_p_0(TypeEqvMap_45, MaybeRecord_11, HeadConstraint0_41, &HeadConstraint_46, TVarSet0_37, &TVarSet1_47, ItemRecompDeps0_44, &ItemRecompDeps1_48, STATE_VARIABLE_UsedModules_0_31, &STATE_VARIABLE_UsedModules_1_64);
            {
              Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_65, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[4]));
              MR_hl_field(0, Var_65, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_decl_pragma_info_9_p_0_1));
              MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_65, 3) = ((MR_Box) (TypeEqvMap_45));
              MR_hl_field(0, Var_65, 4) = ((MR_Box) (MaybeRecord_11));
            }
            mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_65, TailConstraints0_42, &TailConstraints_49, ((MR_Box) (TVarSet1_47)), &conv6_TVarSet2_50, ((MR_Box) (ItemRecompDeps1_48)), &conv5_ItemRecompDeps2_51, ((MR_Box) (STATE_VARIABLE_UsedModules_1_64)), &conv4_STATE_VARIABLE_UsedModules_2_66);
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
            parse_tree__equiv_type__replace_in_tvar_substs_12_p_0(TypeEqvMap_45, MaybeRecord_11, HeadSubst0_75, &HeadSubst_77, TailSubsts0_76, &TailSubsts_78, TVarSet2_50, &TVarSet3_56, ItemRecompDeps2_51, &ItemRecompDeps3_57, STATE_VARIABLE_UsedModules_2_66, &STATE_VARIABLE_UsedModules_3_67);
            {
              HeadSubst_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HeadSubst_55, 0) = ((MR_Box) (HeadSubst_77));
              MR_hl_field(0, HeadSubst_55, 1) = ((MR_Box) (TailSubsts_78));
            }
            {
              Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_68, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[5]));
              MR_hl_field(0, Var_68, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_decl_pragma_info_9_p_0_2));
              MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_68, 3) = ((MR_Box) (TypeEqvMap_45));
              MR_hl_field(0, Var_68, 4) = ((MR_Box) (MaybeRecord_11));
            }
            mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__equiv_type_scalar_common_1[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_68, TailSubsts0_54, &TailSubsts_58, ((MR_Box) (TVarSet3_56)), &conv13_TVarSet_59, ((MR_Box) (ItemRecompDeps3_57)), &conv12_ItemRecompDeps_60, ((MR_Box) (STATE_VARIABLE_UsedModules_3_67)), &conv11_STATE_VARIABLE_UsedModules_32);
            TVarSet_59 = ((MR_Word) (conv13_TVarSet_59));
            ItemRecompDeps_60 = ((MR_Word) (conv12_ItemRecompDeps_60));
            *STATE_VARIABLE_UsedModules_32 = ((MR_Word) (conv11_STATE_VARIABLE_UsedModules_32));
            {
              OoMSubsts_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OoMSubsts_61, 0) = ((MR_Box) (HeadSubst_55));
              MR_hl_field(0, OoMSubsts_61, 1) = ((MR_Box) (TailSubsts_58));
            }
            if ((ItemRecompDeps_60 == (MR_Word) ((MR_Unsigned) 0U)))
              ItemIds_62 = ItemIds0_38;
            else
              ItemIds_62 = ((MR_Word) ((MR_hl_field(1, ItemRecompDeps_60, 1))));
            {
              TypeSpecConstr_18 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeSpecConstr_18, 0) = ((MR_Box) (PragmaModuleName_33));
              MR_hl_field(0, TypeSpecConstr_18, 1) = ((MR_Box) (OoMConstraints_52));
              MR_hl_field(0, TypeSpecConstr_18, 2) = (MR_Box) ((MR_Unsigned) (ApplyToSupers_35));
              MR_hl_field(0, TypeSpecConstr_18, 3) = ((MR_Box) (OoMSubsts_61));
              MR_hl_field(0, TypeSpecConstr_18, 4) = ((MR_Box) (TVarSet_59));
              MR_hl_field(0, TypeSpecConstr_18, 5) = ((MR_Box) (ItemIds_62));
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

            parse_tree__equiv_type__replace_in_decl_pragma_type_spec_9_p_0(Params_10, MaybeRecord_11, TypeSpec0_19, &TypeSpec_20, STATE_VARIABLE_RecompInfo_0_29, STATE_VARIABLE_RecompInfo_30, STATE_VARIABLE_UsedModules_0_31, STATE_VARIABLE_UsedModules_32, Specs_16);
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
  MR_Word conv3_ConstraintArg_14;
  MR_Word conv2_STATE_VARIABLE_TVarSet_26;
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_28;
  MR_Word conv0_STATE_VARIABLE_UsedModules_30;

  parse_tree__equiv_type__replace_in_var_or_ground_type_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_ConstraintArg_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_26, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_28, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_30);
  *wrapper_arg_2 = ((MR_Box) (conv3_ConstraintArg_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_26));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_28));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_30));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_var_or_ground_constraint_location_10_p_0(
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
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[3]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_var_or_ground_constraint_location_10_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (TypeEqvMap_11));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (MaybeRecord_12));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_28, ConstraintArgs0_19, &ConstraintArgs_21, ((MR_Box) (STATE_VARIABLE_TVarSet_0_22)), &conv6_STATE_VARIABLE_TVarSet_23, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_0_24)), &conv5_STATE_VARIABLE_ItemRecompDeps_25, ((MR_Box) (STATE_VARIABLE_UsedModules_0_26)), &conv4_STATE_VARIABLE_UsedModules_27);
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
parse_tree__equiv_type__replace_in_decl_pragma_type_spec_9_p_0(
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
  MR_Word PredName_17;
  MR_Word NewName_18;
  MR_Word Subst0_19;
  MR_Word TVarSet0_20;
  MR_Word ItemIds0_21;
  MR_Word Context_22;
  MR_Word SeqNum_23;
  MR_Word ModuleName_24;
  MR_Word ItemRecompDeps0_26;
  MR_Word TypeEqvMap_27;
  MR_Word Subst_28;
  MR_Word TVarSet_29;
  MR_Word ItemRecompDeps_30;
  MR_Word ItemIds_31;
  MR_Word HeadSubst0_41;
  MR_Word TailSubsts0_42;
  MR_Word HeadSubst_43;
  MR_Word TailSubsts_44;

  *RecompInfo_6 = RecompInfo_14;
  *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
  PFUMM_16 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 0))));
  PredName_17 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 1))));
  NewName_18 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 2))));
  Subst0_19 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 3))));
  TVarSet0_20 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 4))));
  ItemIds0_21 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 5))));
  Context_22 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 6))));
  SeqNum_23 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 7))));
  ModuleName_24 = ((MR_Word) ((MR_hl_field(0, Params_10, 0))));
  succeeded = (RecompInfo_14 == (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
  {
    MR_Word Var_39;

    succeeded = ((MR_tag((MR_Word) PredName_17)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_39 = ((MR_Word) ((MR_hl_field(1, PredName_17, 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_24, Var_39);
    }
  }
  if (succeeded)
    ItemRecompDeps0_26 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      ItemRecompDeps0_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ItemRecompDeps0_26, 0) = ((MR_Box) (ModuleName_24));
      MR_hl_field(1, ItemRecompDeps0_26, 1) = ((MR_Box) (ItemIds0_21));
    }
  TypeEqvMap_27 = ((MR_Word) ((MR_hl_field(0, Params_10, 1))));
  HeadSubst0_41 = ((MR_Word) ((MR_hl_field(0, Subst0_19, 0))));
  TailSubsts0_42 = ((MR_Word) ((MR_hl_field(0, Subst0_19, 1))));
  parse_tree__equiv_type__replace_in_tvar_substs_12_p_0(TypeEqvMap_27, MaybeRecord_11, HeadSubst0_41, &HeadSubst_43, TailSubsts0_42, &TailSubsts_44, TVarSet0_20, &TVarSet_29, ItemRecompDeps0_26, &ItemRecompDeps_30, STATE_VARIABLE_UsedModules_0_33, STATE_VARIABLE_UsedModules_34);
  {
    Subst_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Subst_28, 0) = ((MR_Box) (HeadSubst_43));
    MR_hl_field(0, Subst_28, 1) = ((MR_Box) (TailSubsts_44));
  }
  if ((ItemRecompDeps_30 == (MR_Word) ((MR_Unsigned) 0U)))
    ItemIds_31 = ItemIds0_21;
  else
    ItemIds_31 = ((MR_Word) ((MR_hl_field(1, ItemRecompDeps_30, 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *TypeSpecInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PFUMM_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredName_17));
    MR_hl_field(0, base, 2) = ((MR_Box) (NewName_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (Subst_28));
    MR_hl_field(0, base, 4) = ((MR_Box) (TVarSet_29));
    MR_hl_field(0, base, 5) = ((MR_Box) (ItemIds_31));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_22));
    MR_hl_field(0, base, 7) = ((MR_Box) (SeqNum_23));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_tvar_substs_12_p_0(
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
  MR_Word Var_39;

  parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_13, MaybeRecord_14, (MR_Word) ((MR_Unsigned) 0U), HeadType0_23, &HeadType_24, &Var_25, &Var_39, STATE_VARIABLE_TVarSet_0_30, &STATE_VARIABLE_TVarSet_1_36, STATE_VARIABLE_ItemRecompDeps_0_32, &STATE_VARIABLE_ItemRecompDeps_1_37, STATE_VARIABLE_UsedModules_0_34, &STATE_VARIABLE_UsedModules_1_38);
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

    parse_tree__equiv_type__replace_in_tvar_substs_12_p_0(TypeEqvMap_13, MaybeRecord_14, HeadTailVarType0_26, &HeadTailVarType_28, TailTailVarsTypes0_27, &TailTailVarsTypes_29, STATE_VARIABLE_TVarSet_1_36, STATE_VARIABLE_TVarSet_31, STATE_VARIABLE_ItemRecompDeps_1_37, STATE_VARIABLE_ItemRecompDeps_33, STATE_VARIABLE_UsedModules_1_38, STATE_VARIABLE_UsedModules_35);
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
parse_tree__equiv_type__replace_in_list__ho13_11_p_0(
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

  parse_tree__equiv_type__replace_in_list_loop__ho26_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho26_12_p_0(
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

      parse_tree__equiv_type__replace_in_typeclass_info_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
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
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
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
parse_tree__equiv_type__replace_in_typeclass_info_9_p_0_2(
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
  MR_Word conv10_Decl_14;
  MR_Word conv9_STATE_VARIABLE_ItemRecompDeps_50;
  MR_Word conv8_STATE_VARIABLE_UsedModules_52;
  MR_Word conv7_STATE_VARIABLE_Specs_54;

  parse_tree__equiv_type__replace_in_class_decl_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_Decl_14, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_ItemRecompDeps_50, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_52, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_54);
  *wrapper_arg_2 = ((MR_Box) (conv10_Decl_14));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_ItemRecompDeps_50));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_52));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_54));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_9_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_9_p_0(
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
  MR_Word Var_51;
  MR_Box conv6_TVarSet_32;
  MR_Box conv5_ItemRecompDeps1_33;
  MR_Box conv4_STATE_VARIABLE_UsedModules_1_43;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), Vars_18, &Arity_26);
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
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_typeclass_info_9_p_0_1));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (TypeEqvMap_30));
    MR_hl_field(0, Var_51, 4) = ((MR_Box) (MaybeRecord_11));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_51, Constraints0_19, &Constraints_31, ((MR_Box) (TVarSet0_22)), &conv6_TVarSet_32, ((MR_Box) (ItemRecompDeps0_29)), &conv5_ItemRecompDeps1_33, ((MR_Box) (STATE_VARIABLE_UsedModules_0_40)), &conv4_STATE_VARIABLE_UsedModules_1_43);
  TVarSet_32 = ((MR_Word) (conv6_TVarSet_32));
  ItemRecompDeps1_33 = ((MR_Word) (conv5_ItemRecompDeps1_33));
  STATE_VARIABLE_UsedModules_1_43 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_1_43));
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
    MR_Word Var_56;
    MR_Box conv13_ItemRecompDeps_35;
    MR_Box conv12_STATE_VARIABLE_UsedModules_41;
    MR_Box conv11_Specs_16;

    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_56, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[2]));
      MR_hl_field(0, Var_56, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_typeclass_info_9_p_0_2));
      MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_56, 3) = ((MR_Box) (Params_10));
      MR_hl_field(0, Var_56, 4) = ((MR_Box) (MaybeRecord_11));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), Var_56, Methods0_36, &Methods_37, ((MR_Box) (ItemRecompDeps1_33)), &conv13_ItemRecompDeps_35, ((MR_Box) (STATE_VARIABLE_UsedModules_1_43)), &conv12_STATE_VARIABLE_UsedModules_41, ((MR_Box) ((MR_Unsigned) 0U)), &conv11_Specs_16);
    ItemRecompDeps_35 = ((MR_Word) (conv13_ItemRecompDeps_35));
    *STATE_VARIABLE_UsedModules_41 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_41));
    *Specs_16 = ((MR_Word) (conv11_Specs_16));
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
parse_tree__equiv_type__replace_in_list__ho12_11_p_0(
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

  parse_tree__equiv_type__replace_in_list_loop__ho27_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho27_12_p_0(
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

      parse_tree__equiv_type__replace_in_instance_info_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
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
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
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
parse_tree__equiv_type__replace_in_instance_info_9_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_instance_info_9_p_0(
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
  MR_Word Var_56;
  MR_Word Var_62;
  MR_Box conv6_TVarSet1_29;
  MR_Box conv5_ItemRecompDeps1_30;
  MR_Box conv4_STATE_VARIABLE_UsedModules_1_45;
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
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0]));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_instance_info_9_p_0_1));
    MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_56, 3) = ((MR_Box) (TypeEqvMap_27));
    MR_hl_field(0, Var_56, 4) = ((MR_Box) (MaybeRecord_11));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_56, Constraints0_19, &Constraints_28, ((MR_Box) (TVarSet0_21)), &conv6_TVarSet1_29, ((MR_Box) (ItemRecompDeps0_26)), &conv5_ItemRecompDeps1_30, ((MR_Box) (STATE_VARIABLE_UsedModules_0_42)), &conv4_STATE_VARIABLE_UsedModules_1_45);
  TVarSet1_29 = ((MR_Word) (conv6_TVarSet1_29));
  ItemRecompDeps1_30 = ((MR_Word) (conv5_ItemRecompDeps1_30));
  STATE_VARIABLE_UsedModules_1_45 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_1_45));
  Var_62 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_27, MaybeRecord_11, (MR_Word) ((MR_Unsigned) 0U), Types0_17, &Types_31, &Var_32, Var_62, &Var_33, TVarSet1_29, &TVarSet_34, ItemRecompDeps1_30, &ItemRecompDeps_35, STATE_VARIABLE_UsedModules_1_45, STATE_VARIABLE_UsedModules_43);
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
parse_tree__equiv_type__replace_in_list__ho11_11_p_0(
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

  parse_tree__equiv_type__replace_in_list_loop__ho28_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho28_12_p_0(
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

      parse_tree__equiv_type__replace_in_pred_decl_info_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
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
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
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
parse_tree__equiv_type__replace_in_pred_decl_info_9_p_0(
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
  parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_22_p_0(Params_10, MaybeRecord_11, PredSymName_17, PredOrFunc_18, Context_29, ClassContext0_28, &ClassContext_33, TypesAndMaybeModes0_19, &TypesAndMaybeModes_34, TVarSet0_24, &TVarSet_35, MaybeWithType0_20, &MaybeWithType_36, MaybeWithInst0_21, &MaybeWithInst_37, MaybeDetism0_22, &MaybeDetism_38, ItemRecompDeps0_32, &ItemRecompDeps_39, STATE_VARIABLE_UsedModules_0_47, STATE_VARIABLE_UsedModules_48, Specs_16);
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

static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_22_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__equiv_type__IntroducedFrom__pred__replace_in_pred_types_and_maybe_modes__1987__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_22_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__equiv_type__IntroducedFrom__pred__replace_in_pred_types_and_maybe_modes__2007__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_22_p_0(
  MR_Word Params_23,
  MR_Word MaybeRecord_24,
  MR_Word PredName_25,
  MR_Word PredOrFunc_26,
  MR_Word Context_27,
  MR_Word ClassContext0_28,
  MR_Word * ClassContext_29,
  MR_Word TypesAndMaybeModes0_30,
  MR_Word * TypesAndMaybeModes_31,
  MR_Word STATE_VARIABLE_TVarSet_0_77,
  MR_Word * STATE_VARIABLE_TVarSet_78,
  MR_Word MaybeWithType0_33,
  MR_Word * MaybeWithType_34,
  MR_Word MaybeWithInst0_35,
  MR_Word * MaybeWithInst_36,
  MR_Word STATE_VARIABLE_MaybeDetism_0_79,
  MR_Word * STATE_VARIABLE_MaybeDetism_80,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_81,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_82,
  MR_Word STATE_VARIABLE_UsedModules_0_83,
  MR_Word * STATE_VARIABLE_UsedModules_84,
  MR_Word * STATE_VARIABLE_Specs_85)
{
  MR_bool succeeded;
  MR_Word TypeEqvMap_41 = ((MR_Word) ((MR_hl_field(0, Params_23, 1))));
  MR_Word TypesAndMaybeModes1_42;
  MR_Word ExtraTypes_48;
  MR_Word PredFormArity_51;
  MR_Word ExtraModes_54;
  MR_Word ModeSpecs_55;
  MR_Word STATE_VARIABLE_TVarSet_1_86;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_87;
  MR_Word STATE_VARIABLE_UsedModules_1_88;
  MR_Word STATE_VARIABLE_TVarSet_2_89;
  MR_Word STATE_VARIABLE_ItemRecompDeps_2_90;
  MR_Word STATE_VARIABLE_UsedModules_2_91;
  MR_Word STATE_VARIABLE_ItemRecompDeps_3_93;
  MR_Word STATE_VARIABLE_UsedModules_3_94;
  MR_Word STATE_VARIABLE_Specs_1_95;
  MR_Word Var_150;
  MR_Word STATE_VARIABLE_ItemRecompDeps_4_152;
  MR_Word STATE_VARIABLE_Specs_4_154;
  MR_Word Var_52;
  MR_Word Var_53;

  parse_tree__equiv_type__replace_in_univ_exist_constraints_location_10_p_0(TypeEqvMap_41, MaybeRecord_24, ClassContext0_28, ClassContext_29, STATE_VARIABLE_TVarSet_0_77, &STATE_VARIABLE_TVarSet_1_86, STATE_VARIABLE_ItemRecompDeps_0_81, &STATE_VARIABLE_ItemRecompDeps_1_87, STATE_VARIABLE_UsedModules_0_83, &STATE_VARIABLE_UsedModules_1_88);
  parse_tree__equiv_type__replace_in_types_and_maybe_modes_10_p_0(TypeEqvMap_41, MaybeRecord_24, TypesAndMaybeModes0_30, &TypesAndMaybeModes1_42, STATE_VARIABLE_TVarSet_1_86, &STATE_VARIABLE_TVarSet_2_89, STATE_VARIABLE_ItemRecompDeps_1_87, &STATE_VARIABLE_ItemRecompDeps_2_90, STATE_VARIABLE_UsedModules_1_88, &STATE_VARIABLE_UsedModules_2_91);
  if ((MaybeWithType0_33 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ExtraTypes_48 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Specs_1_95 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TVarSet_78 = STATE_VARIABLE_TVarSet_2_89;
    STATE_VARIABLE_ItemRecompDeps_3_93 = STATE_VARIABLE_ItemRecompDeps_2_90;
    STATE_VARIABLE_UsedModules_3_94 = STATE_VARIABLE_UsedModules_2_91;
  }
  else
  {
    MR_Word WithType0_43 = ((MR_Word) ((MR_hl_field(1, MaybeWithType0_33, 0))));
    MR_Word WithType_44;
    MR_Word Var_45;
    MR_Word ExtraTypesPrime_47;
    MR_Word Var_208;
    MR_Word _Purity_46;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(TypeEqvMap_41, MaybeRecord_24, WithType0_43, &WithType_44, &Var_45, STATE_VARIABLE_TVarSet_2_89, STATE_VARIABLE_TVarSet_78, STATE_VARIABLE_ItemRecompDeps_2_90, &STATE_VARIABLE_ItemRecompDeps_3_93, STATE_VARIABLE_UsedModules_2_91, &STATE_VARIABLE_UsedModules_3_94);
    succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(WithType_44, &_Purity_46, &Var_208, &ExtraTypesPrime_47);
    if (succeeded)
      succeeded = (PredOrFunc_26 == Var_208);
    if (succeeded)
    {
      ExtraTypes_48 = ExtraTypesPrime_47;
      STATE_VARIABLE_Specs_1_95 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ExtraTypePieces_49;
      MR_Word ExtraTypeSpec_50;
      MR_Word Var_96;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_118;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_123;
      MR_Word Var_129;
      MR_Word Var_134;
      MR_Word Var_135;

      ExtraTypes_48 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_100, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
      }
      {
        Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_102, 1) = ((MR_Box) (PredName_25));
      }
      {
        Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
        MR_hl_field(1, Var_101, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[24])));
      }
      {
        Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
        MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_101));
      }
      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[15])));
        MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_99));
      }
      {
        Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_100));
        MR_hl_field(1, Var_123, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[27])));
      }
      {
        Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_120, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[25])));
        MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_123));
      }
      Var_119 = parse_tree__error_spec__color_as_correct_1_f_0(Var_120);
      Var_135 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[31])));
      Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_135, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])));
      Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[29])), Var_134);
      Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_119, Var_129);
      ExtraTypePieces_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, Var_118);
      {
        ExtraTypeSpec_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ExtraTypeSpec_50, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type.replace_in_pred_types_and_maybe_modes\'/22"));
        MR_hl_field(0, ExtraTypeSpec_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ExtraTypeSpec_50, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, ExtraTypeSpec_50, 3) = ((MR_Box) (Context_27));
        MR_hl_field(0, ExtraTypeSpec_50, 4) = ((MR_Box) (ExtraTypePieces_49));
      }
      {
        STATE_VARIABLE_Specs_1_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_1_95, 0) = ((MR_Box) (ExtraTypeSpec_50));
        MR_hl_field(1, STATE_VARIABLE_Specs_1_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
  PredFormArity_51 = parse_tree__prog_item__types_and_maybe_modes_arity_1_f_0(TypesAndMaybeModes0_30);
  {
    Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_150, 0) = ((MR_Box) (PredOrFunc_26));
  }
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_119_105_116_104_95_105_110_115_116_95_95_91_50_93_95_48_18_p_0(Params_23, PredName_25, PredFormArity_51, Context_27, (MR_Integer) 0, Var_150, &Var_52, MaybeWithInst0_35, &Var_53, &ExtraModes_54, STATE_VARIABLE_MaybeDetism_0_79, STATE_VARIABLE_MaybeDetism_80, STATE_VARIABLE_ItemRecompDeps_3_93, &STATE_VARIABLE_ItemRecompDeps_4_152, STATE_VARIABLE_UsedModules_3_94, STATE_VARIABLE_UsedModules_84, &ModeSpecs_55);
  STATE_VARIABLE_Specs_4_154 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_1_95, ModeSpecs_55);
  if ((STATE_VARIABLE_Specs_4_154 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (ExtraTypes_48 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ExtraModes_54 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *TypesAndMaybeModes_31 = TypesAndMaybeModes1_42;
      *STATE_VARIABLE_Specs_85 = STATE_VARIABLE_Specs_4_154;
    }
    else
      switch (MR_tag((MR_Word) TypesAndMaybeModes1_42)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((ExtraModes_54 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *TypesAndMaybeModes_31 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ExtraTypes_48));
            }
            *STATE_VARIABLE_Specs_85 = STATE_VARIABLE_Specs_4_154;
          }
          else
          {
            MR_Word MaybeExtraTypesAndModes_60;

            parse_tree__equiv_type__try_to_pair_extra_types_and_modes_6_p_0(PredOrFunc_26, PredName_25, Context_27, ExtraTypes_48, ExtraModes_54, &MaybeExtraTypesAndModes_60);
            if (((MR_tag((MR_Word) MaybeExtraTypesAndModes_60)) == (MR_Integer) 0))
            {
              MR_Word ExtraSpecs_62 = ((MR_Word) ((MR_hl_field(0, MaybeExtraTypesAndModes_60, 0))));

              *TypesAndMaybeModes_31 = TypesAndMaybeModes1_42;
              *STATE_VARIABLE_Specs_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ExtraSpecs_62, STATE_VARIABLE_Specs_4_154);
            }
            else
            {
              MR_Word ExtraTypesAndModes_61 = ((MR_Word) ((MR_hl_field(1, MaybeExtraTypesAndModes_60, 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *TypesAndMaybeModes_31 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (ExtraTypesAndModes_61));
              }
              *STATE_VARIABLE_Specs_85 = STATE_VARIABLE_Specs_4_154;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Types1_63 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes1_42, 0))));
            MR_Word Var_156;

            {
              Var_156 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_156, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[1]));
              MR_hl_field(0, Var_156, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_22_p_0_2));
              MR_hl_field(0, Var_156, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_156, 3) = ((MR_Box) (Types1_63));
              MR_hl_field(0, Var_156, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_not_3_p_0(Var_156, (MR_String) "predicate \140parse_tree.equiv_type.replace_in_pred_types_and_maybe_modes\'/22", (MR_String) "Types1 = []");
            if ((ExtraModes_54 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Types_64;

              Types_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types1_63, ExtraTypes_48);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *TypesAndMaybeModes_31 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Types_64));
              }
              *STATE_VARIABLE_Specs_85 = STATE_VARIABLE_Specs_4_154;
            }
            else
            {
              MR_Word Pieces_67;
              MR_Word Spec_68;
              MR_Word Var_160;
              MR_Word Var_161;
              MR_Word Var_172;
              MR_Word Var_173;

              *TypesAndMaybeModes_31 = TypesAndMaybeModes1_42;
              Var_160 = parse_tree__equiv_type__pred_decl_error_prefix_2_f_0(PredOrFunc_26, PredName_25);
              Var_173 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[39])));
              Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_173, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[41])));
              Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[37])), Var_172);
              Pieces_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_160, Var_161);
              {
                Spec_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_68, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type.replace_in_pred_types_and_maybe_modes\'/22"));
                MR_hl_field(0, Spec_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_68, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                MR_hl_field(0, Spec_68, 3) = ((MR_Box) (Context_27));
                MR_hl_field(0, Spec_68, 4) = ((MR_Box) (Pieces_67));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_85 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_68));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_4_154));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypesAndModes1_69 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes1_42, 0))));
            MR_Word Var_188;
            MR_Word MaybeExtraTypesAndModes_198;

            {
              Var_188 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_188, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[0]));
              MR_hl_field(0, Var_188, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_22_p_0_1));
              MR_hl_field(0, Var_188, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_188, 3) = ((MR_Box) (TypesAndModes1_69));
              MR_hl_field(0, Var_188, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_not_3_p_0(Var_188, (MR_String) "predicate \140parse_tree.equiv_type.replace_in_pred_types_and_maybe_modes\'/22", (MR_String) "TypesAndModes1 = []");
            parse_tree__equiv_type__try_to_pair_extra_types_and_modes_6_p_0(PredOrFunc_26, PredName_25, Context_27, ExtraTypes_48, ExtraModes_54, &MaybeExtraTypesAndModes_198);
            if (((MR_tag((MR_Word) MaybeExtraTypesAndModes_198)) == (MR_Integer) 0))
            {
              MR_Word ExtraSpecs_195 = ((MR_Word) ((MR_hl_field(0, MaybeExtraTypesAndModes_198, 0))));

              *TypesAndMaybeModes_31 = TypesAndMaybeModes1_42;
              *STATE_VARIABLE_Specs_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ExtraSpecs_195, STATE_VARIABLE_Specs_4_154);
            }
            else
            {
              MR_Word TypesAndModes_70;
              MR_Word ExtraTypesAndModes_194 = ((MR_Word) ((MR_hl_field(1, MaybeExtraTypesAndModes_198, 0))));

              TypesAndModes_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes1_69, ExtraTypesAndModes_194);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *TypesAndMaybeModes_31 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (TypesAndModes_70));
              }
              *STATE_VARIABLE_Specs_85 = STATE_VARIABLE_Specs_4_154;
            }
          }
          break;
      }
    if ((*STATE_VARIABLE_Specs_85 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeWithType_34 = (MR_Word) ((MR_Unsigned) 0U);
      *MaybeWithInst_36 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      *MaybeWithType_34 = MaybeWithType0_33;
      *MaybeWithInst_36 = MaybeWithInst0_35;
    }
  }
  else
  {
    *TypesAndMaybeModes_31 = TypesAndMaybeModes1_42;
    *STATE_VARIABLE_Specs_85 = STATE_VARIABLE_Specs_4_154;
    *MaybeWithType_34 = MaybeWithType0_33;
    *MaybeWithInst_36 = MaybeWithInst0_35;
  }
  succeeded = (ExtraTypes_48 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ExtraModes_54 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *STATE_VARIABLE_ItemRecompDeps_82 = STATE_VARIABLE_ItemRecompDeps_4_152;
  else
  {
    MR_Integer Arity_73 = (MR_Integer) (PredFormArity_51);
    MR_Word OrigItemType_74;
    MR_Word OrigItemName_75;
    MR_Word OrigItemId_76;

    OrigItemType_74 = recompilation__item_types__pred_or_func_to_recomp_item_type_1_f_0(PredOrFunc_26);
    {
      OrigItemName_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OrigItemName_75, 0) = ((MR_Box) (PredName_25));
      MR_hl_field(0, OrigItemName_75, 1) = ((MR_Box) (Arity_73));
    }
    {
      OrigItemId_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OrigItemId_76, 0) = (MR_Box) ((MR_Unsigned) (OrigItemType_74));
      MR_hl_field(0, OrigItemId_76, 1) = ((MR_Box) (OrigItemName_75));
    }
    recompilation__record_uses__gather_item_recomp_dep_3_p_0(OrigItemId_76, STATE_VARIABLE_ItemRecompDeps_4_152, STATE_VARIABLE_ItemRecompDeps_82);
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_119_105_116_104_95_105_110_115_116_95_95_91_50_93_95_48_18_p_0(
  MR_Word Params_19,
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
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_54,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_55,
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
    *STATE_VARIABLE_ItemRecompDeps_55 = STATE_VARIABLE_ItemRecompDeps_0_54;
    *STATE_VARIABLE_UsedModules_57 = STATE_VARIABLE_UsedModules_0_56;
  }
  else
  {
    MR_Word WithInst0_34 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_27, 0))));
    MR_Word WithInst_35;
    MR_Word STATE_VARIABLE_ItemRecompDeps_1_58;
    MR_Word InstEqvMap_125 = ((MR_Word) ((MR_hl_field(0, Params_19, 2))));
    MR_Word Var_126;
    MR_Word PredOrFunc_39;
    MR_Word ExtraModes0_40;
    MR_Word DetPrime_42;
    MR_Word GroundInstInfo_37;
    MR_Word HOInst_38;

    Var_126 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0));
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(InstEqvMap_125, Var_126, WithInst0_34, &WithInst_35, STATE_VARIABLE_ItemRecompDeps_0_54, &STATE_VARIABLE_ItemRecompDeps_1_58, STATE_VARIABLE_UsedModules_0_56, STATE_VARIABLE_UsedModules_57);
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
      recompilation__record_uses__gather_item_recomp_dep_3_p_0(OrigItemId_47, STATE_VARIABLE_ItemRecompDeps_1_58, STATE_VARIABLE_ItemRecompDeps_55);
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
        MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[75])));
      }
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[73])));
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
        MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[81])));
      }
      Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredOrFuncPieces_49, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[84])));
      Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[82])), Var_99);
      Var_93 = parse_tree__error_spec__color_as_correct_1_f_0(Var_94);
      Var_110 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[31])));
      Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_110, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])));
      Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[29])), Var_109);
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
      *STATE_VARIABLE_ItemRecompDeps_55 = STATE_VARIABLE_ItemRecompDeps_1_58;
      *STATE_VARIABLE_MaybeDetism_53 = STATE_VARIABLE_MaybeDetism_0_52;
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(
  MR_Word InstEqvMap_10,
  MR_Word ExpandedInstCtors0_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_26,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_27,
  MR_Word STATE_VARIABLE_UsedModules_0_28,
  MR_Word * STATE_VARIABLE_UsedModules_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Inst0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Inst0_13, 0)))) == (MR_Integer) 0)));
    MR_Word SymName_17;
    MR_Word ArgInsts_18;
    MR_Word Var_30;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_30 = ((MR_Word) ((MR_hl_field(3, Inst0_13, 1))));
      succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
      if (succeeded)
      {
        SymName_17 = ((MR_Word) ((MR_hl_field(0, Var_30, 0))));
        ArgInsts_18 = ((MR_Word) ((MR_hl_field(0, Var_30, 1))));
      }
    }
    if (succeeded)
    {
      MR_Word InstCtor_19;
      MR_Integer Var_31;

      Var_31 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_18);
      {
        InstCtor_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, InstCtor_19, 0) = ((MR_Box) (SymName_17));
        MR_hl_field(0, InstCtor_19, 1) = ((MR_Box) (Var_31));
      }
      succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), ((MR_Box) (InstCtor_19)), ExpandedInstCtors0_12);
      if (succeeded)
      {
        *Inst_14 = Inst0_13;
        *STATE_VARIABLE_UsedModules_29 = STATE_VARIABLE_UsedModules_0_28;
        *STATE_VARIABLE_ItemRecompDeps_27 = STATE_VARIABLE_ItemRecompDeps_0_26;
      }
      else
      {
        MR_Word EqvInstParams_21;
        MR_Word EqvInst_22;
        MR_Word EqvInstBody_20;
        MR_Box conv0_EqvInstBody_20;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0), InstEqvMap_10, ((MR_Box) (InstCtor_19)), &conv0_EqvInstBody_20);
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
          MR_Word ExpandedInstCtors_25;
          MR_Word Var_32;
          MR_Word STATE_VARIABLE_ItemRecompDeps_1_33;
          MR_Word next_value_of_ExpandedInstCtors0_12;
          MR_Word next_value_of_Inst0_13;
          MR_Word next_value_of_STATE_VARIABLE_ItemRecompDeps_0_26;

          parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(EqvInstParams_21, ArgInsts_18, EqvInst_22, &Inst1_23);
          InstCtorItem_24 = recompilation__item_types__inst_ctor_to_recomp_item_name_1_f_0(InstCtor_19);
          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_32, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
            MR_hl_field(0, Var_32, 1) = ((MR_Box) (InstCtorItem_24));
          }
          recompilation__record_uses__gather_item_recomp_dep_3_p_0(Var_32, STATE_VARIABLE_ItemRecompDeps_0_26, &STATE_VARIABLE_ItemRecompDeps_1_33);
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), ((MR_Box) (InstCtor_19)), ExpandedInstCtors0_12, &ExpandedInstCtors_25);
          // direct tailcall eliminated
          ;
          next_value_of_ExpandedInstCtors0_12 = ExpandedInstCtors_25;
          next_value_of_Inst0_13 = Inst1_23;
          next_value_of_STATE_VARIABLE_ItemRecompDeps_0_26 = STATE_VARIABLE_ItemRecompDeps_1_33;
          ExpandedInstCtors0_12 = next_value_of_ExpandedInstCtors0_12;
          Inst0_13 = next_value_of_Inst0_13;
          STATE_VARIABLE_ItemRecompDeps_0_26 = next_value_of_STATE_VARIABLE_ItemRecompDeps_0_26;
          continue;
        }
        else
        {
          *Inst_14 = Inst0_13;
          *STATE_VARIABLE_UsedModules_29 = STATE_VARIABLE_UsedModules_0_28;
          *STATE_VARIABLE_ItemRecompDeps_27 = STATE_VARIABLE_ItemRecompDeps_0_26;
        }
      }
    }
    else
    {
      *Inst_14 = Inst0_13;
      *STATE_VARIABLE_UsedModules_29 = STATE_VARIABLE_UsedModules_0_28;
      *STATE_VARIABLE_ItemRecompDeps_27 = STATE_VARIABLE_ItemRecompDeps_0_26;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(
  MR_Word TypeEqvMap_12,
  MR_Word MaybeRecord_13,
  MR_Word Type0_14,
  MR_Word * Type_15,
  MR_Word * Changed_16,
  MR_Word STATE_VARIABLE_TVarSet_0_21,
  MR_Word * STATE_VARIABLE_TVarSet_22,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_23,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26)
{
  MR_Word Var_20;

  parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_12, MaybeRecord_13, (MR_Word) ((MR_Unsigned) 0U), Type0_14, Type_15, Changed_16, &Var_20, STATE_VARIABLE_TVarSet_0_21, STATE_VARIABLE_TVarSet_22, STATE_VARIABLE_ItemRecompDeps_0_23, STATE_VARIABLE_ItemRecompDeps_24, STATE_VARIABLE_UsedModules_0_25, STATE_VARIABLE_UsedModules_26);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(
  MR_Word TypeEqvMap_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeCtorsAlreadyExpanded_16,
  MR_Word Type0_17,
  MR_Word * Type_18,
  MR_Word * Changed_19,
  MR_Word * Circ_20,
  MR_Word STATE_VARIABLE_TVarSet_0_45,
  MR_Word * STATE_VARIABLE_TVarSet_46,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_47,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_48,
  MR_Word STATE_VARIABLE_UsedModules_0_49,
  MR_Word * STATE_VARIABLE_UsedModules_50)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Type0_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Type_18 = Type0_17;
        *Changed_19 = (MR_Integer) 0;
        *Circ_20 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        *STATE_VARIABLE_TVarSet_46 = STATE_VARIABLE_TVarSet_0_45;
        *STATE_VARIABLE_ItemRecompDeps_48 = STATE_VARIABLE_ItemRecompDeps_0_47;
        *STATE_VARIABLE_UsedModules_50 = STATE_VARIABLE_UsedModules_0_49;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(1, Type0_17, 0))));
        MR_Word ArgTypes0_27 = ((MR_Word) ((MR_hl_field(1, Type0_17, 1))));
        MR_Word ArgTypes_28;
        MR_Word ArgTypesChanged_29;
        MR_Word Circ0_30;
        MR_Integer Arity_31;
        MR_Word TypeCtor_32;
        MR_Word Var_51;
        MR_Word STATE_VARIABLE_TVarSet_1_52;
        MR_Word STATE_VARIABLE_ItemRecompDeps_1_53;
        MR_Word STATE_VARIABLE_UsedModules_1_54;
        MR_Word Kind_73 = ((MR_Word) ((MR_hl_field(1, Type0_17, 2))));
        MR_Word AlreadyExpanded_85;
        MR_Word NewCirc_86;
        MR_Word EqvTypeParams0_89;
        MR_Word Body0_90;
        MR_Word Renaming_91;
        MR_Word STATE_VARIABLE_TVarSet_1_100;
        MR_Word EqvTypeBody_87;
        MR_Word EqvTVarSet_88;
        MR_Box conv0_EqvTypeBody_87;

        Var_51 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_14, MaybeRecord_15, TypeCtorsAlreadyExpanded_16, ArgTypes0_27, &ArgTypes_28, &ArgTypesChanged_29, Var_51, &Circ0_30, STATE_VARIABLE_TVarSet_0_45, &STATE_VARIABLE_TVarSet_1_52, STATE_VARIABLE_ItemRecompDeps_0_47, &STATE_VARIABLE_ItemRecompDeps_1_53, STATE_VARIABLE_UsedModules_0_49, &STATE_VARIABLE_UsedModules_1_54);
        Arity_31 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_28);
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
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0), TypeEqvMap_14, ((MR_Box) (TypeCtor_32)), &conv0_EqvTypeBody_87);
        if (succeeded)
        {
          EqvTypeBody_87 = ((MR_Word) (conv0_EqvTypeBody_87));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          EqvTVarSet_88 = ((MR_Word) ((MR_hl_field(0, EqvTypeBody_87, 0))));
          EqvTypeParams0_89 = ((MR_Word) ((MR_hl_field(0, EqvTypeBody_87, 1))));
          Body0_90 = ((MR_Word) ((MR_hl_field(0, EqvTypeBody_87, 2))));
          parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(STATE_VARIABLE_TVarSet_1_52, EqvTVarSet_88, &STATE_VARIABLE_TVarSet_1_100, &Renaming_91);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ0_30);
          if (succeeded)
            succeeded = (AlreadyExpanded_85 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word EqvTypeParams_92;
          MR_Word Body1_93;
          MR_Word TypeCtorItem_94;
          MR_Word Subst_95;
          MR_Word Body_96;
          MR_Word STATE_VARIABLE_UsedModules_1_101;
          MR_Word Var_102;
          MR_Word STATE_VARIABLE_ItemRecompDeps_1_103;
          MR_Word Var_105;
          MR_Word Var_97;

          parse_tree__equiv_type__maybe_record_type_ctor_sym_name_use_4_p_0(MaybeRecord_15, TypeCtor_32, STATE_VARIABLE_UsedModules_1_54, &STATE_VARIABLE_UsedModules_1_101);
          *Changed_19 = (MR_Integer) 1;
          mercury__map__apply_to_list_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), EqvTypeParams0_89, Renaming_91, &EqvTypeParams_92);
          parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(Renaming_91, Body0_90, &Body1_93);
          TypeCtorItem_94 = recompilation__item_types__type_ctor_to_recomp_item_name_1_f_0(TypeCtor_32);
          {
            Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_102, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Var_102, 1) = ((MR_Box) (TypeCtorItem_94));
          }
          recompilation__record_uses__gather_item_recomp_dep_3_p_0(Var_102, STATE_VARIABLE_ItemRecompDeps_1_53, &STATE_VARIABLE_ItemRecompDeps_1_103);
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), EqvTypeParams_92, ArgTypes_28, &Subst_95);
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_95, Body1_93, &Body_96);
          {
            Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_105, 0) = ((MR_Box) (TypeCtor_32));
            MR_hl_field(1, Var_105, 1) = ((MR_Box) (TypeCtorsAlreadyExpanded_16));
          }
          parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_14, MaybeRecord_15, Var_105, Body_96, Type_18, &Var_97, Circ_20, STATE_VARIABLE_TVarSet_1_100, STATE_VARIABLE_TVarSet_46, STATE_VARIABLE_ItemRecompDeps_1_103, STATE_VARIABLE_ItemRecompDeps_48, STATE_VARIABLE_UsedModules_1_101, STATE_VARIABLE_UsedModules_50);
        }
        else
        {
          switch (ArgTypesChanged_29) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word SymName_98 = ((MR_Word) ((MR_hl_field(0, TypeCtor_32, 0))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (SymName_98));
                  MR_hl_field(1, base, 1) = ((MR_Box) (ArgTypes_28));
                  MR_hl_field(1, base, 2) = ((MR_Box) (Kind_73));
                }
              }
              break;
            case (MR_Integer) 0:
              *Type_18 = Type0_17;
              break;
          }
          mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), NewCirc_86, Circ0_30, Circ_20);
          *STATE_VARIABLE_UsedModules_50 = STATE_VARIABLE_UsedModules_1_54;
          *STATE_VARIABLE_ItemRecompDeps_48 = STATE_VARIABLE_ItemRecompDeps_1_53;
          *STATE_VARIABLE_TVarSet_46 = STATE_VARIABLE_TVarSet_1_52;
          *Changed_19 = ArgTypesChanged_29;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *Type_18 = Type0_17;
        *Changed_19 = (MR_Integer) 0;
        *Circ_20 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        *STATE_VARIABLE_TVarSet_46 = STATE_VARIABLE_TVarSet_0_45;
        *STATE_VARIABLE_ItemRecompDeps_48 = STATE_VARIABLE_ItemRecompDeps_0_47;
        *STATE_VARIABLE_UsedModules_50 = STATE_VARIABLE_UsedModules_0_49;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type0_17, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TupleArgTypes0_39 = ((MR_Word) ((MR_hl_field(3, Type0_17, 1))));
            MR_Word TupleArgTypes_40;
            MR_Word Var_62;
            MR_Word Kind_74 = ((MR_Word) ((MR_hl_field(3, Type0_17, 2))));

            Var_62 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_14, MaybeRecord_15, TypeCtorsAlreadyExpanded_16, TupleArgTypes0_39, &TupleArgTypes_40, Changed_19, Var_62, Circ_20, STATE_VARIABLE_TVarSet_0_45, STATE_VARIABLE_TVarSet_46, STATE_VARIABLE_ItemRecompDeps_0_47, STATE_VARIABLE_ItemRecompDeps_48, STATE_VARIABLE_UsedModules_0_49, STATE_VARIABLE_UsedModules_50);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (TupleArgTypes_40));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Kind_74));
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
            MR_Word HOArgTypes0_35 = ((MR_Word) ((MR_hl_field(3, Type0_17, 2))));
            MR_Word HOInstInfo_36 = ((MR_Word) ((MR_hl_field(3, Type0_17, 3))));
            MR_Word Purity_37 = ((MR_Unsigned) ((MR_hl_field(3, Type0_17, 4))) & (MR_Integer) 3);
            MR_Word HOArgTypes_38;
            MR_Word Var_58;

            Var_58 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_14, MaybeRecord_15, TypeCtorsAlreadyExpanded_16, HOArgTypes0_35, &HOArgTypes_38, Changed_19, Var_58, Circ_20, STATE_VARIABLE_TVarSet_0_45, STATE_VARIABLE_TVarSet_46, STATE_VARIABLE_ItemRecompDeps_0_47, STATE_VARIABLE_ItemRecompDeps_48, STATE_VARIABLE_UsedModules_0_49, STATE_VARIABLE_UsedModules_50);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (PorF_34));
                  MR_hl_field(3, base, 2) = ((MR_Box) (HOArgTypes_38));
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
            MR_Word ApplyArgTypes0_41 = ((MR_Word) ((MR_hl_field(3, Type0_17, 2))));
            MR_Word ApplyArgTypes_42;
            MR_Word Var_66;
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(3, Type0_17, 1))));
            MR_Word Kind_76 = ((MR_Word) ((MR_hl_field(3, Type0_17, 3))));

            Var_66 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_14, MaybeRecord_15, TypeCtorsAlreadyExpanded_16, ApplyArgTypes0_41, &ApplyArgTypes_42, Changed_19, Var_66, Circ_20, STATE_VARIABLE_TVarSet_0_45, STATE_VARIABLE_TVarSet_46, STATE_VARIABLE_ItemRecompDeps_0_47, STATE_VARIABLE_ItemRecompDeps_48, STATE_VARIABLE_UsedModules_0_49, STATE_VARIABLE_UsedModules_50);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Var_75));
                  MR_hl_field(3, base, 2) = ((MR_Box) (ApplyArgTypes_42));
                  MR_hl_field(3, base, 3) = ((MR_Box) (Kind_76));
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
            MR_Word RawType0_43 = ((MR_Word) ((MR_hl_field(3, Type0_17, 1))));
            MR_Word RawType_44;
            MR_Word Kind_77 = ((MR_Word) ((MR_hl_field(3, Type0_17, 2))));

            parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_14, MaybeRecord_15, TypeCtorsAlreadyExpanded_16, RawType0_43, &RawType_44, Changed_19, Circ_20, STATE_VARIABLE_TVarSet_0_45, STATE_VARIABLE_TVarSet_46, STATE_VARIABLE_ItemRecompDeps_0_47, STATE_VARIABLE_ItemRecompDeps_48, STATE_VARIABLE_UsedModules_0_49, STATE_VARIABLE_UsedModules_50);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (RawType_44));
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
parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(
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
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_11,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_12,
  MR_Word STATE_VARIABLE_UsedModules_0_13,
  MR_Word * STATE_VARIABLE_UsedModules_14)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Integer) 0;
    *STATE_VARIABLE_UsedModules_14 = STATE_VARIABLE_UsedModules_0_13;
    *STATE_VARIABLE_ItemRecompDeps_12 = STATE_VARIABLE_ItemRecompDeps_0_11;
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
    MR_Word STATE_VARIABLE_ItemRecompDeps_1_56;
    MR_Word STATE_VARIABLE_UsedModules_1_57;
    MR_Word STATE_VARIABLE_Circ_1_58;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadType0_34, &HeadType_42, &HeadChanged_43, &HeadCirc_44, STATE_VARIABLE_TVarSet_0_9, &STATE_VARIABLE_TVarSet_1_55, STATE_VARIABLE_ItemRecompDeps_0_11, &STATE_VARIABLE_ItemRecompDeps_1_56, STATE_VARIABLE_UsedModules_0_13, &STATE_VARIABLE_UsedModules_1_57);
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), HeadCirc_44, HeadVar__7_7, &STATE_VARIABLE_Circ_1_58);
    parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, TailTypes0_35, &TailTypes_45, &TailChanged_46, STATE_VARIABLE_Circ_1_58, HeadVar__8_8, STATE_VARIABLE_TVarSet_1_55, STATE_VARIABLE_TVarSet_10, STATE_VARIABLE_ItemRecompDeps_1_56, STATE_VARIABLE_ItemRecompDeps_12, STATE_VARIABLE_UsedModules_1_57, STATE_VARIABLE_UsedModules_14);
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
  MR_Word conv8_STATE_VARIABLE_ItemRecompDeps_24;
  MR_Word conv7_STATE_VARIABLE_UsedModules_26;

  parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv11_Type_15, &conv10_Changed_16, ((MR_Word) (wrapper_arg_4)), &conv9_STATE_VARIABLE_TVarSet_22, ((MR_Word) (wrapper_arg_6)), &conv8_STATE_VARIABLE_ItemRecompDeps_24, ((MR_Word) (wrapper_arg_8)), &conv7_STATE_VARIABLE_UsedModules_26);
  *wrapper_arg_2 = ((MR_Box) (conv11_Type_15));
  *wrapper_arg_3 = ((MR_Box) (conv10_Changed_16));
  *wrapper_arg_5 = ((MR_Box) (conv9_STATE_VARIABLE_TVarSet_22));
  *wrapper_arg_7 = ((MR_Box) (conv8_STATE_VARIABLE_ItemRecompDeps_24));
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
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_25;
  MR_Word conv0_STATE_VARIABLE_UsedModules_27;

  parse_tree__equiv_type__replace_in_type_and_mode_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_TypeAndMode_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_23, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_25, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_2 = ((MR_Box) (conv3_TypeAndMode_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_23));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_25));
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
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_26,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_27,
  MR_Word STATE_VARIABLE_UsedModules_0_28,
  MR_Word * STATE_VARIABLE_UsedModules_29)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_TypeAndMaybeModes_0_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_TypeAndMaybeModes_23 = STATE_VARIABLE_TypeAndMaybeModes_0_22;
        *STATE_VARIABLE_TVarSet_25 = STATE_VARIABLE_TVarSet_0_24;
        *STATE_VARIABLE_ItemRecompDeps_27 = STATE_VARIABLE_ItemRecompDeps_0_26;
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
        MR_Box conv13_STATE_VARIABLE_ItemRecompDeps_27;
        MR_Box conv12_STATE_VARIABLE_UsedModules_29;

        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_30, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
          MR_hl_field(0, Var_30, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_types_and_maybe_modes_10_p_0_2));
          MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_30, 3) = ((MR_Box) (MaybeRecord_11));
          MR_hl_field(0, Var_30, 4) = ((MR_Box) (TypeEqvMap_12));
        }
        mercury__list__map2_foldl3_10_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_30, Types0_17, &Types_18, &Var_19, ((MR_Box) (STATE_VARIABLE_TVarSet_0_24)), &conv14_STATE_VARIABLE_TVarSet_25, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_0_26)), &conv13_STATE_VARIABLE_ItemRecompDeps_27, ((MR_Box) (STATE_VARIABLE_UsedModules_0_28)), &conv12_STATE_VARIABLE_UsedModules_29);
        *STATE_VARIABLE_TVarSet_25 = ((MR_Word) (conv14_STATE_VARIABLE_TVarSet_25));
        *STATE_VARIABLE_ItemRecompDeps_27 = ((MR_Word) (conv13_STATE_VARIABLE_ItemRecompDeps_27));
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
        MR_Box conv5_STATE_VARIABLE_ItemRecompDeps_27;
        MR_Box conv4_STATE_VARIABLE_UsedModules_29;

        {
          Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[1]));
          MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_types_and_maybe_modes_10_p_0_1));
          MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_35, 3) = ((MR_Box) (MaybeRecord_11));
          MR_hl_field(0, Var_35, 4) = ((MR_Box) (TypeEqvMap_12));
        }
        mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_35, TypesAndModes0_20, &TypesAndModes_21, ((MR_Box) (STATE_VARIABLE_TVarSet_0_24)), &conv6_STATE_VARIABLE_TVarSet_25, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_0_26)), &conv5_STATE_VARIABLE_ItemRecompDeps_27, ((MR_Box) (STATE_VARIABLE_UsedModules_0_28)), &conv4_STATE_VARIABLE_UsedModules_29);
        *STATE_VARIABLE_TVarSet_25 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_25));
        *STATE_VARIABLE_ItemRecompDeps_27 = ((MR_Word) (conv5_STATE_VARIABLE_ItemRecompDeps_27));
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
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[72])));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_11));
  }
  {
    PrefixPieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PrefixPieces_6, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[71])));
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
      MR_hl_field(1, Var_136, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[72])));
    }
    {
      Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_134, 0) = ((MR_Box) (Var_135));
      MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_136));
    }
    {
      PrefixPieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PrefixPieces_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[71])));
      MR_hl_field(1, PrefixPieces_16, 1) = ((MR_Box) (Var_134));
    }
    succeeded = (ExtraTypes_10 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word Var_19;
      MR_Word Var_30;
      MR_Word Var_31;

      Var_31 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[51])));
      Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])));
      Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[47])), Var_30);
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

        Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[61])));
        Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])));
        Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[59])), Var_59);
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

        Var_80 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[67])));
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
          MR_hl_field(1, Var_109, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[70])));
        }
        {
          Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
          MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_109));
        }
        Var_106 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_107);
        Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])));
        Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[29])), Var_105);
        Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, Var_100);
        Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[69])), Var_90);
        Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, Var_85);
        Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[65])), Var_79);
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
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_univ_exist_constraints_location_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Cs0_13,
  MR_Word * Cs_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_24,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27)
{
  MR_Word UnivCs0_18 = ((MR_Word) ((MR_hl_field(0, Cs0_13, 0))));
  MR_Word ExistCs0_19 = ((MR_Word) ((MR_hl_field(0, Cs0_13, 1))));
  MR_Word UnivCs_20;
  MR_Word ExistCs_21;
  MR_Word STATE_VARIABLE_TVarSet_1_28;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_29;
  MR_Word STATE_VARIABLE_UsedModules_1_30;
  MR_Word Var_31;
  MR_Box conv6_STATE_VARIABLE_TVarSet_1_28;
  MR_Box conv5_STATE_VARIABLE_ItemRecompDeps_1_29;
  MR_Box conv4_STATE_VARIABLE_UsedModules_1_30;
  MR_Box conv9_STATE_VARIABLE_TVarSet_23;
  MR_Box conv8_STATE_VARIABLE_ItemRecompDeps_25;
  MR_Box conv7_STATE_VARIABLE_UsedModules_27;

  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_univ_exist_constraints_location_10_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (TypeEqvMap_11));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (MaybeRecord_12));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_31, UnivCs0_18, &UnivCs_20, ((MR_Box) (STATE_VARIABLE_TVarSet_0_22)), &conv6_STATE_VARIABLE_TVarSet_1_28, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_0_24)), &conv5_STATE_VARIABLE_ItemRecompDeps_1_29, ((MR_Box) (STATE_VARIABLE_UsedModules_0_26)), &conv4_STATE_VARIABLE_UsedModules_1_30);
  STATE_VARIABLE_TVarSet_1_28 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_1_28));
  STATE_VARIABLE_ItemRecompDeps_1_29 = ((MR_Word) (conv5_STATE_VARIABLE_ItemRecompDeps_1_29));
  STATE_VARIABLE_UsedModules_1_30 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_1_30));
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_31, ExistCs0_19, &ExistCs_21, ((MR_Box) (STATE_VARIABLE_TVarSet_1_28)), &conv9_STATE_VARIABLE_TVarSet_23, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_1_29)), &conv8_STATE_VARIABLE_ItemRecompDeps_25, ((MR_Box) (STATE_VARIABLE_UsedModules_1_30)), &conv7_STATE_VARIABLE_UsedModules_27);
  *STATE_VARIABLE_TVarSet_23 = ((MR_Word) (conv9_STATE_VARIABLE_TVarSet_23));
  *STATE_VARIABLE_ItemRecompDeps_25 = ((MR_Word) (conv8_STATE_VARIABLE_ItemRecompDeps_25));
  *STATE_VARIABLE_UsedModules_27 = ((MR_Word) (conv7_STATE_VARIABLE_UsedModules_27));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Cs_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (UnivCs_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExistCs_21));
  }
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
parse_tree__equiv_type____Unify____equiv_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__equiv_type____Unify____equiv_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____equiv_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__equiv_type____Compare____equiv_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

void mercury__parse_tree__equiv_type__init(void)
{
}

void mercury__parse_tree__equiv_type__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_circ_types_0);
  MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_equiv_params_0);
  MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0);
  MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_pred_or_func_decl_type_0);
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
