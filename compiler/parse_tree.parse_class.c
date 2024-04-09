/*
** Automatically generated from `parse_class.m'
** by the Mercury compiler,
** version rotd-2024-04-09
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
#include "term_subst.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

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

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__check_tvars_in_instance_constraint__637__1_2_f_0(
  MR_Word TVarSet_12,
  MR_Word HeadVar__2_52);

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__check_tvars_in_instance_constraint__634__1_2_p_0(
  MR_Word TypesVars_17,
  MR_Word HeadVar__2_47);

static void MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_unconstrained_class__384__1_2_p_0(
  MR_Word HeadVar__1_72,
  MR_Word * HeadVar__2_73);

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__234__1_2_f_0(
  MR_Word HeadVar__1_163,
  MR_Word HeadVar__2_154);

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__231__1_2_f_0(
  MR_Word HeadVar__1_163,
  MR_Word HeadVar__2_151);

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__192__1_2_p_0(
  MR_Word Params_26,
  MR_Word HeadVar__2_146);

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__190__1_2_p_0(
  MR_Word Params_26,
  MR_Word HeadVar__2_144);

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
parse_tree__parse_class__parse_instance_item_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
parse_tree__parse_class__parse_instance_name_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class__parse_instance_name_6_p_0(
  MR_Word ModuleName_7,
  MR_Word TVarSet_8,
  MR_Word ArgTerm_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeItemInstanceInfo_12);

static void MR_CALL 
parse_tree__parse_class__parse_underived_instance_6_p_0(
  MR_Word ModuleName_7,
  MR_Word TVarSet_8,
  MR_Word NameTerm_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeItemInstanceInfo_12);

static void MR_CALL 
parse_tree__parse_class__parse_typeclass_item_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
parse_tree__parse_class__parse_constrained_class_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
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
parse_tree__parse_class__parse_fundep_2_p_0(
  MR_Word Term_3,
  MR_Word * Result_4);

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


static /* final */ const MR_Box parse_tree__parse_class_scalar_common_1[138][2];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_2[8][3];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_3[1][4];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_4[2][1];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_5[5][5];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_6[3][7];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_7[1][6];




