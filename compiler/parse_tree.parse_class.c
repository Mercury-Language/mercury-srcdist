/*
** Automatically generated from `parse_class.m'
** by the Mercury compiler,
** version rotd-2017-07-23
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


/* :- module parse_tree.parse_class. */
/* :- implementation. */

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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0;

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
parse_tree__parse_class__IntroducedFrom__func__check_tvars_in_instance_constraint__834__1_2_f_0(
  MR_Word parse_tree__parse_class__TVarSet_12,
  MR_Word parse_tree__parse_class__HeadVar__2_57);

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__check_tvars_in_instance_constraint__831__1_2_p_0(
  MR_Word parse_tree__parse_class__TypesVars_17,
  MR_Word parse_tree__parse_class__HeadVar__2_52);

static void MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_unconstrained_class__337__1_2_p_0(
  MR_Word parse_tree__parse_class__HeadVar__1_82,
  MR_Word * parse_tree__parse_class__HeadVar__2_83);

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__222__1_2_f_0(
  MR_Word parse_tree__parse_class__HeadVar__1_169,
  MR_Word parse_tree__parse_class__HeadVar__2_160);

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__219__1_2_f_0(
  MR_Word parse_tree__parse_class__HeadVar__1_169,
  MR_Word parse_tree__parse_class__HeadVar__2_157);

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__180__1_2_p_0(
  MR_Word parse_tree__parse_class__Params_26,
  MR_Word parse_tree__parse_class__HeadVar__2_152);

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__178__1_2_p_0(
  MR_Word parse_tree__parse_class__Params_26,
  MR_Word parse_tree__parse_class__HeadVar__2_150);

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraints_0_0(
  MR_Word * parse_tree__parse_class__HeadVar__1_1,
  MR_Word parse_tree__parse_class__HeadVar__2_2,
  MR_Word parse_tree__parse_class__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraints_0_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1,
  MR_Word parse_tree__parse_class__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraint_0_0(
  MR_Word * parse_tree__parse_class__HeadVar__1_1,
  MR_Word parse_tree__parse_class__HeadVar__2_2,
  MR_Word parse_tree__parse_class__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraint_0_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1,
  MR_Word parse_tree__parse_class__HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__parse_class__is_in_list_2_p_0(
  MR_Word parse_tree__parse_class__TypeInfo_for_T_5,
  MR_Word parse_tree__parse_class__List_3,
  MR_Box parse_tree__parse_class__Element_4);

static void MR_CALL 
parse_tree__parse_class__term_to_instance_method_4_p_0(
  MR_Word parse_tree__parse_class___ModuleName_5,
  MR_Word parse_tree__parse_class__VarSet_6,
  MR_Word parse_tree__parse_class__MethodTerm_7,
  MR_Word * parse_tree__parse_class__MaybeInstanceMethod_8);

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(
  MR_Word parse_tree__parse_class__VarSet_6,
  MR_Word parse_tree__parse_class__MethodTerm_7,
  MR_Word * parse_tree__parse_class__MaybeInstanceMethod_8);

static MR_bool MR_CALL 
parse_tree__parse_class__get_simple_constraint_2_p_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1,
  MR_Word * parse_tree__parse_class__Constraint_3);

static MR_Word MR_CALL 
parse_tree__parse_class__tvars_in_fundep_1_f_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_class__collect_class_and_inst_constraints_4_p_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1,
  MR_Word * parse_tree__parse_class__HeadVar__2_2,
  MR_Word * parse_tree__parse_class__HeadVar__3_3,
  MR_Word * parse_tree__parse_class__HeadVar__4_4);

static MR_bool MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box * parse_tree__parse_class__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class__parse_non_empty_instance_8_p_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box * parse_tree__parse_class__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class__parse_non_empty_instance_8_p_0(
  MR_Word parse_tree__parse_class__ModuleName_9,
  MR_Word parse_tree__parse_class__VarSet_10,
  MR_Word parse_tree__parse_class__TVarSet_11,
  MR_Word parse_tree__parse_class__NameTerm_12,
  MR_Word parse_tree__parse_class__MethodsTerm_13,
  MR_Word parse_tree__parse_class__Context_14,
  MR_Integer parse_tree__parse_class__SeqNum_15,
  MR_Word * parse_tree__parse_class__MaybeItemInstanceInfo_16);

static MR_Box MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_2(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0(
  MR_Word parse_tree__parse_class__ItemInstanceInfo_4,
  MR_Word parse_tree__parse_class__NameTerm_5,
  MR_Word * parse_tree__parse_class__MaybeSpec_6);

static void MR_CALL 
parse_tree__parse_class__parse_instance_name_6_p_0(
  MR_Word parse_tree__parse_class__ModuleName_7,
  MR_Word parse_tree__parse_class__TVarSet_8,
  MR_Word parse_tree__parse_class__ArgTerm_9,
  MR_Word parse_tree__parse_class__Context_10,
  MR_Integer parse_tree__parse_class__SeqNum_11,
  MR_Word * parse_tree__parse_class__MaybeItemInstanceInfo_12);

static MR_bool MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box * parse_tree__parse_class__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word parse_tree__parse_class__VarSet_6,
  MR_Word parse_tree__parse_class__ConstraintsTerm_7,
  MR_Word * parse_tree__parse_class__Result_8);

static void MR_CALL 
parse_tree__parse_class__parse_underived_instance_6_p_0(
  MR_Word parse_tree__parse_class__ModuleName_7,
  MR_Word parse_tree__parse_class__TVarSet_8,
  MR_Word parse_tree__parse_class__NameTerm_9,
  MR_Word parse_tree__parse_class__Context_10,
  MR_Integer parse_tree__parse_class__SeqNum_11,
  MR_Word * parse_tree__parse_class__MaybeItemInstanceInfo_12);

static void MR_CALL 
parse_tree__parse_class__parse_non_empty_class_7_p_0(
  MR_Word parse_tree__parse_class__ModuleName_8,
  MR_Word parse_tree__parse_class__VarSet_9,
  MR_Word parse_tree__parse_class__NameTerm_10,
  MR_Word parse_tree__parse_class__MethodsTerm_11,
  MR_Word parse_tree__parse_class__Context_12,
  MR_Integer parse_tree__parse_class__SeqNum_13,
  MR_Word * parse_tree__parse_class__MaybeItemTypeClassInfo_14);

static void MR_CALL 
parse_tree__parse_class__parse_class_methods_4_p_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box * parse_tree__parse_class__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class__parse_class_methods_4_p_0(
  MR_Word parse_tree__parse_class__ModuleName_5,
  MR_Word parse_tree__parse_class__VarSet_6,
  MR_Word parse_tree__parse_class__MethodsTerm_7,
  MR_Word * parse_tree__parse_class__MaybeClassMethods_8);

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1,
  MR_Word parse_tree__parse_class__STATE_VARIABLE_Methods_0_2,
  MR_Word * parse_tree__parse_class__STATE_VARIABLE_Methods_3,
  MR_Word parse_tree__parse_class__STATE_VARIABLE_Specs_0_4,
  MR_Word * parse_tree__parse_class__STATE_VARIABLE_Specs_5);

