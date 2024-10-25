/*
** Automatically generated from `parse_class.m'
** by the Mercury compiler,
** version rotd-2024-10-25
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


// :- module parse_tree.parse_class.
// :- implementation.

/*
INIT mercury__parse_tree__parse_class__init
ENDINIT
*/

#include "parse_tree.parse_class.mih"


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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_item.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_type_name.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.builder.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item__type_ctor_info_class_decl_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data__type_ctor_info_instance_method_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__list__ti_list_1parse_tree__prog_item__type_ctor_info_var_or_ground_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_0[4];

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_1[3];

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_1;

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_2[2];

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_2;

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_2[1];

static const MR_DuPtagLayout parse_tree__parse_class__parse_tree__parse_class__du_ptag_ordered_arbitrary_constraint_0[3];

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_name_ordered_arbitrary_constraint_0[3];

static const MR_Integer parse_tree__parse_class__parse_tree__parse_class__functor_number_map_arbitrary_constraint_0[3];

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__one_or_more__ti_one_or_more_1parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_class__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct3 parse_tree__parse_class__parse_tree__maybe_error__ti_maybe2_3list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static MR_Word MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__check_tvars_in_instance_constraint__655__1_2_f_0(
  MR_Word TVarSet_12,
  MR_Word HeadVar__2_61);

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__check_tvars_in_instance_constraint__651__1_2_p_0(
  MR_Word TypesVars_17,
  MR_Word HeadVar__2_56);

static void MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_unconstrained_class__399__1_2_p_0(
  MR_Word HeadVar__1_67,
  MR_Word * HeadVar__2_68);

static MR_Word MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__240__1_2_f_0(
  MR_Word ClassTVarSet_44,
  MR_Word HeadVar__2_196);

static MR_Word MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__237__1_2_f_0(
  MR_Word ClassTVarSet_44,
  MR_Word HeadVar__2_193);

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__195__1_2_p_0(
  MR_Word Params_26,
  MR_Word HeadVar__2_188);

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__193__1_2_p_0(
  MR_Word Params_26,
  MR_Word HeadVar__2_186);

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraints_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraints_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraint_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__parse_class__get_simple_constraint_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Constraint_3);

static void MR_CALL 
parse_tree__parse_class__term_to_instance_method_4_p_0(
  MR_Word _ModuleName_5,
  MR_Word VarSet_6,
  MR_Word MethodTerm_7,
  MR_Word * MaybeInstanceMethod_8);

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(
  MR_Word VarSet_6,
  MR_Word MethodTerm_7,
  MR_Word * MaybeInstanceMethod_8);

static MR_Word MR_CALL 
parse_tree__parse_class__report_unexpected_method_term_2_f_0(
  MR_Word VarSet_4,
  MR_Word MethodTerm_5);

static MR_Word MR_CALL 
parse_tree__parse_class__tvars_in_fundep_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_class__collect_class_and_inst_constraints_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class__parse_non_empty_instance_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word TVarSet_11,
  MR_Word NameTerm_12,
  MR_Word MethodsTerm_13,
  MR_Word Context_14,
  MR_Word SeqNum_15,
  MR_Word * MaybeItemInstanceInfo_16);

static void MR_CALL 
parse_tree__parse_class__parse_instance_methods_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class__parse_instance_methods_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word MethodsTerm_7,
  MR_Word * Result_8);

static MR_Box MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0(
  MR_Word ItemInstanceInfo_4,
  MR_Word NameTerm_5,
  MR_Word * MaybeSpec_6);

static MR_bool MR_CALL 
parse_tree__parse_class__parse_derived_instance_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class__parse_derived_instance_7_p_0(
  MR_Word ModuleName_8,
  MR_Word TVarSet_9,
  MR_Word NameTerm_10,
  MR_Word ConstraintsTerm_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeItemInstanceInfo_14);

static void MR_CALL 
parse_tree__parse_class__parse_non_empty_class_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class__parse_non_empty_class_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word NameTerm_10,
  MR_Word MethodsTerm_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeItemTypeClassInfo_14);

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Results_0_2,
  MR_Word * STATE_VARIABLE_Results_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
parse_tree__parse_class__parse_class_head_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class__parse_class_head_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word ArgTerm_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeItemTypeClassInfo_12);

static MR_Box MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word NameTerm_10,
  MR_Word ConstraintsTerm_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeItemTypeClass_14);

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word VarSet_6,
  MR_Word ConstraintsTerm_7,
  MR_Word * Result_8);

static void MR_CALL 
parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(
  MR_Word VarSet_5,
  MR_Word HeadTerm_6,
  MR_Word TailTerms_7,
  MR_Word * Result_8);

static void MR_CALL 
parse_tree__parse_class__parse_arbitrary_constraint_3_p_0(
  MR_Word VarSet_4,
  MR_Word ConstraintTerm_5,
  MR_Word * Result_6);

static void MR_CALL 
parse_tree__parse_class__classify_types_as_var_ground_or_neither_4_p_0(
  MR_Word TVarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
parse_tree__parse_class__parse_fundep_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * Result_6);

static MR_Box MR_CALL 
parse_tree__parse_class__collect_superclass_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_class__collect_superclass_constraints_5_p_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
parse_tree__parse_class__parse_unconstrained_class_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class__parse_unconstrained_class_6_p_0(
  MR_Word ModuleName_7,
  MR_Word TVarSet_8,
  MR_Word NameTerm_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeTypeClassInfo_12);

static MR_Box MR_CALL 
parse_tree__parse_class__tvars_in_fundeps_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_class__tvars_in_fundeps_1_f_0(
  MR_Word FunDeps_3);

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____maybe_class_and_inst_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class____Compare____maybe_class_and_inst_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_class_scalar_common_1[159][2];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_2[8][3];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_3[1][4];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_4[2][1];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_5[5][5];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_6[3][7];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_7[1][6];




static /* final */ const MR_Box parse_tree__parse_class_scalar_common_1[159][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_class_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "typeclass"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- typeclass tcname(T1, ... Tn)"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "optionally followed by"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[22])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where [method_signature_1, ... method_signature_m]"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "instance"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[14])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- instance tcname(type1, ... typen)"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where [method_spec_1, ... method_spec_m]"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[30])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Sorry, not implemented: constraints"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "functional dependencies"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are only allowed"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in typeclass declarations."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the superclass constraint"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in superclass constraints"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the functional dependency"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in functional dependencies"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: type variable"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not a parameter"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: type variables"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not parameters"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of type class"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a class declaration"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not contain"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[79]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "an inst constraint such as"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[81]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The type"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[83]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is neither."))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The types"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are neither."))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which in this case is"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[91]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "all the argument types of the superclass,"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[92])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: in a superclass constraint,"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[94])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[97]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must be either type variables or ground types."))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[99]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In typeclass declaration:"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: typeclass declarations"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[102]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "class parameter."))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[104]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "require at least one"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected a"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[108]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "list of class methods,"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[110]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[112]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: constraints on instance declarations"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[114]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In instance declaration:"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "unbound type variable"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[117]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "unbound type variables"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[119]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in constraints on instance declaration."))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[33])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "list of instance methods."))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[123]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[22])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<Name> / <Arity>) is <InstanceMethod>"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[127]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[98])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[22])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[129])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<Name> / <Arity>) is <InstanceMethod>"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[98])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<Name> / <Arity>) is <InstanceName>"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[133]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[22])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<Name> / <Arity>) is <InstanceName>"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[98])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected clause or"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[22])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type variables and ground types."))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[142]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may only constrain"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[143])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a non-variable inst such as"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[146]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of an inst constraint."))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[148]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not be the subject"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[149])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of an inst constraint:"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[152]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the constraining inst"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[153])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In class constraint:"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "typeclass or inst constraint,"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[157]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&parse_tree__parse_class_scalar_common_1[6]))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__parse_class_scalar_common_1[6]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__parse_class_scalar_common_1[3])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_class__tvars_in_fundeps_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_5[1])),
    ((MR_Box) (parse_tree__parse_class__parse_unconstrained_class_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_5[1])),
    ((MR_Box) (parse_tree__parse_class__parse_class_head_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_5[3])),
    ((MR_Box) (parse_tree__parse_class__parse_derived_instance_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_5[3])),
    ((MR_Box) (parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_3)),
    ((MR_Box) (&parse_tree__parse_class_scalar_common_1[7])),
    ((MR_Box) (&parse_tree__parse_class_scalar_common_2[2])),
    ((MR_Box) (&parse_tree__parse_class_scalar_common_1[6]))
  },
};

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_4[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 8U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_5[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)),
    ((MR_Box) (&parse_tree__parse_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_class__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_6[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_class__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item__type_ctor_info_class_decl_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_class__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data__type_ctor_info_instance_method_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_7[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item__type_ctor_info_class_decl_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_class__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data__type_ctor_info_instance_method_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_class__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__list__ti_list_1parse_tree__prog_item__type_ctor_info_var_or_ground_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_class__list__ti_list_1parse_tree__prog_item__type_ctor_info_var_or_ground_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_0 = {
  (MR_String) "ac_type_constraint",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_1[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_1 = {
  (MR_String) "ac_inst_constraint",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_2[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_2 = {
  (MR_String) "ac_fundep",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_0[1] = { &parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_1[1] = { &parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_1 };

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_2[1] = { &parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_2 };

static const MR_DuPtagLayout parse_tree__parse_class__parse_tree__parse_class__du_ptag_ordered_arbitrary_constraint_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_name_ordered_arbitrary_constraint_0[3] = {
  &parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_2,
  &parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_1,
  &parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_0
};

static const MR_Integer parse_tree__parse_class__parse_tree__parse_class__functor_number_map_arbitrary_constraint_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_class____Unify____arbitrary_constraint_0_0_10001)),
  ((MR_Box) (parse_tree__parse_class____Compare____arbitrary_constraint_0_0_10001)),
  (MR_String) "parse_tree.parse_class",
  (MR_String) "arbitrary_constraint",
  { parse_tree__parse_class__parse_tree__parse_class__du_name_ordered_arbitrary_constraint_0 },
  { parse_tree__parse_class__parse_tree__parse_class__du_ptag_ordered_arbitrary_constraint_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__parse_class__parse_tree__parse_class__functor_number_map_arbitrary_constraint_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__one_or_more__ti_one_or_more_1parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0) }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraints_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_class____Unify____arbitrary_constraints_0_0_10001)),
  ((MR_Box) (parse_tree__parse_class____Compare____arbitrary_constraints_0_0_10001)),
  (MR_String) "parse_tree.parse_class",
  (MR_String) "arbitrary_constraints",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__parse_class__one_or_more__ti_one_or_more_1parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_class__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_TypeInfo_Struct3 parse_tree__parse_class__parse_tree__maybe_error__ti_maybe2_3list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_3,
  {
    (MR_TypeInfo) (&parse_tree__parse_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_TypeInfo) (&parse_tree__parse_class__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0),
    (MR_TypeInfo) (&parse_tree__parse_class__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_maybe_class_and_inst_constraints_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_class____Unify____maybe_class_and_inst_constraints_0_0_10001)),
  ((MR_Box) (parse_tree__parse_class____Compare____maybe_class_and_inst_constraints_0_0_10001)),
  (MR_String) "parse_tree.parse_class",
  (MR_String) "maybe_class_and_inst_constraints",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__parse_class__parse_tree__maybe_error__ti_maybe2_3list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Word MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__check_tvars_in_instance_constraint__655__1_2_f_0(
  MR_Word TVarSet_12,
  MR_Word HeadVar__2_61)
{
  MR_Word HeadVar__3_62;

  HeadVar__3_62 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_12, HeadVar__2_61);
  return HeadVar__3_62;
}

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__check_tvars_in_instance_constraint__651__1_2_p_0(
  MR_Word TypesVars_17,
  MR_Word HeadVar__2_56)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), TypesVars_17, ((MR_Box) (HeadVar__2_56)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_unconstrained_class__399__1_2_p_0(
  MR_Word HeadVar__1_67,
  MR_Word * HeadVar__2_68)
{
  mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_67, HeadVar__2_68);
}

static MR_Word MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__240__1_2_f_0(
  MR_Word ClassTVarSet_44,
  MR_Word HeadVar__2_196)
{
  MR_Word HeadVar__3_197;

  HeadVar__3_197 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), ClassTVarSet_44, HeadVar__2_196);
  return HeadVar__3_197;
}

static MR_Word MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__237__1_2_f_0(
  MR_Word ClassTVarSet_44,
  MR_Word HeadVar__2_193)
{
  MR_Word HeadVar__3_194;

  HeadVar__3_194 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), ClassTVarSet_44, HeadVar__2_193);
  return HeadVar__3_194;
}

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__195__1_2_p_0(
  MR_Word Params_26,
  MR_Word HeadVar__2_188)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Params_26, ((MR_Box) (HeadVar__2_188)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__193__1_2_p_0(
  MR_Word Params_26,
  MR_Word HeadVar__2_186)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Params_26, ((MR_Box) (HeadVar__2_186)));
  return succeeded;
}

