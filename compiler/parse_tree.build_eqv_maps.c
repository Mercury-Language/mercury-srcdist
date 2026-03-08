/*
** Automatically generated from `build_eqv_maps.m'
** by the Mercury compiler,
** version rotd-2026-03-08
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


// :- module parse_tree.build_eqv_maps.
// :- implementation.

/*
INIT mercury__parse_tree__build_eqv_maps__init
ENDINIT
*/

#include "parse_tree.build_eqv_maps.mih"


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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__build_eqv_maps__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__build_eqv_maps__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__build_eqv_maps__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__build_eqv_maps__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__field_types_eqv_inst_body_0_0[2];

static const MR_DuFunctorDesc parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_functor_desc_eqv_inst_body_0_0;

static const MR_DuFunctorDescPtr parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_stag_ordered_eqv_inst_body_0_0[1];

static const MR_DuPtagLayout parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_ptag_ordered_eqv_inst_body_0[1];

static const MR_DuFunctorDescPtr parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_name_ordered_eqv_inst_body_0[1];

static const MR_Integer parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__functor_number_map_eqv_inst_body_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__build_eqv_maps__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__build_eqv_maps__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__build_eqv_maps__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__field_types_eqv_type_body_0_0[3];

static const MR_DuFunctorDesc parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_functor_desc_eqv_type_body_0_0;

static const MR_DuFunctorDescPtr parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_stag_ordered_eqv_type_body_0_0[1];

static const MR_DuPtagLayout parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_ptag_ordered_eqv_type_body_0[1];

static const MR_DuFunctorDescPtr parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_name_ordered_eqv_type_body_0[1];

static const MR_Integer parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__functor_number_map_eqv_type_body_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__build_eqv_maps__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__build_eqv_maps__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0;

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_inst_ctor_checked_defns_int_4_p_0(
  MR_Word InstCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_InstEqvMap_0_21,
  MR_Word * STATE_VARIABLE_InstEqvMap_22);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_inst_ctor_checked_defns_int_imp_4_p_0(
  MR_Word InstCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_InstEqvMap_0_21,
  MR_Word * STATE_VARIABLE_InstEqvMap_22);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_inst_defn_3_p_0(
  MR_Word ItemInstDefn_4,
  MR_Word STATE_VARIABLE_InstEqvMap_0_16,
  MR_Word * STATE_VARIABLE_InstEqvMap_17);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_type_ctor_checked_defns_int_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_34,
  MR_Word * STATE_VARIABLE_TypeEqvMap_35);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_type_ctor_checked_defns_int_imp_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_34,
  MR_Word * STATE_VARIABLE_TypeEqvMap_35);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_type_defn_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_15,
  MR_Word * STATE_VARIABLE_TypeEqvMap_16);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_trans_opt_5_p_0(
  MR_Word _ParseTreePlainOpt_6,
  MR_Word TypeEqvMap_7,
  MR_Word * TypeEqvMap_3,
  MR_Word InstEqvMap_8,
  MR_Word * InstEqvMap_5);

static void MR_CALL 
parse_tree__build_eqv_maps__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word * TypeEqvMap_3,
  MR_Word InstEqvMap_8,
  MR_Word * InstEqvMap_5);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_plain_opt_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_plain_opt_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_plain_opt_5_p_0(
  MR_Word ParseTreePlainOpt_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_9,
  MR_Word * STATE_VARIABLE_TypeEqvMap_10,
  MR_Word STATE_VARIABLE_InstEqvMap_0_11,
  MR_Word * STATE_VARIABLE_InstEqvMap_12);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_int_for_opt_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_int_for_opt_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_int_for_opt_spec_5_p_0(
  MR_Word IntForOptSpec_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_15,
  MR_Word * STATE_VARIABLE_TypeEqvMap_16,
  MR_Word STATE_VARIABLE_InstEqvMap_0_17,
  MR_Word * STATE_VARIABLE_InstEqvMap_18);

