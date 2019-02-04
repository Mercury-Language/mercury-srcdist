/*
** Automatically generated from `equiv_type.m'
** by the Mercury compiler,
** version rotd-=2018-12-28
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_int_module_section_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[3];

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

static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0;

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

static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0[2];

static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2];

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2];

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__equiv_type____vpti_func_2__pseudo_1__plain_parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1402__1_1_f_0(
  MR_Word LambdaHeadVar__1_242);

static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0(
  MR_Word TypeInfo_for_MS_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0(
  MR_Word TypeInfo_for_MS_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_25,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28);

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Ctor0_13,
  MR_Word * Ctor_14,
  MR_Word STATE_VARIABLE_VarSet_0_34,
  MR_Word * STATE_VARIABLE_VarSet_35,
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
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word * STATE_VARIABLE_VarSet_9,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_10,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_11,
  MR_Word STATE_VARIABLE_UsedModules_0_12,
  MR_Word * STATE_VARIABLE_UsedModules_13);

static void MR_CALL 
parse_tree__equiv_type__replace_in_class_method_11_p_0(
  MR_Word MaybeRecord_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word Method0_15,
  MR_Word * Method_16,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_46,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_47,
  MR_Word STATE_VARIABLE_UsedModules_0_48,
  MR_Word * STATE_VARIABLE_UsedModules_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51);

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Constraint0_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_25,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28);

static MR_bool MR_CALL 
parse_tree__equiv_type__non_abstract_imported_int_item_block_1_p_0(
  MR_Word ItemBlock_2);

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

static MR_bool MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word TypeEqvMap_3,
  MR_Word STATE_VARIABLE_RecompInfo_0_5,
  MR_Word * STATE_VARIABLE_RecompInfo_6,
  MR_Word STATE_VARIABLE_UsedModules_0_7,
  MR_Word * STATE_VARIABLE_UsedModules_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RecompInfo_0_5,
  MR_Word * STATE_VARIABLE_RecompInfo_6,
  MR_Word STATE_VARIABLE_UsedModules_0_7,
  MR_Word * STATE_VARIABLE_UsedModules_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_2,
  MR_Word * STATE_VARIABLE_TypeEqvMap_3,
  MR_Word STATE_VARIABLE_InstEqvMap_0_4,
  MR_Word * STATE_VARIABLE_InstEqvMap_5);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_items_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_2,
  MR_Word * STATE_VARIABLE_TypeEqvMap_3,
  MR_Word STATE_VARIABLE_InstEqvMap_0_4,
  MR_Word * STATE_VARIABLE_InstEqvMap_5);

static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho4_13_p_0(
  MR_Word ModuleName_1,
  MR_Word TypeEqvMap_2,
  MR_Word InstEqvMap_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevReplItemBlocks_0_6,
  MR_Word * STATE_VARIABLE_RevReplItemBlocks_7,
  MR_Word STATE_VARIABLE_RecompInfo_0_8,
  MR_Word * STATE_VARIABLE_RecompInfo_9,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(
  MR_Word ModuleName_1,
  MR_Word TypeEqvMap_2,
  MR_Word InstEqvMap_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevReplItemBlocks_0_6,
  MR_Word * STATE_VARIABLE_RevReplItemBlocks_7,
  MR_Word STATE_VARIABLE_RecompInfo_0_8,
  MR_Word * STATE_VARIABLE_RecompInfo_9,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho2_13_p_0(
  MR_Word ModuleName_1,
  MR_Word TypeEqvMap_2,
  MR_Word InstEqvMap_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevReplItemBlocks_0_6,
  MR_Word * STATE_VARIABLE_RevReplItemBlocks_7,
  MR_Word STATE_VARIABLE_RecompInfo_0_8,
  MR_Word * STATE_VARIABLE_RecompInfo_9,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho1_13_p_0(
  MR_Word ModuleName_1,
  MR_Word TypeEqvMap_2,
  MR_Word InstEqvMap_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevReplItemBlocks_0_6,
  MR_Word * STATE_VARIABLE_RevReplItemBlocks_7,
  MR_Word STATE_VARIABLE_RecompInfo_0_8,
  MR_Word * STATE_VARIABLE_RecompInfo_9,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
parse_tree__equiv_type__replace_in_items_13_p_0(
  MR_Word ModuleName_1,
  MR_Word TypeEqvMap_2,
  MR_Word InstEqvMap_3,
  MR_Word MaybeRecord_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevReplItems_0_6,
  MR_Word * STATE_VARIABLE_RevReplItems_7,
  MR_Word STATE_VARIABLE_RecompInfo_0_8,
  MR_Word * STATE_VARIABLE_RecompInfo_9,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word MaybeRecord_15,
  MR_Word Item0_16,
  MR_Word * Item_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_43,
  MR_Word * STATE_VARIABLE_RecompInfo_44,
  MR_Word STATE_VARIABLE_UsedModules_0_45,
  MR_Word * STATE_VARIABLE_UsedModules_46,
  MR_Word * Specs_20);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_97,
  MR_Word * STATE_VARIABLE_RecompInfo_98,
  MR_Word STATE_VARIABLE_UsedModules_0_99,
  MR_Word * STATE_VARIABLE_UsedModules_100,
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
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
  MR_Word MaybeRecord_12,
  MR_Word TypeEqvMap_13,
  MR_Word STATE_VARIABLE_Types_0_20,
  MR_Word * STATE_VARIABLE_Types_21,
  MR_Word * Changed_15,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_24,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27);

static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_7,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10);

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
  MR_Word STATE_VARIABLE_Ts_0_21,
  MR_Word * STATE_VARIABLE_Ts_22,
  MR_Word * Changed_16,
  MR_Word * ContainsCirc_17,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_25,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28);

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
  MR_Word STATE_VARIABLE_TypeVarSet_0_84,
  MR_Word * STATE_VARIABLE_TypeVarSet_85,
  MR_Word MaybeWithType0_35,
  MR_Word * MaybeWithType_36,
  MR_Word MaybeWithInst0_37,
  MR_Word * MaybeWithInst_38,
  MR_Word STATE_VARIABLE_MaybeDetism_0_86,
  MR_Word * STATE_VARIABLE_MaybeDetism_87,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_88,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_89,
  MR_Word STATE_VARIABLE_UsedModules_0_90,
  MR_Word * STATE_VARIABLE_UsedModules_91,
  MR_Word * STATE_VARIABLE_Specs_92);

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
  MR_Word STATE_VARIABLE_MaybeDetism_0_50,
  MR_Word * STATE_VARIABLE_MaybeDetism_51,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_52,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_53,
  MR_Word STATE_VARIABLE_UsedModules_0_54,
  MR_Word * STATE_VARIABLE_UsedModules_55,
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
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
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
parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(
  MR_Word MaybeRecord_12,
  MR_Word TypeEqvMap_13,
  MR_Word Type0_14,
  MR_Word * Type_15,
  MR_Word * Changed_16,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_23,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26);

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
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
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
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_21,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
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
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
  MR_Word MaybeRecord_14,
  MR_Word TypeEqvMap_15,
  MR_Word InstEqvMap_16,
  MR_Word TypeCtor_17,
  MR_Word TypeDefn0_18,
  MR_Word * TypeDefn_19,
  MR_Word * ContainsCirc_20,
  MR_Word STATE_VARIABLE_VarSet_0_47,
  MR_Word * STATE_VARIABLE_VarSet_48,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_49,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_50,
  MR_Word STATE_VARIABLE_UsedModules_0_51,
  MR_Word * STATE_VARIABLE_UsedModules_52);

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
  MR_Word STATE_VARIABLE_Ctors_0_17,
  MR_Word * STATE_VARIABLE_Ctors_18,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_21,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24);

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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
  MR_Word InstEqvMap_11,
  MR_Word ExpandedInstIds_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_26,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_27,
  MR_Word STATE_VARIABLE_UsedModules_0_28,
  MR_Word * STATE_VARIABLE_UsedModules_29);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(
  MR_Word MaybeRecord_14,
  MR_Word TypeEqvMap_15,
  MR_Word TypeCtorsAlreadyExpanded_16,
  MR_Word Type0_17,
  MR_Word * Type_18,
  MR_Word * Changed_19,
  MR_Word * Circ_20,
  MR_Word STATE_VARIABLE_VarSet_0_42,
  MR_Word * STATE_VARIABLE_VarSet_43,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_44,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_45,
  MR_Word STATE_VARIABLE_UsedModules_0_46,
  MR_Word * STATE_VARIABLE_UsedModules_47);

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
  MR_Word STATE_VARIABLE_Changed_0_46,
  MR_Word * STATE_VARIABLE_Changed_47,
  MR_Word STATE_VARIABLE_Circ_0_48,
  MR_Word * STATE_VARIABLE_Circ_49,
  MR_Word STATE_VARIABLE_VarSet_0_50,
  MR_Word * STATE_VARIABLE_VarSet_51,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_52,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_53,
  MR_Word STATE_VARIABLE_UsedModules_0_54,
  MR_Word * STATE_VARIABLE_UsedModules_55);

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
  MR_Word STATE_VARIABLE_VarSet_0_9,
  MR_Word * STATE_VARIABLE_VarSet_10,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_11,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_12,
  MR_Word STATE_VARIABLE_UsedModules_0_13,
  MR_Word * STATE_VARIABLE_UsedModules_14);

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
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[35][2];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[6][3];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[3][13];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[1][14];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[2][12];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_7[2][1];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_8[1][4];




static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[35][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_1[5]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_1[4]))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type after \140with_type\140."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[12])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected higher order "))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inst after \140with_inst\140."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[12])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: circular equivalence type"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In type declaration for"))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected higher order"))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: the \140with_type\140 and \140with_inst\140"))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "annotations are incompatible;"))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "they specify"))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but only"))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__equiv_type__replace_in_pred_type_23_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_8[0])),
    ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_8[0])),
    ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[3][13] = {
  /* row 0 */
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
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 1 */
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
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 2 */
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
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_7[2][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_8[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0),
    (MR_PseudoTypeInfo) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_int_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
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

static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0 = {
  (MR_String) "eqv_inst_body",
  INT16_C(3),
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
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "eqv_inst_body",
  {     parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0 },
  {     parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0
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
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "eqv_type_body",
  {     parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0 },
  {     parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0),
    (MR_TypeInfo) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_inst_eqv_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__equiv_type____Unify____inst_eqv_map_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____inst_eqv_map_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "inst_eqv_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "maybe_record_sym_name_use",
  {     parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_maybe_record_sym_name_use_0 },
  {     parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_maybe_record_sym_name_use_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_record_sym_name_use_0
};

static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0 = {
  (MR_String) "type_decl",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1 = {
  (MR_String) "mode_decl",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "pred_or_func_decl_type",
  {     parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0 },
  {     parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__equiv_type____vpti_func_2__pseudo_1__plain_parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_section_maybe_record_sym_name_use_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "section_maybe_record_sym_name_use",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__equiv_type____vpti_func_2__pseudo_1__plain_parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "type_eqv_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1402__1_1_f_0(
  MR_Word LambdaHeadVar__1_242)
{
  {
    MR_Word LambdaHeadVar__2_243;

    {
      LambdaHeadVar__2_243 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_243, 0) = ((MR_Box) (LambdaHeadVar__1_242));
    }
    return LambdaHeadVar__2_243;
  }
}

void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0(
  MR_Word TypeInfo_for_MS_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0(
  MR_Word TypeInfo_for_MS_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[11]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&parse_tree__equiv_type_scalar_common_1[11]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[9]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[10]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[9]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&parse_tree__equiv_type_scalar_common_1[10]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
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
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (MaybeRecord_10));
      MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (TypeEqvMap_11));
      MR_hl_field(MR_mktag(0), Var_41, 5) = ((MR_Box) (TVarSet_12));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_41, Sel0_39, &Sel_40, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_19)), &conv4_STATE_VARIABLE_EquivTypeInfo_23_23, ((MR_Box) (STATE_VARIABLE_UsedModules_0_21)), &conv3_STATE_VARIABLE_UsedModules_24_24);
    STATE_VARIABLE_EquivTypeInfo_23_23 = ((MR_Word) (conv4_STATE_VARIABLE_EquivTypeInfo_23_23));
    STATE_VARIABLE_UsedModules_24_24 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_24_24));
    {
      SSA_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SSA_15, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), SSA_15, 1) = ((MR_Box) (Sel_40));
    }
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SSB0_14, (MR_Integer) 0))));
    Sel0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SSB0_14, (MR_Integer) 1))));
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_41, Sel0_65, &Sel_66, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_23_23)), &conv6_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Box) (STATE_VARIABLE_UsedModules_24_24)), &conv5_STATE_VARIABLE_UsedModules_22);
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
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_and_mode_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word TypeAndMode0_13,
  MR_Word * TypeAndMode_14,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
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

    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_11, TypeEqvMap_12, (MR_Word) ((MR_Unsigned) 0U), Type0_35, &Type_36, &Var_22, &Var_51, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24, STATE_VARIABLE_EquivTypeInfo_0_25, STATE_VARIABLE_EquivTypeInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28);
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

    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_11, TypeEqvMap_12, (MR_Word) ((MR_Unsigned) 0U), Type0_18, &Type_19, &Var_20, &Var_70, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24, STATE_VARIABLE_EquivTypeInfo_0_25, STATE_VARIABLE_EquivTypeInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *TypeAndMode_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Type_19));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Ctor0_13,
  MR_Word * Ctor_14,
  MR_Word STATE_VARIABLE_VarSet_0_34,
  MR_Word * STATE_VARIABLE_VarSet_35,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_36,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39)
{
  {
    uint32_t Ordinal_18 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_13, (MR_Integer) 0)));
    MR_Word MaybeExistConstraints0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_13, (MR_Integer) 1))));
    MR_Word CtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_13, (MR_Integer) 2))));
    MR_Word CtorArgs0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_13, (MR_Integer) 3))));
    MR_Integer Arity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor0_13, (MR_Integer) 4))));
    MR_Word Ctxt_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_13, (MR_Integer) 5))));
    MR_Word CtorArgs_24;
    MR_Word MaybeExistConstraints_26;
    MR_Word STATE_VARIABLE_VarSet_40_40;
    MR_Word STATE_VARIABLE_EquivTypeInfo_41_41;
    MR_Word STATE_VARIABLE_UsedModules_42_42;
    MR_Word Var_25;

    parse_tree__equiv_type__replace_in_ctor_arg_list_loop_13_p_0(MaybeRecord_11, TypeEqvMap_12, (MR_Word) ((MR_Unsigned) 0U), CtorArgs0_21, &CtorArgs_24, (MR_Integer) 0, &Var_25, STATE_VARIABLE_VarSet_0_34, &STATE_VARIABLE_VarSet_40_40, STATE_VARIABLE_EquivTypeInfo_0_36, &STATE_VARIABLE_EquivTypeInfo_41_41, STATE_VARIABLE_UsedModules_0_38, &STATE_VARIABLE_UsedModules_42_42);
    if ((MaybeExistConstraints0_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeExistConstraints_26 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarSet_35 = STATE_VARIABLE_VarSet_40_40;
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

      parse_tree__equiv_type__replace_in_prog_constraint_list_location_10_p_0(MaybeRecord_11, TypeEqvMap_12, Constraints0_29, &Constraints_32, STATE_VARIABLE_VarSet_40_40, STATE_VARIABLE_VarSet_35, STATE_VARIABLE_EquivTypeInfo_41_41, STATE_VARIABLE_EquivTypeInfo_37, STATE_VARIABLE_UsedModules_42_42, STATE_VARIABLE_UsedModules_39);
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
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word * STATE_VARIABLE_VarSet_9,
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
    *STATE_VARIABLE_VarSet_9 = STATE_VARIABLE_VarSet_0_8;
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
    MR_Word ContainsCirc_45;
    MR_Word STATE_VARIABLE_VarSet_54_54;
    MR_Word STATE_VARIABLE_EquivTypeInfo_55_55;
    MR_Word STATE_VARIABLE_UsedModules_56_56;
    MR_Word STATE_VARIABLE_Circ_57_57;
    MR_Word Var_44;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Type0_41, &Type_43, &Var_44, &ContainsCirc_45, STATE_VARIABLE_VarSet_0_8, &STATE_VARIABLE_VarSet_54_54, STATE_VARIABLE_EquivTypeInfo_0_10, &STATE_VARIABLE_EquivTypeInfo_55_55, STATE_VARIABLE_UsedModules_0_12, &STATE_VARIABLE_UsedModules_56_56);
    {
      Arg_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Arg_34, 0) = ((MR_Box) (Name_40));
      MR_hl_field(MR_mktag(0), Arg_34, 1) = ((MR_Box) (Type_43));
      MR_hl_field(MR_mktag(0), Arg_34, 2) = ((MR_Box) (Context_42));
    }
    STATE_VARIABLE_Circ_57_57 = mercury__bool__or_2_f_0(STATE_VARIABLE_Circ_0_6, ContainsCirc_45);
    parse_tree__equiv_type__replace_in_ctor_arg_list_loop_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Args0_33, &Args_35, STATE_VARIABLE_Circ_57_57, STATE_VARIABLE_Circ_7, STATE_VARIABLE_VarSet_54_54, STATE_VARIABLE_VarSet_9, STATE_VARIABLE_EquivTypeInfo_55_55, STATE_VARIABLE_EquivTypeInfo_11, STATE_VARIABLE_UsedModules_56_56, STATE_VARIABLE_UsedModules_13);
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
parse_tree__equiv_type__replace_in_class_method_11_p_0(
  MR_Word MaybeRecord_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word Method0_15,
  MR_Word * Method_16,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_46,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_47,
  MR_Word STATE_VARIABLE_UsedModules_0_48,
  MR_Word * STATE_VARIABLE_UsedModules_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51)
{
  if (((MR_tag((MR_Word) Method0_15)) == (MR_Integer) 0))
  {
    MR_Word PredName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_15, (MR_Integer) 0))));
    MR_Word PredOrFunc_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Method0_15, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word TypesAndModes0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_15, (MR_Integer) 2))));
    MR_Word WithType0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_15, (MR_Integer) 3))));
    MR_Word WithInst0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_15, (MR_Integer) 4))));
    MR_Word MaybeDetism0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_15, (MR_Integer) 5))));
    MR_Word TypeVarSet0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_15, (MR_Integer) 6))));
    MR_Word InstVarSet_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_15, (MR_Integer) 7))));
    MR_Word ExistQVars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_15, (MR_Integer) 8))));
    MR_Word Purity_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Method0_15, (MR_Integer) 9))) & (MR_Integer) 3);
    MR_Word ClassContext0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_15, (MR_Integer) 10))));
    MR_Word Context_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_15, (MR_Integer) 11))));
    MR_Word ClassContext_32;
    MR_Word TypesAndModes_33;
    MR_Word TypeVarSet_34;
    MR_Word WithType_35;
    MR_Word WithInst_36;
    MR_Word MaybeDetism_37;
    MR_Word NewSpecs_38;

    parse_tree__equiv_type__replace_in_pred_type_23_p_0(MaybeRecord_12, PredName_20, PredOrFunc_21, Context_31, TypeEqvMap_13, InstEqvMap_14, ClassContext0_30, &ClassContext_32, TypesAndModes0_22, &TypesAndModes_33, TypeVarSet0_26, &TypeVarSet_34, WithType0_23, &WithType_35, WithInst0_24, &WithInst_36, MaybeDetism0_25, &MaybeDetism_37, STATE_VARIABLE_EquivTypeInfo_0_46, STATE_VARIABLE_EquivTypeInfo_47, STATE_VARIABLE_UsedModules_0_48, STATE_VARIABLE_UsedModules_49, &NewSpecs_38);
    *STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_38, STATE_VARIABLE_Specs_0_50);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *Method_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredName_20));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypesAndModes_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (WithType_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (WithInst_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MaybeDetism_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (TypeVarSet_34));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (InstVarSet_27));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ExistQVars_28));
      MR_hl_field(MR_mktag(0), base, 9) = (MR_Box) ((MR_Unsigned) (Purity_29));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ClassContext_32));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Context_31));
    }
  }
  else
  {
    MR_Word MaybePredOrFunc0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method0_15, (MR_Integer) 1))));
    MR_Word Modes0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method0_15, (MR_Integer) 2))));
    MR_Word ExtraModes_41;
    MR_Word MaybePredOrFunc_42;
    MR_Word Modes_43;
    MR_Integer Var_52;
    MR_Word PredName_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method0_15, (MR_Integer) 0))));
    MR_Word WithInst0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method0_15, (MR_Integer) 3))));
    MR_Word MaybeDetism0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method0_15, (MR_Integer) 4))));
    MR_Word InstVarSet_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method0_15, (MR_Integer) 5))));
    MR_Word Context_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method0_15, (MR_Integer) 6))));
    MR_Word WithInst_65;
    MR_Word MaybeDetism_66;
    MR_Word NewSpecs_67;

    Var_52 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_40);
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(InstEqvMap_14, PredName_60, Var_52, Context_64, (MR_Integer) 1, &ExtraModes_41, MaybePredOrFunc0_39, &MaybePredOrFunc_42, WithInst0_61, &WithInst_65, MaybeDetism0_62, &MaybeDetism_66, STATE_VARIABLE_EquivTypeInfo_0_46, STATE_VARIABLE_EquivTypeInfo_47, STATE_VARIABLE_UsedModules_0_48, STATE_VARIABLE_UsedModules_49, &NewSpecs_67);
    if ((ExtraModes_41 == (MR_Word) ((MR_Unsigned) 0U)))
      Modes_43 = Modes0_40;
    else
      Modes_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_40, ExtraModes_41);
    *STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_67, STATE_VARIABLE_Specs_0_50);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      *Method_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredName_60));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybePredOrFunc_42));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Modes_43));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (WithInst_65));
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (MaybeDetism_66));
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (InstVarSet_63));
      MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (Context_64));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Constraint0_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_25,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28)
{
  {
    MR_Word ClassName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_13, (MR_Integer) 0))));
    MR_Word ArgTypes0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_13, (MR_Integer) 1))));
    MR_Word ArgTypes_20;
    MR_Word Var_21;
    MR_Word Var_22;

    parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_11, TypeEqvMap_12, (MR_Word) ((MR_Unsigned) 0U), ArgTypes0_19, &ArgTypes_20, &Var_21, (MR_Integer) 0, &Var_22, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24, STATE_VARIABLE_EquivTypeInfo_0_25, STATE_VARIABLE_EquivTypeInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Constraint_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassName_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTypes_20));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type__non_abstract_imported_int_item_block_1_p_0(
  MR_Word ItemBlock_2)
{
  {
    MR_bool succeeded;
    MR_Word Section_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_2, (MR_Integer) 0))));

    succeeded = ((MR_tag((MR_Word) Section_3)) == (MR_Integer) 0);
    if (succeeded)
    {
    }
    return succeeded;
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Ctor_14;
    MR_Word conv2_STATE_VARIABLE_VarSet_35;
    MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_37;
    MR_Word conv0_STATE_VARIABLE_UsedModules_39;

    parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Ctor_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_VarSet_35, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_37, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_39);
    *wrapper_arg_2 = ((MR_Box) (conv3_Ctor_14));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_VarSet_35));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_37));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_39));
  }
}