void MR_CALL 
parse_tree__parse_class____Compare____maybe_class_and_inst_constraints_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__parse_class____Unify____maybe_class_and_inst_constraints_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_3[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraints_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraints_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[10]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_28 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_29 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_28 == CastY_29);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
              MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
              MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
              MR_Word SubResult1_6;

              parse_tree__prog_data____Compare____prog_constraint_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                MR_Word SubResult2_9;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[11]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
                succeeded = (SubResult2_9 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_9;
                else
                {
                  MR_Word SubResult3_12;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[12]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
                  succeeded = (SubResult3_12 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_12;
                  else
                    mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
                }
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
              MR_Word SubResult1_17;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[3]), &SubResult1_17, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
              succeeded = (SubResult1_17 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_17;
              else
              {
                MR_Word SubResult2_20;

                parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult2_20, ArgX2_18, ArgY2_19);
                succeeded = (SubResult2_20 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_20;
                else
                  mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX3_21, ArgY3_22);
              }
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_26 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_25;

              parse_tree__prog_data____Compare____prog_fundep_0_0(&SubResult1_25, ArgX1_23, ArgY1_24);
              succeeded = (SubResult1_25 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_25;
              else
                mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_26, ArgY2_27);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraint_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_29_29;
          MR_Word TypeInfo_30_30;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_8;
          MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
            succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              TypeInfo_29_29 = (MR_Word) (&parse_tree__parse_class_scalar_common_1[11]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
              if (succeeded)
              {
                TypeInfo_30_30 = (MR_Word) (&parse_tree__parse_class_scalar_common_1[12]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
                if (succeeded)
                  succeeded = mercury__term_context____Unify____term_context_0_0(ArgX4_9, ArgY4_10);
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_25_25;
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_14;
          MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            TypeInfo_25_25 = (MR_Word) (&parse_tree__parse_class_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_13, ArgY2_14);
              if (succeeded)
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_15, ArgY3_16);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_18;
          MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = parse_tree__prog_data____Unify____prog_fundep_0_0(ArgX1_17, ArgY1_18);
            if (succeeded)
              succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_19, ArgY2_20);
          }
        }
        break;
    }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_class__get_simple_constraint_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Constraint_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);
  MR_Word Var_6;

  if (succeeded)
  {
    *Constraint_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    Var_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_class__term_to_instance_method_4_p_0(
  MR_Word _ModuleName_5,
  MR_Word VarSet_6,
  MR_Word MethodTerm_7,
  MR_Word * MaybeInstanceMethod_8)
{
  parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(VarSet_6, MethodTerm_7, MaybeInstanceMethod_8);
}

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(
  MR_Word VarSet_6,
  MR_Word MethodTerm_7,
  MR_Word * MaybeInstanceMethod_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) MethodTerm_7)) == (MR_Integer) 0);
  MR_Word ClassMethodTerm_9;
  MR_Word InstanceMethodTerm_10;
  MR_Word TermContext_11;
  MR_Word Var_45;
  MR_String Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;

  if (succeeded)
  {
    Var_45 = ((MR_Word) ((MR_hl_field(0, MethodTerm_7, (MR_Integer) 0))));
    Var_47 = ((MR_Word) ((MR_hl_field(0, MethodTerm_7, (MR_Integer) 1))));
    TermContext_11 = ((MR_Word) ((MR_hl_field(0, MethodTerm_7, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_46 = ((MR_String) ((MR_hl_field(0, Var_45, (MR_Integer) 0))));
      succeeded = (strcmp(Var_46, (MR_String) "is") == 0);
      if (succeeded)
      {
        succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ClassMethodTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 0))));
          Var_48 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 1))));
          succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            InstanceMethodTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 0))));
            Var_49 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 1))));
            succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word PredNameTerm_14;
    MR_Word ArityTerm_15;
    MR_Word SlashTerm_12;
    MR_Word Var_50;
    MR_String Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_String Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;

    succeeded = ((MR_tag((MR_Word) ClassMethodTerm_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_50 = ((MR_Word) ((MR_hl_field(0, ClassMethodTerm_9, (MR_Integer) 0))));
      Var_52 = ((MR_Word) ((MR_hl_field(0, ClassMethodTerm_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_51 = ((MR_String) ((MR_hl_field(0, Var_50, (MR_Integer) 0))));
        succeeded = (strcmp(Var_51, (MR_String) "pred") == 0);
        if (succeeded)
        {
          succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SlashTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 0))));
            Var_53 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 1))));
            succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) SlashTerm_12)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_54 = ((MR_Word) ((MR_hl_field(0, SlashTerm_12, (MR_Integer) 0))));
                Var_56 = ((MR_Word) ((MR_hl_field(0, SlashTerm_12, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_55 = ((MR_String) ((MR_hl_field(0, Var_54, (MR_Integer) 0))));
                  succeeded = (strcmp(Var_55, (MR_String) "/") == 0);
                  if (succeeded)
                  {
                    succeeded = (Var_56 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      PredNameTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_56, (MR_Integer) 0))));
                      Var_57 = ((MR_Word) ((MR_hl_field(1, Var_56, (MR_Integer) 1))));
                      succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ArityTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_57, (MR_Integer) 0))));
                        Var_58 = ((MR_Word) ((MR_hl_field(1, Var_57, (MR_Integer) 1))));
                        succeeded = (Var_58 == (MR_Word) ((MR_Unsigned) 0U));
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word PredSymName_17;
      MR_Integer ArityInt_18;
      MR_Word InstanceMethodName_19;

      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PredNameTerm_14, &PredSymName_17);
      if (succeeded)
      {
        succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArityTerm_15, &ArityInt_18);
        if (succeeded)
          succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), InstanceMethodTerm_10, &InstanceMethodName_19);
      }
      if (succeeded)
      {
        MR_Word ProcDef_20;
        MR_Word MethodName_21;
        MR_Word InstanceMethod_22;
        MR_Word Var_60;

        {
          ProcDef_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProcDef_20, 0) = ((MR_Box) (InstanceMethodName_19));
        }
        Var_60 = (MR_Word) (ArityInt_18);
        {
          MethodName_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MethodName_21, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, MethodName_21, 1) = ((MR_Box) (PredSymName_17));
          MR_hl_field(0, MethodName_21, 2) = ((MR_Box) (Var_60));
        }
        {
          InstanceMethod_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InstanceMethod_22, 0) = ((MR_Box) (MethodName_21));
          MR_hl_field(0, InstanceMethod_22, 1) = ((MR_Box) (ProcDef_20));
          MR_hl_field(0, InstanceMethod_22, 2) = ((MR_Box) (TermContext_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeInstanceMethod_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (InstanceMethod_22));
        }
      }
      else
      {
        MR_String MethodTermStr_23;
        MR_Word Pieces_24;
        MR_Word Spec_25;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_77;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_103;
        MR_Word Var_104;

        MethodTermStr_23 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, MethodTerm_7);
        Var_69 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[128])));
        {
          Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_91, 1) = ((MR_Box) (MethodTermStr_23));
        }
        {
          Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
          MR_hl_field(1, Var_90, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[30])));
        }
        Var_89 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_90);
        Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[42])));
        Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[130])), Var_88);
        Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_77);
        Pieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[126])), Var_68);
        Var_103 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodTerm_7);
        {
          Spec_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.term_to_instance_method\'/4"));
          MR_hl_field(0, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_25, 3) = ((MR_Box) (Var_103));
          MR_hl_field(0, Spec_25, 4) = ((MR_Box) (Pieces_24));
        }
        {
          Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_104, 0) = ((MR_Box) (Spec_25));
          MR_hl_field(1, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeInstanceMethod_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_104));
        }
      }
    }
    else
    {
      MR_Word FuncNameTerm_27;
      MR_Word ArityTerm_251;
      MR_Word Var_106;
      MR_String Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_String Var_111;
      MR_Word Var_112;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word SlashTerm_232;

      succeeded = ((MR_tag((MR_Word) ClassMethodTerm_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_106 = ((MR_Word) ((MR_hl_field(0, ClassMethodTerm_9, (MR_Integer) 0))));
        Var_108 = ((MR_Word) ((MR_hl_field(0, ClassMethodTerm_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_106)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_107 = ((MR_String) ((MR_hl_field(0, Var_106, (MR_Integer) 0))));
          succeeded = (strcmp(Var_107, (MR_String) "func") == 0);
          if (succeeded)
          {
            succeeded = (Var_108 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SlashTerm_232 = ((MR_Word) ((MR_hl_field(1, Var_108, (MR_Integer) 0))));
              Var_109 = ((MR_Word) ((MR_hl_field(1, Var_108, (MR_Integer) 1))));
              succeeded = (Var_109 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) SlashTerm_232)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_110 = ((MR_Word) ((MR_hl_field(0, SlashTerm_232, (MR_Integer) 0))));
                  Var_112 = ((MR_Word) ((MR_hl_field(0, SlashTerm_232, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_110)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_111 = ((MR_String) ((MR_hl_field(0, Var_110, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_111, (MR_String) "/") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_112 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        FuncNameTerm_27 = ((MR_Word) ((MR_hl_field(1, Var_112, (MR_Integer) 0))));
                        Var_113 = ((MR_Word) ((MR_hl_field(1, Var_112, (MR_Integer) 1))));
                        succeeded = (Var_113 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ArityTerm_251 = ((MR_Word) ((MR_hl_field(1, Var_113, (MR_Integer) 0))));
                          Var_114 = ((MR_Word) ((MR_hl_field(1, Var_113, (MR_Integer) 1))));
                          succeeded = (Var_114 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word FuncSymName_29;
        MR_Integer ArityInt_239;
        MR_Word InstanceMethodName_240;

        succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FuncNameTerm_27, &FuncSymName_29);
        if (succeeded)
        {
          succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArityTerm_251, &ArityInt_239);
          if (succeeded)
            succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), InstanceMethodTerm_10, &InstanceMethodName_240);
        }
        if (succeeded)
        {
          MR_Word Var_116;
          MR_Word ProcDef_233;
          MR_Word MethodName_234;
          MR_Word InstanceMethod_235;

          {
            ProcDef_233 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ProcDef_233, 0) = ((MR_Box) (InstanceMethodName_240));
          }
          Var_116 = (MR_Word) (ArityInt_239);
          {
            MethodName_234 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MethodName_234, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(0, MethodName_234, 1) = ((MR_Box) (FuncSymName_29));
            MR_hl_field(0, MethodName_234, 2) = ((MR_Box) (Var_116));
          }
          {
            InstanceMethod_235 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, InstanceMethod_235, 0) = ((MR_Box) (MethodName_234));
            MR_hl_field(0, InstanceMethod_235, 1) = ((MR_Box) (ProcDef_233));
            MR_hl_field(0, InstanceMethod_235, 2) = ((MR_Box) (TermContext_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeInstanceMethod_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (InstanceMethod_235));
          }
        }
        else
        {
          MR_Word Var_124;
          MR_Word Var_125;
          MR_Word Var_133;
          MR_Word Var_144;
          MR_Word Var_145;
          MR_Word Var_146;
          MR_Word Var_147;
          MR_Word Var_159;
          MR_Word Var_160;
          MR_String MethodTermStr_236;
          MR_Word Pieces_237;
          MR_Word Spec_238;

          MethodTermStr_236 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, MethodTerm_7);
          Var_125 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[132])));
          {
            Var_147 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_147, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_147, 1) = ((MR_Box) (MethodTermStr_236));
          }
          {
            Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_146, 0) = ((MR_Box) (Var_147));
            MR_hl_field(1, Var_146, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[30])));
          }
          Var_145 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_146);
          Var_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_145, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[42])));
          Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[130])), Var_144);
          Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_125, Var_133);
          Pieces_237 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[126])), Var_124);
          Var_159 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodTerm_7);
          {
            Spec_238 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_238, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.term_to_instance_method\'/4"));
            MR_hl_field(0, Spec_238, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_238, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_238, 3) = ((MR_Box) (Var_159));
            MR_hl_field(0, Spec_238, 4) = ((MR_Box) (Pieces_237));
          }
          {
            Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_160, 0) = ((MR_Box) (Spec_238));
            MR_hl_field(1, Var_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeInstanceMethod_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_160));
          }
        }
      }
      else
      {
        MR_Word Var_169;
        MR_Word Var_170;
        MR_Word Var_175;
        MR_Word Var_186;
        MR_Word Var_187;
        MR_Word Var_195;
        MR_Word Var_206;
        MR_Word Var_207;
        MR_Word Var_208;
        MR_Word Var_209;
        MR_Word Var_221;
        MR_Word Var_222;
        MR_String MethodTermStr_247;
        MR_Word Pieces_248;
        MR_Word Spec_249;

        MethodTermStr_247 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, MethodTerm_7);
        Var_170 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[134])));
        Var_187 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[139])));
        {
          Var_209 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_209, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_209, 1) = ((MR_Box) (MethodTermStr_247));
        }
        {
          Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_208, 0) = ((MR_Box) (Var_209));
          MR_hl_field(1, Var_208, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[30])));
        }
        Var_207 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_208);
        Var_206 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_207, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[42])));
        Var_195 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[130])), Var_206);
        Var_186 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_187, Var_195);
        Var_175 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[137])), Var_186);
        Var_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_170, Var_175);
        Pieces_248 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[126])), Var_169);
        Var_221 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodTerm_7);
        {
          Spec_249 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_249, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.term_to_instance_method\'/4"));
          MR_hl_field(0, Spec_249, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_249, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_249, 3) = ((MR_Box) (Var_221));
          MR_hl_field(0, Spec_249, 4) = ((MR_Box) (Pieces_248));
        }
        {
          Var_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_222, 0) = ((MR_Box) (Spec_249));
          MR_hl_field(1, Var_222, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeInstanceMethod_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_222));
        }
      }
    }
  }
  else
  {
    MR_Word Var_224;
    MR_String Var_225;
    MR_Word Var_226;
    MR_Word Var_227;

    succeeded = ((MR_tag((MR_Word) MethodTerm_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_224 = ((MR_Word) ((MR_hl_field(0, MethodTerm_7, (MR_Integer) 0))));
      Var_226 = ((MR_Word) ((MR_hl_field(0, MethodTerm_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_224)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_225 = ((MR_String) ((MR_hl_field(0, Var_224, (MR_Integer) 0))));
        succeeded = (strcmp(Var_225, (MR_String) ":-") == 0);
        if (succeeded)
        {
          succeeded = (Var_226 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_227 = ((MR_Word) ((MR_hl_field(1, Var_226, (MR_Integer) 1))));
            succeeded = (Var_227 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_228;
      MR_Word Spec_260;

      Spec_260 = parse_tree__parse_class__report_unexpected_method_term_2_f_0(VarSet_6, MethodTerm_7);
      {
        Var_228 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_228, 0) = ((MR_Box) (Spec_260));
        MR_hl_field(1, Var_228, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeInstanceMethod_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_228));
      }
    }
    else
    {
      MR_Word MaybeClause_32;

      parse_tree__parse_item__parse_clause_term_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_6, MethodTerm_7, (MR_Word) ((MR_Unsigned) 0U), &MaybeClause_32);
      if (((MR_tag((MR_Word) MaybeClause_32)) == (MR_Integer) 0))
        *MaybeInstanceMethod_8 = (MR_Word) (MaybeClause_32);
      else
      {
        MR_Word ItemClause_33 = ((MR_Word) ((MR_hl_field(1, MaybeClause_32, (MR_Integer) 0))));
        MR_Word PredOrFunc_34 = ((MR_Unsigned) ((MR_hl_field(0, ItemClause_33, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word MethodSymName_35 = ((MR_Word) ((MR_hl_field(0, ItemClause_33, (MR_Integer) 1))));
        MR_Word ArgTerms_36 = ((MR_Word) ((MR_hl_field(0, ItemClause_33, (MR_Integer) 2))));
        MR_Word Context_39 = ((MR_Word) ((MR_hl_field(0, ItemClause_33, (MR_Integer) 5))));
        MR_Word PredFormArity_41;
        MR_Word UserArity_42;
        MR_Word ClauseCord_43;
        MR_Word ProcDef_261;
        MR_Word MethodName_262;
        MR_Word InstanceMethod_263;

        PredFormArity_41 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[9]), ArgTerms_36);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_34, &UserArity_42, PredFormArity_41);
        ClauseCord_43 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ((MR_Box) (ItemClause_33)));
        {
          ProcDef_261 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ProcDef_261, 0) = ((MR_Box) (ClauseCord_43));
        }
        {
          MethodName_262 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MethodName_262, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_34));
          MR_hl_field(0, MethodName_262, 1) = ((MR_Box) (MethodSymName_35));
          MR_hl_field(0, MethodName_262, 2) = ((MR_Box) (UserArity_42));
        }
        {
          InstanceMethod_263 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InstanceMethod_263, 0) = ((MR_Box) (MethodName_262));
          MR_hl_field(0, InstanceMethod_263, 1) = ((MR_Box) (ProcDef_261));
          MR_hl_field(0, InstanceMethod_263, 2) = ((MR_Box) (Context_39));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeInstanceMethod_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (InstanceMethod_263));
        }
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_class__report_unexpected_method_term_2_f_0(
  MR_Word VarSet_4,
  MR_Word MethodTerm_5)
{
  MR_Word Spec_6;
  MR_String MethodTermStr_7;
  MR_Word Pieces_8;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_22;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_42;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_61;

  MethodTermStr_7 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, MethodTerm_5);
  Var_17 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[134])));
  Var_34 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[139])));
  {
    Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_50, 1) = ((MR_Box) (MethodTermStr_7));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[30])));
  }
  Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_49);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[33])));
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[113])), Var_47);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, Var_42);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[137])), Var_33);
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_22);
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[141])), Var_16);
  Var_61 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodTerm_5);
  {
    Spec_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_class.report_unexpected_method_term\'/2"));
    MR_hl_field(0, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_6, 3) = ((MR_Box) (Var_61));
    MR_hl_field(0, Spec_6, 4) = ((MR_Box) (Pieces_8));
  }
  return Spec_6;
}