static void MR_CALL 
parse_tree__build_eqv_maps__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__build_eqv_maps__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__build_eqv_maps__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0(
  MR_Word ParseTreeInt1_8,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_int2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_int2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_int2_6_p_0(
  MR_Word ReadWhy2_7,
  MR_Word ParseTreeInt2_8,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_indirect_int2_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_indirect_int2_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_indirect_int2_spec_5_p_0(
  MR_Word IndirectIntSpec_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_direct_int1_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_direct_int1_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_direct_int1_spec_5_p_0(
  MR_Word DirectIntSpec_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_ancestor_int_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_ancestor_int_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_ancestor_int_spec_5_p_0(
  MR_Word AncestorIntSpec_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_module_src_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_module_src_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_module_src_5_p_0(
  MR_Word ParseTreeModuleSrc_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_9,
  MR_Word * STATE_VARIABLE_TypeEqvMap_10,
  MR_Word STATE_VARIABLE_InstEqvMap_0_11,
  MR_Word * STATE_VARIABLE_InstEqvMap_12);

static MR_bool MR_CALL 
parse_tree__build_eqv_maps____Unify____eqv_inst_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__build_eqv_maps____Compare____eqv_inst_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__build_eqv_maps____Unify____eqv_type_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__build_eqv_maps____Compare____eqv_type_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__build_eqv_maps____Unify____inst_eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__build_eqv_maps____Compare____inst_eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__build_eqv_maps____Unify____type_eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__build_eqv_maps____Compare____type_eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__build_eqv_maps_scalar_common_1[24][3];

static /* final */ const MR_Box parse_tree__build_eqv_maps_scalar_common_2[7][2];

static /* final */ const MR_Box parse_tree__build_eqv_maps_scalar_common_3[2][7];

static /* final */ const MR_Box parse_tree__build_eqv_maps_scalar_common_4[6][8];

static /* final */ const MR_Box parse_tree__build_eqv_maps_scalar_common_5[2][6];




static /* final */ const MR_Box parse_tree__build_eqv_maps_scalar_common_1[24][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_3[0])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_module_src_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_3[1])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_module_src_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_4[0])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_4[1])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_4[2])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_4[3])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_4[4])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_4[5])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_3[0])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_ancestor_int_spec_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_3[1])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_ancestor_int_spec_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_3[0])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_direct_int1_spec_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_3[1])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_direct_int1_spec_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_3[0])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_indirect_int2_spec_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_3[1])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_indirect_int2_spec_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_3[0])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_int2_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_3[1])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_int2_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_3[0])),
    ((MR_Box) (parse_tree__build_eqv_maps__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_3[1])),
    ((MR_Box) (parse_tree__build_eqv_maps__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_3[0])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_int_for_opt_spec_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_3[1])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_int_for_opt_spec_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_5[0])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_plain_opt_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_5[1])),
    ((MR_Box) (parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_plain_opt_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__build_eqv_maps_scalar_common_2[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_2[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__build_eqv_maps_scalar_common_2[2]))
  },
};

static /* final */ const MR_Box parse_tree__build_eqv_maps_scalar_common_3[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0))
  },
};

static /* final */ const MR_Box parse_tree__build_eqv_maps_scalar_common_4[6][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0))
  },
};

