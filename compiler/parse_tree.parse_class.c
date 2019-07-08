/*
** Automatically generated from `parse_class.m'
** by the Mercury compiler,
** version rotd-2019-07-08
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
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_item.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_type_name.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s {
  MR_bool parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__succeeded;
  MR_Word parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__ArgTypes_3;
  jmp_buf parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__commit_0;
  MR_Word parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__ArgType_5;
  MR_Box parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__conv0_ArgType_5;
};


static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_decl_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0;

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_2[2];

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_2;

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_3[1];

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_3;

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_3[1];

static const MR_DuPtagLayout parse_tree__parse_class__parse_tree__parse_class__du_ptag_ordered_arbitrary_constraint_0[4];

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_name_ordered_arbitrary_constraint_0[4];

static const MR_Integer parse_tree__parse_class__parse_tree__parse_class__functor_number_map_arbitrary_constraint_0[4];

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__list__ti_one_or_more_1parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_class__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_class__parse_tree__maybe_error__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__check_tvars_in_instance_constraint__831__1_2_f_0(
  MR_Word TVarSet_12,
  MR_Word HeadVar__2_57);

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__check_tvars_in_instance_constraint__828__1_2_p_0(
  MR_Word TypesVars_17,
  MR_Word HeadVar__2_52);

static void MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_unconstrained_class__338__1_2_p_0(
  MR_Word HeadVar__1_82,
  MR_Word * HeadVar__2_83);

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__223__1_2_f_0(
  MR_Word HeadVar__1_168,
  MR_Word HeadVar__2_159);

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__220__1_2_f_0(
  MR_Word HeadVar__1_168,
  MR_Word HeadVar__2_156);

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__181__1_2_p_0(
  MR_Word Params_26,
  MR_Word HeadVar__2_151);

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__179__1_2_p_0(
  MR_Word Params_26,
  MR_Word HeadVar__2_149);

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
parse_tree__parse_class__is_in_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Box Element_4);

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

static MR_bool MR_CALL 
parse_tree__parse_class__get_simple_constraint_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Constraint_3);

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
parse_tree__parse_class__parse_non_empty_instance_8_p_0_1(
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
  MR_Integer SeqNum_15,
  MR_Word * MaybeItemInstanceInfo_16);

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

static void MR_CALL 
parse_tree__parse_class__parse_instance_name_6_p_0(
  MR_Word ModuleName_7,
  MR_Word TVarSet_8,
  MR_Word ArgTerm_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeItemInstanceInfo_12);

static MR_bool MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word VarSet_6,
  MR_Word ConstraintsTerm_7,
  MR_Word * Result_8);

static void MR_CALL 
parse_tree__parse_class__parse_underived_instance_6_p_0(
  MR_Word ModuleName_7,
  MR_Word TVarSet_8,
  MR_Word NameTerm_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeItemInstanceInfo_12);

static void MR_CALL 
parse_tree__parse_class__parse_non_empty_class_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word NameTerm_10,
  MR_Word MethodsTerm_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeItemTypeClassInfo_14);

static void MR_CALL 
parse_tree__parse_class__parse_class_decls_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class__parse_class_decls_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word DeclsTerm_7,
  MR_Word * MaybeClassDecls_8);

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Results_0_2,
  MR_Word * STATE_VARIABLE_Results_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

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
  MR_Integer SeqNum_13,
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
parse_tree__parse_class__constraint_is_not_simple_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
parse_tree__parse_class__parse_fundep_2_p_0(
  MR_Word Term_3,
  MR_Word * Result_4);

static void MR_CALL 
parse_tree__parse_class__collect_simple_and_fundep_constraints_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

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
  MR_Integer SeqNum_11,
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


static /* final */ const MR_Box parse_tree__parse_class_scalar_common_1[135][2];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_2[6][3];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_3[4][5];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_4[15][1];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_5[1][6];

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_6[2][7];