static MR_Word MR_CALL 
parse_tree__parse_class__tvars_in_fundep_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word Domain_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Range_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Domain_3, Range_4);
  return HeadVar__2_2;
}

void MR_CALL 
parse_tree__parse_class__parse_class_and_inst_constraints_4_p_0(
  MR_Word _ModuleName_5,
  MR_Word VarSet_6,
  MR_Word ConstraintsTerm_7,
  MR_Word * Result_8)
{
  parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_97_110_100_95_105_110_115_116_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(VarSet_6, ConstraintsTerm_7, Result_8);
}

void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_97_110_100_95_105_110_115_116_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word VarSet_6,
  MR_Word ConstraintsTerm_7,
  MR_Word * Result_8)
{
  MR_Word Result0_9;
  MR_Word HeadConstraintTerm_54;
  MR_Word TailConstraintTerms_55;
  MR_Word Var_56;

  parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7, &Var_56);
  HeadConstraintTerm_54 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 0))));
  TailConstraintTerms_55 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 1))));
  parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(VarSet_6, HeadConstraintTerm_54, TailConstraintTerms_55, &Result0_9);
  if (((MR_tag((MR_Word) Result0_9)) == (MR_Integer) 0))
  {
    MR_Word Specs_20 = ((MR_Word) ((MR_hl_field(0, Result0_9, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_20));
    }
  }
  else
  {
    MR_Word HeadArbConstraint_10;
    MR_Word TailArbConstraints_11;
    MR_Word ArbitraryConstraints_12;
    MR_Word ProgConstraints_13;
    MR_Word FunDeps_14;
    MR_Word InstVarSub_15;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, Result0_9, (MR_Integer) 0))));

    HeadArbConstraint_10 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
    TailArbConstraints_11 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 1))));
    {
      ArbitraryConstraints_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArbitraryConstraints_12, 0) = ((MR_Box) (HeadArbConstraint_10));
      MR_hl_field(1, ArbitraryConstraints_12, 1) = ((MR_Box) (TailArbConstraints_11));
    }
    parse_tree__parse_class__collect_class_and_inst_constraints_4_p_0(ArbitraryConstraints_12, &ProgConstraints_13, &FunDeps_14, &InstVarSub_15);
    if ((FunDeps_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ProgConstraints_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (InstVarSub_15));
      }
    else
    {
      MR_Word Pieces_18;
      MR_Word Spec_19;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_32;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_49;
      MR_Word Var_50;

      Var_27 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[48])));
      Var_38 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[52])));
      Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[33])));
      Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[50])), Var_37);
      Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_32);
      Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[46])), Var_26);
      Var_49 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7);
      {
        Spec_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_class_and_inst_constraints\'/4"));
        MR_hl_field(0, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_19, 3) = ((MR_Box) (Var_49));
        MR_hl_field(0, Spec_19, 4) = ((MR_Box) (Pieces_18));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (Spec_19));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_50));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__collect_class_and_inst_constraints_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  }
  else
  {
    MR_Word Constraint_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Constraints_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_ProgConstraints_22_22;
    MR_Word STATE_VARIABLE_FunDeps_23_23;
    MR_Word STATE_VARIABLE_InstVarSub_24_24;

    parse_tree__parse_class__collect_class_and_inst_constraints_4_p_0(Constraints_6, &STATE_VARIABLE_ProgConstraints_22_22, &STATE_VARIABLE_FunDeps_23_23, &STATE_VARIABLE_InstVarSub_24_24);
    switch (MR_tag((MR_Word) Constraint_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ProgConstraint_10 = ((MR_Word) ((MR_hl_field(0, Constraint_5, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ProgConstraint_10));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ProgConstraints_22_22));
          }
          *HeadVar__3_3 = STATE_VARIABLE_FunDeps_23_23;
          *HeadVar__4_4 = STATE_VARIABLE_InstVarSub_24_24;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstVar_14 = ((MR_Word) ((MR_hl_field(1, Constraint_5, (MR_Integer) 0))));
          MR_Word Inst_15 = ((MR_Word) ((MR_hl_field(1, Constraint_5, (MR_Integer) 1))));

          mercury__map__set_4_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (InstVar_14)), ((MR_Box) (Inst_15)), STATE_VARIABLE_InstVarSub_24_24, HeadVar__4_4);
          *HeadVar__2_2 = STATE_VARIABLE_ProgConstraints_22_22;
          *HeadVar__3_3 = STATE_VARIABLE_FunDeps_23_23;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FunDep_17 = ((MR_Word) ((MR_hl_field(2, Constraint_5, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (FunDep_17));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_FunDeps_23_23));
          }
          *HeadVar__2_2 = STATE_VARIABLE_ProgConstraints_22_22;
          *HeadVar__4_4 = STATE_VARIABLE_InstVarSub_24_24;
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_class__parse_class_constraints_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word ConstraintsTerm_7,
  MR_Word * Result_8)
{
  parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(VarSet_6, ConstraintsTerm_7, Result_8);
}