static /* final */ const MR_Box parse_tree__build_eqv_maps_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__build_eqv_maps__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__build_eqv_maps__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__build_eqv_maps__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__build_eqv_maps__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__build_eqv_maps__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__build_eqv_maps__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__build_eqv_maps__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__build_eqv_maps__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_PseudoTypeInfo parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__field_types_eqv_inst_body_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__build_eqv_maps__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_functor_desc_eqv_inst_body_0_0 = {
  (MR_String) "eqv_inst_body",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__field_types_eqv_inst_body_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_stag_ordered_eqv_inst_body_0_0[1] = { &parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_functor_desc_eqv_inst_body_0_0 };

static const MR_DuPtagLayout parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_ptag_ordered_eqv_inst_body_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_stag_ordered_eqv_inst_body_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_name_ordered_eqv_inst_body_0[1] = { &parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_functor_desc_eqv_inst_body_0_0 };

static const MR_Integer parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__functor_number_map_eqv_inst_body_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__build_eqv_maps____Unify____eqv_inst_body_0_0_10001)),
  ((MR_Box) (parse_tree__build_eqv_maps____Compare____eqv_inst_body_0_0_10001)),
  (MR_String) "parse_tree.build_eqv_maps",
  (MR_String) "eqv_inst_body",
  { parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_name_ordered_eqv_inst_body_0 },
  { parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_ptag_ordered_eqv_inst_body_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__functor_number_map_eqv_inst_body_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__build_eqv_maps__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__build_eqv_maps__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__build_eqv_maps__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__build_eqv_maps__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__field_types_eqv_type_body_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__build_eqv_maps__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__build_eqv_maps__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_functor_desc_eqv_type_body_0_0 = {
  (MR_String) "eqv_type_body",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__field_types_eqv_type_body_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_stag_ordered_eqv_type_body_0_0[1] = { &parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_functor_desc_eqv_type_body_0_0 };

static const MR_DuPtagLayout parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_ptag_ordered_eqv_type_body_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_stag_ordered_eqv_type_body_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_name_ordered_eqv_type_body_0[1] = { &parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_functor_desc_eqv_type_body_0_0 };

static const MR_Integer parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__functor_number_map_eqv_type_body_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__build_eqv_maps____Unify____eqv_type_body_0_0_10001)),
  ((MR_Box) (parse_tree__build_eqv_maps____Compare____eqv_type_body_0_0_10001)),
  (MR_String) "parse_tree.build_eqv_maps",
  (MR_String) "eqv_type_body",
  { parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_name_ordered_eqv_type_body_0 },
  { parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__du_ptag_ordered_eqv_type_body_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__functor_number_map_eqv_type_body_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__build_eqv_maps__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_TypeInfo) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_inst_eqv_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__build_eqv_maps____Unify____inst_eqv_map_0_0_10001)),
  ((MR_Box) (parse_tree__build_eqv_maps____Compare____inst_eqv_map_0_0_10001)),
  (MR_String) "parse_tree.build_eqv_maps",
  (MR_String) "inst_eqv_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__build_eqv_maps__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__build_eqv_maps__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_type_eqv_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__build_eqv_maps____Unify____type_eqv_map_0_0_10001)),
  ((MR_Box) (parse_tree__build_eqv_maps____Compare____type_eqv_map_0_0_10001)),
  (MR_String) "parse_tree.build_eqv_maps",
  (MR_String) "type_eqv_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__build_eqv_maps__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