void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word STATE_VARIABLE_Ctors_0_13,
  MR_Word * STATE_VARIABLE_Ctors_14,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_17,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_18)
{
  {
    MR_Word Var_23;
    MR_Word Var_38;
    MR_Box conv6_STATE_VARIABLE_VarSet_16;
    MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_18;
    MR_Box conv4_Var_12;

    Var_23 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (TypeEqvMap_8));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_38, STATE_VARIABLE_Ctors_0_13, STATE_VARIABLE_Ctors_14, ((MR_Box) (STATE_VARIABLE_VarSet_0_15)), &conv6_STATE_VARIABLE_VarSet_16, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_17)), &conv5_STATE_VARIABLE_EquivTypeInfo_18, ((MR_Box) (Var_23)), &conv4_Var_12);
    *STATE_VARIABLE_VarSet_16 = ((MR_Word) (conv6_STATE_VARIABLE_VarSet_16));
    *STATE_VARIABLE_EquivTypeInfo_18 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_18));
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Constraint_14;
    MR_Word conv2_STATE_VARIABLE_VarSet_24;
    MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
    MR_Word conv0_STATE_VARIABLE_UsedModules_28;

    parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
    *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_VarSet_24));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
  }
}

void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word STATE_VARIABLE_Constraints_0_13,
  MR_Word * STATE_VARIABLE_Constraints_14,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_17,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_18)
{
  {
    MR_Word Var_23;
    MR_Word Var_38;
    MR_Box conv6_STATE_VARIABLE_VarSet_16;
    MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_18;
    MR_Box conv4_Var_12;

    Var_23 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraint_list_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (TypeEqvMap_8));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_38, STATE_VARIABLE_Constraints_0_13, STATE_VARIABLE_Constraints_14, ((MR_Box) (STATE_VARIABLE_VarSet_0_15)), &conv6_STATE_VARIABLE_VarSet_16, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_17)), &conv5_STATE_VARIABLE_EquivTypeInfo_18, ((MR_Box) (Var_23)), &conv4_Var_12);
    *STATE_VARIABLE_VarSet_16 = ((MR_Word) (conv6_STATE_VARIABLE_VarSet_16));
    *STATE_VARIABLE_EquivTypeInfo_18 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_18));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Constraint_14;
    MR_Word conv2_STATE_VARIABLE_VarSet_24;
    MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
    MR_Word conv0_STATE_VARIABLE_UsedModules_28;

    parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
    *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_VarSet_24));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
  }
}

void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word Cs0_9,
  MR_Word * Cs_10,
  MR_Word STATE_VARIABLE_VarSet_0_14,
  MR_Word * STATE_VARIABLE_VarSet_15,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_16,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_17)
{
  {
    MR_Word Var_21;
    MR_Word UnivCs0_35;
    MR_Word ExistCs0_36;
    MR_Word UnivCs_37;
    MR_Word ExistCs_38;
    MR_Word STATE_VARIABLE_VarSet_28_39;
    MR_Word STATE_VARIABLE_EquivTypeInfo_29_40;
    MR_Word STATE_VARIABLE_UsedModules_30_41;
    MR_Word Var_59;
    MR_Box conv6_STATE_VARIABLE_VarSet_28_39;
    MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_29_40;
    MR_Box conv4_STATE_VARIABLE_UsedModules_30_41;
    MR_Word Var_13;

    Var_21 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
    UnivCs0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cs0_9, (MR_Integer) 0))));
    ExistCs0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cs0_9, (MR_Integer) 1))));
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (TypeEqvMap_8));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_59, UnivCs0_35, &UnivCs_37, ((MR_Box) (STATE_VARIABLE_VarSet_0_14)), &conv6_STATE_VARIABLE_VarSet_28_39, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_16)), &conv5_STATE_VARIABLE_EquivTypeInfo_29_40, ((MR_Box) (Var_21)), &conv4_STATE_VARIABLE_UsedModules_30_41);
    STATE_VARIABLE_VarSet_28_39 = ((MR_Word) (conv6_STATE_VARIABLE_VarSet_28_39));
    STATE_VARIABLE_EquivTypeInfo_29_40 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_29_40));
    STATE_VARIABLE_UsedModules_30_41 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_30_41));
    parse_tree__equiv_type__replace_in_prog_constraint_list_location_10_p_0((MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_8, ExistCs0_36, &ExistCs_38, STATE_VARIABLE_VarSet_28_39, STATE_VARIABLE_VarSet_15, STATE_VARIABLE_EquivTypeInfo_29_40, STATE_VARIABLE_EquivTypeInfo_17, STATE_VARIABLE_UsedModules_30_41, &Var_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Cs_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (UnivCs_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExistCs_38));
    }
  }
}