static MR_bool MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Constraint_3;

  succeeded = parse_tree__parse_class__get_simple_constraint_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Constraint_3);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_Constraint_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word VarSet_6,
  MR_Word ConstraintsTerm_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_Word Result0_13;
  MR_Word HeadConstraintTerm_37;
  MR_Word TailConstraintTerms_38;
  MR_Word Var_39;

  parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7, &Var_39);
  HeadConstraintTerm_37 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 0))));
  TailConstraintTerms_38 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 1))));
  parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(VarSet_6, HeadConstraintTerm_37, TailConstraintTerms_38, &Result0_13);
  if (((MR_tag((MR_Word) Result0_13)) == (MR_Integer) 0))
    *Result_8 = (MR_Word) (Result0_13);
  else
  {
    MR_Word HeadArbConstraint_14;
    MR_Word TailArbConstraints_15;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, Result0_13, (MR_Integer) 0))));
    MR_Word HeadConstraint_16;
    MR_Word TailConstraints_17;
    MR_Word TypeCtorInfo_42_33;
    MR_Word TypeCtorInfo_43_34;
    MR_Word Var_22;
    MR_Word Var_43;

    HeadArbConstraint_14 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
    TailArbConstraints_15 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) HeadArbConstraint_14)) == (MR_Integer) 0);
    if (succeeded)
    {
      HeadConstraint_16 = ((MR_Word) ((MR_hl_field(0, HeadArbConstraint_14, (MR_Integer) 0))));
      Var_43 = ((MR_Word) ((MR_hl_field(0, HeadArbConstraint_14, (MR_Integer) 2))));
      succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_22 = (MR_Word) (&parse_tree__parse_class_scalar_common_2[7]);
        TypeCtorInfo_42_33 = (MR_Word) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0);
        TypeCtorInfo_43_34 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0);
        succeeded = mercury__list__map_3_p_2(TypeCtorInfo_42_33, TypeCtorInfo_43_34, Var_22, TailArbConstraints_15, &TailConstraints_17);
      }
    }
    if (succeeded)
    {
      MR_Word Var_23;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ((MR_Box) (HeadConstraint_16));
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (TailConstraints_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
      }
    }
    else
    {
      MR_Word Context_18;
      MR_Word Pieces_19;
      MR_Word Spec_20;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_31;

      Context_18 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7);
      Var_25 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[145])));
      Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[33])));
      Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[44])), Var_24);
      {
        Spec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_simple_class_constraints\'/5"));
        MR_hl_field(0, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_20, 3) = ((MR_Box) (Context_18));
        MR_hl_field(0, Spec_20, 4) = ((MR_Box) (Pieces_19));
      }
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (Spec_20));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_class__parse_instance_item_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word ArgTerm_13;
  MR_Word Var_23;

  if (succeeded)
  {
    ArgTerm_13 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word TVarSet_14;
    MR_Word MaybeItemInstanceInfo_18;
    MR_Word NameTerm_15;
    MR_Word MethodsTerm_16;
    MR_Word Var_24;
    MR_String Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;

    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_8, &TVarSet_14);
    succeeded = ((MR_tag((MR_Word) ArgTerm_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(0, ArgTerm_13, (MR_Integer) 0))));
      Var_26 = ((MR_Word) ((MR_hl_field(0, ArgTerm_13, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_25 = ((MR_String) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
        succeeded = (strcmp(Var_25, (MR_String) "where") == 0);
        if (succeeded)
        {
          succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 0))));
            Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MethodsTerm_16 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 0))));
              Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 1))));
              succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
      parse_tree__parse_class__parse_non_empty_instance_8_p_0(ModuleName_7, VarSet_8, TVarSet_14, NameTerm_15, MethodsTerm_16, Context_10, SeqNum_11, &MaybeItemInstanceInfo_18);
    else
    {
      MR_Word NameTerm_90;
      MR_Word ConstraintsTerm_91;
      MR_Word Var_93;
      MR_String Var_94;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_97;

      succeeded = ((MR_tag((MR_Word) ArgTerm_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_93 = ((MR_Word) ((MR_hl_field(0, ArgTerm_13, (MR_Integer) 0))));
        Var_95 = ((MR_Word) ((MR_hl_field(0, ArgTerm_13, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_93)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_94 = ((MR_String) ((MR_hl_field(0, Var_93, (MR_Integer) 0))));
          succeeded = (strcmp(Var_94, (MR_String) "<=") == 0);
          if (succeeded)
          {
            succeeded = (Var_95 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NameTerm_90 = ((MR_Word) ((MR_hl_field(1, Var_95, (MR_Integer) 0))));
              Var_96 = ((MR_Word) ((MR_hl_field(1, Var_95, (MR_Integer) 1))));
              succeeded = (Var_96 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ConstraintsTerm_91 = ((MR_Word) ((MR_hl_field(1, Var_96, (MR_Integer) 0))));
                Var_97 = ((MR_Word) ((MR_hl_field(1, Var_96, (MR_Integer) 1))));
                succeeded = (Var_97 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
        parse_tree__parse_class__parse_derived_instance_7_p_0(ModuleName_7, TVarSet_14, NameTerm_90, ConstraintsTerm_91, Context_10, SeqNum_11, &MaybeItemInstanceInfo_18);
      else
      {
        MR_Word NameContextPieces_98;
        MR_Word VarSet_99;
        MR_Word Spec_100;

        NameContextPieces_98 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[116]))));
        mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_14, &VarSet_99);
        succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_99, (MR_Word) ((MR_Unsigned) 4U), ArgTerm_13, &Spec_100);
        if (succeeded)
        {
          MR_Word Var_112;

          {
            Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_112, 0) = ((MR_Box) (Spec_100));
            MR_hl_field(1, Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeItemInstanceInfo_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MaybeItemInstanceInfo_18, 0) = ((MR_Box) (Var_112));
          }
        }
        else
        {
          MR_Word MaybeClassName_101;

          parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_99, NameContextPieces_98, ArgTerm_13, &MaybeClassName_101);
          if (((MR_tag((MR_Word) MaybeClassName_101)) == (MR_Integer) 0))
          {
            MR_Word Specs_119 = ((MR_Word) ((MR_hl_field(0, MaybeClassName_101, (MR_Integer) 0))));

            {
              MaybeItemInstanceInfo_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeItemInstanceInfo_18, 0) = ((MR_Box) (Specs_119));
            }
          }
          else
          {
            MR_Word ClassName_102 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_101, (MR_Integer) 0))));
            MR_Word TypeTerms_103 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_101, (MR_Integer) 1))));
            MR_Word MaybeTypes_105;

            parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_4[0])), VarSet_99, NameContextPieces_98, TypeTerms_103, &MaybeTypes_105);
            if (((MR_tag((MR_Word) MaybeTypes_105)) == (MR_Integer) 0))
              MaybeItemInstanceInfo_18 = (MR_Word) (MaybeTypes_105);
            else
            {
              MR_Word Types_106 = ((MR_Word) ((MR_hl_field(1, MaybeTypes_105, (MR_Integer) 0))));
              MR_Word ItemInstanceInfo_107;

              {
                ItemInstanceInfo_107 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ItemInstanceInfo_107, 0) = ((MR_Box) (ClassName_102));
                MR_hl_field(0, ItemInstanceInfo_107, 1) = ((MR_Box) (Types_106));
                MR_hl_field(0, ItemInstanceInfo_107, 2) = ((MR_Box) (Types_106));
                MR_hl_field(0, ItemInstanceInfo_107, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, ItemInstanceInfo_107, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, ItemInstanceInfo_107, 5) = ((MR_Box) (TVarSet_14));
                MR_hl_field(0, ItemInstanceInfo_107, 6) = ((MR_Box) (ModuleName_7));
                MR_hl_field(0, ItemInstanceInfo_107, 7) = ((MR_Box) (Context_10));
                MR_hl_field(0, ItemInstanceInfo_107, 8) = ((MR_Box) (SeqNum_11));
              }
              {
                MaybeItemInstanceInfo_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeItemInstanceInfo_18, 0) = ((MR_Box) (ItemInstanceInfo_107));
              }
            }
          }
        }
      }
    }
    if (((MR_tag((MR_Word) MaybeItemInstanceInfo_18)) == (MR_Integer) 0))
      *MaybeIOM_12 = (MR_Word) (MaybeItemInstanceInfo_18);
    else
    {
      MR_Word ItemInstanceInfo_19 = ((MR_Word) ((MR_hl_field(1, MaybeItemInstanceInfo_18, (MR_Integer) 0))));
      MR_Word Var_29;
      MR_Word Var_30;

      {
        Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(3, Var_30, 1) = ((MR_Box) (ItemInstanceInfo_19));
      }
      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_29));
      }
    }
  }
  else
  {
    MR_Word Pieces_21;
    MR_Word Spec_22;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_47;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_58;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_85;

    Var_42 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[20])));
    Var_53 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[39])));
    Var_70 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[41])));
    Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[42])));
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[28])), Var_69);
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_58);
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[22])), Var_52);
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_47);
    Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[37])), Var_41);
    {
      Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_instance_item\'/6"));
      MR_hl_field(0, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_22, 4) = ((MR_Box) (Pieces_21));
    }
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_85));
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_non_empty_instance_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word TVarSet_11,
  MR_Word NameTerm_12,
  MR_Word MethodsTerm_13,
  MR_Word Context_14,
  MR_Word SeqNum_15,
  MR_Word * MaybeItemInstanceInfo_16)
{
  MR_bool succeeded = ((MR_tag((MR_Word) NameTerm_12)) == (MR_Integer) 0);
  MR_Word MaybeItemInstanceInfo0_17;
  MR_Word MaybeInstanceMethods_18;
  MR_Word NameTerm_52;
  MR_Word ConstraintsTerm_53;
  MR_Word Var_55;
  MR_String Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word ItemInstanceInfo0_19;
  MR_Word InstanceMethods_20;

  if (succeeded)
  {
    Var_55 = ((MR_Word) ((MR_hl_field(0, NameTerm_12, (MR_Integer) 0))));
    Var_57 = ((MR_Word) ((MR_hl_field(0, NameTerm_12, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_56 = ((MR_String) ((MR_hl_field(0, Var_55, (MR_Integer) 0))));
      succeeded = (strcmp(Var_56, (MR_String) "<=") == 0);
      if (succeeded)
      {
        succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NameTerm_52 = ((MR_Word) ((MR_hl_field(1, Var_57, (MR_Integer) 0))));
          Var_58 = ((MR_Word) ((MR_hl_field(1, Var_57, (MR_Integer) 1))));
          succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ConstraintsTerm_53 = ((MR_Word) ((MR_hl_field(1, Var_58, (MR_Integer) 0))));
            Var_59 = ((MR_Word) ((MR_hl_field(1, Var_58, (MR_Integer) 1))));
            succeeded = (Var_59 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
    parse_tree__parse_class__parse_derived_instance_7_p_0(ModuleName_9, TVarSet_11, NameTerm_52, ConstraintsTerm_53, Context_14, SeqNum_15, &MaybeItemInstanceInfo0_17);
  else
  {
    MR_Word NameContextPieces_60;
    MR_Word VarSet_61;
    MR_Word Spec_62;

    NameContextPieces_60 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[116]))));
    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_11, &VarSet_61);
    succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_61, (MR_Word) ((MR_Unsigned) 4U), NameTerm_12, &Spec_62);
    if (succeeded)
    {
      MR_Word Var_74;

      {
        Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_74, 0) = ((MR_Box) (Spec_62));
        MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeItemInstanceInfo0_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeItemInstanceInfo0_17, 0) = ((MR_Box) (Var_74));
      }
    }
    else
    {
      MR_Word MaybeClassName_63;

      parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_61, NameContextPieces_60, NameTerm_12, &MaybeClassName_63);
      if (((MR_tag((MR_Word) MaybeClassName_63)) == (MR_Integer) 0))
      {
        MR_Word Specs_81 = ((MR_Word) ((MR_hl_field(0, MaybeClassName_63, (MR_Integer) 0))));

        {
          MaybeItemInstanceInfo0_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeItemInstanceInfo0_17, 0) = ((MR_Box) (Specs_81));
        }
      }
      else
      {
        MR_Word ClassName_64 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_63, (MR_Integer) 0))));
        MR_Word TypeTerms_65 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_63, (MR_Integer) 1))));
        MR_Word MaybeTypes_67;

        parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_4[0])), VarSet_61, NameContextPieces_60, TypeTerms_65, &MaybeTypes_67);
        if (((MR_tag((MR_Word) MaybeTypes_67)) == (MR_Integer) 0))
          MaybeItemInstanceInfo0_17 = (MR_Word) (MaybeTypes_67);
        else
        {
          MR_Word Types_68 = ((MR_Word) ((MR_hl_field(1, MaybeTypes_67, (MR_Integer) 0))));
          MR_Word ItemInstanceInfo_69;

          {
            ItemInstanceInfo_69 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ItemInstanceInfo_69, 0) = ((MR_Box) (ClassName_64));
            MR_hl_field(0, ItemInstanceInfo_69, 1) = ((MR_Box) (Types_68));
            MR_hl_field(0, ItemInstanceInfo_69, 2) = ((MR_Box) (Types_68));
            MR_hl_field(0, ItemInstanceInfo_69, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ItemInstanceInfo_69, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ItemInstanceInfo_69, 5) = ((MR_Box) (TVarSet_11));
            MR_hl_field(0, ItemInstanceInfo_69, 6) = ((MR_Box) (ModuleName_9));
            MR_hl_field(0, ItemInstanceInfo_69, 7) = ((MR_Box) (Context_14));
            MR_hl_field(0, ItemInstanceInfo_69, 8) = ((MR_Box) (SeqNum_15));
          }
          {
            MaybeItemInstanceInfo0_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeItemInstanceInfo0_17, 0) = ((MR_Box) (ItemInstanceInfo_69));
          }
        }
      }
    }
  }
  parse_tree__parse_class__parse_instance_methods_4_p_0(ModuleName_9, VarSet_10, MethodsTerm_13, &MaybeInstanceMethods_18);
  succeeded = ((MR_tag((MR_Word) MaybeItemInstanceInfo0_17)) == (MR_Integer) 1);
  if (succeeded)
  {
    ItemInstanceInfo0_19 = ((MR_Word) ((MR_hl_field(1, MaybeItemInstanceInfo0_17, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) MaybeInstanceMethods_18)) == (MR_Integer) 1);
    if (succeeded)
      InstanceMethods_20 = ((MR_Word) ((MR_hl_field(1, MaybeInstanceMethods_18, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word ItemInstanceInfo_21;
    MR_Word MaybeCheckSpec_22;
    MR_Word Var_26;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;

    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (InstanceMethods_20));
    }
    Var_31 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_19, (MR_Integer) 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_19, (MR_Integer) 1))));
    Var_33 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_19, (MR_Integer) 2))));
    Var_34 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_19, (MR_Integer) 3))));
    Var_37 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_19, (MR_Integer) 6))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_19, (MR_Integer) 7))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_19, (MR_Integer) 8))));
    {
      ItemInstanceInfo_21 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemInstanceInfo_21, 0) = ((MR_Box) (Var_31));
      MR_hl_field(0, ItemInstanceInfo_21, 1) = ((MR_Box) (Var_32));
      MR_hl_field(0, ItemInstanceInfo_21, 2) = ((MR_Box) (Var_33));
      MR_hl_field(0, ItemInstanceInfo_21, 3) = ((MR_Box) (Var_34));
      MR_hl_field(0, ItemInstanceInfo_21, 4) = ((MR_Box) (Var_26));
      MR_hl_field(0, ItemInstanceInfo_21, 5) = ((MR_Box) (TVarSet_11));
      MR_hl_field(0, ItemInstanceInfo_21, 6) = ((MR_Box) (Var_37));
      MR_hl_field(0, ItemInstanceInfo_21, 7) = ((MR_Box) (Var_38));
      MR_hl_field(0, ItemInstanceInfo_21, 8) = ((MR_Box) (Var_39));
    }
    parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0(ItemInstanceInfo_21, NameTerm_12, &MaybeCheckSpec_22);
    if ((MaybeCheckSpec_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeItemInstanceInfo_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ItemInstanceInfo_21));
      }
    else
    {
      MR_Word Spec_23 = ((MR_Word) ((MR_hl_field(1, MaybeCheckSpec_22, (MR_Integer) 0))));
      MR_Word Var_27;

      {
        Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_27, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItemInstanceInfo_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
      }
    }
  }
  else
  {
    MR_Word Specs_24;
    MR_Word Var_29;
    MR_Word Var_30;

    Var_29 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), MaybeItemInstanceInfo0_17);
    Var_30 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[8]), MaybeInstanceMethods_18);
    Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_29, Var_30);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeItemInstanceInfo_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_24));
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_instance_methods_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeInstanceMethod_8;

  parse_tree__parse_class__term_to_instance_method_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeInstanceMethod_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeInstanceMethod_8));
}

static void MR_CALL 
parse_tree__parse_class__parse_instance_methods_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word MethodsTerm_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_Word MethodList_9;

  succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(MethodsTerm_7, &MethodList_9);
  if (succeeded)
  {
    MR_Word Interface_10;
    MR_Word Var_14;
    MR_Word Results_54;
    MR_Word Specs_55;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_6[2]));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__parse_class__parse_instance_methods_4_p_0_1));
      MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_14, 3) = ((MR_Box) (ModuleName_5));
      MR_hl_field(0, Var_14, 4) = ((MR_Box) (VarSet_6));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_class_scalar_common_2[1]), Var_14, MethodList_9, &Interface_10);
    parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(Interface_10, (MR_Word) ((MR_Unsigned) 0U), &Results_54, (MR_Word) ((MR_Unsigned) 0U), &Specs_55);
    if ((Specs_55 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Results_54));
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_55));
      }
  }
  else
  {
    MR_String MethodsTermStr_11;
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_25;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_44;
    MR_Word Var_45;

    MethodsTermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, MethodsTerm_7);
    Var_20 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[124])));
    {
      Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_33, 1) = ((MR_Box) (MethodsTermStr_11));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[30])));
    }
    Var_31 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_32);
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[33])));
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[113])), Var_30);
    Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, Var_25);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[109])), Var_19);
    Var_44 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodsTerm_7);
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_instance_methods\'/4"));
      MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Var_44));
      MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_62;

  conv0_HeadVar__3_62 = parse_tree__parse_class__IntroducedFrom__func__check_tvars_in_instance_constraint__655__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_62));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_class__IntroducedFrom__pred__check_tvars_in_instance_constraint__651__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0(
  MR_Word ItemInstanceInfo_4,
  MR_Word NameTerm_5,
  MR_Word * MaybeSpec_6)
{
  MR_bool succeeded;
  MR_Word Types_8 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_4, (MR_Integer) 1))));
  MR_Word Constraints_10 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_4, (MR_Integer) 3))));
  MR_Word TVarSet_12 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo_4, (MR_Integer) 5))));
  MR_Word UnboundTVars_19;
  MR_Word TVars_16;
  MR_Word TypesVars_17;
  MR_Word Var_27;
  MR_Word _BoundTVars_18;

  parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(Constraints_10, &TVars_16);
  parse_tree__prog_type_scan__set_of_type_vars_in_types_2_p_0(Types_8, &TypesVars_17);
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_5[4]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_1));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (TypesVars_17));
  }
  mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Var_27, TVars_16, &_BoundTVars_18, &UnboundTVars_19);
  succeeded = (UnboundTVars_19 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word UnboundTVarPieces_22;
    MR_Word UnboundTVarsPieces_23;
    MR_Word UnboundPieces_24;
    MR_Word Pieces_25;
    MR_Word Spec_26;
    MR_Word Var_28;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_55;
    MR_Integer Var_32;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_7[0]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_2));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (TVarSet_12));
    }
    UnboundTVarPieces_22 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, UnboundTVars_19);
    UnboundTVarsPieces_23 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), UnboundTVarPieces_22);
    Var_32 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), UnboundTVars_19);
    succeeded = (Var_32 == (MR_Integer) 1);
    if (succeeded)
      UnboundPieces_24 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[118]));
    else
      UnboundPieces_24 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[120]));
    Var_44 = parse_tree__error_spec__color_as_incorrect_1_f_0(UnboundPieces_24);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UnboundTVarsPieces_23, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[122])));
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_45);
    Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[46])), Var_43);
    Var_55 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NameTerm_5);
    {
      Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.check_tvars_in_instance_constraint\'/3"));
      MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_26, 3) = ((MR_Box) (Var_55));
      MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_25));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeSpec_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_26));
    }
  }
  else
    *MaybeSpec_6 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