parse_tree__build_eqv_maps____Compare____type_eqv_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__build_eqv_maps____Unify____type_eqv_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__build_eqv_maps____Compare____inst_eqv_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__build_eqv_maps____Unify____inst_eqv_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__build_eqv_maps____Compare____eqv_type_body_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__build_eqv_maps_scalar_common_2[5]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__build_eqv_maps_scalar_common_2[6]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
parse_tree__build_eqv_maps____Unify____eqv_type_body_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__build_eqv_maps_scalar_common_2[5]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_2[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__build_eqv_maps____Compare____eqv_inst_body_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__build_eqv_maps_scalar_common_2[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
parse_tree__build_eqv_maps____Unify____eqv_inst_body_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__build_eqv_maps_scalar_common_2[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_inst_ctor_checked_defns_int_4_p_0(
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
          mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0), ((MR_Box) (InstCtor_5)), ((MR_Box) (Var_23)), STATE_VARIABLE_InstEqvMap_0_21, STATE_VARIABLE_InstEqvMap_22);
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_inst_ctor_checked_defns_int_imp_4_p_0(
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
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0), ((MR_Box) (InstCtor_5)), ((MR_Box) (Var_23)), STATE_VARIABLE_InstEqvMap_0_21, STATE_VARIABLE_InstEqvMap_22);
  }
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_inst_defn_3_p_0(
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

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__build_eqv_maps_scalar_common_2[3]), InstParams_7, &Arity_14);
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
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0), ((MR_Box) (InstCtor_15)), ((MR_Box) (Var_19)), STATE_VARIABLE_InstEqvMap_0_16, STATE_VARIABLE_InstEqvMap_17);
  }
  else
    *STATE_VARIABLE_InstEqvMap_17 = STATE_VARIABLE_InstEqvMap_0_16;
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_type_ctor_checked_defns_int_4_p_0(
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
                mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (Var_36)), STATE_VARIABLE_TypeEqvMap_0_34, STATE_VARIABLE_TypeEqvMap_35);
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
parse_tree__build_eqv_maps__build_eqv_maps_in_type_ctor_checked_defns_int_imp_4_p_0(
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
          mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (Var_36)), STATE_VARIABLE_TypeEqvMap_0_34, STATE_VARIABLE_TypeEqvMap_35);
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
parse_tree__build_eqv_maps__build_eqv_maps_in_type_defn_3_p_0(
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

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__build_eqv_maps_scalar_common_2[2]), TypeParams_7, &Arity_13);
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
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (Var_18)), STATE_VARIABLE_TypeEqvMap_0_15, STATE_VARIABLE_TypeEqvMap_16);
  }
  else
    *STATE_VARIABLE_TypeEqvMap_16 = STATE_VARIABLE_TypeEqvMap_0_15;
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_trans_opt_5_p_0(
  MR_Word _ParseTreePlainOpt_6,
  MR_Word TypeEqvMap_7,
  MR_Word * TypeEqvMap_3,
  MR_Word InstEqvMap_8,
  MR_Word * InstEqvMap_5)
{
  parse_tree__build_eqv_maps__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_5_p_0(TypeEqvMap_7, TypeEqvMap_3, InstEqvMap_8, InstEqvMap_5);
}

static void MR_CALL 
parse_tree__build_eqv_maps__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word * TypeEqvMap_3,
  MR_Word InstEqvMap_8,
  MR_Word * InstEqvMap_5)
{
  *TypeEqvMap_3 = TypeEqvMap_7;
  *InstEqvMap_5 = InstEqvMap_8;
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_plain_opt_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_17;

  parse_tree__build_eqv_maps__build_eqv_maps_in_inst_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_InstEqvMap_17);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_17));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_plain_opt_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_16;

  parse_tree__build_eqv_maps__build_eqv_maps_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeEqvMap_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_16));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_plain_opt_5_p_0(
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

  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__build_eqv_maps_scalar_common_2[0]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[22]), Var_14, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_9)), &conv1_STATE_VARIABLE_TypeEqvMap_10);
  *STATE_VARIABLE_TypeEqvMap_10 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_10));
  Var_17 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_6, 6))));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__build_eqv_maps_scalar_common_2[1]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[23]), Var_17, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_11)), &conv3_STATE_VARIABLE_InstEqvMap_12);
  *STATE_VARIABLE_InstEqvMap_12 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_12));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_int_for_opt_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_22;

  parse_tree__build_eqv_maps__build_eqv_maps_in_inst_ctor_checked_defns_int_imp_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstEqvMap_22);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_22));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_int_for_opt_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_35;

  parse_tree__build_eqv_maps__build_eqv_maps_in_type_ctor_checked_defns_int_imp_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeEqvMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_35));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_int_for_opt_spec_5_p_0(
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

        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[20]), Var_20, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_15)), &conv1_STATE_VARIABLE_TypeEqvMap_16);
        *STATE_VARIABLE_TypeEqvMap_16 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_16));
        Var_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_9, 8))));
        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[21]), Var_22, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_17)), &conv3_STATE_VARIABLE_InstEqvMap_18);
        *STATE_VARIABLE_InstEqvMap_18 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_18));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_11 = ((MR_Word) ((MR_hl_field(1, IntForOptSpec_6, 0))));

        parse_tree__build_eqv_maps__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0(ParseTreeInt1_11, STATE_VARIABLE_TypeEqvMap_0_15, STATE_VARIABLE_TypeEqvMap_16, STATE_VARIABLE_InstEqvMap_0_17, STATE_VARIABLE_InstEqvMap_18);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_13 = ((MR_Word) ((MR_hl_field(2, IntForOptSpec_6, 0))));
        MR_Word ReadWhy2_14 = ((MR_Unsigned) ((MR_hl_field(2, IntForOptSpec_6, 1))) & (MR_Integer) 3);

        parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_int2_6_p_0(ReadWhy2_14, ParseTreeInt2_13, STATE_VARIABLE_TypeEqvMap_0_15, STATE_VARIABLE_TypeEqvMap_16, STATE_VARIABLE_InstEqvMap_0_17, STATE_VARIABLE_InstEqvMap_18);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__build_eqv_maps__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_22;

  parse_tree__build_eqv_maps__build_eqv_maps_in_inst_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstEqvMap_22);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_22));
}