void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word STATE_VARIABLE_Typess_0_15,
  MR_Word * STATE_VARIABLE_Typess_16,
  MR_Word * Changed_11,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_19,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_20)
{
  {
    MR_Word Var_25;
    MR_Word Var_14;
    MR_Word Var_41;

    Var_25 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
    parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0((MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_9, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Typess_0_15, STATE_VARIABLE_Typess_16, Changed_11, (MR_Integer) 0, &Var_41, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18, STATE_VARIABLE_EquivTypeInfo_0_19, STATE_VARIABLE_EquivTypeInfo_20, Var_25, &Var_14);
  }
}

void MR_CALL 
parse_tree__equiv_type__replace_in_type_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word Type0_10,
  MR_Word * Type_11,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_18,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_19)
{
  {
    MR_Word Var_23;
    MR_Word Var_15;
    MR_Word Var_38;

    Var_23 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_9, (MR_Word) ((MR_Unsigned) 0U), Type0_10, Type_11, Changed_12, &Var_38, STATE_VARIABLE_VarSet_0_16, STATE_VARIABLE_VarSet_17, STATE_VARIABLE_EquivTypeInfo_0_18, STATE_VARIABLE_EquivTypeInfo_19, Var_23, &Var_15);
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__equiv_type__non_abstract_imported_int_item_block_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__equiv_type__non_abstract_imported_int_item_block_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0(
  MR_Word AugCompUnit0_10,
  MR_Word * AugCompUnit_11,
  MR_Word EventSpecMap0_12,
  MR_Word * EventSpecMap_13,
  MR_Word * TypeEqvMap_14,
  MR_Word * STATE_VARIABLE_UsedModules_41,
  MR_Word STATE_VARIABLE_RecompInfo_0_42,
  MR_Word * STATE_VARIABLE_RecompInfo_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 0))));
    MR_Word ModuleNameContext_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 1))));
    MR_Word ModuleVersionNumbers_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 2))));
    MR_Word SrcItemBlocks0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 3))));
    MR_Word DirectIntItemBlocks0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 4))));
    MR_Word IndirectIntItemBlocks0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 5))));
    MR_Word OptItemBlocks0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 6))));
    MR_Word IntForOptItemBlocks0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 7))));
    MR_Word InstEqvMap_26;
    MR_Word NonAbstractDirectIntItemBlocks0_27;
    MR_Word NonAbstractIndirectIntItemBlocks0_28;
    MR_Word RevSrcItemBlocks_29;
    MR_Word RevDirectIntItemBlocks_30;
    MR_Word RevIndirectIntItemBlocks_31;
    MR_Word RevIntForOptItemBlocks_32;
    MR_Word RevOptItemBlocks_33;
    MR_Word SrcItemBlocks_34;
    MR_Word DirectIntItemBlocks_35;
    MR_Word IndirectIntItemBlocks_36;
    MR_Word OptItemBlocks_37;
    MR_Word IntForOptItemBlocks_38;
    MR_Word EventSpecList0_39;
    MR_Word EventSpecList_40;
    MR_Word STATE_VARIABLE_TypeEqvMap_45_45;
    MR_Word STATE_VARIABLE_InstEqvMap_46_46;
    MR_Word STATE_VARIABLE_TypeEqvMap_47_47;
    MR_Word STATE_VARIABLE_InstEqvMap_48_48;
    MR_Word STATE_VARIABLE_TypeEqvMap_50_50;
    MR_Word STATE_VARIABLE_InstEqvMap_51_51;
    MR_Word STATE_VARIABLE_TypeEqvMap_53_53;
    MR_Word STATE_VARIABLE_InstEqvMap_54_54;
    MR_Word STATE_VARIABLE_TypeEqvMap_55_55;
    MR_Word STATE_VARIABLE_InstEqvMap_56_56;
    MR_Word STATE_VARIABLE_UsedModules_59_59;
    MR_Word STATE_VARIABLE_RecompInfo_63_63;
    MR_Word STATE_VARIABLE_UsedModules_64_64;
    MR_Word STATE_VARIABLE_Specs_65_65;
    MR_Word STATE_VARIABLE_RecompInfo_68_68;
    MR_Word STATE_VARIABLE_UsedModules_69_69;
    MR_Word STATE_VARIABLE_Specs_70_70;
    MR_Word STATE_VARIABLE_RecompInfo_73_73;
    MR_Word STATE_VARIABLE_UsedModules_74_74;
    MR_Word STATE_VARIABLE_Specs_75_75;
    MR_Word STATE_VARIABLE_RecompInfo_78_78;
    MR_Word STATE_VARIABLE_UsedModules_79_79;
    MR_Word STATE_VARIABLE_Specs_80_80;
    MR_Word STATE_VARIABLE_RecompInfo_83_83;
    MR_Word STATE_VARIABLE_UsedModules_84_84;
    MR_Word STATE_VARIABLE_Specs_85_85;

    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), &STATE_VARIABLE_TypeEqvMap_45_45);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0), &STATE_VARIABLE_InstEqvMap_46_46);
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(SrcItemBlocks0_21, STATE_VARIABLE_TypeEqvMap_45_45, &STATE_VARIABLE_TypeEqvMap_47_47, STATE_VARIABLE_InstEqvMap_46_46, &STATE_VARIABLE_InstEqvMap_48_48);
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[4]), DirectIntItemBlocks0_22, &NonAbstractDirectIntItemBlocks0_27);
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(NonAbstractDirectIntItemBlocks0_27, STATE_VARIABLE_TypeEqvMap_47_47, &STATE_VARIABLE_TypeEqvMap_50_50, STATE_VARIABLE_InstEqvMap_48_48, &STATE_VARIABLE_InstEqvMap_51_51);
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[5]), IndirectIntItemBlocks0_23, &NonAbstractIndirectIntItemBlocks0_28);
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(NonAbstractIndirectIntItemBlocks0_28, STATE_VARIABLE_TypeEqvMap_50_50, &STATE_VARIABLE_TypeEqvMap_53_53, STATE_VARIABLE_InstEqvMap_51_51, &STATE_VARIABLE_InstEqvMap_54_54);
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(IntForOptItemBlocks0_25, STATE_VARIABLE_TypeEqvMap_53_53, &STATE_VARIABLE_TypeEqvMap_55_55, STATE_VARIABLE_InstEqvMap_54_54, &STATE_VARIABLE_InstEqvMap_56_56);
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(OptItemBlocks0_24, STATE_VARIABLE_TypeEqvMap_55_55, TypeEqvMap_14, STATE_VARIABLE_InstEqvMap_56_56, &InstEqvMap_26);
    STATE_VARIABLE_UsedModules_59_59 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
    parse_tree__equiv_type__replace_in_item_blocks__ho4_13_p_0(ModuleName_18, *TypeEqvMap_14, InstEqvMap_26, SrcItemBlocks0_21, (MR_Word) ((MR_Unsigned) 0U), &RevSrcItemBlocks_29, STATE_VARIABLE_RecompInfo_0_42, &STATE_VARIABLE_RecompInfo_63_63, STATE_VARIABLE_UsedModules_59_59, &STATE_VARIABLE_UsedModules_64_64, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_65_65);
    parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(ModuleName_18, *TypeEqvMap_14, InstEqvMap_26, DirectIntItemBlocks0_22, (MR_Word) ((MR_Unsigned) 0U), &RevDirectIntItemBlocks_30, STATE_VARIABLE_RecompInfo_63_63, &STATE_VARIABLE_RecompInfo_68_68, STATE_VARIABLE_UsedModules_64_64, &STATE_VARIABLE_UsedModules_69_69, STATE_VARIABLE_Specs_65_65, &STATE_VARIABLE_Specs_70_70);
    parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(ModuleName_18, *TypeEqvMap_14, InstEqvMap_26, IndirectIntItemBlocks0_23, (MR_Word) ((MR_Unsigned) 0U), &RevIndirectIntItemBlocks_31, STATE_VARIABLE_RecompInfo_68_68, &STATE_VARIABLE_RecompInfo_73_73, STATE_VARIABLE_UsedModules_69_69, &STATE_VARIABLE_UsedModules_74_74, STATE_VARIABLE_Specs_70_70, &STATE_VARIABLE_Specs_75_75);
    parse_tree__equiv_type__replace_in_item_blocks__ho2_13_p_0(ModuleName_18, *TypeEqvMap_14, InstEqvMap_26, IntForOptItemBlocks0_25, (MR_Word) ((MR_Unsigned) 0U), &RevIntForOptItemBlocks_32, STATE_VARIABLE_RecompInfo_73_73, &STATE_VARIABLE_RecompInfo_78_78, STATE_VARIABLE_UsedModules_74_74, &STATE_VARIABLE_UsedModules_79_79, STATE_VARIABLE_Specs_75_75, &STATE_VARIABLE_Specs_80_80);
    parse_tree__equiv_type__replace_in_item_blocks__ho1_13_p_0(ModuleName_18, *TypeEqvMap_14, InstEqvMap_26, OptItemBlocks0_24, (MR_Word) ((MR_Unsigned) 0U), &RevOptItemBlocks_33, STATE_VARIABLE_RecompInfo_78_78, &STATE_VARIABLE_RecompInfo_83_83, STATE_VARIABLE_UsedModules_79_79, &STATE_VARIABLE_UsedModules_84_84, STATE_VARIABLE_Specs_80_80, &STATE_VARIABLE_Specs_85_85);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), RevSrcItemBlocks_29, &SrcItemBlocks_34);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), RevDirectIntItemBlocks_30, &DirectIntItemBlocks_35);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), RevIndirectIntItemBlocks_31, &IndirectIntItemBlocks_36);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), RevOptItemBlocks_33, &OptItemBlocks_37);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[3]), RevIntForOptItemBlocks_32, &IntForOptItemBlocks_38);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *AugCompUnit_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ModuleVersionNumbers_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (SrcItemBlocks_34));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (DirectIntItemBlocks_35));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IndirectIntItemBlocks_36));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (OptItemBlocks_37));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntForOptItemBlocks_38));
    }
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecMap0_12, &EventSpecList0_39);
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(EventSpecList0_39, &EventSpecList_40, *TypeEqvMap_14, STATE_VARIABLE_RecompInfo_83_83, STATE_VARIABLE_RecompInfo_43, STATE_VARIABLE_UsedModules_84_84, STATE_VARIABLE_UsedModules_41, STATE_VARIABLE_Specs_85_85, STATE_VARIABLE_Specs_44);
    mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecList_40, EventSpecMap_13);
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word TypeEqvMap_3,
  MR_Word STATE_VARIABLE_RecompInfo_0_5,
  MR_Word * STATE_VARIABLE_RecompInfo_6,
  MR_Word STATE_VARIABLE_UsedModules_0_7,
  MR_Word * STATE_VARIABLE_UsedModules_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
    *STATE_VARIABLE_UsedModules_8 = STATE_VARIABLE_UsedModules_0_7;
    *STATE_VARIABLE_RecompInfo_6 = STATE_VARIABLE_RecompInfo_0_5;
  }
  else
  {
    MR_String Name_22;
    MR_Word EventSpec0_23;
    MR_Word NameSpecs0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word EventSpec_25;
    MR_Word NameSpecs_26;
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_39;
    MR_Word STATE_VARIABLE_RecompInfo_40_40;
    MR_Word STATE_VARIABLE_UsedModules_41_41;
    MR_Word STATE_VARIABLE_Specs_42_42;
    MR_Integer EventNumber_59;
    MR_String EventName_60;
    MR_Integer EventLineNumber_61;
    MR_Word Attrs0_62;
    MR_Word SyntAttrNumOrder_63;
    MR_Word Attrs_64;

    Name_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 0))));
    EventSpec0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 1))));
    EventNumber_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EventSpec0_23, (MR_Integer) 0))));
    EventName_60 = ((MR_String) ((MR_hl_field(MR_mktag(0), EventSpec0_23, (MR_Integer) 1))));
    EventLineNumber_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EventSpec0_23, (MR_Integer) 2))));
    Attrs0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSpec0_23, (MR_Integer) 3))));
    SyntAttrNumOrder_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSpec0_23, (MR_Integer) 4))));
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(Attrs0_62, &Attrs_64, TypeEqvMap_3, STATE_VARIABLE_RecompInfo_0_5, &STATE_VARIABLE_RecompInfo_40_40, STATE_VARIABLE_UsedModules_0_7, &STATE_VARIABLE_UsedModules_41_41, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_42_42);
    {
      EventSpec_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), EventSpec_25, 0) = ((MR_Box) (EventNumber_59));
      MR_hl_field(MR_mktag(0), EventSpec_25, 1) = ((MR_Box) (EventName_60));
      MR_hl_field(MR_mktag(0), EventSpec_25, 2) = ((MR_Box) (EventLineNumber_61));
      MR_hl_field(MR_mktag(0), EventSpec_25, 3) = ((MR_Box) (Attrs_64));
      MR_hl_field(MR_mktag(0), EventSpec_25, 4) = ((MR_Box) (SyntAttrNumOrder_63));
    }
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Name_22));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (EventSpec_25));
    }
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(NameSpecs0_24, &NameSpecs_26, TypeEqvMap_3, STATE_VARIABLE_RecompInfo_40_40, STATE_VARIABLE_RecompInfo_6, STATE_VARIABLE_UsedModules_41_41, STATE_VARIABLE_UsedModules_8, STATE_VARIABLE_Specs_42_42, STATE_VARIABLE_Specs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NameSpecs_26));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RecompInfo_0_5,
  MR_Word * STATE_VARIABLE_RecompInfo_6,
  MR_Word STATE_VARIABLE_UsedModules_0_7,
  MR_Word * STATE_VARIABLE_UsedModules_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
    *STATE_VARIABLE_UsedModules_8 = STATE_VARIABLE_UsedModules_0_7;
    *STATE_VARIABLE_RecompInfo_6 = STATE_VARIABLE_RecompInfo_0_5;
  }
  else
  {
    MR_Word Attr0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Attrs0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Attr_24;
    MR_Word Attrs_25;
    MR_Word STATE_VARIABLE_UsedModules_38_38;
    MR_Integer AttrNum_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Attr0_22, (MR_Integer) 0))));
    MR_String AttrName_57 = ((MR_String) ((MR_hl_field(MR_mktag(0), Attr0_22, (MR_Integer) 1))));
    MR_Word AttrType0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr0_22, (MR_Integer) 2))));
    MR_Word AttrMode_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr0_22, (MR_Integer) 3))));
    MR_Word MaybeSynthCall_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr0_22, (MR_Integer) 4))));
    MR_Word TVarSet0_61;
    MR_Word AttrType_62;
    MR_Word _Changed_63;
    MR_Word _TVarSet_64;
    MR_Word _EquivTypeInfo_65;
    MR_Word Var_84;

    TVarSet0_61 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) ((MR_Unsigned) 0U), HeadVar__3_3, (MR_Word) ((MR_Unsigned) 0U), AttrType0_58, &AttrType_62, &_Changed_63, &Var_84, TVarSet0_61, &_TVarSet_64, (MR_Word) ((MR_Unsigned) 0U), &_EquivTypeInfo_65, STATE_VARIABLE_UsedModules_0_7, &STATE_VARIABLE_UsedModules_38_38);
    {
      Attr_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Attr_24, 0) = ((MR_Box) (AttrNum_56));
      MR_hl_field(MR_mktag(0), Attr_24, 1) = ((MR_Box) (AttrName_57));
      MR_hl_field(MR_mktag(0), Attr_24, 2) = ((MR_Box) (AttrType_62));
      MR_hl_field(MR_mktag(0), Attr_24, 3) = ((MR_Box) (AttrMode_59));
      MR_hl_field(MR_mktag(0), Attr_24, 4) = ((MR_Box) (MaybeSynthCall_60));
    }
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(Attrs0_23, &Attrs_25, HeadVar__3_3, STATE_VARIABLE_RecompInfo_0_5, STATE_VARIABLE_RecompInfo_6, STATE_VARIABLE_UsedModules_38_38, STATE_VARIABLE_UsedModules_8, STATE_VARIABLE_Specs_0_9, STATE_VARIABLE_Specs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Attr_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Attrs_25));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_2,
  MR_Word * STATE_VARIABLE_TypeEqvMap_3,
  MR_Word STATE_VARIABLE_InstEqvMap_0_4,
  MR_Word * STATE_VARIABLE_InstEqvMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_InstEqvMap_5 = STATE_VARIABLE_InstEqvMap_0_4;
      *STATE_VARIABLE_TypeEqvMap_3 = STATE_VARIABLE_TypeEqvMap_0_2;
    }
    else
    {
      MR_Word ItemBlock_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Items_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_12, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_TypeEqvMap_25_25;
      MR_Word STATE_VARIABLE_InstEqvMap_26_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeEqvMap_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InstEqvMap_0_4;

      parse_tree__equiv_type__build_eqv_maps_in_items_5_p_0(Items_20, STATE_VARIABLE_TypeEqvMap_0_2, &STATE_VARIABLE_TypeEqvMap_25_25, STATE_VARIABLE_InstEqvMap_0_4, &STATE_VARIABLE_InstEqvMap_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_13;
      next_value_of_STATE_VARIABLE_TypeEqvMap_0_2 = STATE_VARIABLE_TypeEqvMap_25_25;
      next_value_of_STATE_VARIABLE_InstEqvMap_0_4 = STATE_VARIABLE_InstEqvMap_26_26;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeEqvMap_0_2 = next_value_of_STATE_VARIABLE_TypeEqvMap_0_2;
      STATE_VARIABLE_InstEqvMap_0_4 = next_value_of_STATE_VARIABLE_InstEqvMap_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_items_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_2,
  MR_Word * STATE_VARIABLE_TypeEqvMap_3,
  MR_Word STATE_VARIABLE_InstEqvMap_0_4,
  MR_Word * STATE_VARIABLE_InstEqvMap_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_InstEqvMap_5 = STATE_VARIABLE_InstEqvMap_0_4;
      *STATE_VARIABLE_TypeEqvMap_3 = STATE_VARIABLE_TypeEqvMap_0_2;
    }
    else
    {
      MR_Word Item_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeEqvMap_20_20;
      MR_Word STATE_VARIABLE_InstEqvMap_21_21;
      MR_Word Name_32;
      MR_Word TypeParams_33;
      MR_Word VarSet_35;
      MR_Word EqvType_38;
      MR_Word ItemTypeDefn_31;
      MR_Word TypeDefn_34;
      MR_Word Var_46;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeEqvMap_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InstEqvMap_0_4;

      succeeded = ((MR_tag((MR_Word) Item_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        ItemTypeDefn_31 = (MR_Word) (MR_body((MR_Word) (Item_12), (MR_Integer) 1));
        Name_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_31, (MR_Integer) 0))));
        TypeParams_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_31, (MR_Integer) 1))));
        TypeDefn_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_31, (MR_Integer) 2))));
        VarSet_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_31, (MR_Integer) 3))));
        succeeded = ((((MR_tag((MR_Word) TypeDefn_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_34, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_34, (MR_Integer) 1))));
          EqvType_38 = (MR_Word) (Var_46);
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Integer Arity_39;
        MR_Word TypeCtor_40;
        MR_Word Var_47;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[4]), TypeParams_33, &Arity_39);
        {
          TypeCtor_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtor_40, 0) = ((MR_Box) (Name_32));
          MR_hl_field(MR_mktag(0), TypeCtor_40, 1) = ((MR_Box) (Arity_39));
        }
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (VarSet_35));
          MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (TypeParams_33));
          MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) (EqvType_38));
        }
        mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), ((MR_Box) (TypeCtor_40)), ((MR_Box) (Var_47)), STATE_VARIABLE_TypeEqvMap_0_2, &STATE_VARIABLE_TypeEqvMap_20_20);
        STATE_VARIABLE_InstEqvMap_21_21 = STATE_VARIABLE_InstEqvMap_0_4;
      }
      else
      {
        MR_Word InstParams_42;
        MR_Word EqvInst_44;
        MR_Word Name_57;
        MR_Word VarSet_58;
        MR_Word ItemInstDefn_41;
        MR_Word Var_49;

        succeeded = ((MR_tag((MR_Word) Item_12)) == (MR_Integer) 2);
        if (succeeded)
        {
          ItemInstDefn_41 = (MR_Word) (MR_body((MR_Word) (Item_12), (MR_Integer) 2));
          Name_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_41, (MR_Integer) 0))));
          InstParams_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_41, (MR_Integer) 1))));
          Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_41, (MR_Integer) 3))));
          VarSet_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_41, (MR_Integer) 4))));
          succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            EqvInst_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word InstId_45;
          MR_Word Var_50;
          MR_Integer Arity_56;

          mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), InstParams_42, &Arity_56);
          {
            InstId_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), InstId_45, 0) = ((MR_Box) (Name_57));
            MR_hl_field(MR_mktag(0), InstId_45, 1) = ((MR_Box) (Arity_56));
          }
          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (VarSet_58));
            MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (InstParams_42));
            MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (EqvInst_44));
          }
          mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0), ((MR_Box) (InstId_45)), ((MR_Box) (Var_50)), STATE_VARIABLE_InstEqvMap_0_4, &STATE_VARIABLE_InstEqvMap_21_21);
        }
        else
          STATE_VARIABLE_InstEqvMap_21_21 = STATE_VARIABLE_InstEqvMap_0_4;
        STATE_VARIABLE_TypeEqvMap_20_20 = STATE_VARIABLE_TypeEqvMap_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_TypeEqvMap_0_2 = STATE_VARIABLE_TypeEqvMap_20_20;
      next_value_of_STATE_VARIABLE_InstEqvMap_0_4 = STATE_VARIABLE_InstEqvMap_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeEqvMap_0_2 = next_value_of_STATE_VARIABLE_TypeEqvMap_0_2;
      STATE_VARIABLE_InstEqvMap_0_4 = next_value_of_STATE_VARIABLE_InstEqvMap_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho4_13_p_0(
  MR_Word ModuleName_1,
  MR_Word TypeEqvMap_2,
  MR_Word InstEqvMap_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevReplItemBlocks_0_6,
  MR_Word * STATE_VARIABLE_RevReplItemBlocks_7,
  MR_Word STATE_VARIABLE_RecompInfo_0_8,
  MR_Word * STATE_VARIABLE_RecompInfo_9,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      *STATE_VARIABLE_UsedModules_11 = STATE_VARIABLE_UsedModules_0_10;
      *STATE_VARIABLE_RecompInfo_9 = STATE_VARIABLE_RecompInfo_0_8;
      *STATE_VARIABLE_RevReplItemBlocks_7 = STATE_VARIABLE_RevReplItemBlocks_0_6;
    }
    else
    {
      MR_Word ItemBlock0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ItemBlocks0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Section_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 0))));
      MR_Word SectionContext_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 1))));
      MR_Word Incls_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 2))));
      MR_Word Avails_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 3))));
      MR_Word Items0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 4))));
      MR_Word MaybeRecord_45;
      MR_Word RevReplItems_46;
      MR_Word ReplItems_47;
      MR_Word ReplItemBlock_48;
      MR_Word STATE_VARIABLE_RecompInfo_58_58;
      MR_Word STATE_VARIABLE_UsedModules_59_59;
      MR_Word STATE_VARIABLE_Specs_60_60;
      MR_Word STATE_VARIABLE_RevReplItemBlocks_61_61;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_RevReplItemBlocks_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_8;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_12;

      switch (Section_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          MaybeRecord_45 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_7[0]));
          break;
        case (MR_Integer) 1:
          MaybeRecord_45 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_7[0]));
          break;
        case (MR_Integer) 0:
          MaybeRecord_45 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_7[1]));
          break;
      }
      parse_tree__equiv_type__replace_in_items_13_p_0(ModuleName_1, TypeEqvMap_2, InstEqvMap_3, MaybeRecord_45, Items0_44, (MR_Word) ((MR_Unsigned) 0U), &RevReplItems_46, STATE_VARIABLE_RecompInfo_0_8, &STATE_VARIABLE_RecompInfo_58_58, STATE_VARIABLE_UsedModules_0_10, &STATE_VARIABLE_UsedModules_59_59, STATE_VARIABLE_Specs_0_12, &STATE_VARIABLE_Specs_60_60);
      mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), RevReplItems_46, &ReplItems_47);
      {
        ReplItemBlock_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 0) = ((MR_Box) (Section_40));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 1) = ((MR_Box) (SectionContext_41));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 2) = ((MR_Box) (Incls_42));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 3) = ((MR_Box) (Avails_43));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 4) = ((MR_Box) (ReplItems_47));
      }
      {
        STATE_VARIABLE_RevReplItemBlocks_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevReplItemBlocks_61_61, 0) = ((MR_Box) (ReplItemBlock_48));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevReplItemBlocks_61_61, 1) = ((MR_Box) (STATE_VARIABLE_RevReplItemBlocks_0_6));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ItemBlocks0_35;
      next_value_of_STATE_VARIABLE_RevReplItemBlocks_0_6 = STATE_VARIABLE_RevReplItemBlocks_61_61;
      next_value_of_STATE_VARIABLE_RecompInfo_0_8 = STATE_VARIABLE_RecompInfo_58_58;
      next_value_of_STATE_VARIABLE_UsedModules_0_10 = STATE_VARIABLE_UsedModules_59_59;
      next_value_of_STATE_VARIABLE_Specs_0_12 = STATE_VARIABLE_Specs_60_60;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_RevReplItemBlocks_0_6 = next_value_of_STATE_VARIABLE_RevReplItemBlocks_0_6;
      STATE_VARIABLE_RecompInfo_0_8 = next_value_of_STATE_VARIABLE_RecompInfo_0_8;
      STATE_VARIABLE_UsedModules_0_10 = next_value_of_STATE_VARIABLE_UsedModules_0_10;
      STATE_VARIABLE_Specs_0_12 = next_value_of_STATE_VARIABLE_Specs_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(
  MR_Word ModuleName_1,
  MR_Word TypeEqvMap_2,
  MR_Word InstEqvMap_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevReplItemBlocks_0_6,
  MR_Word * STATE_VARIABLE_RevReplItemBlocks_7,
  MR_Word STATE_VARIABLE_RecompInfo_0_8,
  MR_Word * STATE_VARIABLE_RecompInfo_9,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      *STATE_VARIABLE_UsedModules_11 = STATE_VARIABLE_UsedModules_0_10;
      *STATE_VARIABLE_RecompInfo_9 = STATE_VARIABLE_RecompInfo_0_8;
      *STATE_VARIABLE_RevReplItemBlocks_7 = STATE_VARIABLE_RevReplItemBlocks_0_6;
    }
    else
    {
      MR_Word ItemBlock0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ItemBlocks0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Section_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 0))));
      MR_Word SectionContext_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 1))));
      MR_Word Incls_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 2))));
      MR_Word Avails_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 3))));
      MR_Word Items0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 4))));
      MR_Word RevReplItems_46;
      MR_Word ReplItems_47;
      MR_Word ReplItemBlock_48;
      MR_Word STATE_VARIABLE_RecompInfo_58_58;
      MR_Word STATE_VARIABLE_UsedModules_59_59;
      MR_Word STATE_VARIABLE_Specs_60_60;
      MR_Word STATE_VARIABLE_RevReplItemBlocks_61_61;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_RevReplItemBlocks_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_8;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_12;

      parse_tree__equiv_type__replace_in_items_13_p_0(ModuleName_1, TypeEqvMap_2, InstEqvMap_3, (MR_Word) ((MR_Unsigned) 0U), Items0_44, (MR_Word) ((MR_Unsigned) 0U), &RevReplItems_46, STATE_VARIABLE_RecompInfo_0_8, &STATE_VARIABLE_RecompInfo_58_58, STATE_VARIABLE_UsedModules_0_10, &STATE_VARIABLE_UsedModules_59_59, STATE_VARIABLE_Specs_0_12, &STATE_VARIABLE_Specs_60_60);
      mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), RevReplItems_46, &ReplItems_47);
      {
        ReplItemBlock_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 0) = ((MR_Box) (Section_40));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 1) = ((MR_Box) (SectionContext_41));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 2) = ((MR_Box) (Incls_42));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 3) = ((MR_Box) (Avails_43));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 4) = ((MR_Box) (ReplItems_47));
      }
      {
        STATE_VARIABLE_RevReplItemBlocks_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevReplItemBlocks_61_61, 0) = ((MR_Box) (ReplItemBlock_48));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevReplItemBlocks_61_61, 1) = ((MR_Box) (STATE_VARIABLE_RevReplItemBlocks_0_6));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ItemBlocks0_35;
      next_value_of_STATE_VARIABLE_RevReplItemBlocks_0_6 = STATE_VARIABLE_RevReplItemBlocks_61_61;
      next_value_of_STATE_VARIABLE_RecompInfo_0_8 = STATE_VARIABLE_RecompInfo_58_58;
      next_value_of_STATE_VARIABLE_UsedModules_0_10 = STATE_VARIABLE_UsedModules_59_59;
      next_value_of_STATE_VARIABLE_Specs_0_12 = STATE_VARIABLE_Specs_60_60;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_RevReplItemBlocks_0_6 = next_value_of_STATE_VARIABLE_RevReplItemBlocks_0_6;
      STATE_VARIABLE_RecompInfo_0_8 = next_value_of_STATE_VARIABLE_RecompInfo_0_8;
      STATE_VARIABLE_UsedModules_0_10 = next_value_of_STATE_VARIABLE_UsedModules_0_10;
      STATE_VARIABLE_Specs_0_12 = next_value_of_STATE_VARIABLE_Specs_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho2_13_p_0(
  MR_Word ModuleName_1,
  MR_Word TypeEqvMap_2,
  MR_Word InstEqvMap_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevReplItemBlocks_0_6,
  MR_Word * STATE_VARIABLE_RevReplItemBlocks_7,
  MR_Word STATE_VARIABLE_RecompInfo_0_8,
  MR_Word * STATE_VARIABLE_RecompInfo_9,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      *STATE_VARIABLE_UsedModules_11 = STATE_VARIABLE_UsedModules_0_10;
      *STATE_VARIABLE_RecompInfo_9 = STATE_VARIABLE_RecompInfo_0_8;
      *STATE_VARIABLE_RevReplItemBlocks_7 = STATE_VARIABLE_RevReplItemBlocks_0_6;
    }
    else
    {
      MR_Word ItemBlock0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ItemBlocks0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Section_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 0))));
      MR_Word SectionContext_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 1))));
      MR_Word Incls_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 2))));
      MR_Word Avails_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 3))));
      MR_Word Items0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 4))));
      MR_Word RevReplItems_46;
      MR_Word ReplItems_47;
      MR_Word ReplItemBlock_48;
      MR_Word STATE_VARIABLE_RecompInfo_58_58;
      MR_Word STATE_VARIABLE_UsedModules_59_59;
      MR_Word STATE_VARIABLE_Specs_60_60;
      MR_Word STATE_VARIABLE_RevReplItemBlocks_61_61;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_RevReplItemBlocks_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_8;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_12;

      parse_tree__equiv_type__replace_in_items_13_p_0(ModuleName_1, TypeEqvMap_2, InstEqvMap_3, (MR_Word) ((MR_Unsigned) 0U), Items0_44, (MR_Word) ((MR_Unsigned) 0U), &RevReplItems_46, STATE_VARIABLE_RecompInfo_0_8, &STATE_VARIABLE_RecompInfo_58_58, STATE_VARIABLE_UsedModules_0_10, &STATE_VARIABLE_UsedModules_59_59, STATE_VARIABLE_Specs_0_12, &STATE_VARIABLE_Specs_60_60);
      mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), RevReplItems_46, &ReplItems_47);
      {
        ReplItemBlock_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 0) = ((MR_Box) (Section_40));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 1) = ((MR_Box) (SectionContext_41));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 2) = ((MR_Box) (Incls_42));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 3) = ((MR_Box) (Avails_43));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 4) = ((MR_Box) (ReplItems_47));
      }
      {
        STATE_VARIABLE_RevReplItemBlocks_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevReplItemBlocks_61_61, 0) = ((MR_Box) (ReplItemBlock_48));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevReplItemBlocks_61_61, 1) = ((MR_Box) (STATE_VARIABLE_RevReplItemBlocks_0_6));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ItemBlocks0_35;
      next_value_of_STATE_VARIABLE_RevReplItemBlocks_0_6 = STATE_VARIABLE_RevReplItemBlocks_61_61;
      next_value_of_STATE_VARIABLE_RecompInfo_0_8 = STATE_VARIABLE_RecompInfo_58_58;
      next_value_of_STATE_VARIABLE_UsedModules_0_10 = STATE_VARIABLE_UsedModules_59_59;
      next_value_of_STATE_VARIABLE_Specs_0_12 = STATE_VARIABLE_Specs_60_60;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_RevReplItemBlocks_0_6 = next_value_of_STATE_VARIABLE_RevReplItemBlocks_0_6;
      STATE_VARIABLE_RecompInfo_0_8 = next_value_of_STATE_VARIABLE_RecompInfo_0_8;
      STATE_VARIABLE_UsedModules_0_10 = next_value_of_STATE_VARIABLE_UsedModules_0_10;
      STATE_VARIABLE_Specs_0_12 = next_value_of_STATE_VARIABLE_Specs_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho1_13_p_0(
  MR_Word ModuleName_1,
  MR_Word TypeEqvMap_2,
  MR_Word InstEqvMap_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevReplItemBlocks_0_6,
  MR_Word * STATE_VARIABLE_RevReplItemBlocks_7,
  MR_Word STATE_VARIABLE_RecompInfo_0_8,
  MR_Word * STATE_VARIABLE_RecompInfo_9,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      *STATE_VARIABLE_UsedModules_11 = STATE_VARIABLE_UsedModules_0_10;
      *STATE_VARIABLE_RecompInfo_9 = STATE_VARIABLE_RecompInfo_0_8;
      *STATE_VARIABLE_RevReplItemBlocks_7 = STATE_VARIABLE_RevReplItemBlocks_0_6;
    }
    else
    {
      MR_Word ItemBlock0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ItemBlocks0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Section_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 0))));
      MR_Word SectionContext_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 1))));
      MR_Word Incls_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 2))));
      MR_Word Avails_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 3))));
      MR_Word Items0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock0_34, (MR_Integer) 4))));
      MR_Word RevReplItems_46;
      MR_Word ReplItems_47;
      MR_Word ReplItemBlock_48;
      MR_Word STATE_VARIABLE_RecompInfo_58_58;
      MR_Word STATE_VARIABLE_UsedModules_59_59;
      MR_Word STATE_VARIABLE_Specs_60_60;
      MR_Word STATE_VARIABLE_RevReplItemBlocks_61_61;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_RevReplItemBlocks_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_8;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_12;

      parse_tree__equiv_type__replace_in_items_13_p_0(ModuleName_1, TypeEqvMap_2, InstEqvMap_3, (MR_Word) ((MR_Unsigned) 0U), Items0_44, (MR_Word) ((MR_Unsigned) 0U), &RevReplItems_46, STATE_VARIABLE_RecompInfo_0_8, &STATE_VARIABLE_RecompInfo_58_58, STATE_VARIABLE_UsedModules_0_10, &STATE_VARIABLE_UsedModules_59_59, STATE_VARIABLE_Specs_0_12, &STATE_VARIABLE_Specs_60_60);
      mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), RevReplItems_46, &ReplItems_47);
      {
        ReplItemBlock_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 0) = ((MR_Box) (Section_40));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 1) = ((MR_Box) (SectionContext_41));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 2) = ((MR_Box) (Incls_42));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 3) = ((MR_Box) (Avails_43));
        MR_hl_field(MR_mktag(0), ReplItemBlock_48, 4) = ((MR_Box) (ReplItems_47));
      }
      {
        STATE_VARIABLE_RevReplItemBlocks_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevReplItemBlocks_61_61, 0) = ((MR_Box) (ReplItemBlock_48));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevReplItemBlocks_61_61, 1) = ((MR_Box) (STATE_VARIABLE_RevReplItemBlocks_0_6));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ItemBlocks0_35;
      next_value_of_STATE_VARIABLE_RevReplItemBlocks_0_6 = STATE_VARIABLE_RevReplItemBlocks_61_61;
      next_value_of_STATE_VARIABLE_RecompInfo_0_8 = STATE_VARIABLE_RecompInfo_58_58;
      next_value_of_STATE_VARIABLE_UsedModules_0_10 = STATE_VARIABLE_UsedModules_59_59;
      next_value_of_STATE_VARIABLE_Specs_0_12 = STATE_VARIABLE_Specs_60_60;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_RevReplItemBlocks_0_6 = next_value_of_STATE_VARIABLE_RevReplItemBlocks_0_6;
      STATE_VARIABLE_RecompInfo_0_8 = next_value_of_STATE_VARIABLE_RecompInfo_0_8;
      STATE_VARIABLE_UsedModules_0_10 = next_value_of_STATE_VARIABLE_UsedModules_0_10;
      STATE_VARIABLE_Specs_0_12 = next_value_of_STATE_VARIABLE_Specs_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_items_13_p_0(
  MR_Word ModuleName_1,
  MR_Word TypeEqvMap_2,
  MR_Word InstEqvMap_3,
  MR_Word MaybeRecord_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevReplItems_0_6,
  MR_Word * STATE_VARIABLE_RevReplItems_7,
  MR_Word STATE_VARIABLE_RecompInfo_0_8,
  MR_Word * STATE_VARIABLE_RecompInfo_9,
  MR_Word STATE_VARIABLE_UsedModules_0_10,
  MR_Word * STATE_VARIABLE_UsedModules_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      *STATE_VARIABLE_UsedModules_11 = STATE_VARIABLE_UsedModules_0_10;
      *STATE_VARIABLE_RecompInfo_9 = STATE_VARIABLE_RecompInfo_0_8;
      *STATE_VARIABLE_RevReplItems_7 = STATE_VARIABLE_RevReplItems_0_6;
    }
    else
    {
      MR_Word Item0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Items0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Item_40;
      MR_Word ItemSpecs_41;
      MR_Word STATE_VARIABLE_RecompInfo_52_52;
      MR_Word STATE_VARIABLE_UsedModules_53_53;
      MR_Word STATE_VARIABLE_Specs_54_54;
      MR_Word STATE_VARIABLE_RevReplItems_55_55;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_RevReplItems_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_8;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_12;

      parse_tree__equiv_type__replace_in_item_11_p_0(ModuleName_1, TypeEqvMap_2, InstEqvMap_3, MaybeRecord_4, Item0_34, &Item_40, STATE_VARIABLE_RecompInfo_0_8, &STATE_VARIABLE_RecompInfo_52_52, STATE_VARIABLE_UsedModules_0_10, &STATE_VARIABLE_UsedModules_53_53, &ItemSpecs_41);
      if ((ItemSpecs_41 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevReplItems_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevReplItems_55_55, 0) = ((MR_Box) (Item_40));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevReplItems_55_55, 1) = ((MR_Box) (STATE_VARIABLE_RevReplItems_0_6));
        }
        STATE_VARIABLE_Specs_54_54 = STATE_VARIABLE_Specs_0_12;
      }
      else
      {
        STATE_VARIABLE_Specs_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_41, STATE_VARIABLE_Specs_0_12);
        STATE_VARIABLE_RevReplItems_55_55 = STATE_VARIABLE_RevReplItems_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Items0_35;
      next_value_of_STATE_VARIABLE_RevReplItems_0_6 = STATE_VARIABLE_RevReplItems_55_55;
      next_value_of_STATE_VARIABLE_RecompInfo_0_8 = STATE_VARIABLE_RecompInfo_52_52;
      next_value_of_STATE_VARIABLE_UsedModules_0_10 = STATE_VARIABLE_UsedModules_53_53;
      next_value_of_STATE_VARIABLE_Specs_0_12 = STATE_VARIABLE_Specs_54_54;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_RevReplItems_0_6 = next_value_of_STATE_VARIABLE_RevReplItems_0_6;
      STATE_VARIABLE_RecompInfo_0_8 = next_value_of_STATE_VARIABLE_RecompInfo_0_8;
      STATE_VARIABLE_UsedModules_0_10 = next_value_of_STATE_VARIABLE_UsedModules_0_10;
      STATE_VARIABLE_Specs_0_12 = next_value_of_STATE_VARIABLE_Specs_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word MaybeRecord_15,
  MR_Word Item0_16,
  MR_Word * Item_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_43,
  MR_Word * STATE_VARIABLE_RecompInfo_44,
  MR_Word STATE_VARIABLE_UsedModules_0_45,
  MR_Word * STATE_VARIABLE_UsedModules_46,
  MR_Word * Specs_20)
{
  switch (MR_tag((MR_Word) Item0_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Item_17 = Item0_16;
        *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_RecompInfo_44 = STATE_VARIABLE_RecompInfo_0_43;
        *STATE_VARIABLE_UsedModules_46 = STATE_VARIABLE_UsedModules_0_45;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemTypeDefn0_21 = (MR_Word) (MR_body((MR_Word) (Item0_16), (MR_Integer) 1));
        MR_Word ItemTypeDefn_22;

        parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(ModuleName_12, MaybeRecord_15, TypeEqvMap_13, InstEqvMap_14, ItemTypeDefn0_21, &ItemTypeDefn_22, STATE_VARIABLE_RecompInfo_0_43, STATE_VARIABLE_RecompInfo_44, STATE_VARIABLE_UsedModules_0_45, STATE_VARIABLE_UsedModules_46, Specs_20);
        *Item_17 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ItemTypeDefn_22)));
      }
      break;
    case (MR_Integer) 2:
      {
        *Item_17 = Item0_16;
        *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_RecompInfo_44 = STATE_VARIABLE_RecompInfo_0_43;
        *STATE_VARIABLE_UsedModules_46 = STATE_VARIABLE_UsedModules_0_45;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item0_16, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Item_17 = Item0_16;
            *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_RecompInfo_44 = STATE_VARIABLE_RecompInfo_0_43;
            *STATE_VARIABLE_UsedModules_46 = STATE_VARIABLE_UsedModules_0_45;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemPredDecl0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_16, (MR_Integer) 1))));
            MR_Word ItemPredDecl_25;

            parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(ModuleName_12, MaybeRecord_15, TypeEqvMap_13, InstEqvMap_14, ItemPredDecl0_24, &ItemPredDecl_25, STATE_VARIABLE_RecompInfo_0_43, STATE_VARIABLE_RecompInfo_44, STATE_VARIABLE_UsedModules_0_45, STATE_VARIABLE_UsedModules_46, Specs_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_17 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemPredDecl_25));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDecl0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_16, (MR_Integer) 1))));
            MR_Word ItemModeDecl_27;

            parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(ModuleName_12, InstEqvMap_14, ItemModeDecl0_26, &ItemModeDecl_27, STATE_VARIABLE_RecompInfo_0_43, STATE_VARIABLE_RecompInfo_44, STATE_VARIABLE_UsedModules_0_45, STATE_VARIABLE_UsedModules_46, Specs_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_17 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemModeDecl_27));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ItemPragma0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_16, (MR_Integer) 1))));
            MR_Word ItemPragma_29;

            parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(ModuleName_12, MaybeRecord_15, TypeEqvMap_13, ItemPragma0_28, &ItemPragma_29, STATE_VARIABLE_RecompInfo_0_43, STATE_VARIABLE_RecompInfo_44, STATE_VARIABLE_UsedModules_0_45, STATE_VARIABLE_UsedModules_46, Specs_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_17 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemPragma_29));
            }
          }
          break;
        case (MR_Integer) 4:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 11:
          {
            *Item_17 = Item0_16;
            *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_RecompInfo_44 = STATE_VARIABLE_RecompInfo_0_43;
            *STATE_VARIABLE_UsedModules_46 = STATE_VARIABLE_UsedModules_0_45;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ItemTypeClass0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_16, (MR_Integer) 1))));
            MR_Word ItemTypeClass_31;

            parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(ModuleName_12, MaybeRecord_15, TypeEqvMap_13, InstEqvMap_14, ItemTypeClass0_30, &ItemTypeClass_31, STATE_VARIABLE_RecompInfo_0_43, STATE_VARIABLE_RecompInfo_44, STATE_VARIABLE_UsedModules_0_45, STATE_VARIABLE_UsedModules_46, Specs_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_17 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemTypeClass_31));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ItemInstance0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_16, (MR_Integer) 1))));
            MR_Word ItemInstance_33;

            parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(ModuleName_12, MaybeRecord_15, TypeEqvMap_13, ItemInstance0_32, &ItemInstance_33, STATE_VARIABLE_RecompInfo_0_43, STATE_VARIABLE_RecompInfo_44, STATE_VARIABLE_UsedModules_0_45, STATE_VARIABLE_UsedModules_46, Specs_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_17 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemInstance_33));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word ItemMutable0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_16, (MR_Integer) 1))));
            MR_Word ItemMutable_35;

            parse_tree__equiv_type__replace_in_mutable_info_11_p_0(ModuleName_12, MaybeRecord_15, TypeEqvMap_13, InstEqvMap_14, ItemMutable0_34, &ItemMutable_35, STATE_VARIABLE_RecompInfo_0_43, STATE_VARIABLE_RecompInfo_44, STATE_VARIABLE_UsedModules_0_45, STATE_VARIABLE_UsedModules_46, Specs_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_17 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemMutable_35));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.equiv_type.replace_in_item\'/11", (MR_String) "item_type_repn nyi");
              return;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_97,
  MR_Word * STATE_VARIABLE_RecompInfo_98,
  MR_Word STATE_VARIABLE_UsedModules_0_99,
  MR_Word * STATE_VARIABLE_UsedModules_100,
  MR_Word * HeadVar__11_11)
{
  {
    MR_bool succeeded;
    MR_Word Pragma0_20;
    MR_Word Origin_21;
    MR_Word Context_22;
    MR_Integer SeqNum_23;
    MR_Word Pragma_41;

    *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
    Pragma0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 0))));
    Origin_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 1))));
    Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 2))));
    SeqNum_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 3))));
    switch (MR_tag((MR_Word) Pragma0_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          Pragma_41 = Pragma0_20;
          *STATE_VARIABLE_RecompInfo_98 = STATE_VARIABLE_RecompInfo_0_97;
          *STATE_VARIABLE_UsedModules_100 = STATE_VARIABLE_UsedModules_0_99;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FPInfo0_42 = (MR_Word) (MR_body((MR_Word) (Pragma0_20), (MR_Integer) 2));
          MR_Word Attrs0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_42, (MR_Integer) 0))));
          MR_Word PName_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_42, (MR_Integer) 1))));
          MR_Word PredOrFunc_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPInfo0_42, (MR_Integer) 2))) & (MR_Integer) 1);
          MR_Word ProcVars_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_42, (MR_Integer) 3))));
          MR_Word ProcVarset_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_42, (MR_Integer) 4))));
          MR_Word ProcInstVarset_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_42, (MR_Integer) 5))));
          MR_Word ProcImpl_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_42, (MR_Integer) 6))));
          MR_Word UserSharing0_51;
          MR_Word Attrs_62;
          MR_Word ItemId_63;
          MR_Word FPInfo_64;
          MR_Word STATE_VARIABLE_EquivTypeInfo_101_101;
          MR_Word STATE_VARIABLE_EquivTypeInfo_105_105;
          MR_Word Var_109;
          MR_Integer Var_110;
          MR_Word Sharing0_52;
          MR_Word Types0_54;
          MR_Word TVarSet0_55;
          MR_Word MaybeTypes0_53;
          MR_Word Var_102;

          recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, PName_44, STATE_VARIABLE_RecompInfo_0_97, &STATE_VARIABLE_EquivTypeInfo_101_101);
          UserSharing0_51 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(Attrs0_43);
          succeeded = (UserSharing0_51 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Sharing0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserSharing0_51, (MR_Integer) 0))));
            MaybeTypes0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserSharing0_51, (MR_Integer) 1))));
            succeeded = (MaybeTypes0_53 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypes0_53, (MR_Integer) 0))));
              Types0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_102, (MR_Integer) 0))));
              TVarSet0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_102, (MR_Integer) 1))));
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            MR_Word Types_56;
            MR_Word TVarSet_58;
            MR_Word Sharing_59;
            MR_Word MaybeTypes_60;
            MR_Word UserSharing_61;
            MR_Word STATE_VARIABLE_EquivTypeInfo_103_103;
            MR_Word STATE_VARIABLE_UsedModules_104_104;
            MR_Word Var_107;
            MR_Word _AnythingChanged_57;

            parse_tree__equiv_type__replace_in_type_list_location_11_p_0(MaybeRecord_13, TypeEqvMap_14, Types0_54, &Types_56, &_AnythingChanged_57, TVarSet0_55, &TVarSet_58, STATE_VARIABLE_EquivTypeInfo_101_101, &STATE_VARIABLE_EquivTypeInfo_103_103, STATE_VARIABLE_UsedModules_0_99, &STATE_VARIABLE_UsedModules_104_104);
            parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(MaybeRecord_13, TypeEqvMap_14, TVarSet0_55, Sharing0_52, &Sharing_59, STATE_VARIABLE_EquivTypeInfo_103_103, &STATE_VARIABLE_EquivTypeInfo_105_105, STATE_VARIABLE_UsedModules_104_104, STATE_VARIABLE_UsedModules_100);
            {
              Var_107 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (Types_56));
              MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (TVarSet_58));
            }
            {
              MaybeTypes_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeTypes_60, 0) = ((MR_Box) (Var_107));
            }
            {
              UserSharing_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), UserSharing_61, 0) = ((MR_Box) (Sharing_59));
              MR_hl_field(MR_mktag(1), UserSharing_61, 1) = ((MR_Box) (MaybeTypes_60));
            }
            parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(UserSharing_61, Attrs0_43, &Attrs_62);
          }
          else
          {
            Attrs_62 = Attrs0_43;
            STATE_VARIABLE_EquivTypeInfo_105_105 = STATE_VARIABLE_EquivTypeInfo_101_101;
            *STATE_VARIABLE_UsedModules_100 = STATE_VARIABLE_UsedModules_0_99;
          }
          Var_110 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), ProcVars_46);
          {
            Var_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (PName_44));
            MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (Var_110));
          }
          {
            ItemId_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemId_63, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(0), ItemId_63, 1) = ((MR_Box) (Var_109));
          }
          recompilation__finish_recording_expanded_items_4_p_0(ItemId_63, STATE_VARIABLE_EquivTypeInfo_105_105, STATE_VARIABLE_RecompInfo_0_97, STATE_VARIABLE_RecompInfo_98);
          {
            FPInfo_64 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FPInfo_64, 0) = ((MR_Box) (Attrs_62));
            MR_hl_field(MR_mktag(0), FPInfo_64, 1) = ((MR_Box) (PName_44));
            MR_hl_field(MR_mktag(0), FPInfo_64, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_45));
            MR_hl_field(MR_mktag(0), FPInfo_64, 3) = ((MR_Box) (ProcVars_46));
            MR_hl_field(MR_mktag(0), FPInfo_64, 4) = ((MR_Box) (ProcVarset_47));
            MR_hl_field(MR_mktag(0), FPInfo_64, 5) = ((MR_Box) (ProcInstVarset_48));
            MR_hl_field(MR_mktag(0), FPInfo_64, 6) = ((MR_Box) (ProcImpl_49));
          }
          Pragma_41 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (FPInfo_64)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma0_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
          case (MR_Integer) 20:
          case (MR_Integer) 21:
          case (MR_Integer) 22:
          case (MR_Integer) 23:
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 26:
          case (MR_Integer) 27:
          case (MR_Integer) 28:
          case (MR_Integer) 29:
          case (MR_Integer) 30:
            {
              Pragma_41 = Pragma0_20;
              *STATE_VARIABLE_RecompInfo_98 = STATE_VARIABLE_RecompInfo_0_97;
              *STATE_VARIABLE_UsedModules_100 = STATE_VARIABLE_UsedModules_0_99;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeSpecInfo0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_20, (MR_Integer) 1))));
              MR_Word PredName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_24, (MR_Integer) 0))));
              MR_Word NewName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_24, (MR_Integer) 1))));
              MR_Integer Arity_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_24, (MR_Integer) 2))));
              MR_Word PorF_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_24, (MR_Integer) 3))));
              MR_Word Modes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_24, (MR_Integer) 4))));
              MR_Word Subst0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_24, (MR_Integer) 5))));
              MR_Word VarSet0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_24, (MR_Integer) 6))));
              MR_Word ItemIds0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_24, (MR_Integer) 7))));
              MR_Word ExpandedItems0_34;
              MR_Word Subst_35;
              MR_Word VarSet_36;
              MR_Word ExpandedItems_37;
              MR_Word ItemIds_38;
              MR_Word TypeSpecInfo_40;

              succeeded = (STATE_VARIABLE_RecompInfo_0_97 == (MR_Word) ((MR_Unsigned) 0U));
              if (!(succeeded))
              {
                MR_Word Var_116;

                succeeded = ((MR_tag((MR_Word) PredName_25)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredName_25, (MR_Integer) 0))));
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_116);
                }
              }
              if (succeeded)
                ExpandedItems0_34 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word Var_112;

                {
                  Var_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (ModuleName_12));
                  MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (ItemIds0_32));
                }
                {
                  ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ExpandedItems0_34, 0) = ((MR_Box) (Var_112));
                }
              }
              parse_tree__equiv_type__replace_in_subst_10_p_0(MaybeRecord_13, TypeEqvMap_14, Subst0_30, &Subst_35, VarSet0_31, &VarSet_36, ExpandedItems0_34, &ExpandedItems_37, STATE_VARIABLE_UsedModules_0_99, STATE_VARIABLE_UsedModules_100);
              if ((ExpandedItems_37 == (MR_Word) ((MR_Unsigned) 0U)))
                ItemIds_38 = ItemIds0_32;
              else
              {
                MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExpandedItems_37, (MR_Integer) 0))));

                ItemIds_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_114, (MR_Integer) 1))));
              }
              {
                TypeSpecInfo_40 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeSpecInfo_40, 0) = ((MR_Box) (PredName_25));
                MR_hl_field(MR_mktag(0), TypeSpecInfo_40, 1) = ((MR_Box) (NewName_26));
                MR_hl_field(MR_mktag(0), TypeSpecInfo_40, 2) = ((MR_Box) (Arity_27));
                MR_hl_field(MR_mktag(0), TypeSpecInfo_40, 3) = ((MR_Box) (PorF_28));
                MR_hl_field(MR_mktag(0), TypeSpecInfo_40, 4) = ((MR_Box) (Modes_29));
                MR_hl_field(MR_mktag(0), TypeSpecInfo_40, 5) = ((MR_Box) (Subst_35));
                MR_hl_field(MR_mktag(0), TypeSpecInfo_40, 6) = ((MR_Box) (VarSet_36));
                MR_hl_field(MR_mktag(0), TypeSpecInfo_40, 7) = ((MR_Box) (ItemIds_38));
              }
              {
                Pragma_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Pragma_41, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Pragma_41, 1) = ((MR_Box) (TypeSpecInfo_40));
              }
              *STATE_VARIABLE_RecompInfo_98 = STATE_VARIABLE_RecompInfo_0_97;
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Info_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Pragma_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Origin_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_22));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (SeqNum_23));
    }
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
          MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1));
          MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (MaybeRecord_10));
          MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (TypeEqvMap_11));
          MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (TVarSet_12));
        }
        mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_24, SharingPairs0_18, &SharingPairs_19, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_20)), &conv4_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (STATE_VARIABLE_UsedModules_0_22)), &conv3_STATE_VARIABLE_UsedModules_23);
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
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
  MR_Word MaybeRecord_12,
  MR_Word TypeEqvMap_13,
  MR_Word STATE_VARIABLE_Types_0_20,
  MR_Word * STATE_VARIABLE_Types_21,
  MR_Word * Changed_15,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_24,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27)
{
  {
    MR_Word Var_19;

    parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_12, TypeEqvMap_13, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Types_0_20, STATE_VARIABLE_Types_21, Changed_15, (MR_Integer) 0, &Var_19, STATE_VARIABLE_VarSet_0_22, STATE_VARIABLE_VarSet_23, STATE_VARIABLE_EquivTypeInfo_0_24, STATE_VARIABLE_EquivTypeInfo_25, STATE_VARIABLE_UsedModules_0_26, STATE_VARIABLE_UsedModules_27);
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6,
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
    *STATE_VARIABLE_VarSet_6 = STATE_VARIABLE_VarSet_0_5;
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
    MR_Word STATE_VARIABLE_VarSet_41_41;
    MR_Word STATE_VARIABLE_EquivTypeInfo_42_42;
    MR_Word STATE_VARIABLE_UsedModules_43_43;
    MR_Word Var_32;
    MR_Word Var_61;

    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
    Type0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))));
    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(HeadVar__1_1, HeadVar__2_2, (MR_Word) ((MR_Unsigned) 0U), Type0_25, &Type_27, &Var_32, &Var_61, STATE_VARIABLE_VarSet_0_5, &STATE_VARIABLE_VarSet_41_41, STATE_VARIABLE_EquivTypeInfo_0_7, &STATE_VARIABLE_EquivTypeInfo_42_42, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_43_43);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (Type_27));
    }
    parse_tree__equiv_type__replace_in_subst_10_p_0(HeadVar__1_1, HeadVar__2_2, Subst0_26, &Subst_28, STATE_VARIABLE_VarSet_41_41, STATE_VARIABLE_VarSet_6, STATE_VARIABLE_EquivTypeInfo_42_42, STATE_VARIABLE_EquivTypeInfo_8, STATE_VARIABLE_UsedModules_43_43, STATE_VARIABLE_UsedModules_10);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Constraint_14;
    MR_Word conv2_STATE_VARIABLE_VarSet_24;
    MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
    MR_Word conv0_STATE_VARIABLE_UsedModules_28;

    parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
    *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_VarSet_24));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
  }
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
  {
    MR_bool succeeded;
    MR_Word ClassName_20;
    MR_Word Types0_21;
    MR_Word OriginalTypes_22;
    MR_Word Constraints0_23;
    MR_Word InstanceBody_24;
    MR_Word VarSet0_25;
    MR_Word ContainingModuleName_26;
    MR_Word Context_27;
    MR_Integer SeqNum_28;
    MR_Word UsedTypeCtors0_29;
    MR_Word Constraints_30;
    MR_Word VarSet1_31;
    MR_Word UsedTypeCtors1_32;
    MR_Word Types_33;
    MR_Word VarSet_36;
    MR_Word UsedTypeCtors_37;
    MR_Integer Arity_38;
    MR_Word ItemId_39;
    MR_Word STATE_VARIABLE_UsedModules_46_46;
    MR_Word Var_49;
    MR_Word Var_68;
    MR_Box conv6_VarSet1_31;
    MR_Box conv5_UsedTypeCtors1_32;
    MR_Box conv4_STATE_VARIABLE_UsedModules_46_46;
    MR_Word Var_34;
    MR_Word Var_35;

    *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
    ClassName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 0))));
    Types0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 1))));
    OriginalTypes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 2))));
    Constraints0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 3))));
    InstanceBody_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 4))));
    VarSet0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 5))));
    ContainingModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 6))));
    Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 7))));
    SeqNum_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 8))));
    succeeded = (STATE_VARIABLE_RecompInfo_0_40 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ContainingModuleName_26, ModuleName_12);
    if (succeeded)
      UsedTypeCtors0_29 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_44;
      MR_Word Var_45;

      Var_45 = mercury__set__init_0_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0));
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (ModuleName_12));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (Var_45));
      }
      {
        UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), UsedTypeCtors0_29, 0) = ((MR_Box) (Var_44));
      }
    }
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (MaybeRecord_13));
      MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (TypeEqvMap_14));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_68, Constraints0_23, &Constraints_30, ((MR_Box) (VarSet0_25)), &conv6_VarSet1_31, ((MR_Box) (UsedTypeCtors0_29)), &conv5_UsedTypeCtors1_32, ((MR_Box) (STATE_VARIABLE_UsedModules_0_42)), &conv4_STATE_VARIABLE_UsedModules_46_46);
    VarSet1_31 = ((MR_Word) (conv6_VarSet1_31));
    UsedTypeCtors1_32 = ((MR_Word) (conv5_UsedTypeCtors1_32));
    STATE_VARIABLE_UsedModules_46_46 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_46_46));
    parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(MaybeRecord_13, TypeEqvMap_14, Types0_21, &Types_33, &Var_34, &Var_35, VarSet1_31, &VarSet_36, UsedTypeCtors1_32, &UsedTypeCtors_37, STATE_VARIABLE_UsedModules_46_46, STATE_VARIABLE_UsedModules_43);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_21, &Arity_38);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (ClassName_20));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (Arity_38));
    }
    {
      ItemId_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemId_39, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), ItemId_39, 1) = ((MR_Box) (Var_49));
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
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (VarSet_36));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ContainingModuleName_26));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Context_27));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (SeqNum_28));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word STATE_VARIABLE_Ts_0_21,
  MR_Word * STATE_VARIABLE_Ts_22,
  MR_Word * Changed_16,
  MR_Word * ContainsCirc_17,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_25,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28)
{
  {
    parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_13, TypeEqvMap_14, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Ts_0_21, STATE_VARIABLE_Ts_22, Changed_16, (MR_Integer) 0, ContainsCirc_17, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24, STATE_VARIABLE_EquivTypeInfo_0_25, STATE_VARIABLE_EquivTypeInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28);
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
  {
    MR_Word PredName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 0))));
    MR_Word MaybePredOrFunc0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 1))));
    MR_Word Modes0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 2))));
    MR_Word WithInst0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 3))));
    MR_Word MaybeDetism0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 4))));
    MR_Word InstVarSet_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 5))));
    MR_Word Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 6))));
    MR_Integer SeqNum_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 7))));
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Constraint_14;
    MR_Word conv2_STATE_VARIABLE_VarSet_24;
    MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
    MR_Word conv0_STATE_VARIABLE_UsedModules_28;

    parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
    *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_VarSet_24));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
  }
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
  {
    MR_Word ClassName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 0))));
    MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 1))));
    MR_Word Constraints0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 2))));
    MR_Word FunDeps_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 3))));
    MR_Word ClassInterface0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 4))));
    MR_Word VarSet0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 5))));
    MR_Word Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 6))));
    MR_Integer SeqNum_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 7))));
    MR_Integer Arity_29;
    MR_Word ExpandedItems0_30;
    MR_Word Constraints_31;
    MR_Word VarSet_32;
    MR_Word ExpandedItems1_33;
    MR_Word ClassInterface_34;
    MR_Word ExpandedItems_35;
    MR_Word ItemId_38;
    MR_Word STATE_VARIABLE_UsedModules_43_43;
    MR_Word Var_47;
    MR_Word Var_64;
    MR_Box conv6_VarSet_32;
    MR_Box conv5_ExpandedItems1_33;
    MR_Box conv4_STATE_VARIABLE_UsedModules_43_43;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[4]), Vars_22, &Arity_29);
    recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, ClassName_21, STATE_VARIABLE_RecompInfo_0_39, &ExpandedItems0_30);
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (MaybeRecord_13));
      MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (TypeEqvMap_14));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_64, Constraints0_23, &Constraints_31, ((MR_Box) (VarSet0_26)), &conv6_VarSet_32, ((MR_Box) (ExpandedItems0_30)), &conv5_ExpandedItems1_33, ((MR_Box) (STATE_VARIABLE_UsedModules_0_41)), &conv4_STATE_VARIABLE_UsedModules_43_43);
    VarSet_32 = ((MR_Word) (conv6_VarSet_32));
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
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (VarSet_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Context_27));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SeqNum_28));
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Method_16;
    MR_Word conv2_STATE_VARIABLE_EquivTypeInfo_47;
    MR_Word conv1_STATE_VARIABLE_UsedModules_49;
    MR_Word conv0_STATE_VARIABLE_Specs_51;

    parse_tree__equiv_type__replace_in_class_method_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_Method_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_EquivTypeInfo_47, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_49, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_51);
    *wrapper_arg_2 = ((MR_Box) (conv3_Method_16));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_EquivTypeInfo_47));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_49));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_51));
  }
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
  {
    MR_Word Var_26;
    MR_Box conv6_STATE_VARIABLE_EquivTypeInfo_21;
    MR_Box conv5_STATE_VARIABLE_UsedModules_23;
    MR_Box conv4_STATE_VARIABLE_Specs_25;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_class_interface_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (MaybeRecord_12));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (TypeEqvMap_13));
      MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (InstEqvMap_14));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[8]), Var_26, ClassInterface0_15, ClassInterface_16, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_20)), &conv6_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (STATE_VARIABLE_UsedModules_0_22)), &conv5_STATE_VARIABLE_UsedModules_23, ((MR_Box) (STATE_VARIABLE_Specs_0_24)), &conv4_STATE_VARIABLE_Specs_25);
    *STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) (conv6_STATE_VARIABLE_EquivTypeInfo_21));
    *STATE_VARIABLE_UsedModules_23 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_23));
    *STATE_VARIABLE_Specs_25 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_25));
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
  {
    MR_Word PredName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 0))));
    MR_Word PredOrFunc_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word TypesAndModes0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 2))));
    MR_Word MaybeWithType0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 3))));
    MR_Word MaybeWithInst0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 4))));
    MR_Word MaybeDetism0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 5))));
    MR_Word Origin_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 6))));
    MR_Word TypeVarSet0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 7))));
    MR_Word InstVarSet_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 8))));
    MR_Word ExistQVars_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 9))));
    MR_Word Purity_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 10))) & (MR_Integer) 3);
    MR_Word ClassContext0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 11))));
    MR_Word Context_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 12))));
    MR_Integer SeqNum_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 13))));
    MR_Word ExpandedItems0_35;
    MR_Word ClassContext_36;
    MR_Word TypesAndModes_37;
    MR_Word TypeVarSet_38;
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
    parse_tree__equiv_type__replace_in_pred_type_23_p_0(MaybeRecord_13, PredName_21, PredOrFunc_22, Context_33, TypeEqvMap_14, InstEqvMap_15, ClassContext0_32, &ClassContext_36, TypesAndModes0_23, &TypesAndModes_37, TypeVarSet0_28, &TypeVarSet_38, MaybeWithType0_24, &MaybeWithType_39, MaybeWithInst0_25, &MaybeWithInst_40, MaybeDetism0_26, &MaybeDetism_41, ExpandedItems0_35, &ExpandedItems_42, STATE_VARIABLE_UsedModules_0_49, STATE_VARIABLE_UsedModules_50, Specs_20);
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
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (TypeVarSet_38));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (InstVarSet_29));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ExistQVars_30));
      MR_hl_field(MR_mktag(0), base, 10) = (MR_Box) ((MR_Unsigned) (Purity_31));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ClassContext_36));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Context_33));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (SeqNum_34));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_243;

    conv0_LambdaHeadVar__2_243 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1402__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_243));
    return wrapper_arg_2;
  }
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
  MR_Word STATE_VARIABLE_TypeVarSet_0_84,
  MR_Word * STATE_VARIABLE_TypeVarSet_85,
  MR_Word MaybeWithType0_35,
  MR_Word * MaybeWithType_36,
  MR_Word MaybeWithInst0_37,
  MR_Word * MaybeWithInst_38,
  MR_Word STATE_VARIABLE_MaybeDetism_0_86,
  MR_Word * STATE_VARIABLE_MaybeDetism_87,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_88,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_89,
  MR_Word STATE_VARIABLE_UsedModules_0_90,
  MR_Word * STATE_VARIABLE_UsedModules_91,
  MR_Word * STATE_VARIABLE_Specs_92)
{
  {
    MR_bool succeeded;
    MR_Word TypesAndModes1_43;
    MR_Word ExtraTypes_50;
    MR_Word ExtraModes_54;
    MR_Word ModeSpecs_57;
    MR_Word ExtraTypesAndModes_60;
    MR_Word STATE_VARIABLE_TypeVarSet_93_93;
    MR_Word STATE_VARIABLE_EquivTypeInfo_94_94;
    MR_Word STATE_VARIABLE_UsedModules_95_95;
    MR_Word STATE_VARIABLE_TypeVarSet_96_96;
    MR_Word STATE_VARIABLE_EquivTypeInfo_97_97;
    MR_Word STATE_VARIABLE_UsedModules_98_98;
    MR_Word STATE_VARIABLE_EquivTypeInfo_101_101;
    MR_Word STATE_VARIABLE_UsedModules_102_102;
    MR_Word STATE_VARIABLE_Specs_103_103;
    MR_Integer Var_135;
    MR_Word Var_137;
    MR_Word STATE_VARIABLE_EquivTypeInfo_139_139;
    MR_Word STATE_VARIABLE_Specs_141_141;
    MR_Word Var_55;
    MR_Word Var_56;

    parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(MaybeRecord_24, TypeEqvMap_28, ClassContext0_30, ClassContext_31, STATE_VARIABLE_TypeVarSet_0_84, &STATE_VARIABLE_TypeVarSet_93_93, STATE_VARIABLE_EquivTypeInfo_0_88, &STATE_VARIABLE_EquivTypeInfo_94_94, STATE_VARIABLE_UsedModules_0_90, &STATE_VARIABLE_UsedModules_95_95);
    parse_tree__equiv_type__replace_in_types_and_modes_10_p_0(MaybeRecord_24, TypeEqvMap_28, TypesAndModes0_32, &TypesAndModes1_43, STATE_VARIABLE_TypeVarSet_93_93, &STATE_VARIABLE_TypeVarSet_96_96, STATE_VARIABLE_EquivTypeInfo_94_94, &STATE_VARIABLE_EquivTypeInfo_97_97, STATE_VARIABLE_UsedModules_95_95, &STATE_VARIABLE_UsedModules_98_98);
    if ((MaybeWithType0_35 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ExtraTypes_50 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_103_103 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TypeVarSet_85 = STATE_VARIABLE_TypeVarSet_96_96;
      STATE_VARIABLE_EquivTypeInfo_101_101 = STATE_VARIABLE_EquivTypeInfo_97_97;
      STATE_VARIABLE_UsedModules_102_102 = STATE_VARIABLE_UsedModules_98_98;
    }
    else
    {
      MR_Word WithType0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithType0_35, (MR_Integer) 0))));
      MR_Word WithType_45;
      MR_Word Var_46;
      MR_Word ExtraTypesPrime_49;
      MR_Word Var_263;
      MR_Word _Purity_47;

      parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(MaybeRecord_24, TypeEqvMap_28, WithType0_44, &WithType_45, &Var_46, STATE_VARIABLE_TypeVarSet_96_96, STATE_VARIABLE_TypeVarSet_85, STATE_VARIABLE_EquivTypeInfo_97_97, &STATE_VARIABLE_EquivTypeInfo_101_101, STATE_VARIABLE_UsedModules_98_98, &STATE_VARIABLE_UsedModules_102_102);
      succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(WithType_45, &_Purity_47, &Var_263, &ExtraTypesPrime_49);
      if (succeeded)
        succeeded = (PredOrFunc_26 == Var_263);
      if (succeeded)
      {
        ExtraTypes_50 = ExtraTypesPrime_49;
        STATE_VARIABLE_Specs_103_103 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word Pieces1_51;
        MR_Word Msg1_52;
        MR_Word Spec1_53;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_113;
        MR_Word Var_115;
        MR_Word Var_118;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_131;

        ExtraTypes_50 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(MR_mktag(3), Var_107, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
        }
        {
          Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (PredName_25));
        }
        {
          Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_107));
          MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[16])));
        }
        {
          Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[30])));
          MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_118));
        }
        {
          Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_115));
        }
        {
          Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[29])));
          MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_113));
        }
        {
          Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_110));
        }
        {
          Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
          MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_108));
        }
        {
          Pieces1_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces1_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[28])));
          MR_hl_field(MR_mktag(1), Pieces1_51, 1) = ((MR_Box) (Var_106));
        }
        {
          Var_127 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (Pieces1_51));
        }
        {
          Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (Var_127));
          MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg1_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg1_52, 0) = ((MR_Box) (Context_27));
          MR_hl_field(MR_mktag(0), Msg1_52, 1) = ((MR_Box) (Var_126));
        }
        {
          Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Msg1_52));
          MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec1_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec1_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec1_53, 1) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(0), Spec1_53, 2) = ((MR_Box) (Var_131));
        }
        {
          STATE_VARIABLE_Specs_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_103_103, 0) = ((MR_Box) (Spec1_53));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_103_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
    Var_135 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes0_32);
    {
      Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (PredOrFunc_26));
    }
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(InstEqvMap_29, PredName_25, Var_135, Context_27, (MR_Integer) 0, &ExtraModes_54, Var_137, &Var_55, MaybeWithInst0_37, &Var_56, STATE_VARIABLE_MaybeDetism_0_86, STATE_VARIABLE_MaybeDetism_87, STATE_VARIABLE_EquivTypeInfo_101_101, &STATE_VARIABLE_EquivTypeInfo_139_139, STATE_VARIABLE_UsedModules_102_102, STATE_VARIABLE_UsedModules_91, &ModeSpecs_57);
    STATE_VARIABLE_Specs_141_141 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_103_103, ModeSpecs_57);
    if ((STATE_VARIABLE_Specs_141_141 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((ExtraModes_54 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[3]), ExtraTypes_50);
        *STATE_VARIABLE_Specs_92 = STATE_VARIABLE_Specs_141_141;
        *MaybeWithType_36 = (MR_Word) ((MR_Unsigned) 0U);
        *MaybeWithInst_38 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word LeftOverExtraTypes_64;
        MR_Word LeftOverExtraModes_65;

        parse_tree__equiv_type__pair_extra_types_and_modes_5_p_0(ExtraTypes_50, ExtraModes_54, &ExtraTypesAndModes_60, &LeftOverExtraTypes_64, &LeftOverExtraModes_65);
        if ((LeftOverExtraTypes_64 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((LeftOverExtraModes_65 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Specs_92 = STATE_VARIABLE_Specs_141_141;
          else
          {
            MR_Integer NumExtraTypes_68;
            MR_Integer NumExtraModes_69;
            MR_Word Pieces2_70;
            MR_Word Msg2_71;
            MR_Word Spec2_72;
            MR_Word Var_195;
            MR_Word Var_196;
            MR_Word Var_197;
            MR_Word Var_198;
            MR_Word Var_199;
            MR_Word Var_202;
            MR_Word Var_204;
            MR_Word Var_207;
            MR_Word Var_210;
            MR_Word Var_213;
            MR_Word Var_214;
            MR_Word Var_215;
            MR_Word Var_216;
            MR_String Var_217;
            MR_Word Var_220;
            MR_Word Var_223;
            MR_Word Var_224;
            MR_Word Var_225;
            MR_Word Var_226;
            MR_String Var_227;
            MR_Word Var_233;
            MR_Word Var_234;
            MR_Word Var_238;
            MR_Box conv1_Var_217;
            MR_Box conv2_Var_227;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraTypes_50, &NumExtraTypes_68);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraModes_54, &NumExtraModes_69);
            {
              Var_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_196, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(MR_mktag(3), Var_196, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
            }
            {
              Var_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_198, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Var_198, 1) = ((MR_Box) (PredName_25));
            }
            {
              Var_214 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_214, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_214, 1) = ((MR_Box) (NumExtraModes_69));
            }
            conv1_Var_217 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraModes_54, ((MR_Box) ((MR_String) "mode")), ((MR_Box) ((MR_String) "modes")));
            Var_217 = ((MR_String) (conv1_Var_217));
            {
              Var_216 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_216, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_216, 1) = ((MR_Box) (Var_217));
            }
            {
              Var_224 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_224, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_224, 1) = ((MR_Box) (NumExtraTypes_68));
            }
            conv2_Var_227 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraTypes_50, ((MR_Box) ((MR_String) "type.")), ((MR_Box) ((MR_String) "types.")));
            Var_227 = ((MR_String) (conv2_Var_227));
            {
              Var_226 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_226, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_226, 1) = ((MR_Box) (Var_227));
            }
            {
              Var_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_225, 0) = ((MR_Box) (Var_226));
              MR_hl_field(MR_mktag(1), Var_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[12])));
            }
            {
              Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_223, 0) = ((MR_Box) (Var_224));
              MR_hl_field(MR_mktag(1), Var_223, 1) = ((MR_Box) (Var_225));
            }
            {
              Var_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_220, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[34])));
              MR_hl_field(MR_mktag(1), Var_220, 1) = ((MR_Box) (Var_223));
            }
            {
              Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_215, 0) = ((MR_Box) (Var_216));
              MR_hl_field(MR_mktag(1), Var_215, 1) = ((MR_Box) (Var_220));
            }
            {
              Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_213, 0) = ((MR_Box) (Var_214));
              MR_hl_field(MR_mktag(1), Var_213, 1) = ((MR_Box) (Var_215));
            }
            {
              Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[33])));
              MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_213));
            }
            {
              Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[32])));
              MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) (Var_210));
            }
            {
              Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[31])));
              MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (Var_207));
            }
            {
              Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (Var_204));
            }
            {
              Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_199, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[29])));
              MR_hl_field(MR_mktag(1), Var_199, 1) = ((MR_Box) (Var_202));
            }
            {
              Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) (Var_198));
              MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (Var_199));
            }
            {
              Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (Var_196));
              MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) (Var_197));
            }
            {
              Pieces2_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces2_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[28])));
              MR_hl_field(MR_mktag(1), Pieces2_70, 1) = ((MR_Box) (Var_195));
            }
            {
              Var_234 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_234, 0) = ((MR_Box) (Pieces2_70));
            }
            {
              Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_233, 0) = ((MR_Box) (Var_234));
              MR_hl_field(MR_mktag(1), Var_233, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Msg2_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg2_71, 0) = ((MR_Box) (Context_27));
              MR_hl_field(MR_mktag(0), Msg2_71, 1) = ((MR_Box) (Var_233));
            }
            {
              Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_238, 0) = ((MR_Box) (Msg2_71));
              MR_hl_field(MR_mktag(1), Var_238, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec2_72 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec2_72, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec2_72, 1) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(0), Spec2_72, 2) = ((MR_Box) (Var_238));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_92 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec2_72));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_141_141));
            }
          }
        else
        if ((LeftOverExtraModes_65 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_147;
          MR_Word Var_148;
          MR_Word Var_149;
          MR_Word Var_150;
          MR_Word Var_151;
          MR_Word Var_154;
          MR_Word Var_156;
          MR_Word Var_159;
          MR_Word Var_162;
          MR_Word Var_165;
          MR_Word Var_166;
          MR_Word Var_167;
          MR_Word Var_168;
          MR_String Var_169;
          MR_Word Var_172;
          MR_Word Var_175;
          MR_Word Var_176;
          MR_Word Var_177;
          MR_Word Var_178;
          MR_String Var_179;
          MR_Word Var_185;
          MR_Word Var_186;
          MR_Word Var_190;
          MR_Integer NumExtraTypes_249;
          MR_Integer NumExtraModes_250;
          MR_Word Pieces2_251;
          MR_Word Msg2_252;
          MR_Word Spec2_253;
          MR_Box conv3_Var_169;
          MR_Box conv4_Var_179;

          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraTypes_50, &NumExtraTypes_249);
          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraModes_54, &NumExtraModes_250);
          {
            Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_148, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_148, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
          }
          {
            Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_150, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_150, 1) = ((MR_Box) (PredName_25));
          }
          {
            Var_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_166, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_166, 1) = ((MR_Box) (NumExtraTypes_249));
          }
          conv3_Var_169 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraTypes_50, ((MR_Box) ((MR_String) "type")), ((MR_Box) ((MR_String) "types")));
          Var_169 = ((MR_String) (conv3_Var_169));
          {
            Var_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_168, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_168, 1) = ((MR_Box) (Var_169));
          }
          {
            Var_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_176, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_176, 1) = ((MR_Box) (NumExtraModes_250));
          }
          conv4_Var_179 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraModes_54, ((MR_Box) ((MR_String) "mode.")), ((MR_Box) ((MR_String) "modes.")));
          Var_179 = ((MR_String) (conv4_Var_179));
          {
            Var_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_178, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_178, 1) = ((MR_Box) (Var_179));
          }
          {
            Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (Var_178));
            MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[12])));
          }
          {
            Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (Var_176));
            MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (Var_177));
          }
          {
            Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[34])));
            MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_175));
          }
          {
            Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (Var_168));
            MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (Var_172));
          }
          {
            Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (Var_166));
            MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (Var_167));
          }
          {
            Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[33])));
            MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (Var_165));
          }
          {
            Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[32])));
            MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (Var_162));
          }
          {
            Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[31])));
            MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (Var_159));
          }
          {
            Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (Var_156));
          }
          {
            Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[29])));
            MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_154));
          }
          {
            Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Var_150));
            MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (Var_151));
          }
          {
            Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Var_148));
            MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_149));
          }
          {
            Pieces2_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces2_251, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[28])));
            MR_hl_field(MR_mktag(1), Pieces2_251, 1) = ((MR_Box) (Var_147));
          }
          {
            Var_186 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_186, 0) = ((MR_Box) (Pieces2_251));
          }
          {
            Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_185, 0) = ((MR_Box) (Var_186));
            MR_hl_field(MR_mktag(1), Var_185, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msg2_252 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg2_252, 0) = ((MR_Box) (Context_27));
            MR_hl_field(MR_mktag(0), Msg2_252, 1) = ((MR_Box) (Var_185));
          }
          {
            Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) (Msg2_252));
            MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec2_253 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec2_253, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec2_253, 1) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(0), Spec2_253, 2) = ((MR_Box) (Var_190));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_92 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec2_253));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_141_141));
          }
        }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_pred_type\'/23", (MR_String) "both types and modes left over");
            return;
          }
        }
        if ((*STATE_VARIABLE_Specs_92 == (MR_Word) ((MR_Unsigned) 0U)))
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
      ExtraTypesAndModes_60 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_92 = STATE_VARIABLE_Specs_141_141;
      *MaybeWithType_36 = MaybeWithType0_35;
      *MaybeWithInst_38 = MaybeWithInst0_37;
    }
    if ((ExtraTypesAndModes_60 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *TypesAndModes_33 = TypesAndModes1_43;
      *STATE_VARIABLE_EquivTypeInfo_89 = STATE_VARIABLE_EquivTypeInfo_139_139;
    }
    else
    {
      MR_Word OrigItemId_83;
      MR_Word Var_244;
      MR_Word Var_245;
      MR_Integer Var_246;

      Var_244 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_26);
      Var_246 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes0_32);
      {
        Var_245 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_245, 0) = ((MR_Box) (PredName_25));
        MR_hl_field(MR_mktag(0), Var_245, 1) = ((MR_Box) (Var_246));
      }
      {
        OrigItemId_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OrigItemId_83, 0) = (MR_Box) ((MR_Unsigned) (Var_244));
        MR_hl_field(MR_mktag(0), OrigItemId_83, 1) = ((MR_Box) (Var_245));
      }
      recompilation__record_expanded_item_3_p_0(OrigItemId_83, STATE_VARIABLE_EquivTypeInfo_139_139, STATE_VARIABLE_EquivTypeInfo_89);
      *TypesAndModes_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes1_43, ExtraTypesAndModes_60);
    }
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
  MR_Word STATE_VARIABLE_MaybeDetism_0_50,
  MR_Word * STATE_VARIABLE_MaybeDetism_51,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_52,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_53,
  MR_Word STATE_VARIABLE_UsedModules_0_54,
  MR_Word * STATE_VARIABLE_UsedModules_55,
  MR_Word * Specs_33)
{
  {
    MR_bool succeeded;

    if ((MaybeWithInst0_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeWithInst_29 = MaybeWithInst0_28;
      *MaybePredOrFunc_27 = MaybePredOrFunc0_26;
      *ExtraModes_25 = (MR_Word) ((MR_Unsigned) 0U);
      *Specs_33 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_MaybeDetism_51 = STATE_VARIABLE_MaybeDetism_0_50;
      *STATE_VARIABLE_EquivTypeInfo_53 = STATE_VARIABLE_EquivTypeInfo_0_52;
      *STATE_VARIABLE_UsedModules_55 = STATE_VARIABLE_UsedModules_0_54;
    }
    else
    {
      MR_Word WithInst0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_28, (MR_Integer) 0))));
      MR_Word WithInst_35;
      MR_Word STATE_VARIABLE_EquivTypeInfo_56_56;
      MR_Word PredOrFunc_39;
      MR_Word ExtraModes0_40;
      MR_Word DetPrime_42;
      MR_Word GroundInstInfo_37;
      MR_Word HOInst_38;

      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(InstEqvMap_20, WithInst0_34, &WithInst_35, STATE_VARIABLE_EquivTypeInfo_0_52, &STATE_VARIABLE_EquivTypeInfo_56_56, STATE_VARIABLE_UsedModules_0_54, STATE_VARIABLE_UsedModules_55);
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
            MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc0_26, (MR_Integer) 0))));

            succeeded = (PredOrFunc_39 == Var_105);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RecordedPredOrFunc_43;
        MR_Word OrigItemId_44;
        MR_Word Var_59;
        MR_Word Var_60;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_MaybeDetism_51 = base;
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
        Var_59 = recompilation__pred_or_func_to_item_type_1_f_0(RecordedPredOrFunc_43);
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (PredName_21));
          MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (OrigArity_22));
        }
        {
          OrigItemId_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OrigItemId_44, 0) = (MR_Box) ((MR_Unsigned) (Var_59));
          MR_hl_field(MR_mktag(0), OrigItemId_44, 1) = ((MR_Box) (Var_60));
        }
        recompilation__record_expanded_item_3_p_0(OrigItemId_44, STATE_VARIABLE_EquivTypeInfo_56_56, STATE_VARIABLE_EquivTypeInfo_53);
        *Specs_33 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_String DeclStr_45;
        MR_Word PredOrFuncPieces_46;
        MR_Word Pieces_47;
        MR_Word Msg_48;
        MR_Word Spec_49;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_86;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_98;

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
          MR_Word Var_62;
          MR_Word PredOrFunc_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *MaybePredOrFunc_27, (MR_Integer) 0))));

          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_62, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_101));
          }
          {
            PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PredOrFuncPieces_46, 0) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(1), PredOrFuncPieces_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (DeclStr_45));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[27])));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[25])));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (PredName_21));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[21])));
        }
        Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredOrFuncPieces_46, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[23])));
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_75, Var_86);
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredOrFuncPieces_46, Var_74);
        Pieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_64, Var_73);
        {
          Var_94 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (Pieces_47));
        }
        {
          Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
          MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_48, 0) = ((MR_Box) (Context_23));
          MR_hl_field(MR_mktag(0), Msg_48, 1) = ((MR_Box) (Var_93));
        }
        {
          Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Msg_48));
          MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_49, 1) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(0), Spec_49, 2) = ((MR_Box) (Var_98));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Specs_33 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_49));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_EquivTypeInfo_53 = STATE_VARIABLE_EquivTypeInfo_56_56;
        *STATE_VARIABLE_MaybeDetism_51 = STATE_VARIABLE_MaybeDetism_0_50;
      }
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
  {
    MR_Word Var_19;

    Var_19 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0));
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(InstEqvMap_10, Var_19, Inst0_11, Inst_12, STATE_VARIABLE_EquivTypeInfo_0_15, STATE_VARIABLE_EquivTypeInfo_16, STATE_VARIABLE_UsedModules_0_17, STATE_VARIABLE_UsedModules_18);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_TypeAndMode_14;
    MR_Word conv2_STATE_VARIABLE_VarSet_24;
    MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
    MR_Word conv0_STATE_VARIABLE_UsedModules_28;

    parse_tree__equiv_type__replace_in_type_and_mode_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_TypeAndMode_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
    *wrapper_arg_2 = ((MR_Box) (conv3_TypeAndMode_14));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_VarSet_24));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_types_and_modes_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word STATE_VARIABLE_TypeAndModes_0_17,
  MR_Word * STATE_VARIABLE_TypeAndModes_18,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_21,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24)
{
  {
    MR_Word Var_25;
    MR_Box conv6_STATE_VARIABLE_VarSet_20;
    MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_22;
    MR_Box conv4_STATE_VARIABLE_UsedModules_24;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_types_and_modes_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (MaybeRecord_11));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (TypeEqvMap_12));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_25, STATE_VARIABLE_TypeAndModes_0_17, STATE_VARIABLE_TypeAndModes_18, ((MR_Box) (STATE_VARIABLE_VarSet_0_19)), &conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_21)), &conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (STATE_VARIABLE_UsedModules_0_23)), &conv4_STATE_VARIABLE_UsedModules_24);
    *STATE_VARIABLE_VarSet_20 = ((MR_Word) (conv6_STATE_VARIABLE_VarSet_20));
    *STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_22));
    *STATE_VARIABLE_UsedModules_24 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_24));
  }
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
parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(
  MR_Word MaybeRecord_12,
  MR_Word TypeEqvMap_13,
  MR_Word Type0_14,
  MR_Word * Type_15,
  MR_Word * Changed_16,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_23,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26)
{
  {
    MR_Word Var_20;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_12, TypeEqvMap_13, (MR_Word) ((MR_Unsigned) 0U), Type0_14, Type_15, Changed_16, &Var_20, STATE_VARIABLE_VarSet_0_21, STATE_VARIABLE_VarSet_22, STATE_VARIABLE_EquivTypeInfo_0_23, STATE_VARIABLE_EquivTypeInfo_24, STATE_VARIABLE_UsedModules_0_25, STATE_VARIABLE_UsedModules_26);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Constraint_14;
    MR_Word conv2_STATE_VARIABLE_VarSet_24;
    MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
    MR_Word conv0_STATE_VARIABLE_UsedModules_28;

    parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
    *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_VarSet_24));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Cs0_13,
  MR_Word * Cs_14,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_24,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27)
{
  {
    MR_Word UnivCs0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cs0_13, (MR_Integer) 0))));
    MR_Word ExistCs0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cs0_13, (MR_Integer) 1))));
    MR_Word UnivCs_20;
    MR_Word ExistCs_21;
    MR_Word STATE_VARIABLE_VarSet_28_28;
    MR_Word STATE_VARIABLE_EquivTypeInfo_29_29;
    MR_Word STATE_VARIABLE_UsedModules_30_30;
    MR_Word Var_48;
    MR_Box conv6_STATE_VARIABLE_VarSet_28_28;
    MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_29_29;
    MR_Box conv4_STATE_VARIABLE_UsedModules_30_30;

    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (MaybeRecord_11));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (TypeEqvMap_12));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_48, UnivCs0_18, &UnivCs_20, ((MR_Box) (STATE_VARIABLE_VarSet_0_22)), &conv6_STATE_VARIABLE_VarSet_28_28, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_24)), &conv5_STATE_VARIABLE_EquivTypeInfo_29_29, ((MR_Box) (STATE_VARIABLE_UsedModules_0_26)), &conv4_STATE_VARIABLE_UsedModules_30_30);
    STATE_VARIABLE_VarSet_28_28 = ((MR_Word) (conv6_STATE_VARIABLE_VarSet_28_28));
    STATE_VARIABLE_EquivTypeInfo_29_29 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_29_29));
    STATE_VARIABLE_UsedModules_30_30 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_30_30));
    parse_tree__equiv_type__replace_in_prog_constraint_list_location_10_p_0(MaybeRecord_11, TypeEqvMap_12, ExistCs0_19, &ExistCs_21, STATE_VARIABLE_VarSet_28_28, STATE_VARIABLE_VarSet_23, STATE_VARIABLE_EquivTypeInfo_29_29, STATE_VARIABLE_EquivTypeInfo_25, STATE_VARIABLE_UsedModules_30_30, STATE_VARIABLE_UsedModules_27);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Cs_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (UnivCs_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExistCs_21));
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Constraint_14;
    MR_Word conv2_STATE_VARIABLE_VarSet_24;
    MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
    MR_Word conv0_STATE_VARIABLE_UsedModules_28;

    parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
    *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_VarSet_24));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word STATE_VARIABLE_Constraints_0_17,
  MR_Word * STATE_VARIABLE_Constraints_18,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_21,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24)
{
  {
    MR_Word Var_25;
    MR_Box conv6_STATE_VARIABLE_VarSet_20;
    MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_22;
    MR_Box conv4_STATE_VARIABLE_UsedModules_24;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraint_list_location_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (MaybeRecord_11));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (TypeEqvMap_12));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_25, STATE_VARIABLE_Constraints_0_17, STATE_VARIABLE_Constraints_18, ((MR_Box) (STATE_VARIABLE_VarSet_0_19)), &conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_21)), &conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (STATE_VARIABLE_UsedModules_0_23)), &conv4_STATE_VARIABLE_UsedModules_24);
    *STATE_VARIABLE_VarSet_20 = ((MR_Word) (conv6_STATE_VARIABLE_VarSet_20));
    *STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_22));
    *STATE_VARIABLE_UsedModules_24 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_24));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
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
  {
    MR_bool succeeded;
    MR_Word SymName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 0))));
    MR_Word ArgTypeVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 1))));
    MR_Word TypeDefn0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 2))));
    MR_Word VarSet0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 3))));
    MR_Word Context_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 4))));
    MR_Integer SeqNum_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 5))));
    MR_Integer Arity_27;
    MR_Word UsedTypeCtors0_28;
    MR_Word TypeDefn_29;
    MR_Word ContainsCirc_30;
    MR_Word VarSet_31;
    MR_Word UsedTypeCtors_32;
    MR_Word ItemId_38;
    MR_Word Var_43;
    MR_Word Var_68;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[4]), ArgTypeVars_22, &Arity_27);
    recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, SymName_21, STATE_VARIABLE_RecompInfo_0_39, &UsedTypeCtors0_28);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (SymName_21));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (Arity_27));
    }
    parse_tree__equiv_type__replace_in_type_defn_13_p_0(MaybeRecord_13, TypeEqvMap_14, InstEqvMap_15, Var_43, TypeDefn0_23, &TypeDefn_29, &ContainsCirc_30, VarSet0_24, &VarSet_31, UsedTypeCtors0_28, &UsedTypeCtors_32, STATE_VARIABLE_UsedModules_0_41, STATE_VARIABLE_UsedModules_42);
    switch (ContainsCirc_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          succeeded = ((((MR_tag((MR_Word) TypeDefn0_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn0_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            {
              MR_Integer NumArgTypeVars_34;
              MR_Word Pieces_35;
              MR_Word Msg_36;
              MR_Word Spec_37;
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word Var_49;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Var_61;

              mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[4]), ArgTypeVars_22, &NumArgTypeVars_34);
              {
                Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (SymName_21));
                MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (NumArgTypeVars_34));
              }
              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Var_49));
              }
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[14])));
              }
              {
                Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[24])));
                MR_hl_field(MR_mktag(1), Pieces_35, 1) = ((MR_Box) (Var_47));
              }
              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Pieces_35));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Msg_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Msg_36, 0) = ((MR_Box) (Context_25));
                MR_hl_field(MR_mktag(0), Msg_36, 1) = ((MR_Box) (Var_56));
              }
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Msg_36));
                MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(0), Spec_37, 2) = ((MR_Box) (Var_61));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Specs_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_37));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
          }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_type_defn_info\'/11", (MR_String) "invalid item");
              return;
            }
          }
        }
        break;
    }
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (SymName_21));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (Arity_27));
    }
    {
      ItemId_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemId_38, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ItemId_38, 1) = ((MR_Box) (Var_68));
    }
    recompilation__finish_recording_expanded_items_4_p_0(ItemId_38, UsedTypeCtors_32, STATE_VARIABLE_RecompInfo_0_39, STATE_VARIABLE_RecompInfo_40);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *Info_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTypeVars_22));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarSet_31));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_25));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_26));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
  MR_Word MaybeRecord_14,
  MR_Word TypeEqvMap_15,
  MR_Word InstEqvMap_16,
  MR_Word TypeCtor_17,
  MR_Word TypeDefn0_18,
  MR_Word * TypeDefn_19,
  MR_Word * ContainsCirc_20,
  MR_Word STATE_VARIABLE_VarSet_0_47,
  MR_Word * STATE_VARIABLE_VarSet_48,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_49,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_50,
  MR_Word STATE_VARIABLE_UsedModules_0_51,
  MR_Word * STATE_VARIABLE_UsedModules_52)
{
  switch (MR_tag((MR_Word) TypeDefn0_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu0_29 = (MR_Word) ((MR_Word) (TypeDefn0_18));
        MR_Word EqPred_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_29, (MR_Integer) 1))));
        MR_Word DirectArgFunctors_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_29, (MR_Integer) 2))));
        MR_Word DetailsDu_32;
        MR_Word TypeBody0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_29, (MR_Integer) 0))));
        MR_Word TypeBody_69;

        parse_tree__equiv_type__replace_in_ctors_location_10_p_0(MaybeRecord_14, TypeEqvMap_15, TypeBody0_68, &TypeBody_69, STATE_VARIABLE_VarSet_0_47, STATE_VARIABLE_VarSet_48, STATE_VARIABLE_EquivTypeInfo_0_49, STATE_VARIABLE_EquivTypeInfo_50, STATE_VARIABLE_UsedModules_0_51, STATE_VARIABLE_UsedModules_52);
        *ContainsCirc_20 = (MR_Integer) 0;
        {
          DetailsDu_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DetailsDu_32, 0) = ((MR_Box) (TypeBody_69));
          MR_hl_field(MR_mktag(0), DetailsDu_32, 1) = ((MR_Box) (EqPred_30));
          MR_hl_field(MR_mktag(0), DetailsDu_32, 2) = ((MR_Box) (DirectArgFunctors_31));
        }
        *TypeDefn_19 = (MR_Word) ((MR_Word) (DetailsDu_32));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetailsSolver0_33 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_18), (MR_Integer) 1));
        MR_Word SolverDetails0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver0_33, (MR_Integer) 0))));
        MR_Word MaybeUserEqComp_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver0_33, (MR_Integer) 1))));
        MR_Word RepresentationType0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDetails0_34, (MR_Integer) 0))));
        MR_Word GroundInst_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDetails0_34, (MR_Integer) 1))));
        MR_Word AnyInst_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDetails0_34, (MR_Integer) 2))));
        MR_Word MutableInfos0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDetails0_34, (MR_Integer) 3))));
        MR_Word RepresentationType_40;
        MR_Word MutableInfos_42;
        MR_Word SolverDetails_43;
        MR_Word DetailsSolver_44;
        MR_Word Var_53;
        MR_Word STATE_VARIABLE_EquivTypeInfo_55_55;
        MR_Word STATE_VARIABLE_UsedModules_56_56;
        MR_Word Var_41;

        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (TypeCtor_17));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_14, TypeEqvMap_15, Var_53, RepresentationType0_36, &RepresentationType_40, &Var_41, ContainsCirc_20, STATE_VARIABLE_VarSet_0_47, STATE_VARIABLE_VarSet_48, STATE_VARIABLE_EquivTypeInfo_0_49, &STATE_VARIABLE_EquivTypeInfo_55_55, STATE_VARIABLE_UsedModules_0_51, &STATE_VARIABLE_UsedModules_56_56);
        parse_tree__equiv_type__replace_in_constraint_store_9_p_0(MaybeRecord_14, TypeEqvMap_15, InstEqvMap_16, MutableInfos0_39, &MutableInfos_42, STATE_VARIABLE_EquivTypeInfo_55_55, STATE_VARIABLE_EquivTypeInfo_50, STATE_VARIABLE_UsedModules_56_56, STATE_VARIABLE_UsedModules_52);
        {
          SolverDetails_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SolverDetails_43, 0) = ((MR_Box) (RepresentationType_40));
          MR_hl_field(MR_mktag(0), SolverDetails_43, 1) = ((MR_Box) (GroundInst_37));
          MR_hl_field(MR_mktag(0), SolverDetails_43, 2) = ((MR_Box) (AnyInst_38));
          MR_hl_field(MR_mktag(0), SolverDetails_43, 3) = ((MR_Box) (MutableInfos_42));
        }
        {
          DetailsSolver_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DetailsSolver_44, 0) = ((MR_Box) (SolverDetails_43));
          MR_hl_field(MR_mktag(0), DetailsSolver_44, 1) = ((MR_Box) (MaybeUserEqComp_35));
        }
        *TypeDefn_19 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (DetailsSolver_44)));
      }
      break;
    case (MR_Integer) 2:
      {
        *TypeDefn_19 = TypeDefn0_18;
        *ContainsCirc_20 = (MR_Integer) 0;
        *STATE_VARIABLE_VarSet_48 = STATE_VARIABLE_VarSet_0_47;
        *STATE_VARIABLE_EquivTypeInfo_50 = STATE_VARIABLE_EquivTypeInfo_0_49;
        *STATE_VARIABLE_UsedModules_52 = STATE_VARIABLE_UsedModules_0_51;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn0_18, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsEqv0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn0_18, (MR_Integer) 1))));
            MR_Word TypeBody0_25 = (MR_Word) (DetailsEqv0_24);
            MR_Word TypeBody_26;
            MR_Word DetailsEqv_28;
            MR_Word Var_63;
            MR_Word Var_27;

            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (TypeCtor_17));
              MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_14, TypeEqvMap_15, Var_63, TypeBody0_25, &TypeBody_26, &Var_27, ContainsCirc_20, STATE_VARIABLE_VarSet_0_47, STATE_VARIABLE_VarSet_48, STATE_VARIABLE_EquivTypeInfo_0_49, STATE_VARIABLE_EquivTypeInfo_50, STATE_VARIABLE_UsedModules_0_51, STATE_VARIABLE_UsedModules_52);
            DetailsEqv_28 = (MR_Word) (TypeBody_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *TypeDefn_19 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (DetailsEqv_28));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *TypeDefn_19 = TypeDefn0_18;
            *ContainsCirc_20 = (MR_Integer) 0;
            *STATE_VARIABLE_VarSet_48 = STATE_VARIABLE_VarSet_0_47;
            *STATE_VARIABLE_EquivTypeInfo_50 = STATE_VARIABLE_EquivTypeInfo_0_49;
            *STATE_VARIABLE_UsedModules_52 = STATE_VARIABLE_UsedModules_0_51;
          }
          break;
      }
      break;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Ctor_14;
    MR_Word conv2_STATE_VARIABLE_VarSet_35;
    MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_37;
    MR_Word conv0_STATE_VARIABLE_UsedModules_39;

    parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Ctor_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_VarSet_35, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_37, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_39);
    *wrapper_arg_2 = ((MR_Box) (conv3_Ctor_14));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_VarSet_35));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_37));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_39));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word STATE_VARIABLE_Ctors_0_17,
  MR_Word * STATE_VARIABLE_Ctors_18,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_21,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24)
{
  {
    MR_Word Var_25;
    MR_Box conv6_STATE_VARIABLE_VarSet_20;
    MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_22;
    MR_Box conv4_STATE_VARIABLE_UsedModules_24;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (MaybeRecord_11));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (TypeEqvMap_12));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_25, STATE_VARIABLE_Ctors_0_17, STATE_VARIABLE_Ctors_18, ((MR_Box) (STATE_VARIABLE_VarSet_0_19)), &conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_21)), &conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (STATE_VARIABLE_UsedModules_0_23)), &conv4_STATE_VARIABLE_UsedModules_24);
    *STATE_VARIABLE_VarSet_20 = ((MR_Word) (conv6_STATE_VARIABLE_VarSet_20));
    *STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_22));
    *STATE_VARIABLE_UsedModules_24 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_24));
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
    MR_Integer SeqNum_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info0_13, (MR_Integer) 9))));
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
    Var_70 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0));
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
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
  MR_Word InstEqvMap_11,
  MR_Word ExpandedInstIds_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_26,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_27,
  MR_Word STATE_VARIABLE_UsedModules_0_28,
  MR_Word * STATE_VARIABLE_UsedModules_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Inst0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word SymName_17;
    MR_Word ArgInsts_18;
    MR_Word Var_30;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_13, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
      if (succeeded)
      {
        SymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
        ArgInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word InstId_19;
      MR_Integer Var_31;

      Var_31 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_18);
      {
        InstId_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InstId_19, 0) = ((MR_Box) (SymName_17));
        MR_hl_field(MR_mktag(0), InstId_19, 1) = ((MR_Box) (Var_31));
      }
      succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), ((MR_Box) (InstId_19)), ExpandedInstIds_12);
      if (succeeded)
      {
        *Inst_14 = Inst0_13;
        *STATE_VARIABLE_UsedModules_29 = STATE_VARIABLE_UsedModules_0_28;
        *STATE_VARIABLE_EquivTypeInfo_27 = STATE_VARIABLE_EquivTypeInfo_0_26;
      }
      else
      {
        MR_Word EqvInstParams_22;
        MR_Word EqvInst_23;
        MR_Word EqvInstBody_20;
        MR_Box conv0_EqvInstBody_20;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0), InstEqvMap_11, ((MR_Box) (InstId_19)), &conv0_EqvInstBody_20);
        if (succeeded)
        {
          EqvInstBody_20 = ((MR_Word) (conv0_EqvInstBody_20));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          EqvInstParams_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvInstBody_20, (MR_Integer) 1))));
          EqvInst_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvInstBody_20, (MR_Integer) 2))));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Inst1_24;
          MR_Word InstIdItem_25;
          MR_Word Var_32;
          MR_Word STATE_VARIABLE_EquivTypeInfo_33_33;
          MR_Word Var_35;
          MR_Word next_value_of_ExpandedInstIds_12;
          MR_Word next_value_of_Inst0_13;
          MR_Word next_value_of_STATE_VARIABLE_EquivTypeInfo_0_26;

          parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(EqvInstParams_22, ArgInsts_18, EqvInst_23, &Inst1_24);
          InstIdItem_25 = recompilation__inst_id_to_item_name_1_f_0(InstId_19);
          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (InstIdItem_25));
          }
          recompilation__record_expanded_item_3_p_0(Var_32, STATE_VARIABLE_EquivTypeInfo_0_26, &STATE_VARIABLE_EquivTypeInfo_33_33);
          Var_35 = mercury__set__insert_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), ExpandedInstIds_12, ((MR_Box) (InstId_19)));
          // direct tailcall eliminated
          ;
          next_value_of_ExpandedInstIds_12 = Var_35;
          next_value_of_Inst0_13 = Inst1_24;
          next_value_of_STATE_VARIABLE_EquivTypeInfo_0_26 = STATE_VARIABLE_EquivTypeInfo_33_33;
          ExpandedInstIds_12 = next_value_of_ExpandedInstIds_12;
          Inst0_13 = next_value_of_Inst0_13;
          STATE_VARIABLE_EquivTypeInfo_0_26 = next_value_of_STATE_VARIABLE_EquivTypeInfo_0_26;
          continue;
        }
        else
        {
          *Inst_14 = Inst0_13;
          *STATE_VARIABLE_UsedModules_29 = STATE_VARIABLE_UsedModules_0_28;
          *STATE_VARIABLE_EquivTypeInfo_27 = STATE_VARIABLE_EquivTypeInfo_0_26;
        }
      }
    }
    else
    {
      *Inst_14 = Inst0_13;
      *STATE_VARIABLE_UsedModules_29 = STATE_VARIABLE_UsedModules_0_28;
      *STATE_VARIABLE_EquivTypeInfo_27 = STATE_VARIABLE_EquivTypeInfo_0_26;
    }
    break;
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
  MR_Word STATE_VARIABLE_VarSet_0_42,
  MR_Word * STATE_VARIABLE_VarSet_43,
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
        *Circ_20 = (MR_Integer) 0;
        *STATE_VARIABLE_VarSet_43 = STATE_VARIABLE_VarSet_0_42;
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
        MR_Word STATE_VARIABLE_VarSet_64_64;
        MR_Word STATE_VARIABLE_EquivTypeInfo_65_65;
        MR_Word STATE_VARIABLE_UsedModules_66_66;
        MR_Word Kind_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_17, (MR_Integer) 2))));

        parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, TArgs0_27, &TArgs_28, &ArgsChanged_29, (MR_Integer) 0, &Circ0_30, STATE_VARIABLE_VarSet_0_42, &STATE_VARIABLE_VarSet_64_64, STATE_VARIABLE_EquivTypeInfo_0_44, &STATE_VARIABLE_EquivTypeInfo_65_65, STATE_VARIABLE_UsedModules_0_46, &STATE_VARIABLE_UsedModules_66_66);
        Arity_31 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TArgs_28);
        {
          TypeCtor_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtor_32, 0) = ((MR_Box) (SymName_26));
          MR_hl_field(MR_mktag(0), TypeCtor_32, 1) = ((MR_Box) (Arity_31));
        }
        parse_tree__equiv_type__replace_type_ctor_18_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, Type0_17, TypeCtor_32, TArgs_28, Kind_70, Type_18, ArgsChanged_29, Changed_19, Circ0_30, Circ_20, STATE_VARIABLE_VarSet_64_64, STATE_VARIABLE_VarSet_43, STATE_VARIABLE_EquivTypeInfo_65_65, STATE_VARIABLE_EquivTypeInfo_45, STATE_VARIABLE_UsedModules_66_66, STATE_VARIABLE_UsedModules_47);
      }
      break;
    case (MR_Integer) 2:
      {
        *Type_18 = Type0_17;
        *Changed_19 = (MR_Integer) 0;
        *Circ_20 = (MR_Integer) 0;
        *STATE_VARIABLE_VarSet_43 = STATE_VARIABLE_VarSet_0_42;
        *STATE_VARIABLE_EquivTypeInfo_45 = STATE_VARIABLE_EquivTypeInfo_0_44;
        *STATE_VARIABLE_UsedModules_47 = STATE_VARIABLE_UsedModules_0_46;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Kind_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 2))));
            MR_Word Args0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 1))));
            MR_Word Args_73;

            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, Args0_72, &Args_73, Changed_19, (MR_Integer) 0, Circ_20, STATE_VARIABLE_VarSet_0_42, STATE_VARIABLE_VarSet_43, STATE_VARIABLE_EquivTypeInfo_0_44, STATE_VARIABLE_EquivTypeInfo_45, STATE_VARIABLE_UsedModules_0_46, STATE_VARIABLE_UsedModules_47);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Type_18 = Type0_17;
                break;
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

            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, Args0_35, &Args_39, Changed_19, (MR_Integer) 0, Circ_20, STATE_VARIABLE_VarSet_0_42, STATE_VARIABLE_VarSet_43, STATE_VARIABLE_EquivTypeInfo_0_44, STATE_VARIABLE_EquivTypeInfo_45, STATE_VARIABLE_UsedModules_0_46, STATE_VARIABLE_UsedModules_47);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Type_18 = Type0_17;
                break;
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
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 1))));
            MR_Word Kind_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 3))));
            MR_Word Args0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 2))));
            MR_Word Args_77;

            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, Args0_76, &Args_77, Changed_19, (MR_Integer) 0, Circ_20, STATE_VARIABLE_VarSet_0_42, STATE_VARIABLE_VarSet_43, STATE_VARIABLE_EquivTypeInfo_0_44, STATE_VARIABLE_EquivTypeInfo_45, STATE_VARIABLE_UsedModules_0_46, STATE_VARIABLE_UsedModules_47);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Type_18 = Type0_17;
                break;
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
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word RawType0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 1))));
            MR_Word RawType_41;
            MR_Word Kind_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 2))));

            parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, RawType0_40, &RawType_41, Changed_19, Circ_20, STATE_VARIABLE_VarSet_0_42, STATE_VARIABLE_VarSet_43, STATE_VARIABLE_EquivTypeInfo_0_44, STATE_VARIABLE_EquivTypeInfo_45, STATE_VARIABLE_UsedModules_0_46, STATE_VARIABLE_UsedModules_47);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Type_18 = Type0_17;
                break;
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
            }
          }
          break;
      }
      break;
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
  MR_Word STATE_VARIABLE_Changed_0_46,
  MR_Word * STATE_VARIABLE_Changed_47,
  MR_Word STATE_VARIABLE_Circ_0_48,
  MR_Word * STATE_VARIABLE_Circ_49,
  MR_Word STATE_VARIABLE_VarSet_0_50,
  MR_Word * STATE_VARIABLE_VarSet_51,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_52,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_53,
  MR_Word STATE_VARIABLE_UsedModules_0_54,
  MR_Word * STATE_VARIABLE_UsedModules_55)
{
  {
    MR_bool succeeded;
    MR_Word AlreadyExpanded_32;
    MR_Word Args0_35;
    MR_Word Body0_36;
    MR_Word Renaming_37;
    MR_Word STATE_VARIABLE_VarSet_56_56;
    MR_Word EqvTypeBody_33;
    MR_Word EqvVarSet_34;
    MR_Box conv0_EqvTypeBody_33;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_23)), TypeCtorsAlreadyExpanded_21);
    if (succeeded)
      AlreadyExpanded_32 = (MR_Integer) 1;
    else
      AlreadyExpanded_32 = (MR_Integer) 0;
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), TypeEqvMap_20, ((MR_Box) (TypeCtor_23)), &conv0_EqvTypeBody_33);
    if (succeeded)
    {
      EqvTypeBody_33 = ((MR_Word) (conv0_EqvTypeBody_33));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      EqvVarSet_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvTypeBody_33, (MR_Integer) 0))));
      Args0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvTypeBody_33, (MR_Integer) 1))));
      Body0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvTypeBody_33, (MR_Integer) 2))));
      parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(STATE_VARIABLE_VarSet_0_50, EqvVarSet_34, &STATE_VARIABLE_VarSet_56_56, &Renaming_37);
      succeeded = (STATE_VARIABLE_Circ_0_48 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (AlreadyExpanded_32 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Word Args_38;
      MR_Word Body1_39;
      MR_Word TypeCtorItem_40;
      MR_Word Subst_41;
      MR_Word Body_42;
      MR_Word STATE_VARIABLE_UsedModules_57_57;
      MR_Word Var_59;
      MR_Word STATE_VARIABLE_EquivTypeInfo_60_60;
      MR_Word Var_62;
      MR_Word Var_43;

      if ((MaybeRecord_19 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_UsedModules_57_57 = STATE_VARIABLE_UsedModules_0_54;
      else
      {
        MR_Word Visibility_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeRecord_19, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word TypeCtorSymName_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_23, (MR_Integer) 0))));

        parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_78, TypeCtorSymName_79, STATE_VARIABLE_UsedModules_0_54, &STATE_VARIABLE_UsedModules_57_57);
      }
      *STATE_VARIABLE_Changed_47 = (MR_Integer) 1;
      mercury__map__apply_to_list_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[4]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[4]), Args0_35, Renaming_37, &Args_38);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_37, Body0_36, &Body1_39);
      TypeCtorItem_40 = recompilation__type_ctor_to_item_name_1_f_0(TypeCtor_23);
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (TypeCtorItem_40));
      }
      recompilation__record_expanded_item_3_p_0(Var_59, STATE_VARIABLE_EquivTypeInfo_0_52, &STATE_VARIABLE_EquivTypeInfo_60_60);
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args_38, TArgs_24, &Subst_41);
      parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_41, Body1_39, &Body_42);
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (TypeCtor_23));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (TypeCtorsAlreadyExpanded_21));
      }
      parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_19, TypeEqvMap_20, Var_62, Body_42, Type_26, &Var_43, STATE_VARIABLE_Circ_49, STATE_VARIABLE_VarSet_56_56, STATE_VARIABLE_VarSet_51, STATE_VARIABLE_EquivTypeInfo_60_60, STATE_VARIABLE_EquivTypeInfo_53, STATE_VARIABLE_UsedModules_57_57, STATE_VARIABLE_UsedModules_55);
    }
    else
    {
      switch (STATE_VARIABLE_Changed_0_46) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Type_26 = Type0_22;
          break;
        case (MR_Integer) 1:
          {
            MR_Word SymName_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_23, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_26 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_44));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TArgs_24));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Kind_25));
            }
          }
          break;
      }
      mercury__bool__or_3_p_0(AlreadyExpanded_32, STATE_VARIABLE_Circ_0_48, STATE_VARIABLE_Circ_49);
      *STATE_VARIABLE_UsedModules_55 = STATE_VARIABLE_UsedModules_0_54;
      *STATE_VARIABLE_EquivTypeInfo_53 = STATE_VARIABLE_EquivTypeInfo_0_52;
      *STATE_VARIABLE_VarSet_51 = STATE_VARIABLE_VarSet_0_50;
      *STATE_VARIABLE_Changed_47 = STATE_VARIABLE_Changed_0_46;
    }
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
  MR_Word STATE_VARIABLE_VarSet_0_9,
  MR_Word * STATE_VARIABLE_VarSet_10,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_11,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_12,
  MR_Word STATE_VARIABLE_UsedModules_0_13,
  MR_Word * STATE_VARIABLE_UsedModules_14)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Integer) 0;
      *STATE_VARIABLE_UsedModules_14 = STATE_VARIABLE_UsedModules_0_13;
      *STATE_VARIABLE_EquivTypeInfo_12 = STATE_VARIABLE_EquivTypeInfo_0_11;
      *STATE_VARIABLE_VarSet_10 = STATE_VARIABLE_VarSet_0_9;
      *HeadVar__8_8 = HeadVar__7_7;
    }
    else
    {
      MR_Word Type0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Types0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Type_42;
      MR_Word Changed0_43;
      MR_Word ContainsCirc_44;
      MR_Word Types_45;
      MR_Word Changed1_46;
      MR_Word STATE_VARIABLE_VarSet_55_55;
      MR_Word STATE_VARIABLE_EquivTypeInfo_56_56;
      MR_Word STATE_VARIABLE_UsedModules_57_57;
      MR_Word STATE_VARIABLE_Circ_58_58;

      parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Type0_34, &Type_42, &Changed0_43, &ContainsCirc_44, STATE_VARIABLE_VarSet_0_9, &STATE_VARIABLE_VarSet_55_55, STATE_VARIABLE_EquivTypeInfo_0_11, &STATE_VARIABLE_EquivTypeInfo_56_56, STATE_VARIABLE_UsedModules_0_13, &STATE_VARIABLE_UsedModules_57_57);
      STATE_VARIABLE_Circ_58_58 = mercury__bool__or_2_f_0(HeadVar__7_7, ContainsCirc_44);
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Types0_35, &Types_45, &Changed1_46, STATE_VARIABLE_Circ_58_58, HeadVar__8_8, STATE_VARIABLE_VarSet_55_55, STATE_VARIABLE_VarSet_10, STATE_VARIABLE_EquivTypeInfo_56_56, STATE_VARIABLE_EquivTypeInfo_12, STATE_VARIABLE_UsedModules_57_57, STATE_VARIABLE_UsedModules_14);
      succeeded = (Changed0_43 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (Changed1_46 == (MR_Integer) 1);
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
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__equiv_type____Unify____eqv_inst_body_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__equiv_type____Compare____eqv_inst_body_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__equiv_type____Unify____eqv_type_body_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__equiv_type____Compare____eqv_type_body_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__equiv_type____Unify____inst_eqv_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__equiv_type____Compare____inst_eqv_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__equiv_type____Unify____type_eqv_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__equiv_type____Compare____type_eqv_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__equiv_type__init(void)
{
}

void mercury__parse_tree__equiv_type__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_inst_eqv_map_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_pred_or_func_decl_type_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_section_maybe_record_sym_name_use_1);
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