parse_tree__parse_class__parse_derived_instance_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Constraint_3;

  succeeded = parse_tree__parse_class__get_simple_constraint_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Constraint_3);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_Constraint_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_class__parse_derived_instance_7_p_0(
  MR_Word ModuleName_8,
  MR_Word TVarSet_9,
  MR_Word NameTerm_10,
  MR_Word ConstraintsTerm_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeItemInstanceInfo_14)
{
  MR_bool succeeded;
  MR_Word VarSet_15;
  MR_Word MaybeItemInstanceInfo0_16;
  MR_Word MaybeInstanceConstraints_17;
  MR_Word NameContextPieces_38;
  MR_Word VarSet_39;
  MR_Word Result0_67;
  MR_Word HeadConstraintTerm_91;
  MR_Word TailConstraintTerms_92;
  MR_Word Var_93;
  MR_Word Spec_40;
  MR_Word ItemInstanceInfo0_18;
  MR_Word InstanceConstraints_19;

  mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_9, &VarSet_15);
  NameContextPieces_38 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[116]))));
  mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_9, &VarSet_39);
  succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_39, (MR_Word) ((MR_Unsigned) 4U), NameTerm_10, &Spec_40);
  if (succeeded)
  {
    MR_Word Var_52;

    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Spec_40));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeItemInstanceInfo0_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeItemInstanceInfo0_16, 0) = ((MR_Box) (Var_52));
    }
  }
  else
  {
    MR_Word MaybeClassName_41;

    parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_39, NameContextPieces_38, NameTerm_10, &MaybeClassName_41);
    if (((MR_tag((MR_Word) MaybeClassName_41)) == (MR_Integer) 0))
    {
      MR_Word Specs_59 = ((MR_Word) ((MR_hl_field(0, MaybeClassName_41, (MR_Integer) 0))));

      {
        MaybeItemInstanceInfo0_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeItemInstanceInfo0_16, 0) = ((MR_Box) (Specs_59));
      }
    }
    else
    {
      MR_Word ClassName_42 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_41, (MR_Integer) 0))));
      MR_Word TypeTerms_43 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_41, (MR_Integer) 1))));
      MR_Word MaybeTypes_45;

      parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_4[0])), VarSet_39, NameContextPieces_38, TypeTerms_43, &MaybeTypes_45);
      if (((MR_tag((MR_Word) MaybeTypes_45)) == (MR_Integer) 0))
        MaybeItemInstanceInfo0_16 = (MR_Word) (MaybeTypes_45);
      else
      {
        MR_Word Types_46 = ((MR_Word) ((MR_hl_field(1, MaybeTypes_45, (MR_Integer) 0))));
        MR_Word ItemInstanceInfo_47;

        {
          ItemInstanceInfo_47 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemInstanceInfo_47, 0) = ((MR_Box) (ClassName_42));
          MR_hl_field(0, ItemInstanceInfo_47, 1) = ((MR_Box) (Types_46));
          MR_hl_field(0, ItemInstanceInfo_47, 2) = ((MR_Box) (Types_46));
          MR_hl_field(0, ItemInstanceInfo_47, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, ItemInstanceInfo_47, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, ItemInstanceInfo_47, 5) = ((MR_Box) (TVarSet_9));
          MR_hl_field(0, ItemInstanceInfo_47, 6) = ((MR_Box) (ModuleName_8));
          MR_hl_field(0, ItemInstanceInfo_47, 7) = ((MR_Box) (Context_12));
          MR_hl_field(0, ItemInstanceInfo_47, 8) = ((MR_Box) (SeqNum_13));
        }
        {
          MaybeItemInstanceInfo0_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeItemInstanceInfo0_16, 0) = ((MR_Box) (ItemInstanceInfo_47));
        }
      }
    }
  }
  parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_11, &Var_93);
  HeadConstraintTerm_91 = ((MR_Word) ((MR_hl_field(0, Var_93, (MR_Integer) 0))));
  TailConstraintTerms_92 = ((MR_Word) ((MR_hl_field(0, Var_93, (MR_Integer) 1))));
  parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(VarSet_15, HeadConstraintTerm_91, TailConstraintTerms_92, &Result0_67);
  if (((MR_tag((MR_Word) Result0_67)) == (MR_Integer) 0))
    MaybeInstanceConstraints_17 = (MR_Word) (Result0_67);
  else
  {
    MR_Word HeadArbConstraint_68;
    MR_Word TailArbConstraints_69;
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(1, Result0_67, (MR_Integer) 0))));
    MR_Word HeadConstraint_70;
    MR_Word TailConstraints_71;
    MR_Word TypeCtorInfo_42_87;
    MR_Word TypeCtorInfo_43_88;
    MR_Word Var_76;
    MR_Word Var_97;

    HeadArbConstraint_68 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 0))));
    TailArbConstraints_69 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) HeadArbConstraint_68)) == (MR_Integer) 0);
    if (succeeded)
    {
      HeadConstraint_70 = ((MR_Word) ((MR_hl_field(0, HeadArbConstraint_68, (MR_Integer) 0))));
      Var_97 = ((MR_Word) ((MR_hl_field(0, HeadArbConstraint_68, (MR_Integer) 2))));
      succeeded = (Var_97 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_76 = (MR_Word) (&parse_tree__parse_class_scalar_common_2[6]);
        TypeCtorInfo_42_87 = (MR_Word) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0);
        TypeCtorInfo_43_88 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0);
        succeeded = mercury__list__map_3_p_2(TypeCtorInfo_42_87, TypeCtorInfo_43_88, Var_76, TailArbConstraints_69, &TailConstraints_71);
      }
    }
    if (succeeded)
    {
      MR_Word Var_77;

      {
        Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_77, 0) = ((MR_Box) (HeadConstraint_70));
        MR_hl_field(1, Var_77, 1) = ((MR_Box) (TailConstraints_71));
      }
      {
        MaybeInstanceConstraints_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeInstanceConstraints_17, 0) = ((MR_Box) (Var_77));
      }
    }
    else
    {
      MR_Word Context_72;
      MR_Word Pieces_73;
      MR_Word Spec_74;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_85;

      Context_72 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_11);
      Var_79 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[145])));
      Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[33])));
      Pieces_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[115])), Var_78);
      {
        Spec_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_74, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_simple_class_constraints\'/5"));
        MR_hl_field(0, Spec_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_74, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_74, 3) = ((MR_Box) (Context_72));
        MR_hl_field(0, Spec_74, 4) = ((MR_Box) (Pieces_73));
      }
      {
        Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_85, 0) = ((MR_Box) (Spec_74));
        MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeInstanceConstraints_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeInstanceConstraints_17, 0) = ((MR_Box) (Var_85));
      }
    }
  }
  succeeded = ((MR_tag((MR_Word) MaybeItemInstanceInfo0_16)) == (MR_Integer) 1);
  if (succeeded)
  {
    ItemInstanceInfo0_18 = ((MR_Word) ((MR_hl_field(1, MaybeItemInstanceInfo0_16, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) MaybeInstanceConstraints_17)) == (MR_Integer) 1);
    if (succeeded)
      InstanceConstraints_19 = ((MR_Word) ((MR_hl_field(1, MaybeInstanceConstraints_17, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word ItemInstanceInfo_20;
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_18, (MR_Integer) 0))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_18, (MR_Integer) 1))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_18, (MR_Integer) 2))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_18, (MR_Integer) 4))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_18, (MR_Integer) 5))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_18, (MR_Integer) 6))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_18, (MR_Integer) 7))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_18, (MR_Integer) 8))));

    {
      ItemInstanceInfo_20 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemInstanceInfo_20, 0) = ((MR_Box) (Var_24));
      MR_hl_field(0, ItemInstanceInfo_20, 1) = ((MR_Box) (Var_25));
      MR_hl_field(0, ItemInstanceInfo_20, 2) = ((MR_Box) (Var_26));
      MR_hl_field(0, ItemInstanceInfo_20, 3) = ((MR_Box) (InstanceConstraints_19));
      MR_hl_field(0, ItemInstanceInfo_20, 4) = ((MR_Box) (Var_28));
      MR_hl_field(0, ItemInstanceInfo_20, 5) = ((MR_Box) (Var_29));
      MR_hl_field(0, ItemInstanceInfo_20, 6) = ((MR_Box) (Var_30));
      MR_hl_field(0, ItemInstanceInfo_20, 7) = ((MR_Box) (Var_31));
      MR_hl_field(0, ItemInstanceInfo_20, 8) = ((MR_Box) (Var_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeItemInstanceInfo_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ItemInstanceInfo_20));
    }
  }
  else
  {
    MR_Word Specs_21;
    MR_Word Var_22;
    MR_Word Var_23;

    Var_22 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), MaybeItemInstanceInfo0_16);
    Var_23 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[7]), MaybeInstanceConstraints_17);
    Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_22, Var_23);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeItemInstanceInfo_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_21));
    }
  }
}

void MR_CALL 
parse_tree__parse_class__parse_typeclass_item_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word ArgTerm_13;
  MR_Word Var_22;

  if (succeeded)
  {
    ArgTerm_13 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word MaybeItemTypeClassInfo_17;
    MR_Word NameTerm_14;
    MR_Word MethodsTerm_15;
    MR_Word Var_23;
    MR_String Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;

    succeeded = ((MR_tag((MR_Word) ArgTerm_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_23 = ((MR_Word) ((MR_hl_field(0, ArgTerm_13, (MR_Integer) 0))));
      Var_25 = ((MR_Word) ((MR_hl_field(0, ArgTerm_13, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_24 = ((MR_String) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
        succeeded = (strcmp(Var_24, (MR_String) "where") == 0);
        if (succeeded)
        {
          succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 0))));
            Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 1))));
            succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MethodsTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 0))));
              Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 1))));
              succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
      parse_tree__parse_class__parse_non_empty_class_7_p_0(ModuleName_7, VarSet_8, NameTerm_14, MethodsTerm_15, Context_10, SeqNum_11, &MaybeItemTypeClassInfo_17);
    else
      parse_tree__parse_class__parse_class_head_6_p_0(ModuleName_7, VarSet_8, ArgTerm_13, Context_10, SeqNum_11, &MaybeItemTypeClassInfo_17);
    if (((MR_tag((MR_Word) MaybeItemTypeClassInfo_17)) == (MR_Integer) 0))
      *MaybeIOM_12 = (MR_Word) (MaybeItemTypeClassInfo_17);
    else
    {
      MR_Word ItemTypeClassInfo_18 = ((MR_Word) ((MR_hl_field(1, MaybeItemTypeClassInfo_17, (MR_Integer) 0))));
      MR_Word Var_28;
      MR_Word Var_29;

      {
        Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_29, 1) = ((MR_Box) (ItemTypeClassInfo_18));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
      }
    }
  }
  else
  {
    MR_Word Pieces_20;
    MR_Word Spec_21;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_46;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_57;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_83;

    Var_41 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[20])));
    Var_52 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[24])));
    Var_69 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[32])));
    Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[33])));
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[28])), Var_68);
    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, Var_57);
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[22])), Var_51);
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_46);
    Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[18])), Var_40);
    {
      Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_typeclass_item\'/6"));
      MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
    }
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (Spec_21));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_83));
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_non_empty_class_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_item__parse_class_decl_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__parse_class__parse_non_empty_class_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word NameTerm_10,
  MR_Word MethodsTerm_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeItemTypeClassInfo_14)
{
  MR_bool succeeded;
  MR_Word MaybeItemTypeClassInfo0_15;
  MR_Word MaybeClassDecls_16;
  MR_Word DeclTerms_47;
  MR_Word ItemTypeClassInfo0_17;
  MR_Word ClassDecls_18;

  parse_tree__parse_class__parse_class_head_6_p_0(ModuleName_8, VarSet_9, NameTerm_10, Context_12, SeqNum_13, &MaybeItemTypeClassInfo0_15);
  succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(MethodsTerm_11, &DeclTerms_47);
  if (succeeded)
  {
    MR_Word MaybeDecls_48;
    MR_Word Var_52;
    MR_Word Results_76;
    MR_Word Specs_77;

    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_52, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_6[1]));
      MR_hl_field(0, Var_52, 1) = ((MR_Box) (parse_tree__parse_class__parse_non_empty_class_7_p_0_1));
      MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_52, 3) = ((MR_Box) (ModuleName_8));
      MR_hl_field(0, Var_52, 4) = ((MR_Box) (VarSet_9));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_class_scalar_common_2[0]), Var_52, DeclTerms_47, &MaybeDecls_48);
    parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(MaybeDecls_48, (MR_Word) ((MR_Unsigned) 0U), &Results_76, (MR_Word) ((MR_Unsigned) 0U), &Specs_77);
    if ((Specs_77 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeClassDecls_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeClassDecls_16, 0) = ((MR_Box) (Results_76));
      }
    else
      {
        MaybeClassDecls_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeClassDecls_16, 0) = ((MR_Box) (Specs_77));
      }
  }
  else
  {
    MR_String DeclsTermStr_49;
    MR_Word Pieces_50;
    MR_Word Spec_51;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_68;
    MR_Word Var_69;

    DeclsTermStr_49 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, MethodsTerm_11);
    Var_55 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[111])));
    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_62, 1) = ((MR_Box) (DeclsTermStr_49));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[30])));
    }
    Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_61);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[33])));
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[113])), Var_59);
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, Var_57);
    Pieces_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[109])), Var_54);
    Var_68 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodsTerm_11);
    {
      Spec_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_51, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_class_decls\'/4"));
      MR_hl_field(0, Spec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_51, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_51, 3) = ((MR_Box) (Var_68));
      MR_hl_field(0, Spec_51, 4) = ((MR_Box) (Pieces_50));
    }
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (Spec_51));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeClassDecls_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeClassDecls_16, 0) = ((MR_Box) (Var_69));
    }
  }
  succeeded = ((MR_tag((MR_Word) MaybeItemTypeClassInfo0_15)) == (MR_Integer) 1);
  if (succeeded)
  {
    ItemTypeClassInfo0_17 = ((MR_Word) ((MR_hl_field(1, MaybeItemTypeClassInfo0_15, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) MaybeClassDecls_16)) == (MR_Integer) 1);
    if (succeeded)
      ClassDecls_18 = ((MR_Word) ((MR_hl_field(1, MaybeClassDecls_16, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word TVarSet_19;
    MR_Word ItemTypeClassInfo_20;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;

    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_9, &TVarSet_19);
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (ClassDecls_18));
    }
    Var_26 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo0_17, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo0_17, (MR_Integer) 1))));
    Var_28 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo0_17, (MR_Integer) 2))));
    Var_29 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo0_17, (MR_Integer) 3))));
    Var_32 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo0_17, (MR_Integer) 6))));
    Var_33 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo0_17, (MR_Integer) 7))));
    {
      ItemTypeClassInfo_20 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemTypeClassInfo_20, 0) = ((MR_Box) (Var_26));
      MR_hl_field(0, ItemTypeClassInfo_20, 1) = ((MR_Box) (Var_27));
      MR_hl_field(0, ItemTypeClassInfo_20, 2) = ((MR_Box) (Var_28));
      MR_hl_field(0, ItemTypeClassInfo_20, 3) = ((MR_Box) (Var_29));
      MR_hl_field(0, ItemTypeClassInfo_20, 4) = ((MR_Box) (Var_23));
      MR_hl_field(0, ItemTypeClassInfo_20, 5) = ((MR_Box) (TVarSet_19));
      MR_hl_field(0, ItemTypeClassInfo_20, 6) = ((MR_Box) (Var_32));
      MR_hl_field(0, ItemTypeClassInfo_20, 7) = ((MR_Box) (Var_33));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeItemTypeClassInfo_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ItemTypeClassInfo_20));
    }
  }
  else
  {
    MR_Word Specs_21;
    MR_Word Var_24;
    MR_Word Var_25;

    Var_24 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), MaybeItemTypeClassInfo0_15);
    Var_25 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[0]), MaybeClassDecls_16);
    Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_24, Var_25);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeItemTypeClassInfo_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_21));
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Results_0_2,
  MR_Word * STATE_VARIABLE_Results_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    *STATE_VARIABLE_Results_3 = STATE_VARIABLE_Results_0_2;
  }
  else
  {
    MR_Word X_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Xs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Results_22_22;
    MR_Word STATE_VARIABLE_Specs_23_23;

    parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(Xs_13, STATE_VARIABLE_Results_0_2, &STATE_VARIABLE_Results_22_22, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_23_23);
    if (((MR_tag((MR_Word) X_12)) == (MR_Integer) 0))
    {
      MR_Word CurSpecs_17 = ((MR_Word) ((MR_hl_field(0, X_12, (MR_Integer) 0))));

      *STATE_VARIABLE_Specs_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CurSpecs_17, STATE_VARIABLE_Specs_23_23);
      *STATE_VARIABLE_Results_3 = STATE_VARIABLE_Results_22_22;
    }
    else
    {
      MR_Box CurResult_16 = (MR_hl_field(1, X_12, (MR_Integer) 0));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Results_3 = base;
        MR_hl_field(1, base, 0) = CurResult_16;
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Results_22_22));
      }
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_23_23;
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_class_head_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_68;

  parse_tree__parse_class__IntroducedFrom__pred__parse_unconstrained_class__399__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_68);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_68));
}