static void MR_CALL 
parse_tree__build_eqv_maps__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_35;

  parse_tree__build_eqv_maps__build_eqv_maps_in_type_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeEqvMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_35));
}

static void MR_CALL 
parse_tree__build_eqv_maps__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0(
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

  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[18]), Var_16, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_11)), &conv1_STATE_VARIABLE_TypeEqvMap_12);
  *STATE_VARIABLE_TypeEqvMap_12 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_12));
  Var_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, 8))));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[19]), Var_19, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_13)), &conv3_STATE_VARIABLE_InstEqvMap_14);
  *STATE_VARIABLE_InstEqvMap_14 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_14));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_int2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_22;

  parse_tree__build_eqv_maps__build_eqv_maps_in_inst_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstEqvMap_22);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_22));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_int2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_35;

  parse_tree__build_eqv_maps__build_eqv_maps_in_type_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeEqvMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_35));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_int2_6_p_0(
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

        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[16]), Var_16, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_11)), &conv1_STATE_VARIABLE_TypeEqvMap_12);
        *STATE_VARIABLE_TypeEqvMap_12 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_12));
        Var_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, 8))));
        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[17]), Var_19, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_13)), &conv3_STATE_VARIABLE_InstEqvMap_14);
        *STATE_VARIABLE_InstEqvMap_14 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_14));
      }
      break;
  }
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_indirect_int2_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_22;

  parse_tree__build_eqv_maps__build_eqv_maps_in_inst_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstEqvMap_22);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_22));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_indirect_int2_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_35;

  parse_tree__build_eqv_maps__build_eqv_maps_in_type_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeEqvMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_35));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_indirect_int2_spec_5_p_0(
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

        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[14]), Var_16, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_11)), &conv1_STATE_VARIABLE_TypeEqvMap_12);
        *STATE_VARIABLE_TypeEqvMap_12 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_12));
        Var_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_9, 8))));
        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[15]), Var_18, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_13)), &conv3_STATE_VARIABLE_InstEqvMap_14);
        *STATE_VARIABLE_InstEqvMap_14 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_14));
      }
      break;
  }
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_direct_int1_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_22;

  parse_tree__build_eqv_maps__build_eqv_maps_in_inst_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstEqvMap_22);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_22));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_direct_int1_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_35;

  parse_tree__build_eqv_maps__build_eqv_maps_in_type_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeEqvMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_35));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_direct_int1_spec_5_p_0(
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

  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[12]), Var_16, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_11)), &conv1_STATE_VARIABLE_TypeEqvMap_12);
  *STATE_VARIABLE_TypeEqvMap_12 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_12));
  Var_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_9, 8))));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[13]), Var_18, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_13)), &conv3_STATE_VARIABLE_InstEqvMap_14);
  *STATE_VARIABLE_InstEqvMap_14 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_14));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_ancestor_int_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_22;

  parse_tree__build_eqv_maps__build_eqv_maps_in_inst_ctor_checked_defns_int_imp_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstEqvMap_22);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_22));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_ancestor_int_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_35;

  parse_tree__build_eqv_maps__build_eqv_maps_in_type_ctor_checked_defns_int_imp_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeEqvMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_35));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_ancestor_int_spec_5_p_0(
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

  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[10]), Var_16, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_11)), &conv1_STATE_VARIABLE_TypeEqvMap_12);
  *STATE_VARIABLE_TypeEqvMap_12 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_12));
  Var_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_9, 8))));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[11]), Var_18, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_13)), &conv3_STATE_VARIABLE_InstEqvMap_14);
  *STATE_VARIABLE_InstEqvMap_14 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_14));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_6(
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

  parse_tree__build_eqv_maps__build_eqv_maps_in_int_for_opt_spec_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv21_STATE_VARIABLE_TypeEqvMap_16, ((MR_Word) (wrapper_arg_4)), &conv20_STATE_VARIABLE_InstEqvMap_18);
  *wrapper_arg_3 = ((MR_Box) (conv21_STATE_VARIABLE_TypeEqvMap_16));
  *wrapper_arg_5 = ((MR_Box) (conv20_STATE_VARIABLE_InstEqvMap_18));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_5(
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

  parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_trans_opt_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_TypeEqvMap_3, ((MR_Word) (wrapper_arg_4)), &conv16_InstEqvMap_5);
  *wrapper_arg_3 = ((MR_Box) (conv17_TypeEqvMap_3));
  *wrapper_arg_5 = ((MR_Box) (conv16_InstEqvMap_5));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_4(
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

  parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_plain_opt_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_TypeEqvMap_10, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_InstEqvMap_12);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_TypeEqvMap_10));
  *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_InstEqvMap_12));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_3(
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

  parse_tree__build_eqv_maps__build_eqv_maps_in_indirect_int2_spec_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_TypeEqvMap_12, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_InstEqvMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_TypeEqvMap_12));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_InstEqvMap_14));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_2(
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

  parse_tree__build_eqv_maps__build_eqv_maps_in_direct_int1_spec_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_TypeEqvMap_12, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_InstEqvMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_TypeEqvMap_12));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_InstEqvMap_14));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0_1(
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

  parse_tree__build_eqv_maps__build_eqv_maps_in_ancestor_int_spec_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeEqvMap_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_InstEqvMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeEqvMap_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_InstEqvMap_14));
}