static /* final */ const MR_Box parse_tree__parse_class_scalar_common_1[138][2] = {
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
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where [method_signature_1, ... method_signature_m]"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "optionally followed by"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- typeclass tcname(T1, ... Tn)"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "typeclass"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[27])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where [method_spec_1, ... method_spec_m]"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[15])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- instance tcname(type1, ... typen)"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[35])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "instance"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and ground types."))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[13])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "constraints may only constrain type variables"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in typeclass declarations."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[13])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: functional dependencies are only allowed"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the superclass constraint"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in superclass constraints"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the functional dependency"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in functional dependencies"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: type variable"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not a parameter of this type class."))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: type variables"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are not parameters of this type class."))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a class declaration"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not contain an inst constraint such as"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The type"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is neither."))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[13])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The types"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are neither."))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[13])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: in a superclass constraint,"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "all the argument types of the superclass,"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which in this case is"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must be either type variables or ground types."))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[83])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In typeclass declaration:"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "at least one class parameter."))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[13])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: typeclass declarations require"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[88])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "as class parameters."))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[13])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected distinct variables"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[92])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected a list of class methods."))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[13])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may only constrain type variables and ground types."))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[13])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: constraints on instance declarations"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In instance declaration:"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: unbound type variable"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[102]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: unbound type variables"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[104]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in constraints on instance declaration."))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[13])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected list of instance methods."))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[13])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<Name> / <Arity>) is <InstanceMethod>"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<Name> / <Arity>) is <InstanceMethod>"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<Name> / <Arity>) is <InstanceName>"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<Name> / <Arity>) is <InstanceName>"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected clause or"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a non-variable inst such as"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of an inst constraint."))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[13])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not be the subject"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of an inst constraint:"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[123]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the constraining inst"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[124])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In class constraint:"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "as class name or inst constraint."))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[13])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected atom"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[129])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must be comma-separated lists of variables."))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[13])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of a functional dependency"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the domain and range"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[135])))
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
    ((MR_Box) (parse_tree__parse_class__parse_unconstrained_class_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_5[1])),
    ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_class__parse_class_head_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_5[3])),
    ((MR_Box) (parse_tree__parse_class__parse_instance_name_6_p_0_1)),
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
  { (MR_Box) ((MR_Unsigned) 9U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_5[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)),
    ((MR_Box) (&parse_tree__parse_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


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

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
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

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__check_tvars_in_instance_constraint__637__1_2_f_0(
  MR_Word TVarSet_12,
  MR_Word HeadVar__2_52)
{
  MR_String HeadVar__3_53;

  HeadVar__3_53 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_12, HeadVar__2_52);
  return HeadVar__3_53;
}

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__check_tvars_in_instance_constraint__634__1_2_p_0(
  MR_Word TypesVars_17,
  MR_Word HeadVar__2_47)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), TypesVars_17, ((MR_Box) (HeadVar__2_47)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_unconstrained_class__384__1_2_p_0(
  MR_Word HeadVar__1_72,
  MR_Word * HeadVar__2_73)
{
  mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_72, HeadVar__2_73);
}

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__234__1_2_f_0(
  MR_Word HeadVar__1_163,
  MR_Word HeadVar__2_154)
{
  MR_String HeadVar__3_155;

  HeadVar__3_155 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_163, HeadVar__2_154);
  return HeadVar__3_155;
}

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__231__1_2_f_0(
  MR_Word HeadVar__1_163,
  MR_Word HeadVar__2_151)
{
  MR_String HeadVar__3_152;

  HeadVar__3_152 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_163, HeadVar__2_151);
  return HeadVar__3_152;
}

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__192__1_2_p_0(
  MR_Word Params_26,
  MR_Word HeadVar__2_146)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Params_26, ((MR_Box) (HeadVar__2_146)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__190__1_2_p_0(
  MR_Word Params_26,
  MR_Word HeadVar__2_144)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Params_26, ((MR_Box) (HeadVar__2_144)));
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
        MR_Word Var_63;
        MR_Word Var_66;
        MR_Word Var_69;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_83;
        MR_Word Var_84;

        MethodTermStr_23 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, MethodTerm_7);
        {
          Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_73, 1) = ((MR_Box) (MethodTermStr_23));
        }
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[15])));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[112])));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[84])));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[111])));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_66));
        }
        {
          Pieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_24, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[110])));
          MR_hl_field(1, Pieces_24, 1) = ((MR_Box) (Var_63));
        }
        Var_83 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodTerm_7);
        {
          Spec_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.term_to_instance_method\'/4"));
          MR_hl_field(1, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_25, 3) = ((MR_Box) (Var_83));
          MR_hl_field(1, Spec_25, 4) = ((MR_Box) (Pieces_24));
        }
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (Spec_25));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeInstanceMethod_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_84));
        }
      }
    }
    else
    {
      MR_Word FuncNameTerm_27;
      MR_Word ArityTerm_180;
      MR_Word Var_86;
      MR_String Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_String Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word SlashTerm_161;

      succeeded = ((MR_tag((MR_Word) ClassMethodTerm_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_86 = ((MR_Word) ((MR_hl_field(0, ClassMethodTerm_9, (MR_Integer) 0))));
        Var_88 = ((MR_Word) ((MR_hl_field(0, ClassMethodTerm_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_86)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_87 = ((MR_String) ((MR_hl_field(0, Var_86, (MR_Integer) 0))));
          succeeded = (strcmp(Var_87, (MR_String) "func") == 0);
          if (succeeded)
          {
            succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SlashTerm_161 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 0))));
              Var_89 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 1))));
              succeeded = (Var_89 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) SlashTerm_161)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_90 = ((MR_Word) ((MR_hl_field(0, SlashTerm_161, (MR_Integer) 0))));
                  Var_92 = ((MR_Word) ((MR_hl_field(0, SlashTerm_161, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_90)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_91 = ((MR_String) ((MR_hl_field(0, Var_90, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_91, (MR_String) "/") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_92 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        FuncNameTerm_27 = ((MR_Word) ((MR_hl_field(1, Var_92, (MR_Integer) 0))));
                        Var_93 = ((MR_Word) ((MR_hl_field(1, Var_92, (MR_Integer) 1))));
                        succeeded = (Var_93 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ArityTerm_180 = ((MR_Word) ((MR_hl_field(1, Var_93, (MR_Integer) 0))));
                          Var_94 = ((MR_Word) ((MR_hl_field(1, Var_93, (MR_Integer) 1))));
                          succeeded = (Var_94 == (MR_Word) ((MR_Unsigned) 0U));
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
        MR_Integer ArityInt_168;
        MR_Word InstanceMethodName_169;

        succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FuncNameTerm_27, &FuncSymName_29);
        if (succeeded)
        {
          succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArityTerm_180, &ArityInt_168);
          if (succeeded)
            succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), InstanceMethodTerm_10, &InstanceMethodName_169);
        }
        if (succeeded)
        {
          MR_Word Var_96;
          MR_Word ProcDef_162;
          MR_Word MethodName_163;
          MR_Word InstanceMethod_164;

          {
            ProcDef_162 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ProcDef_162, 0) = ((MR_Box) (InstanceMethodName_169));
          }
          Var_96 = (MR_Word) (ArityInt_168);
          {
            MethodName_163 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MethodName_163, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(0, MethodName_163, 1) = ((MR_Box) (FuncSymName_29));
            MR_hl_field(0, MethodName_163, 2) = ((MR_Box) (Var_96));
          }
          {
            InstanceMethod_164 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, InstanceMethod_164, 0) = ((MR_Box) (MethodName_163));
            MR_hl_field(0, InstanceMethod_164, 1) = ((MR_Box) (ProcDef_162));
            MR_hl_field(0, InstanceMethod_164, 2) = ((MR_Box) (TermContext_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeInstanceMethod_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (InstanceMethod_164));
          }
        }
        else
        {
          MR_Word Var_99;
          MR_Word Var_102;
          MR_Word Var_105;
          MR_Word Var_108;
          MR_Word Var_109;
          MR_Word Var_119;
          MR_Word Var_120;
          MR_String MethodTermStr_165;
          MR_Word Pieces_166;
          MR_Word Spec_167;

          MethodTermStr_165 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, MethodTerm_7);
          {
            Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_109, 1) = ((MR_Box) (MethodTermStr_165));
          }
          {
            Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_108, 0) = ((MR_Box) (Var_109));
            MR_hl_field(1, Var_108, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[15])));
          }
          {
            Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_105, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[112])));
            MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_108));
          }
          {
            Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_102, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[84])));
            MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_105));
          }
          {
            Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_99, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[113])));
            MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_102));
          }
          {
            Pieces_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_166, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[110])));
            MR_hl_field(1, Pieces_166, 1) = ((MR_Box) (Var_99));
          }
          Var_119 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodTerm_7);
          {
            Spec_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_167, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.term_to_instance_method\'/4"));
            MR_hl_field(1, Spec_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_167, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(1, Spec_167, 3) = ((MR_Box) (Var_119));
            MR_hl_field(1, Spec_167, 4) = ((MR_Box) (Pieces_166));
          }
          {
            Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_120, 0) = ((MR_Box) (Spec_167));
            MR_hl_field(1, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeInstanceMethod_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_120));
          }
        }
      }
      else
      {
        MR_Word Var_124;
        MR_Word Var_127;
        MR_Word Var_130;
        MR_Word Var_133;
        MR_Word Var_136;
        MR_Word Var_139;
        MR_Word Var_140;
        MR_Word Var_150;
        MR_Word Var_151;
        MR_String MethodTermStr_176;
        MR_Word Pieces_177;
        MR_Word Spec_178;

        MethodTermStr_176 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, MethodTerm_7);
        {
          Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_140, 1) = ((MR_Box) (MethodTermStr_176));
        }
        {
          Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
          MR_hl_field(1, Var_139, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[15])));
        }
        {
          Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_136, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[112])));
          MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_139));
        }
        {
          Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_133, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[84])));
          MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_136));
        }
        {
          Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_130, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[116])));
          MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_133));
        }
        {
          Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_127, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[115])));
          MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_130));
        }
        {
          Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_124, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[114])));
          MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_127));
        }
        {
          Pieces_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_177, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[110])));
          MR_hl_field(1, Pieces_177, 1) = ((MR_Box) (Var_124));
        }
        Var_150 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodTerm_7);
        {
          Spec_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_178, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.term_to_instance_method\'/4"));
          MR_hl_field(1, Spec_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_178, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_178, 3) = ((MR_Box) (Var_150));
          MR_hl_field(1, Spec_178, 4) = ((MR_Box) (Pieces_177));
        }
        {
          Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_151, 0) = ((MR_Box) (Spec_178));
          MR_hl_field(1, Var_151, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeInstanceMethod_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_151));
        }
      }
    }
  }
  else
  {
    MR_Word Var_153;
    MR_String Var_154;
    MR_Word Var_155;
    MR_Word Var_156;

    succeeded = ((MR_tag((MR_Word) MethodTerm_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_153 = ((MR_Word) ((MR_hl_field(0, MethodTerm_7, (MR_Integer) 0))));
      Var_155 = ((MR_Word) ((MR_hl_field(0, MethodTerm_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_153)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_154 = ((MR_String) ((MR_hl_field(0, Var_153, (MR_Integer) 0))));
        succeeded = (strcmp(Var_154, (MR_String) ":-") == 0);
        if (succeeded)
        {
          succeeded = (Var_155 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_156 = ((MR_Word) ((MR_hl_field(1, Var_155, (MR_Integer) 1))));
            succeeded = (Var_156 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_157;
      MR_Word Spec_189;

      Spec_189 = parse_tree__parse_class__report_unexpected_method_term_2_f_0(VarSet_6, MethodTerm_7);
      {
        Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_157, 0) = ((MR_Box) (Spec_189));
        MR_hl_field(1, Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeInstanceMethod_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_157));
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
        MR_Word ProcDef_190;
        MR_Word MethodName_191;
        MR_Word InstanceMethod_192;

        PredFormArity_41 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[9]), ArgTerms_36);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_34, &UserArity_42, PredFormArity_41);
        ClauseCord_43 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ((MR_Box) (ItemClause_33)));
        {
          ProcDef_190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ProcDef_190, 0) = ((MR_Box) (ClauseCord_43));
        }
        {
          MethodName_191 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MethodName_191, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_34));
          MR_hl_field(0, MethodName_191, 1) = ((MR_Box) (MethodSymName_35));
          MR_hl_field(0, MethodName_191, 2) = ((MR_Box) (UserArity_42));
        }
        {
          InstanceMethod_192 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InstanceMethod_192, 0) = ((MR_Box) (MethodName_191));
          MR_hl_field(0, InstanceMethod_192, 1) = ((MR_Box) (ProcDef_190));
          MR_hl_field(0, InstanceMethod_192, 2) = ((MR_Box) (Context_39));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeInstanceMethod_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (InstanceMethod_192));
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
  MR_Word Var_11;
  MR_Word Var_14;
  MR_Word Var_17;
  MR_Word Var_20;
  MR_Word Var_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_37;

  MethodTermStr_7 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, MethodTerm_5);
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (MethodTermStr_7));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[15])));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[112])));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[84])));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[116])));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[115])));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_17));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[114])));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_14));
  }
  {
    Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[117])));
    MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_11));
  }
  Var_37 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodTerm_5);
  {
    Spec_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_class.report_unexpected_method_term\'/2"));
    MR_hl_field(1, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(1, Spec_6, 3) = ((MR_Box) (Var_37));
    MR_hl_field(1, Spec_6, 4) = ((MR_Box) (Pieces_8));
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
  MR_Word HeadConstraintTerm_37;
  MR_Word TailConstraintTerms_38;
  MR_Word Var_39;

  parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7, &Var_39);
  HeadConstraintTerm_37 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 0))));
  TailConstraintTerms_38 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 1))));
  parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(VarSet_6, HeadConstraintTerm_37, TailConstraintTerms_38, &Result0_9);
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
      MR_Word Spec_19;
      MR_Word Var_33;
      MR_Word Var_34;

      Var_33 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7);
      {
        Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_class_and_inst_constraints\'/4"));
        MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_19, 3) = ((MR_Box) (Var_33));
        MR_hl_field(1, Spec_19, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[50])));
      }
      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (Spec_19));
        MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_34));
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
  MR_Word Result0_10;
  MR_Word HeadConstraintTerm_28;
  MR_Word TailConstraintTerms_29;
  MR_Word Var_30;

  parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7, &Var_30);
  HeadConstraintTerm_28 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
  TailConstraintTerms_29 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 1))));
  parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(VarSet_6, HeadConstraintTerm_28, TailConstraintTerms_29, &Result0_10);
  if (((MR_tag((MR_Word) Result0_10)) == (MR_Integer) 0))
    *Result_8 = (MR_Word) (Result0_10);
  else
  {
    MR_Word HeadArbConstraint_11;
    MR_Word TailArbConstraints_12;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, Result0_10, (MR_Integer) 0))));
    MR_Word HeadConstraint_13;
    MR_Word TailConstraints_14;
    MR_Word TypeCtorInfo_29_25;
    MR_Word TypeCtorInfo_30_26;
    MR_Word Var_18;
    MR_Word Var_34;

    HeadArbConstraint_11 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
    TailArbConstraints_12 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) HeadArbConstraint_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      HeadConstraint_13 = ((MR_Word) ((MR_hl_field(0, HeadArbConstraint_11, (MR_Integer) 0))));
      Var_34 = ((MR_Word) ((MR_hl_field(0, HeadArbConstraint_11, (MR_Integer) 2))));
      succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_18 = (MR_Word) (&parse_tree__parse_class_scalar_common_2[7]);
        TypeCtorInfo_29_25 = (MR_Word) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0);
        TypeCtorInfo_30_26 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0);
        succeeded = mercury__list__map_3_p_2(TypeCtorInfo_29_25, TypeCtorInfo_30_26, Var_18, TailArbConstraints_12, &TailConstraints_14);
      }
    }
    if (succeeded)
    {
      MR_Word Var_19;

      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = ((MR_Box) (HeadConstraint_13));
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (TailConstraints_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_19));
      }
    }
    else
    {
      MR_Word Context_15;
      MR_Word Spec_16;
      MR_Word Var_23;

      Context_15 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7);
      {
        Spec_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_simple_class_constraints\'/5"));
        MR_hl_field(1, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_16, 3) = ((MR_Box) (Context_15));
        MR_hl_field(1, Spec_16, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[46])));
      }
      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_instance_item_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeInstanceMethod_8;

  parse_tree__parse_class__term_to_instance_method_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeInstanceMethod_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeInstanceMethod_8));
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
    MR_Word NameTerm_15;
    MR_Word MethodsTerm_16;
    MR_Word Var_28;
    MR_Word Var_24;
    MR_String Var_25;
    MR_Word Var_26;
    MR_Word Var_27;

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
    {
      MR_Word MaybeItemInstanceInfo0_64;
      MR_Word MaybeInstanceMethods_65;
      MR_Word MethodList_99;
      MR_Word ItemInstanceInfo0_66;
      MR_Word InstanceMethods_67;

      parse_tree__parse_class__parse_instance_name_6_p_0(ModuleName_7, TVarSet_14, NameTerm_15, Context_10, SeqNum_11, &MaybeItemInstanceInfo0_64);
      succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(MethodsTerm_16, &MethodList_99);
      if (succeeded)
      {
        MR_Word Interface_100;
        MR_Word Var_103;
        MR_Word Results_114;
        MR_Word Specs_115;

        {
          Var_103 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_103, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_6[2]));
          MR_hl_field(0, Var_103, 1) = ((MR_Box) (parse_tree__parse_class__parse_instance_item_6_p_0_1));
          MR_hl_field(0, Var_103, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_103, 3) = ((MR_Box) (ModuleName_7));
          MR_hl_field(0, Var_103, 4) = ((MR_Box) (VarSet_8));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_class_scalar_common_2[1]), Var_103, MethodList_99, &Interface_100);
        parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(Interface_100, (MR_Word) ((MR_Unsigned) 0U), &Results_114, (MR_Word) ((MR_Unsigned) 0U), &Specs_115);
        if ((Specs_115 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MaybeInstanceMethods_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeInstanceMethods_65, 0) = ((MR_Box) (Results_114));
          }
        else
          {
            MaybeInstanceMethods_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MaybeInstanceMethods_65, 0) = ((MR_Box) (Specs_115));
          }
      }
      else
      {
        MR_Word Spec_102;
        MR_Word Var_107;
        MR_Word Var_108;

        Var_107 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodsTerm_16);
        {
          Spec_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_102, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_instance_methods\'/4"));
          MR_hl_field(1, Spec_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_102, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_102, 3) = ((MR_Box) (Var_107));
          MR_hl_field(1, Spec_102, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[109])));
        }
        {
          Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_108, 0) = ((MR_Box) (Spec_102));
          MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_28));
        }
        {
          MaybeInstanceMethods_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeInstanceMethods_65, 0) = ((MR_Box) (Var_108));
        }
      }
      succeeded = ((MR_tag((MR_Word) MaybeItemInstanceInfo0_64)) == (MR_Integer) 1);
      if (succeeded)
      {
        ItemInstanceInfo0_66 = ((MR_Word) ((MR_hl_field(1, MaybeItemInstanceInfo0_64, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeInstanceMethods_65)) == (MR_Integer) 1);
        if (succeeded)
          InstanceMethods_67 = ((MR_Word) ((MR_hl_field(1, MaybeInstanceMethods_65, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word ItemInstanceInfo_68;
        MR_Word MaybeCheckSpec_69;
        MR_Word Var_73;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;

        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (InstanceMethods_67));
        }
        Var_78 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_66, (MR_Integer) 0))));
        Var_79 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_66, (MR_Integer) 1))));
        Var_80 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_66, (MR_Integer) 2))));
        Var_81 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_66, (MR_Integer) 3))));
        Var_84 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_66, (MR_Integer) 6))));
        Var_85 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_66, (MR_Integer) 7))));
        Var_86 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_66, (MR_Integer) 8))));
        {
          ItemInstanceInfo_68 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemInstanceInfo_68, 0) = ((MR_Box) (Var_78));
          MR_hl_field(0, ItemInstanceInfo_68, 1) = ((MR_Box) (Var_79));
          MR_hl_field(0, ItemInstanceInfo_68, 2) = ((MR_Box) (Var_80));
          MR_hl_field(0, ItemInstanceInfo_68, 3) = ((MR_Box) (Var_81));
          MR_hl_field(0, ItemInstanceInfo_68, 4) = ((MR_Box) (Var_73));
          MR_hl_field(0, ItemInstanceInfo_68, 5) = ((MR_Box) (TVarSet_14));
          MR_hl_field(0, ItemInstanceInfo_68, 6) = ((MR_Box) (Var_84));
          MR_hl_field(0, ItemInstanceInfo_68, 7) = ((MR_Box) (Var_85));
          MR_hl_field(0, ItemInstanceInfo_68, 8) = ((MR_Box) (Var_86));
        }
        parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0(ItemInstanceInfo_68, NameTerm_15, &MaybeCheckSpec_69);
        if ((MaybeCheckSpec_69 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_29;
          MR_Word Var_30;

          {
            Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(3, Var_30, 1) = ((MR_Box) (ItemInstanceInfo_68));
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
        else
        {
          MR_Word Spec_70 = ((MR_Word) ((MR_hl_field(1, MaybeCheckSpec_69, (MR_Integer) 0))));
          MR_Word Var_74;
          MR_Word MaybeItemInstanceInfo_131;

          {
            Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_74, 0) = ((MR_Box) (Spec_70));
            MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_28));
          }
          {
            MaybeItemInstanceInfo_131 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MaybeItemInstanceInfo_131, 0) = ((MR_Box) (Var_74));
          }
          *MaybeIOM_12 = (MR_Word) (MaybeItemInstanceInfo_131);
        }
      }
      else
      {
        MR_Word Specs_71;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word MaybeItemInstanceInfo_130;

        Var_76 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), MaybeItemInstanceInfo0_64);
        Var_77 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[8]), MaybeInstanceMethods_65);
        Specs_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_76, Var_77);
        {
          MaybeItemInstanceInfo_130 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeItemInstanceInfo_130, 0) = ((MR_Box) (Specs_71));
        }
        *MaybeIOM_12 = (MR_Word) (MaybeItemInstanceInfo_130);
      }
    }
    else
    {
      MR_Word MaybeItemInstanceInfo_126;

      parse_tree__parse_class__parse_instance_name_6_p_0(ModuleName_7, TVarSet_14, ArgTerm_13, Context_10, SeqNum_11, &MaybeItemInstanceInfo_126);
      if (((MR_tag((MR_Word) MaybeItemInstanceInfo_126)) == (MR_Integer) 0))
        *MaybeIOM_12 = (MR_Word) (MaybeItemInstanceInfo_126);
      else
      {
        MR_Word ItemInstanceInfo_120 = ((MR_Word) ((MR_hl_field(1, MaybeItemInstanceInfo_126, (MR_Integer) 0))));
        MR_Word Var_121;
        MR_Word Var_122;

        {
          Var_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_122, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(3, Var_122, 1) = ((MR_Box) (ItemInstanceInfo_120));
        }
        {
          Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_122));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_121));
        }
      }
    }
  }
  else
  {
    MR_Word Spec_22;
    MR_Word Var_60;

    {
      Spec_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_instance_item\'/6"));
      MR_hl_field(1, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_22, 3) = ((MR_Box) (Context_10));
      MR_hl_field(1, Spec_22, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[40])));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_60));
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
  MR_String conv0_HeadVar__3_53;

  conv0_HeadVar__3_53 = parse_tree__parse_class__IntroducedFrom__func__check_tvars_in_instance_constraint__637__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_53));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_class__IntroducedFrom__pred__check_tvars_in_instance_constraint__634__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word UnboundTVarStrs_22;
    MR_Word UnboundTVarPieces_23;
    MR_Word Prefix_24;
    MR_Word Pieces_25;
    MR_Word Spec_26;
    MR_Word Var_28;
    MR_Word Var_36;
    MR_Word Var_46;
    MR_Integer Var_29;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_7[0]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_2));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (TVarSet_12));
    }
    UnboundTVarStrs_22 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28, UnboundTVars_19);
    UnboundTVarPieces_23 = parse_tree__error_spec__list_to_pieces_1_f_0(UnboundTVarStrs_22);
    Var_29 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), UnboundTVars_19);
    succeeded = (Var_29 == (MR_Integer) 1);
    if (succeeded)
      Prefix_24 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[103]));
    else
      Prefix_24 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[105]));
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UnboundTVarPieces_23, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[107])));
    Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Prefix_24, Var_36);
    Var_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NameTerm_5);
    {
      Spec_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.check_tvars_in_instance_constraint\'/3"));
      MR_hl_field(1, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_26, 3) = ((MR_Box) (Var_46));
      MR_hl_field(1, Spec_26, 4) = ((MR_Box) (Pieces_25));
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
parse_tree__parse_class__parse_instance_name_6_p_0_1(
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
parse_tree__parse_class__parse_instance_name_6_p_0(
  MR_Word ModuleName_7,
  MR_Word TVarSet_8,
  MR_Word ArgTerm_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeItemInstanceInfo_12)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ArgTerm_9)) == (MR_Integer) 0);
  MR_Word NameTerm_13;
  MR_Word ConstraintsTerm_14;
  MR_Word Var_16;
  MR_String Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;

  if (succeeded)
  {
    Var_16 = ((MR_Word) ((MR_hl_field(0, ArgTerm_9, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(0, ArgTerm_9, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_String) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
      succeeded = (strcmp(Var_17, (MR_String) "<=") == 0);
      if (succeeded)
      {
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NameTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ConstraintsTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word VarSet_21;
    MR_Word MaybeItemInstanceInfo0_22;
    MR_Word MaybeInstanceConstraints_23;
    MR_Word NameContextPieces_44;
    MR_Word VarSet_45;
    MR_Word Result0_70;
    MR_Word HeadConstraintTerm_88;
    MR_Word TailConstraintTerms_89;
    MR_Word Var_90;
    MR_Word Spec_46;
    MR_Word ItemInstanceInfo0_24;
    MR_Word InstanceConstraints_25;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_8, &VarSet_21);
    NameContextPieces_44 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[101]))));
    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_8, &VarSet_45);
    succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_45, (MR_Word) ((MR_Unsigned) 4U), NameTerm_13, &Spec_46);
    if (succeeded)
    {
      MR_Word Var_58;

      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (Spec_46));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeItemInstanceInfo0_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeItemInstanceInfo0_22, 0) = ((MR_Box) (Var_58));
      }
    }
    else
    {
      MR_Word MaybeClassName_47;

      parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_45, NameContextPieces_44, NameTerm_13, &MaybeClassName_47);
      if (((MR_tag((MR_Word) MaybeClassName_47)) == (MR_Integer) 0))
      {
        MR_Word Specs_65 = ((MR_Word) ((MR_hl_field(0, MaybeClassName_47, (MR_Integer) 0))));

        {
          MaybeItemInstanceInfo0_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeItemInstanceInfo0_22, 0) = ((MR_Box) (Specs_65));
        }
      }
      else
      {
        MR_Word ClassName_48 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_47, (MR_Integer) 0))));
        MR_Word TypeTerms_49 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_47, (MR_Integer) 1))));
        MR_Word MaybeTypes_51;

        parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_4[0])), VarSet_45, NameContextPieces_44, TypeTerms_49, &MaybeTypes_51);
        if (((MR_tag((MR_Word) MaybeTypes_51)) == (MR_Integer) 0))
          MaybeItemInstanceInfo0_22 = (MR_Word) (MaybeTypes_51);
        else
        {
          MR_Word Types_52 = ((MR_Word) ((MR_hl_field(1, MaybeTypes_51, (MR_Integer) 0))));
          MR_Word ItemInstanceInfo_53;

          {
            ItemInstanceInfo_53 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ItemInstanceInfo_53, 0) = ((MR_Box) (ClassName_48));
            MR_hl_field(0, ItemInstanceInfo_53, 1) = ((MR_Box) (Types_52));
            MR_hl_field(0, ItemInstanceInfo_53, 2) = ((MR_Box) (Types_52));
            MR_hl_field(0, ItemInstanceInfo_53, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ItemInstanceInfo_53, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ItemInstanceInfo_53, 5) = ((MR_Box) (TVarSet_8));
            MR_hl_field(0, ItemInstanceInfo_53, 6) = ((MR_Box) (ModuleName_7));
            MR_hl_field(0, ItemInstanceInfo_53, 7) = ((MR_Box) (Context_10));
            MR_hl_field(0, ItemInstanceInfo_53, 8) = ((MR_Box) (SeqNum_11));
          }
          {
            MaybeItemInstanceInfo0_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeItemInstanceInfo0_22, 0) = ((MR_Box) (ItemInstanceInfo_53));
          }
        }
      }
    }
    parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_14, &Var_90);
    HeadConstraintTerm_88 = ((MR_Word) ((MR_hl_field(0, Var_90, (MR_Integer) 0))));
    TailConstraintTerms_89 = ((MR_Word) ((MR_hl_field(0, Var_90, (MR_Integer) 1))));
    parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(VarSet_21, HeadConstraintTerm_88, TailConstraintTerms_89, &Result0_70);
    if (((MR_tag((MR_Word) Result0_70)) == (MR_Integer) 0))
      MaybeInstanceConstraints_23 = (MR_Word) (Result0_70);
    else
    {
      MR_Word HeadArbConstraint_71;
      MR_Word TailArbConstraints_72;
      MR_Word Var_77 = ((MR_Word) ((MR_hl_field(1, Result0_70, (MR_Integer) 0))));
      MR_Word HeadConstraint_73;
      MR_Word TailConstraints_74;
      MR_Word TypeCtorInfo_29_85;
      MR_Word TypeCtorInfo_30_86;
      MR_Word Var_78;
      MR_Word Var_94;

      HeadArbConstraint_71 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 0))));
      TailArbConstraints_72 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) HeadArbConstraint_71)) == (MR_Integer) 0);
      if (succeeded)
      {
        HeadConstraint_73 = ((MR_Word) ((MR_hl_field(0, HeadArbConstraint_71, (MR_Integer) 0))));
        Var_94 = ((MR_Word) ((MR_hl_field(0, HeadArbConstraint_71, (MR_Integer) 2))));
        succeeded = (Var_94 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_78 = (MR_Word) (&parse_tree__parse_class_scalar_common_2[6]);
          TypeCtorInfo_29_85 = (MR_Word) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0);
          TypeCtorInfo_30_86 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0);
          succeeded = mercury__list__map_3_p_2(TypeCtorInfo_29_85, TypeCtorInfo_30_86, Var_78, TailArbConstraints_72, &TailConstraints_74);
        }
      }
      if (succeeded)
      {
        MR_Word Var_79;

        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (HeadConstraint_73));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) (TailConstraints_74));
        }
        {
          MaybeInstanceConstraints_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeInstanceConstraints_23, 0) = ((MR_Box) (Var_79));
        }
      }
      else
      {
        MR_Word Context_75;
        MR_Word Spec_76;
        MR_Word Var_83;

        Context_75 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_14);
        {
          Spec_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_76, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_simple_class_constraints\'/5"));
          MR_hl_field(1, Spec_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_76, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_76, 3) = ((MR_Box) (Context_75));
          MR_hl_field(1, Spec_76, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[100])));
        }
        {
          Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_83, 0) = ((MR_Box) (Spec_76));
          MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeInstanceConstraints_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeInstanceConstraints_23, 0) = ((MR_Box) (Var_83));
        }
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeItemInstanceInfo0_22)) == (MR_Integer) 1);
    if (succeeded)
    {
      ItemInstanceInfo0_24 = ((MR_Word) ((MR_hl_field(1, MaybeItemInstanceInfo0_22, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeInstanceConstraints_23)) == (MR_Integer) 1);
      if (succeeded)
        InstanceConstraints_25 = ((MR_Word) ((MR_hl_field(1, MaybeInstanceConstraints_23, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word ItemInstanceInfo_26;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_24, (MR_Integer) 0))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_24, (MR_Integer) 1))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_24, (MR_Integer) 2))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_24, (MR_Integer) 4))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_24, (MR_Integer) 5))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_24, (MR_Integer) 6))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_24, (MR_Integer) 7))));
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, ItemInstanceInfo0_24, (MR_Integer) 8))));

      {
        ItemInstanceInfo_26 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemInstanceInfo_26, 0) = ((MR_Box) (Var_30));
        MR_hl_field(0, ItemInstanceInfo_26, 1) = ((MR_Box) (Var_31));
        MR_hl_field(0, ItemInstanceInfo_26, 2) = ((MR_Box) (Var_32));
        MR_hl_field(0, ItemInstanceInfo_26, 3) = ((MR_Box) (InstanceConstraints_25));
        MR_hl_field(0, ItemInstanceInfo_26, 4) = ((MR_Box) (Var_34));
        MR_hl_field(0, ItemInstanceInfo_26, 5) = ((MR_Box) (Var_35));
        MR_hl_field(0, ItemInstanceInfo_26, 6) = ((MR_Box) (Var_36));
        MR_hl_field(0, ItemInstanceInfo_26, 7) = ((MR_Box) (Var_37));
        MR_hl_field(0, ItemInstanceInfo_26, 8) = ((MR_Box) (Var_38));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeItemInstanceInfo_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ItemInstanceInfo_26));
      }
    }
    else
    {
      MR_Word Specs_27;
      MR_Word Var_28;
      MR_Word Var_29;

      Var_28 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), MaybeItemInstanceInfo0_22);
      Var_29 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[7]), MaybeInstanceConstraints_23);
      Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_28, Var_29);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItemInstanceInfo_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_27));
      }
    }
  }
  else
    parse_tree__parse_class__parse_underived_instance_6_p_0(ModuleName_7, TVarSet_8, ArgTerm_9, Context_10, SeqNum_11, MaybeItemInstanceInfo_12);
}