static void MR_CALL 
parse_tree__parse_class__parse_class_head_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word ArgTerm_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeItemTypeClassInfo_12)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ArgTerm_9)) == (MR_Integer) 0);
  MR_Word NameTerm_13;
  MR_Word ConstraintsTerm_14;
  MR_Word Var_17;
  MR_String Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

  if (succeeded)
  {
    Var_17 = ((MR_Word) ((MR_hl_field(0, ArgTerm_9, (MR_Integer) 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(0, ArgTerm_9, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_18 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
      succeeded = (strcmp(Var_18, (MR_String) "<=") == 0);
      if (succeeded)
      {
        succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NameTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
          Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
          succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ConstraintsTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
            succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
    parse_tree__parse_class__parse_constrained_class_7_p_0(ModuleName_7, VarSet_8, NameTerm_13, ConstraintsTerm_14, Context_10, SeqNum_11, MaybeItemTypeClassInfo_12);
  else
  {
    MR_Word TVarSet_16;
    MR_Word ContextPieces_24;
    MR_Word VarSet_25;
    MR_Word Spec_26;

    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_8, &TVarSet_16);
    ContextPieces_24 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[101]))));
    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_16, &VarSet_25);
    succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_25, (MR_Word) ((MR_Unsigned) 0U), ArgTerm_9, &Spec_26);
    if (succeeded)
    {
      MR_Word Var_37;

      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (Spec_26));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItemTypeClassInfo_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
      }
    }
    else
    {
      MR_Word MaybeClassName_27;

      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_7, VarSet_25, ContextPieces_24, ArgTerm_9, &MaybeClassName_27);
      if (((MR_tag((MR_Word) MaybeClassName_27)) == (MR_Integer) 0))
      {
        MR_Word Specs_56 = ((MR_Word) ((MR_hl_field(0, MaybeClassName_27, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeItemTypeClassInfo_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_56));
        }
      }
      else
      {
        MR_Word ClassName_28 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_27, (MR_Integer) 0))));
        MR_Word ArgTerms0_29 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_27, (MR_Integer) 1))));
        MR_Word ArgTerms_30;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_class_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_class_scalar_common_2[5]), ArgTerms0_29, &ArgTerms_30);
        if ((ArgTerms_30 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Pieces_31;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Spec_55;

          Var_42 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[107])));
          Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[33])));
          Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[103])), Var_41);
          Var_48 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArgTerm_9);
          {
            Spec_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_55, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_unconstrained_class\'/6"));
            MR_hl_field(0, Spec_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_55, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_55, 3) = ((MR_Box) (Var_48));
            MR_hl_field(0, Spec_55, 4) = ((MR_Box) (Pieces_31));
          }
          {
            Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_49, 0) = ((MR_Box) (Spec_55));
            MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeItemTypeClassInfo_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_49));
          }
        }
        else
        {
          MR_Word MaybeVars_32;

          parse_tree__parse_util__terms_to_distinct_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_16, (MR_String) "a", (MR_String) "typeclass declaration", ArgTerms_30, &MaybeVars_32);
          if (((MR_tag((MR_Word) MaybeVars_32)) == (MR_Integer) 0))
            *MaybeItemTypeClassInfo_12 = (MR_Word) (MaybeVars_32);
          else
          {
            MR_Word Vars_33 = ((MR_Word) ((MR_hl_field(1, MaybeVars_32, (MR_Integer) 0))));
            MR_Word TypeClassInfo_34;

            {
              TypeClassInfo_34 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeClassInfo_34, 0) = ((MR_Box) (ClassName_28));
              MR_hl_field(0, TypeClassInfo_34, 1) = ((MR_Box) (Vars_33));
              MR_hl_field(0, TypeClassInfo_34, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, TypeClassInfo_34, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, TypeClassInfo_34, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, TypeClassInfo_34, 5) = ((MR_Box) (TVarSet_16));
              MR_hl_field(0, TypeClassInfo_34, 6) = ((MR_Box) (Context_10));
              MR_hl_field(0, TypeClassInfo_34, 7) = ((MR_Box) (SeqNum_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeItemTypeClassInfo_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (TypeClassInfo_34));
            }
          }
        }
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_197;

  conv1_HeadVar__3_197 = parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__240__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_197));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_194;

  conv0_HeadVar__3_194 = parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__237__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_194));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__195__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__193__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word NameTerm_10,
  MR_Word ConstraintsTerm_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeItemTypeClass_14)
{
  MR_bool succeeded;
  MR_Word TVarSet_15;
  MR_Word MaybeParsedConstraints_16;

  mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_9, &TVarSet_15);
  parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(VarSet_9, ConstraintsTerm_11, &MaybeParsedConstraints_16);
  if (((MR_tag((MR_Word) MaybeParsedConstraints_16)) == (MR_Integer) 0))
  {
    MR_Word Specs_62 = ((MR_Word) ((MR_hl_field(0, MaybeParsedConstraints_16, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeItemTypeClass_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_62));
    }
  }
  else
  {
    MR_Word ConstraintList_17 = ((MR_Word) ((MR_hl_field(1, MaybeParsedConstraints_16, (MR_Integer) 0))));
    MR_Word FunDeps_18 = ((MR_Word) ((MR_hl_field(1, MaybeParsedConstraints_16, (MR_Integer) 1))));
    MR_Word MaybeItemTypeClass0_19;

    parse_tree__parse_class__parse_unconstrained_class_6_p_0(ModuleName_8, TVarSet_15, NameTerm_10, Context_12, SeqNum_13, &MaybeItemTypeClass0_19);
    if (((MR_tag((MR_Word) MaybeItemTypeClass0_19)) == (MR_Integer) 0))
      *MaybeItemTypeClass_14 = MaybeItemTypeClass0_19;
    else
    {
      MR_Word ItemTypeClass0_21 = ((MR_Word) ((MR_hl_field(1, MaybeItemTypeClass0_19, (MR_Integer) 0))));
      MR_Word ConstraintVars_22;
      MR_Word SortedConstraintVars_23;
      MR_Word FunDepVars_24;
      MR_Word SortedFunDepVars_25;
      MR_Word Params_26;
      MR_Word ConstraintNotInParams_28;
      MR_Word FunDepNotInParams_30;
      MR_Word ConstraintErrorContext_33;
      MR_Word FunDepErrorContext_36;
      MR_Word NotInParams_37;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_199;
      MR_Word Var_200;
      MR_Word Var_201;
      MR_Word Var_202;
      MR_Word Var_205;
      MR_Word Var_206;
      MR_Word _ConstraintInParams_27;
      MR_Word _FunDepInParams_29;

      parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(ConstraintList_17, &ConstraintVars_22);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), ConstraintVars_22, &SortedConstraintVars_23);
      FunDepVars_24 = parse_tree__parse_class__tvars_in_fundeps_1_f_0(FunDeps_18);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), FunDepVars_24, &SortedFunDepVars_25);
      Params_26 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_21, (MR_Integer) 1))));
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_63, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_5[2]));
        MR_hl_field(0, Var_63, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_1));
        MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_63, 3) = ((MR_Box) (Params_26));
      }
      mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Var_63, SortedConstraintVars_23, &_ConstraintInParams_27, &ConstraintNotInParams_28);
      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_64, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_5[2]));
        MR_hl_field(0, Var_64, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_2));
        MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_64, 3) = ((MR_Box) (Params_26));
      }
      mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Var_64, SortedFunDepVars_25, &_FunDepInParams_29, &FunDepNotInParams_30);
      if ((ConstraintNotInParams_28 == (MR_Word) ((MR_Unsigned) 0U)))
        ConstraintErrorContext_33 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer Var_65;

        Var_65 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ConstraintList_17);
        succeeded = (Var_65 == (MR_Integer) 1);
        if (succeeded)
          ConstraintErrorContext_33 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[54]));
        else
          ConstraintErrorContext_33 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[56]));
      }
      if ((FunDepNotInParams_30 == (MR_Word) ((MR_Unsigned) 0U)))
        FunDepErrorContext_36 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer Var_72;

        Var_72 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0), FunDeps_18);
        succeeded = (Var_72 == (MR_Integer) 1);
        if (succeeded)
          FunDepErrorContext_36 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[58]));
        else
          FunDepErrorContext_36 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[60]));
      }
      NotInParams_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), ConstraintNotInParams_28, FunDepNotInParams_30);
      Var_206 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_21, (MR_Integer) 0))));
      Var_205 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_21, (MR_Integer) 1))));
      Var_202 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_21, (MR_Integer) 4))));
      Var_201 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_21, (MR_Integer) 5))));
      Var_200 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_21, (MR_Integer) 6))));
      Var_199 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_21, (MR_Integer) 7))));
      if ((NotInParams_37 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ItemTypeClass_38;
        MR_Word Var_153 = Var_206;
        MR_Word Var_154 = Var_205;
        MR_Word Var_157 = Var_202;
        MR_Word Var_158 = Var_201;
        MR_Word Var_159 = Var_200;
        MR_Word Var_160 = Var_199;

        {
          ItemTypeClass_38 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemTypeClass_38, 0) = ((MR_Box) (Var_153));
          MR_hl_field(0, ItemTypeClass_38, 1) = ((MR_Box) (Var_154));
          MR_hl_field(0, ItemTypeClass_38, 2) = ((MR_Box) (ConstraintList_17));
          MR_hl_field(0, ItemTypeClass_38, 3) = ((MR_Box) (FunDeps_18));
          MR_hl_field(0, ItemTypeClass_38, 4) = ((MR_Box) (Var_157));
          MR_hl_field(0, ItemTypeClass_38, 5) = ((MR_Box) (Var_158));
          MR_hl_field(0, ItemTypeClass_38, 6) = ((MR_Box) (Var_159));
          MR_hl_field(0, ItemTypeClass_38, 7) = ((MR_Box) (Var_160));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeItemTypeClass_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ItemTypeClass_38));
        }
      }
      else
      {
        MR_Integer ClassArity_42;
        MR_Word ClassId_43;
        MR_Word ClassTVarSet_44;
        MR_Word ConstraintNotInParamsPieces_45;
        MR_Word FunDepNotInParamsPieces_46;
        MR_Word ConstraintPieces_47;
        MR_Word FunDepPieces_48;
        MR_Word ErrorTypeVarsPieces_49;
        MR_Word NotParameterPieces_50;
        MR_Word ConstrFunDepPieces_53;
        MR_Word Pieces_60;
        MR_Word Spec_61;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_Word Var_133;
        MR_Word Var_144;
        MR_Integer Var_89;

        Var_80 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Params_26);
        ClassArity_42 = (MR_Integer) (Var_80);
        {
          ClassId_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ClassId_43, 0) = ((MR_Box) (Var_206));
          MR_hl_field(0, ClassId_43, 1) = ((MR_Box) (ClassArity_42));
        }
        ClassTVarSet_44 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_21, (MR_Integer) 5))));
        {
          Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_81, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_7[0]));
          MR_hl_field(0, Var_81, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_3));
          MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_81, 3) = ((MR_Box) (ClassTVarSet_44));
        }
        ConstraintNotInParamsPieces_45 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81, ConstraintNotInParams_28);
        {
          Var_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_82, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_7[0]));
          MR_hl_field(0, Var_82, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_4));
          MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_82, 3) = ((MR_Box) (ClassTVarSet_44));
        }
        FunDepNotInParamsPieces_46 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_82, FunDepNotInParams_30);
        ConstraintPieces_47 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), ConstraintNotInParamsPieces_45);
        FunDepPieces_48 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), FunDepNotInParamsPieces_46);
        Var_89 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), NotInParams_37);
        succeeded = (Var_89 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word Var_97;

          ErrorTypeVarsPieces_49 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[62]));
          Var_97 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[66])));
          NotParameterPieces_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[64])), Var_97);
        }
        else
        {
          MR_Word Var_109;

          ErrorTypeVarsPieces_49 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[68]));
          Var_109 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[72])));
          NotParameterPieces_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[70])), Var_109);
        }
        if ((ConstraintNotInParams_28 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((FunDepNotInParams_30 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_class.parse_constrained_class\'/7", (MR_String) "no NotInParams");
              return;
            }
          else
            ConstrFunDepPieces_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FunDepPieces_48, FunDepErrorContext_36);
        else
        if ((FunDepNotInParams_30 == (MR_Word) ((MR_Unsigned) 0U)))
          ConstrFunDepPieces_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConstraintPieces_47, ConstraintErrorContext_33);
        else
        {
          MR_Word Var_116;
          MR_Word Var_117;
          MR_Word Var_122;

          Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FunDepPieces_48, FunDepErrorContext_36);
          Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[74])), Var_122);
          Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConstraintErrorContext_33, Var_117);
          ConstrFunDepPieces_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConstraintPieces_47, Var_116);
        }
        {
          Var_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(3, Var_133, 1) = ((MR_Box) (ClassId_43));
        }
        {
          Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_132, 0) = ((MR_Box) (Var_133));
          MR_hl_field(1, Var_132, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[30])));
        }
        Var_131 = parse_tree__error_spec__color_as_subject_1_f_0(Var_132);
        Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_131, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[33])));
        Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[76])), Var_130);
        Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NotParameterPieces_50, Var_125);
        Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConstrFunDepPieces_53, Var_124);
        Pieces_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ErrorTypeVarsPieces_49, Var_123);
        {
          Spec_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_61, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_constrained_class\'/7"));
          MR_hl_field(0, Spec_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_61, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_61, 3) = ((MR_Box) (Context_12));
          MR_hl_field(0, Spec_61, 4) = ((MR_Box) (Pieces_60));
        }
        {
          Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_144, 0) = ((MR_Box) (Spec_61));
          MR_hl_field(1, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeItemTypeClass_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_144));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word VarSet_6,
  MR_Word ConstraintsTerm_7,
  MR_Word * Result_8)
{
  MR_Word Result0_9;
  MR_Word HeadConstraintTerm_20;
  MR_Word TailConstraintTerms_21;
  MR_Word Var_22;

  parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7, &Var_22);
  HeadConstraintTerm_20 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 0))));
  TailConstraintTerms_21 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 1))));
  parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(VarSet_6, HeadConstraintTerm_20, TailConstraintTerms_21, &Result0_9);
  if (((MR_tag((MR_Word) Result0_9)) == (MR_Integer) 0))
  {
    MR_Word Specs_18 = ((MR_Word) ((MR_hl_field(0, Result0_9, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_18));
    }
  }
  else
  {
    MR_Word HeadArbConstraint_10;
    MR_Word TailArbConstraints_11;
    MR_Word ArbitraryConstraints_12;
    MR_Word SimpleConstraints_13;
    MR_Word FunDeps_14;
    MR_Word BadConstraintSpecs_15;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, Result0_9, (MR_Integer) 0))));

    HeadArbConstraint_10 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
    TailArbConstraints_11 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 1))));
    {
      ArbitraryConstraints_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArbitraryConstraints_12, 0) = ((MR_Box) (HeadArbConstraint_10));
      MR_hl_field(1, ArbitraryConstraints_12, 1) = ((MR_Box) (TailArbConstraints_11));
    }
    parse_tree__parse_class__collect_superclass_constraints_5_p_0(VarSet_6, ArbitraryConstraints_12, &SimpleConstraints_13, &FunDeps_14, &BadConstraintSpecs_15);
    if ((BadConstraintSpecs_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (SimpleConstraints_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (FunDeps_14));
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (BadConstraintSpecs_15));
      }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(
  MR_Word VarSet_5,
  MR_Word HeadTerm_6,
  MR_Word TailTerms_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_Word HeadResult_9;

  parse_tree__parse_class__parse_arbitrary_constraint_3_p_0(VarSet_5, HeadTerm_6, &HeadResult_9);
  if ((TailTerms_7 == (MR_Word) ((MR_Unsigned) 0U)))
    if (((MR_tag((MR_Word) HeadResult_9)) == (MR_Integer) 0))
      *Result_8 = (MR_Word) (HeadResult_9);
    else
    {
      MR_Word HeadConstraint_10 = ((MR_Word) ((MR_hl_field(1, HeadResult_9, (MR_Integer) 0))));
      MR_Word Var_16;

      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_16, 0) = ((MR_Box) (HeadConstraint_10));
        MR_hl_field(0, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
      }
    }
  else
  {
    MR_Word HeadTailTerm_12 = ((MR_Word) ((MR_hl_field(1, TailTerms_7, (MR_Integer) 0))));
    MR_Word TailTailTerms_13 = ((MR_Word) ((MR_hl_field(1, TailTerms_7, (MR_Integer) 1))));
    MR_Word TailResult_14;
    MR_Word TailConstraints_15;
    MR_Word HeadConstraint_22;

    parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(VarSet_5, HeadTailTerm_12, TailTailTerms_13, &TailResult_14);
    succeeded = ((MR_tag((MR_Word) HeadResult_9)) == (MR_Integer) 1);
    if (succeeded)
    {
      HeadConstraint_22 = ((MR_Word) ((MR_hl_field(1, HeadResult_9, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) TailResult_14)) == (MR_Integer) 1);
      if (succeeded)
        TailConstraints_15 = ((MR_Word) ((MR_hl_field(1, TailResult_14, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_18;

      Var_18 = mercury__one_or_more__cons_2_f_0((MR_Word) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0), ((MR_Box) (HeadConstraint_22)), TailConstraints_15);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
      }
    }
    else
    {
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;

      Var_20 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0), HeadResult_9);
      Var_21 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[10]), TailResult_14);
      Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_20, Var_21);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_arbitrary_constraint_3_p_0(
  MR_Word VarSet_4,
  MR_Word ConstraintTerm_5,
  MR_Word * Result_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConstraintTerm_5)) == (MR_Integer) 0);
  MR_Word LHSTerm_7;
  MR_Word RHSTerm_8;
  MR_Word Context_9;
  MR_Word Var_38;
  MR_String Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;

  if (succeeded)
  {
    Var_38 = ((MR_Word) ((MR_hl_field(0, ConstraintTerm_5, (MR_Integer) 0))));
    Var_40 = ((MR_Word) ((MR_hl_field(0, ConstraintTerm_5, (MR_Integer) 1))));
    Context_9 = ((MR_Word) ((MR_hl_field(0, ConstraintTerm_5, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_39 = ((MR_String) ((MR_hl_field(0, Var_38, (MR_Integer) 0))));
      succeeded = (strcmp(Var_39, (MR_String) "=<") == 0);
      if (succeeded)
      {
        succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LHSTerm_7 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 0))));
          Var_41 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 1))));
          succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RHSTerm_8 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
            Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 1))));
            succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeInstVar_13;
    MR_Word ContextPieces_20;
    MR_Word MaybeInst_21;
    MR_Word InstVar_22;
    MR_Word Inst_23;

    if (((MR_tag((MR_Word) LHSTerm_7)) == (MR_Integer) 0))
    {
      MR_Word LHSContext_16 = ((MR_Word) ((MR_hl_field(0, LHSTerm_7, (MR_Integer) 2))));
      MR_String LHSTermStr_17;
      MR_Word LHSPieces_18;
      MR_Word LHSSpec_19;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_67;

      LHSTermStr_17 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, LHSTerm_7);
      {
        Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_50, 1) = ((MR_Box) (LHSTermStr_17));
      }
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_48 = parse_tree__error_spec__color_as_subject_1_f_0(Var_49);
      Var_53 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[151])));
      Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[33])));
      Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, Var_52);
      LHSPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[147])), Var_47);
      {
        LHSSpec_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, LHSSpec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_arbitrary_constraint\'/3"));
        MR_hl_field(0, LHSSpec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, LHSSpec_19, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, LHSSpec_19, 3) = ((MR_Box) (LHSContext_16));
        MR_hl_field(0, LHSSpec_19, 4) = ((MR_Box) (LHSPieces_18));
      }
      {
        Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_67, 0) = ((MR_Box) (LHSSpec_19));
        MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeInstVar_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeInstVar_13, 0) = ((MR_Box) (Var_67));
      }
    }
    else
    {
      MR_Word InstVar0_10 = ((MR_Word) ((MR_hl_field(1, LHSTerm_7, (MR_Integer) 0))));
      MR_Word InstVar1_12;

      mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVar0_10, &InstVar1_12);
      {
        MaybeInstVar_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeInstVar_13, 0) = ((MR_Box) (InstVar1_12));
      }
    }
    ContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[155])));
    parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_4[1])), VarSet_4, ContextPieces_20, RHSTerm_8, &MaybeInst_21);
    succeeded = ((MR_tag((MR_Word) MaybeInstVar_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      InstVar_22 = ((MR_Word) ((MR_hl_field(1, MaybeInstVar_13, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeInst_21)) == (MR_Integer) 1);
      if (succeeded)
        Inst_23 = ((MR_Word) ((MR_hl_field(1, MaybeInst_21, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_78;

      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (InstVar_22));
        MR_hl_field(1, Var_78, 1) = ((MR_Box) (Inst_23));
        MR_hl_field(1, Var_78, 2) = ((MR_Box) (Context_9));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_78));
      }
    }
    else
    {
      MR_Word Specs_24;
      MR_Word Var_79;
      MR_Word Var_80;

      Var_79 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[3]), MaybeInstVar_13);
      Var_80 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), MaybeInst_21);
      Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_79, Var_80);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_24));
      }
    }
  }
  else
  {
    MR_Word Result0_25;

    succeeded = parse_tree__parse_class__parse_fundep_3_p_0(VarSet_4, ConstraintTerm_5, &Result0_25);
    if (succeeded)
      *Result_6 = Result0_25;
    else
    {
      MR_Word ClassName_26;
      MR_Word ArgTerms0_27;

      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintTerm_5, &ClassName_26, &ArgTerms0_27);
      if (succeeded)
      {
        MR_Word ArgsResultContextPieces_28;
        MR_Word ArgsResult_29;

        ArgsResultContextPieces_28 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[156]))));
        parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_4[0])), VarSet_4, ArgsResultContextPieces_28, ArgTerms0_27, &ArgsResult_29);
        if (((MR_tag((MR_Word) ArgsResult_29)) == (MR_Integer) 0))
          *Result_6 = (MR_Word) (ArgsResult_29);
        else
        {
          MR_Word ArgTypes_30 = ((MR_Word) ((MR_hl_field(1, ArgsResult_29, (MR_Integer) 0))));
          MR_Word TVarSet_31;
          MR_Word Constraint_32;
          MR_Word VoGTypes_33;
          MR_Word NonVarNonGroundTypes_34;
          MR_Word Var_85;
          MR_Word Context_115;

          mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_4, &TVarSet_31);
          {
            Constraint_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Constraint_32, 0) = ((MR_Box) (ClassName_26));
            MR_hl_field(0, Constraint_32, 1) = ((MR_Box) (ArgTypes_30));
          }
          parse_tree__parse_class__classify_types_as_var_ground_or_neither_4_p_0(TVarSet_31, ArgTypes_30, &VoGTypes_33, &NonVarNonGroundTypes_34);
          Context_115 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintTerm_5);
          {
            Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_85, 0) = ((MR_Box) (Constraint_32));
            MR_hl_field(0, Var_85, 1) = ((MR_Box) (VoGTypes_33));
            MR_hl_field(0, Var_85, 2) = ((MR_Box) (NonVarNonGroundTypes_34));
            MR_hl_field(0, Var_85, 3) = ((MR_Box) (Context_115));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_85));
          }
        }
      }
      else
      {
        MR_String ConstraintTermStr_35;
        MR_Word Pieces_36;
        MR_Word Spec_37;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_96;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_112;
        MR_Word Var_113;

        ConstraintTermStr_35 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, ConstraintTerm_5);
        Var_91 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[158])));
        {
          Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_104, 1) = ((MR_Box) (ConstraintTermStr_35));
        }
        {
          Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_104));
          MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_102 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_103);
        Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_102, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[33])));
        Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[113])), Var_101);
        Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, Var_96);
        Pieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[109])), Var_90);
        Var_112 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintTerm_5);
        {
          Spec_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_arbitrary_constraint\'/3"));
          MR_hl_field(0, Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_37, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_37, 3) = ((MR_Box) (Var_112));
          MR_hl_field(0, Spec_37, 4) = ((MR_Box) (Pieces_36));
        }
        {
          Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_113, 0) = ((MR_Box) (Spec_37));
          MR_hl_field(1, Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_113));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__classify_types_as_var_ground_or_neither_4_p_0(
  MR_Word TVarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Type0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Types0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Type1_11;
    MR_Word Type_12;
    MR_Word STATE_VARIABLE_VarOrGroundTypes_19_19;
    MR_Word STATE_VARIABLE_NonVarNonGroundTypes_20_20;
    MR_Word TVar_13;

    parse_tree__parse_class__classify_types_as_var_ground_or_neither_4_p_0(TVarSet_1, Types0_8, &STATE_VARIABLE_VarOrGroundTypes_19_19, &STATE_VARIABLE_NonVarNonGroundTypes_20_20);
    Type1_11 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(Type0_7);
    Type_12 = (MR_Word) (Type1_11);
    succeeded = ((MR_tag((MR_Word) Type_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      TVar_13 = ((MR_Word) ((MR_hl_field(0, Type_12, (MR_Integer) 0))));
      {
        MR_String TVarName_15;
        MR_Word Var_22;

        mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_1, TVar_13, &TVarName_15);
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (TVar_13));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (TVarName_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_VarOrGroundTypes_19_19));
        }
        *HeadVar__4_4 = STATE_VARIABLE_NonVarNonGroundTypes_20_20;
      }
    }
    else
    {
      MR_Word GroundType_16;

      succeeded = parse_tree__prog_type_test__type_is_ground_2_p_0(Type_12, &GroundType_16);
      if (succeeded)
      {
        MR_Word Var_24;

        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (GroundType_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_VarOrGroundTypes_19_19));
        }
        *HeadVar__4_4 = STATE_VARIABLE_NonVarNonGroundTypes_20_20;
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Type_12));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NonVarNonGroundTypes_20_20));
        }
        *HeadVar__3_3 = STATE_VARIABLE_VarOrGroundTypes_19_19;
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__parse_fundep_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * Result_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word TypeCtorInfo_14_33;
  MR_Word TypeCtorInfo_15_34;
  MR_Word TypeCtorInfo_14_38;
  MR_Word TypeCtorInfo_15_39;
  MR_Word DomainTerm_7;
  MR_Word RangeTerm_8;
  MR_Word Context_9;
  MR_Word MaybeDomain_10;
  MR_Word MaybeRange_11;
  MR_Word Var_15;
  MR_String Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_String Var_20;
  MR_String Var_21;
  MR_String Var_22;
  MR_String Var_23;
  MR_Word VarSet_30;
  MR_Word TypesTerm_31;
  MR_Word TypeTerms_32;
  MR_Word VarSet_35;
  MR_Word TypesTerm_36;
  MR_Word TypeTerms_37;
  MR_Word Domain_12;
  MR_Word Range_13;

  if (succeeded)
  {
    Var_15 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    Var_17 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    Context_9 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_16 = ((MR_String) ((MR_hl_field(0, Var_15, (MR_Integer) 0))));
      succeeded = (strcmp(Var_16, (MR_String) "->") == 0);
      if (succeeded)
      {
        succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          DomainTerm_7 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));
          Var_18 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 1))));
          succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RangeTerm_8 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 0))));
            Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
            succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_20 = (MR_String) "a";
              Var_21 = (MR_String) "functional dependency domain";
              TypeCtorInfo_14_33 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
              TypeCtorInfo_15_34 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
              VarSet_30 = mercury__varset__coerce_1_f_0(TypeCtorInfo_14_33, TypeCtorInfo_15_34, VarSet_4);
              TypesTerm_31 = mercury__term__coerce_1_f_0(TypeCtorInfo_14_33, TypeCtorInfo_15_34, DomainTerm_7);
              parse_tree__parse_util__conjunction_to_list_2_p_0(TypeCtorInfo_15_34, TypesTerm_31, &TypeTerms_32);
              parse_tree__parse_util__terms_to_distinct_vars_5_p_0(TypeCtorInfo_15_34, VarSet_30, Var_20, Var_21, TypeTerms_32, &MaybeDomain_10);
              Var_22 = (MR_String) "a";
              Var_23 = (MR_String) "functional dependency range";
              TypeCtorInfo_14_38 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
              TypeCtorInfo_15_39 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
              VarSet_35 = mercury__varset__coerce_1_f_0(TypeCtorInfo_14_38, TypeCtorInfo_15_39, VarSet_4);
              TypesTerm_36 = mercury__term__coerce_1_f_0(TypeCtorInfo_14_38, TypeCtorInfo_15_39, RangeTerm_8);
              parse_tree__parse_util__conjunction_to_list_2_p_0(TypeCtorInfo_15_39, TypesTerm_36, &TypeTerms_37);
              parse_tree__parse_util__terms_to_distinct_vars_5_p_0(TypeCtorInfo_15_39, VarSet_35, Var_22, Var_23, TypeTerms_37, &MaybeRange_11);
              succeeded = ((MR_tag((MR_Word) MaybeDomain_10)) == (MR_Integer) 1);
              if (succeeded)
              {
                Domain_12 = ((MR_Word) ((MR_hl_field(1, MaybeDomain_10, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeRange_11)) == (MR_Integer) 1);
                if (succeeded)
                  Range_13 = ((MR_Word) ((MR_hl_field(1, MaybeRange_11, (MR_Integer) 0))));
              }
              if (succeeded)
              {
                MR_Word Var_24;
                MR_Word Var_25;

                {
                  Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_25, 0) = ((MR_Box) (Domain_12));
                  MR_hl_field(0, Var_25, 1) = ((MR_Box) (Range_13));
                }
                {
                  Var_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_24, 0) = ((MR_Box) (Var_25));
                  MR_hl_field(2, Var_24, 1) = ((MR_Box) (Context_9));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
                }
              }
              else
              {
                MR_Word Specs_14;
                MR_Word Var_26;
                MR_Word Var_27;

                Var_26 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[2]), MaybeDomain_10);
                Var_27 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[2]), MaybeRange_11);
                Specs_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_26, Var_27);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *Result_6 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Specs_14));
                }
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__parse_class__collect_superclass_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_class__collect_superclass_constraints_5_p_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Constraint_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Constraints_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_SimpleConstraints_40_40;
    MR_Word STATE_VARIABLE_FunDeps_41_41;
    MR_Word STATE_VARIABLE_Specs_42_42;

    parse_tree__parse_class__collect_superclass_constraints_5_p_0(VarSet_1, Constraints_9, &STATE_VARIABLE_SimpleConstraints_40_40, &STATE_VARIABLE_FunDeps_41_41, &STATE_VARIABLE_Specs_42_42);
    switch (MR_tag((MR_Word) Constraint_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeConstraint_13 = ((MR_Word) ((MR_hl_field(0, Constraint_8, (MR_Integer) 0))));
          MR_Word NonVarNonGroundTypes_15 = ((MR_Word) ((MR_hl_field(0, Constraint_8, (MR_Integer) 2))));
          MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, Constraint_8, (MR_Integer) 3))));

          if ((NonVarNonGroundTypes_15 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (TypeConstraint_13));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_SimpleConstraints_40_40));
            }
            *HeadVar__5_5 = STATE_VARIABLE_Specs_42_42;
          }
          else
          {
            MR_Word TVarSet_19;
            MR_Word SuperClassName_20;
            MR_Word BadTypeStrs_22;
            MR_Word BadTypesPieces_23;
            MR_Word BadTypeMsgPieces_25;
            MR_Word Pieces_29;
            MR_Word Spec_30;
            MR_Word Var_44;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_89;
            MR_Word Var_147;

            mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_1, &TVarSet_19);
            SuperClassName_20 = ((MR_Word) ((MR_hl_field(0, TypeConstraint_13, (MR_Integer) 0))));
            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_44, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_6[0]));
              MR_hl_field(0, Var_44, 1) = ((MR_Box) (parse_tree__parse_class__collect_superclass_constraints_5_p_0_1));
              MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_44, 3) = ((MR_Box) (TVarSet_19));
              MR_hl_field(0, Var_44, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            BadTypeStrs_22 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_44, NonVarNonGroundTypes_15);
            BadTypesPieces_23 = parse_tree__error_spec__quote_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), BadTypeStrs_22);
            Var_147 = ((MR_Word) ((MR_hl_field(1, NonVarNonGroundTypes_15, (MR_Integer) 1))));
            if ((Var_147 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_54;
              MR_Word Var_55;

              Var_55 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[86])));
              Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadTypesPieces_23, Var_55);
              BadTypeMsgPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[84])), Var_54);
            }
            else
            {
              MR_Word Var_65;
              MR_Word Var_66;

              Var_66 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[90])));
              Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadTypesPieces_23, Var_66);
              BadTypeMsgPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[88])), Var_65);
            }
            {
              Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_84, 1) = ((MR_Box) (SuperClassName_20));
            }
            {
              Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
              MR_hl_field(1, Var_83, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[98])));
            }
            Var_82 = parse_tree__error_spec__color_as_subject_1_f_0(Var_83);
            Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[100])), BadTypeMsgPieces_25);
            Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_82, Var_89);
            Pieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[96])), Var_81);
            {
              Spec_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.collect_superclass_constraints\'/5"));
              MR_hl_field(0, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, Spec_30, 3) = ((MR_Box) (Context_16));
              MR_hl_field(0, Spec_30, 4) = ((MR_Box) (Pieces_29));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_30));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_42_42));
            }
            *HeadVar__3_3 = STATE_VARIABLE_SimpleConstraints_40_40;
          }
          *HeadVar__4_4 = STATE_VARIABLE_FunDeps_41_41;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstVar_31 = ((MR_Word) ((MR_hl_field(1, Constraint_8, (MR_Integer) 0))));
          MR_Word Inst_32 = ((MR_Word) ((MR_hl_field(1, Constraint_8, (MR_Integer) 1))));
          MR_Word InstVarSet_33;
          MR_String InstConstraintStr_34;
          MR_Word Var_99;
          MR_Word Var_104;
          MR_Word Var_105;
          MR_Word Var_110;
          MR_Word Var_115;
          MR_Word Var_116;
          MR_Word Var_117;
          MR_Word Var_118;
          MR_Word Context_131 = ((MR_Word) ((MR_hl_field(1, Constraint_8, (MR_Integer) 2))));
          MR_Word Pieces_132;
          MR_Word Spec_133;

          mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_1, &InstVarSet_33);
          Var_99 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[3]), ((MR_Box) (InstVar_31)));
          InstConstraintStr_34 = parse_tree__parse_tree_out_inst__mercury_constrained_inst_vars_to_string_4_f_0((MR_Integer) 0, InstVarSet_33, Var_99, Inst_32);
          Var_105 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[80])));
          {
            Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_118, 1) = ((MR_Box) (InstConstraintStr_34));
          }
          {
            Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
            MR_hl_field(1, Var_117, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[30])));
          }
          Var_116 = parse_tree__error_spec__color_as_subject_1_f_0(Var_117);
          Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_116, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[33])));
          Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[82])), Var_115);
          Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, Var_110);
          Pieces_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[78])), Var_104);
          {
            Spec_133 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_133, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.collect_superclass_constraints\'/5"));
            MR_hl_field(0, Spec_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_133, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_133, 3) = ((MR_Box) (Context_131));
            MR_hl_field(0, Spec_133, 4) = ((MR_Box) (Pieces_132));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_133));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_42_42));
          }
          *HeadVar__3_3 = STATE_VARIABLE_SimpleConstraints_40_40;
          *HeadVar__4_4 = STATE_VARIABLE_FunDeps_41_41;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FunDep_35 = ((MR_Word) ((MR_hl_field(2, Constraint_8, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (FunDep_35));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_FunDeps_41_41));
          }
          *HeadVar__3_3 = STATE_VARIABLE_SimpleConstraints_40_40;
          *HeadVar__5_5 = STATE_VARIABLE_Specs_42_42;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_unconstrained_class_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_68;

  parse_tree__parse_class__IntroducedFrom__pred__parse_unconstrained_class__399__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_68);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_68));
}