void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0(
  MR_Word AugCompUnit_4,
  MR_Word * STATE_VARIABLE_TypeEqvMap_16,
  MR_Word * STATE_VARIABLE_InstEqvMap_17)
{
  MR_Word ParseTreeModuleSrc_7 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_4, 0))));
  MR_Word AncestorIntSpecs_8 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_4, 1))));
  MR_Word DirectInt1Specs_9 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_4, 2))));
  MR_Word IndirectInt2Specs_10 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_4, 3))));
  MR_Word PlainOpts_11 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_4, 4))));
  MR_Word TransOpts_12 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_4, 5))));
  MR_Word IntForOptSpecs_13 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_4, 6))));
  MR_Word STATE_VARIABLE_TypeEqvMap_1_18;
  MR_Word STATE_VARIABLE_InstEqvMap_1_19;
  MR_Word STATE_VARIABLE_TypeEqvMap_2_20;
  MR_Word STATE_VARIABLE_InstEqvMap_2_21;
  MR_Word STATE_VARIABLE_TypeEqvMap_3_23;
  MR_Word STATE_VARIABLE_InstEqvMap_3_24;
  MR_Word STATE_VARIABLE_TypeEqvMap_4_26;
  MR_Word STATE_VARIABLE_InstEqvMap_4_27;
  MR_Word STATE_VARIABLE_TypeEqvMap_5_29;
  MR_Word STATE_VARIABLE_InstEqvMap_5_30;
  MR_Word STATE_VARIABLE_TypeEqvMap_6_32;
  MR_Word STATE_VARIABLE_InstEqvMap_6_33;
  MR_Word STATE_VARIABLE_TypeEqvMap_7_35;
  MR_Word STATE_VARIABLE_InstEqvMap_7_36;
  MR_Box conv3_STATE_VARIABLE_TypeEqvMap_3_23;
  MR_Box conv2_STATE_VARIABLE_InstEqvMap_3_24;
  MR_Box conv7_STATE_VARIABLE_TypeEqvMap_4_26;
  MR_Box conv6_STATE_VARIABLE_InstEqvMap_4_27;
  MR_Box conv11_STATE_VARIABLE_TypeEqvMap_5_29;
  MR_Box conv10_STATE_VARIABLE_InstEqvMap_5_30;
  MR_Box conv15_STATE_VARIABLE_TypeEqvMap_6_32;
  MR_Box conv14_STATE_VARIABLE_InstEqvMap_6_33;
  MR_Box conv19_STATE_VARIABLE_TypeEqvMap_7_35;
  MR_Box conv18_STATE_VARIABLE_InstEqvMap_7_36;
  MR_Box conv23_STATE_VARIABLE_TypeEqvMap_16;
  MR_Box conv22_STATE_VARIABLE_InstEqvMap_17;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0), &STATE_VARIABLE_TypeEqvMap_1_18);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0), &STATE_VARIABLE_InstEqvMap_1_19);
  parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_module_src_5_p_0(ParseTreeModuleSrc_7, STATE_VARIABLE_TypeEqvMap_1_18, &STATE_VARIABLE_TypeEqvMap_2_20, STATE_VARIABLE_InstEqvMap_1_19, &STATE_VARIABLE_InstEqvMap_2_21);
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[4]), AncestorIntSpecs_8, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_2_20)), &conv3_STATE_VARIABLE_TypeEqvMap_3_23, ((MR_Box) (STATE_VARIABLE_InstEqvMap_2_21)), &conv2_STATE_VARIABLE_InstEqvMap_3_24);
  STATE_VARIABLE_TypeEqvMap_3_23 = ((MR_Word) (conv3_STATE_VARIABLE_TypeEqvMap_3_23));
  STATE_VARIABLE_InstEqvMap_3_24 = ((MR_Word) (conv2_STATE_VARIABLE_InstEqvMap_3_24));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[5]), DirectInt1Specs_9, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_3_23)), &conv7_STATE_VARIABLE_TypeEqvMap_4_26, ((MR_Box) (STATE_VARIABLE_InstEqvMap_3_24)), &conv6_STATE_VARIABLE_InstEqvMap_4_27);
  STATE_VARIABLE_TypeEqvMap_4_26 = ((MR_Word) (conv7_STATE_VARIABLE_TypeEqvMap_4_26));
  STATE_VARIABLE_InstEqvMap_4_27 = ((MR_Word) (conv6_STATE_VARIABLE_InstEqvMap_4_27));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[6]), IndirectInt2Specs_10, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_4_26)), &conv11_STATE_VARIABLE_TypeEqvMap_5_29, ((MR_Box) (STATE_VARIABLE_InstEqvMap_4_27)), &conv10_STATE_VARIABLE_InstEqvMap_5_30);
  STATE_VARIABLE_TypeEqvMap_5_29 = ((MR_Word) (conv11_STATE_VARIABLE_TypeEqvMap_5_29));
  STATE_VARIABLE_InstEqvMap_5_30 = ((MR_Word) (conv10_STATE_VARIABLE_InstEqvMap_5_30));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[7]), PlainOpts_11, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_5_29)), &conv15_STATE_VARIABLE_TypeEqvMap_6_32, ((MR_Box) (STATE_VARIABLE_InstEqvMap_5_30)), &conv14_STATE_VARIABLE_InstEqvMap_6_33);
  STATE_VARIABLE_TypeEqvMap_6_32 = ((MR_Word) (conv15_STATE_VARIABLE_TypeEqvMap_6_32));
  STATE_VARIABLE_InstEqvMap_6_33 = ((MR_Word) (conv14_STATE_VARIABLE_InstEqvMap_6_33));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[8]), TransOpts_12, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_6_32)), &conv19_STATE_VARIABLE_TypeEqvMap_7_35, ((MR_Box) (STATE_VARIABLE_InstEqvMap_6_33)), &conv18_STATE_VARIABLE_InstEqvMap_7_36);
  STATE_VARIABLE_TypeEqvMap_7_35 = ((MR_Word) (conv19_STATE_VARIABLE_TypeEqvMap_7_35));
  STATE_VARIABLE_InstEqvMap_7_36 = ((MR_Word) (conv18_STATE_VARIABLE_InstEqvMap_7_36));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[9]), IntForOptSpecs_13, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_7_35)), &conv23_STATE_VARIABLE_TypeEqvMap_16, ((MR_Box) (STATE_VARIABLE_InstEqvMap_7_36)), &conv22_STATE_VARIABLE_InstEqvMap_17);
  *STATE_VARIABLE_TypeEqvMap_16 = ((MR_Word) (conv23_STATE_VARIABLE_TypeEqvMap_16));
  *STATE_VARIABLE_InstEqvMap_17 = ((MR_Word) (conv22_STATE_VARIABLE_InstEqvMap_17));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_module_src_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_22;

  parse_tree__build_eqv_maps__build_eqv_maps_in_inst_ctor_checked_defns_int_imp_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstEqvMap_22);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_22));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_module_src_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_35;

  parse_tree__build_eqv_maps__build_eqv_maps_in_type_ctor_checked_defns_int_imp_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeEqvMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_35));
}