static MR_Box MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_4(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_3(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_2(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0(
  MR_Word parse_tree__parse_class__ModuleName_8,
  MR_Word parse_tree__parse_class__VarSet_9,
  MR_Word parse_tree__parse_class__NameTerm_10,
  MR_Word parse_tree__parse_class__ConstraintsTerm_11,
  MR_Word parse_tree__parse_class__Context_12,
  MR_Integer parse_tree__parse_class__SeqNum_13,
  MR_Word * parse_tree__parse_class__MaybeItemTypeClass_14);

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word parse_tree__parse_class__VarSet_6,
  MR_Word parse_tree__parse_class__ConstraintsTerm_7,
  MR_Word * parse_tree__parse_class__Result_8);

static void MR_CALL 
parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(
  MR_Word parse_tree__parse_class__VarSet_5,
  MR_Word parse_tree__parse_class__HeadTerm_6,
  MR_Word parse_tree__parse_class__TailTerms_7,
  MR_Word * parse_tree__parse_class__Result_8);

static void MR_CALL 
parse_tree__parse_class__parse_arbitrary_constraint_3_p_0(
  MR_Word parse_tree__parse_class__VarSet_4,
  MR_Word parse_tree__parse_class__ConstraintTerm_5,
  MR_Word * parse_tree__parse_class__Result_6);

static void MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0_1(
  void * parse_tree__parse_class__env_ptr_arg);

static void MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0_3(
  void * parse_tree__parse_class__env_ptr_arg);

static void MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0_2(
  void * parse_tree__parse_class__env_ptr_arg);

static void MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0_4(
  void * parse_tree__parse_class__env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1);

static MR_bool MR_CALL 
parse_tree__parse_class__parse_fundep_2_p_0(
  MR_Word parse_tree__parse_class__Term_3,
  MR_Word * parse_tree__parse_class__Result_4);

static void MR_CALL 
parse_tree__parse_class__collect_simple_and_fundep_constraints_4_p_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1,
  MR_Word * parse_tree__parse_class__HeadVar__2_2,
  MR_Word * parse_tree__parse_class__HeadVar__3_3,
  MR_Word * parse_tree__parse_class__HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_class__parse_unconstrained_class_6_p_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box * parse_tree__parse_class__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class__parse_unconstrained_class_6_p_0(
  MR_Word parse_tree__parse_class__ModuleName_7,
  MR_Word parse_tree__parse_class__TVarSet_8,
  MR_Word parse_tree__parse_class__NameTerm_9,
  MR_Word parse_tree__parse_class__Context_10,
  MR_Integer parse_tree__parse_class__SeqNum_11,
  MR_Word * parse_tree__parse_class__MaybeTypeClassInfo_12);

static MR_Box MR_CALL 
parse_tree__parse_class__tvars_in_fundeps_1_f_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__parse_class__tvars_in_fundeps_1_f_0(
  MR_Word parse_tree__parse_class__FunDeps_3);

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraint_0_0_10001(
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box parse_tree__parse_class__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraint_0_0_10001(
  MR_Box * parse_tree__parse_class__wrapper_arg_1,
  MR_Box parse_tree__parse_class__wrapper_arg_2,
  MR_Box parse_tree__parse_class__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraints_0_0_10001(
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box parse_tree__parse_class__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraints_0_0_10001(
  MR_Box * parse_tree__parse_class__wrapper_arg_1,
  MR_Box parse_tree__parse_class__wrapper_arg_2,
  MR_Box parse_tree__parse_class__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____maybe_class_and_inst_constraints_0_0_10001(
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box parse_tree__parse_class__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_class____Compare____maybe_class_and_inst_constraints_0_0_10001(
  MR_Box * parse_tree__parse_class__wrapper_arg_1,
  MR_Box parse_tree__parse_class__wrapper_arg_2,
  MR_Box parse_tree__parse_class__wrapper_arg_3);


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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0))
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "where [method_signature_1, ... method_signature_m]"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "optionally followed by"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ":- typeclass tcname(T1, ... Tn)"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "typeclass"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "instance"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and ground types"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "constraints may only constrain type variables"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in typeclass declarations."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: functional dependencies are only allowed"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may only constrain type variables and ground types."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: constraints on class declarations"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at least one class parameter."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: typeclass declarations require"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[55])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "as class parameters."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected distinct variables"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected a list of class methods."))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of an inst constraint."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may not be the subject"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of an inst constraint:"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the constraining inst"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "as class name or inst constraint."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected atom"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be comma-separated lists of variables."))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of a functional dependency"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the domain and range"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: constraints on instance declarations"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[51])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in constraints on instance declaration."))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected list of instance methods."))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In typeclass declaration:"))
  },
  /* row 89 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 90 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 91 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a non-variable inst such as"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In class constraint:"))
  },
  /* row 94 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 95 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the superclass constraint"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in superclass constraints"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the functional dependency"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in functional dependencies"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type variable"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a parameter of this type class."))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type variables"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are not parameters of this type class."))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 114 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In instance declaration:"))
  },
  /* row 117 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unbound type variable"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unbound type variables"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 122 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 123 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 124 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 125 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_4[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pred(<Name> / <Arity>) is <InstanceMethod>"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "func(<Name> / <Arity>) is <InstanceMethod>"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pred(<Name> / <Arity>) is <InstanceName>"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "func(<Name> / <Arity>) is <InstanceName>"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_3[1])),
    ((MR_Box) (parse_tree__parse_class__parse_unconstrained_class_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_3[3])),
    ((MR_Box) (parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_class_scalar_common_3[3])),
    ((MR_Box) (parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_class_scalar_common_3[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)),
    ((MR_Box) (&parse_tree__parse_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 8))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_class__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_class__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_class__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_0 = {
  (MR_String) "simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_1 = {
  (MR_String) "non_simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_2 = {
  (MR_String) "inst_constraint",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0
};

static const MR_DuFunctorDesc parse_tree__parse_class__parse_tree__parse_class__du_functor_desc_arbitrary_constraint_0_3 = {
  (MR_String) "fundep",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  parse_tree__parse_class__parse_tree__parse_class__field_types_arbitrary_constraint_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_2
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_class__parse_tree__parse_class__du_stag_ordered_arbitrary_constraint_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_class____Unify____arbitrary_constraint_0_0_10001)),
  ((MR_Box) (parse_tree__parse_class____Compare____arbitrary_constraint_0_0_10001)),
  (MR_String) "parse_tree.parse_class",
  (MR_String) "arbitrary_constraint",
  {     parse_tree__parse_class__parse_tree__parse_class__du_name_ordered_arbitrary_constraint_0 },
  {     parse_tree__parse_class__parse_tree__parse_class__du_ptag_ordered_arbitrary_constraint_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__parse_class__parse_tree__parse_class__functor_number_map_arbitrary_constraint_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__list__ti_one_or_more_1parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_class____Unify____arbitrary_constraints_0_0_10001)),
  ((MR_Box) (parse_tree__parse_class____Compare____arbitrary_constraints_0_0_10001)),
  (MR_String) "parse_tree.parse_class",
  (MR_String) "arbitrary_constraints",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__parse_class__list__ti_one_or_more_1parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_class__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__parse_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_class__parse_tree__maybe_error__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) &parse_tree__parse_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &parse_tree__parse_class__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_maybe_class_and_inst_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_class____Unify____maybe_class_and_inst_constraints_0_0_10001)),
  ((MR_Box) (parse_tree__parse_class____Compare____maybe_class_and_inst_constraints_0_0_10001)),
  (MR_String) "parse_tree.parse_class",
  (MR_String) "maybe_class_and_inst_constraints",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__parse_class__parse_tree__maybe_error__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__check_tvars_in_instance_constraint__834__1_2_f_0(
  MR_Word parse_tree__parse_class__TVarSet_12,
  MR_Word parse_tree__parse_class__HeadVar__2_57)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_String parse_tree__parse_class__HeadVar__3_58;

    {
      parse_tree__parse_class__HeadVar__3_58 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_class__TVarSet_12, parse_tree__parse_class__HeadVar__2_57);
    }
    return parse_tree__parse_class__HeadVar__3_58;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__check_tvars_in_instance_constraint__831__1_2_p_0(
  MR_Word parse_tree__parse_class__TypesVars_17,
  MR_Word parse_tree__parse_class__HeadVar__2_52)
{
  {
    MR_bool parse_tree__parse_class__succeeded;

    {
      parse_tree__parse_class__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__parse_class_scalar_common_1[1], ((MR_Box) (parse_tree__parse_class__HeadVar__2_52)), parse_tree__parse_class__TypesVars_17);
    }
    return parse_tree__parse_class__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_unconstrained_class__337__1_2_p_0(
  MR_Word parse_tree__parse_class__HeadVar__1_82,
  MR_Word * parse_tree__parse_class__HeadVar__2_83)
{
  {
    MR_bool parse_tree__parse_class__succeeded;

    {
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_class__HeadVar__1_82, parse_tree__parse_class__HeadVar__2_83);
    }
  }
}

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__222__1_2_f_0(
  MR_Word parse_tree__parse_class__HeadVar__1_169,
  MR_Word parse_tree__parse_class__HeadVar__2_160)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_String parse_tree__parse_class__HeadVar__3_161;

    {
      parse_tree__parse_class__HeadVar__3_161 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_class__HeadVar__1_169, parse_tree__parse_class__HeadVar__2_160);
    }
    return parse_tree__parse_class__HeadVar__3_161;
  }
}

static MR_String MR_CALL 
parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__219__1_2_f_0(
  MR_Word parse_tree__parse_class__HeadVar__1_169,
  MR_Word parse_tree__parse_class__HeadVar__2_157)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_String parse_tree__parse_class__HeadVar__3_158;

    {
      parse_tree__parse_class__HeadVar__3_158 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_class__HeadVar__1_169, parse_tree__parse_class__HeadVar__2_157);
    }
    return parse_tree__parse_class__HeadVar__3_158;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__180__1_2_p_0(
  MR_Word parse_tree__parse_class__Params_26,
  MR_Word parse_tree__parse_class__HeadVar__2_152)
{
  {
    MR_bool parse_tree__parse_class__succeeded;

    {
      parse_tree__parse_class__succeeded = parse_tree__parse_class__is_in_list_2_p_0((MR_Word) &parse_tree__parse_class_scalar_common_1[1], parse_tree__parse_class__Params_26, ((MR_Box) (parse_tree__parse_class__HeadVar__2_152)));
    }
    return parse_tree__parse_class__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__178__1_2_p_0(
  MR_Word parse_tree__parse_class__Params_26,
  MR_Word parse_tree__parse_class__HeadVar__2_150)
{
  {
    MR_bool parse_tree__parse_class__succeeded;

    {
      parse_tree__parse_class__succeeded = parse_tree__parse_class__is_in_list_2_p_0((MR_Word) &parse_tree__parse_class_scalar_common_1[1], parse_tree__parse_class__Params_26, ((MR_Box) (parse_tree__parse_class__HeadVar__2_150)));
    }
    return parse_tree__parse_class__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_class____Compare____maybe_class_and_inst_constraints_0_0(
  MR_Word * parse_tree__parse_class__HeadVar__1_1,
  MR_Word parse_tree__parse_class__HeadVar__2_2,
  MR_Word parse_tree__parse_class__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__Cast_HeadVar1_4 = parse_tree__parse_class__HeadVar__2_2;
    MR_Word parse_tree__parse_class__Cast_HeadVar2_5 = parse_tree__parse_class__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_class_scalar_common_2[1], parse_tree__parse_class__HeadVar__1_1, ((MR_Box) (parse_tree__parse_class__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__parse_class__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_class____Unify____maybe_class_and_inst_constraints_0_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1,
  MR_Word parse_tree__parse_class__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__Cast_HeadVar1_3 = parse_tree__parse_class__HeadVar__1_1;
    MR_Word parse_tree__parse_class__Cast_HeadVar2_4 = parse_tree__parse_class__HeadVar__2_2;

    {
      parse_tree__parse_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_class_scalar_common_2[1], ((MR_Box) (parse_tree__parse_class__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__parse_class__Cast_HeadVar2_4)));
    }
    return parse_tree__parse_class__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraints_0_0(
  MR_Word * parse_tree__parse_class__HeadVar__1_1,
  MR_Word parse_tree__parse_class__HeadVar__2_2,
  MR_Word parse_tree__parse_class__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__Cast_HeadVar1_4 = parse_tree__parse_class__HeadVar__2_2;
    MR_Word parse_tree__parse_class__Cast_HeadVar2_5 = parse_tree__parse_class__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_class_scalar_common_1[7], parse_tree__parse_class__HeadVar__1_1, ((MR_Box) (parse_tree__parse_class__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__parse_class__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraints_0_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1,
  MR_Word parse_tree__parse_class__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__Cast_HeadVar1_3 = parse_tree__parse_class__HeadVar__1_1;
    MR_Word parse_tree__parse_class__Cast_HeadVar2_4 = parse_tree__parse_class__HeadVar__2_2;

    {
      parse_tree__parse_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_class_scalar_common_1[7], ((MR_Box) (parse_tree__parse_class__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__parse_class__Cast_HeadVar2_4)));
    }
    return parse_tree__parse_class__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraint_0_0(
  MR_Word * parse_tree__parse_class__HeadVar__1_1,
  MR_Word parse_tree__parse_class__HeadVar__2_2,
  MR_Word parse_tree__parse_class__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Integer parse_tree__parse_class__CastX_45 = (MR_Integer) parse_tree__parse_class__HeadVar__2_2;
    MR_Integer parse_tree__parse_class__CastY_46 = (MR_Integer) parse_tree__parse_class__HeadVar__3_3;

    parse_tree__parse_class__succeeded = (parse_tree__parse_class__CastX_45 == parse_tree__parse_class__CastY_46);
    if (parse_tree__parse_class__succeeded)
      *parse_tree__parse_class__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_class__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_class__Var_56 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__HeadVar__2_2), (MR_Integer) 0);

            switch (MR_tag((MR_Word) parse_tree__parse_class__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_class__ArgY1_5 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__HeadVar__3_3), (MR_Integer) 0);

                  {
                    parse_tree__prog_data____Compare____prog_constraint_0_0(parse_tree__parse_class__HeadVar__1_1, parse_tree__parse_class__Var_56, parse_tree__parse_class__ArgY1_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_class__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_class__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *parse_tree__parse_class__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_class__Var_55 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__HeadVar__2_2), (MR_Integer) 1);

            switch (MR_tag((MR_Word) parse_tree__parse_class__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_class__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_class__ArgY1_16 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__HeadVar__3_3), (MR_Integer) 1);

                  {
                    parse_tree__prog_data____Compare____prog_constraint_0_0(parse_tree__parse_class__HeadVar__1_1, parse_tree__parse_class__Var_55, parse_tree__parse_class__ArgY1_16);
                  }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_class__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *parse_tree__parse_class__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__parse_class__Var_52 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__HeadVar__2_2), (MR_Integer) 2);

            switch (MR_tag((MR_Word) parse_tree__parse_class__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_class__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_class__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__parse_class__ArgY1_44 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__HeadVar__3_3), (MR_Integer) 2);

                  {
                    parse_tree__prog_data____Compare____prog_fundep_0_0(parse_tree__parse_class__HeadVar__1_1, parse_tree__parse_class__Var_52, parse_tree__parse_class__ArgY1_44);
                  }
                }
                break;
              case (MR_Integer) 3:
                *parse_tree__parse_class__HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word parse_tree__parse_class__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_class__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word parse_tree__parse_class__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_class__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_class__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_class__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_class__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_class__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__parse_class__ArgY1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_class__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word parse_tree__parse_class__ArgY2_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_class__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word parse_tree__parse_class__Var_32;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_class_scalar_common_1[6], &parse_tree__parse_class__Var_32, ((MR_Box) (parse_tree__parse_class__Var_54)), ((MR_Box) (parse_tree__parse_class__ArgY1_29)));
                  }
                  parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_32 == (MR_Integer) 0);
                  parse_tree__parse_class__succeeded = !(parse_tree__parse_class__succeeded);
                  if (parse_tree__parse_class__succeeded)
                    *parse_tree__parse_class__HeadVar__1_1 = parse_tree__parse_class__Var_32;
                  else
                    {
                      parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__parse_class__HeadVar__1_1, parse_tree__parse_class__Var_53, parse_tree__parse_class__ArgY2_31);
                    }
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
  MR_Word parse_tree__parse_class__HeadVar__1_1,
  MR_Word parse_tree__parse_class__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Integer parse_tree__parse_class__CastX_13 = (MR_Integer) parse_tree__parse_class__HeadVar__1_1;
    MR_Integer parse_tree__parse_class__CastY_14 = (MR_Integer) parse_tree__parse_class__HeadVar__2_2;

    parse_tree__parse_class__succeeded = (parse_tree__parse_class__CastX_13 == parse_tree__parse_class__CastY_14);
    if (parse_tree__parse_class__succeeded)
      parse_tree__parse_class__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_class__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_class__ArgX1_3 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__HeadVar__1_1), (MR_Integer) 0);
            MR_Word parse_tree__parse_class__ArgY1_4;

            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__ArgY1_4 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__HeadVar__2_2), (MR_Integer) 0);
                {
                  parse_tree__parse_class__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(parse_tree__parse_class__ArgX1_3, parse_tree__parse_class__ArgY1_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_class__ArgX1_5 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__HeadVar__1_1), (MR_Integer) 1);
            MR_Word parse_tree__parse_class__ArgY1_6;

            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__ArgY1_6 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__HeadVar__2_2), (MR_Integer) 1);
                {
                  parse_tree__parse_class__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(parse_tree__parse_class__ArgX1_5, parse_tree__parse_class__ArgY1_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__parse_class__ArgX1_11 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__HeadVar__1_1), (MR_Integer) 2);
            MR_Word parse_tree__parse_class__ArgY1_12;

            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__ArgY1_12 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__HeadVar__2_2), (MR_Integer) 2);
                {
                  parse_tree__parse_class__succeeded = parse_tree__prog_data____Unify____prog_fundep_0_0(parse_tree__parse_class__ArgX1_11, parse_tree__parse_class__ArgY1_12);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word parse_tree__parse_class__TypeInfo_16_16;
            MR_Word parse_tree__parse_class__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_class__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_class__ArgY1_8;
            MR_Word parse_tree__parse_class__ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_class__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__parse_class__ArgY2_10;

            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_class__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__parse_class__ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_class__HeadVar__2_2, (MR_Integer) 1)));
                parse_tree__parse_class__TypeInfo_16_16 = (MR_Word) &parse_tree__parse_class_scalar_common_1[6];
                {
                  parse_tree__parse_class__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_class__TypeInfo_16_16, ((MR_Box) (parse_tree__parse_class__ArgX1_7)), ((MR_Box) (parse_tree__parse_class__ArgY1_8)));
                }
                if (parse_tree__parse_class__succeeded)
                  {
                    parse_tree__parse_class__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__parse_class__ArgX2_9, parse_tree__parse_class__ArgY2_10);
                  }
              }
          }
          break;
      }
    return parse_tree__parse_class__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__is_in_list_2_p_0(
  MR_Word parse_tree__parse_class__TypeInfo_for_T_5,
  MR_Word parse_tree__parse_class__List_3,
  MR_Box parse_tree__parse_class__Element_4)
{
  {
    MR_bool parse_tree__parse_class__succeeded;

    {
      parse_tree__parse_class__succeeded = mercury__list__member_2_p_0(parse_tree__parse_class__TypeInfo_for_T_5, parse_tree__parse_class__Element_4, parse_tree__parse_class__List_3);
    }
    return parse_tree__parse_class__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class__term_to_instance_method_4_p_0(
  MR_Word parse_tree__parse_class___ModuleName_5,
  MR_Word parse_tree__parse_class__VarSet_6,
  MR_Word parse_tree__parse_class__MethodTerm_7,
  MR_Word * parse_tree__parse_class__MaybeInstanceMethod_8)
{
  {
    MR_bool parse_tree__parse_class__succeeded;

    {
      parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(parse_tree__parse_class__VarSet_6, parse_tree__parse_class__MethodTerm_7, parse_tree__parse_class__MaybeInstanceMethod_8);
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(
  MR_Word parse_tree__parse_class__VarSet_6,
  MR_Word parse_tree__parse_class__MethodTerm_7,
  MR_Word * parse_tree__parse_class__MaybeInstanceMethod_8)
{
  {
    MR_bool parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__MethodTerm_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_class__ClassMethodTerm_9;
    MR_Word parse_tree__parse_class__InstanceMethodTerm_10;
    MR_Word parse_tree__parse_class__TermContext_11;
    MR_Word parse_tree__parse_class__Var_42;
    MR_String parse_tree__parse_class__Var_43;
    MR_Word parse_tree__parse_class__Var_44;
    MR_Word parse_tree__parse_class__Var_45;
    MR_Word parse_tree__parse_class__Var_46;

    if (parse_tree__parse_class__succeeded)
      {
        parse_tree__parse_class__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__MethodTerm_7, (MR_Integer) 0)));
        parse_tree__parse_class__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__MethodTerm_7, (MR_Integer) 1)));
        parse_tree__parse_class__TermContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__MethodTerm_7, (MR_Integer) 2)));
        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_42)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_class__succeeded)
          {
            parse_tree__parse_class__Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_42, (MR_Integer) 0)));
            parse_tree__parse_class__succeeded = (strcmp(parse_tree__parse_class__Var_43, (MR_String) "is") == 0);
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_44)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_class__succeeded)
                  {
                    parse_tree__parse_class__ClassMethodTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_44, (MR_Integer) 0)));
                    parse_tree__parse_class__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_44, (MR_Integer) 1)));
                    parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_45)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_class__succeeded)
                      {
                        parse_tree__parse_class__InstanceMethodTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_45, (MR_Integer) 0)));
                        parse_tree__parse_class__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_45, (MR_Integer) 1)));
                        parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_class__succeeded)
      {
        MR_Word parse_tree__parse_class__PredNameTerm_14;
        MR_Word parse_tree__parse_class__ArityTerm_15;
        MR_Word parse_tree__parse_class__SlashTerm_12;
        MR_Word parse_tree__parse_class__Var_47;
        MR_String parse_tree__parse_class__Var_48;
        MR_Word parse_tree__parse_class__Var_49;
        MR_Word parse_tree__parse_class__Var_50;
        MR_Word parse_tree__parse_class__Var_51;
        MR_String parse_tree__parse_class__Var_52;
        MR_Word parse_tree__parse_class__Var_53;
        MR_Word parse_tree__parse_class__Var_54;
        MR_Word parse_tree__parse_class__Var_55;
        MR_Word parse_tree__parse_class__Var_13;
        MR_Word parse_tree__parse_class__Var_16;

        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__ClassMethodTerm_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_class__succeeded)
          {
            parse_tree__parse_class__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ClassMethodTerm_9, (MR_Integer) 0)));
            parse_tree__parse_class__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ClassMethodTerm_9, (MR_Integer) 1)));
            parse_tree__parse_class__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ClassMethodTerm_9, (MR_Integer) 2)));
            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_47)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__Var_48 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_47, (MR_Integer) 0)));
                parse_tree__parse_class__succeeded = (strcmp(parse_tree__parse_class__Var_48, (MR_String) "pred") == 0);
                if (parse_tree__parse_class__succeeded)
                  {
                    parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_49)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_class__succeeded)
                      {
                        parse_tree__parse_class__SlashTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_49, (MR_Integer) 0)));
                        parse_tree__parse_class__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_49, (MR_Integer) 1)));
                        parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__parse_class__succeeded)
                          {
                            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__SlashTerm_12)) == (MR_mktag((MR_Integer) 0)));
                            if (parse_tree__parse_class__succeeded)
                              {
                                parse_tree__parse_class__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__SlashTerm_12, (MR_Integer) 0)));
                                parse_tree__parse_class__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__SlashTerm_12, (MR_Integer) 1)));
                                parse_tree__parse_class__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__SlashTerm_12, (MR_Integer) 2)));
                                parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_51)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__parse_class__succeeded)
                                  {
                                    parse_tree__parse_class__Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_51, (MR_Integer) 0)));
                                    parse_tree__parse_class__succeeded = (strcmp(parse_tree__parse_class__Var_52, (MR_String) "/") == 0);
                                    if (parse_tree__parse_class__succeeded)
                                      {
                                        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_53)) == (MR_mktag((MR_Integer) 1)));
                                        if (parse_tree__parse_class__succeeded)
                                          {
                                            parse_tree__parse_class__PredNameTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_53, (MR_Integer) 0)));
                                            parse_tree__parse_class__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_53, (MR_Integer) 1)));
                                            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_54)) == (MR_mktag((MR_Integer) 1)));
                                            if (parse_tree__parse_class__succeeded)
                                              {
                                                parse_tree__parse_class__ArityTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_54, (MR_Integer) 0)));
                                                parse_tree__parse_class__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_54, (MR_Integer) 1)));
                                                parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
        if (parse_tree__parse_class__succeeded)
          {
            MR_Word parse_tree__parse_class__PredName_17;
            MR_Integer parse_tree__parse_class__ArityInt_18;
            MR_Word parse_tree__parse_class__InstanceMethodName_19;
            MR_Word parse_tree__parse_class__TypeCtorInfo_254_254 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;

            {
              parse_tree__parse_class__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__parse_class__TypeCtorInfo_254_254, parse_tree__parse_class__PredNameTerm_14, &parse_tree__parse_class__PredName_17);
            }
            if (parse_tree__parse_class__succeeded)
              {
                {
                  parse_tree__parse_class__succeeded = mercury__term__decimal_term_to_int_2_p_0(parse_tree__parse_class__TypeCtorInfo_254_254, parse_tree__parse_class__ArityTerm_15, &parse_tree__parse_class__ArityInt_18);
                }
                if (parse_tree__parse_class__succeeded)
                  {
                    parse_tree__parse_class__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__parse_class__TypeCtorInfo_254_254, parse_tree__parse_class__InstanceMethodTerm_10, &parse_tree__parse_class__InstanceMethodName_19);
                  }
              }
            if (parse_tree__parse_class__succeeded)
              {
                MR_Word parse_tree__parse_class__InstanceMethod_20;
                MR_Word parse_tree__parse_class__Var_57;

                {
                  parse_tree__parse_class__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_57, 0) = ((MR_Box) (parse_tree__parse_class__InstanceMethodName_19));
                }
                {
                  parse_tree__parse_class__InstanceMethod_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__InstanceMethod_20, 0) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__InstanceMethod_20, 1) = ((MR_Box) (parse_tree__parse_class__PredName_17));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__InstanceMethod_20, 2) = ((MR_Box) (parse_tree__parse_class__Var_57));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__InstanceMethod_20, 3) = ((MR_Box) (parse_tree__parse_class__ArityInt_18));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__InstanceMethod_20, 4) = ((MR_Box) (parse_tree__parse_class__TermContext_11));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_class__MaybeInstanceMethod_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__InstanceMethod_20));
                }
              }
            else
              {
                MR_Word parse_tree__parse_class__TypeCtorInfo_255_255 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                MR_String parse_tree__parse_class__MethodTermStr_21;
                MR_Word parse_tree__parse_class__Pieces_22;
                MR_Word parse_tree__parse_class__Spec_23;
                MR_Word parse_tree__parse_class__Var_60;
                MR_Word parse_tree__parse_class__Var_63;
                MR_Word parse_tree__parse_class__Var_66;
                MR_Word parse_tree__parse_class__Var_69;
                MR_Word parse_tree__parse_class__Var_70;
                MR_Word parse_tree__parse_class__Var_79;
                MR_Word parse_tree__parse_class__Var_80;
                MR_Word parse_tree__parse_class__Var_81;
                MR_Word parse_tree__parse_class__Var_82;
                MR_Word parse_tree__parse_class__Var_83;
                MR_Word parse_tree__parse_class__Var_86;

                {
                  parse_tree__parse_class__MethodTermStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_class__TypeCtorInfo_255_255, parse_tree__parse_class__VarSet_6, parse_tree__parse_class__MethodTerm_7);
                }
                {
                  parse_tree__parse_class__Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_70, 1) = ((MR_Box) (parse_tree__parse_class__MethodTermStr_21));
                }
                {
                  parse_tree__parse_class__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_69, 0) = ((MR_Box) (parse_tree__parse_class__Var_70));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[14])));
                }
                {
                  parse_tree__parse_class__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[129])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_66, 1) = ((MR_Box) (parse_tree__parse_class__Var_69));
                }
                {
                  parse_tree__parse_class__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[128])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_63, 1) = ((MR_Box) (parse_tree__parse_class__Var_66));
                }
                {
                  parse_tree__parse_class__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[127])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_60, 1) = ((MR_Box) (parse_tree__parse_class__Var_63));
                }
                {
                  parse_tree__parse_class__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[126])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Pieces_22, 1) = ((MR_Box) (parse_tree__parse_class__Var_60));
                }
                {
                  parse_tree__parse_class__Var_81 = mercury__term__get_term_context_1_f_0(parse_tree__parse_class__TypeCtorInfo_255_255, parse_tree__parse_class__MethodTerm_7);
                }
                {
                  parse_tree__parse_class__Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_83, 0) = ((MR_Box) (parse_tree__parse_class__Pieces_22));
                }
                {
                  parse_tree__parse_class__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_82, 0) = ((MR_Box) (parse_tree__parse_class__Var_83));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_class__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_80, 0) = ((MR_Box) (parse_tree__parse_class__Var_81));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_80, 1) = ((MR_Box) (parse_tree__parse_class__Var_82));
                }
                {
                  parse_tree__parse_class__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_79, 0) = ((MR_Box) (parse_tree__parse_class__Var_80));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_class__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_23, 2) = ((MR_Box) (parse_tree__parse_class__Var_79));
                }
                {
                  parse_tree__parse_class__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_86, 0) = ((MR_Box) (parse_tree__parse_class__Spec_23));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_class__MaybeInstanceMethod_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_86));
                }
              }
          }
        else
          {
            MR_Word parse_tree__parse_class__FuncNameTerm_25;
            MR_Word parse_tree__parse_class__ArityTerm_222;
            MR_Word parse_tree__parse_class__Var_88;
            MR_String parse_tree__parse_class__Var_89;
            MR_Word parse_tree__parse_class__Var_90;
            MR_Word parse_tree__parse_class__Var_91;
            MR_Word parse_tree__parse_class__Var_92;
            MR_String parse_tree__parse_class__Var_93;
            MR_Word parse_tree__parse_class__Var_94;
            MR_Word parse_tree__parse_class__Var_95;
            MR_Word parse_tree__parse_class__Var_96;
            MR_Word parse_tree__parse_class__SlashTerm_207;
            MR_Word parse_tree__parse_class__Var_24;
            MR_Word parse_tree__parse_class__Var_26;

            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__ClassMethodTerm_9)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ClassMethodTerm_9, (MR_Integer) 0)));
                parse_tree__parse_class__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ClassMethodTerm_9, (MR_Integer) 1)));
                parse_tree__parse_class__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ClassMethodTerm_9, (MR_Integer) 2)));
                parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_88)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_class__succeeded)
                  {
                    parse_tree__parse_class__Var_89 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_88, (MR_Integer) 0)));
                    parse_tree__parse_class__succeeded = (strcmp(parse_tree__parse_class__Var_89, (MR_String) "func") == 0);
                    if (parse_tree__parse_class__succeeded)
                      {
                        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_90)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_class__succeeded)
                          {
                            parse_tree__parse_class__SlashTerm_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_90, (MR_Integer) 0)));
                            parse_tree__parse_class__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_90, (MR_Integer) 1)));
                            parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (parse_tree__parse_class__succeeded)
                              {
                                parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__SlashTerm_207)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__parse_class__succeeded)
                                  {
                                    parse_tree__parse_class__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__SlashTerm_207, (MR_Integer) 0)));
                                    parse_tree__parse_class__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__SlashTerm_207, (MR_Integer) 1)));
                                    parse_tree__parse_class__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__SlashTerm_207, (MR_Integer) 2)));
                                    parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_92)) == (MR_mktag((MR_Integer) 0)));
                                    if (parse_tree__parse_class__succeeded)
                                      {
                                        parse_tree__parse_class__Var_93 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_92, (MR_Integer) 0)));
                                        parse_tree__parse_class__succeeded = (strcmp(parse_tree__parse_class__Var_93, (MR_String) "/") == 0);
                                        if (parse_tree__parse_class__succeeded)
                                          {
                                            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_94)) == (MR_mktag((MR_Integer) 1)));
                                            if (parse_tree__parse_class__succeeded)
                                              {
                                                parse_tree__parse_class__FuncNameTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_94, (MR_Integer) 0)));
                                                parse_tree__parse_class__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_94, (MR_Integer) 1)));
                                                parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_95)) == (MR_mktag((MR_Integer) 1)));
                                                if (parse_tree__parse_class__succeeded)
                                                  {
                                                    parse_tree__parse_class__ArityTerm_222 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_95, (MR_Integer) 0)));
                                                    parse_tree__parse_class__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_95, (MR_Integer) 1)));
                                                    parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
            if (parse_tree__parse_class__succeeded)
              {
                MR_Word parse_tree__parse_class__FuncName_27;
                MR_Integer parse_tree__parse_class__ArityInt_212;
                MR_Word parse_tree__parse_class__InstanceMethodName_213;
                MR_Word parse_tree__parse_class__TypeCtorInfo_256_256 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;

                {
                  parse_tree__parse_class__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__parse_class__TypeCtorInfo_256_256, parse_tree__parse_class__FuncNameTerm_25, &parse_tree__parse_class__FuncName_27);
                }
                if (parse_tree__parse_class__succeeded)
                  {
                    {
                      parse_tree__parse_class__succeeded = mercury__term__decimal_term_to_int_2_p_0(parse_tree__parse_class__TypeCtorInfo_256_256, parse_tree__parse_class__ArityTerm_222, &parse_tree__parse_class__ArityInt_212);
                    }
                    if (parse_tree__parse_class__succeeded)
                      {
                        parse_tree__parse_class__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__parse_class__TypeCtorInfo_256_256, parse_tree__parse_class__InstanceMethodTerm_10, &parse_tree__parse_class__InstanceMethodName_213);
                      }
                  }
                if (parse_tree__parse_class__succeeded)
                  {
                    MR_Word parse_tree__parse_class__Var_98;
                    MR_Word parse_tree__parse_class__InstanceMethod_208;

                    {
                      parse_tree__parse_class__Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_98, 0) = ((MR_Box) (parse_tree__parse_class__InstanceMethodName_213));
                    }
                    {
                      parse_tree__parse_class__InstanceMethod_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_class__InstanceMethod_208, 0) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_class__InstanceMethod_208, 1) = ((MR_Box) (parse_tree__parse_class__FuncName_27));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_class__InstanceMethod_208, 2) = ((MR_Box) (parse_tree__parse_class__Var_98));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_class__InstanceMethod_208, 3) = ((MR_Box) (parse_tree__parse_class__ArityInt_212));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_class__InstanceMethod_208, 4) = ((MR_Box) (parse_tree__parse_class__TermContext_11));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_class__MaybeInstanceMethod_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__InstanceMethod_208));
                    }
                  }
                else
                  {
                    MR_Word parse_tree__parse_class__TypeCtorInfo_257_257 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                    MR_Word parse_tree__parse_class__Var_101;
                    MR_Word parse_tree__parse_class__Var_104;
                    MR_Word parse_tree__parse_class__Var_107;
                    MR_Word parse_tree__parse_class__Var_110;
                    MR_Word parse_tree__parse_class__Var_111;
                    MR_Word parse_tree__parse_class__Var_120;
                    MR_Word parse_tree__parse_class__Var_121;
                    MR_Word parse_tree__parse_class__Var_122;
                    MR_Word parse_tree__parse_class__Var_123;
                    MR_Word parse_tree__parse_class__Var_124;
                    MR_Word parse_tree__parse_class__Var_127;
                    MR_String parse_tree__parse_class__MethodTermStr_209;
                    MR_Word parse_tree__parse_class__Pieces_210;
                    MR_Word parse_tree__parse_class__Spec_211;

                    {
                      parse_tree__parse_class__MethodTermStr_209 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_class__TypeCtorInfo_257_257, parse_tree__parse_class__VarSet_6, parse_tree__parse_class__MethodTerm_7);
                    }
                    {
                      parse_tree__parse_class__Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_111, 1) = ((MR_Box) (parse_tree__parse_class__MethodTermStr_209));
                    }
                    {
                      parse_tree__parse_class__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_110, 0) = ((MR_Box) (parse_tree__parse_class__Var_111));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[14])));
                    }
                    {
                      parse_tree__parse_class__Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[129])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_107, 1) = ((MR_Box) (parse_tree__parse_class__Var_110));
                    }
                    {
                      parse_tree__parse_class__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[128])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_104, 1) = ((MR_Box) (parse_tree__parse_class__Var_107));
                    }
                    {
                      parse_tree__parse_class__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[130])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_101, 1) = ((MR_Box) (parse_tree__parse_class__Var_104));
                    }
                    {
                      parse_tree__parse_class__Pieces_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Pieces_210, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[126])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Pieces_210, 1) = ((MR_Box) (parse_tree__parse_class__Var_101));
                    }
                    {
                      parse_tree__parse_class__Var_122 = mercury__term__get_term_context_1_f_0(parse_tree__parse_class__TypeCtorInfo_257_257, parse_tree__parse_class__MethodTerm_7);
                    }
                    {
                      parse_tree__parse_class__Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_124, 0) = ((MR_Box) (parse_tree__parse_class__Pieces_210));
                    }
                    {
                      parse_tree__parse_class__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_123, 0) = ((MR_Box) (parse_tree__parse_class__Var_124));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_class__Var_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_121, 0) = ((MR_Box) (parse_tree__parse_class__Var_122));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_121, 1) = ((MR_Box) (parse_tree__parse_class__Var_123));
                    }
                    {
                      parse_tree__parse_class__Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_120, 0) = ((MR_Box) (parse_tree__parse_class__Var_121));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_class__Spec_211 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_211, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_211, 2) = ((MR_Box) (parse_tree__parse_class__Var_120));
                    }
                    {
                      parse_tree__parse_class__Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_127, 0) = ((MR_Box) (parse_tree__parse_class__Spec_211));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__parse_class__MaybeInstanceMethod_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_127));
                    }
                  }
              }
            else
              {
                MR_Word parse_tree__parse_class__TypeCtorInfo_258_258 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                MR_Word parse_tree__parse_class__Var_131;
                MR_Word parse_tree__parse_class__Var_134;
                MR_Word parse_tree__parse_class__Var_137;
                MR_Word parse_tree__parse_class__Var_140;
                MR_Word parse_tree__parse_class__Var_143;
                MR_Word parse_tree__parse_class__Var_146;
                MR_Word parse_tree__parse_class__Var_147;
                MR_Word parse_tree__parse_class__Var_156;
                MR_Word parse_tree__parse_class__Var_157;
                MR_Word parse_tree__parse_class__Var_158;
                MR_Word parse_tree__parse_class__Var_159;
                MR_Word parse_tree__parse_class__Var_160;
                MR_Word parse_tree__parse_class__Var_163;
                MR_String parse_tree__parse_class__MethodTermStr_218;
                MR_Word parse_tree__parse_class__Pieces_219;
                MR_Word parse_tree__parse_class__Spec_220;

                {
                  parse_tree__parse_class__MethodTermStr_218 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_class__TypeCtorInfo_258_258, parse_tree__parse_class__VarSet_6, parse_tree__parse_class__MethodTerm_7);
                }
                {
                  parse_tree__parse_class__Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_147, 1) = ((MR_Box) (parse_tree__parse_class__MethodTermStr_218));
                }
                {
                  parse_tree__parse_class__Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_146, 0) = ((MR_Box) (parse_tree__parse_class__Var_147));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[14])));
                }
                {
                  parse_tree__parse_class__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_143, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[129])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_143, 1) = ((MR_Box) (parse_tree__parse_class__Var_146));
                }
                {
                  parse_tree__parse_class__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[128])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_140, 1) = ((MR_Box) (parse_tree__parse_class__Var_143));
                }
                {
                  parse_tree__parse_class__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[133])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_137, 1) = ((MR_Box) (parse_tree__parse_class__Var_140));
                }
                {
                  parse_tree__parse_class__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[132])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_134, 1) = ((MR_Box) (parse_tree__parse_class__Var_137));
                }
                {
                  parse_tree__parse_class__Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[131])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_131, 1) = ((MR_Box) (parse_tree__parse_class__Var_134));
                }
                {
                  parse_tree__parse_class__Pieces_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Pieces_219, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[126])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Pieces_219, 1) = ((MR_Box) (parse_tree__parse_class__Var_131));
                }
                {
                  parse_tree__parse_class__Var_158 = mercury__term__get_term_context_1_f_0(parse_tree__parse_class__TypeCtorInfo_258_258, parse_tree__parse_class__MethodTerm_7);
                }
                {
                  parse_tree__parse_class__Var_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_160, 0) = ((MR_Box) (parse_tree__parse_class__Pieces_219));
                }
                {
                  parse_tree__parse_class__Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_159, 0) = ((MR_Box) (parse_tree__parse_class__Var_160));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_class__Var_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_157, 0) = ((MR_Box) (parse_tree__parse_class__Var_158));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_157, 1) = ((MR_Box) (parse_tree__parse_class__Var_159));
                }
                {
                  parse_tree__parse_class__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_156, 0) = ((MR_Box) (parse_tree__parse_class__Var_157));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_class__Spec_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_220, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_220, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_220, 2) = ((MR_Box) (parse_tree__parse_class__Var_156));
                }
                {
                  parse_tree__parse_class__Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_163, 0) = ((MR_Box) (parse_tree__parse_class__Spec_220));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_class__MaybeInstanceMethod_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_163));
                }
              }
          }
      }
    else
      {
        MR_Word parse_tree__parse_class__MaybeIOM_29;

        {
          parse_tree__parse_item__parse_item_or_marker_5_p_0((MR_Word) &parse_tree__parse_class_scalar_common_4[14], parse_tree__parse_class__VarSet_6, parse_tree__parse_class__MethodTerm_7, (MR_Integer) -1, &parse_tree__parse_class__MaybeIOM_29);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_class__MaybeIOM_29)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_class__MaybeInstanceMethod_8 = (MR_Word) parse_tree__parse_class__MaybeIOM_29;
        else
          {
            MR_Word parse_tree__parse_class__IOM_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeIOM_29, (MR_Integer) 0)));
            MR_Word parse_tree__parse_class__ItemClause_33;
            MR_Word parse_tree__parse_class__Item_32;

            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__IOM_31)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__Item_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__IOM_31, (MR_Integer) 0)));
                parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Item_32)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_class__succeeded)
                  parse_tree__parse_class__ItemClause_33 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__Item_32), (MR_Integer) 0);
              }
            if (parse_tree__parse_class__succeeded)
              {
                MR_Word parse_tree__parse_class__ClassMethodName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemClause_33, (MR_Integer) 0)));
                MR_Word parse_tree__parse_class__PredOrFunc_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemClause_33, (MR_Integer) 1)));
                MR_Word parse_tree__parse_class__HeadArgs_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemClause_33, (MR_Integer) 2)));
                MR_Word parse_tree__parse_class__Context_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemClause_33, (MR_Integer) 6)));
                MR_Integer parse_tree__parse_class__Var_167;
                MR_Word parse_tree__parse_class__Var_168;
                MR_Word parse_tree__parse_class__Var_169;
                MR_Integer parse_tree__parse_class__ArityInt_229;
                MR_Word parse_tree__parse_class__InstanceMethod_230;
                MR_Word parse_tree__parse_class___Origin_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemClause_33, (MR_Integer) 3)));
                MR_Word parse_tree__parse_class___VarSet_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemClause_33, (MR_Integer) 4)));
                MR_Word parse_tree__parse_class___ClauseBody_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemClause_33, (MR_Integer) 5)));
                MR_Integer parse_tree__parse_class___SeqNum_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemClause_33, (MR_Integer) 7)));

                {
                  parse_tree__parse_class__Var_167 = mercury__list__length_1_f_0((MR_Word) &parse_tree__parse_class_scalar_common_1[11], parse_tree__parse_class__HeadArgs_36);
                }
                {
                  parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__parse_class__PredOrFunc_35, &parse_tree__parse_class__ArityInt_229, parse_tree__parse_class__Var_167);
                }
                {
                  parse_tree__parse_class__Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_169, 0) = ((MR_Box) (parse_tree__parse_class__ItemClause_33));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_169, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_class__Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_168, 0) = ((MR_Box) (parse_tree__parse_class__Var_169));
                }
                {
                  parse_tree__parse_class__InstanceMethod_230 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__InstanceMethod_230, 0) = ((MR_Box) (parse_tree__parse_class__PredOrFunc_35));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__InstanceMethod_230, 1) = ((MR_Box) (parse_tree__parse_class__ClassMethodName_34));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__InstanceMethod_230, 2) = ((MR_Box) (parse_tree__parse_class__Var_168));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__InstanceMethod_230, 3) = ((MR_Box) (parse_tree__parse_class__ArityInt_229));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__InstanceMethod_230, 4) = ((MR_Box) (parse_tree__parse_class__Context_40));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_class__MaybeInstanceMethod_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__InstanceMethod_230));
                }
              }
            else
              {
                MR_Word parse_tree__parse_class__TypeCtorInfo_260_260 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                MR_Word parse_tree__parse_class__Var_173;
                MR_Word parse_tree__parse_class__Var_176;
                MR_Word parse_tree__parse_class__Var_179;
                MR_Word parse_tree__parse_class__Var_182;
                MR_Word parse_tree__parse_class__Var_185;
                MR_Word parse_tree__parse_class__Var_188;
                MR_Word parse_tree__parse_class__Var_189;
                MR_Word parse_tree__parse_class__Var_198;
                MR_Word parse_tree__parse_class__Var_199;
                MR_Word parse_tree__parse_class__Var_200;
                MR_Word parse_tree__parse_class__Var_201;
                MR_Word parse_tree__parse_class__Var_202;
                MR_Word parse_tree__parse_class__Var_205;
                MR_String parse_tree__parse_class__MethodTermStr_231;
                MR_Word parse_tree__parse_class__Pieces_232;
                MR_Word parse_tree__parse_class__Spec_233;

                {
                  parse_tree__parse_class__MethodTermStr_231 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_class__TypeCtorInfo_260_260, parse_tree__parse_class__VarSet_6, parse_tree__parse_class__MethodTerm_7);
                }
                {
                  parse_tree__parse_class__Var_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_189, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_189, 1) = ((MR_Box) (parse_tree__parse_class__MethodTermStr_231));
                }
                {
                  parse_tree__parse_class__Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_188, 0) = ((MR_Box) (parse_tree__parse_class__Var_189));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_188, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[14])));
                }
                {
                  parse_tree__parse_class__Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_185, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[129])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_185, 1) = ((MR_Box) (parse_tree__parse_class__Var_188));
                }
                {
                  parse_tree__parse_class__Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_182, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[128])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_182, 1) = ((MR_Box) (parse_tree__parse_class__Var_185));
                }
                {
                  parse_tree__parse_class__Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_179, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[133])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_179, 1) = ((MR_Box) (parse_tree__parse_class__Var_182));
                }
                {
                  parse_tree__parse_class__Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_176, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[132])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_176, 1) = ((MR_Box) (parse_tree__parse_class__Var_179));
                }
                {
                  parse_tree__parse_class__Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_173, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[131])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_173, 1) = ((MR_Box) (parse_tree__parse_class__Var_176));
                }
                {
                  parse_tree__parse_class__Pieces_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Pieces_232, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[134])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Pieces_232, 1) = ((MR_Box) (parse_tree__parse_class__Var_173));
                }
                {
                  parse_tree__parse_class__Var_200 = mercury__term__get_term_context_1_f_0(parse_tree__parse_class__TypeCtorInfo_260_260, parse_tree__parse_class__MethodTerm_7);
                }
                {
                  parse_tree__parse_class__Var_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_202, 0) = ((MR_Box) (parse_tree__parse_class__Pieces_232));
                }
                {
                  parse_tree__parse_class__Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_201, 0) = ((MR_Box) (parse_tree__parse_class__Var_202));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_class__Var_199 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_199, 0) = ((MR_Box) (parse_tree__parse_class__Var_200));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_199, 1) = ((MR_Box) (parse_tree__parse_class__Var_201));
                }
                {
                  parse_tree__parse_class__Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_198, 0) = ((MR_Box) (parse_tree__parse_class__Var_199));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_class__Spec_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_233, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_233, 2) = ((MR_Box) (parse_tree__parse_class__Var_198));
                }
                {
                  parse_tree__parse_class__Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_205, 0) = ((MR_Box) (parse_tree__parse_class__Spec_233));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_class__MaybeInstanceMethod_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_205));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__get_simple_constraint_2_p_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1,
  MR_Word * parse_tree__parse_class__Constraint_3)
{
  {
    MR_bool parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));

    if (parse_tree__parse_class__succeeded)
      *parse_tree__parse_class__Constraint_3 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__HeadVar__1_1), (MR_Integer) 0);
    return parse_tree__parse_class__succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_class__tvars_in_fundep_1_f_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__HeadVar__2_2;
    MR_Word parse_tree__parse_class__Domain_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word parse_tree__parse_class__Range_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__HeadVar__1_1, (MR_Integer) 1)));

    {
      parse_tree__parse_class__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__parse_class_scalar_common_1[1], parse_tree__parse_class__Domain_3, parse_tree__parse_class__Range_4);
    }
    return parse_tree__parse_class__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__parse_class__parse_class_and_inst_constraints_4_p_0(
  MR_Word parse_tree__parse_class___ModuleName_5,
  MR_Word parse_tree__parse_class__VarSet_6,
  MR_Word parse_tree__parse_class__ConstraintsTerm_7,
  MR_Word * parse_tree__parse_class__Result_8)
{
  {
    MR_bool parse_tree__parse_class__succeeded;

    {
      parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_97_110_100_95_105_110_115_116_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__parse_class__VarSet_6, parse_tree__parse_class__ConstraintsTerm_7, parse_tree__parse_class__Result_8);
    }
  }
}

void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_97_110_100_95_105_110_115_116_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word parse_tree__parse_class__VarSet_6,
  MR_Word parse_tree__parse_class__ConstraintsTerm_7,
  MR_Word * parse_tree__parse_class__Result_8)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__Result0_9;
    MR_Word parse_tree__parse_class__HeadConstraintTerm_45;
    MR_Word parse_tree__parse_class__TailConstraintTerms_46;
    MR_Word parse_tree__parse_class__Var_47;

    {
      parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__ConstraintsTerm_7, &parse_tree__parse_class__Var_47);
    }
    parse_tree__parse_class__HeadConstraintTerm_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_47, (MR_Integer) 0)));
    parse_tree__parse_class__TailConstraintTerms_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_47, (MR_Integer) 1)));
    {
      parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(parse_tree__parse_class__VarSet_6, parse_tree__parse_class__HeadConstraintTerm_45, parse_tree__parse_class__TailConstraintTerms_46, &parse_tree__parse_class__Result0_9);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_class__Result0_9)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_class__Specs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Result0_9, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_class__Result_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Specs_20));
        }
      }
    else
      {
        MR_Word parse_tree__parse_class__HeadArbConstraint_10;
        MR_Word parse_tree__parse_class__TailArbConstraints_11;
        MR_Word parse_tree__parse_class__ArbitraryConstraints_12;
        MR_Word parse_tree__parse_class__ProgConstraints_13;
        MR_Word parse_tree__parse_class__FunDeps_14;
        MR_Word parse_tree__parse_class__InstVarSub_15;
        MR_Word parse_tree__parse_class__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Result0_9, (MR_Integer) 0)));

        parse_tree__parse_class__HeadArbConstraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_21, (MR_Integer) 0)));
        parse_tree__parse_class__TailArbConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_21, (MR_Integer) 1)));
        {
          parse_tree__parse_class__ArbitraryConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__ArbitraryConstraints_12, 0) = ((MR_Box) (parse_tree__parse_class__HeadArbConstraint_10));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__ArbitraryConstraints_12, 1) = ((MR_Box) (parse_tree__parse_class__TailArbConstraints_11));
        }
        {
          parse_tree__parse_class__collect_class_and_inst_constraints_4_p_0(parse_tree__parse_class__ArbitraryConstraints_12, &parse_tree__parse_class__ProgConstraints_13, &parse_tree__parse_class__FunDeps_14, &parse_tree__parse_class__InstVarSub_15);
        }
        if ((parse_tree__parse_class__FunDeps_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__parse_class__Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__ProgConstraints_13));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_class__InstVarSub_15));
          }
        else
          {
            MR_Word parse_tree__parse_class__Spec_19;
            MR_Word parse_tree__parse_class__Var_32;
            MR_Word parse_tree__parse_class__Var_33;
            MR_Word parse_tree__parse_class__Var_34;
            MR_Word parse_tree__parse_class__Var_39;

            {
              parse_tree__parse_class__Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__ConstraintsTerm_7);
            }
            {
              parse_tree__parse_class__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_33, 0) = ((MR_Box) (parse_tree__parse_class__Var_34));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[125])));
            }
            {
              parse_tree__parse_class__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_32, 0) = ((MR_Box) (parse_tree__parse_class__Var_33));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_class__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_19, 2) = ((MR_Box) (parse_tree__parse_class__Var_32));
            }
            {
              parse_tree__parse_class__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_39, 0) = ((MR_Box) (parse_tree__parse_class__Spec_19));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_class__Result_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_39));
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_class__collect_class_and_inst_constraints_4_p_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1,
  MR_Word * parse_tree__parse_class__HeadVar__2_2,
  MR_Word * parse_tree__parse_class__HeadVar__3_3,
  MR_Word * parse_tree__parse_class__HeadVar__4_4)
{
  {
    MR_bool parse_tree__parse_class__succeeded;

    if ((parse_tree__parse_class__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_class__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_class__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          *parse_tree__parse_class__HeadVar__4_4 = mercury__map__init_0_f_0((MR_Word) &parse_tree__parse_class_scalar_common_1[6], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        }
      }
    else
      {
        MR_Word parse_tree__parse_class__Constraint_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_class__Constraints_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__parse_class__STATE_VARIABLE_ProgConstraints_17_17;
        MR_Word parse_tree__parse_class__STATE_VARIABLE_FunDeps_18_18;
        MR_Word parse_tree__parse_class__STATE_VARIABLE_InstVarSub_19_19;

        {
          parse_tree__parse_class__collect_class_and_inst_constraints_4_p_0(parse_tree__parse_class__Constraints_6, &parse_tree__parse_class__STATE_VARIABLE_ProgConstraints_17_17, &parse_tree__parse_class__STATE_VARIABLE_FunDeps_18_18, &parse_tree__parse_class__STATE_VARIABLE_InstVarSub_19_19);
        }
        switch (MR_tag((MR_Word) parse_tree__parse_class__Constraint_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_class__ProgConstraint_27 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__Constraint_5), (MR_Integer) 0);

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__parse_class__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__ProgConstraint_27));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_class__STATE_VARIABLE_ProgConstraints_17_17));
              }
              *parse_tree__parse_class__HeadVar__3_3 = parse_tree__parse_class__STATE_VARIABLE_FunDeps_18_18;
              *parse_tree__parse_class__HeadVar__4_4 = parse_tree__parse_class__STATE_VARIABLE_InstVarSub_19_19;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_class__ProgConstraint_10 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__Constraint_5), (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__parse_class__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__ProgConstraint_10));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_class__STATE_VARIABLE_ProgConstraints_17_17));
              }
              *parse_tree__parse_class__HeadVar__3_3 = parse_tree__parse_class__STATE_VARIABLE_FunDeps_18_18;
              *parse_tree__parse_class__HeadVar__4_4 = parse_tree__parse_class__STATE_VARIABLE_InstVarSub_19_19;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_class__FunDep_13 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__Constraint_5), (MR_Integer) 2);

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__parse_class__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__FunDep_13));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_class__STATE_VARIABLE_FunDeps_18_18));
              }
              *parse_tree__parse_class__HeadVar__2_2 = parse_tree__parse_class__STATE_VARIABLE_ProgConstraints_17_17;
              *parse_tree__parse_class__HeadVar__4_4 = parse_tree__parse_class__STATE_VARIABLE_InstVarSub_19_19;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__parse_class__InstVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_class__Constraint_5, (MR_Integer) 0)));
              MR_Word parse_tree__parse_class__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_class__Constraint_5, (MR_Integer) 1)));

              {
                mercury__map__set_4_p_0((MR_Word) &parse_tree__parse_class_scalar_common_1[6], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (parse_tree__parse_class__InstVar_11)), ((MR_Box) (parse_tree__parse_class__Inst_12)), parse_tree__parse_class__STATE_VARIABLE_InstVarSub_19_19, parse_tree__parse_class__HeadVar__4_4);
              }
              *parse_tree__parse_class__HeadVar__2_2 = parse_tree__parse_class__STATE_VARIABLE_ProgConstraints_17_17;
              *parse_tree__parse_class__HeadVar__3_3 = parse_tree__parse_class__STATE_VARIABLE_FunDeps_18_18;
            }
            break;
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_class__parse_class_constraints_4_p_0(
  MR_Word parse_tree__parse_class__ModuleName_5,
  MR_Word parse_tree__parse_class__VarSet_6,
  MR_Word parse_tree__parse_class__ConstraintsTerm_7,
  MR_Word * parse_tree__parse_class__Result_8)
{
  {
    MR_bool parse_tree__parse_class__succeeded;

    {
      parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__parse_class__VarSet_6, parse_tree__parse_class__ConstraintsTerm_7, parse_tree__parse_class__Result_8);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box * parse_tree__parse_class__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Box parse_tree__parse_class__closure = parse_tree__parse_class__closure_arg;
    MR_Word parse_tree__parse_class__conv0_Constraint_3;

    {
      parse_tree__parse_class__succeeded = parse_tree__parse_class__get_simple_constraint_2_p_0(((MR_Word) parse_tree__parse_class__wrapper_arg_1), &parse_tree__parse_class__conv0_Constraint_3);
    }
    if (parse_tree__parse_class__succeeded)
      {
        *parse_tree__parse_class__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_class__conv0_Constraint_3));
        parse_tree__parse_class__succeeded = MR_TRUE;
      }
    return parse_tree__parse_class__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word parse_tree__parse_class__VarSet_6,
  MR_Word parse_tree__parse_class__ConstraintsTerm_7,
  MR_Word * parse_tree__parse_class__Result_8)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__Result0_26;
    MR_Word parse_tree__parse_class__HeadConstraintTerm_55;
    MR_Word parse_tree__parse_class__TailConstraintTerms_56;
    MR_Word parse_tree__parse_class__Var_57;

    {
      parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__ConstraintsTerm_7, &parse_tree__parse_class__Var_57);
    }
    parse_tree__parse_class__HeadConstraintTerm_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_57, (MR_Integer) 0)));
    parse_tree__parse_class__TailConstraintTerms_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_57, (MR_Integer) 1)));
    {
      parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(parse_tree__parse_class__VarSet_6, parse_tree__parse_class__HeadConstraintTerm_55, parse_tree__parse_class__TailConstraintTerms_56, &parse_tree__parse_class__Result0_26);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_class__Result0_26)) == (MR_mktag((MR_Integer) 0))))
      *parse_tree__parse_class__Result_8 = (MR_Word) parse_tree__parse_class__Result0_26;
    else
      {
        MR_Word parse_tree__parse_class__HeadArbConstraint_27;
        MR_Word parse_tree__parse_class__TailArbConstraints_28;
        MR_Word parse_tree__parse_class__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Result0_26, (MR_Integer) 0)));
        MR_Word parse_tree__parse_class__HeadConstraint_29;
        MR_Word parse_tree__parse_class__TailConstraints_30;
        MR_Word parse_tree__parse_class__TypeCtorInfo_34_49;
        MR_Word parse_tree__parse_class__TypeCtorInfo_35_50;
        MR_Word parse_tree__parse_class__Var_34;

        parse_tree__parse_class__HeadArbConstraint_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_33, (MR_Integer) 0)));
        parse_tree__parse_class__TailArbConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_33, (MR_Integer) 1)));
        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__HeadArbConstraint_27)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_class__succeeded)
          {
            parse_tree__parse_class__HeadConstraint_29 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__HeadArbConstraint_27), (MR_Integer) 0);
            parse_tree__parse_class__Var_34 = (MR_Word) &parse_tree__parse_class_scalar_common_2[5];
            parse_tree__parse_class__TypeCtorInfo_34_49 = (MR_Word) &parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0;
            parse_tree__parse_class__TypeCtorInfo_35_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
            {
              parse_tree__parse_class__succeeded = mercury__list__map_3_p_2(parse_tree__parse_class__TypeCtorInfo_34_49, parse_tree__parse_class__TypeCtorInfo_35_50, parse_tree__parse_class__Var_34, parse_tree__parse_class__TailArbConstraints_28, &parse_tree__parse_class__TailConstraints_30);
            }
          }
        if (parse_tree__parse_class__succeeded)
          {
            MR_Word parse_tree__parse_class__Var_35;

            {
              parse_tree__parse_class__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_35, 0) = ((MR_Box) (parse_tree__parse_class__HeadConstraint_29));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_35, 1) = ((MR_Box) (parse_tree__parse_class__TailConstraints_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_class__Result_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_35));
            }
          }
        else
          {
            MR_Word parse_tree__parse_class__Spec_31;
            MR_Word parse_tree__parse_class__Var_38;
            MR_Word parse_tree__parse_class__Var_39;
            MR_Word parse_tree__parse_class__Var_40;
            MR_Word parse_tree__parse_class__Var_45;

            {
              parse_tree__parse_class__Var_40 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__ConstraintsTerm_7);
            }
            {
              parse_tree__parse_class__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_39, 0) = ((MR_Box) (parse_tree__parse_class__Var_40));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[124])));
            }
            {
              parse_tree__parse_class__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_38, 0) = ((MR_Box) (parse_tree__parse_class__Var_39));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_class__Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_31, 2) = ((MR_Box) (parse_tree__parse_class__Var_38));
            }
            {
              parse_tree__parse_class__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_45, 0) = ((MR_Box) (parse_tree__parse_class__Spec_31));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_class__Result_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_45));
            }
          }
      }
  }
}

void MR_CALL 
parse_tree__parse_class__parse_instance_item_6_p_0(
  MR_Word parse_tree__parse_class__ModuleName_7,
  MR_Word parse_tree__parse_class__VarSet_8,
  MR_Word parse_tree__parse_class__ArgTerms_9,
  MR_Word parse_tree__parse_class__Context_10,
  MR_Integer parse_tree__parse_class__SeqNum_11,
  MR_Word * parse_tree__parse_class__MaybeIOM_12)
{
  {
    MR_bool parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_class__ArgTerm_13;
    MR_Word parse_tree__parse_class__Var_23;

    if (parse_tree__parse_class__succeeded)
      {
        parse_tree__parse_class__ArgTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__ArgTerms_9, (MR_Integer) 0)));
        parse_tree__parse_class__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__ArgTerms_9, (MR_Integer) 1)));
        parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_class__succeeded)
      {
        MR_Word parse_tree__parse_class__TVarSet_14;
        MR_Word parse_tree__parse_class__MaybeItemInstanceInfo_18;
        MR_Word parse_tree__parse_class__NameTerm_15;
        MR_Word parse_tree__parse_class__MethodsTerm_16;
        MR_Word parse_tree__parse_class__Var_24;
        MR_String parse_tree__parse_class__Var_25;
        MR_Word parse_tree__parse_class__Var_26;
        MR_Word parse_tree__parse_class__Var_27;
        MR_Word parse_tree__parse_class__Var_28;
        MR_Word parse_tree__parse_class__Var_17;

        {
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_class__VarSet_8, &parse_tree__parse_class__TVarSet_14);
        }
        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__ArgTerm_13)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_class__succeeded)
          {
            parse_tree__parse_class__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ArgTerm_13, (MR_Integer) 0)));
            parse_tree__parse_class__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ArgTerm_13, (MR_Integer) 1)));
            parse_tree__parse_class__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ArgTerm_13, (MR_Integer) 2)));
            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_24)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_24, (MR_Integer) 0)));
                parse_tree__parse_class__succeeded = (strcmp(parse_tree__parse_class__Var_25, (MR_String) "where") == 0);
                if (parse_tree__parse_class__succeeded)
                  {
                    parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_26)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_class__succeeded)
                      {
                        parse_tree__parse_class__NameTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_26, (MR_Integer) 0)));
                        parse_tree__parse_class__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_26, (MR_Integer) 1)));
                        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_27)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_class__succeeded)
                          {
                            parse_tree__parse_class__MethodsTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_27, (MR_Integer) 0)));
                            parse_tree__parse_class__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_27, (MR_Integer) 1)));
                            parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_class__succeeded)
          {
            parse_tree__parse_class__parse_non_empty_instance_8_p_0(parse_tree__parse_class__ModuleName_7, parse_tree__parse_class__VarSet_8, parse_tree__parse_class__TVarSet_14, parse_tree__parse_class__NameTerm_15, parse_tree__parse_class__MethodsTerm_16, parse_tree__parse_class__Context_10, parse_tree__parse_class__SeqNum_11, &parse_tree__parse_class__MaybeItemInstanceInfo_18);
          }
        else
          {
            parse_tree__parse_class__parse_instance_name_6_p_0(parse_tree__parse_class__ModuleName_7, parse_tree__parse_class__TVarSet_14, parse_tree__parse_class__ArgTerm_13, parse_tree__parse_class__Context_10, parse_tree__parse_class__SeqNum_11, &parse_tree__parse_class__MaybeItemInstanceInfo_18);
          }
        if (((MR_tag((MR_Word) parse_tree__parse_class__MaybeItemInstanceInfo_18)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_class__MaybeIOM_12 = (MR_Word) parse_tree__parse_class__MaybeItemInstanceInfo_18;
        else
          {
            MR_Word parse_tree__parse_class__ItemInstanceInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeItemInstanceInfo_18, (MR_Integer) 0)));
            MR_Word parse_tree__parse_class__Var_29;
            MR_Word parse_tree__parse_class__Var_30;

            {
              parse_tree__parse_class__Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_30, 1) = ((MR_Box) (parse_tree__parse_class__ItemInstanceInfo_19));
            }
            {
              parse_tree__parse_class__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_29, 0) = ((MR_Box) (parse_tree__parse_class__Var_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_class__MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_29));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_class__Spec_22;
        MR_Word parse_tree__parse_class__Var_59;
        MR_Word parse_tree__parse_class__Var_60;
        MR_Word parse_tree__parse_class__Var_65;

        {
          parse_tree__parse_class__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_60, 0) = ((MR_Box) (parse_tree__parse_class__Context_10));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[123])));
        }
        {
          parse_tree__parse_class__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_59, 0) = ((MR_Box) (parse_tree__parse_class__Var_60));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_class__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_22, 2) = ((MR_Box) (parse_tree__parse_class__Var_59));
        }
        {
          parse_tree__parse_class__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_65, 0) = ((MR_Box) (parse_tree__parse_class__Spec_22));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_class__MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_65));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_non_empty_instance_8_p_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box * parse_tree__parse_class__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_class__closure = parse_tree__parse_class__closure_arg;
    MR_Word parse_tree__parse_class__conv0_MaybeInstanceMethod_8;

    {
      parse_tree__parse_class__term_to_instance_method_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_class__wrapper_arg_1), &parse_tree__parse_class__conv0_MaybeInstanceMethod_8);
    }
    *parse_tree__parse_class__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_class__conv0_MaybeInstanceMethod_8));
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_non_empty_instance_8_p_0(
  MR_Word parse_tree__parse_class__ModuleName_9,
  MR_Word parse_tree__parse_class__VarSet_10,
  MR_Word parse_tree__parse_class__TVarSet_11,
  MR_Word parse_tree__parse_class__NameTerm_12,
  MR_Word parse_tree__parse_class__MethodsTerm_13,
  MR_Word parse_tree__parse_class__Context_14,
  MR_Integer parse_tree__parse_class__SeqNum_15,
  MR_Word * parse_tree__parse_class__MaybeItemInstanceInfo_16)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__MaybeItemInstanceInfo0_17;
    MR_Word parse_tree__parse_class__MaybeInstanceMethods_18;
    MR_Word parse_tree__parse_class__MethodList_56;
    MR_Word parse_tree__parse_class__ItemInstanceInfo0_19;
    MR_Word parse_tree__parse_class__InstanceMethods_20;

    {
      parse_tree__parse_class__parse_instance_name_6_p_0(parse_tree__parse_class__ModuleName_9, parse_tree__parse_class__TVarSet_11, parse_tree__parse_class__NameTerm_12, parse_tree__parse_class__Context_14, parse_tree__parse_class__SeqNum_15, &parse_tree__parse_class__MaybeItemInstanceInfo0_17);
    }
    {
      parse_tree__parse_class__succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(parse_tree__parse_class__MethodsTerm_13, &parse_tree__parse_class__MethodList_56);
    }
    if (parse_tree__parse_class__succeeded)
      {
        MR_Word parse_tree__parse_class__Interface_57;
        MR_Word parse_tree__parse_class__Var_60;
        MR_Word parse_tree__parse_class__Methods_85;
        MR_Word parse_tree__parse_class__Specs_86;

        {
          parse_tree__parse_class__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_60, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_60, 1) = ((MR_Box) (parse_tree__parse_class__parse_non_empty_instance_8_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_60, 3) = ((MR_Box) (parse_tree__parse_class__ModuleName_9));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_60, 4) = ((MR_Box) (parse_tree__parse_class__VarSet_10));
        }
        {
          mercury__list__map_3_p_0((MR_Word) &parse_tree__parse_class_scalar_common_1[3], (MR_Word) &parse_tree__parse_class_scalar_common_1[10], parse_tree__parse_class__Var_60, parse_tree__parse_class__MethodList_56, &parse_tree__parse_class__Interface_57);
        }
        {
          parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__parse_class__Interface_57, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_class__Methods_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_class__Specs_86);
        }
        if ((parse_tree__parse_class__Specs_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            parse_tree__parse_class__MaybeInstanceMethods_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeInstanceMethods_18, 0) = ((MR_Box) (parse_tree__parse_class__Methods_85));
          }
        else
          {
            parse_tree__parse_class__MaybeInstanceMethods_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_class__MaybeInstanceMethods_18, 0) = ((MR_Box) (parse_tree__parse_class__Specs_86));
          }
      }
    else
      {
        MR_Word parse_tree__parse_class__Spec_59;
        MR_Word parse_tree__parse_class__Var_68;
        MR_Word parse_tree__parse_class__Var_69;
        MR_Word parse_tree__parse_class__Var_70;
        MR_Word parse_tree__parse_class__Var_75;

        {
          parse_tree__parse_class__Var_70 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__MethodsTerm_13);
        }
        {
          parse_tree__parse_class__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_69, 0) = ((MR_Box) (parse_tree__parse_class__Var_70));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[122])));
        }
        {
          parse_tree__parse_class__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_68, 0) = ((MR_Box) (parse_tree__parse_class__Var_69));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_class__Spec_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_59, 2) = ((MR_Box) (parse_tree__parse_class__Var_68));
        }
        {
          parse_tree__parse_class__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_75, 0) = ((MR_Box) (parse_tree__parse_class__Spec_59));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_class__MaybeInstanceMethods_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__MaybeInstanceMethods_18, 0) = ((MR_Box) (parse_tree__parse_class__Var_75));
        }
      }
    parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__MaybeItemInstanceInfo0_17)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_class__succeeded)
      {
        parse_tree__parse_class__ItemInstanceInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeItemInstanceInfo0_17, (MR_Integer) 0)));
        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__MaybeInstanceMethods_18)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_class__succeeded)
          parse_tree__parse_class__InstanceMethods_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeInstanceMethods_18, (MR_Integer) 0)));
      }
    if (parse_tree__parse_class__succeeded)
      {
        MR_Word parse_tree__parse_class__ItemInstanceInfo_21;
        MR_Word parse_tree__parse_class__MaybeCheckSpec_22;
        MR_Word parse_tree__parse_class__Var_26;
        MR_Word parse_tree__parse_class__Var_31;
        MR_Word parse_tree__parse_class__Var_32;
        MR_Word parse_tree__parse_class__Var_33;
        MR_Word parse_tree__parse_class__Var_34;
        MR_Word parse_tree__parse_class__Var_37;
        MR_Word parse_tree__parse_class__Var_38;
        MR_Integer parse_tree__parse_class__Var_39;
        MR_Word parse_tree__parse_class__Var_35;
        MR_Word parse_tree__parse_class__Var_36;

        {
          parse_tree__parse_class__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_26, 0) = ((MR_Box) (parse_tree__parse_class__InstanceMethods_20));
        }
        parse_tree__parse_class__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_19, (MR_Integer) 0)));
        parse_tree__parse_class__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_19, (MR_Integer) 1)));
        parse_tree__parse_class__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_19, (MR_Integer) 2)));
        parse_tree__parse_class__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_19, (MR_Integer) 3)));
        parse_tree__parse_class__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_19, (MR_Integer) 4)));
        parse_tree__parse_class__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_19, (MR_Integer) 5)));
        parse_tree__parse_class__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_19, (MR_Integer) 6)));
        parse_tree__parse_class__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_19, (MR_Integer) 7)));
        parse_tree__parse_class__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_19, (MR_Integer) 8)));
        {
          parse_tree__parse_class__ItemInstanceInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 0) = ((MR_Box) (parse_tree__parse_class__Var_31));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 1) = ((MR_Box) (parse_tree__parse_class__Var_32));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 2) = ((MR_Box) (parse_tree__parse_class__Var_33));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 3) = ((MR_Box) (parse_tree__parse_class__Var_34));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 4) = ((MR_Box) (parse_tree__parse_class__Var_26));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 5) = ((MR_Box) (parse_tree__parse_class__TVarSet_11));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 6) = ((MR_Box) (parse_tree__parse_class__Var_37));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 7) = ((MR_Box) (parse_tree__parse_class__Var_38));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 8) = ((MR_Box) (parse_tree__parse_class__Var_39));
        }
        {
          parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0(parse_tree__parse_class__ItemInstanceInfo_21, parse_tree__parse_class__NameTerm_12, &parse_tree__parse_class__MaybeCheckSpec_22);
        }
        if ((parse_tree__parse_class__MaybeCheckSpec_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__parse_class__MaybeItemInstanceInfo_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__ItemInstanceInfo_21));
          }
        else
          {
            MR_Word parse_tree__parse_class__Spec_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeCheckSpec_22, (MR_Integer) 0)));
            MR_Word parse_tree__parse_class__Var_27;

            {
              parse_tree__parse_class__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_27, 0) = ((MR_Box) (parse_tree__parse_class__Spec_23));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_class__MaybeItemInstanceInfo_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_27));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_class__Specs_24;
        MR_Word parse_tree__parse_class__Var_29;
        MR_Word parse_tree__parse_class__Var_30;

        {
          parse_tree__parse_class__Var_29 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0, parse_tree__parse_class__MaybeItemInstanceInfo0_17);
        }
        {
          parse_tree__parse_class__Var_30 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_class_scalar_common_1[9], parse_tree__parse_class__MaybeInstanceMethods_18);
        }
        {
          parse_tree__parse_class__Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_class__Var_29, parse_tree__parse_class__Var_30);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_class__MaybeItemInstanceInfo_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Specs_24));
        }
      }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_2(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_class__wrapper_arg_2;
    MR_Box parse_tree__parse_class__closure = parse_tree__parse_class__closure_arg;
    MR_String parse_tree__parse_class__conv0_HeadVar__3_58;

    {
      parse_tree__parse_class__conv0_HeadVar__3_58 = parse_tree__parse_class__IntroducedFrom__func__check_tvars_in_instance_constraint__834__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_class__wrapper_arg_1));
    }
    parse_tree__parse_class__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_class__conv0_HeadVar__3_58));
    return parse_tree__parse_class__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Box parse_tree__parse_class__closure = parse_tree__parse_class__closure_arg;

    {
      parse_tree__parse_class__succeeded = parse_tree__parse_class__IntroducedFrom__pred__check_tvars_in_instance_constraint__831__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_class__wrapper_arg_1));
    }
    return parse_tree__parse_class__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0(
  MR_Word parse_tree__parse_class__ItemInstanceInfo_4,
  MR_Word parse_tree__parse_class__NameTerm_5,
  MR_Word * parse_tree__parse_class__MaybeSpec_6)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__Types_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_4, (MR_Integer) 1)));
    MR_Word parse_tree__parse_class__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_4, (MR_Integer) 3)));
    MR_Word parse_tree__parse_class__TVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_4, (MR_Integer) 5)));
    MR_Word parse_tree__parse_class___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_4, (MR_Integer) 0)));
    MR_Word parse_tree__parse_class___OriginalTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_4, (MR_Integer) 2)));
    MR_Word parse_tree__parse_class___Methods_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_4, (MR_Integer) 4)));
    MR_Word parse_tree__parse_class___ModName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_4, (MR_Integer) 6)));
    MR_Word parse_tree__parse_class___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_4, (MR_Integer) 7)));
    MR_Integer parse_tree__parse_class___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_4, (MR_Integer) 8)));
    MR_Word parse_tree__parse_class__UnboundTVars_19;
    MR_Word parse_tree__parse_class__TVars_16;
    MR_Word parse_tree__parse_class__TypesVars_17;
    MR_Word parse_tree__parse_class__Var_27;
    MR_Word parse_tree__parse_class___BoundTVars_18;
    MR_Word parse_tree__parse_class__Var_20;
    MR_Word parse_tree__parse_class__Var_21;

    {
      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__parse_class__Constraints_10, &parse_tree__parse_class__TVars_16);
    }
    {
      parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__parse_class__Types_8, &parse_tree__parse_class__TypesVars_17);
    }
    {
      parse_tree__parse_class__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_27, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_27, 1) = ((MR_Box) (parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_27, 3) = ((MR_Box) (parse_tree__parse_class__TypesVars_17));
    }
    {
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__parse_class_scalar_common_1[1], parse_tree__parse_class__Var_27, parse_tree__parse_class__TVars_16, &parse_tree__parse_class___BoundTVars_18, &parse_tree__parse_class__UnboundTVars_19);
    }
    parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__UnboundTVars_19)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_class__succeeded)
      {
        parse_tree__parse_class__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__UnboundTVars_19, (MR_Integer) 0)));
        parse_tree__parse_class__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__UnboundTVars_19, (MR_Integer) 1)));
        {
          MR_Word parse_tree__parse_class__TypeInfo_55_55 = (MR_Word) &parse_tree__parse_class_scalar_common_1[1];
          MR_Word parse_tree__parse_class__TypeCtorInfo_60_60;
          MR_Word parse_tree__parse_class__UnboundTVarStrs_22;
          MR_Word parse_tree__parse_class__UnboundTVarPieces_23;
          MR_Word parse_tree__parse_class__Prefix_24;
          MR_Word parse_tree__parse_class__Pieces_25;
          MR_Word parse_tree__parse_class__Spec_26;
          MR_Word parse_tree__parse_class__Var_28;
          MR_Word parse_tree__parse_class__Var_36;
          MR_Word parse_tree__parse_class__Var_45;
          MR_Word parse_tree__parse_class__Var_46;
          MR_Word parse_tree__parse_class__Var_47;
          MR_Word parse_tree__parse_class__Var_48;
          MR_Word parse_tree__parse_class__Var_49;
          MR_Integer parse_tree__parse_class__Var_29;

          {
            parse_tree__parse_class__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_28, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_28, 1) = ((MR_Box) (parse_tree__parse_class__check_tvars_in_instance_constraint_3_p_0_2));
            MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_28, 3) = ((MR_Box) (parse_tree__parse_class__TVarSet_12));
          }
          {
            parse_tree__parse_class__UnboundTVarStrs_22 = mercury__list__map_2_f_0(parse_tree__parse_class__TypeInfo_55_55, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_class__Var_28, parse_tree__parse_class__UnboundTVars_19);
          }
          {
            parse_tree__parse_class__UnboundTVarPieces_23 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__parse_class__UnboundTVarStrs_22);
          }
          {
            parse_tree__parse_class__Var_29 = mercury__list__length_1_f_0(parse_tree__parse_class__TypeInfo_55_55, parse_tree__parse_class__UnboundTVars_19);
          }
          parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_29 == (MR_Integer) 1);
          if (parse_tree__parse_class__succeeded)
            {
              parse_tree__parse_class__Prefix_24 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[119]);
            }
          else
            {
              parse_tree__parse_class__Prefix_24 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[121]);
            }
          parse_tree__parse_class__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
          {
            parse_tree__parse_class__Var_36 = mercury__list__f_43_43_2_f_0(parse_tree__parse_class__TypeCtorInfo_60_60, parse_tree__parse_class__UnboundTVarPieces_23, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[85]));
          }
          {
            parse_tree__parse_class__Pieces_25 = mercury__list__f_43_43_2_f_0(parse_tree__parse_class__TypeCtorInfo_60_60, parse_tree__parse_class__Prefix_24, parse_tree__parse_class__Var_36);
          }
          {
            parse_tree__parse_class__Var_47 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__NameTerm_5);
          }
          {
            parse_tree__parse_class__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_49, 0) = ((MR_Box) (parse_tree__parse_class__Pieces_25));
          }
          {
            parse_tree__parse_class__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_48, 0) = ((MR_Box) (parse_tree__parse_class__Var_49));
            MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_class__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_46, 0) = ((MR_Box) (parse_tree__parse_class__Var_47));
            MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_46, 1) = ((MR_Box) (parse_tree__parse_class__Var_48));
          }
          {
            parse_tree__parse_class__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_45, 0) = ((MR_Box) (parse_tree__parse_class__Var_46));
            MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_class__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_26, 2) = ((MR_Box) (parse_tree__parse_class__Var_45));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__parse_class__MaybeSpec_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__Spec_26));
          }
        }
      }
    else
      *parse_tree__parse_class__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_instance_name_6_p_0(
  MR_Word parse_tree__parse_class__ModuleName_7,
  MR_Word parse_tree__parse_class__TVarSet_8,
  MR_Word parse_tree__parse_class__ArgTerm_9,
  MR_Word parse_tree__parse_class__Context_10,
  MR_Integer parse_tree__parse_class__SeqNum_11,
  MR_Word * parse_tree__parse_class__MaybeItemInstanceInfo_12)
{
  {
    MR_bool parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__ArgTerm_9)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_class__NameTerm_13;
    MR_Word parse_tree__parse_class__ConstraintsTerm_14;
    MR_Word parse_tree__parse_class__Var_16;
    MR_String parse_tree__parse_class__Var_17;
    MR_Word parse_tree__parse_class__Var_18;
    MR_Word parse_tree__parse_class__Var_19;
    MR_Word parse_tree__parse_class__Var_20;
    MR_Word parse_tree__parse_class__Var_15;

    if (parse_tree__parse_class__succeeded)
      {
        parse_tree__parse_class__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ArgTerm_9, (MR_Integer) 0)));
        parse_tree__parse_class__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ArgTerm_9, (MR_Integer) 1)));
        parse_tree__parse_class__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ArgTerm_9, (MR_Integer) 2)));
        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_class__succeeded)
          {
            parse_tree__parse_class__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_16, (MR_Integer) 0)));
            parse_tree__parse_class__succeeded = (strcmp(parse_tree__parse_class__Var_17, (MR_String) "<=") == 0);
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_18)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_class__succeeded)
                  {
                    parse_tree__parse_class__NameTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_18, (MR_Integer) 0)));
                    parse_tree__parse_class__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_18, (MR_Integer) 1)));
                    parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_19)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_class__succeeded)
                      {
                        parse_tree__parse_class__ConstraintsTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_19, (MR_Integer) 0)));
                        parse_tree__parse_class__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_19, (MR_Integer) 1)));
                        parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_class__succeeded)
      {
        MR_Word parse_tree__parse_class__TypeCtorInfo_33_77;
        MR_Word parse_tree__parse_class__VarSet_28;
        MR_Word parse_tree__parse_class__MaybeItemInstanceInfo0_29;
        MR_Word parse_tree__parse_class__MaybeInstanceConstraints_30;
        MR_Word parse_tree__parse_class__NameContextPieces_57;
        MR_Word parse_tree__parse_class__VarSet_58;
        MR_Word parse_tree__parse_class__MaybeClassName_59;
        MR_Word parse_tree__parse_class__ItemInstanceInfo0_31;
        MR_Word parse_tree__parse_class__InstanceConstraints_32;

        {
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__TVarSet_8, &parse_tree__parse_class__VarSet_28);
        }
        {
          parse_tree__parse_class__NameContextPieces_57 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[116]))));
        }
        parse_tree__parse_class__TypeCtorInfo_33_77 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        {
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_class__TypeCtorInfo_33_77, parse_tree__parse_class__TVarSet_8, &parse_tree__parse_class__VarSet_58);
        }
        {
          parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__parse_class__TypeCtorInfo_33_77, parse_tree__parse_class__VarSet_58, parse_tree__parse_class__NameContextPieces_57, parse_tree__parse_class__NameTerm_13, &parse_tree__parse_class__MaybeClassName_59);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_class__MaybeClassName_59)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__parse_class__Specs_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__MaybeClassName_59, (MR_Integer) 0)));

            {
              parse_tree__parse_class__MaybeItemInstanceInfo0_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__MaybeItemInstanceInfo0_29, 0) = ((MR_Box) (parse_tree__parse_class__Specs_74));
            }
          }
        else
          {
            MR_Word parse_tree__parse_class__ClassName_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeClassName_59, (MR_Integer) 0)));
            MR_Word parse_tree__parse_class__TypeTerms_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeClassName_59, (MR_Integer) 1)));
            MR_Word parse_tree__parse_class__MaybeTypes_63;

            {
              parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_4[4]), parse_tree__parse_class__VarSet_58, parse_tree__parse_class__NameContextPieces_57, parse_tree__parse_class__TypeTerms_61, &parse_tree__parse_class__MaybeTypes_63);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_class__MaybeTypes_63)) == (MR_mktag((MR_Integer) 0))))
              parse_tree__parse_class__MaybeItemInstanceInfo0_29 = (MR_Word) parse_tree__parse_class__MaybeTypes_63;
            else
              {
                MR_Word parse_tree__parse_class__Types_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeTypes_63, (MR_Integer) 0)));
                MR_Word parse_tree__parse_class__ItemInstanceInfo_65;

                {
                  parse_tree__parse_class__ItemInstanceInfo_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_65, 0) = ((MR_Box) (parse_tree__parse_class__ClassName_60));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_65, 1) = ((MR_Box) (parse_tree__parse_class__Types_64));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_65, 2) = ((MR_Box) (parse_tree__parse_class__Types_64));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_65, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_65, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_65, 5) = ((MR_Box) (parse_tree__parse_class__TVarSet_8));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_65, 6) = ((MR_Box) (parse_tree__parse_class__ModuleName_7));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_65, 7) = ((MR_Box) (parse_tree__parse_class__Context_10));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_65, 8) = ((MR_Box) (parse_tree__parse_class__SeqNum_11));
                }
                {
                  parse_tree__parse_class__MaybeItemInstanceInfo0_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeItemInstanceInfo0_29, 0) = ((MR_Box) (parse_tree__parse_class__ItemInstanceInfo_65));
                }
              }
          }
        {
          parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__parse_class__VarSet_28, parse_tree__parse_class__ConstraintsTerm_14, &parse_tree__parse_class__MaybeInstanceConstraints_30);
        }
        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__MaybeItemInstanceInfo0_29)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_class__succeeded)
          {
            parse_tree__parse_class__ItemInstanceInfo0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeItemInstanceInfo0_29, (MR_Integer) 0)));
            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__MaybeInstanceConstraints_30)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_class__succeeded)
              parse_tree__parse_class__InstanceConstraints_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeInstanceConstraints_30, (MR_Integer) 0)));
          }
        if (parse_tree__parse_class__succeeded)
          {
            MR_Word parse_tree__parse_class__ItemInstanceInfo_33;
            MR_Word parse_tree__parse_class__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_31, (MR_Integer) 0)));
            MR_Word parse_tree__parse_class__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_31, (MR_Integer) 1)));
            MR_Word parse_tree__parse_class__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_31, (MR_Integer) 2)));
            MR_Word parse_tree__parse_class__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_31, (MR_Integer) 4)));
            MR_Word parse_tree__parse_class__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_31, (MR_Integer) 5)));
            MR_Word parse_tree__parse_class__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_31, (MR_Integer) 6)));
            MR_Word parse_tree__parse_class__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_31, (MR_Integer) 7)));
            MR_Integer parse_tree__parse_class__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_31, (MR_Integer) 8)));
            MR_Word parse_tree__parse_class__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo0_31, (MR_Integer) 3)));

            {
              parse_tree__parse_class__ItemInstanceInfo_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_33, 0) = ((MR_Box) (parse_tree__parse_class__Var_37));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_33, 1) = ((MR_Box) (parse_tree__parse_class__Var_38));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_33, 2) = ((MR_Box) (parse_tree__parse_class__Var_39));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_33, 3) = ((MR_Box) (parse_tree__parse_class__InstanceConstraints_32));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_33, 4) = ((MR_Box) (parse_tree__parse_class__Var_41));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_33, 5) = ((MR_Box) (parse_tree__parse_class__Var_42));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_33, 6) = ((MR_Box) (parse_tree__parse_class__Var_43));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_33, 7) = ((MR_Box) (parse_tree__parse_class__Var_44));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_33, 8) = ((MR_Box) (parse_tree__parse_class__Var_45));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_class__MaybeItemInstanceInfo_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__ItemInstanceInfo_33));
            }
          }
        else
          {
            MR_Word parse_tree__parse_class__Specs_34;
            MR_Word parse_tree__parse_class__Var_35;
            MR_Word parse_tree__parse_class__Var_36;

            {
              parse_tree__parse_class__Var_35 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0, parse_tree__parse_class__MaybeItemInstanceInfo0_29);
            }
            {
              parse_tree__parse_class__Var_36 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_class_scalar_common_1[8], parse_tree__parse_class__MaybeInstanceConstraints_30);
            }
            {
              parse_tree__parse_class__Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_class__Var_35, parse_tree__parse_class__Var_36);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_class__MaybeItemInstanceInfo_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Specs_34));
            }
          }
      }
    else
      {
        parse_tree__parse_class__parse_underived_instance_6_p_0(parse_tree__parse_class__ModuleName_7, parse_tree__parse_class__TVarSet_8, parse_tree__parse_class__ArgTerm_9, parse_tree__parse_class__Context_10, parse_tree__parse_class__SeqNum_11, parse_tree__parse_class__MaybeItemInstanceInfo_12);
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box * parse_tree__parse_class__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Box parse_tree__parse_class__closure = parse_tree__parse_class__closure_arg;
    MR_Word parse_tree__parse_class__conv0_Constraint_3;

    {
      parse_tree__parse_class__succeeded = parse_tree__parse_class__get_simple_constraint_2_p_0(((MR_Word) parse_tree__parse_class__wrapper_arg_1), &parse_tree__parse_class__conv0_Constraint_3);
    }
    if (parse_tree__parse_class__succeeded)
      {
        *parse_tree__parse_class__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_class__conv0_Constraint_3));
        parse_tree__parse_class__succeeded = MR_TRUE;
      }
    return parse_tree__parse_class__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word parse_tree__parse_class__VarSet_6,
  MR_Word parse_tree__parse_class__ConstraintsTerm_7,
  MR_Word * parse_tree__parse_class__Result_8)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__Result0_23;
    MR_Word parse_tree__parse_class__HeadConstraintTerm_52;
    MR_Word parse_tree__parse_class__TailConstraintTerms_53;
    MR_Word parse_tree__parse_class__Var_54;

    {
      parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__ConstraintsTerm_7, &parse_tree__parse_class__Var_54);
    }
    parse_tree__parse_class__HeadConstraintTerm_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_54, (MR_Integer) 0)));
    parse_tree__parse_class__TailConstraintTerms_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_54, (MR_Integer) 1)));
    {
      parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(parse_tree__parse_class__VarSet_6, parse_tree__parse_class__HeadConstraintTerm_52, parse_tree__parse_class__TailConstraintTerms_53, &parse_tree__parse_class__Result0_23);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_class__Result0_23)) == (MR_mktag((MR_Integer) 0))))
      *parse_tree__parse_class__Result_8 = (MR_Word) parse_tree__parse_class__Result0_23;
    else
      {
        MR_Word parse_tree__parse_class__HeadArbConstraint_24;
        MR_Word parse_tree__parse_class__TailArbConstraints_25;
        MR_Word parse_tree__parse_class__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Result0_23, (MR_Integer) 0)));
        MR_Word parse_tree__parse_class__HeadConstraint_26;
        MR_Word parse_tree__parse_class__TailConstraints_27;
        MR_Word parse_tree__parse_class__TypeCtorInfo_34_46;
        MR_Word parse_tree__parse_class__TypeCtorInfo_35_47;
        MR_Word parse_tree__parse_class__Var_31;

        parse_tree__parse_class__HeadArbConstraint_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_30, (MR_Integer) 0)));
        parse_tree__parse_class__TailArbConstraints_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_30, (MR_Integer) 1)));
        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__HeadArbConstraint_24)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_class__succeeded)
          {
            parse_tree__parse_class__HeadConstraint_26 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__HeadArbConstraint_24), (MR_Integer) 0);
            parse_tree__parse_class__Var_31 = (MR_Word) &parse_tree__parse_class_scalar_common_2[4];
            parse_tree__parse_class__TypeCtorInfo_34_46 = (MR_Word) &parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0;
            parse_tree__parse_class__TypeCtorInfo_35_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
            {
              parse_tree__parse_class__succeeded = mercury__list__map_3_p_2(parse_tree__parse_class__TypeCtorInfo_34_46, parse_tree__parse_class__TypeCtorInfo_35_47, parse_tree__parse_class__Var_31, parse_tree__parse_class__TailArbConstraints_25, &parse_tree__parse_class__TailConstraints_27);
            }
          }
        if (parse_tree__parse_class__succeeded)
          {
            MR_Word parse_tree__parse_class__Var_32;

            {
              parse_tree__parse_class__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_32, 0) = ((MR_Box) (parse_tree__parse_class__HeadConstraint_26));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_32, 1) = ((MR_Box) (parse_tree__parse_class__TailConstraints_27));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_class__Result_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_32));
            }
          }
        else
          {
            MR_Word parse_tree__parse_class__Spec_28;
            MR_Word parse_tree__parse_class__Var_35;
            MR_Word parse_tree__parse_class__Var_36;
            MR_Word parse_tree__parse_class__Var_37;
            MR_Word parse_tree__parse_class__Var_42;

            {
              parse_tree__parse_class__Var_37 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__ConstraintsTerm_7);
            }
            {
              parse_tree__parse_class__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_36, 0) = ((MR_Box) (parse_tree__parse_class__Var_37));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[117])));
            }
            {
              parse_tree__parse_class__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_35, 0) = ((MR_Box) (parse_tree__parse_class__Var_36));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_class__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_28, 2) = ((MR_Box) (parse_tree__parse_class__Var_35));
            }
            {
              parse_tree__parse_class__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_42, 0) = ((MR_Box) (parse_tree__parse_class__Spec_28));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_class__Result_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_42));
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_underived_instance_6_p_0(
  MR_Word parse_tree__parse_class__ModuleName_7,
  MR_Word parse_tree__parse_class__TVarSet_8,
  MR_Word parse_tree__parse_class__NameTerm_9,
  MR_Word parse_tree__parse_class__Context_10,
  MR_Integer parse_tree__parse_class__SeqNum_11,
  MR_Word * parse_tree__parse_class__MaybeItemInstanceInfo_12)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__TypeCtorInfo_33_33;
    MR_Word parse_tree__parse_class__NameContextPieces_13;
    MR_Word parse_tree__parse_class__VarSet_14;
    MR_Word parse_tree__parse_class__MaybeClassName_15;

    {
      parse_tree__parse_class__NameContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[116]))));
    }
    parse_tree__parse_class__TypeCtorInfo_33_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    {
      mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_class__TypeCtorInfo_33_33, parse_tree__parse_class__TVarSet_8, &parse_tree__parse_class__VarSet_14);
    }
    {
      parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__parse_class__TypeCtorInfo_33_33, parse_tree__parse_class__VarSet_14, parse_tree__parse_class__NameContextPieces_13, parse_tree__parse_class__NameTerm_9, &parse_tree__parse_class__MaybeClassName_15);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_class__MaybeClassName_15)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_class__Specs_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__MaybeClassName_15, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_class__MaybeItemInstanceInfo_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Specs_30));
        }
      }
    else
      {
        MR_Word parse_tree__parse_class__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeClassName_15, (MR_Integer) 0)));
        MR_Word parse_tree__parse_class__TypeTerms_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeClassName_15, (MR_Integer) 1)));
        MR_Word parse_tree__parse_class__MaybeTypes_19;

        {
          parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_4[4]), parse_tree__parse_class__VarSet_14, parse_tree__parse_class__NameContextPieces_13, parse_tree__parse_class__TypeTerms_17, &parse_tree__parse_class__MaybeTypes_19);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_class__MaybeTypes_19)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_class__MaybeItemInstanceInfo_12 = (MR_Word) parse_tree__parse_class__MaybeTypes_19;
        else
          {
            MR_Word parse_tree__parse_class__Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeTypes_19, (MR_Integer) 0)));
            MR_Word parse_tree__parse_class__ItemInstanceInfo_21;

            {
              parse_tree__parse_class__ItemInstanceInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 0) = ((MR_Box) (parse_tree__parse_class__ClassName_16));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 1) = ((MR_Box) (parse_tree__parse_class__Types_20));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 2) = ((MR_Box) (parse_tree__parse_class__Types_20));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 5) = ((MR_Box) (parse_tree__parse_class__TVarSet_8));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 6) = ((MR_Box) (parse_tree__parse_class__ModuleName_7));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 7) = ((MR_Box) (parse_tree__parse_class__Context_10));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemInstanceInfo_21, 8) = ((MR_Box) (parse_tree__parse_class__SeqNum_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_class__MaybeItemInstanceInfo_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__ItemInstanceInfo_21));
            }
          }
      }
  }
}

void MR_CALL 
parse_tree__parse_class__parse_typeclass_item_6_p_0(
  MR_Word parse_tree__parse_class__ModuleName_7,
  MR_Word parse_tree__parse_class__VarSet_8,
  MR_Word parse_tree__parse_class__ArgTerms_9,
  MR_Word parse_tree__parse_class__Context_10,
  MR_Integer parse_tree__parse_class__SeqNum_11,
  MR_Word * parse_tree__parse_class__MaybeIOM_12)
{
  {
    MR_bool parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_class__ArgTerm_13;
    MR_Word parse_tree__parse_class__Var_22;

    if (parse_tree__parse_class__succeeded)
      {
        parse_tree__parse_class__ArgTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__ArgTerms_9, (MR_Integer) 0)));
        parse_tree__parse_class__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__ArgTerms_9, (MR_Integer) 1)));
        parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_class__succeeded)
      {
        MR_Word parse_tree__parse_class__MaybeItemTypeClassInfo_17;
        MR_Word parse_tree__parse_class__NameTerm_14;
        MR_Word parse_tree__parse_class__MethodsTerm_15;
        MR_Word parse_tree__parse_class__Var_23;
        MR_String parse_tree__parse_class__Var_24;
        MR_Word parse_tree__parse_class__Var_25;
        MR_Word parse_tree__parse_class__Var_26;
        MR_Word parse_tree__parse_class__Var_27;
        MR_Word parse_tree__parse_class__Var_16;

        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__ArgTerm_13)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_class__succeeded)
          {
            parse_tree__parse_class__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ArgTerm_13, (MR_Integer) 0)));
            parse_tree__parse_class__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ArgTerm_13, (MR_Integer) 1)));
            parse_tree__parse_class__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ArgTerm_13, (MR_Integer) 2)));
            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_23)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_23, (MR_Integer) 0)));
                parse_tree__parse_class__succeeded = (strcmp(parse_tree__parse_class__Var_24, (MR_String) "where") == 0);
                if (parse_tree__parse_class__succeeded)
                  {
                    parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_25)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_class__succeeded)
                      {
                        parse_tree__parse_class__NameTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_25, (MR_Integer) 0)));
                        parse_tree__parse_class__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_25, (MR_Integer) 1)));
                        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_26)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_class__succeeded)
                          {
                            parse_tree__parse_class__MethodsTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_26, (MR_Integer) 0)));
                            parse_tree__parse_class__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_26, (MR_Integer) 1)));
                            parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_class__succeeded)
          {
            parse_tree__parse_class__parse_non_empty_class_7_p_0(parse_tree__parse_class__ModuleName_7, parse_tree__parse_class__VarSet_8, parse_tree__parse_class__NameTerm_14, parse_tree__parse_class__MethodsTerm_15, parse_tree__parse_class__Context_10, parse_tree__parse_class__SeqNum_11, &parse_tree__parse_class__MaybeItemTypeClassInfo_17);
          }
        else
          {
            MR_Word parse_tree__parse_class__NameTerm_72;
            MR_Word parse_tree__parse_class__ConstraintsTerm_73;
            MR_Word parse_tree__parse_class__Var_76;
            MR_String parse_tree__parse_class__Var_77;
            MR_Word parse_tree__parse_class__Var_78;
            MR_Word parse_tree__parse_class__Var_79;
            MR_Word parse_tree__parse_class__Var_80;
            MR_Word parse_tree__parse_class__Var_74;

            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__ArgTerm_13)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ArgTerm_13, (MR_Integer) 0)));
                parse_tree__parse_class__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ArgTerm_13, (MR_Integer) 1)));
                parse_tree__parse_class__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ArgTerm_13, (MR_Integer) 2)));
                parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_76)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_class__succeeded)
                  {
                    parse_tree__parse_class__Var_77 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_76, (MR_Integer) 0)));
                    parse_tree__parse_class__succeeded = (strcmp(parse_tree__parse_class__Var_77, (MR_String) "<=") == 0);
                    if (parse_tree__parse_class__succeeded)
                      {
                        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_78)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_class__succeeded)
                          {
                            parse_tree__parse_class__NameTerm_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_78, (MR_Integer) 0)));
                            parse_tree__parse_class__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_78, (MR_Integer) 1)));
                            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_79)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__parse_class__succeeded)
                              {
                                parse_tree__parse_class__ConstraintsTerm_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_79, (MR_Integer) 0)));
                                parse_tree__parse_class__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_79, (MR_Integer) 1)));
                                parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                  }
              }
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__parse_constrained_class_7_p_0(parse_tree__parse_class__ModuleName_7, parse_tree__parse_class__VarSet_8, parse_tree__parse_class__NameTerm_72, parse_tree__parse_class__ConstraintsTerm_73, parse_tree__parse_class__Context_10, parse_tree__parse_class__SeqNum_11, &parse_tree__parse_class__MaybeItemTypeClassInfo_17);
              }
            else
              {
                MR_Word parse_tree__parse_class__TVarSet_75;

                {
                  mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_class__VarSet_8, &parse_tree__parse_class__TVarSet_75);
                }
                {
                  parse_tree__parse_class__parse_unconstrained_class_6_p_0(parse_tree__parse_class__ModuleName_7, parse_tree__parse_class__TVarSet_75, parse_tree__parse_class__ArgTerm_13, parse_tree__parse_class__Context_10, parse_tree__parse_class__SeqNum_11, &parse_tree__parse_class__MaybeItemTypeClassInfo_17);
                }
              }
          }
        if (((MR_tag((MR_Word) parse_tree__parse_class__MaybeItemTypeClassInfo_17)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_class__MaybeIOM_12 = (MR_Word) parse_tree__parse_class__MaybeItemTypeClassInfo_17;
        else
          {
            MR_Word parse_tree__parse_class__ItemTypeClassInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeItemTypeClassInfo_17, (MR_Integer) 0)));
            MR_Word parse_tree__parse_class__Var_28;
            MR_Word parse_tree__parse_class__Var_29;

            {
              parse_tree__parse_class__Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_29, 1) = ((MR_Box) (parse_tree__parse_class__ItemTypeClassInfo_18));
            }
            {
              parse_tree__parse_class__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_28, 0) = ((MR_Box) (parse_tree__parse_class__Var_29));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_class__MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_28));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_class__Spec_21;
        MR_Word parse_tree__parse_class__Var_58;
        MR_Word parse_tree__parse_class__Var_59;
        MR_Word parse_tree__parse_class__Var_64;

        {
          parse_tree__parse_class__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_59, 0) = ((MR_Box) (parse_tree__parse_class__Context_10));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[115])));
        }
        {
          parse_tree__parse_class__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_58, 0) = ((MR_Box) (parse_tree__parse_class__Var_59));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_class__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_21, 2) = ((MR_Box) (parse_tree__parse_class__Var_58));
        }
        {
          parse_tree__parse_class__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_64, 0) = ((MR_Box) (parse_tree__parse_class__Spec_21));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_class__MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_64));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_non_empty_class_7_p_0(
  MR_Word parse_tree__parse_class__ModuleName_8,
  MR_Word parse_tree__parse_class__VarSet_9,
  MR_Word parse_tree__parse_class__NameTerm_10,
  MR_Word parse_tree__parse_class__MethodsTerm_11,
  MR_Word parse_tree__parse_class__Context_12,
  MR_Integer parse_tree__parse_class__SeqNum_13,
  MR_Word * parse_tree__parse_class__MaybeItemTypeClassInfo_14)
{
  {
    MR_bool parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__NameTerm_10)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_class__MaybeItemTypeClassInfo0_15;
    MR_Word parse_tree__parse_class__MaybeClassMethods_16;
    MR_Word parse_tree__parse_class__NameTerm_53;
    MR_Word parse_tree__parse_class__ConstraintsTerm_54;
    MR_Word parse_tree__parse_class__Var_57;
    MR_String parse_tree__parse_class__Var_58;
    MR_Word parse_tree__parse_class__Var_59;
    MR_Word parse_tree__parse_class__Var_60;
    MR_Word parse_tree__parse_class__Var_61;
    MR_Word parse_tree__parse_class__Var_55;
    MR_Word parse_tree__parse_class__ItemTypeClassInfo0_17;
    MR_Word parse_tree__parse_class__ClassMethods_18;

    if (parse_tree__parse_class__succeeded)
      {
        parse_tree__parse_class__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__NameTerm_10, (MR_Integer) 0)));
        parse_tree__parse_class__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__NameTerm_10, (MR_Integer) 1)));
        parse_tree__parse_class__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__NameTerm_10, (MR_Integer) 2)));
        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_57)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_class__succeeded)
          {
            parse_tree__parse_class__Var_58 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_57, (MR_Integer) 0)));
            parse_tree__parse_class__succeeded = (strcmp(parse_tree__parse_class__Var_58, (MR_String) "<=") == 0);
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_59)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_class__succeeded)
                  {
                    parse_tree__parse_class__NameTerm_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_59, (MR_Integer) 0)));
                    parse_tree__parse_class__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_59, (MR_Integer) 1)));
                    parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_60)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_class__succeeded)
                      {
                        parse_tree__parse_class__ConstraintsTerm_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_60, (MR_Integer) 0)));
                        parse_tree__parse_class__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_60, (MR_Integer) 1)));
                        parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_class__succeeded)
      {
        parse_tree__parse_class__parse_constrained_class_7_p_0(parse_tree__parse_class__ModuleName_8, parse_tree__parse_class__VarSet_9, parse_tree__parse_class__NameTerm_53, parse_tree__parse_class__ConstraintsTerm_54, parse_tree__parse_class__Context_12, parse_tree__parse_class__SeqNum_13, &parse_tree__parse_class__MaybeItemTypeClassInfo0_15);
      }
    else
      {
        MR_Word parse_tree__parse_class__TVarSet_56;

        {
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_class__VarSet_9, &parse_tree__parse_class__TVarSet_56);
        }
        {
          parse_tree__parse_class__parse_unconstrained_class_6_p_0(parse_tree__parse_class__ModuleName_8, parse_tree__parse_class__TVarSet_56, parse_tree__parse_class__NameTerm_10, parse_tree__parse_class__Context_12, parse_tree__parse_class__SeqNum_13, &parse_tree__parse_class__MaybeItemTypeClassInfo0_15);
        }
      }
    {
      parse_tree__parse_class__parse_class_methods_4_p_0(parse_tree__parse_class__ModuleName_8, parse_tree__parse_class__VarSet_9, parse_tree__parse_class__MethodsTerm_11, &parse_tree__parse_class__MaybeClassMethods_16);
    }
    parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__MaybeItemTypeClassInfo0_15)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_class__succeeded)
      {
        parse_tree__parse_class__ItemTypeClassInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeItemTypeClassInfo0_15, (MR_Integer) 0)));
        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__MaybeClassMethods_16)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_class__succeeded)
          parse_tree__parse_class__ClassMethods_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeClassMethods_16, (MR_Integer) 0)));
      }
    if (parse_tree__parse_class__succeeded)
      {
        MR_Word parse_tree__parse_class__TVarSet_19;
        MR_Word parse_tree__parse_class__ItemTypeClassInfo_20;
        MR_Word parse_tree__parse_class__Var_23;
        MR_Word parse_tree__parse_class__Var_26;
        MR_Word parse_tree__parse_class__Var_27;
        MR_Word parse_tree__parse_class__Var_28;
        MR_Word parse_tree__parse_class__Var_29;
        MR_Word parse_tree__parse_class__Var_32;
        MR_Integer parse_tree__parse_class__Var_33;
        MR_Word parse_tree__parse_class__Var_30;
        MR_Word parse_tree__parse_class__Var_31;

        {
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_class__VarSet_9, &parse_tree__parse_class__TVarSet_19);
        }
        {
          parse_tree__parse_class__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_23, 0) = ((MR_Box) (parse_tree__parse_class__ClassMethods_18));
        }
        parse_tree__parse_class__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo0_17, (MR_Integer) 0)));
        parse_tree__parse_class__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo0_17, (MR_Integer) 1)));
        parse_tree__parse_class__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo0_17, (MR_Integer) 2)));
        parse_tree__parse_class__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo0_17, (MR_Integer) 3)));
        parse_tree__parse_class__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo0_17, (MR_Integer) 4)));
        parse_tree__parse_class__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo0_17, (MR_Integer) 5)));
        parse_tree__parse_class__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo0_17, (MR_Integer) 6)));
        parse_tree__parse_class__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo0_17, (MR_Integer) 7)));
        {
          parse_tree__parse_class__ItemTypeClassInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo_20, 0) = ((MR_Box) (parse_tree__parse_class__Var_26));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo_20, 1) = ((MR_Box) (parse_tree__parse_class__Var_27));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo_20, 2) = ((MR_Box) (parse_tree__parse_class__Var_28));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo_20, 3) = ((MR_Box) (parse_tree__parse_class__Var_29));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo_20, 4) = ((MR_Box) (parse_tree__parse_class__Var_23));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo_20, 5) = ((MR_Box) (parse_tree__parse_class__TVarSet_19));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo_20, 6) = ((MR_Box) (parse_tree__parse_class__Var_32));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClassInfo_20, 7) = ((MR_Box) (parse_tree__parse_class__Var_33));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_class__MaybeItemTypeClassInfo_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__ItemTypeClassInfo_20));
        }
      }
    else
      {
        MR_Word parse_tree__parse_class__Specs_21;
        MR_Word parse_tree__parse_class__Var_24;
        MR_Word parse_tree__parse_class__Var_25;

        {
          parse_tree__parse_class__Var_24 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0, parse_tree__parse_class__MaybeItemTypeClassInfo0_15);
        }
        {
          parse_tree__parse_class__Var_25 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_class_scalar_common_1[0], parse_tree__parse_class__MaybeClassMethods_16);
        }
        {
          parse_tree__parse_class__Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_class__Var_24, parse_tree__parse_class__Var_25);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_class__MaybeItemTypeClassInfo_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Specs_21));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_class_methods_4_p_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box * parse_tree__parse_class__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_class__closure = parse_tree__parse_class__closure_arg;
    MR_Word parse_tree__parse_class__conv0_HeadVar__4_4;

    {
      parse_tree__parse_item__parse_class_method_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_class__wrapper_arg_1), &parse_tree__parse_class__conv0_HeadVar__4_4);
    }
    *parse_tree__parse_class__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_class__conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_class_methods_4_p_0(
  MR_Word parse_tree__parse_class__ModuleName_5,
  MR_Word parse_tree__parse_class__VarSet_6,
  MR_Word parse_tree__parse_class__MethodsTerm_7,
  MR_Word * parse_tree__parse_class__MaybeClassMethods_8)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__MethodTerms_9;

    {
      parse_tree__parse_class__succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(parse_tree__parse_class__MethodsTerm_7, &parse_tree__parse_class__MethodTerms_9);
    }
    if (parse_tree__parse_class__succeeded)
      {
        MR_Word parse_tree__parse_class__MaybeMethods_10;
        MR_Word parse_tree__parse_class__Var_13;
        MR_Word parse_tree__parse_class__Methods_38;
        MR_Word parse_tree__parse_class__Specs_39;

        {
          parse_tree__parse_class__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_13, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_13, 1) = ((MR_Box) (parse_tree__parse_class__parse_class_methods_4_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_13, 3) = ((MR_Box) (parse_tree__parse_class__ModuleName_5));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_13, 4) = ((MR_Box) (parse_tree__parse_class__VarSet_6));
        }
        {
          mercury__list__map_3_p_0((MR_Word) &parse_tree__parse_class_scalar_common_1[3], (MR_Word) &parse_tree__parse_class_scalar_common_1[5], parse_tree__parse_class__Var_13, parse_tree__parse_class__MethodTerms_9, &parse_tree__parse_class__MaybeMethods_10);
        }
        {
          parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__parse_class__MaybeMethods_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_class__Methods_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_class__Specs_39);
        }
        if ((parse_tree__parse_class__Specs_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__parse_class__MaybeClassMethods_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__Methods_38));
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_class__MaybeClassMethods_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Specs_39));
          }
      }
    else
      {
        MR_Word parse_tree__parse_class__Spec_12;
        MR_Word parse_tree__parse_class__Var_21;
        MR_Word parse_tree__parse_class__Var_22;
        MR_Word parse_tree__parse_class__Var_23;
        MR_Word parse_tree__parse_class__Var_28;

        {
          parse_tree__parse_class__Var_23 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__MethodsTerm_7);
        }
        {
          parse_tree__parse_class__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_22, 0) = ((MR_Box) (parse_tree__parse_class__Var_23));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[114])));
        }
        {
          parse_tree__parse_class__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_21, 0) = ((MR_Box) (parse_tree__parse_class__Var_22));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_class__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_12, 2) = ((MR_Box) (parse_tree__parse_class__Var_21));
        }
        {
          parse_tree__parse_class__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_28, 0) = ((MR_Box) (parse_tree__parse_class__Spec_12));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_class__MaybeClassMethods_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_28));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1,
  MR_Word parse_tree__parse_class__STATE_VARIABLE_Methods_0_2,
  MR_Word * parse_tree__parse_class__STATE_VARIABLE_Methods_3,
  MR_Word parse_tree__parse_class__STATE_VARIABLE_Specs_0_4,
  MR_Word * parse_tree__parse_class__STATE_VARIABLE_Specs_5)
{
  {
    MR_bool parse_tree__parse_class__succeeded;

    if ((parse_tree__parse_class__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_class__STATE_VARIABLE_Specs_5 = parse_tree__parse_class__STATE_VARIABLE_Specs_0_4;
        *parse_tree__parse_class__STATE_VARIABLE_Methods_3 = parse_tree__parse_class__STATE_VARIABLE_Methods_0_2;
      }
    else
      {
        MR_Word parse_tree__parse_class__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_class__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__parse_class__STATE_VARIABLE_Methods_22_22;
        MR_Word parse_tree__parse_class__STATE_VARIABLE_Specs_23_23;

        {
          parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__parse_class__Xs_13, parse_tree__parse_class__STATE_VARIABLE_Methods_0_2, &parse_tree__parse_class__STATE_VARIABLE_Methods_22_22, parse_tree__parse_class__STATE_VARIABLE_Specs_0_4, &parse_tree__parse_class__STATE_VARIABLE_Specs_23_23);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_class__X_12)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__parse_class__CurSpecs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__X_12, (MR_Integer) 0)));

            {
              *parse_tree__parse_class__STATE_VARIABLE_Specs_5 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_class__CurSpecs_17, parse_tree__parse_class__STATE_VARIABLE_Specs_23_23);
            }
            *parse_tree__parse_class__STATE_VARIABLE_Methods_3 = parse_tree__parse_class__STATE_VARIABLE_Methods_22_22;
          }
        else
          {
            MR_Box parse_tree__parse_class__CurMethod_16 = (MR_hl_field(MR_mktag(1), parse_tree__parse_class__X_12, (MR_Integer) 0));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_class__STATE_VARIABLE_Methods_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = parse_tree__parse_class__CurMethod_16;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_class__STATE_VARIABLE_Methods_22_22));
            }
            *parse_tree__parse_class__STATE_VARIABLE_Specs_5 = parse_tree__parse_class__STATE_VARIABLE_Specs_23_23;
          }
      }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_4(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_class__wrapper_arg_2;
    MR_Box parse_tree__parse_class__closure = parse_tree__parse_class__closure_arg;
    MR_String parse_tree__parse_class__conv1_HeadVar__3_161;

    {
      parse_tree__parse_class__conv1_HeadVar__3_161 = parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__222__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_class__wrapper_arg_1));
    }
    parse_tree__parse_class__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_class__conv1_HeadVar__3_161));
    return parse_tree__parse_class__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_3(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_class__wrapper_arg_2;
    MR_Box parse_tree__parse_class__closure = parse_tree__parse_class__closure_arg;
    MR_String parse_tree__parse_class__conv0_HeadVar__3_158;

    {
      parse_tree__parse_class__conv0_HeadVar__3_158 = parse_tree__parse_class__IntroducedFrom__func__parse_constrained_class__219__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_class__wrapper_arg_1));
    }
    parse_tree__parse_class__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_class__conv0_HeadVar__3_158));
    return parse_tree__parse_class__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_2(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Box parse_tree__parse_class__closure = parse_tree__parse_class__closure_arg;

    {
      parse_tree__parse_class__succeeded = parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__180__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_class__wrapper_arg_1));
    }
    return parse_tree__parse_class__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Box parse_tree__parse_class__closure = parse_tree__parse_class__closure_arg;

    {
      parse_tree__parse_class__succeeded = parse_tree__parse_class__IntroducedFrom__pred__parse_constrained_class__178__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_class__wrapper_arg_1));
    }
    return parse_tree__parse_class__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_constrained_class_7_p_0(
  MR_Word parse_tree__parse_class__ModuleName_8,
  MR_Word parse_tree__parse_class__VarSet_9,
  MR_Word parse_tree__parse_class__NameTerm_10,
  MR_Word parse_tree__parse_class__ConstraintsTerm_11,
  MR_Word parse_tree__parse_class__Context_12,
  MR_Integer parse_tree__parse_class__SeqNum_13,
  MR_Word * parse_tree__parse_class__MaybeItemTypeClass_14)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__TVarSet_15;
    MR_Word parse_tree__parse_class__MaybeParsedConstraints_16;

    {
      mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_class__VarSet_9, &parse_tree__parse_class__TVarSet_15);
    }
    {
      parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__parse_class__VarSet_9, parse_tree__parse_class__ConstraintsTerm_11, &parse_tree__parse_class__MaybeParsedConstraints_16);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_class__MaybeParsedConstraints_16)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_class__Specs_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__MaybeParsedConstraints_16, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_class__MaybeItemTypeClass_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Specs_59));
        }
      }
    else
      {
        MR_Word parse_tree__parse_class__ConstraintList_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeParsedConstraints_16, (MR_Integer) 0)));
        MR_Word parse_tree__parse_class__FunDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeParsedConstraints_16, (MR_Integer) 1)));
        MR_Word parse_tree__parse_class__MaybeItemTypeClass0_19;

        {
          parse_tree__parse_class__parse_unconstrained_class_6_p_0(parse_tree__parse_class__ModuleName_8, parse_tree__parse_class__TVarSet_15, parse_tree__parse_class__NameTerm_10, parse_tree__parse_class__Context_12, parse_tree__parse_class__SeqNum_13, &parse_tree__parse_class__MaybeItemTypeClass0_19);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_class__MaybeItemTypeClass0_19)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_class__MaybeItemTypeClass_14 = parse_tree__parse_class__MaybeItemTypeClass0_19;
        else
          {
            MR_Word parse_tree__parse_class__TypeInfo_149_149;
            MR_Word parse_tree__parse_class__ItemTypeClass0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeItemTypeClass0_19, (MR_Integer) 0)));
            MR_Word parse_tree__parse_class__ConstraintVars_22;
            MR_Word parse_tree__parse_class__SortedConstraintVars_23;
            MR_Word parse_tree__parse_class__FunDepVars_24;
            MR_Word parse_tree__parse_class__SortedFunDepVars_25;
            MR_Word parse_tree__parse_class__Params_26;
            MR_Word parse_tree__parse_class__ConstraintNotInParams_28;
            MR_Word parse_tree__parse_class__FunDepNotInParams_30;
            MR_Word parse_tree__parse_class__ConstraintErrorContext_33;
            MR_Word parse_tree__parse_class__FunDepErrorContext_36;
            MR_Word parse_tree__parse_class__NotInParams_37;
            MR_Word parse_tree__parse_class__Var_60;
            MR_Word parse_tree__parse_class__Var_61;
            MR_Integer parse_tree__parse_class__Var_167;
            MR_Word parse_tree__parse_class__Var_168;
            MR_Word parse_tree__parse_class__Var_169;
            MR_Word parse_tree__parse_class__Var_170;
            MR_Word parse_tree__parse_class__Var_173;
            MR_Word parse_tree__parse_class__Var_174;
            MR_Word parse_tree__parse_class__Var_117;
            MR_Word parse_tree__parse_class__Var_118;
            MR_Word parse_tree__parse_class__Var_119;
            MR_Word parse_tree__parse_class__Var_120;
            MR_Word parse_tree__parse_class__Var_121;
            MR_Word parse_tree__parse_class__Var_122;
            MR_Integer parse_tree__parse_class__Var_123;
            MR_Word parse_tree__parse_class___ConstraintInParams_27;
            MR_Word parse_tree__parse_class___FunDepInParams_29;
            MR_Word parse_tree__parse_class__Var_171;
            MR_Word parse_tree__parse_class__Var_172;

            {
              parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__parse_class__ConstraintList_17, &parse_tree__parse_class__ConstraintVars_22);
            }
            parse_tree__parse_class__TypeInfo_149_149 = (MR_Word) &parse_tree__parse_class_scalar_common_1[1];
            {
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__parse_class__TypeInfo_149_149, parse_tree__parse_class__ConstraintVars_22, &parse_tree__parse_class__SortedConstraintVars_23);
            }
            {
              parse_tree__parse_class__FunDepVars_24 = parse_tree__parse_class__tvars_in_fundeps_1_f_0(parse_tree__parse_class__FunDeps_18);
            }
            {
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__parse_class__TypeInfo_149_149, parse_tree__parse_class__FunDepVars_24, &parse_tree__parse_class__SortedFunDepVars_25);
            }
            parse_tree__parse_class__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 0)));
            parse_tree__parse_class__Params_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 1)));
            parse_tree__parse_class__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 2)));
            parse_tree__parse_class__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 3)));
            parse_tree__parse_class__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 4)));
            parse_tree__parse_class__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 5)));
            parse_tree__parse_class__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 6)));
            parse_tree__parse_class__Var_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 7)));
            {
              parse_tree__parse_class__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_60, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_3[2]));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_60, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_1));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_60, 3) = ((MR_Box) (parse_tree__parse_class__Params_26));
            }
            {
              mercury__list__filter_4_p_0(parse_tree__parse_class__TypeInfo_149_149, parse_tree__parse_class__Var_60, parse_tree__parse_class__SortedConstraintVars_23, &parse_tree__parse_class___ConstraintInParams_27, &parse_tree__parse_class__ConstraintNotInParams_28);
            }
            {
              parse_tree__parse_class__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_61, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_3[2]));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_61, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_2));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_61, 3) = ((MR_Box) (parse_tree__parse_class__Params_26));
            }
            {
              mercury__list__filter_4_p_0(parse_tree__parse_class__TypeInfo_149_149, parse_tree__parse_class__Var_61, parse_tree__parse_class__SortedFunDepVars_25, &parse_tree__parse_class___FunDepInParams_29, &parse_tree__parse_class__FunDepNotInParams_30);
            }
            if ((parse_tree__parse_class__ConstraintNotInParams_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              parse_tree__parse_class__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Integer parse_tree__parse_class__Var_62;

                {
                  parse_tree__parse_class__Var_62 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, parse_tree__parse_class__ConstraintList_17);
                }
                parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_62 == (MR_Integer) 1);
                if (parse_tree__parse_class__succeeded)
                  {
                    parse_tree__parse_class__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[97]);
                  }
                else
                  {
                    parse_tree__parse_class__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[99]);
                  }
              }
            if ((parse_tree__parse_class__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              parse_tree__parse_class__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Integer parse_tree__parse_class__Var_69;

                {
                  parse_tree__parse_class__Var_69 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, parse_tree__parse_class__FunDeps_18);
                }
                parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_69 == (MR_Integer) 1);
                if (parse_tree__parse_class__succeeded)
                  {
                    parse_tree__parse_class__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[101]);
                  }
                else
                  {
                    parse_tree__parse_class__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[103]);
                  }
              }
            {
              parse_tree__parse_class__NotInParams_37 = mercury__list__f_43_43_2_f_0(parse_tree__parse_class__TypeInfo_149_149, parse_tree__parse_class__ConstraintNotInParams_28, parse_tree__parse_class__FunDepNotInParams_30);
            }
            parse_tree__parse_class__Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 0)));
            parse_tree__parse_class__Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 1)));
            parse_tree__parse_class__Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 2)));
            parse_tree__parse_class__Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 3)));
            parse_tree__parse_class__Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 4)));
            parse_tree__parse_class__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 5)));
            parse_tree__parse_class__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 6)));
            parse_tree__parse_class__Var_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass0_21, (MR_Integer) 7)));
            if ((parse_tree__parse_class__NotInParams_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word parse_tree__parse_class__ItemTypeClass_38;
                MR_Word parse_tree__parse_class__Var_124 = parse_tree__parse_class__Var_174;
                MR_Word parse_tree__parse_class__Var_125 = parse_tree__parse_class__Var_173;
                MR_Word parse_tree__parse_class__Var_128 = parse_tree__parse_class__Var_170;
                MR_Word parse_tree__parse_class__Var_129 = parse_tree__parse_class__Var_169;
                MR_Word parse_tree__parse_class__Var_130 = parse_tree__parse_class__Var_168;
                MR_Integer parse_tree__parse_class__Var_131 = parse_tree__parse_class__Var_167;

                {
                  parse_tree__parse_class__ItemTypeClass_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass_38, 0) = ((MR_Box) (parse_tree__parse_class__Var_124));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass_38, 1) = ((MR_Box) (parse_tree__parse_class__Var_125));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass_38, 2) = ((MR_Box) (parse_tree__parse_class__ConstraintList_17));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass_38, 3) = ((MR_Box) (parse_tree__parse_class__FunDeps_18));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass_38, 4) = ((MR_Box) (parse_tree__parse_class__Var_128));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass_38, 5) = ((MR_Box) (parse_tree__parse_class__Var_129));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass_38, 6) = ((MR_Box) (parse_tree__parse_class__Var_130));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__ItemTypeClass_38, 7) = ((MR_Box) (parse_tree__parse_class__Var_131));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_class__MaybeItemTypeClass_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__ItemTypeClass_38));
                }
              }
            else
              {
                MR_Word parse_tree__parse_class__TypeCtorInfo_156_156 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                MR_Word parse_tree__parse_class__TypeCtorInfo_166_166;
                MR_Word parse_tree__parse_class__ConstraintNotInParamsStrs_42;
                MR_Word parse_tree__parse_class__FunDepNotInParamsStrs_43;
                MR_Word parse_tree__parse_class__ConstraintNotInParamsPieces_44;
                MR_Word parse_tree__parse_class__FunDepNotInParamsPieces_45;
                MR_Word parse_tree__parse_class__Prefix_46;
                MR_Word parse_tree__parse_class__Suffix_47;
                MR_Word parse_tree__parse_class__Middle_50;
                MR_Word parse_tree__parse_class__Pieces_57;
                MR_Word parse_tree__parse_class__Spec_58;
                MR_Word parse_tree__parse_class__Var_76;
                MR_Word parse_tree__parse_class__Var_77;
                MR_Word parse_tree__parse_class__Var_101;
                MR_Word parse_tree__parse_class__Var_102;
                MR_Word parse_tree__parse_class__Var_108;
                MR_Word parse_tree__parse_class__Var_109;
                MR_Word parse_tree__parse_class__Var_110;
                MR_Word parse_tree__parse_class__Var_111;
                MR_Word parse_tree__parse_class__Var_114;
                MR_Integer parse_tree__parse_class__Var_78;

                {
                  parse_tree__parse_class__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_76, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_76, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_3));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_76, 3) = ((MR_Box) (parse_tree__parse_class__Var_169));
                }
                {
                  parse_tree__parse_class__ConstraintNotInParamsStrs_42 = mercury__list__map_2_f_0(parse_tree__parse_class__TypeInfo_149_149, parse_tree__parse_class__TypeCtorInfo_156_156, parse_tree__parse_class__Var_76, parse_tree__parse_class__ConstraintNotInParams_28);
                }
                {
                  parse_tree__parse_class__Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_77, 0) = ((MR_Box) (&parse_tree__parse_class_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_77, 1) = ((MR_Box) (parse_tree__parse_class__parse_constrained_class_7_p_0_4));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_77, 3) = ((MR_Box) (parse_tree__parse_class__Var_169));
                }
                {
                  parse_tree__parse_class__FunDepNotInParamsStrs_43 = mercury__list__map_2_f_0(parse_tree__parse_class__TypeInfo_149_149, parse_tree__parse_class__TypeCtorInfo_156_156, parse_tree__parse_class__Var_77, parse_tree__parse_class__FunDepNotInParams_30);
                }
                {
                  parse_tree__parse_class__ConstraintNotInParamsPieces_44 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__parse_class__ConstraintNotInParamsStrs_42);
                }
                {
                  parse_tree__parse_class__FunDepNotInParamsPieces_45 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__parse_class__FunDepNotInParamsStrs_43);
                }
                {
                  parse_tree__parse_class__Var_78 = mercury__list__length_1_f_0(parse_tree__parse_class__TypeInfo_149_149, parse_tree__parse_class__NotInParams_37);
                }
                parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_78 == (MR_Integer) 1);
                if (parse_tree__parse_class__succeeded)
                  {
                    parse_tree__parse_class__Prefix_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[105]);
                    parse_tree__parse_class__Suffix_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[107]);
                  }
                else
                  {
                    parse_tree__parse_class__Prefix_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[109]);
                    parse_tree__parse_class__Suffix_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[111]);
                  }
                if ((parse_tree__parse_class__ConstraintNotInParams_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  if ((parse_tree__parse_class__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_class", (MR_String) "predicate \140parse_tree.parse_class.parse_constrained_class\'/7", (MR_String) "no NotInParams");
                        return;
                      }
                    }
                  else
                    {
                      {
                        parse_tree__parse_class__Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__parse_class__FunDepNotInParamsPieces_45, parse_tree__parse_class__FunDepErrorContext_36);
                      }
                    }
                else
                if ((parse_tree__parse_class__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      parse_tree__parse_class__Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__parse_class__ConstraintNotInParamsPieces_44, parse_tree__parse_class__ConstraintErrorContext_33);
                    }
                  }
                else
                  {
                    MR_Word parse_tree__parse_class__TypeCtorInfo_165_165 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                    MR_Word parse_tree__parse_class__Var_91;
                    MR_Word parse_tree__parse_class__Var_92;
                    MR_Word parse_tree__parse_class__Var_97;

                    {
                      parse_tree__parse_class__Var_97 = mercury__list__f_43_43_2_f_0(parse_tree__parse_class__TypeCtorInfo_165_165, parse_tree__parse_class__FunDepNotInParamsPieces_45, parse_tree__parse_class__FunDepErrorContext_36);
                    }
                    {
                      parse_tree__parse_class__Var_92 = mercury__list__f_43_43_2_f_0(parse_tree__parse_class__TypeCtorInfo_165_165, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[113]), parse_tree__parse_class__Var_97);
                    }
                    {
                      parse_tree__parse_class__Var_91 = mercury__list__f_43_43_2_f_0(parse_tree__parse_class__TypeCtorInfo_165_165, parse_tree__parse_class__ConstraintErrorContext_33, parse_tree__parse_class__Var_92);
                    }
                    {
                      parse_tree__parse_class__Middle_50 = mercury__list__f_43_43_2_f_0(parse_tree__parse_class__TypeCtorInfo_165_165, parse_tree__parse_class__ConstraintNotInParamsPieces_44, parse_tree__parse_class__Var_91);
                    }
                  }
                parse_tree__parse_class__TypeCtorInfo_166_166 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                {
                  parse_tree__parse_class__Var_102 = mercury__list__f_43_43_2_f_0(parse_tree__parse_class__TypeCtorInfo_166_166, parse_tree__parse_class__Suffix_47, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[12]));
                }
                {
                  parse_tree__parse_class__Var_101 = mercury__list__f_43_43_2_f_0(parse_tree__parse_class__TypeCtorInfo_166_166, parse_tree__parse_class__Middle_50, parse_tree__parse_class__Var_102);
                }
                {
                  parse_tree__parse_class__Pieces_57 = mercury__list__f_43_43_2_f_0(parse_tree__parse_class__TypeCtorInfo_166_166, parse_tree__parse_class__Prefix_46, parse_tree__parse_class__Var_101);
                }
                {
                  parse_tree__parse_class__Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_111, 0) = ((MR_Box) (parse_tree__parse_class__Pieces_57));
                }
                {
                  parse_tree__parse_class__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_110, 0) = ((MR_Box) (parse_tree__parse_class__Var_111));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_class__Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_109, 0) = ((MR_Box) (parse_tree__parse_class__Context_12));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_109, 1) = ((MR_Box) (parse_tree__parse_class__Var_110));
                }
                {
                  parse_tree__parse_class__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_108, 0) = ((MR_Box) (parse_tree__parse_class__Var_109));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_class__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_58, 2) = ((MR_Box) (parse_tree__parse_class__Var_108));
                }
                {
                  parse_tree__parse_class__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_114, 0) = ((MR_Box) (parse_tree__parse_class__Spec_58));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_class__MaybeItemTypeClass_14 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_114));
                }
              }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word parse_tree__parse_class__VarSet_6,
  MR_Word parse_tree__parse_class__ConstraintsTerm_7,
  MR_Word * parse_tree__parse_class__Result_8)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__Result0_9;
    MR_Word parse_tree__parse_class__HeadConstraintTerm_45;
    MR_Word parse_tree__parse_class__TailConstraintTerms_46;
    MR_Word parse_tree__parse_class__Var_47;

    {
      parse_tree__parse_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__ConstraintsTerm_7, &parse_tree__parse_class__Var_47);
    }
    parse_tree__parse_class__HeadConstraintTerm_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_47, (MR_Integer) 0)));
    parse_tree__parse_class__TailConstraintTerms_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_47, (MR_Integer) 1)));
    {
      parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(parse_tree__parse_class__VarSet_6, parse_tree__parse_class__HeadConstraintTerm_45, parse_tree__parse_class__TailConstraintTerms_46, &parse_tree__parse_class__Result0_9);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_class__Result0_9)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_class__Specs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Result0_9, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_class__Result_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Specs_20));
        }
      }
    else
      {
        MR_Word parse_tree__parse_class__HeadArbConstraint_10;
        MR_Word parse_tree__parse_class__TailArbConstraints_11;
        MR_Word parse_tree__parse_class__ArbitraryConstraints_12;
        MR_Word parse_tree__parse_class__SimpleConstraints_13;
        MR_Word parse_tree__parse_class__FunDeps_14;
        MR_Word parse_tree__parse_class__BadConstraints_15;
        MR_Word parse_tree__parse_class__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Result0_9, (MR_Integer) 0)));

        parse_tree__parse_class__HeadArbConstraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_21, (MR_Integer) 0)));
        parse_tree__parse_class__TailArbConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_21, (MR_Integer) 1)));
        {
          parse_tree__parse_class__ArbitraryConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__ArbitraryConstraints_12, 0) = ((MR_Box) (parse_tree__parse_class__HeadArbConstraint_10));
          MR_hl_field(MR_mktag(1), parse_tree__parse_class__ArbitraryConstraints_12, 1) = ((MR_Box) (parse_tree__parse_class__TailArbConstraints_11));
        }
        {
          parse_tree__parse_class__collect_simple_and_fundep_constraints_4_p_0(parse_tree__parse_class__ArbitraryConstraints_12, &parse_tree__parse_class__SimpleConstraints_13, &parse_tree__parse_class__FunDeps_14, &parse_tree__parse_class__BadConstraints_15);
        }
        if ((parse_tree__parse_class__BadConstraints_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__parse_class__Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__SimpleConstraints_13));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_class__FunDeps_14));
          }
        else
          {
            MR_Word parse_tree__parse_class__Spec_19;
            MR_Word parse_tree__parse_class__Var_32;
            MR_Word parse_tree__parse_class__Var_33;
            MR_Word parse_tree__parse_class__Var_34;
            MR_Word parse_tree__parse_class__Var_39;

            {
              parse_tree__parse_class__Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__ConstraintsTerm_7);
            }
            {
              parse_tree__parse_class__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_33, 0) = ((MR_Box) (parse_tree__parse_class__Var_34));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[95])));
            }
            {
              parse_tree__parse_class__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_32, 0) = ((MR_Box) (parse_tree__parse_class__Var_33));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_class__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_19, 2) = ((MR_Box) (parse_tree__parse_class__Var_32));
            }
            {
              parse_tree__parse_class__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_39, 0) = ((MR_Box) (parse_tree__parse_class__Spec_19));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_class__Result_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_39));
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(
  MR_Word parse_tree__parse_class__VarSet_5,
  MR_Word parse_tree__parse_class__HeadTerm_6,
  MR_Word parse_tree__parse_class__TailTerms_7,
  MR_Word * parse_tree__parse_class__Result_8)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__HeadResult_9;

    {
      parse_tree__parse_class__parse_arbitrary_constraint_3_p_0(parse_tree__parse_class__VarSet_5, parse_tree__parse_class__HeadTerm_6, &parse_tree__parse_class__HeadResult_9);
    }
    if ((parse_tree__parse_class__TailTerms_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if (((MR_tag((MR_Word) parse_tree__parse_class__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__parse_class__Result_8 = (MR_Word) parse_tree__parse_class__HeadResult_9;
      else
        {
          MR_Word parse_tree__parse_class__HeadConstraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__HeadResult_9, (MR_Integer) 0)));
          MR_Word parse_tree__parse_class__Var_20;

          {
            parse_tree__parse_class__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_20, 0) = ((MR_Box) (parse_tree__parse_class__HeadConstraint_10));
            MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__parse_class__Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_20));
          }
        }
    else
      {
        MR_Word parse_tree__parse_class__HeadTailTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__TailTerms_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_class__TailTailTerms_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__TailTerms_7, (MR_Integer) 1)));
        MR_Word parse_tree__parse_class__TailResult_14;
        MR_Word parse_tree__parse_class__TailConstraints_15;
        MR_Word parse_tree__parse_class__HeadConstraint_22;

        {
          parse_tree__parse_class__parse_arbitrary_constraint_list_4_p_0(parse_tree__parse_class__VarSet_5, parse_tree__parse_class__HeadTailTerm_12, parse_tree__parse_class__TailTailTerms_13, &parse_tree__parse_class__TailResult_14);
        }
        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__HeadResult_9)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_class__succeeded)
          {
            parse_tree__parse_class__HeadConstraint_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__HeadResult_9, (MR_Integer) 0)));
            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__TailResult_14)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_class__succeeded)
              parse_tree__parse_class__TailConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__TailResult_14, (MR_Integer) 0)));
          }
        if (parse_tree__parse_class__succeeded)
          {
            MR_Word parse_tree__parse_class__Var_16;

            {
              parse_tree__parse_class__Var_16 = mercury__list__one_or_more_cons_2_f_0((MR_Word) &parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0, ((MR_Box) (parse_tree__parse_class__HeadConstraint_22)), parse_tree__parse_class__TailConstraints_15);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_class__Result_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_16));
            }
          }
        else
          {
            MR_Word parse_tree__parse_class__Var_17;
            MR_Word parse_tree__parse_class__Var_18;
            MR_Word parse_tree__parse_class__Var_19;

            {
              parse_tree__parse_class__Var_18 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_class__parse_tree__parse_class__type_ctor_info_arbitrary_constraint_0, parse_tree__parse_class__HeadResult_9);
            }
            {
              parse_tree__parse_class__Var_19 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_class_scalar_common_1[7], parse_tree__parse_class__TailResult_14);
            }
            {
              parse_tree__parse_class__Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_class__Var_18, parse_tree__parse_class__Var_19);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_class__Result_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_17));
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_arbitrary_constraint_3_p_0(
  MR_Word parse_tree__parse_class__VarSet_4,
  MR_Word parse_tree__parse_class__ConstraintTerm_5,
  MR_Word * parse_tree__parse_class__Result_6)
{
  {
    MR_bool parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__ConstraintTerm_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_class__LHSTerm_7;
    MR_Word parse_tree__parse_class__RHSTerm_8;
    MR_Word parse_tree__parse_class__Var_34;
    MR_String parse_tree__parse_class__Var_35;
    MR_Word parse_tree__parse_class__Var_36;
    MR_Word parse_tree__parse_class__Var_37;
    MR_Word parse_tree__parse_class__Var_38;
    MR_Word parse_tree__parse_class__Var_9;

    if (parse_tree__parse_class__succeeded)
      {
        parse_tree__parse_class__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ConstraintTerm_5, (MR_Integer) 0)));
        parse_tree__parse_class__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ConstraintTerm_5, (MR_Integer) 1)));
        parse_tree__parse_class__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__ConstraintTerm_5, (MR_Integer) 2)));
        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_34)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_class__succeeded)
          {
            parse_tree__parse_class__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_34, (MR_Integer) 0)));
            parse_tree__parse_class__succeeded = (strcmp(parse_tree__parse_class__Var_35, (MR_String) "=<") == 0);
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_36)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_class__succeeded)
                  {
                    parse_tree__parse_class__LHSTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_36, (MR_Integer) 0)));
                    parse_tree__parse_class__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_36, (MR_Integer) 1)));
                    parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_37)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_class__succeeded)
                      {
                        parse_tree__parse_class__RHSTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_37, (MR_Integer) 0)));
                        parse_tree__parse_class__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_37, (MR_Integer) 1)));
                        parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_class__succeeded)
      {
        MR_Word parse_tree__parse_class__MaybeInstVar_13;
        MR_Word parse_tree__parse_class__ContextPieces_20;
        MR_Word parse_tree__parse_class__MaybeInst_21;
        MR_Word parse_tree__parse_class__InstVar_22;
        MR_Word parse_tree__parse_class__Inst_23;

        if (((MR_tag((MR_Word) parse_tree__parse_class__LHSTerm_7)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__parse_class__LHSContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__LHSTerm_7, (MR_Integer) 2)));
            MR_String parse_tree__parse_class__LHSTermStr_17;
            MR_Word parse_tree__parse_class__LHSPieces_18;
            MR_Word parse_tree__parse_class__LHSSpec_19;
            MR_Word parse_tree__parse_class__Var_41;
            MR_Word parse_tree__parse_class__Var_42;
            MR_Word parse_tree__parse_class__Var_54;
            MR_Word parse_tree__parse_class__Var_55;
            MR_Word parse_tree__parse_class__Var_56;
            MR_Word parse_tree__parse_class__Var_57;
            MR_Word parse_tree__parse_class__Var_60;
            MR_Word parse_tree__parse_class__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__LHSTerm_7, (MR_Integer) 0)));
            MR_Word parse_tree__parse_class__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__LHSTerm_7, (MR_Integer) 1)));

            {
              parse_tree__parse_class__LHSTermStr_17 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__VarSet_4, parse_tree__parse_class__LHSTerm_7);
            }
            {
              parse_tree__parse_class__Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_42, 1) = ((MR_Box) (parse_tree__parse_class__LHSTermStr_17));
            }
            {
              parse_tree__parse_class__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_41, 0) = ((MR_Box) (parse_tree__parse_class__Var_42));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[67])));
            }
            {
              parse_tree__parse_class__LHSPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__LHSPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[92])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__LHSPieces_18, 1) = ((MR_Box) (parse_tree__parse_class__Var_41));
            }
            {
              parse_tree__parse_class__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_57, 0) = ((MR_Box) (parse_tree__parse_class__LHSPieces_18));
            }
            {
              parse_tree__parse_class__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_56, 0) = ((MR_Box) (parse_tree__parse_class__Var_57));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_class__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_55, 0) = ((MR_Box) (parse_tree__parse_class__LHSContext_16));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_55, 1) = ((MR_Box) (parse_tree__parse_class__Var_56));
            }
            {
              parse_tree__parse_class__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_54, 0) = ((MR_Box) (parse_tree__parse_class__Var_55));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_class__LHSSpec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__LHSSpec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__LHSSpec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__LHSSpec_19, 2) = ((MR_Box) (parse_tree__parse_class__Var_54));
            }
            {
              parse_tree__parse_class__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_60, 0) = ((MR_Box) (parse_tree__parse_class__LHSSpec_19));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_class__MaybeInstVar_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__MaybeInstVar_13, 0) = ((MR_Box) (parse_tree__parse_class__Var_60));
            }
          }
        else
          {
            MR_Word parse_tree__parse_class__InstVar0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__LHSTerm_7, (MR_Integer) 0)));
            MR_Word parse_tree__parse_class__InstVar1_12;
            MR_Word parse_tree__parse_class__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__LHSTerm_7, (MR_Integer) 1)));

            {
              mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__parse_class__InstVar0_10, &parse_tree__parse_class__InstVar1_12);
            }
            {
              parse_tree__parse_class__MaybeInstVar_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeInstVar_13, 0) = ((MR_Box) (parse_tree__parse_class__InstVar1_12));
            }
          }
        {
          parse_tree__parse_class__ContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[71]));
        }
        {
          parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_4[3]), parse_tree__parse_class__VarSet_4, parse_tree__parse_class__ContextPieces_20, parse_tree__parse_class__RHSTerm_8, &parse_tree__parse_class__MaybeInst_21);
        }
        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__MaybeInstVar_13)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_class__succeeded)
          {
            parse_tree__parse_class__InstVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeInstVar_13, (MR_Integer) 0)));
            parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__MaybeInst_21)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_class__succeeded)
              parse_tree__parse_class__Inst_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeInst_21, (MR_Integer) 0)));
          }
        if (parse_tree__parse_class__succeeded)
          {
            MR_Word parse_tree__parse_class__Var_71;

            {
              parse_tree__parse_class__Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_71, 0) = ((MR_Box) (parse_tree__parse_class__InstVar_22));
              MR_hl_field(MR_mktag(3), parse_tree__parse_class__Var_71, 1) = ((MR_Box) (parse_tree__parse_class__Inst_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_class__Result_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_71));
            }
          }
        else
          {
            MR_Word parse_tree__parse_class__Specs_24;
            MR_Word parse_tree__parse_class__Var_72;
            MR_Word parse_tree__parse_class__Var_73;

            {
              parse_tree__parse_class__Var_72 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_class_scalar_common_1[6], parse_tree__parse_class__MaybeInstVar_13);
            }
            {
              parse_tree__parse_class__Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__parse_class__MaybeInst_21);
            }
            {
              parse_tree__parse_class__Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_class__Var_72, parse_tree__parse_class__Var_73);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_class__Result_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Specs_24));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_class__Result0_25;

        {
          parse_tree__parse_class__succeeded = parse_tree__parse_class__parse_fundep_2_p_0(parse_tree__parse_class__ConstraintTerm_5, &parse_tree__parse_class__Result0_25);
        }
        if (parse_tree__parse_class__succeeded)
          *parse_tree__parse_class__Result_6 = parse_tree__parse_class__Result0_25;
        else
          {
            MR_Word parse_tree__parse_class__ClassName_26;
            MR_Word parse_tree__parse_class__Args0_27;

            {
              parse_tree__parse_class__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__ConstraintTerm_5, &parse_tree__parse_class__ClassName_26, &parse_tree__parse_class__Args0_27);
            }
            if (parse_tree__parse_class__succeeded)
              {
                MR_Word parse_tree__parse_class__ArgsResultContextPieces_28;
                MR_Word parse_tree__parse_class__ArgsResult_29;

                {
                  parse_tree__parse_class__ArgsResultContextPieces_28 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[93]))));
                }
                {
                  parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_4[4]), parse_tree__parse_class__VarSet_4, parse_tree__parse_class__ArgsResultContextPieces_28, parse_tree__parse_class__Args0_27, &parse_tree__parse_class__ArgsResult_29);
                }
                if (((MR_tag((MR_Word) parse_tree__parse_class__ArgsResult_29)) == (MR_mktag((MR_Integer) 0))))
                  *parse_tree__parse_class__Result_6 = (MR_Word) parse_tree__parse_class__ArgsResult_29;
                else
                  {
                    MR_Word parse_tree__parse_class__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__ArgsResult_29, (MR_Integer) 0)));
                    MR_Word parse_tree__parse_class__Constraint_31;

                    {
                      parse_tree__parse_class__Constraint_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_class__Constraint_31, 0) = ((MR_Box) (parse_tree__parse_class__ClassName_26));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_class__Constraint_31, 1) = ((MR_Box) (parse_tree__parse_class__Args_30));
                    }
                    {
                      parse_tree__parse_class__succeeded = parse_tree__parse_class__constraint_is_not_simple_1_p_0(parse_tree__parse_class__Constraint_31);
                    }
                    if (parse_tree__parse_class__succeeded)
                      {
                        MR_Word parse_tree__parse_class__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_class__Constraint_31);

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__parse_class__Result_6 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_78));
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__parse_class__Var_79 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__parse_class__Constraint_31);

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__parse_class__Result_6 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_79));
                        }
                      }
                  }
              }
            else
              {
                MR_Word parse_tree__parse_class__Spec_33;
                MR_Word parse_tree__parse_class__Var_90;
                MR_Word parse_tree__parse_class__Var_91;
                MR_Word parse_tree__parse_class__Var_92;
                MR_Word parse_tree__parse_class__Var_97;

                {
                  parse_tree__parse_class__Var_92 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__ConstraintTerm_5);
                }
                {
                  parse_tree__parse_class__Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_91, 0) = ((MR_Box) (parse_tree__parse_class__Var_92));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[94])));
                }
                {
                  parse_tree__parse_class__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_90, 0) = ((MR_Box) (parse_tree__parse_class__Var_91));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_class__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_33, 2) = ((MR_Box) (parse_tree__parse_class__Var_90));
                }
                {
                  parse_tree__parse_class__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_97, 0) = ((MR_Box) (parse_tree__parse_class__Spec_33));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_class__Result_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_97));
                }
              }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0_1(
  void * parse_tree__parse_class__env_ptr_arg)
{
  {
    struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s * parse_tree__parse_class__env_ptr = (struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s *) parse_tree__parse_class__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__parse_class__env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0_3(
  void * parse_tree__parse_class__env_ptr_arg)
{
  {
    struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s * parse_tree__parse_class__env_ptr = (struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s *) parse_tree__parse_class__env_ptr_arg;

    (parse_tree__parse_class__env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__ArgType_5 = ((MR_Word) (parse_tree__parse_class__env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__conv0_ArgType_5);
    {
      parse_tree__parse_class__constraint_is_not_simple_1_p_0_2(parse_tree__parse_class__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0_2(
  void * parse_tree__parse_class__env_ptr_arg)
{
  {
    struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s * parse_tree__parse_class__env_ptr = (struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s *) parse_tree__parse_class__env_ptr_arg;

    {
      (parse_tree__parse_class__env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__succeeded = parse_tree__prog_type__type_is_nonvar_1_p_0((parse_tree__parse_class__env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__ArgType_5);
    }
    if ((parse_tree__parse_class__env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__succeeded)
      {
        {
          (parse_tree__parse_class__env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__succeeded = parse_tree__prog_type__type_is_nonground_1_p_0((parse_tree__parse_class__env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__ArgType_5);
        }
        if ((parse_tree__parse_class__env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__succeeded)
          {
            parse_tree__parse_class__constraint_is_not_simple_1_p_0_1(parse_tree__parse_class__env_ptr);
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0_4(
  void * parse_tree__parse_class__env_ptr_arg)
{
  {
    struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s * parse_tree__parse_class__env_ptr = (struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s *) parse_tree__parse_class__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__parse_class__env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &(parse_tree__parse_class__env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__conv0_ArgType_5, (parse_tree__parse_class__env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__ArgTypes_3, parse_tree__parse_class__constraint_is_not_simple_1_p_0_3, parse_tree__parse_class__env_ptr);
          }
        }
        (parse_tree__parse_class__env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__parse_class__env_ptr)->parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__constraint_is_not_simple_1_p_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1)
{
  {
    struct parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0_s parse_tree__parse_class__env;

    {
      MR_Word parse_tree__parse_class___ClassName_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__HeadVar__1_1, (MR_Integer) 0)));

      (parse_tree__parse_class__env).parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__ArgTypes_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__HeadVar__1_1, (MR_Integer) 1)));
      {
        parse_tree__parse_class__constraint_is_not_simple_1_p_0_4(&parse_tree__parse_class__env);
      }
      return (parse_tree__parse_class__env).parse_tree__parse_class__constraint_is_not_simple_1_p_0_env_0__succeeded;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class__parse_fundep_2_p_0(
  MR_Word parse_tree__parse_class__Term_3,
  MR_Word * parse_tree__parse_class__Result_4)
{
  {
    MR_bool parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_class__DomainTerm_5;
    MR_Word parse_tree__parse_class__RangeTerm_6;
    MR_Word parse_tree__parse_class__Var_12;
    MR_String parse_tree__parse_class__Var_13;
    MR_Word parse_tree__parse_class__Var_14;
    MR_Word parse_tree__parse_class__Var_15;
    MR_Word parse_tree__parse_class__Var_16;
    MR_Word parse_tree__parse_class__Var_7;
    MR_Word parse_tree__parse_class__Domain_8;
    MR_Word parse_tree__parse_class__Range_9;
    MR_Word parse_tree__parse_class__TypeCtorInfo_7_46;
    MR_Word parse_tree__parse_class__TypeCtorInfo_8_47;
    MR_Word parse_tree__parse_class__TypeCtorInfo_7_52;
    MR_Word parse_tree__parse_class__TypeCtorInfo_8_53;
    MR_Word parse_tree__parse_class__TypesTerm_44;
    MR_Word parse_tree__parse_class__TypeTerms_45;
    MR_Word parse_tree__parse_class__TypesTerm_50;
    MR_Word parse_tree__parse_class__TypeTerms_51;

    if (parse_tree__parse_class__succeeded)
      {
        parse_tree__parse_class__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Term_3, (MR_Integer) 0)));
        parse_tree__parse_class__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Term_3, (MR_Integer) 1)));
        parse_tree__parse_class__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Term_3, (MR_Integer) 2)));
        parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_12)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_class__succeeded)
          {
            parse_tree__parse_class__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_12, (MR_Integer) 0)));
            parse_tree__parse_class__succeeded = (strcmp(parse_tree__parse_class__Var_13, (MR_String) "->") == 0);
            if (parse_tree__parse_class__succeeded)
              {
                parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_14)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_class__succeeded)
                  {
                    parse_tree__parse_class__DomainTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_14, (MR_Integer) 0)));
                    parse_tree__parse_class__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_14, (MR_Integer) 1)));
                    parse_tree__parse_class__succeeded = ((MR_tag((MR_Word) parse_tree__parse_class__Var_15)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_class__succeeded)
                      {
                        parse_tree__parse_class__RangeTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_15, (MR_Integer) 0)));
                        parse_tree__parse_class__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_15, (MR_Integer) 1)));
                        parse_tree__parse_class__succeeded = (parse_tree__parse_class__Var_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__parse_class__succeeded)
                          {
                            parse_tree__parse_class__TypeCtorInfo_7_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                            parse_tree__parse_class__TypeCtorInfo_8_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
                            {
                              parse_tree__parse_class__TypesTerm_44 = mercury__term__coerce_1_f_0(parse_tree__parse_class__TypeCtorInfo_7_46, parse_tree__parse_class__TypeCtorInfo_8_47, parse_tree__parse_class__DomainTerm_5);
                            }
                            {
                              parse_tree__parse_util__conjunction_to_list_2_p_0(parse_tree__parse_class__TypeCtorInfo_8_47, parse_tree__parse_class__TypesTerm_44, &parse_tree__parse_class__TypeTerms_45);
                            }
                            {
                              parse_tree__parse_class__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__parse_class__TypeCtorInfo_8_47, parse_tree__parse_class__TypeTerms_45, &parse_tree__parse_class__Domain_8);
                            }
                            if (parse_tree__parse_class__succeeded)
                              {
                                parse_tree__parse_class__TypeCtorInfo_7_52 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                                parse_tree__parse_class__TypeCtorInfo_8_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
                                {
                                  parse_tree__parse_class__TypesTerm_50 = mercury__term__coerce_1_f_0(parse_tree__parse_class__TypeCtorInfo_7_52, parse_tree__parse_class__TypeCtorInfo_8_53, parse_tree__parse_class__RangeTerm_6);
                                }
                                {
                                  parse_tree__parse_util__conjunction_to_list_2_p_0(parse_tree__parse_class__TypeCtorInfo_8_53, parse_tree__parse_class__TypesTerm_50, &parse_tree__parse_class__TypeTerms_51);
                                }
                                {
                                  parse_tree__parse_class__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__parse_class__TypeCtorInfo_8_53, parse_tree__parse_class__TypeTerms_51, &parse_tree__parse_class__Range_9);
                                }
                              }
                            if (parse_tree__parse_class__succeeded)
                              {
                                MR_Word parse_tree__parse_class__Var_17;
                                MR_Word parse_tree__parse_class__Var_18;

                                {
                                  parse_tree__parse_class__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_18, 0) = ((MR_Box) (parse_tree__parse_class__Domain_8));
                                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_18, 1) = ((MR_Box) (parse_tree__parse_class__Range_9));
                                }
                                parse_tree__parse_class__Var_17 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__parse_class__Var_18);
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                  *parse_tree__parse_class__Result_4 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_17));
                                }
                              }
                            else
                              {
                                MR_Word parse_tree__parse_class__Spec_11;
                                MR_Word parse_tree__parse_class__Var_32;
                                MR_Word parse_tree__parse_class__Var_33;
                                MR_Word parse_tree__parse_class__Var_34;
                                MR_Word parse_tree__parse_class__Var_39;

                                {
                                  parse_tree__parse_class__Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_class__Term_3);
                                }
                                {
                                  parse_tree__parse_class__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_33, 0) = ((MR_Box) (parse_tree__parse_class__Var_34));
                                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[91])));
                                }
                                {
                                  parse_tree__parse_class__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_32, 0) = ((MR_Box) (parse_tree__parse_class__Var_33));
                                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                }
                                {
                                  parse_tree__parse_class__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_11, 2) = ((MR_Box) (parse_tree__parse_class__Var_32));
                                }
                                {
                                  parse_tree__parse_class__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_39, 0) = ((MR_Box) (parse_tree__parse_class__Spec_11));
                                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                  *parse_tree__parse_class__Result_4 = base;
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_39));
                                }
                              }
                            parse_tree__parse_class__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
          }
      }
    return parse_tree__parse_class__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class__collect_simple_and_fundep_constraints_4_p_0(
  MR_Word parse_tree__parse_class__HeadVar__1_1,
  MR_Word * parse_tree__parse_class__HeadVar__2_2,
  MR_Word * parse_tree__parse_class__HeadVar__3_3,
  MR_Word * parse_tree__parse_class__HeadVar__4_4)
{
  {
    MR_bool parse_tree__parse_class__succeeded;

    if ((parse_tree__parse_class__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_class__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_class__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_class__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word parse_tree__parse_class__Constraint_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_class__Constraints_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__parse_class__STATE_VARIABLE_SimpleConstraints_18_18;
        MR_Word parse_tree__parse_class__STATE_VARIABLE_FunDeps_19_19;
        MR_Word parse_tree__parse_class__STATE_VARIABLE_BadConstraints_20_20;

        {
          parse_tree__parse_class__collect_simple_and_fundep_constraints_4_p_0(parse_tree__parse_class__Constraints_6, &parse_tree__parse_class__STATE_VARIABLE_SimpleConstraints_18_18, &parse_tree__parse_class__STATE_VARIABLE_FunDeps_19_19, &parse_tree__parse_class__STATE_VARIABLE_BadConstraints_20_20);
        }
        switch (MR_tag((MR_Word) parse_tree__parse_class__Constraint_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_class__SimpleConstraint_10 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__Constraint_5), (MR_Integer) 0);

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__parse_class__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__SimpleConstraint_10));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_class__STATE_VARIABLE_SimpleConstraints_18_18));
              }
              *parse_tree__parse_class__HeadVar__3_3 = parse_tree__parse_class__STATE_VARIABLE_FunDeps_19_19;
              *parse_tree__parse_class__HeadVar__4_4 = parse_tree__parse_class__STATE_VARIABLE_BadConstraints_20_20;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__parse_class__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__Constraint_5));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_class__STATE_VARIABLE_BadConstraints_20_20));
              }
              *parse_tree__parse_class__HeadVar__2_2 = parse_tree__parse_class__STATE_VARIABLE_SimpleConstraints_18_18;
              *parse_tree__parse_class__HeadVar__3_3 = parse_tree__parse_class__STATE_VARIABLE_FunDeps_19_19;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_class__FunDep_11 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_class__Constraint_5), (MR_Integer) 2);

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__parse_class__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__FunDep_11));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_class__STATE_VARIABLE_FunDeps_19_19));
              }
              *parse_tree__parse_class__HeadVar__2_2 = parse_tree__parse_class__STATE_VARIABLE_SimpleConstraints_18_18;
              *parse_tree__parse_class__HeadVar__4_4 = parse_tree__parse_class__STATE_VARIABLE_BadConstraints_20_20;
            }
            break;
          case (MR_Integer) 3:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__parse_class__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__Constraint_5));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_class__STATE_VARIABLE_BadConstraints_20_20));
              }
              *parse_tree__parse_class__HeadVar__2_2 = parse_tree__parse_class__STATE_VARIABLE_SimpleConstraints_18_18;
              *parse_tree__parse_class__HeadVar__3_3 = parse_tree__parse_class__STATE_VARIABLE_FunDeps_19_19;
            }
            break;
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_unconstrained_class_6_p_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box * parse_tree__parse_class__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_class__closure = parse_tree__parse_class__closure_arg;
    MR_Word parse_tree__parse_class__conv0_HeadVar__2_83;

    {
      parse_tree__parse_class__IntroducedFrom__pred__parse_unconstrained_class__337__1_2_p_0(((MR_Word) parse_tree__parse_class__wrapper_arg_1), &parse_tree__parse_class__conv0_HeadVar__2_83);
    }
    *parse_tree__parse_class__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_class__conv0_HeadVar__2_83));
  }
}

static void MR_CALL 
parse_tree__parse_class__parse_unconstrained_class_6_p_0(
  MR_Word parse_tree__parse_class__ModuleName_7,
  MR_Word parse_tree__parse_class__TVarSet_8,
  MR_Word parse_tree__parse_class__NameTerm_9,
  MR_Word parse_tree__parse_class__Context_10,
  MR_Integer parse_tree__parse_class__SeqNum_11,
  MR_Word * parse_tree__parse_class__MaybeTypeClassInfo_12)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__TypeCtorInfo_80_80;
    MR_Word parse_tree__parse_class__TypeCtorInfo_81_81;
    MR_Word parse_tree__parse_class__ContextPieces_13;
    MR_Word parse_tree__parse_class__VarSet_14;
    MR_Word parse_tree__parse_class__MaybeClassName_15;

    {
      parse_tree__parse_class__ContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_class_scalar_common_1[88]))));
    }
    parse_tree__parse_class__TypeCtorInfo_80_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    parse_tree__parse_class__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    {
      mercury__varset__coerce_2_p_0(parse_tree__parse_class__TypeCtorInfo_80_80, parse_tree__parse_class__TypeCtorInfo_81_81, parse_tree__parse_class__TVarSet_8, &parse_tree__parse_class__VarSet_14);
    }
    {
      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_class__TypeCtorInfo_81_81, parse_tree__parse_class__ModuleName_7, parse_tree__parse_class__NameTerm_9, parse_tree__parse_class__VarSet_14, parse_tree__parse_class__ContextPieces_13, &parse_tree__parse_class__MaybeClassName_15);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_class__MaybeClassName_15)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_class__Specs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_class__MaybeClassName_15, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_class__MaybeTypeClassInfo_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Specs_28));
        }
      }
    else
      {
        MR_Word parse_tree__parse_class__TypeInfo_87_87 = (MR_Word) &parse_tree__parse_class_scalar_common_1[4];
        MR_Word parse_tree__parse_class__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeClassName_15, (MR_Integer) 0)));
        MR_Word parse_tree__parse_class__TermVars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_class__MaybeClassName_15, (MR_Integer) 1)));
        MR_Word parse_tree__parse_class__TermVars_18;

        {
          mercury__list__map_3_p_0((MR_Word) &parse_tree__parse_class_scalar_common_1[3], parse_tree__parse_class__TypeInfo_87_87, (MR_Word) &parse_tree__parse_class_scalar_common_2[3], parse_tree__parse_class__TermVars0_17, &parse_tree__parse_class__TermVars_18);
        }
        if ((parse_tree__parse_class__TermVars_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word parse_tree__parse_class__Spec_20;
            MR_Word parse_tree__parse_class__Var_64;
            MR_Word parse_tree__parse_class__Var_65;
            MR_Word parse_tree__parse_class__Var_66;
            MR_Word parse_tree__parse_class__Var_71;

            {
              parse_tree__parse_class__Var_66 = mercury__term__get_term_context_1_f_0(parse_tree__parse_class__TypeCtorInfo_81_81, parse_tree__parse_class__NameTerm_9);
            }
            {
              parse_tree__parse_class__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_65, 0) = ((MR_Box) (parse_tree__parse_class__Var_66));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[89])));
            }
            {
              parse_tree__parse_class__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_64, 0) = ((MR_Box) (parse_tree__parse_class__Var_65));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_class__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_20, 2) = ((MR_Box) (parse_tree__parse_class__Var_64));
            }
            {
              parse_tree__parse_class__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_71, 0) = ((MR_Box) (parse_tree__parse_class__Spec_20));
              MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_class__MaybeTypeClassInfo_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_71));
            }
          }
        else
          {
            MR_Word parse_tree__parse_class__Vars_23;
            MR_Word parse_tree__parse_class__SortedTermVars_24;
            MR_Integer parse_tree__parse_class__NumSortedTermVars_25;
            MR_Integer parse_tree__parse_class__NumTermVars_26;

            {
              parse_tree__parse_class__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__parse_class__TypeCtorInfo_80_80, parse_tree__parse_class__TermVars_18, &parse_tree__parse_class__Vars_23);
            }
            if (parse_tree__parse_class__succeeded)
              {
                {
                  mercury__list__sort_and_remove_dups_2_p_0(parse_tree__parse_class__TypeInfo_87_87, parse_tree__parse_class__TermVars_18, &parse_tree__parse_class__SortedTermVars_24);
                }
                {
                  mercury__list__length_2_p_0(parse_tree__parse_class__TypeInfo_87_87, parse_tree__parse_class__SortedTermVars_24, &parse_tree__parse_class__NumSortedTermVars_25);
                }
                {
                  mercury__list__length_2_p_0(parse_tree__parse_class__TypeInfo_87_87, parse_tree__parse_class__TermVars_18, &parse_tree__parse_class__NumTermVars_26);
                }
                parse_tree__parse_class__succeeded = (parse_tree__parse_class__NumSortedTermVars_25 == parse_tree__parse_class__NumTermVars_26);
              }
            if (parse_tree__parse_class__succeeded)
              {
                MR_Word parse_tree__parse_class__TypeClassInfo_27;

                {
                  parse_tree__parse_class__TypeClassInfo_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__TypeClassInfo_27, 0) = ((MR_Box) (parse_tree__parse_class__ClassName_16));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__TypeClassInfo_27, 1) = ((MR_Box) (parse_tree__parse_class__Vars_23));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__TypeClassInfo_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__TypeClassInfo_27, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__TypeClassInfo_27, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__TypeClassInfo_27, 5) = ((MR_Box) (parse_tree__parse_class__TVarSet_8));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__TypeClassInfo_27, 6) = ((MR_Box) (parse_tree__parse_class__Context_10));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__TypeClassInfo_27, 7) = ((MR_Box) (parse_tree__parse_class__SeqNum_11));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_class__MaybeTypeClassInfo_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_class__TypeClassInfo_27));
                }
              }
            else
              {
                MR_Word parse_tree__parse_class__Var_45;
                MR_Word parse_tree__parse_class__Var_46;
                MR_Word parse_tree__parse_class__Var_47;
                MR_Word parse_tree__parse_class__Var_52;
                MR_Word parse_tree__parse_class__Spec_74;

                {
                  parse_tree__parse_class__Var_47 = mercury__term__get_term_context_1_f_0(parse_tree__parse_class__TypeCtorInfo_81_81, parse_tree__parse_class__NameTerm_9);
                }
                {
                  parse_tree__parse_class__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_46, 0) = ((MR_Box) (parse_tree__parse_class__Var_47));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_class_scalar_common_1[90])));
                }
                {
                  parse_tree__parse_class__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_45, 0) = ((MR_Box) (parse_tree__parse_class__Var_46));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_class__Spec_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_class__Spec_74, 2) = ((MR_Box) (parse_tree__parse_class__Var_45));
                }
                {
                  parse_tree__parse_class__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_52, 0) = ((MR_Box) (parse_tree__parse_class__Spec_74));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_class__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_class__MaybeTypeClassInfo_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_class__Var_52));
                }
              }
          }
      }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_class__tvars_in_fundeps_1_f_0_1(
  MR_Box parse_tree__parse_class__closure_arg,
  MR_Box parse_tree__parse_class__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_class__wrapper_arg_2;
    MR_Box parse_tree__parse_class__closure = parse_tree__parse_class__closure_arg;
    MR_Word parse_tree__parse_class__conv0_HeadVar__2_2;

    {
      parse_tree__parse_class__conv0_HeadVar__2_2 = parse_tree__parse_class__tvars_in_fundep_1_f_0(((MR_Word) parse_tree__parse_class__wrapper_arg_1));
    }
    parse_tree__parse_class__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_class__conv0_HeadVar__2_2));
    return parse_tree__parse_class__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_class__tvars_in_fundeps_1_f_0(
  MR_Word parse_tree__parse_class__FunDeps_3)
{
  {
    MR_bool parse_tree__parse_class__succeeded;
    MR_Word parse_tree__parse_class__HeadVar__2_2;
    MR_Word parse_tree__parse_class__Var_4;

    {
      parse_tree__parse_class__Var_4 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, (MR_Word) &parse_tree__parse_class_scalar_common_1[2], (MR_Word) &parse_tree__parse_class_scalar_common_2[2], parse_tree__parse_class__FunDeps_3);
    }
    {
      parse_tree__parse_class__HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__parse_class_scalar_common_1[1], parse_tree__parse_class__Var_4);
    }
    return parse_tree__parse_class__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraint_0_0_10001(
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box parse_tree__parse_class__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_class__succeeded;

    {
      parse_tree__parse_class__succeeded = parse_tree__parse_class____Unify____arbitrary_constraint_0_0(((MR_Word) parse_tree__parse_class__wrapper_arg_1), ((MR_Word) parse_tree__parse_class__wrapper_arg_2));
    }
    return parse_tree__parse_class__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraint_0_0_10001(
  MR_Box * parse_tree__parse_class__wrapper_arg_1,
  MR_Box parse_tree__parse_class__wrapper_arg_2,
  MR_Box parse_tree__parse_class__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_class__conv0_HeadVar__1_1;

    {
      parse_tree__parse_class____Compare____arbitrary_constraint_0_0(&parse_tree__parse_class__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_class__wrapper_arg_2), ((MR_Word) parse_tree__parse_class__wrapper_arg_3));
    }
    *parse_tree__parse_class__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_class__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____arbitrary_constraints_0_0_10001(
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box parse_tree__parse_class__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_class__succeeded;

    {
      parse_tree__parse_class__succeeded = parse_tree__parse_class____Unify____arbitrary_constraints_0_0(((MR_Word) parse_tree__parse_class__wrapper_arg_1), ((MR_Word) parse_tree__parse_class__wrapper_arg_2));
    }
    return parse_tree__parse_class__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class____Compare____arbitrary_constraints_0_0_10001(
  MR_Box * parse_tree__parse_class__wrapper_arg_1,
  MR_Box parse_tree__parse_class__wrapper_arg_2,
  MR_Box parse_tree__parse_class__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_class__conv0_HeadVar__1_1;

    {
      parse_tree__parse_class____Compare____arbitrary_constraints_0_0(&parse_tree__parse_class__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_class__wrapper_arg_2), ((MR_Word) parse_tree__parse_class__wrapper_arg_3));
    }
    *parse_tree__parse_class__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_class__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_class____Unify____maybe_class_and_inst_constraints_0_0_10001(
  MR_Box parse_tree__parse_class__wrapper_arg_1,
  MR_Box parse_tree__parse_class__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_class__succeeded;

    {
      parse_tree__parse_class__succeeded = parse_tree__parse_class____Unify____maybe_class_and_inst_constraints_0_0(((MR_Word) parse_tree__parse_class__wrapper_arg_1), ((MR_Word) parse_tree__parse_class__wrapper_arg_2));
    }
    return parse_tree__parse_class__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_class____Compare____maybe_class_and_inst_constraints_0_0_10001(
  MR_Box * parse_tree__parse_class__wrapper_arg_1,
  MR_Box parse_tree__parse_class__wrapper_arg_2,
  MR_Box parse_tree__parse_class__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_class__conv0_HeadVar__1_1;

    {
      parse_tree__parse_class____Compare____maybe_class_and_inst_constraints_0_0(&parse_tree__parse_class__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_class__wrapper_arg_2), ((MR_Word) parse_tree__parse_class__wrapper_arg_3));
    }
    *parse_tree__parse_class__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_class__conv0_HeadVar__1_1));
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

/* :- end_module parse_tree.parse_class. */