static /* final */ const MR_Box parse_tree__parse_class_scalar_common_1[135][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_class_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where [method_signature_1, ... method_signature_m]"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "optionally followed by"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- typeclass tcname(T1, ... Tn)"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "typeclass"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where [method_spec_1, ... method_spec_m]"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[14])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- instance tcname(type1, ... typen)"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "instance"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and ground types"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "constraints may only constrain type variables"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in typeclass declarations."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: functional dependencies are only allowed"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may only constrain type variables and ground types."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: constraints on class declarations"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "at least one class parameter."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: typeclass declarations require"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[55])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "as class parameters."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected distinct variables"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a list of class methods."))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of an inst constraint."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may not be the subject"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of an inst constraint:"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the constraining inst"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "as class name or inst constraint."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected atom"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be comma-separated lists of variables."))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of a functional dependency"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the domain and range"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: constraints on instance declarations"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[51])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in constraints on instance declaration."))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected list of instance methods."))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In typeclass declaration:"))
  },
  /* row 89 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 90 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 91 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a non-variable inst such as"))
  },
  /* row 93 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In class constraint:"))
  },
  /* row 94 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 95 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the superclass constraint"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[96]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in superclass constraints"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[98]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the functional dependency"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in functional dependencies"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[102]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: type variable"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[104]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a parameter of this type class."))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[106]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: type variables"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[108]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are not parameters of this type class."))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[110]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[112]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 114 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[7])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 115 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[8])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In instance declaration:"))
  },
  /* row 117 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[9])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unbound type variable"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[118]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unbound type variables"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[120]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 122 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[10])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 123 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[11])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 124 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[12])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 125 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[13])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<Name> / <Arity>) is <InstanceMethod>"))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 129 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 130 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<Name> / <Arity>) is <InstanceMethod>"))
  },
  /* row 131 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<Name> / <Arity>) is <InstanceName>"))
  },
  /* row 132 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<Name> / <Arity>) is <InstanceName>"))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected clause or"))
  },
};

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__parse_class_scalar_common_1[6])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2)),
    ((MR_Box) (&parse_tree__parse_class_scalar_common_1[8])),
    ((MR_Box) (&parse_tree__parse_class_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_class__tvars_in_fundeps_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_3[1])),
    ((MR_Box) (parse_tree__parse_class__parse_unconstrained_class_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_3[3])),
    ((MR_Box) (parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_3[3])),
    ((MR_Box) (parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_3[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)),
    ((MR_Box) (&parse_tree__parse_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_4[15][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[57])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[61])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[81])))
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 4 */
  {
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[75])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[53])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[63])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[28])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[83])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[87])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[39])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[45])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[49])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_class__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_decl_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_class__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_decl_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
};

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_0 = {
  (MR_String) "simple",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
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

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
};

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_1 = {
  (MR_String) "non_simple",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
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

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_2[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_2 = {
  (MR_String) "inst_constraint",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_3[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)
};

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_3 = {
  (MR_String) "fundep",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_0[1] = {
  &parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_1[1] = {
  &parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_1
};

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_2[1] = {
  &parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_3
};

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_3[1] = {
  &parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_2
};

static const MR_DuPtagLayout parse_tree__parse_class__parse_tree__parse_class__du_ptag_ordered_arbitrary_constraint_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_class__parse_tree__parse_class__du_name_ordered_arbitrary_constraint_0[4] = {
  &parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_3,
  &parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_2,
  &parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_1,
  &parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_0
};

static const MR_Integer parse_tree__parse_class__parse_tree__parse_class__functor_number_map_arbitrary_constraint_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_class____Unify____arbitrary_constraint_0_0_10001)),
  ((MR_Box) (parse_tree__parse_class____Compare____arbitrary_constraint_0_0_10001)),
  (MR_String) "parse_tree.parse_class",
  (MR_String) "arbitrary_constraint",
  {     parse_tree__parse_class__parse_tree__parse_class__du_name_ordered_arbitrary_constraint_0 },
  {     parse_tree__parse_class__parse_tree__parse_class__du_ptag_ordered_arbitrary_constraint_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  parse_tree__parse_class__parse_tree__parse_class__functor_number_map_arbitrary_constraint_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__list__ti_one_or_more_1parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraints_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_class____Unify____arbitrary_constraints_0_0_10001)),
  ((MR_Box) (parse_tree__parse_class____Compare____arbitrary_constraints_0_0_10001)),
  (MR_String) "parse_tree.parse_class",
  (MR_String) "arbitrary_constraints",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_class__list__ti_one_or_more_1parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_class__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_class__parse_tree__maybe_error__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) (&parse_tree__parse_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_TypeInfo) (&parse_tree__parse_class__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_maybe_class_and_inst_constraints_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_class____Unify____maybe_class_and_inst_constraints_0_0_10001)),
  ((MR_Box) (parse_tree__parse_class____Compare____maybe_class_and_inst_constraints_0_0_10001)),
  (MR_String) "parse_tree.parse_class",
  (MR_String) "maybe_class_and_inst_constraints",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_class__parse_tree__maybe_error__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__check_tvars_in_instance_constraint__831__1_2_f_0(
  MR_Word TVarSet_12,
  MR_Word HeadVar__2_57)
{
  {
    MR_String HeadVar__3_58;

    HeadVar__3_58 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_12, HeadVar__2_57);
    return HeadVar__3_58;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__check_tvars_in_instance_constraint__828__1_2_p_0(
  MR_Word TypesVars_17,
  MR_Word HeadVar__2_52)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), ((MR_Box) (HeadVar__2_52)), TypesVars_17);
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_unconstrained_class__338__1_2_p_0(
  MR_Word HeadVar__1_82,
  MR_Word * HeadVar__2_83)
{
  {
    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_82, HeadVar__2_83);
  }
}

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__223__1_2_f_0(
  MR_Word HeadVar__1_168,
  MR_Word HeadVar__2_159)
{
  {
    MR_String HeadVar__3_160;

    HeadVar__3_160 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_168, HeadVar__2_159);
    return HeadVar__3_160;
  }
}

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__220__1_2_f_0(
  MR_Word HeadVar__1_168,
  MR_Word HeadVar__2_156)
{
  {
    MR_String HeadVar__3_157;

    HeadVar__3_157 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_168, HeadVar__2_156);
    return HeadVar__3_157;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__181__1_2_p_0(
  MR_Word Params_26,
  MR_Word HeadVar__2_151)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_class__is_in_list_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Params_26, ((MR_Box) (HeadVar__2_151)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__179__1_2_p_0(
  MR_Word Params_26,
  MR_Word HeadVar__2_149)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_class__is_in_list_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Params_26, ((MR_Box) (HeadVar__2_149)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_class____Compare____maybe_class_and_inst_constraints_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__parse_class____Unify____maybe_class_and_inst_constraints_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraints_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraints_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_45 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_46 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_45 == CastY_46);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_56 = (MR_Word) ((MR_Word) (HeadVar__2_2));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

                  parse_tree__prog_data____Compare____prog_constraint_0_0(HeadVar__1_1, Var_56, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_55 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_16 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

                  parse_tree__prog_data____Compare____prog_constraint_0_0(HeadVar__1_1, Var_55, ArgY1_16);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_52 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 2));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_44 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 2));

                  parse_tree__prog_data____Compare____prog_fundep_0_0(HeadVar__1_1, Var_52, ArgY1_44);
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgY1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_30;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[6]), &SubResult1_30, ((MR_Box) (Var_54)), ((MR_Box) (ArgY1_29)));
                  succeeded = (SubResult1_30 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_30;
                  else
                    parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, Var_53, ArgY2_32);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraint_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
              succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_11 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 2));
            MR_Word ArgY1_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 2));
              succeeded = parse_tree__prog_data____Unify____prog_fundep_0_0(ArgX1_11, ArgY1_12);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeInfo_16_16;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_16_16 = (MR_Word) (&parse_tree__parse_class_scalar_common_1[6]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
              if (succeeded)
                succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_9, ArgY2_10);
            }
          }
          break;
      }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__is_in_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3,
  MR_Box Element_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_5, Element_4, List_3);
    return succeeded;
  }
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
  {
    MR_bool succeeded = ((MR_tag((MR_Word) MethodTerm_7)) == (MR_Integer) 0);
    MR_Word ClassMethodTerm_9;
    MR_Word InstanceMethodTerm_10;
    MR_Word TermContext_11;
    MR_Word Var_42;
    MR_String Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;

    if (succeeded)
    {
      Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodTerm_7, (MR_Integer) 0))));
      Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodTerm_7, (MR_Integer) 1))));
      TermContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodTerm_7, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_43 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0))));
        succeeded = (strcmp(Var_43, (MR_String) "is") == 0);
        if (succeeded)
        {
          succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ClassMethodTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0))));
            Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1))));
            succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              InstanceMethodTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0))));
              Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 1))));
              succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
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
      MR_Word Var_47;
      MR_String Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_String Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;

      succeeded = ((MR_tag((MR_Word) ClassMethodTerm_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassMethodTerm_9, (MR_Integer) 0))));
        Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassMethodTerm_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_48 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0))));
          succeeded = (strcmp(Var_48, (MR_String) "pred") == 0);
          if (succeeded)
          {
            succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SlashTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 0))));
              Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 1))));
              succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) SlashTerm_12)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlashTerm_12, (MR_Integer) 0))));
                  Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlashTerm_12, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_52 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_52, (MR_String) "/") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        PredNameTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 0))));
                        Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 1))));
                        succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ArityTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 0))));
                          Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 1))));
                          succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
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
        MR_Word PredName_17;
        MR_Integer ArityInt_18;
        MR_Word InstanceMethodName_19;

        succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PredNameTerm_14, &PredName_17);
        if (succeeded)
        {
          succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArityTerm_15, &ArityInt_18);
          if (succeeded)
            succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), InstanceMethodTerm_10, &InstanceMethodName_19);
        }
        if (succeeded)
        {
          MR_Word InstanceMethod_20;
          MR_Word Var_57;

          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (InstanceMethodName_19));
          }
          {
            InstanceMethod_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), InstanceMethod_20, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), InstanceMethod_20, 1) = ((MR_Box) (PredName_17));
            MR_hl_field(MR_mktag(0), InstanceMethod_20, 2) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), InstanceMethod_20, 3) = ((MR_Box) (ArityInt_18));
            MR_hl_field(MR_mktag(0), InstanceMethod_20, 4) = ((MR_Box) (TermContext_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeInstanceMethod_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstanceMethod_20));
          }
        }
        else
        {
          MR_String MethodTermStr_21;
          MR_Word Pieces_22;
          MR_Word Spec_23;
          MR_Word Var_60;
          MR_Word Var_63;
          MR_Word Var_66;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_86;

          MethodTermStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, MethodTerm_7);
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (MethodTermStr_21));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[14])));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[129])));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[128])));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[127])));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
          }
          {
            Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[126])));
            MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_60));
          }
          Var_81 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodTerm_7);
          {
            Var_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Pieces_22));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Var_82));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_79));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Spec_23));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeInstanceMethod_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_86));
          }
        }
      }
      else
      {
        MR_Word FuncNameTerm_25;
        MR_Word ArityTerm_222;
        MR_Word Var_88;
        MR_String Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_String Var_93;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word SlashTerm_207;

        succeeded = ((MR_tag((MR_Word) ClassMethodTerm_9)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassMethodTerm_9, (MR_Integer) 0))));
          Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassMethodTerm_9, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_88)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_89 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_88, (MR_Integer) 0))));
            succeeded = (strcmp(Var_89, (MR_String) "func") == 0);
            if (succeeded)
            {
              succeeded = (Var_90 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SlashTerm_207 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 0))));
                Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 1))));
                succeeded = (Var_91 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) SlashTerm_207)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlashTerm_207, (MR_Integer) 0))));
                    Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlashTerm_207, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_92)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_93 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_92, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_93, (MR_String) "/") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_94 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          FuncNameTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 0))));
                          Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 1))));
                          succeeded = (Var_95 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ArityTerm_222 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_95, (MR_Integer) 0))));
                            Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_95, (MR_Integer) 1))));
                            succeeded = (Var_96 == (MR_Word) ((MR_Unsigned) 0U));
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
          MR_Word FuncName_27;
          MR_Integer ArityInt_212;
          MR_Word InstanceMethodName_213;

          succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FuncNameTerm_25, &FuncName_27);
          if (succeeded)
          {
            succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArityTerm_222, &ArityInt_212);
            if (succeeded)
              succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), InstanceMethodTerm_10, &InstanceMethodName_213);
          }
          if (succeeded)
          {
            MR_Word Var_98;
            MR_Word InstanceMethod_208;

            {
              Var_98 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (InstanceMethodName_213));
            }
            {
              InstanceMethod_208 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InstanceMethod_208, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), InstanceMethod_208, 1) = ((MR_Box) (FuncName_27));
              MR_hl_field(MR_mktag(0), InstanceMethod_208, 2) = ((MR_Box) (Var_98));
              MR_hl_field(MR_mktag(0), InstanceMethod_208, 3) = ((MR_Box) (ArityInt_212));
              MR_hl_field(MR_mktag(0), InstanceMethod_208, 4) = ((MR_Box) (TermContext_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeInstanceMethod_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstanceMethod_208));
            }
          }
          else
          {
            MR_Word Var_101;
            MR_Word Var_104;
            MR_Word Var_107;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_Word Var_120;
            MR_Word Var_121;
            MR_Word Var_122;
            MR_Word Var_123;
            MR_Word Var_124;
            MR_Word Var_127;
            MR_String MethodTermStr_209;
            MR_Word Pieces_210;
            MR_Word Spec_211;

            MethodTermStr_209 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, MethodTerm_7);
            {
              Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (MethodTermStr_209));
            }
            {
              Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
              MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[14])));
            }
            {
              Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[129])));
              MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_110));
            }
            {
              Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[128])));
              MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_107));
            }
            {
              Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[130])));
              MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_104));
            }
            {
              Pieces_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_210, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[126])));
              MR_hl_field(MR_mktag(1), Pieces_210, 1) = ((MR_Box) (Var_101));
            }
            Var_122 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodTerm_7);
            {
              Var_124 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (Pieces_210));
            }
            {
              Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
              MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (Var_122));
              MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (Var_123));
            }
            {
              Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Var_121));
              MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_211 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_211, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_211, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_211, 2) = ((MR_Box) (Var_120));
            }
            {
              Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Spec_211));
              MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeInstanceMethod_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_127));
            }
          }
        }
        else
        {
          MR_Word Var_131;
          MR_Word Var_134;
          MR_Word Var_137;
          MR_Word Var_140;
          MR_Word Var_143;
          MR_Word Var_146;
          MR_Word Var_147;
          MR_Word Var_156;
          MR_Word Var_157;
          MR_Word Var_158;
          MR_Word Var_159;
          MR_Word Var_160;
          MR_Word Var_163;
          MR_String MethodTermStr_218;
          MR_Word Pieces_219;
          MR_Word Spec_220;

          MethodTermStr_218 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, MethodTerm_7);
          {
            Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_147, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_147, 1) = ((MR_Box) (MethodTermStr_218));
          }
          {
            Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Var_147));
            MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[14])));
          }
          {
            Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[129])));
            MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_146));
          }
          {
            Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[128])));
            MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_143));
          }
          {
            Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[133])));
            MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_140));
          }
          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[132])));
            MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_137));
          }
          {
            Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[131])));
            MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_134));
          }
          {
            Pieces_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_219, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[126])));
            MR_hl_field(MR_mktag(1), Pieces_219, 1) = ((MR_Box) (Var_131));
          }
          Var_158 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodTerm_7);
          {
            Var_160 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_160, 0) = ((MR_Box) (Pieces_219));
          }
          {
            Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (Var_160));
            MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_157 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_157, 0) = ((MR_Box) (Var_158));
            MR_hl_field(MR_mktag(0), Var_157, 1) = ((MR_Box) (Var_159));
          }
          {
            Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Var_157));
            MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_220 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_220, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_220, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_220, 2) = ((MR_Box) (Var_156));
          }
          {
            Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (Spec_220));
            MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeInstanceMethod_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_163));
          }
        }
      }
    }
    else
    {
      MR_Word MaybeIOM_29;

      parse_tree__parse_item__parse_item_or_marker_5_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_4[14]), VarSet_6, MethodTerm_7, (MR_Integer) -1, &MaybeIOM_29);
      if (((MR_tag((MR_Word) MaybeIOM_29)) == (MR_Integer) 0))
        *MaybeInstanceMethod_8 = (MR_Word) (MaybeIOM_29);
      else
      {
        MR_Word IOM_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOM_29, (MR_Integer) 0))));
        MR_Word ItemClause_33;
        MR_Word Item_32;

        succeeded = ((MR_tag((MR_Word) IOM_31)) == (MR_Integer) 0);
        if (succeeded)
        {
          Item_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IOM_31, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Item_32)) == (MR_Integer) 0);
          if (succeeded)
            ItemClause_33 = (MR_Word) ((MR_Word) (Item_32));
        }
        if (succeeded)
        {
          MR_Word ClassMethodName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_33, (MR_Integer) 0))));
          MR_Word PredOrFunc_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemClause_33, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word HeadArgs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_33, (MR_Integer) 2))));
          MR_Word Context_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_33, (MR_Integer) 6))));
          MR_Integer Var_167;
          MR_Word Var_168;
          MR_Word Var_169;
          MR_Integer ArityInt_229;
          MR_Word InstanceMethod_230;

          Var_167 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[11]), HeadArgs_36);
          parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_35, &ArityInt_229, Var_167);
          {
            Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (ItemClause_33));
            MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (Var_169));
          }
          {
            InstanceMethod_230 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), InstanceMethod_230, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_35));
            MR_hl_field(MR_mktag(0), InstanceMethod_230, 1) = ((MR_Box) (ClassMethodName_34));
            MR_hl_field(MR_mktag(0), InstanceMethod_230, 2) = ((MR_Box) (Var_168));
            MR_hl_field(MR_mktag(0), InstanceMethod_230, 3) = ((MR_Box) (ArityInt_229));
            MR_hl_field(MR_mktag(0), InstanceMethod_230, 4) = ((MR_Box) (Context_40));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeInstanceMethod_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstanceMethod_230));
          }
        }
        else
        {
          MR_Word Var_173;
          MR_Word Var_176;
          MR_Word Var_179;
          MR_Word Var_182;
          MR_Word Var_185;
          MR_Word Var_188;
          MR_Word Var_189;
          MR_Word Var_198;
          MR_Word Var_199;
          MR_Word Var_200;
          MR_Word Var_201;
          MR_Word Var_202;
          MR_Word Var_205;
          MR_String MethodTermStr_231;
          MR_Word Pieces_232;
          MR_Word Spec_233;

          MethodTermStr_231 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, MethodTerm_7);
          {
            Var_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_189, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_189, 1) = ((MR_Box) (MethodTermStr_231));
          }
          {
            Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (Var_189));
            MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[14])));
          }
          {
            Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_185, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[129])));
            MR_hl_field(MR_mktag(1), Var_185, 1) = ((MR_Box) (Var_188));
          }
          {
            Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[128])));
            MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) (Var_185));
          }
          {
            Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[133])));
            MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (Var_182));
          }
          {
            Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[132])));
            MR_hl_field(MR_mktag(1), Var_176, 1) = ((MR_Box) (Var_179));
          }
          {
            Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[131])));
            MR_hl_field(MR_mktag(1), Var_173, 1) = ((MR_Box) (Var_176));
          }
          {
            Pieces_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_232, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[134])));
            MR_hl_field(MR_mktag(1), Pieces_232, 1) = ((MR_Box) (Var_173));
          }
          Var_200 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodTerm_7);
          {
            Var_202 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_202, 0) = ((MR_Box) (Pieces_232));
          }
          {
            Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_201, 0) = ((MR_Box) (Var_202));
            MR_hl_field(MR_mktag(1), Var_201, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_199 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_199, 0) = ((MR_Box) (Var_200));
            MR_hl_field(MR_mktag(0), Var_199, 1) = ((MR_Box) (Var_201));
          }
          {
            Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (Var_199));
            MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_233 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_233, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_233, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_233, 2) = ((MR_Box) (Var_198));
          }
          {
            Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (Spec_233));
            MR_hl_field(MR_mktag(1), Var_205, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeInstanceMethod_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_205));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__get_simple_constraint_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Constraint_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);

    if (succeeded)
      *Constraint_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_class__tvars_in_fundep_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Domain_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Range_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Domain_3, Range_4);
    return HeadVar__2_2;
  }
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
  {
    MR_Word Result0_9;
    MR_Word HeadConstraintTerm_45;
    MR_Word TailConstraintTerms_46;
    MR_Word Var_47;

    parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7, &Var_47);
    HeadConstraintTerm_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0))));
    TailConstraintTerms_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1))));
    parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(VarSet_6, HeadConstraintTerm_45, TailConstraintTerms_46, &Result0_9);
    if (((MR_tag((MR_Word) Result0_9)) == (MR_Integer) 0))
    {
      MR_Word Specs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_9, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_20));
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
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_9, (MR_Integer) 0))));

      HeadArbConstraint_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
      TailArbConstraints_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1))));
      {
        ArbitraryConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ArbitraryConstraints_12, 0) = ((MR_Box) (HeadArbConstraint_10));
        MR_hl_field(MR_mktag(1), ArbitraryConstraints_12, 1) = ((MR_Box) (TailArbConstraints_11));
      }
      parse_tree__parse_class__collect_class_and_inst_constraints_4_p_0(ArbitraryConstraints_12, &ProgConstraints_13, &FunDeps_14, &InstVarSub_15);
      if ((FunDeps_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProgConstraints_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstVarSub_15));
        }
      else
      {
        MR_Word Spec_19;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_39;

        Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7);
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[125])));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) (Var_32));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Spec_19));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_39));
        }
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
    *HeadVar__4_4 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
  }
  else
  {
    MR_Word Constraint_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Constraints_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_ProgConstraints_17_17;
    MR_Word STATE_VARIABLE_FunDeps_18_18;
    MR_Word STATE_VARIABLE_InstVarSub_19_19;

    parse_tree__parse_class__collect_class_and_inst_constraints_4_p_0(Constraints_6, &STATE_VARIABLE_ProgConstraints_17_17, &STATE_VARIABLE_FunDeps_18_18, &STATE_VARIABLE_InstVarSub_19_19);
    switch (MR_tag((MR_Word) Constraint_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ProgConstraint_27 = (MR_Word) ((MR_Word) (Constraint_5));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProgConstraint_27));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ProgConstraints_17_17));
          }
          *HeadVar__3_3 = STATE_VARIABLE_FunDeps_18_18;
          *HeadVar__4_4 = STATE_VARIABLE_InstVarSub_19_19;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProgConstraint_10 = (MR_Word) (MR_body((MR_Word) (Constraint_5), (MR_Integer) 1));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProgConstraint_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ProgConstraints_17_17));
          }
          *HeadVar__3_3 = STATE_VARIABLE_FunDeps_18_18;
          *HeadVar__4_4 = STATE_VARIABLE_InstVarSub_19_19;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FunDep_13 = (MR_Word) (MR_body((MR_Word) (Constraint_5), (MR_Integer) 2));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FunDep_13));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_FunDeps_18_18));
          }
          *HeadVar__2_2 = STATE_VARIABLE_ProgConstraints_17_17;
          *HeadVar__4_4 = STATE_VARIABLE_InstVarSub_19_19;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word InstVar_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Constraint_5, (MR_Integer) 0))));
          MR_Word Inst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Constraint_5, (MR_Integer) 1))));

          mercury__map__set_4_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (InstVar_11)), ((MR_Box) (Inst_12)), STATE_VARIABLE_InstVarSub_19_19, HeadVar__4_4);
          *HeadVar__2_2 = STATE_VARIABLE_ProgConstraints_17_17;
          *HeadVar__3_3 = STATE_VARIABLE_FunDeps_18_18;
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
}