static void MR_CALL 
parse_tree__build_eqv_maps__build_eqv_maps_in_parse_tree_module_src_5_p_0(
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

  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[0]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[2]), Var_14, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_9)), &conv1_STATE_VARIABLE_TypeEqvMap_10);
  *STATE_VARIABLE_TypeEqvMap_10 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_10));
  Var_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, 9))));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[1]), (MR_Word) (&parse_tree__build_eqv_maps_scalar_common_1[3]), Var_17, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_11)), &conv3_STATE_VARIABLE_InstEqvMap_12);
  *STATE_VARIABLE_InstEqvMap_12 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_12));
}

static MR_bool MR_CALL 
parse_tree__build_eqv_maps____Unify____eqv_inst_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__build_eqv_maps____Unify____eqv_inst_body_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__build_eqv_maps____Compare____eqv_inst_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__build_eqv_maps____Compare____eqv_inst_body_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__build_eqv_maps____Unify____eqv_type_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__build_eqv_maps____Unify____eqv_type_body_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__build_eqv_maps____Compare____eqv_type_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__build_eqv_maps____Compare____eqv_type_body_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__build_eqv_maps____Unify____inst_eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__build_eqv_maps____Unify____inst_eqv_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__build_eqv_maps____Compare____inst_eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__build_eqv_maps____Compare____inst_eqv_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__build_eqv_maps____Unify____type_eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__build_eqv_maps____Unify____type_eqv_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__build_eqv_maps____Compare____type_eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__build_eqv_maps____Compare____type_eqv_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__build_eqv_maps__init(void)
{
}

void mercury__parse_tree__build_eqv_maps__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0);
  MR_register_type_ctor_info(&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0);
  MR_register_type_ctor_info(&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_inst_eqv_map_0);
  MR_register_type_ctor_info(&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_type_eqv_map_0);
}

void mercury__parse_tree__build_eqv_maps__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__build_eqv_maps__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.build_eqv_maps.