static void MR_CALL 
parse_tree__parse_class__parse_unconstrained_class_6_p_0(
  MR_Word ModuleName_7,
  MR_Word TVarSet_8,
  MR_Word NameTerm_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeTypeClassInfo_12)
{
  MR_bool succeeded;
  MR_Word ContextPieces_13;
  MR_Word VarSet_14;
  MR_Word Spec_15;

  ContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[101]))));
  mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_8, &VarSet_14);
  succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_14, (MR_Word) ((MR_Unsigned) 0U), NameTerm_9, &Spec_15);
  if (succeeded)
  {
    MR_Word Var_30;

    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeTypeClassInfo_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
    }
  }
  else
  {
    MR_Word MaybeClassName_16;

    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_7, VarSet_14, ContextPieces_13, NameTerm_9, &MaybeClassName_16);
    if (((MR_tag((MR_Word) MaybeClassName_16)) == (MR_Integer) 0))
    {
      MR_Word Specs_63 = ((MR_Word) ((MR_hl_field(0, MaybeClassName_16, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTypeClassInfo_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_63));
      }
    }
    else
    {
      MR_Word ClassName_17 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_16, (MR_Integer) 0))));
      MR_Word ArgTerms0_18 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_16, (MR_Integer) 1))));
      MR_Word ArgTerms_19;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_class_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_class_scalar_common_2[4]), ArgTerms0_18, &ArgTerms_19);
      if ((ArgTerms_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_20;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Spec_60;

        Var_38 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[107])));
        Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[33])));
        Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[103])), Var_37);
        Var_52 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NameTerm_9);
        {
          Spec_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_60, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_unconstrained_class\'/6"));
          MR_hl_field(0, Spec_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_60, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_60, 3) = ((MR_Box) (Var_52));
          MR_hl_field(0, Spec_60, 4) = ((MR_Box) (Pieces_20));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (Spec_60));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTypeClassInfo_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_53));
        }
      }
      else
      {
        MR_Word MaybeVars_23;

        parse_tree__parse_util__terms_to_distinct_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_8, (MR_String) "a", (MR_String) "typeclass declaration", ArgTerms_19, &MaybeVars_23);
        if (((MR_tag((MR_Word) MaybeVars_23)) == (MR_Integer) 0))
          *MaybeTypeClassInfo_12 = (MR_Word) (MaybeVars_23);
        else
        {
          MR_Word Vars_24 = ((MR_Word) ((MR_hl_field(1, MaybeVars_23, (MR_Integer) 0))));
          MR_Word TypeClassInfo_25;

          {
            TypeClassInfo_25 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeClassInfo_25, 0) = ((MR_Box) (ClassName_17));
            MR_hl_field(0, TypeClassInfo_25, 1) = ((MR_Box) (Vars_24));
            MR_hl_field(0, TypeClassInfo_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, TypeClassInfo_25, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, TypeClassInfo_25, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, TypeClassInfo_25, 5) = ((MR_Box) (TVarSet_8));
            MR_hl_field(0, TypeClassInfo_25, 6) = ((MR_Box) (Context_10));
            MR_hl_field(0, TypeClassInfo_25, 7) = ((MR_Box) (SeqNum_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeTypeClassInfo_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (TypeClassInfo_25));
          }
        }
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_class__tvars_in_fundeps_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__parse_class__tvars_in_fundep_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
parse_tree__parse_class__tvars_in_fundeps_1_f_0(
  MR_Word FunDeps_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;

  Var_4 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0), (MR_Word) (&parse_tree__parse_class_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_class_scalar_common_2[3]), FunDeps_3);
  HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Var_4);
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_class____Unify____arbitrary_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_class____Compare____arbitrary_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_class____Unify____arbitrary_constraints_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_class____Compare____arbitrary_constraints_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____maybe_class_and_inst_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_class____Unify____maybe_class_and_inst_constraints_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_class____Compare____maybe_class_and_inst_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_class____Compare____maybe_class_and_inst_constraints_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_class__init(void)
{
}

void mercury__parse_tree__parse_class__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0);
	MR_register_type_ctor_info(&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraints_0);
	MR_register_type_ctor_info(&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_maybe_class_and_inst_constraints_0);
}

void mercury__parse_tree__parse_class__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_class__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_class.