void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word VarSet_6,
  MR_Word ConstraintsTerm_7,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;
    MR_Word Result0_26;
    MR_Word HeadConstraintTerm_55;
    MR_Word TailConstraintTerms_56;
    MR_Word Var_57;

    parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7, &Var_57);
    HeadConstraintTerm_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0))));
    TailConstraintTerms_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 1))));
    parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(VarSet_6, HeadConstraintTerm_55, TailConstraintTerms_56, &Result0_26);
    if (((MR_tag((MR_Word) Result0_26)) == (MR_Integer) 0))
      *Result_8 = (MR_Word) (Result0_26);
    else
    {
      MR_Word HeadArbConstraint_27;
      MR_Word TailArbConstraints_28;
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_26, (MR_Integer) 0))));
      MR_Word HeadConstraint_29;
      MR_Word TailConstraints_30;
      MR_Word TypeCtorInfo_34_49;
      MR_Word TypeCtorInfo_35_50;
      MR_Word Var_34;

      HeadArbConstraint_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
      TailArbConstraints_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) HeadArbConstraint_27)) == (MR_Integer) 0);
      if (succeeded)
      {
        HeadConstraint_29 = (MR_Word) ((MR_Word) (HeadArbConstraint_27));
        Var_34 = (MR_Word) (&parse_tree__parse_class_scalar_common_2[5]);
        TypeCtorInfo_34_49 = (MR_Word) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0);
        TypeCtorInfo_35_50 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0);
        succeeded = mercury__list__map_3_p_2(TypeCtorInfo_34_49, TypeCtorInfo_35_50, Var_34, TailArbConstraints_28, &TailConstraints_30);
      }
      if (succeeded)
      {
        MR_Word Var_35;

        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (HeadConstraint_29));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (TailConstraints_30));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_35));
        }
      }
      else
      {
        MR_Word Spec_31;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_45;

        Var_40 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7);
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[124])));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_31, 2) = ((MR_Box) (Var_38));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_31));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
        }
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
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  {
    MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word ArgTerm_13;
    MR_Word Var_23;

    if (succeeded)
    {
      ArgTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
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
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_13, (MR_Integer) 0))));
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_13, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
          succeeded = (strcmp(Var_25, (MR_String) "where") == 0);
          if (succeeded)
          {
            succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NameTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))));
              Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
              succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MethodsTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
                Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
                succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
        parse_tree__parse_class__parse_non_empty_instance_8_p_0(ModuleName_7, VarSet_8, TVarSet_14, NameTerm_15, MethodsTerm_16, Context_10, SeqNum_11, &MaybeItemInstanceInfo_18);
      else
        parse_tree__parse_class__parse_instance_name_6_p_0(ModuleName_7, TVarSet_14, ArgTerm_13, Context_10, SeqNum_11, &MaybeItemInstanceInfo_18);
      if (((MR_tag((MR_Word) MaybeItemInstanceInfo_18)) == (MR_Integer) 0))
        *MaybeIOM_12 = (MR_Word) (MaybeItemInstanceInfo_18);
      else
      {
        MR_Word ItemInstanceInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemInstanceInfo_18, (MR_Integer) 0))));
        MR_Word Var_29;
        MR_Word Var_30;

        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (ItemInstanceInfo_19));
        }
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Var_30));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_29));
        }
      }
    }
    else
    {
      MR_Word Spec_22;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_65;

      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[123])));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_59));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Spec_22));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_65));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_non_empty_instance_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeInstanceMethod_8;

    parse_tree__parse_class__term_to_instance_method_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeInstanceMethod_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_MaybeInstanceMethod_8));
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
  MR_Integer SeqNum_15,
  MR_Word * MaybeItemInstanceInfo_16)
{
  {
    MR_bool succeeded;
    MR_Word MaybeItemInstanceInfo0_17;
    MR_Word MaybeInstanceMethods_18;
    MR_Word MethodList_56;
    MR_Word ItemInstanceInfo0_19;
    MR_Word InstanceMethods_20;

    parse_tree__parse_class__parse_instance_name_6_p_0(ModuleName_9, TVarSet_11, NameTerm_12, Context_14, SeqNum_15, &MaybeItemInstanceInfo0_17);
    succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(MethodsTerm_13, &MethodList_56);
    if (succeeded)
    {
      MR_Word Interface_57;
      MR_Word Var_60;
      MR_Word Results_85;
      MR_Word Specs_86;

      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (parse_tree__parse_class__parse_non_empty_instance_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (VarSet_10));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_class_scalar_common_1[10]), Var_60, MethodList_56, &Interface_57);
      parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(Interface_57, (MR_Word) ((MR_Unsigned) 0U), &Results_85, (MR_Word) ((MR_Unsigned) 0U), &Specs_86);
      if ((Specs_86 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeInstanceMethods_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeInstanceMethods_18, 0) = ((MR_Box) (Results_85));
        }
      else
        {
          MaybeInstanceMethods_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeInstanceMethods_18, 0) = ((MR_Box) (Specs_86));
        }
    }
    else
    {
      MR_Word Spec_59;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_75;

      Var_70 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MethodsTerm_13);
      {
        Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[122])));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_59, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_59, 2) = ((MR_Box) (Var_68));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Spec_59));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeInstanceMethods_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeInstanceMethods_18, 0) = ((MR_Box) (Var_75));
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeItemInstanceInfo0_17)) == (MR_Integer) 1);
    if (succeeded)
    {
      ItemInstanceInfo0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemInstanceInfo0_17, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeInstanceMethods_18)) == (MR_Integer) 1);
      if (succeeded)
        InstanceMethods_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstanceMethods_18, (MR_Integer) 0))));
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
      MR_Integer Var_39;

      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (InstanceMethods_20));
      }
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo0_19, (MR_Integer) 0))));
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo0_19, (MR_Integer) 1))));
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo0_19, (MR_Integer) 2))));
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo0_19, (MR_Integer) 3))));
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo0_19, (MR_Integer) 6))));
      Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo0_19, (MR_Integer) 7))));
      Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo0_19, (MR_Integer) 8))));
      {
        ItemInstanceInfo_21 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 1) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 2) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 3) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 4) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 5) = ((MR_Box) (TVarSet_11));
        MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 6) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 7) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 8) = ((MR_Box) (Var_39));
      }
      parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0(ItemInstanceInfo_21, NameTerm_12, &MaybeCheckSpec_22);
      if ((MaybeCheckSpec_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeItemInstanceInfo_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ItemInstanceInfo_21));
        }
      else
      {
        MR_Word Spec_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCheckSpec_22, (MR_Integer) 0))));
        MR_Word Var_27;

        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Spec_23));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeItemInstanceInfo_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
        }
      }
    }
    else
    {
      MR_Word Specs_24;
      MR_Word Var_29;
      MR_Word Var_30;

      Var_29 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), MaybeItemInstanceInfo0_17);
      Var_30 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[9]), MaybeInstanceMethods_18);
      Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_29, Var_30);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItemInstanceInfo_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_24));
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_58;

    conv0_HeadVar__3_58 = parse_tree__parse_class__IntroducedFrom__func__check_tvars_in_instance_constraint__831__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_58));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_class__IntroducedFrom__pred__check_tvars_in_instance_constraint__828__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0(
  MR_Word ItemInstanceInfo_4,
  MR_Word NameTerm_5,
  MR_Word * MaybeSpec_6)
{
  {
    MR_bool succeeded;
    MR_Word Types_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_4, (MR_Integer) 1))));
    MR_Word Constraints_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_4, (MR_Integer) 3))));
    MR_Word TVarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo_4, (MR_Integer) 5))));
    MR_Word UnboundTVars_19;
    MR_Word TVars_16;
    MR_Word TypesVars_17;
    MR_Word Var_27;
    MR_Word _BoundTVars_18;

    parse_tree__prog_type__constraint_list_get_tvars_2_p_0(Constraints_10, &TVars_16);
    parse_tree__prog_type__type_vars_list_2_p_0(Types_8, &TypesVars_17);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (TypesVars_17));
    }
    mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Var_27, TVars_16, &_BoundTVars_18, &UnboundTVars_19);
    succeeded = (UnboundTVars_19 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      {
        MR_Word UnboundTVarStrs_22;
        MR_Word UnboundTVarPieces_23;
        MR_Word Prefix_24;
        MR_Word Pieces_25;
        MR_Word Spec_26;
        MR_Word Var_28;
        MR_Word Var_36;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Integer Var_29;

        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_2));
          MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (TVarSet_12));
        }
        UnboundTVarStrs_22 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28, UnboundTVars_19);
        UnboundTVarPieces_23 = parse_tree__error_util__list_to_pieces_1_f_0(UnboundTVarStrs_22);
        Var_29 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), UnboundTVars_19);
        succeeded = (Var_29 == (MR_Integer) 1);
        if (succeeded)
          Prefix_24 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[119]));
        else
          Prefix_24 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[121]));
        Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), UnboundTVarPieces_23, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[85])));
        Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Prefix_24, Var_36);
        Var_47 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NameTerm_5);
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Pieces_25));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Var_47));
          MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (Var_48));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) (Var_45));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSpec_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_26));
        }
      }
    }
    else
      *MaybeSpec_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_instance_name_6_p_0(
  MR_Word ModuleName_7,
  MR_Word TVarSet_8,
  MR_Word ArgTerm_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeItemInstanceInfo_12)
{
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
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_9, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
        succeeded = (strcmp(Var_17, (MR_String) "<=") == 0);
        if (succeeded)
        {
          succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
            Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
            succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ConstraintsTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
              Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
              succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word VarSet_28;
      MR_Word MaybeItemInstanceInfo0_29;
      MR_Word MaybeInstanceConstraints_30;
      MR_Word NameContextPieces_57;
      MR_Word VarSet_58;
      MR_Word MaybeClassName_59;
      MR_Word ItemInstanceInfo0_31;
      MR_Word InstanceConstraints_32;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_8, &VarSet_28);
      NameContextPieces_57 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[116]))));
      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_8, &VarSet_58);
      parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_58, NameContextPieces_57, NameTerm_13, &MaybeClassName_59);
      if (((MR_tag((MR_Word) MaybeClassName_59)) == (MR_Integer) 0))
      {
        MR_Word Specs_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeClassName_59, (MR_Integer) 0))));

        {
          MaybeItemInstanceInfo0_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeItemInstanceInfo0_29, 0) = ((MR_Box) (Specs_74));
        }
      }
      else
      {
        MR_Word ClassName_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeClassName_59, (MR_Integer) 0))));
        MR_Word TypeTerms_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeClassName_59, (MR_Integer) 1))));
        MR_Word MaybeTypes_63;

        parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_4[4])), VarSet_58, NameContextPieces_57, TypeTerms_61, &MaybeTypes_63);
        if (((MR_tag((MR_Word) MaybeTypes_63)) == (MR_Integer) 0))
          MaybeItemInstanceInfo0_29 = (MR_Word) (MaybeTypes_63);
        else
        {
          MR_Word Types_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypes_63, (MR_Integer) 0))));
          MR_Word ItemInstanceInfo_65;

          {
            ItemInstanceInfo_65 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemInstanceInfo_65, 0) = ((MR_Box) (ClassName_60));
            MR_hl_field(MR_mktag(0), ItemInstanceInfo_65, 1) = ((MR_Box) (Types_64));
            MR_hl_field(MR_mktag(0), ItemInstanceInfo_65, 2) = ((MR_Box) (Types_64));
            MR_hl_field(MR_mktag(0), ItemInstanceInfo_65, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), ItemInstanceInfo_65, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), ItemInstanceInfo_65, 5) = ((MR_Box) (TVarSet_8));
            MR_hl_field(MR_mktag(0), ItemInstanceInfo_65, 6) = ((MR_Box) (ModuleName_7));
            MR_hl_field(MR_mktag(0), ItemInstanceInfo_65, 7) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), ItemInstanceInfo_65, 8) = ((MR_Box) (SeqNum_11));
          }
          {
            MaybeItemInstanceInfo0_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeItemInstanceInfo0_29, 0) = ((MR_Box) (ItemInstanceInfo_65));
          }
        }
      }
      parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(VarSet_28, ConstraintsTerm_14, &MaybeInstanceConstraints_30);
      succeeded = ((MR_tag((MR_Word) MaybeItemInstanceInfo0_29)) == (MR_Integer) 1);
      if (succeeded)
      {
        ItemInstanceInfo0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemInstanceInfo0_29, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeInstanceConstraints_30)) == (MR_Integer) 1);
        if (succeeded)
          InstanceConstraints_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstanceConstraints_30, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word ItemInstanceInfo_33;
        MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo0_31, (MR_Integer) 0))));
        MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo0_31, (MR_Integer) 1))));
        MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo0_31, (MR_Integer) 2))));
        MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo0_31, (MR_Integer) 4))));
        MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo0_31, (MR_Integer) 5))));
        MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo0_31, (MR_Integer) 6))));
        MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo0_31, (MR_Integer) 7))));
        MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstanceInfo0_31, (MR_Integer) 8))));

        {
          ItemInstanceInfo_33 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_33, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_33, 1) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_33, 2) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_33, 3) = ((MR_Box) (InstanceConstraints_32));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_33, 4) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_33, 5) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_33, 6) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_33, 7) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_33, 8) = ((MR_Box) (Var_45));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeItemInstanceInfo_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ItemInstanceInfo_33));
        }
      }
      else
      {
        MR_Word Specs_34;
        MR_Word Var_35;
        MR_Word Var_36;

        Var_35 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), MaybeItemInstanceInfo0_29);
        Var_36 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[8]), MaybeInstanceConstraints_30);
        Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_35, Var_36);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeItemInstanceInfo_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_34));
        }
      }
    }
    else
      parse_tree__parse_class__parse_underived_instance_6_p_0(ModuleName_7, TVarSet_8, ArgTerm_9, Context_10, SeqNum_11, MaybeItemInstanceInfo_12);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
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
}

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word VarSet_6,
  MR_Word ConstraintsTerm_7,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;
    MR_Word Result0_23;
    MR_Word HeadConstraintTerm_52;
    MR_Word TailConstraintTerms_53;
    MR_Word Var_54;

    parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7, &Var_54);
    HeadConstraintTerm_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 0))));
    TailConstraintTerms_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 1))));
    parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(VarSet_6, HeadConstraintTerm_52, TailConstraintTerms_53, &Result0_23);
    if (((MR_tag((MR_Word) Result0_23)) == (MR_Integer) 0))
      *Result_8 = (MR_Word) (Result0_23);
    else
    {
      MR_Word HeadArbConstraint_24;
      MR_Word TailArbConstraints_25;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_23, (MR_Integer) 0))));
      MR_Word HeadConstraint_26;
      MR_Word TailConstraints_27;
      MR_Word TypeCtorInfo_34_46;
      MR_Word TypeCtorInfo_35_47;
      MR_Word Var_31;

      HeadArbConstraint_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
      TailArbConstraints_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) HeadArbConstraint_24)) == (MR_Integer) 0);
      if (succeeded)
      {
        HeadConstraint_26 = (MR_Word) ((MR_Word) (HeadArbConstraint_24));
        Var_31 = (MR_Word) (&parse_tree__parse_class_scalar_common_2[4]);
        TypeCtorInfo_34_46 = (MR_Word) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0);
        TypeCtorInfo_35_47 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0);
        succeeded = mercury__list__map_3_p_2(TypeCtorInfo_34_46, TypeCtorInfo_35_47, Var_31, TailArbConstraints_25, &TailConstraints_27);
      }
      if (succeeded)
      {
        MR_Word Var_32;

        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (HeadConstraint_26));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (TailConstraints_27));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
        }
      }
      else
      {
        MR_Word Spec_28;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_42;

        Var_37 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7);
        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[117])));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_28, 2) = ((MR_Box) (Var_35));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Spec_28));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_underived_instance_6_p_0(
  MR_Word ModuleName_7,
  MR_Word TVarSet_8,
  MR_Word NameTerm_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeItemInstanceInfo_12)
{
  {
    MR_Word NameContextPieces_13;
    MR_Word VarSet_14;
    MR_Word MaybeClassName_15;

    NameContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[116]))));
    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_8, &VarSet_14);
    parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_14, NameContextPieces_13, NameTerm_9, &MaybeClassName_15);
    if (((MR_tag((MR_Word) MaybeClassName_15)) == (MR_Integer) 0))
    {
      MR_Word Specs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeClassName_15, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItemInstanceInfo_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_30));
      }
    }
    else
    {
      MR_Word ClassName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeClassName_15, (MR_Integer) 0))));
      MR_Word TypeTerms_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeClassName_15, (MR_Integer) 1))));
      MR_Word MaybeTypes_19;

      parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_4[4])), VarSet_14, NameContextPieces_13, TypeTerms_17, &MaybeTypes_19);
      if (((MR_tag((MR_Word) MaybeTypes_19)) == (MR_Integer) 0))
        *MaybeItemInstanceInfo_12 = (MR_Word) (MaybeTypes_19);
      else
      {
        MR_Word Types_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypes_19, (MR_Integer) 0))));
        MR_Word ItemInstanceInfo_21;

        {
          ItemInstanceInfo_21 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 0) = ((MR_Box) (ClassName_16));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 1) = ((MR_Box) (Types_20));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 2) = ((MR_Box) (Types_20));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 5) = ((MR_Box) (TVarSet_8));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 6) = ((MR_Box) (ModuleName_7));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 7) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(0), ItemInstanceInfo_21, 8) = ((MR_Box) (SeqNum_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeItemInstanceInfo_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ItemInstanceInfo_21));
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_class__parse_typeclass_item_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  {
    MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word ArgTerm_13;
    MR_Word Var_22;

    if (succeeded)
    {
      ArgTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
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
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_13, (MR_Integer) 0))));
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_13, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
          succeeded = (strcmp(Var_24, (MR_String) "where") == 0);
          if (succeeded)
          {
            succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NameTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
              Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
              succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MethodsTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))));
                Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
                succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
        parse_tree__parse_class__parse_non_empty_class_7_p_0(ModuleName_7, VarSet_8, NameTerm_14, MethodsTerm_15, Context_10, SeqNum_11, &MaybeItemTypeClassInfo_17);
      else
      {
        MR_Word NameTerm_72;
        MR_Word ConstraintsTerm_73;
        MR_Word Var_76;
        MR_String Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;

        succeeded = ((MR_tag((MR_Word) ArgTerm_13)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_13, (MR_Integer) 0))));
          Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_13, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_77 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 0))));
            succeeded = (strcmp(Var_77, (MR_String) "<=") == 0);
            if (succeeded)
            {
              succeeded = (Var_78 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                NameTerm_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_78, (MR_Integer) 0))));
                Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_78, (MR_Integer) 1))));
                succeeded = (Var_79 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ConstraintsTerm_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_79, (MR_Integer) 0))));
                  Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_79, (MR_Integer) 1))));
                  succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
        if (succeeded)
          parse_tree__parse_class__parse_constrained_class_7_p_0(ModuleName_7, VarSet_8, NameTerm_72, ConstraintsTerm_73, Context_10, SeqNum_11, &MaybeItemTypeClassInfo_17);
        else
        {
          MR_Word TVarSet_75;

          mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_8, &TVarSet_75);
          parse_tree__parse_class__parse_unconstrained_class_6_p_0(ModuleName_7, TVarSet_75, ArgTerm_13, Context_10, SeqNum_11, &MaybeItemTypeClassInfo_17);
        }
      }
      if (((MR_tag((MR_Word) MaybeItemTypeClassInfo_17)) == (MR_Integer) 0))
        *MaybeIOM_12 = (MR_Word) (MaybeItemTypeClassInfo_17);
      else
      {
        MR_Word ItemTypeClassInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemTypeClassInfo_17, (MR_Integer) 0))));
        MR_Word Var_28;
        MR_Word Var_29;

        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (ItemTypeClassInfo_18));
        }
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Var_29));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
        }
      }
    }
    else
    {
      MR_Word Spec_21;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_64;

      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[115])));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_21, 2) = ((MR_Box) (Var_58));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_64));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_non_empty_class_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word NameTerm_10,
  MR_Word MethodsTerm_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeItemTypeClassInfo_14)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) NameTerm_10)) == (MR_Integer) 0);
    MR_Word MaybeItemTypeClassInfo0_15;
    MR_Word MaybeClassDecls_16;
    MR_Word NameTerm_53;
    MR_Word ConstraintsTerm_54;
    MR_Word Var_57;
    MR_String Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word ItemTypeClassInfo0_17;
    MR_Word ClassDecls_18;

    if (succeeded)
    {
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameTerm_10, (MR_Integer) 0))));
      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameTerm_10, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_58 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0))));
        succeeded = (strcmp(Var_58, (MR_String) "<=") == 0);
        if (succeeded)
        {
          succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameTerm_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 0))));
            Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 1))));
            succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ConstraintsTerm_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0))));
              Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1))));
              succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
      parse_tree__parse_class__parse_constrained_class_7_p_0(ModuleName_8, VarSet_9, NameTerm_53, ConstraintsTerm_54, Context_12, SeqNum_13, &MaybeItemTypeClassInfo0_15);
    else
    {
      MR_Word TVarSet_56;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_9, &TVarSet_56);
      parse_tree__parse_class__parse_unconstrained_class_6_p_0(ModuleName_8, TVarSet_56, NameTerm_10, Context_12, SeqNum_13, &MaybeItemTypeClassInfo0_15);
    }
    parse_tree__parse_class__parse_class_decls_4_p_0(ModuleName_8, VarSet_9, MethodsTerm_11, &MaybeClassDecls_16);
    succeeded = ((MR_tag((MR_Word) MaybeItemTypeClassInfo0_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      ItemTypeClassInfo0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemTypeClassInfo0_15, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeClassDecls_16)) == (MR_Integer) 1);
      if (succeeded)
        ClassDecls_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeClassDecls_16, (MR_Integer) 0))));
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
      MR_Integer Var_33;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_9, &TVarSet_19);
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (ClassDecls_18));
      }
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo0_17, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo0_17, (MR_Integer) 1))));
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo0_17, (MR_Integer) 2))));
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo0_17, (MR_Integer) 3))));
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo0_17, (MR_Integer) 6))));
      Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClassInfo0_17, (MR_Integer) 7))));
      {
        ItemTypeClassInfo_20 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTypeClassInfo_20, 0) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), ItemTypeClassInfo_20, 1) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), ItemTypeClassInfo_20, 2) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), ItemTypeClassInfo_20, 3) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), ItemTypeClassInfo_20, 4) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), ItemTypeClassInfo_20, 5) = ((MR_Box) (TVarSet_19));
        MR_hl_field(MR_mktag(0), ItemTypeClassInfo_20, 6) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), ItemTypeClassInfo_20, 7) = ((MR_Box) (Var_33));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeItemTypeClassInfo_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ItemTypeClassInfo_20));
      }
    }
    else
    {
      MR_Word Specs_21;
      MR_Word Var_24;
      MR_Word Var_25;

      Var_24 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), MaybeItemTypeClassInfo0_15);
      Var_25 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[0]), MaybeClassDecls_16);
      Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_24, Var_25);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItemTypeClassInfo_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_21));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_class_decls_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    parse_tree__parse_item__parse_class_decl_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_class_decls_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word DeclsTerm_7,
  MR_Word * MaybeClassDecls_8)
{
  {
    MR_bool succeeded;
    MR_Word DeclTerms_9;

    succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(DeclsTerm_7, &DeclTerms_9);
    if (succeeded)
    {
      MR_Word MaybeDecls_10;
      MR_Word Var_13;
      MR_Word Results_38;
      MR_Word Specs_39;

      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (parse_tree__parse_class__parse_class_decls_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (ModuleName_5));
        MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (VarSet_6));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_class_scalar_common_1[5]), Var_13, DeclTerms_9, &MaybeDecls_10);
      parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(MaybeDecls_10, (MR_Word) ((MR_Unsigned) 0U), &Results_38, (MR_Word) ((MR_Unsigned) 0U), &Specs_39);
      if ((Specs_39 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeClassDecls_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Results_38));
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeClassDecls_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_39));
        }
    }
    else
    {
      MR_Word Spec_12;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_28;

      Var_23 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DeclsTerm_7);
      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[114])));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_21));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Spec_12));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeClassDecls_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
      }
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
    MR_Word X_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Xs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Results_22_22;
    MR_Word STATE_VARIABLE_Specs_23_23;

    parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(Xs_13, STATE_VARIABLE_Results_0_2, &STATE_VARIABLE_Results_22_22, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_23_23);
    if (((MR_tag((MR_Word) X_12)) == (MR_Integer) 0))
    {
      MR_Word CurSpecs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0))));

      *STATE_VARIABLE_Specs_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CurSpecs_17, STATE_VARIABLE_Specs_23_23);
      *STATE_VARIABLE_Results_3 = STATE_VARIABLE_Results_22_22;
    }
    else
    {
      MR_Box CurResult_16 = (MR_hl_field(MR_mktag(1), X_12, (MR_Integer) 0));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Results_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = CurResult_16;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Results_22_22));
      }
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_23_23;
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__3_160;

    conv1_HeadVar__3_160 = parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__223__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_160));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_157;

    conv0_HeadVar__3_157 = parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__220__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_157));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__181__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__179__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word NameTerm_10,
  MR_Word ConstraintsTerm_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeItemTypeClass_14)
{
  {
    MR_bool succeeded;
    MR_Word TVarSet_15;
    MR_Word MaybeParsedConstraints_16;

    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_9, &TVarSet_15);
    parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(VarSet_9, ConstraintsTerm_11, &MaybeParsedConstraints_16);
    if (((MR_tag((MR_Word) MaybeParsedConstraints_16)) == (MR_Integer) 0))
    {
      MR_Word Specs_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeParsedConstraints_16, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItemTypeClass_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_59));
      }
    }
    else
    {
      MR_Word ConstraintList_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeParsedConstraints_16, (MR_Integer) 0))));
      MR_Word FunDeps_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeParsedConstraints_16, (MR_Integer) 1))));
      MR_Word MaybeItemTypeClass0_19;

      parse_tree__parse_class__parse_unconstrained_class_6_p_0(ModuleName_8, TVarSet_15, NameTerm_10, Context_12, SeqNum_13, &MaybeItemTypeClass0_19);
      if (((MR_tag((MR_Word) MaybeItemTypeClass0_19)) == (MR_Integer) 0))
        *MaybeItemTypeClass_14 = MaybeItemTypeClass0_19;
      else
      {
        MR_Word ItemTypeClass0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemTypeClass0_19, (MR_Integer) 0))));
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
        MR_Integer Var_166;
        MR_Word Var_167;
        MR_Word Var_168;
        MR_Word Var_169;
        MR_Word Var_172;
        MR_Word Var_173;
        MR_Word _ConstraintInParams_27;
        MR_Word _FunDepInParams_29;

        parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ConstraintList_17, &ConstraintVars_22);
        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), ConstraintVars_22, &SortedConstraintVars_23);
        FunDepVars_24 = parse_tree__parse_class__tvars_in_fundeps_1_f_0(FunDeps_18);
        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), FunDepVars_24, &SortedFunDepVars_25);
        Params_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_21, (MR_Integer) 1))));
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_1));
          MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Params_26));
        }
        mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Var_60, SortedConstraintVars_23, &_ConstraintInParams_27, &ConstraintNotInParams_28);
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_2));
          MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Params_26));
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
            ConstraintErrorContext_33 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[97]));
          else
            ConstraintErrorContext_33 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[99]));
        }
        if ((FunDepNotInParams_30 == (MR_Word) ((MR_Unsigned) 0U)))
          FunDepErrorContext_36 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Integer Var_69;

          Var_69 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0), FunDeps_18);
          succeeded = (Var_69 == (MR_Integer) 1);
          if (succeeded)
            FunDepErrorContext_36 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[101]));
          else
            FunDepErrorContext_36 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[103]));
        }
        NotInParams_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), ConstraintNotInParams_28, FunDepNotInParams_30);
        Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_21, (MR_Integer) 0))));
        Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_21, (MR_Integer) 1))));
        Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_21, (MR_Integer) 4))));
        Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_21, (MR_Integer) 5))));
        Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_21, (MR_Integer) 6))));
        Var_166 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_21, (MR_Integer) 7))));
        if ((NotInParams_37 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ItemTypeClass_38;
          MR_Word Var_123 = Var_173;
          MR_Word Var_124 = Var_172;
          MR_Word Var_127 = Var_169;
          MR_Word Var_128 = Var_168;
          MR_Word Var_129 = Var_167;
          MR_Integer Var_130 = Var_166;

          {
            ItemTypeClass_38 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemTypeClass_38, 0) = ((MR_Box) (Var_123));
            MR_hl_field(MR_mktag(0), ItemTypeClass_38, 1) = ((MR_Box) (Var_124));
            MR_hl_field(MR_mktag(0), ItemTypeClass_38, 2) = ((MR_Box) (ConstraintList_17));
            MR_hl_field(MR_mktag(0), ItemTypeClass_38, 3) = ((MR_Box) (FunDeps_18));
            MR_hl_field(MR_mktag(0), ItemTypeClass_38, 4) = ((MR_Box) (Var_127));
            MR_hl_field(MR_mktag(0), ItemTypeClass_38, 5) = ((MR_Box) (Var_128));
            MR_hl_field(MR_mktag(0), ItemTypeClass_38, 6) = ((MR_Box) (Var_129));
            MR_hl_field(MR_mktag(0), ItemTypeClass_38, 7) = ((MR_Box) (Var_130));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeItemTypeClass_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ItemTypeClass_38));
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
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Word Var_107;
          MR_Word Var_108;
          MR_Word Var_109;
          MR_Word Var_110;
          MR_Word Var_113;
          MR_Integer Var_78;

          {
            Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_3));
            MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (Var_168));
          }
          ConstraintNotInParamsStrs_42 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_76, ConstraintNotInParams_28);
          {
            Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_4));
            MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (Var_168));
          }
          FunDepNotInParamsStrs_43 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_77, FunDepNotInParams_30);
          ConstraintNotInParamsPieces_44 = parse_tree__error_util__list_to_pieces_1_f_0(ConstraintNotInParamsStrs_42);
          FunDepNotInParamsPieces_45 = parse_tree__error_util__list_to_pieces_1_f_0(FunDepNotInParamsStrs_43);
          Var_78 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), NotInParams_37);
          succeeded = (Var_78 == (MR_Integer) 1);
          if (succeeded)
          {
            Prefix_46 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[105]));
            Suffix_47 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[107]));
          }
          else
          {
            Prefix_46 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[109]));
            Suffix_47 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[111]));
          }
          if ((ConstraintNotInParams_28 == (MR_Word) ((MR_Unsigned) 0U)))
            if ((FunDepNotInParams_30 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_class.parse_constrained_class\'/7", (MR_String) "no NotInParams");
                return;
              }
            }
            else
            {
              Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), FunDepNotInParamsPieces_45, FunDepErrorContext_36);
            }
          else
          if ((FunDepNotInParams_30 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ConstraintNotInParamsPieces_44, ConstraintErrorContext_33);
          }
          else
          {
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word Var_97;

            Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), FunDepNotInParamsPieces_45, FunDepErrorContext_36);
            Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[113])), Var_97);
            Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ConstraintErrorContext_33, Var_92);
            Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ConstraintNotInParamsPieces_44, Var_91);
          }
          Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Suffix_47, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])));
          Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Middle_50, Var_101);
          Pieces_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Prefix_46, Var_100);
          {
            Var_110 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (Pieces_57));
          }
          {
            Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
            MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Context_12));
            MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (Var_109));
          }
          {
            Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
            MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_58, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_58, 2) = ((MR_Box) (Var_107));
          }
          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Spec_58));
            MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeItemTypeClass_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_113));
          }
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
  {
    MR_Word Result0_9;
    MR_Word HeadConstraintTerm_45;
    MR_Word TailConstraintTerms_46;
    MR_Word Var_47;

    parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7, &Var_47);
    HeadConstraintTerm_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0))));
    TailConstraintTerms_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1))));
    parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(VarSet_6, HeadConstraintTerm_45, TailConstraintTerms_46, &Result0_9);
    if (((MR_tag((MR_Word) Result0_9)) == (MR_Integer) 0))
    {
      MR_Word Specs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_9, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_20));
      }
    }
    else
    {
      MR_Word HeadArbConstraint_10;
      MR_Word TailArbConstraints_11;
      MR_Word ArbitraryConstraints_12;
      MR_Word SimpleConstraints_13;
      MR_Word FunDeps_14;
      MR_Word BadConstraints_15;
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_9, (MR_Integer) 0))));

      HeadArbConstraint_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
      TailArbConstraints_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1))));
      {
        ArbitraryConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ArbitraryConstraints_12, 0) = ((MR_Box) (HeadArbConstraint_10));
        MR_hl_field(MR_mktag(1), ArbitraryConstraints_12, 1) = ((MR_Box) (TailArbConstraints_11));
      }
      parse_tree__parse_class__collect_simple_and_fundep_constraints_4_p_0(ArbitraryConstraints_12, &SimpleConstraints_13, &FunDeps_14, &BadConstraints_15);
      if ((BadConstraints_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SimpleConstraints_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FunDeps_14));
        }
      else
      {
        MR_Word Spec_19;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_39;

        Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintsTerm_7);
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[95])));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) (Var_32));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Spec_19));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_39));
        }
      }
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
  {
    MR_bool succeeded;
    MR_Word HeadResult_9;

    parse_tree__parse_class__parse_arbitrary_constraint_3_p_0(VarSet_5, HeadTerm_6, &HeadResult_9);
    if ((TailTerms_7 == (MR_Word) ((MR_Unsigned) 0U)))
      if (((MR_tag((MR_Word) HeadResult_9)) == (MR_Integer) 0))
        *Result_8 = (MR_Word) (HeadResult_9);
      else
      {
        MR_Word HeadConstraint_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadResult_9, (MR_Integer) 0))));
        MR_Word Var_20;

        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (HeadConstraint_10));
          MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_20));
        }
      }
    else
    {
      MR_Word HeadTailTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailTerms_7, (MR_Integer) 0))));
      MR_Word TailTailTerms_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailTerms_7, (MR_Integer) 1))));
      MR_Word TailResult_14;
      MR_Word TailConstraints_15;
      MR_Word HeadConstraint_22;

      parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(VarSet_5, HeadTailTerm_12, TailTailTerms_13, &TailResult_14);
      succeeded = ((MR_tag((MR_Word) HeadResult_9)) == (MR_Integer) 1);
      if (succeeded)
      {
        HeadConstraint_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadResult_9, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) TailResult_14)) == (MR_Integer) 1);
        if (succeeded)
          TailConstraints_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailResult_14, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_16;

        Var_16 = mercury__list__one_or_more_cons_2_f_0((MR_Word) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0), ((MR_Box) (HeadConstraint_22)), TailConstraints_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
        }
      }
      else
      {
        MR_Word Var_17;
        MR_Word Var_18;
        MR_Word Var_19;

        Var_18 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0), HeadResult_9);
        Var_19 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[7]), TailResult_14);
        Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_18, Var_19);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
        }
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
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ConstraintTerm_5)) == (MR_Integer) 0);
    MR_Word LHSTerm_7;
    MR_Word RHSTerm_8;
    MR_Word Var_34;
    MR_String Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;

    if (succeeded)
    {
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintTerm_5, (MR_Integer) 0))));
      Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintTerm_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_35 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0))));
        succeeded = (strcmp(Var_35, (MR_String) "=<") == 0);
        if (succeeded)
        {
          succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LHSTerm_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 0))));
            Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 1))));
            succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RHSTerm_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 0))));
              Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 1))));
              succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
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
        MR_Word LHSContext_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm_7, (MR_Integer) 2))));
        MR_String LHSTermStr_17;
        MR_Word LHSPieces_18;
        MR_Word LHSSpec_19;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_60;

        LHSTermStr_17 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, LHSTerm_7);
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (LHSTermStr_17));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[67])));
        }
        {
          LHSPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LHSPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[92])));
          MR_hl_field(MR_mktag(1), LHSPieces_18, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (LHSPieces_18));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (LHSContext_16));
          MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          LHSSpec_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), LHSSpec_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), LHSSpec_19, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), LHSSpec_19, 2) = ((MR_Box) (Var_54));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (LHSSpec_19));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeInstVar_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeInstVar_13, 0) = ((MR_Box) (Var_60));
        }
      }
      else
      {
        MR_Word InstVar0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LHSTerm_7, (MR_Integer) 0))));
        MR_Word InstVar1_12;

        mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVar0_10, &InstVar1_12);
        {
          MaybeInstVar_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeInstVar_13, 0) = ((MR_Box) (InstVar1_12));
        }
      }
      ContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[71])));
      parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_4[3])), VarSet_4, ContextPieces_20, RHSTerm_8, &MaybeInst_21);
      succeeded = ((MR_tag((MR_Word) MaybeInstVar_13)) == (MR_Integer) 1);
      if (succeeded)
      {
        InstVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstVar_13, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeInst_21)) == (MR_Integer) 1);
        if (succeeded)
          Inst_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_21, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_71;

        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (InstVar_22));
          MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Inst_23));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_71));
        }
      }
      else
      {
        MR_Word Specs_24;
        MR_Word Var_72;
        MR_Word Var_73;

        Var_72 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[6]), MaybeInstVar_13);
        Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), MaybeInst_21);
        Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_72, Var_73);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_24));
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
        MR_Word Args0_27;

        succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintTerm_5, &ClassName_26, &Args0_27);
        if (succeeded)
        {
          MR_Word ArgsResultContextPieces_28;
          MR_Word ArgsResult_29;

          ArgsResultContextPieces_28 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[93]))));
          parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_4[4])), VarSet_4, ArgsResultContextPieces_28, Args0_27, &ArgsResult_29);
          if (((MR_tag((MR_Word) ArgsResult_29)) == (MR_Integer) 0))
            *Result_6 = (MR_Word) (ArgsResult_29);
          else
          {
            MR_Word Args_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgsResult_29, (MR_Integer) 0))));
            MR_Word Constraint_31;

            {
              Constraint_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Constraint_31, 0) = ((MR_Box) (ClassName_26));
              MR_hl_field(MR_mktag(0), Constraint_31, 1) = ((MR_Box) (Args_30));
            }
            succeeded = parse_tree__parse_class__constraint_is_not_simple_1_p_0(Constraint_31);
            if (succeeded)
            {
              MR_Word Var_78 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Constraint_31)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Result_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_78));
              }
            }
            else
            {
              MR_Word Var_79 = (MR_Word) ((MR_Word) (Constraint_31));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Result_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_79));
              }
            }
          }
        }
        else
        {
          MR_Word Spec_33;
          MR_Word Var_90;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_97;

          Var_92 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ConstraintTerm_5);
          {
            Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (Var_92));
            MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[94])));
          }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
            MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_33, 2) = ((MR_Box) (Var_90));
          }
          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Spec_33));
            MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_97));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s * env_ptr = (struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s * env_ptr = (struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__ArgType_5 = ((MR_Word) ((env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__conv0_ArgType_5));
    parse_tree__parse_class__constraint_is_not_simple_1_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s * env_ptr = (struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__succeeded = parse_tree__prog_type__type_is_nonvar_1_p_0((env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__ArgType_5);
    if ((env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__succeeded)
    {
      (env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__succeeded = parse_tree__prog_type__type_is_nonground_1_p_0((env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__ArgType_5);
      if ((env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__succeeded)
        parse_tree__parse_class__constraint_is_not_simple_1_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s * env_ptr = (struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &(env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__conv0_ArgType_5, (env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__ArgTypes_3, parse_tree__parse_class__constraint_is_not_simple_1_p_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s env;

    {
      MR_Word _ClassName_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

      (env).parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__ArgTypes_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      parse_tree__parse_class__constraint_is_not_simple_1_p_0_4(&env);
      return (env).parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__succeeded;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__parse_fundep_2_p_0(
  MR_Word Term_3,
  MR_Word * Result_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word DomainTerm_5;
    MR_Word RangeTerm_6;
    MR_Word Var_12;
    MR_String Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Domain_8;
    MR_Word Range_9;
    MR_Word TypeCtorInfo_7_46;
    MR_Word TypeCtorInfo_8_47;
    MR_Word TypeCtorInfo_7_52;
    MR_Word TypeCtorInfo_8_53;
    MR_Word TypesTerm_44;
    MR_Word TypeTerms_45;
    MR_Word TypesTerm_50;
    MR_Word TypeTerms_51;

    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
        succeeded = (strcmp(Var_13, (MR_String) "->") == 0);
        if (succeeded)
        {
          succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            DomainTerm_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0))));
            Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1))));
            succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RangeTerm_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))));
              Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
              succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeCtorInfo_7_46 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                TypeCtorInfo_8_47 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
                TypesTerm_44 = mercury__term__coerce_1_f_0(TypeCtorInfo_7_46, TypeCtorInfo_8_47, DomainTerm_5);
                parse_tree__parse_util__conjunction_to_list_2_p_0(TypeCtorInfo_8_47, TypesTerm_44, &TypeTerms_45);
                succeeded = mercury__term__term_list_to_var_list_2_p_0(TypeCtorInfo_8_47, TypeTerms_45, &Domain_8);
                if (succeeded)
                {
                  TypeCtorInfo_7_52 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                  TypeCtorInfo_8_53 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
                  TypesTerm_50 = mercury__term__coerce_1_f_0(TypeCtorInfo_7_52, TypeCtorInfo_8_53, RangeTerm_6);
                  parse_tree__parse_util__conjunction_to_list_2_p_0(TypeCtorInfo_8_53, TypesTerm_50, &TypeTerms_51);
                  succeeded = mercury__term__term_list_to_var_list_2_p_0(TypeCtorInfo_8_53, TypeTerms_51, &Range_9);
                }
                if (succeeded)
                {
                  MR_Word Var_17;
                  MR_Word Var_18;

                  {
                    Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Domain_8));
                    MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Range_9));
                  }
                  Var_17 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (Var_18)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *Result_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
                  }
                }
                else
                {
                  MR_Word Spec_11;
                  MR_Word Var_32;
                  MR_Word Var_33;
                  MR_Word Var_34;
                  MR_Word Var_39;

                  Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_3);
                  {
                    Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Var_34));
                    MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[91])));
                  }
                  {
                    Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
                    MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_11, 2) = ((MR_Box) (Var_32));
                  }
                  {
                    Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Spec_11));
                    MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *Result_4 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_39));
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
}