static void MR_CALL 
parse_tree__parse_class__parse_underived_instance_6_p_0(
  MR_Word ModuleName_7,
  MR_Word TVarSet_8,
  MR_Word NameTerm_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeItemInstanceInfo_12)
{
  MR_bool succeeded;
  MR_Word NameContextPieces_13;
  MR_Word VarSet_14;
  MR_Word Spec_15;

  NameContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[101]))));
  mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_8, &VarSet_14);
  succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_14, (MR_Word) ((MR_Unsigned) 4U), NameTerm_9, &Spec_15);
  if (succeeded)
  {
    MR_Word Var_27;

    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeItemInstanceInfo_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    }
  }
  else
  {
    MR_Word MaybeClassName_16;

    parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_14, NameContextPieces_13, NameTerm_9, &MaybeClassName_16);
    if (((MR_tag((MR_Word) MaybeClassName_16)) == (MR_Integer) 0))
    {
      MR_Word Specs_34 = ((MR_Word) ((MR_hl_field(0, MaybeClassName_16, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItemInstanceInfo_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_34));
      }
    }
    else
    {
      MR_Word ClassName_17 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_16, (MR_Integer) 0))));
      MR_Word TypeTerms_18 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_16, (MR_Integer) 1))));
      MR_Word MaybeTypes_20;

      parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_4[0])), VarSet_14, NameContextPieces_13, TypeTerms_18, &MaybeTypes_20);
      if (((MR_tag((MR_Word) MaybeTypes_20)) == (MR_Integer) 0))
        *MaybeItemInstanceInfo_12 = (MR_Word) (MaybeTypes_20);
      else
      {
        MR_Word Types_21 = ((MR_Word) ((MR_hl_field(1, MaybeTypes_20, (MR_Integer) 0))));
        MR_Word ItemInstanceInfo_22;

        {
          ItemInstanceInfo_22 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemInstanceInfo_22, 0) = ((MR_Box) (ClassName_17));
          MR_hl_field(0, ItemInstanceInfo_22, 1) = ((MR_Box) (Types_21));
          MR_hl_field(0, ItemInstanceInfo_22, 2) = ((MR_Box) (Types_21));
          MR_hl_field(0, ItemInstanceInfo_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, ItemInstanceInfo_22, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, ItemInstanceInfo_22, 5) = ((MR_Box) (TVarSet_8));
          MR_hl_field(0, ItemInstanceInfo_22, 6) = ((MR_Box) (ModuleName_7));
          MR_hl_field(0, ItemInstanceInfo_22, 7) = ((MR_Box) (Context_10));
          MR_hl_field(0, ItemInstanceInfo_22, 8) = ((MR_Box) (SeqNum_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeItemInstanceInfo_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ItemInstanceInfo_22));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_typeclass_item_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__parse_item__parse_class_decl_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
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
    MR_Word NameTerm_14;
    MR_Word MethodsTerm_15;
    MR_Word Var_27;
    MR_Word Var_23;
    MR_String Var_24;
    MR_Word Var_25;
    MR_Word Var_26;

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
    {
      MR_Word MaybeItemTypeClassInfo0_61;
      MR_Word MaybeClassDecls_62;
      MR_Word DeclTerms_93;
      MR_Word ItemTypeClassInfo0_63;
      MR_Word ClassDecls_64;

      parse_tree__parse_class__parse_class_head_6_p_0(ModuleName_7, VarSet_8, NameTerm_14, Context_10, SeqNum_11, &MaybeItemTypeClassInfo0_61);
      succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(MethodsTerm_15, &DeclTerms_93);
      if (succeeded)
      {
        MR_Word MaybeDecls_94;
        MR_Word Var_97;
        MR_Word Results_108;
        MR_Word Specs_109;

        {
          Var_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_97, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_6[1]));
          MR_hl_field(0, Var_97, 1) = ((MR_Box) (parse_tree__parse_class__parse_typeclass_item_6_p_0_1));
          MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_97, 3) = ((MR_Box) (ModuleName_7));
          MR_hl_field(0, Var_97, 4) = ((MR_Box) (VarSet_8));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_class_scalar_common_2[0]), Var_97, DeclTerms_93, &MaybeDecls_94);
        parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(MaybeDecls_94, (MR_Word) ((MR_Unsigned) 0U), &Results_108, (MR_Word) ((MR_Unsigned) 0U), &Specs_109);
        if ((Specs_109 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MaybeClassDecls_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeClassDecls_62, 0) = ((MR_Box) (Results_108));
          }
        else
          {
            MaybeClassDecls_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MaybeClassDecls_62, 0) = ((MR_Box) (Specs_109));
          }
      }
      else
      {
        MR_Word Spec_96;
        MR_Word Var_101;
        MR_Word Var_102;

        Var_101 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodsTerm_15);
        {
          Spec_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_96, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_class_decls\'/4"));
          MR_hl_field(1, Spec_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_96, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_96, 3) = ((MR_Box) (Var_101));
          MR_hl_field(1, Spec_96, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[96])));
        }
        {
          Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_102, 0) = ((MR_Box) (Spec_96));
          MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_27));
        }
        {
          MaybeClassDecls_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeClassDecls_62, 0) = ((MR_Box) (Var_102));
        }
      }
      succeeded = ((MR_tag((MR_Word) MaybeItemTypeClassInfo0_61)) == (MR_Integer) 1);
      if (succeeded)
      {
        ItemTypeClassInfo0_63 = ((MR_Word) ((MR_hl_field(1, MaybeItemTypeClassInfo0_61, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeClassDecls_62)) == (MR_Integer) 1);
        if (succeeded)
          ClassDecls_64 = ((MR_Word) ((MR_hl_field(1, MaybeClassDecls_62, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word ItemTypeClassInfo_18;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word TVarSet_65;
        MR_Word Var_69;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_78;
        MR_Word Var_79;

        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_8, &TVarSet_65);
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (ClassDecls_64));
        }
        Var_72 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo0_63, (MR_Integer) 0))));
        Var_73 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo0_63, (MR_Integer) 1))));
        Var_74 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo0_63, (MR_Integer) 2))));
        Var_75 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo0_63, (MR_Integer) 3))));
        Var_78 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo0_63, (MR_Integer) 6))));
        Var_79 = ((MR_Word) ((MR_hl_field(0, ItemTypeClassInfo0_63, (MR_Integer) 7))));
        {
          ItemTypeClassInfo_18 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemTypeClassInfo_18, 0) = ((MR_Box) (Var_72));
          MR_hl_field(0, ItemTypeClassInfo_18, 1) = ((MR_Box) (Var_73));
          MR_hl_field(0, ItemTypeClassInfo_18, 2) = ((MR_Box) (Var_74));
          MR_hl_field(0, ItemTypeClassInfo_18, 3) = ((MR_Box) (Var_75));
          MR_hl_field(0, ItemTypeClassInfo_18, 4) = ((MR_Box) (Var_69));
          MR_hl_field(0, ItemTypeClassInfo_18, 5) = ((MR_Box) (TVarSet_65));
          MR_hl_field(0, ItemTypeClassInfo_18, 6) = ((MR_Box) (Var_78));
          MR_hl_field(0, ItemTypeClassInfo_18, 7) = ((MR_Box) (Var_79));
        }
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
      else
      {
        MR_Word Specs_67;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word MaybeItemTypeClassInfo_124;

        Var_70 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), MaybeItemTypeClassInfo0_61);
        Var_71 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[0]), MaybeClassDecls_62);
        Specs_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_70, Var_71);
        {
          MaybeItemTypeClassInfo_124 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeItemTypeClassInfo_124, 0) = ((MR_Box) (Specs_67));
        }
        *MaybeIOM_12 = (MR_Word) (MaybeItemTypeClassInfo_124);
      }
    }
    else
    {
      MR_Word MaybeItemTypeClassInfo_120;

      parse_tree__parse_class__parse_class_head_6_p_0(ModuleName_7, VarSet_8, ArgTerm_13, Context_10, SeqNum_11, &MaybeItemTypeClassInfo_120);
      if (((MR_tag((MR_Word) MaybeItemTypeClassInfo_120)) == (MR_Integer) 0))
        *MaybeIOM_12 = (MR_Word) (MaybeItemTypeClassInfo_120);
      else
      {
        MR_Word ItemTypeClassInfo_114 = ((MR_Word) ((MR_hl_field(1, MaybeItemTypeClassInfo_120, (MR_Integer) 0))));
        MR_Word Var_115;
        MR_Word Var_116;

        {
          Var_116 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_116, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_116, 1) = ((MR_Box) (ItemTypeClassInfo_114));
        }
        {
          Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_115, 0) = ((MR_Box) (Var_116));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_115));
        }
      }
    }
  }
  else
  {
    MR_Word Spec_21;
    MR_Word Var_59;

    {
      Spec_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_typeclass_item\'/6"));
      MR_hl_field(1, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(1, Spec_21, 3) = ((MR_Box) (Context_10));
      MR_hl_field(1, Spec_21, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[29])));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Spec_21));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_59));
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
  MR_Word conv0_HeadVar__2_73;

  parse_tree__parse_class__IntroducedFrom__pred__parse_unconstrained_class__384__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_73);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_73));
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
    ContextPieces_24 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[86]))));
    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_16, &VarSet_25);
    succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_25, (MR_Word) ((MR_Unsigned) 0U), ArgTerm_9, &Spec_26);
    if (succeeded)
    {
      MR_Word Var_40;

      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) (Spec_26));
        MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItemTypeClassInfo_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
      }
    }
    else
    {
      MR_Word MaybeClassName_27;

      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_7, VarSet_25, ContextPieces_24, ArgTerm_9, &MaybeClassName_27);
      if (((MR_tag((MR_Word) MaybeClassName_27)) == (MR_Integer) 0))
      {
        MR_Word Specs_37 = ((MR_Word) ((MR_hl_field(0, MaybeClassName_27, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeItemTypeClassInfo_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_37));
        }
      }
      else
      {
        MR_Word ClassName_28 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_27, (MR_Integer) 0))));
        MR_Word TermVars0_29 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_27, (MR_Integer) 1))));
        MR_Word TermVars_30;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_class_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_class_scalar_common_2[5]), TermVars0_29, &TermVars_30);
        if ((TermVars_30 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Spec_57;

          Var_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArgTerm_9);
          {
            Spec_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_57, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_unconstrained_class\'/6"));
            MR_hl_field(1, Spec_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_57, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(1, Spec_57, 3) = ((MR_Box) (Var_46));
            MR_hl_field(1, Spec_57, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[90])));
          }
          {
            Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_47, 0) = ((MR_Box) (Spec_57));
            MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeItemTypeClassInfo_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
          }
        }
        else
        {
          MR_Word Vars_32;
          MR_Word SortedTermVars_33;
          MR_Integer NumSortedTermVars_34;
          MR_Integer NumTermVars_35;

          succeeded = mercury__term_subst__term_list_to_var_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TermVars_30, &Vars_32);
          if (succeeded)
          {
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[5]), TermVars_30, &SortedTermVars_33);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[5]), SortedTermVars_33, &NumSortedTermVars_34);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[5]), TermVars_30, &NumTermVars_35);
            succeeded = (NumSortedTermVars_34 == NumTermVars_35);
          }
          if (succeeded)
          {
            MR_Word TypeClassInfo_36;

            {
              TypeClassInfo_36 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeClassInfo_36, 0) = ((MR_Box) (ClassName_28));
              MR_hl_field(0, TypeClassInfo_36, 1) = ((MR_Box) (Vars_32));
              MR_hl_field(0, TypeClassInfo_36, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, TypeClassInfo_36, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, TypeClassInfo_36, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, TypeClassInfo_36, 5) = ((MR_Box) (TVarSet_16));
              MR_hl_field(0, TypeClassInfo_36, 6) = ((MR_Box) (Context_10));
              MR_hl_field(0, TypeClassInfo_36, 7) = ((MR_Box) (SeqNum_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeItemTypeClassInfo_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (TypeClassInfo_36));
            }
          }
          else
          {
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Spec_58;

            Var_54 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArgTerm_9);
            {
              Spec_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_58, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_unconstrained_class\'/6"));
              MR_hl_field(1, Spec_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_58, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, Spec_58, 3) = ((MR_Box) (Var_54));
              MR_hl_field(1, Spec_58, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[94])));
            }
            {
              Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_55, 0) = ((MR_Box) (Spec_58));
              MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeItemTypeClassInfo_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_55));
            }
          }
        }
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__3_155;

  conv2_HeadVar__3_155 = parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__234__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_155));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__3_152;

  conv1_HeadVar__3_152 = parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__231__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_152));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__192__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__190__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_1(
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
    MR_Word Specs_59 = ((MR_Word) ((MR_hl_field(0, MaybeParsedConstraints_16, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeItemTypeClass_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_59));
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
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_161;
      MR_Word Var_162;
      MR_Word Var_163;
      MR_Word Var_164;
      MR_Word Var_167;
      MR_Word Var_168;
      MR_Word Var_169;
      MR_Word _ConstraintInParams_27;
      MR_Word _FunDepInParams_29;

      parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(ConstraintList_17, &ConstraintVars_22);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), ConstraintVars_22, &SortedConstraintVars_23);
      Var_169 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0), (MR_Word) (&parse_tree__parse_class_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_class_scalar_common_2[4]), FunDeps_18);
      FunDepVars_24 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Var_169);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), FunDepVars_24, &SortedFunDepVars_25);
      Params_26 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_21, (MR_Integer) 1))));
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_60, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_5[2]));
        MR_hl_field(0, Var_60, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_2));
        MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_60, 3) = ((MR_Box) (Params_26));
      }
      mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Var_60, SortedConstraintVars_23, &_ConstraintInParams_27, &ConstraintNotInParams_28);
      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_61, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_5[2]));
        MR_hl_field(0, Var_61, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_3));
        MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_61, 3) = ((MR_Box) (Params_26));
      }
      mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Var_61, SortedFunDepVars_25, &_FunDepInParams_29, &FunDepNotInParams_30);
      if ((ConstraintNotInParams_28 == (MR_Word) ((MR_Unsigned) 0U)))
        ConstraintErrorContext_33 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer Var_62;

        Var_62 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ConstraintList_17);
        succeeded = (Var_62 == (MR_Integer) 1);
        if (succeeded)
          ConstraintErrorContext_33 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[52]));
        else
          ConstraintErrorContext_33 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[54]));
      }
      if ((FunDepNotInParams_30 == (MR_Word) ((MR_Unsigned) 0U)))
        FunDepErrorContext_36 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer Var_69;

        Var_69 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0), FunDeps_18);
        succeeded = (Var_69 == (MR_Integer) 1);
        if (succeeded)
          FunDepErrorContext_36 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[56]));
        else
          FunDepErrorContext_36 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[58]));
      }
      NotInParams_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), ConstraintNotInParams_28, FunDepNotInParams_30);
      Var_168 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_21, (MR_Integer) 0))));
      Var_167 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_21, (MR_Integer) 1))));
      Var_164 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_21, (MR_Integer) 4))));
      Var_163 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_21, (MR_Integer) 5))));
      Var_162 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_21, (MR_Integer) 6))));
      Var_161 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass0_21, (MR_Integer) 7))));
      if ((NotInParams_37 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ItemTypeClass_38;
        MR_Word Var_118 = Var_168;
        MR_Word Var_119 = Var_167;
        MR_Word Var_122 = Var_164;
        MR_Word Var_123 = Var_163;
        MR_Word Var_124 = Var_162;
        MR_Word Var_125 = Var_161;

        {
          ItemTypeClass_38 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemTypeClass_38, 0) = ((MR_Box) (Var_118));
          MR_hl_field(0, ItemTypeClass_38, 1) = ((MR_Box) (Var_119));
          MR_hl_field(0, ItemTypeClass_38, 2) = ((MR_Box) (ConstraintList_17));
          MR_hl_field(0, ItemTypeClass_38, 3) = ((MR_Box) (FunDeps_18));
          MR_hl_field(0, ItemTypeClass_38, 4) = ((MR_Box) (Var_122));
          MR_hl_field(0, ItemTypeClass_38, 5) = ((MR_Box) (Var_123));
          MR_hl_field(0, ItemTypeClass_38, 6) = ((MR_Box) (Var_124));
          MR_hl_field(0, ItemTypeClass_38, 7) = ((MR_Box) (Var_125));
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
        MR_Word ConstraintNotInParamsStrs_42;
        MR_Word FunDepNotInParamsStrs_43;
        MR_Word ConstraintNotInParamsPieces_44;
        MR_Word FunDepNotInParamsPieces_45;
        MR_Word Prefix_46;
        MR_Word Suffix_47;
        MR_Word Middle_50;
        MR_Word Pieces_57;
        MR_Word Spec_58;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_109;
        MR_Integer Var_79;

        {
          Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_77, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_7[0]));
          MR_hl_field(0, Var_77, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_4));
          MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_77, 3) = ((MR_Box) (Var_163));
        }
        ConstraintNotInParamsStrs_42 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_77, ConstraintNotInParams_28);
        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_78, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_7[0]));
          MR_hl_field(0, Var_78, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_5));
          MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_78, 3) = ((MR_Box) (Var_163));
        }
        FunDepNotInParamsStrs_43 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_78, FunDepNotInParams_30);
        ConstraintNotInParamsPieces_44 = parse_tree__error_spec__list_to_pieces_1_f_0(ConstraintNotInParamsStrs_42);
        FunDepNotInParamsPieces_45 = parse_tree__error_spec__list_to_pieces_1_f_0(FunDepNotInParamsStrs_43);
        Var_79 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), NotInParams_37);
        succeeded = (Var_79 == (MR_Integer) 1);
        if (succeeded)
        {
          Prefix_46 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[60]));
          Suffix_47 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[62]));
        }
        else
        {
          Prefix_46 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[64]));
          Suffix_47 = (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[66]));
        }
        if ((ConstraintNotInParams_28 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((FunDepNotInParams_30 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_class.parse_constrained_class\'/7", (MR_String) "no NotInParams");
              return;
            }
          else
            Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FunDepNotInParamsPieces_45, FunDepErrorContext_36);
        else
        if ((FunDepNotInParams_30 == (MR_Word) ((MR_Unsigned) 0U)))
          Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConstraintNotInParamsPieces_44, ConstraintErrorContext_33);
        else
        {
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_100;

          Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FunDepNotInParamsPieces_45, FunDepErrorContext_36);
          Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[68])), Var_100);
          Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConstraintErrorContext_33, Var_95);
          Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConstraintNotInParamsPieces_44, Var_94);
        }
        Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Suffix_47, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[13])));
        Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Middle_50, Var_102);
        Pieces_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Prefix_46, Var_101);
        {
          Spec_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_58, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_constrained_class\'/7"));
          MR_hl_field(1, Spec_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_58, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_58, 3) = ((MR_Box) (Context_12));
          MR_hl_field(1, Spec_58, 4) = ((MR_Box) (Pieces_57));
        }
        {
          Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_109, 0) = ((MR_Box) (Spec_58));
          MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeItemTypeClass_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_109));
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
  MR_Word Var_37;
  MR_String Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;

  if (succeeded)
  {
    Var_37 = ((MR_Word) ((MR_hl_field(0, ConstraintTerm_5, (MR_Integer) 0))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, ConstraintTerm_5, (MR_Integer) 1))));
    Context_9 = ((MR_Word) ((MR_hl_field(0, ConstraintTerm_5, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_38 = ((MR_String) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
      succeeded = (strcmp(Var_38, (MR_String) "=<") == 0);
      if (succeeded)
      {
        succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LHSTerm_7 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));
          Var_40 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 1))));
          succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RHSTerm_8 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 0))));
            Var_41 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 1))));
            succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
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
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_58;

      LHSTermStr_17 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, LHSTerm_7);
      {
        Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_45, 1) = ((MR_Box) (LHSTermStr_17));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[122])));
      }
      {
        LHSPieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LHSPieces_18, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[118])));
        MR_hl_field(1, LHSPieces_18, 1) = ((MR_Box) (Var_44));
      }
      {
        LHSSpec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LHSSpec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_arbitrary_constraint\'/3"));
        MR_hl_field(1, LHSSpec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, LHSSpec_19, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, LHSSpec_19, 3) = ((MR_Box) (LHSContext_16));
        MR_hl_field(1, LHSSpec_19, 4) = ((MR_Box) (LHSPieces_18));
      }
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (LHSSpec_19));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeInstVar_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeInstVar_13, 0) = ((MR_Box) (Var_58));
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
    ContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[126])));
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
      MR_Word Var_69;

      {
        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_69, 0) = ((MR_Box) (InstVar_22));
        MR_hl_field(1, Var_69, 1) = ((MR_Box) (Inst_23));
        MR_hl_field(1, Var_69, 2) = ((MR_Box) (Context_9));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_69));
      }
    }
    else
    {
      MR_Word Specs_24;
      MR_Word Var_70;
      MR_Word Var_71;

      Var_70 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[3]), MaybeInstVar_13);
      Var_71 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), MaybeInst_21);
      Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_70, Var_71);
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

    succeeded = parse_tree__parse_class__parse_fundep_2_p_0(ConstraintTerm_5, &Result0_25);
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

        ArgsResultContextPieces_28 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[127]))));
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
          MR_Word Var_76;
          MR_Word Context_91;

          mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_4, &TVarSet_31);
          {
            Constraint_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Constraint_32, 0) = ((MR_Box) (ClassName_26));
            MR_hl_field(0, Constraint_32, 1) = ((MR_Box) (ArgTypes_30));
          }
          parse_tree__parse_class__classify_types_as_var_ground_or_neither_4_p_0(TVarSet_31, ArgTypes_30, &VoGTypes_33, &NonVarNonGroundTypes_34);
          Context_91 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintTerm_5);
          {
            Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_76, 0) = ((MR_Box) (Constraint_32));
            MR_hl_field(0, Var_76, 1) = ((MR_Box) (VoGTypes_33));
            MR_hl_field(0, Var_76, 2) = ((MR_Box) (NonVarNonGroundTypes_34));
            MR_hl_field(0, Var_76, 3) = ((MR_Box) (Context_91));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_76));
          }
        }
      }
      else
      {
        MR_Word Spec_36;
        MR_Word Var_88;
        MR_Word Var_89;

        Var_88 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintTerm_5);
        {
          Spec_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_arbitrary_constraint\'/3"));
          MR_hl_field(1, Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_36, 3) = ((MR_Box) (Var_88));
          MR_hl_field(1, Spec_36, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[131])));
        }
        {
          Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_89, 0) = ((MR_Box) (Spec_36));
          MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_89));
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
parse_tree__parse_class__parse_fundep_2_p_0(
  MR_Word Term_3,
  MR_Word * Result_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word DomainTerm_5;
  MR_Word RangeTerm_6;
  MR_Word Context_7;
  MR_Word Var_12;
  MR_String Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Domain_8;
  MR_Word Range_9;
  MR_Word TypeCtorInfo_7_39;
  MR_Word TypeCtorInfo_8_40;
  MR_Word TypeCtorInfo_7_43;
  MR_Word TypeCtorInfo_8_44;
  MR_Word TypesTerm_37;
  MR_Word TypeTerms_38;
  MR_Word TypesTerm_41;
  MR_Word TypeTerms_42;

  if (succeeded)
  {
    Var_12 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    Context_7 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_13 = ((MR_String) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
      succeeded = (strcmp(Var_13, (MR_String) "->") == 0);
      if (succeeded)
      {
        succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          DomainTerm_5 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 0))));
          Var_15 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 1))));
          succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RangeTerm_6 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 0))));
            Var_16 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 1))));
            succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TypeCtorInfo_7_39 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
              TypeCtorInfo_8_40 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
              TypesTerm_37 = mercury__term__coerce_1_f_0(TypeCtorInfo_7_39, TypeCtorInfo_8_40, DomainTerm_5);
              parse_tree__parse_util__conjunction_to_list_2_p_0(TypeCtorInfo_8_40, TypesTerm_37, &TypeTerms_38);
              succeeded = mercury__term_subst__term_list_to_var_list_2_p_0(TypeCtorInfo_8_40, TypeTerms_38, &Domain_8);
              if (succeeded)
              {
                TypeCtorInfo_7_43 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                TypeCtorInfo_8_44 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
                TypesTerm_41 = mercury__term__coerce_1_f_0(TypeCtorInfo_7_43, TypeCtorInfo_8_44, RangeTerm_6);
                parse_tree__parse_util__conjunction_to_list_2_p_0(TypeCtorInfo_8_44, TypesTerm_41, &TypeTerms_42);
                succeeded = mercury__term_subst__term_list_to_var_list_2_p_0(TypeCtorInfo_8_44, TypeTerms_42, &Range_9);
              }
              if (succeeded)
              {
                MR_Word Var_17;
                MR_Word Var_18;

                {
                  Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_18, 0) = ((MR_Box) (Domain_8));
                  MR_hl_field(0, Var_18, 1) = ((MR_Box) (Range_9));
                }
                {
                  Var_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_17, 0) = ((MR_Box) (Var_18));
                  MR_hl_field(2, Var_17, 1) = ((MR_Box) (Context_7));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_17));
                }
              }
              else
              {
                MR_Word Spec_11;
                MR_Word Var_33;
                MR_Word Var_34;

                Var_33 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_3);
                {
                  Spec_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_fundep\'/2"));
                  MR_hl_field(1, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(1, Spec_11, 3) = ((MR_Box) (Var_33));
                  MR_hl_field(1, Spec_11, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[137])));
                }
                {
                  Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_34, 0) = ((MR_Box) (Spec_11));
                  MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *Result_4 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_34));
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
            MR_Word BadTypesStr_23;
            MR_Word BadTypePieces_25;
            MR_Word Pieces_29;
            MR_Word Spec_30;
            MR_Word Var_44;
            MR_Word Var_70;
            MR_Word Var_73;
            MR_Word Var_76;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_127;

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
            BadTypesStr_23 = parse_tree__error_spec__list_to_quoted_pieces_1_f_0(BadTypeStrs_22);
            Var_127 = ((MR_Word) ((MR_hl_field(1, NonVarNonGroundTypes_15, (MR_Integer) 1))));
            if ((Var_127 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_51;

              Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadTypesStr_23, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[74])));
              BadTypePieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[72])), Var_51);
            }
            else
            {
              MR_Word Var_63;

              Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadTypesStr_23, (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[78])));
              BadTypePieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[76])), Var_63);
            }
            {
              Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_80, 1) = ((MR_Box) (SuperClassName_20));
            }
            {
              Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
              MR_hl_field(1, Var_79, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[85])));
            }
            {
              Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_76, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[81])));
              MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_79));
            }
            {
              Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[80])));
              MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
            }
            {
              Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[79])));
              MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_73));
            }
            Pieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, BadTypePieces_25);
            {
              Spec_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.collect_superclass_constraints\'/5"));
              MR_hl_field(1, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(1, Spec_30, 3) = ((MR_Box) (Context_16));
              MR_hl_field(1, Spec_30, 4) = ((MR_Box) (Pieces_29));
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
          MR_Word Var_93;
          MR_Word Var_96;
          MR_Word Var_99;
          MR_Word Var_100;
          MR_Word Context_112 = ((MR_Word) ((MR_hl_field(1, Constraint_8, (MR_Integer) 2))));
          MR_Word Pieces_113;
          MR_Word Spec_114;

          mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_1, &InstVarSet_33);
          Var_93 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[3]), ((MR_Box) (InstVar_31)));
          InstConstraintStr_34 = parse_tree__parse_tree_out_inst__mercury_constrained_inst_vars_to_string_4_f_0((MR_Integer) 0, InstVarSet_33, Var_93, Inst_32);
          {
            Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_100, 1) = ((MR_Box) (InstConstraintStr_34));
          }
          {
            Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
            MR_hl_field(1, Var_99, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[15])));
          }
          {
            Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_96, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[70])));
            MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_99));
          }
          {
            Pieces_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_113, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[69])));
            MR_hl_field(1, Pieces_113, 1) = ((MR_Box) (Var_96));
          }
          {
            Spec_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.collect_superclass_constraints\'/5"));
            MR_hl_field(1, Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(1, Spec_114, 3) = ((MR_Box) (Context_112));
            MR_hl_field(1, Spec_114, 4) = ((MR_Box) (Pieces_113));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_114));
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
  MR_Word conv0_HeadVar__2_73;

  parse_tree__parse_class__IntroducedFrom__pred__parse_unconstrained_class__384__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_73);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_73));
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

  ContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_class_scalar_common_1[86]))));
  mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_8, &VarSet_14);
  succeeded = parse_tree__parse_item__is_the_name_a_variable_4_p_0(VarSet_14, (MR_Word) ((MR_Unsigned) 0U), NameTerm_9, &Spec_15);
  if (succeeded)
  {
    MR_Word Var_32;

    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeTypeClassInfo_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
    }
  }
  else
  {
    MR_Word MaybeClassName_16;

    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_7, VarSet_14, ContextPieces_13, NameTerm_9, &MaybeClassName_16);
    if (((MR_tag((MR_Word) MaybeClassName_16)) == (MR_Integer) 0))
    {
      MR_Word Specs_28 = ((MR_Word) ((MR_hl_field(0, MaybeClassName_16, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTypeClassInfo_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_28));
      }
    }
    else
    {
      MR_Word ClassName_17 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_16, (MR_Integer) 0))));
      MR_Word TermVars0_18 = ((MR_Word) ((MR_hl_field(1, MaybeClassName_16, (MR_Integer) 1))));
      MR_Word TermVars_19;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_class_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_class_scalar_common_2[3]), TermVars0_18, &TermVars_19);
      if ((TermVars_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Spec_66;

        Var_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NameTerm_9);
        {
          Spec_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_66, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_unconstrained_class\'/6"));
          MR_hl_field(1, Spec_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_66, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, Spec_66, 3) = ((MR_Box) (Var_46));
          MR_hl_field(1, Spec_66, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[90])));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (Spec_66));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTypeClassInfo_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
        }
      }
      else
      {
        MR_Word Vars_23;
        MR_Word SortedTermVars_24;
        MR_Integer NumSortedTermVars_25;
        MR_Integer NumTermVars_26;

        succeeded = mercury__term_subst__term_list_to_var_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TermVars_19, &Vars_23);
        if (succeeded)
        {
          mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[5]), TermVars_19, &SortedTermVars_24);
          mercury__list__length_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[5]), SortedTermVars_24, &NumSortedTermVars_25);
          mercury__list__length_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[5]), TermVars_19, &NumTermVars_26);
          succeeded = (NumSortedTermVars_25 == NumTermVars_26);
        }
        if (succeeded)
        {
          MR_Word TypeClassInfo_27;

          {
            TypeClassInfo_27 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeClassInfo_27, 0) = ((MR_Box) (ClassName_17));
            MR_hl_field(0, TypeClassInfo_27, 1) = ((MR_Box) (Vars_23));
            MR_hl_field(0, TypeClassInfo_27, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, TypeClassInfo_27, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, TypeClassInfo_27, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, TypeClassInfo_27, 5) = ((MR_Box) (TVarSet_8));
            MR_hl_field(0, TypeClassInfo_27, 6) = ((MR_Box) (Context_10));
            MR_hl_field(0, TypeClassInfo_27, 7) = ((MR_Box) (SeqNum_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeTypeClassInfo_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (TypeClassInfo_27));
          }
        }
        else
        {
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Spec_67;

          Var_63 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NameTerm_9);
          {
            Spec_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_67, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_class.parse_unconstrained_class\'/6"));
            MR_hl_field(1, Spec_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_67, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(1, Spec_67, 3) = ((MR_Box) (Var_63));
            MR_hl_field(1, Spec_67, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_class_scalar_common_1[94])));
          }
          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) (Spec_67));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeTypeClassInfo_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_64));
          }
        }
      }
    }
  }
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