static void MR_CALL 
parse_tree__parse_class__collect_simple_and_fundep_constraints_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Constraint_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Constraints_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_SimpleConstraints_18_18;
    MR_Word STATE_VARIABLE_FunDeps_19_19;
    MR_Word STATE_VARIABLE_BadConstraints_20_20;

    parse_tree__parse_class__collect_simple_and_fundep_constraints_4_p_0(Constraints_6, &STATE_VARIABLE_SimpleConstraints_18_18, &STATE_VARIABLE_FunDeps_19_19, &STATE_VARIABLE_BadConstraints_20_20);
    switch (MR_tag((MR_Word) Constraint_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SimpleConstraint_10 = (MR_Word) ((MR_Word) (Constraint_5));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SimpleConstraint_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_SimpleConstraints_18_18));
          }
          *HeadVar__3_3 = STATE_VARIABLE_FunDeps_19_19;
          *HeadVar__4_4 = STATE_VARIABLE_BadConstraints_20_20;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Constraint_5));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_BadConstraints_20_20));
          }
          *HeadVar__2_2 = STATE_VARIABLE_SimpleConstraints_18_18;
          *HeadVar__3_3 = STATE_VARIABLE_FunDeps_19_19;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FunDep_11 = (MR_Word) (MR_body((MR_Word) (Constraint_5), (MR_Integer) 2));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FunDep_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_FunDeps_19_19));
          }
          *HeadVar__2_2 = STATE_VARIABLE_SimpleConstraints_18_18;
          *HeadVar__4_4 = STATE_VARIABLE_BadConstraints_20_20;
        }
        break;
      case (MR_Integer) 3:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Constraint_5));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_BadConstraints_20_20));
          }
          *HeadVar__2_2 = STATE_VARIABLE_SimpleConstraints_18_18;
          *HeadVar__3_3 = STATE_VARIABLE_FunDeps_19_19;
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_83;

    parse_tree__parse_class__IntroducedFrom__pred__parse_unconstrained_class__338__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_83);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_83));
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_unconstrained_class_6_p_0(
  MR_Word ModuleName_7,
  MR_Word TVarSet_8,
  MR_Word NameTerm_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeTypeClassInfo_12)
{
  {
    MR_bool succeeded;
    MR_Word ContextPieces_13;
    MR_Word VarSet_14;
    MR_Word MaybeClassName_15;

    ContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[88]))));
    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_8, &VarSet_14);
    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_7, NameTerm_9, VarSet_14, ContextPieces_13, &MaybeClassName_15);
    if (((MR_tag((MR_Word) MaybeClassName_15)) == (MR_Integer) 0))
    {
      MR_Word Specs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeClassName_15, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTypeClassInfo_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_28));
      }
    }
    else
    {
      MR_Word ClassName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeClassName_15, (MR_Integer) 0))));
      MR_Word TermVars0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeClassName_15, (MR_Integer) 1))));
      MR_Word TermVars_18;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_class_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_class_scalar_common_2[3]), TermVars0_17, &TermVars_18);
      if ((TermVars_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_20;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_71;

        Var_66 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NameTerm_9);
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[89])));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) (Var_64));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Spec_20));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTypeClassInfo_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
        }
      }
      else
      {
        MR_Word Vars_23;
        MR_Word SortedTermVars_24;
        MR_Integer NumSortedTermVars_25;
        MR_Integer NumTermVars_26;

        succeeded = mercury__term__term_list_to_var_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TermVars_18, &Vars_23);
        if (succeeded)
        {
          mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[4]), TermVars_18, &SortedTermVars_24);
          mercury__list__length_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[4]), SortedTermVars_24, &NumSortedTermVars_25);
          mercury__list__length_2_p_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[4]), TermVars_18, &NumTermVars_26);
          succeeded = (NumSortedTermVars_25 == NumTermVars_26);
        }
        if (succeeded)
        {
          MR_Word TypeClassInfo_27;

          {
            TypeClassInfo_27 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeClassInfo_27, 0) = ((MR_Box) (ClassName_16));
            MR_hl_field(MR_mktag(0), TypeClassInfo_27, 1) = ((MR_Box) (Vars_23));
            MR_hl_field(MR_mktag(0), TypeClassInfo_27, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), TypeClassInfo_27, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), TypeClassInfo_27, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), TypeClassInfo_27, 5) = ((MR_Box) (TVarSet_8));
            MR_hl_field(MR_mktag(0), TypeClassInfo_27, 6) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), TypeClassInfo_27, 7) = ((MR_Box) (SeqNum_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeTypeClassInfo_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeClassInfo_27));
          }
        }
        else
        {
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_52;
          MR_Word Spec_74;

          Var_47 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NameTerm_9);
          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[90])));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_74, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_74, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_74, 2) = ((MR_Box) (Var_45));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Spec_74));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeTypeClassInfo_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_52));
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
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__parse_class__tvars_in_fundep_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_class__tvars_in_fundeps_1_f_0(
  MR_Word FunDeps_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    Var_4 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0), (MR_Word) (&parse_tree__parse_class_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_class_scalar_common_2[2]), FunDeps_3);
    HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__parse_class_scalar_common_1[1]), Var_4);
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_class____Unify____arbitrary_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_class____Compare____arbitrary_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_class____Unify____arbitrary_constraints_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_class____Compare____arbitrary_constraints_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____maybe_class_and_inst_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_class____Unify____maybe_class_and_inst_constraints_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class____Compare____maybe_class_and_inst_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_class____Compare____maybe_class_and_inst_constraints_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
