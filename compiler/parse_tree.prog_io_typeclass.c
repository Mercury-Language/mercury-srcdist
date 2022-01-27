/*
** Automatically generated from `prog_io_typeclass.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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


/* :- module parse_tree.prog_io_typeclass. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_typeclass__init
ENDINIT
*/

#include "parse_tree.prog_io_typeclass.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_item.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 526 "prog_io_typeclass.m"
struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s {
#line 529 "prog_io_typeclass.m"
  MR_bool parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded;
#line 619 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__ArgTypes_68;
#line 621 "prog_io_typeclass.m"
  jmp_buf parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__commit_0;
#line 621 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__ArgType_70;
#line 621 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__conv0_ArgType_70;
#line 526 "prog_io_typeclass.m"
};


#line 155 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 158 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 161 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0;

#line 164 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0;

#line 167 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 170 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 173 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 176 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 179 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 182 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_0[1];

#line 185 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0;

#line 188 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_1[1];

#line 191 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1;

#line 194 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 197 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_2[2];

#line 200 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2;

#line 203 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_3[1];

#line 206 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3;

#line 209 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_0[1];

#line 212 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_1[1];

#line 215 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_2[1];

#line 218 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_3[1];

#line 221 "parse_tree.prog_io_typeclass.c"
static const MR_DuPtagLayout parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_ptag_ordered_arbitrary_constraint_0[4];

#line 224 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_name_ordered_arbitrary_constraint_0[4];

#line 227 "parse_tree.prog_io_typeclass.c"
static const MR_Integer parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__functor_number_map_arbitrary_constraint_0[4];

#line 230 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0;

#line 233 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 236 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 239 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 242 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0_10001(
#line 245 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 247 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 250 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0_10001(
#line 253 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 255 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 257 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3);

#line 260 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0_10001(
#line 263 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 265 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 268 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0_10001(
#line 271 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 273 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 275 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3);

#line 278 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0_10001(
#line 281 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 283 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 286 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0_10001(
#line 289 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 291 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 293 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3);

#line 812 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(
#line 812 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 812 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 812 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8);

#line 400 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(
#line 400 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 400 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2,
#line 400 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3,
#line 400 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4,
#line 400 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5);

#line 255 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 255 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 255 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 255 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8);

#line 436 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
#line 436 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 436 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 436 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 777 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__check_tvars_in_instance_constraint__777__1_3_f_0(
#line 777 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_14,
#line 777 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_31,
#line 777 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_62);

#line 773 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__check_tvars_in_instance_constraint__773__1_2_p_0(
#line 773 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypesVars_19,
#line 773 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_57);

#line 342 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_class_methods__342__1_4_p_0(
#line 342 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_5,
#line 342 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_7,
#line 342 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_17,
#line 342 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__4_18);

#line 310 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__310__1_2_p_0(
#line 310 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_54,
#line 310 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_55);

#line 201 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__201__1_3_f_0(
#line 201 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_79,
#line 201 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_171,
#line 201 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_162);

#line 198 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__198__1_3_f_0(
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_77,
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_171,
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_159);

#line 159 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__159__1_2_p_0(
#line 159 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 159 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_154);

#line 157 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__157__1_2_p_0(
#line 157 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 157 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_152);

#line 517 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0(
#line 517 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 517 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 517 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 517 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0(
#line 517 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 517 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2);

#line 500 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0(
#line 500 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 500 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 500 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 500 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0(
#line 500 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 500 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2);

#line 931 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__is_in_list_2_p_0(
#line 931 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypeInfo_for_T_5,
#line 931 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__List_3,
#line 931 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__Element_4);

#line 812 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__term_to_instance_method_4_p_0(
#line 812 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass___ModuleName_5,
#line 812 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 812 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 812 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8);

#line 777 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_2(
#line 777 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 777 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 773 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_1(
#line 773 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 773 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 759 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0(
#line 759 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 759 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__InstanceTerm_2,
#line 759 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 695 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(
#line 695 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 695 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 695 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 695 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 695 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 695 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12);

#line 436 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_name_6_p_0_1(
#line 436 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 436 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 436 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 640 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(
#line 640 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 640 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 640 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 640 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 640 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 640 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12);

#line 592 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_fundep_2_p_0(
#line 592 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_3,
#line 592 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_4);

#line 621 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_1(
#line 621 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 621 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_3(
#line 621 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 621 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_2(
#line 621 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 621 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_4(
#line 621 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 526 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0(
#line 526 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_1,
#line 526 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 526 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 478 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(
#line 478 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 478 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 478 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 450 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(
#line 450 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 450 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Constraint_3);

#line 357 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__item_to_class_method_3_p_0(
#line 357 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 357 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_2,
#line 357 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 310 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0_1(
#line 310 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 310 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 310 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 299 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(
#line 299 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 299 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 299 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 299 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 299 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 299 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12);

#line 281 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(
#line 281 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 281 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 281 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 251 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundep_1_f_0(
#line 251 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1);

#line 249 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0_1(
#line 249 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 249 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 247 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0(
#line 247 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__FunDeps_3);

#line 201 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_4(
#line 201 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 201 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 198 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_3(
#line 198 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 198 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 159 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_2(
#line 159 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 159 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 157 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_1(
#line 157 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 157 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 130 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Decl_9,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_10,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 130 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 130 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14);

#line 310 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0_1(
#line 310 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 310 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 310 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 116 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0(
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_9,
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 116 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 116 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);

#line 342 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0_1(
#line 342 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 342 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 342 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 90 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0(
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Name_9,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Methods_10,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 90 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 90 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14);

#line 800 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_6_p_0_1(
#line 800 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 800 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 800 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_1[94][2];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_3[4][7];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_4[16][1];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_5[4][5];




static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_1[94][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "and ground types"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "constraints may only constrain type variables"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in typeclass declarations."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: functional dependencies are only allowed"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "may only constrain type variables and ground types."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: constraints on class declarations"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "as class parameters."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: expected distinct variables"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: expected list of class methods."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "are allowed in class interfaces."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: only pred, func and mode declarations"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "as class name or inst constraint."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: expected atom"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must be comma-separated lists of variables."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of a functional dependency"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: the domain and range"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: constraints on instance declarations"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[22])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in constraints on instance declaration."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: expected list of instance methods."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 53 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In typeclass declaration:"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 57 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in the superclass constraint"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in superclass constraints"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in the functional dependency"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in functional dependencies"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: type variable"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not a parameter of this type class."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: type variables"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "are not parameters of this type class."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 76 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 77 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 78 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 79 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In instance declaration:"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: unbound type variable"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: unbound type variables"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 86 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 87 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 88 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: expected clause or"))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_1[5])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2)),
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_1[9])),
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_io_typeclass__parse_class_head_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[2])),
    ((MR_Box) (parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[3])),
    ((MR_Box) (parse_tree__prog_io_typeclass__parse_instance_name_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[3])),
    ((MR_Box) (parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_3[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_4[16][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[50])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[30])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[28])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[34])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[38])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[44])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[46])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[16])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[20])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[24])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "pred(<Name> / <Arity>) is <InstanceMethod>"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "func(<Name> / <Arity>) is <InstanceMethod>"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "pred(<Name> / <Arity>) is <InstanceName>"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "func(<Name> / <Arity>) is <InstanceName>"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 1474 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1482 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1490 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0
  }
};

#line 1498 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0
  }
};

#line 1506 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1514 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1522 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1530 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1538 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1546 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1551 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0 = {
  (MR_String) "simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_0,
  NULL,
  NULL,
  NULL
};

#line 1566 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1571 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1 = {
  (MR_String) "non_simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_1,
  NULL,
  NULL,
  NULL
};

#line 1586 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1594 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 1600 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2 = {
  (MR_String) "inst_constraint",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_2,
  NULL,
  NULL,
  NULL
};

#line 1615 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0
};

#line 1620 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3 = {
  (MR_String) "fundep",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_3,
  NULL,
  NULL,
  NULL
};

#line 1635 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_0[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0
};

#line 1640 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_1[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1
};

#line 1645 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_2[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3
};

#line 1650 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_3[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2
};

#line 1655 "parse_tree.prog_io_typeclass.c"
static const MR_DuPtagLayout parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_ptag_ordered_arbitrary_constraint_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_3
  }
};

#line 1679 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_name_ordered_arbitrary_constraint_0[4] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3,
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2,
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1,
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0
};

#line 1687 "parse_tree.prog_io_typeclass.c"
static const MR_Integer parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__functor_number_map_arbitrary_constraint_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1695 "parse_tree.prog_io_typeclass.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0_10001)),
  (MR_String) "parse_tree.prog_io_typeclass",
  (MR_String) "arbitrary_constraint",
  {
    parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_name_ordered_arbitrary_constraint_0
  },
  {
    parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_ptag_ordered_arbitrary_constraint_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__functor_number_map_arbitrary_constraint_0
};

#line 1716 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0
  }
};

#line 1724 "parse_tree.prog_io_typeclass.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0_10001)),
  (MR_String) "parse_tree.prog_io_typeclass",
  (MR_String) "arbitrary_constraints",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1745 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1753 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1762 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1771 "parse_tree.prog_io_typeclass.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_maybe_class_and_inst_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0_10001)),
  (MR_String) "parse_tree.prog_io_typeclass",
  (MR_String) "maybe_class_and_inst_constraints",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_typeclass__parse_tree__prog_io_util__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1792 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0_10001(
#line 1795 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1797 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 1799 "parse_tree.prog_io_typeclass.c"
{
#line 1801 "parse_tree.prog_io_typeclass.c"
  {
#line 1803 "parse_tree.prog_io_typeclass.c"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 1806 "parse_tree.prog_io_typeclass.c"
    {
#line 1808 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2));
    }
#line 1811 "parse_tree.prog_io_typeclass.c"
    return parse_tree__prog_io_typeclass__succeeded;
#line 1813 "parse_tree.prog_io_typeclass.c"
  }
#line 1815 "parse_tree.prog_io_typeclass.c"
}

#line 1818 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0_10001(
#line 1821 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1823 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 1825 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3)
#line 1827 "parse_tree.prog_io_typeclass.c"
{
#line 1829 "parse_tree.prog_io_typeclass.c"
  {
#line 1831 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__1_1;

#line 1834 "parse_tree.prog_io_typeclass.c"
    {
#line 1836 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0(&parse_tree__prog_io_typeclass__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_3));
    }
#line 1839 "parse_tree.prog_io_typeclass.c"
    *parse_tree__prog_io_typeclass__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__1_1));
#line 1841 "parse_tree.prog_io_typeclass.c"
  }
#line 1843 "parse_tree.prog_io_typeclass.c"
}

#line 1846 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0_10001(
#line 1849 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1851 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 1853 "parse_tree.prog_io_typeclass.c"
{
#line 1855 "parse_tree.prog_io_typeclass.c"
  {
#line 1857 "parse_tree.prog_io_typeclass.c"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 1860 "parse_tree.prog_io_typeclass.c"
    {
#line 1862 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2));
    }
#line 1865 "parse_tree.prog_io_typeclass.c"
    return parse_tree__prog_io_typeclass__succeeded;
#line 1867 "parse_tree.prog_io_typeclass.c"
  }
#line 1869 "parse_tree.prog_io_typeclass.c"
}

#line 1872 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0_10001(
#line 1875 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1877 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 1879 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3)
#line 1881 "parse_tree.prog_io_typeclass.c"
{
#line 1883 "parse_tree.prog_io_typeclass.c"
  {
#line 1885 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__1_1;

#line 1888 "parse_tree.prog_io_typeclass.c"
    {
#line 1890 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0(&parse_tree__prog_io_typeclass__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_3));
    }
#line 1893 "parse_tree.prog_io_typeclass.c"
    *parse_tree__prog_io_typeclass__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__1_1));
#line 1895 "parse_tree.prog_io_typeclass.c"
  }
#line 1897 "parse_tree.prog_io_typeclass.c"
}

#line 1900 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0_10001(
#line 1903 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1905 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 1907 "parse_tree.prog_io_typeclass.c"
{
#line 1909 "parse_tree.prog_io_typeclass.c"
  {
#line 1911 "parse_tree.prog_io_typeclass.c"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 1914 "parse_tree.prog_io_typeclass.c"
    {
#line 1916 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2));
    }
#line 1919 "parse_tree.prog_io_typeclass.c"
    return parse_tree__prog_io_typeclass__succeeded;
#line 1921 "parse_tree.prog_io_typeclass.c"
  }
#line 1923 "parse_tree.prog_io_typeclass.c"
}

#line 1926 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0_10001(
#line 1929 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1931 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 1933 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3)
#line 1935 "parse_tree.prog_io_typeclass.c"
{
#line 1937 "parse_tree.prog_io_typeclass.c"
  {
#line 1939 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__1_1;

#line 1942 "parse_tree.prog_io_typeclass.c"
    {
#line 1944 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0(&parse_tree__prog_io_typeclass__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_3));
    }
#line 1947 "parse_tree.prog_io_typeclass.c"
    *parse_tree__prog_io_typeclass__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__1_1));
#line 1949 "parse_tree.prog_io_typeclass.c"
  }
#line 1951 "parse_tree.prog_io_typeclass.c"
}

#line 812 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(
#line 812 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 812 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 812 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8)
#line 812 "prog_io_typeclass.m"
{
#line 888 "prog_io_typeclass.m"
  {
#line 888 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MethodTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ClassMethodTerm_9;
#line 888 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__InstanceMethodTerm_10;
#line 888 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TermContext_11;
#line 818 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_43_43;
#line 818 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_44_44;
#line 818 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_45_45;
#line 818 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_46_46;
#line 818 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_47_47;

#line 818 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 818 "prog_io_typeclass.m"
      {
#line 818 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) 0)));
#line 818 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) 1)));
#line 818 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TermContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) 2)));
#line 818 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 818 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 818 "prog_io_typeclass.m"
          {
#line 818 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_43_43, (MR_Integer) 0)));
#line 818 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_44_44, (MR_String) "is") == 0);
#line 818 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 818 "prog_io_typeclass.m"
              {
#line 819 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 819 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 819 "prog_io_typeclass.m"
                  {
#line 819 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ClassMethodTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_45_45, (MR_Integer) 0)));
#line 819 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_45_45, (MR_Integer) 1)));
#line 819 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 819 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 819 "prog_io_typeclass.m"
                      {
#line 819 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__InstanceMethodTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_46_46, (MR_Integer) 0)));
#line 819 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_46_46, (MR_Integer) 1)));
#line 819 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "prog_io_typeclass.m"
                      }
#line 819 "prog_io_typeclass.m"
                  }
#line 818 "prog_io_typeclass.m"
              }
#line 818 "prog_io_typeclass.m"
          }
#line 818 "prog_io_typeclass.m"
      }
#line 888 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 850 "prog_io_typeclass.m"
      {
#line 850 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__PredNameTerm_14;
#line 850 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArityTerm_15;
#line 825 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SlashTerm_12;
#line 825 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_48_48;
#line 825 "prog_io_typeclass.m"
        MR_String parse_tree__prog_io_typeclass__V_49_49;
#line 825 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_50_50;
#line 825 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_51_51;
#line 825 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_52_52;
#line 825 "prog_io_typeclass.m"
        MR_String parse_tree__prog_io_typeclass__V_53_53;
#line 825 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_54_54;
#line 825 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_55_55;
#line 825 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_56_56;
#line 825 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_13_13;
#line 826 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_16_16;

#line 825 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ClassMethodTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 825 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 825 "prog_io_typeclass.m"
          {
#line 825 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 0)));
#line 825 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 1)));
#line 825 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 2)));
#line 825 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_48_48)) == (MR_mktag((MR_Integer) 0)));
#line 825 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 825 "prog_io_typeclass.m"
              {
#line 825 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_48_48, (MR_Integer) 0)));
#line 825 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_49_49, (MR_String) "pred") == 0);
#line 825 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 825 "prog_io_typeclass.m"
                  {
#line 825 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 825 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 825 "prog_io_typeclass.m"
                      {
#line 825 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__SlashTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, (MR_Integer) 0)));
#line 825 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, (MR_Integer) 1)));
#line 825 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 825 "prog_io_typeclass.m"
                          {
#line 826 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__SlashTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 826 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 826 "prog_io_typeclass.m"
                              {
#line 826 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_12, (MR_Integer) 0)));
#line 826 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_12, (MR_Integer) 1)));
#line 826 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_12, (MR_Integer) 2)));
#line 826 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_52_52)) == (MR_mktag((MR_Integer) 0)));
#line 826 "prog_io_typeclass.m"
                                if (parse_tree__prog_io_typeclass__succeeded)
#line 826 "prog_io_typeclass.m"
                                  {
#line 826 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_52_52, (MR_Integer) 0)));
#line 826 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_53_53, (MR_String) "/") == 0);
#line 825 "prog_io_typeclass.m"
                                    if (parse_tree__prog_io_typeclass__succeeded)
#line 825 "prog_io_typeclass.m"
                                      {
#line 827 "prog_io_typeclass.m"
                                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 827 "prog_io_typeclass.m"
                                        if (parse_tree__prog_io_typeclass__succeeded)
#line 827 "prog_io_typeclass.m"
                                          {
#line 827 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__PredNameTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_54_54, (MR_Integer) 0)));
#line 827 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_54_54, (MR_Integer) 1)));
#line 827 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 827 "prog_io_typeclass.m"
                                            if (parse_tree__prog_io_typeclass__succeeded)
#line 827 "prog_io_typeclass.m"
                                              {
#line 827 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__ArityTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, (MR_Integer) 0)));
#line 827 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, (MR_Integer) 1)));
#line 827 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 827 "prog_io_typeclass.m"
                                              }
#line 827 "prog_io_typeclass.m"
                                          }
#line 825 "prog_io_typeclass.m"
                                      }
#line 826 "prog_io_typeclass.m"
                                  }
#line 826 "prog_io_typeclass.m"
                              }
#line 825 "prog_io_typeclass.m"
                          }
#line 825 "prog_io_typeclass.m"
                      }
#line 825 "prog_io_typeclass.m"
                  }
#line 825 "prog_io_typeclass.m"
              }
#line 825 "prog_io_typeclass.m"
          }
#line 850 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 839 "prog_io_typeclass.m"
          {
#line 839 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__PredName_17;
#line 839 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__ArityInt_18;
#line 839 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__InstanceMethodName_20;
#line 830 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_259_259 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 830 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_57_57;
#line 830 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_58_58;
#line 831 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_19_19;

#line 830 "prog_io_typeclass.m"
            {
#line 830 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_259_259, parse_tree__prog_io_typeclass__PredNameTerm_14, &parse_tree__prog_io_typeclass__PredName_17);
            }
#line 830 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 830 "prog_io_typeclass.m"
              {
#line 831 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArityTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 831 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 831 "prog_io_typeclass.m"
                  {
#line 831 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_15, (MR_Integer) 0)));
#line 831 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_15, (MR_Integer) 1)));
#line 831 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_15, (MR_Integer) 2)));
#line 831 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 830 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 830 "prog_io_typeclass.m"
                      {
#line 831 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_57_57)) == (MR_mktag((MR_Integer) 1)));
#line 831 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 831 "prog_io_typeclass.m"
                          {
#line 831 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__ArityInt_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_57_57, (MR_Integer) 0)));
#line 832 "prog_io_typeclass.m"
                            {
#line 832 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_259_259, parse_tree__prog_io_typeclass__InstanceMethodTerm_10, &parse_tree__prog_io_typeclass__InstanceMethodName_20);
                            }
#line 831 "prog_io_typeclass.m"
                          }
#line 830 "prog_io_typeclass.m"
                      }
#line 831 "prog_io_typeclass.m"
                  }
#line 830 "prog_io_typeclass.m"
              }
#line 839 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 837 "prog_io_typeclass.m"
              {
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceMethod_21;
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_60_60;

#line 836 "prog_io_typeclass.m"
                {
#line 836 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 836 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethodName_20));
#line 836 "prog_io_typeclass.m"
                }
#line 835 "prog_io_typeclass.m"
                {
#line 835 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__InstanceMethod_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 835 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 0) = ((MR_Box) ((MR_Integer) 0));
#line 835 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__PredName_17));
#line 835 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_60_60));
#line 835 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ArityInt_18));
#line 835 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__TermContext_11));
#line 835 "prog_io_typeclass.m"
                }
#line 838 "prog_io_typeclass.m"
                {
#line 838 "prog_io_typeclass.m"
                  MR_Word base;
#line 838 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 838 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 838 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethod_21));
#line 838 "prog_io_typeclass.m"
                }
#line 837 "prog_io_typeclass.m"
              }
#line 839 "prog_io_typeclass.m"
            else
#line 840 "prog_io_typeclass.m"
              {
#line 840 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_260_260 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 840 "prog_io_typeclass.m"
                MR_String parse_tree__prog_io_typeclass__MethodTermStr_22;
#line 840 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_23;
#line 840 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_24;
#line 840 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_63_63;
#line 840 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_66_66;
#line 840 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_69_69;
#line 840 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_72_72;
#line 840 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_73_73;
#line 840 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_82_82;
#line 840 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_83_83;
#line 840 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_84_84;
#line 840 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_85_85;
#line 840 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_86_86;
#line 840 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_89_89;

#line 840 "prog_io_typeclass.m"
                {
#line 840 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MethodTermStr_22 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_260_260, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 844 "prog_io_typeclass.m"
                {
#line 844 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 844 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_22));
#line 844 "prog_io_typeclass.m"
                }
#line 844 "prog_io_typeclass.m"
                {
#line 844 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_73_73));
#line 844 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 844 "prog_io_typeclass.m"
                }
#line 844 "prog_io_typeclass.m"
                {
#line 844 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_69_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 844 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_72_72));
#line 844 "prog_io_typeclass.m"
                }
#line 843 "prog_io_typeclass.m"
                {
#line 843 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_66_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[90])));
#line 843 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_69_69));
#line 843 "prog_io_typeclass.m"
                }
#line 842 "prog_io_typeclass.m"
                {
#line 842 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_typeclass_scalar_common_4[11])));
#line 842 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_66_66));
#line 842 "prog_io_typeclass.m"
                }
#line 841 "prog_io_typeclass.m"
                {
#line 841 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 841 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[89])));
#line 841 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_23, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_63_63));
#line 841 "prog_io_typeclass.m"
                }
#line 846 "prog_io_typeclass.m"
                {
#line 846 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_84_84 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_260_260, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 847 "prog_io_typeclass.m"
                {
#line 847 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 847 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_23));
#line 847 "prog_io_typeclass.m"
                }
#line 847 "prog_io_typeclass.m"
                {
#line 847 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_86_86));
#line 847 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "prog_io_typeclass.m"
                }
#line 846 "prog_io_typeclass.m"
                {
#line 846 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 846 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_84_84));
#line 846 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_85_85));
#line 846 "prog_io_typeclass.m"
                }
#line 847 "prog_io_typeclass.m"
                {
#line 847 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_83_83));
#line 847 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "prog_io_typeclass.m"
                }
#line 845 "prog_io_typeclass.m"
                {
#line 845 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 845 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 845 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 845 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_82_82));
#line 845 "prog_io_typeclass.m"
                }
#line 848 "prog_io_typeclass.m"
                {
#line 848 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_24));
#line 848 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "prog_io_typeclass.m"
                }
#line 848 "prog_io_typeclass.m"
                {
#line 848 "prog_io_typeclass.m"
                  MR_Word base;
#line 848 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 848 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 848 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_89_89));
#line 848 "prog_io_typeclass.m"
                }
#line 840 "prog_io_typeclass.m"
              }
#line 839 "prog_io_typeclass.m"
          }
#line 850 "prog_io_typeclass.m"
        else
#line 876 "prog_io_typeclass.m"
          {
#line 876 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FuncNameTerm_26;
#line 876 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ArityTerm_227;
#line 851 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_91_91;
#line 851 "prog_io_typeclass.m"
            MR_String parse_tree__prog_io_typeclass__V_92_92;
#line 851 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_93_93;
#line 851 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_94_94;
#line 851 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_95_95;
#line 851 "prog_io_typeclass.m"
            MR_String parse_tree__prog_io_typeclass__V_96_96;
#line 851 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_97_97;
#line 851 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_98_98;
#line 851 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_99_99;
#line 851 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SlashTerm_212;
#line 851 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_25_25;
#line 852 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_27_27;

#line 851 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ClassMethodTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 851 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 851 "prog_io_typeclass.m"
              {
#line 851 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 0)));
#line 851 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 1)));
#line 851 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 2)));
#line 851 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_91_91)) == (MR_mktag((MR_Integer) 0)));
#line 851 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 851 "prog_io_typeclass.m"
                  {
#line 851 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_91_91, (MR_Integer) 0)));
#line 851 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_92_92, (MR_String) "func") == 0);
#line 851 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 851 "prog_io_typeclass.m"
                      {
#line 851 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_93_93)) == (MR_mktag((MR_Integer) 1)));
#line 851 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 851 "prog_io_typeclass.m"
                          {
#line 851 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__SlashTerm_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_93_93, (MR_Integer) 0)));
#line 851 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_93_93, (MR_Integer) 1)));
#line 851 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_94_94 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 851 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 851 "prog_io_typeclass.m"
                              {
#line 852 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__SlashTerm_212)) == (MR_mktag((MR_Integer) 0)));
#line 852 "prog_io_typeclass.m"
                                if (parse_tree__prog_io_typeclass__succeeded)
#line 852 "prog_io_typeclass.m"
                                  {
#line 852 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_212, (MR_Integer) 0)));
#line 852 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_212, (MR_Integer) 1)));
#line 852 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_212, (MR_Integer) 2)));
#line 852 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_95_95)) == (MR_mktag((MR_Integer) 0)));
#line 852 "prog_io_typeclass.m"
                                    if (parse_tree__prog_io_typeclass__succeeded)
#line 852 "prog_io_typeclass.m"
                                      {
#line 852 "prog_io_typeclass.m"
                                        parse_tree__prog_io_typeclass__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_95_95, (MR_Integer) 0)));
#line 852 "prog_io_typeclass.m"
                                        parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_96_96, (MR_String) "/") == 0);
#line 851 "prog_io_typeclass.m"
                                        if (parse_tree__prog_io_typeclass__succeeded)
#line 851 "prog_io_typeclass.m"
                                          {
#line 853 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_97_97)) == (MR_mktag((MR_Integer) 1)));
#line 853 "prog_io_typeclass.m"
                                            if (parse_tree__prog_io_typeclass__succeeded)
#line 853 "prog_io_typeclass.m"
                                              {
#line 853 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__FuncNameTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_97_97, (MR_Integer) 0)));
#line 853 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_97_97, (MR_Integer) 1)));
#line 853 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_98_98)) == (MR_mktag((MR_Integer) 1)));
#line 853 "prog_io_typeclass.m"
                                                if (parse_tree__prog_io_typeclass__succeeded)
#line 853 "prog_io_typeclass.m"
                                                  {
#line 853 "prog_io_typeclass.m"
                                                    parse_tree__prog_io_typeclass__ArityTerm_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_98_98, (MR_Integer) 0)));
#line 853 "prog_io_typeclass.m"
                                                    parse_tree__prog_io_typeclass__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_98_98, (MR_Integer) 1)));
#line 853 "prog_io_typeclass.m"
                                                    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_99_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "prog_io_typeclass.m"
                                                  }
#line 853 "prog_io_typeclass.m"
                                              }
#line 851 "prog_io_typeclass.m"
                                          }
#line 852 "prog_io_typeclass.m"
                                      }
#line 852 "prog_io_typeclass.m"
                                  }
#line 851 "prog_io_typeclass.m"
                              }
#line 851 "prog_io_typeclass.m"
                          }
#line 851 "prog_io_typeclass.m"
                      }
#line 851 "prog_io_typeclass.m"
                  }
#line 851 "prog_io_typeclass.m"
              }
#line 876 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 865 "prog_io_typeclass.m"
              {
#line 865 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FuncName_28;
#line 865 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__ArityInt_217;
#line 865 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceMethodName_218;
#line 856 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_261_261 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 856 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_100_100;
#line 856 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_101_101;
#line 857 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_29_29;

#line 856 "prog_io_typeclass.m"
                {
#line 856 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_261_261, parse_tree__prog_io_typeclass__FuncNameTerm_26, &parse_tree__prog_io_typeclass__FuncName_28);
                }
#line 856 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 856 "prog_io_typeclass.m"
                  {
#line 857 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArityTerm_227)) == (MR_mktag((MR_Integer) 0)));
#line 857 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 857 "prog_io_typeclass.m"
                      {
#line 857 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_227, (MR_Integer) 0)));
#line 857 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_227, (MR_Integer) 1)));
#line 857 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_227, (MR_Integer) 2)));
#line 857 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_101_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 856 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 856 "prog_io_typeclass.m"
                          {
#line 857 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_100_100)) == (MR_mktag((MR_Integer) 1)));
#line 857 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 857 "prog_io_typeclass.m"
                              {
#line 857 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__ArityInt_217 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_100_100, (MR_Integer) 0)));
#line 858 "prog_io_typeclass.m"
                                {
#line 858 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_261_261, parse_tree__prog_io_typeclass__InstanceMethodTerm_10, &parse_tree__prog_io_typeclass__InstanceMethodName_218);
                                }
#line 857 "prog_io_typeclass.m"
                              }
#line 856 "prog_io_typeclass.m"
                          }
#line 857 "prog_io_typeclass.m"
                      }
#line 856 "prog_io_typeclass.m"
                  }
#line 865 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 863 "prog_io_typeclass.m"
                  {
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_103_103;
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__InstanceMethod_213;

#line 862 "prog_io_typeclass.m"
                    {
#line 862 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 862 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_103_103, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethodName_218));
#line 862 "prog_io_typeclass.m"
                    }
#line 861 "prog_io_typeclass.m"
                    {
#line 861 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__InstanceMethod_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 861 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_213, 0) = ((MR_Box) ((MR_Integer) 1));
#line 861 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_213, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FuncName_28));
#line 861 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_213, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_103_103));
#line 861 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_213, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ArityInt_217));
#line 861 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_213, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__TermContext_11));
#line 861 "prog_io_typeclass.m"
                    }
#line 864 "prog_io_typeclass.m"
                    {
#line 864 "prog_io_typeclass.m"
                      MR_Word base;
#line 864 "prog_io_typeclass.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "prog_io_typeclass.m"
                      *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 864 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethod_213));
#line 864 "prog_io_typeclass.m"
                    }
#line 863 "prog_io_typeclass.m"
                  }
#line 865 "prog_io_typeclass.m"
                else
#line 866 "prog_io_typeclass.m"
                  {
#line 866 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_262_262 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 866 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_106_106;
#line 866 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_109_109;
#line 866 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_112_112;
#line 866 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_115_115;
#line 866 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_116_116;
#line 866 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_125_125;
#line 866 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_126_126;
#line 866 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_127_127;
#line 866 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_128_128;
#line 866 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_129_129;
#line 866 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_132_132;
#line 866 "prog_io_typeclass.m"
                    MR_String parse_tree__prog_io_typeclass__MethodTermStr_214;
#line 866 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Pieces_215;
#line 866 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Spec_216;

#line 866 "prog_io_typeclass.m"
                    {
#line 866 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__MethodTermStr_214 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_262_262, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                    }
#line 870 "prog_io_typeclass.m"
                    {
#line 870 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 870 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_116_116, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_214));
#line 870 "prog_io_typeclass.m"
                    }
#line 870 "prog_io_typeclass.m"
                    {
#line 870 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_116_116));
#line 870 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 870 "prog_io_typeclass.m"
                    }
#line 870 "prog_io_typeclass.m"
                    {
#line 870 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_112_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 870 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_112_112, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_115_115));
#line 870 "prog_io_typeclass.m"
                    }
#line 869 "prog_io_typeclass.m"
                    {
#line 869 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_109_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[90])));
#line 869 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_109_109, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_112_112));
#line 869 "prog_io_typeclass.m"
                    }
#line 868 "prog_io_typeclass.m"
                    {
#line 868 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_106_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_typeclass_scalar_common_4[12])));
#line 868 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_106_106, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_109_109));
#line 868 "prog_io_typeclass.m"
                    }
#line 867 "prog_io_typeclass.m"
                    {
#line 867 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Pieces_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 867 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_215, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[89])));
#line 867 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_215, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_106_106));
#line 867 "prog_io_typeclass.m"
                    }
#line 872 "prog_io_typeclass.m"
                    {
#line 872 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_127_127 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_262_262, parse_tree__prog_io_typeclass__MethodTerm_7);
                    }
#line 873 "prog_io_typeclass.m"
                    {
#line 873 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 873 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_129_129, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_215));
#line 873 "prog_io_typeclass.m"
                    }
#line 873 "prog_io_typeclass.m"
                    {
#line 873 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_128_128, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_129_129));
#line 873 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 873 "prog_io_typeclass.m"
                    }
#line 872 "prog_io_typeclass.m"
                    {
#line 872 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 872 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_126_126, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_127_127));
#line 872 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_126_126, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_128_128));
#line 872 "prog_io_typeclass.m"
                    }
#line 873 "prog_io_typeclass.m"
                    {
#line 873 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_126_126));
#line 873 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 873 "prog_io_typeclass.m"
                    }
#line 871 "prog_io_typeclass.m"
                    {
#line 871 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Spec_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 871 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_216, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 871 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 871 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_216, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_125_125));
#line 871 "prog_io_typeclass.m"
                    }
#line 874 "prog_io_typeclass.m"
                    {
#line 874 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_132_132, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_216));
#line 874 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 874 "prog_io_typeclass.m"
                    }
#line 874 "prog_io_typeclass.m"
                    {
#line 874 "prog_io_typeclass.m"
                      MR_Word base;
#line 874 "prog_io_typeclass.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 874 "prog_io_typeclass.m"
                      *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 874 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_132_132));
#line 874 "prog_io_typeclass.m"
                    }
#line 866 "prog_io_typeclass.m"
                  }
#line 865 "prog_io_typeclass.m"
              }
#line 876 "prog_io_typeclass.m"
            else
#line 877 "prog_io_typeclass.m"
              {
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_263_263 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_136_136;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_139_139;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_142_142;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_145_145;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_148_148;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_151_151;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_152_152;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_161_161;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_162_162;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_163_163;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_164_164;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_165_165;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_168_168;
#line 877 "prog_io_typeclass.m"
                MR_String parse_tree__prog_io_typeclass__MethodTermStr_223;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_224;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_225;

#line 877 "prog_io_typeclass.m"
                {
#line 877 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MethodTermStr_223 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_263_263, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 883 "prog_io_typeclass.m"
                {
#line 883 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 883 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_152_152, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_223));
#line 883 "prog_io_typeclass.m"
                }
#line 883 "prog_io_typeclass.m"
                {
#line 883 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_151_151, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_152_152));
#line 883 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 883 "prog_io_typeclass.m"
                }
#line 883 "prog_io_typeclass.m"
                {
#line 883 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_148_148, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 883 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_148_148, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_151_151));
#line 883 "prog_io_typeclass.m"
                }
#line 882 "prog_io_typeclass.m"
                {
#line 882 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 882 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_145_145, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[90])));
#line 882 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_145_145, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_148_148));
#line 882 "prog_io_typeclass.m"
                }
#line 881 "prog_io_typeclass.m"
                {
#line 881 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_142_142, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_typeclass_scalar_common_4[14])));
#line 881 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_142_142, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_145_145));
#line 881 "prog_io_typeclass.m"
                }
#line 880 "prog_io_typeclass.m"
                {
#line 880 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_139_139, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[92])));
#line 880 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_139_139, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_142_142));
#line 880 "prog_io_typeclass.m"
                }
#line 879 "prog_io_typeclass.m"
                {
#line 879 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_136_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_typeclass_scalar_common_4[13])));
#line 879 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_136_136, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_139_139));
#line 879 "prog_io_typeclass.m"
                }
#line 878 "prog_io_typeclass.m"
                {
#line 878 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 878 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_224, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[89])));
#line 878 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_224, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_136_136));
#line 878 "prog_io_typeclass.m"
                }
#line 885 "prog_io_typeclass.m"
                {
#line 885 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_163_163 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_263_263, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 885 "prog_io_typeclass.m"
                {
#line 885 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_165_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 885 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_165_165, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_224));
#line 885 "prog_io_typeclass.m"
                }
#line 885 "prog_io_typeclass.m"
                {
#line 885 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 885 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_164_164, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_165_165));
#line 885 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 885 "prog_io_typeclass.m"
                }
#line 885 "prog_io_typeclass.m"
                {
#line 885 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 885 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_162_162, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_163_163));
#line 885 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_162_162, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_164_164));
#line 885 "prog_io_typeclass.m"
                }
#line 885 "prog_io_typeclass.m"
                {
#line 885 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 885 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_161_161, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_162_162));
#line 885 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 885 "prog_io_typeclass.m"
                }
#line 884 "prog_io_typeclass.m"
                {
#line 884 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 884 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 884 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_225, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_161_161));
#line 884 "prog_io_typeclass.m"
                }
#line 886 "prog_io_typeclass.m"
                {
#line 886 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 886 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_168_168, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_225));
#line 886 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_168_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 886 "prog_io_typeclass.m"
                }
#line 886 "prog_io_typeclass.m"
                {
#line 886 "prog_io_typeclass.m"
                  MR_Word base;
#line 886 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 886 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 886 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_168_168));
#line 886 "prog_io_typeclass.m"
                }
#line 877 "prog_io_typeclass.m"
              }
#line 876 "prog_io_typeclass.m"
          }
#line 850 "prog_io_typeclass.m"
      }
#line 888 "prog_io_typeclass.m"
    else
#line 898 "prog_io_typeclass.m"
      {
#line 898 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeItem0_31;

#line 899 "prog_io_typeclass.m"
        {
#line 899 "prog_io_typeclass.m"
          parse_tree__prog_io_item__parse_item_5_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_4[15], parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) -1, &parse_tree__prog_io_typeclass__MaybeItem0_31);
        }
#line 903 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItem0_31)) == (MR_mktag((MR_Integer) 0))))
#line 902 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = (MR_Word) parse_tree__prog_io_typeclass__MaybeItem0_31;
#line 903 "prog_io_typeclass.m"
        else
#line 904 "prog_io_typeclass.m"
          {
#line 904 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Item_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItem0_31, (MR_Integer) 0)));
#line 913 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemClause_34;

#line 905 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Item_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_33, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 905 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 905 "prog_io_typeclass.m"
              {
#line 905 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__ItemClause_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_33, (MR_Integer) 1)));
#line 907 "prog_io_typeclass.m"
                {
#line 907 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__ClassMethodName_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 0)));
#line 907 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__PredOrFunc_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 1)));
#line 907 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__HeadArgs_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 2)));
#line 907 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__Context_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 6)));
#line 907 "prog_io_typeclass.m"
                  MR_Integer parse_tree__prog_io_typeclass__V_172_172;
#line 907 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_173_173;
#line 907 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_174_174;
#line 907 "prog_io_typeclass.m"
                  MR_Integer parse_tree__prog_io_typeclass__ArityInt_234;
#line 907 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__InstanceMethod_235;
#line 906 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass___Origin_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 3)));
#line 906 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass___VarSet_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 4)));
#line 906 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass___ClauseBody_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 5)));
#line 906 "prog_io_typeclass.m"
                  MR_Integer parse_tree__prog_io_typeclass___SeqNum_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 7)));

#line 908 "prog_io_typeclass.m"
                  {
#line 908 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_172_172 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[7], parse_tree__prog_io_typeclass__HeadArgs_37);
                  }
#line 908 "prog_io_typeclass.m"
                  {
#line 908 "prog_io_typeclass.m"
                    parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__prog_io_typeclass__PredOrFunc_36, &parse_tree__prog_io_typeclass__ArityInt_234, parse_tree__prog_io_typeclass__V_172_172);
                  }
#line 910 "prog_io_typeclass.m"
                  {
#line 910 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_174_174, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemClause_34));
#line 910 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_174_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 910 "prog_io_typeclass.m"
                  }
#line 910 "prog_io_typeclass.m"
                  {
#line 910 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_173_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 910 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_173_173, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_174_174));
#line 910 "prog_io_typeclass.m"
                  }
#line 909 "prog_io_typeclass.m"
                  {
#line 909 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__InstanceMethod_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 909 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_235, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__PredOrFunc_36));
#line 909 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_235, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassMethodName_35));
#line 909 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_235, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_173_173));
#line 909 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_235, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ArityInt_234));
#line 909 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_235, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_41));
#line 909 "prog_io_typeclass.m"
                  }
#line 912 "prog_io_typeclass.m"
                  {
#line 912 "prog_io_typeclass.m"
                    MR_Word base;
#line 912 "prog_io_typeclass.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 912 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 912 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethod_235));
#line 912 "prog_io_typeclass.m"
                  }
#line 907 "prog_io_typeclass.m"
                }
#line 905 "prog_io_typeclass.m"
              }
#line 905 "prog_io_typeclass.m"
            else
#line 914 "prog_io_typeclass.m"
              {
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_265_265 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_178_178;
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_181_181;
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_184_184;
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_187_187;
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_190_190;
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_193_193;
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_194_194;
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_203_203;
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_204_204;
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_205_205;
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_206_206;
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_207_207;
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_210_210;
#line 914 "prog_io_typeclass.m"
                MR_String parse_tree__prog_io_typeclass__MethodTermStr_236;
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_237;
#line 914 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_238;

#line 914 "prog_io_typeclass.m"
                {
#line 914 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MethodTermStr_236 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_265_265, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 920 "prog_io_typeclass.m"
                {
#line 920 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_194_194 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_194_194, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 920 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_194_194, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_236));
#line 920 "prog_io_typeclass.m"
                }
#line 920 "prog_io_typeclass.m"
                {
#line 920 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_193_193, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_194_194));
#line 920 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_193_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 920 "prog_io_typeclass.m"
                }
#line 920 "prog_io_typeclass.m"
                {
#line 920 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_190_190, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 920 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_190_190, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_193_193));
#line 920 "prog_io_typeclass.m"
                }
#line 919 "prog_io_typeclass.m"
                {
#line 919 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_187_187, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[90])));
#line 919 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_187_187, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_190_190));
#line 919 "prog_io_typeclass.m"
                }
#line 918 "prog_io_typeclass.m"
                {
#line 918 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_184_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_typeclass_scalar_common_4[14])));
#line 918 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_184_184, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_187_187));
#line 918 "prog_io_typeclass.m"
                }
#line 917 "prog_io_typeclass.m"
                {
#line 917 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_181_181, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[92])));
#line 917 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_181_181, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_184_184));
#line 917 "prog_io_typeclass.m"
                }
#line 916 "prog_io_typeclass.m"
                {
#line 916 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 916 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_178_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_typeclass_scalar_common_4[13])));
#line 916 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_178_178, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_181_181));
#line 916 "prog_io_typeclass.m"
                }
#line 915 "prog_io_typeclass.m"
                {
#line 915 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 915 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_237, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[93])));
#line 915 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_237, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_178_178));
#line 915 "prog_io_typeclass.m"
                }
#line 922 "prog_io_typeclass.m"
                {
#line 922 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_205_205 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_265_265, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 923 "prog_io_typeclass.m"
                {
#line 923 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_207_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 923 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_207_207, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_237));
#line 923 "prog_io_typeclass.m"
                }
#line 923 "prog_io_typeclass.m"
                {
#line 923 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 923 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_206_206, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_207_207));
#line 923 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_206_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 923 "prog_io_typeclass.m"
                }
#line 922 "prog_io_typeclass.m"
                {
#line 922 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 922 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_204_204, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_205_205));
#line 922 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_204_204, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_206_206));
#line 922 "prog_io_typeclass.m"
                }
#line 923 "prog_io_typeclass.m"
                {
#line 923 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 923 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_203_203, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_204_204));
#line 923 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 923 "prog_io_typeclass.m"
                }
#line 921 "prog_io_typeclass.m"
                {
#line 921 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_238 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 921 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_238, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 921 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 921 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_238, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_203_203));
#line 921 "prog_io_typeclass.m"
                }
#line 924 "prog_io_typeclass.m"
                {
#line 924 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_210_210, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_238));
#line 924 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "prog_io_typeclass.m"
                }
#line 924 "prog_io_typeclass.m"
                {
#line 924 "prog_io_typeclass.m"
                  MR_Word base;
#line 924 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 924 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 924 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_210_210));
#line 924 "prog_io_typeclass.m"
                }
#line 914 "prog_io_typeclass.m"
              }
#line 904 "prog_io_typeclass.m"
          }
#line 898 "prog_io_typeclass.m"
      }
#line 888 "prog_io_typeclass.m"
  }
#line 812 "prog_io_typeclass.m"
}

#line 400 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(
#line 400 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 400 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2,
#line 400 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3,
#line 400 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4,
#line 400 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5)
#line 400 "prog_io_typeclass.m"
{
#line 403 "prog_io_typeclass.m"
  {
#line 403 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 403 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "prog_io_typeclass.m"
      {
#line 403 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4;
#line 403 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2;
#line 403 "prog_io_typeclass.m"
      }
#line 403 "prog_io_typeclass.m"
    else
#line 404 "prog_io_typeclass.m"
      {
#line 404 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 404 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 404 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22;
#line 404 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23;

#line 405 "prog_io_typeclass.m"
        {
#line 405 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__prog_io_typeclass__Xs_13, parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2, &parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22, parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4, &parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23);
        }
#line 409 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__X_12)) == (MR_mktag((MR_Integer) 0))))
#line 410 "prog_io_typeclass.m"
          {
#line 410 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__CurSpecs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__X_12, (MR_Integer) 0)));

#line 411 "prog_io_typeclass.m"
            {
#line 411 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_typeclass__CurSpecs_17, parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23);
            }
#line 410 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22;
#line 410 "prog_io_typeclass.m"
          }
#line 409 "prog_io_typeclass.m"
        else
#line 407 "prog_io_typeclass.m"
          {
#line 407 "prog_io_typeclass.m"
            MR_Box parse_tree__prog_io_typeclass__CurMethod_16 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__X_12, (MR_Integer) 0));

#line 408 "prog_io_typeclass.m"
            {
#line 408 "prog_io_typeclass.m"
              MR_Word base;
#line 408 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3 = base;
#line 408 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_io_typeclass__CurMethod_16;
#line 408 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22));
#line 408 "prog_io_typeclass.m"
            }
#line 407 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23;
#line 407 "prog_io_typeclass.m"
          }
#line 404 "prog_io_typeclass.m"
      }
#line 403 "prog_io_typeclass.m"
  }
#line 400 "prog_io_typeclass.m"
}

#line 255 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 255 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 255 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 255 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 255 "prog_io_typeclass.m"
{
#line 258 "prog_io_typeclass.m"
  {
#line 258 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 258 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_9;
#line 258 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ConstraintList_39;

#line 523 "prog_io_typeclass.m"
    {
#line 523 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__ConstraintList_39);
    }
#line 524 "prog_io_typeclass.m"
    {
#line 524 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__ConstraintList_39, &parse_tree__prog_io_typeclass__Result0_9);
    }
#line 276 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_9)) == (MR_mktag((MR_Integer) 0))))
#line 277 "prog_io_typeclass.m"
      {
#line 277 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));

#line 278 "prog_io_typeclass.m"
        {
#line 278 "prog_io_typeclass.m"
          MR_Word base;
#line 278 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 278 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__Result_8 = base;
#line 278 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_15));
#line 278 "prog_io_typeclass.m"
        }
#line 277 "prog_io_typeclass.m"
      }
#line 276 "prog_io_typeclass.m"
    else
#line 261 "prog_io_typeclass.m"
      {
#line 261 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArbitraryConstraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));
#line 267 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_11;
#line 267 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps_12;

#line 263 "prog_io_typeclass.m"
        {
#line 263 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(parse_tree__prog_io_typeclass__ArbitraryConstraints_10, &parse_tree__prog_io_typeclass__Constraints_11, &parse_tree__prog_io_typeclass__FunDeps_12);
        }
#line 267 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 266 "prog_io_typeclass.m"
          {
#line 266 "prog_io_typeclass.m"
            MR_Word base;
#line 266 "prog_io_typeclass.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__Result_8 = base;
#line 266 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_11));
#line 266 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps_12));
#line 266 "prog_io_typeclass.m"
          }
#line 267 "prog_io_typeclass.m"
        else
#line 270 "prog_io_typeclass.m"
          {
#line 270 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_14;
#line 270 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_26_26;
#line 270 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_27_27;
#line 270 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_28_28;
#line 270 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_33_33;

#line 272 "prog_io_typeclass.m"
            {
#line 272 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_28_28 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7);
            }
#line 272 "prog_io_typeclass.m"
            {
#line 272 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 272 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_28_28));
#line 272 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[88])));
#line 272 "prog_io_typeclass.m"
            }
#line 273 "prog_io_typeclass.m"
            {
#line 273 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_27_27));
#line 273 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 273 "prog_io_typeclass.m"
            }
#line 271 "prog_io_typeclass.m"
            {
#line 271 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 271 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 271 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_26_26));
#line 271 "prog_io_typeclass.m"
            }
#line 274 "prog_io_typeclass.m"
            {
#line 274 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_14));
#line 274 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "prog_io_typeclass.m"
            }
#line 274 "prog_io_typeclass.m"
            {
#line 274 "prog_io_typeclass.m"
              MR_Word base;
#line 274 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 274 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 274 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_33_33));
#line 274 "prog_io_typeclass.m"
            }
#line 270 "prog_io_typeclass.m"
          }
#line 261 "prog_io_typeclass.m"
      }
#line 258 "prog_io_typeclass.m"
  }
#line 255 "prog_io_typeclass.m"
}

#line 50 "prog_io_typeclass.m"
void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_97_110_100_95_105_110_115_116_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 50 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 50 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 50 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 50 "prog_io_typeclass.m"
{
#line 456 "prog_io_typeclass.m"
  {
#line 456 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 456 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_9;
#line 456 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ConstraintList_39;

#line 523 "prog_io_typeclass.m"
    {
#line 523 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__ConstraintList_39);
    }
#line 524 "prog_io_typeclass.m"
    {
#line 524 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__ConstraintList_39, &parse_tree__prog_io_typeclass__Result0_9);
    }
#line 473 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_9)) == (MR_mktag((MR_Integer) 0))))
#line 474 "prog_io_typeclass.m"
      {
#line 474 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));

#line 475 "prog_io_typeclass.m"
        {
#line 475 "prog_io_typeclass.m"
          MR_Word base;
#line 475 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 475 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__Result_8 = base;
#line 475 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_15));
#line 475 "prog_io_typeclass.m"
        }
#line 474 "prog_io_typeclass.m"
      }
#line 473 "prog_io_typeclass.m"
    else
#line 459 "prog_io_typeclass.m"
      {
#line 459 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArbitraryConstraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));
#line 465 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ProgConstraints_11;
#line 465 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__InstVarSub_12;

#line 461 "prog_io_typeclass.m"
        {
#line 461 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(parse_tree__prog_io_typeclass__ArbitraryConstraints_10, &parse_tree__prog_io_typeclass__ProgConstraints_11, &parse_tree__prog_io_typeclass__InstVarSub_12);
        }
#line 465 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 464 "prog_io_typeclass.m"
          {
#line 464 "prog_io_typeclass.m"
            MR_Word base;
#line 464 "prog_io_typeclass.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__Result_8 = base;
#line 464 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ProgConstraints_11));
#line 464 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVarSub_12));
#line 464 "prog_io_typeclass.m"
          }
#line 465 "prog_io_typeclass.m"
        else
#line 467 "prog_io_typeclass.m"
          {
#line 467 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_14;
#line 467 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_26_26;
#line 467 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_27_27;
#line 467 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_28_28;
#line 467 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_33_33;

#line 469 "prog_io_typeclass.m"
            {
#line 469 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_28_28 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7);
            }
#line 469 "prog_io_typeclass.m"
            {
#line 469 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 469 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_28_28));
#line 469 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[87])));
#line 469 "prog_io_typeclass.m"
            }
#line 470 "prog_io_typeclass.m"
            {
#line 470 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_27_27));
#line 470 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "prog_io_typeclass.m"
            }
#line 468 "prog_io_typeclass.m"
            {
#line 468 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 468 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 468 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 468 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_26_26));
#line 468 "prog_io_typeclass.m"
            }
#line 471 "prog_io_typeclass.m"
            {
#line 471 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_14));
#line 471 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "prog_io_typeclass.m"
            }
#line 471 "prog_io_typeclass.m"
            {
#line 471 "prog_io_typeclass.m"
              MR_Word base;
#line 471 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 471 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 471 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_33_33));
#line 471 "prog_io_typeclass.m"
            }
#line 467 "prog_io_typeclass.m"
          }
#line 459 "prog_io_typeclass.m"
      }
#line 456 "prog_io_typeclass.m"
  }
#line 50 "prog_io_typeclass.m"
}

#line 436 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
#line 436 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 436 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 436 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 436 "prog_io_typeclass.m"
{
#line 436 "prog_io_typeclass.m"
  {
#line 436 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 436 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 436 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_Constraint_3;

#line 436 "prog_io_typeclass.m"
    {
#line 436 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_Constraint_3);
    }
#line 436 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 436 "prog_io_typeclass.m"
      {
#line 436 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_Constraint_3));
#line 436 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 436 "prog_io_typeclass.m"
      }
#line 436 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 436 "prog_io_typeclass.m"
  }
#line 436 "prog_io_typeclass.m"
}

#line 45 "prog_io_typeclass.m"
void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 45 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 45 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 45 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 45 "prog_io_typeclass.m"
{
#line 419 "prog_io_typeclass.m"
  {
#line 419 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 419 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_26;
#line 419 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ConstraintList_51;

#line 523 "prog_io_typeclass.m"
    {
#line 523 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__ConstraintList_51);
    }
#line 524 "prog_io_typeclass.m"
    {
#line 524 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__ConstraintList_51, &parse_tree__prog_io_typeclass__Result0_26);
    }
#line 445 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_26)) == (MR_mktag((MR_Integer) 0))))
#line 447 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__Result_8 = (MR_Word) parse_tree__prog_io_typeclass__Result0_26;
#line 445 "prog_io_typeclass.m"
    else
#line 433 "prog_io_typeclass.m"
      {
#line 433 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArbitraryConstraints_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_26, (MR_Integer) 0)));
#line 439 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_28;

#line 436 "prog_io_typeclass.m"
        {
#line 436 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = mercury__list__map_3_p_2((MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[6], parse_tree__prog_io_typeclass__ArbitraryConstraints_27, &parse_tree__prog_io_typeclass__Constraints_28);
        }
#line 439 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 438 "prog_io_typeclass.m"
          {
#line 438 "prog_io_typeclass.m"
            MR_Word base;
#line 438 "prog_io_typeclass.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 438 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__Result_8 = base;
#line 438 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_28));
#line 438 "prog_io_typeclass.m"
          }
#line 439 "prog_io_typeclass.m"
        else
#line 442 "prog_io_typeclass.m"
          {
#line 442 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_29;
#line 442 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_34_34;
#line 442 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_35_35;
#line 442 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_36_36;
#line 442 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_41_41;

#line 441 "prog_io_typeclass.m"
            {
#line 441 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_36_36 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7);
            }
#line 441 "prog_io_typeclass.m"
            {
#line 441 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_36_36));
#line 441 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[86])));
#line 441 "prog_io_typeclass.m"
            }
#line 442 "prog_io_typeclass.m"
            {
#line 442 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_35_35));
#line 442 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 442 "prog_io_typeclass.m"
            }
#line 440 "prog_io_typeclass.m"
            {
#line 440 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 440 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 440 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_29, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_34_34));
#line 440 "prog_io_typeclass.m"
            }
#line 443 "prog_io_typeclass.m"
            {
#line 443 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_29));
#line 443 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "prog_io_typeclass.m"
            }
#line 443 "prog_io_typeclass.m"
            {
#line 443 "prog_io_typeclass.m"
              MR_Word base;
#line 443 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 443 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 443 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_41_41));
#line 443 "prog_io_typeclass.m"
            }
#line 442 "prog_io_typeclass.m"
          }
#line 433 "prog_io_typeclass.m"
      }
#line 419 "prog_io_typeclass.m"
  }
#line 45 "prog_io_typeclass.m"
}

#line 777 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__check_tvars_in_instance_constraint__777__1_3_f_0(
#line 777 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_14,
#line 777 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_31,
#line 777 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_62)
#line 777 "prog_io_typeclass.m"
{
#line 777 "prog_io_typeclass.m"
  {
#line 777 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 777 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__HeadVar__4_63;

#line 777 "prog_io_typeclass.m"
    {
#line 777 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__HeadVar__4_63 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__TVarSet_14, parse_tree__prog_io_typeclass__HeadVar__2_31, parse_tree__prog_io_typeclass__HeadVar__3_62);
    }
#line 777 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__4_63;
#line 777 "prog_io_typeclass.m"
  }
#line 777 "prog_io_typeclass.m"
}

#line 773 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__check_tvars_in_instance_constraint__773__1_2_p_0(
#line 773 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypesVars_19,
#line 773 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_57)
#line 773 "prog_io_typeclass.m"
{
#line 773 "prog_io_typeclass.m"
  {
#line 773 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 934 "prog_io_typeclass.m"
    {
#line 934 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], ((MR_Box) (parse_tree__prog_io_typeclass__HeadVar__2_57)), parse_tree__prog_io_typeclass__TypesVars_19);
    }
#line 773 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 773 "prog_io_typeclass.m"
  }
#line 773 "prog_io_typeclass.m"
}

#line 342 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_class_methods__342__1_4_p_0(
#line 342 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_5,
#line 342 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_7,
#line 342 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_17,
#line 342 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__4_18)
#line 342 "prog_io_typeclass.m"
{
#line 342 "prog_io_typeclass.m"
  {
#line 342 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 342 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Item_12;

#line 345 "prog_io_typeclass.m"
    {
#line 345 "prog_io_typeclass.m"
      parse_tree__prog_io_item__parse_decl_5_p_0(parse_tree__prog_io_typeclass__ModuleName_5, parse_tree__prog_io_typeclass__VarSet_7, parse_tree__prog_io_typeclass__HeadVar__3_17, (MR_Integer) -1, &parse_tree__prog_io_typeclass__Item_12);
    }
#line 347 "prog_io_typeclass.m"
    {
#line 347 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__item_to_class_method_3_p_0(parse_tree__prog_io_typeclass__Item_12, parse_tree__prog_io_typeclass__HeadVar__3_17, parse_tree__prog_io_typeclass__HeadVar__4_18);
#line 347 "prog_io_typeclass.m"
      return;
    }
#line 342 "prog_io_typeclass.m"
  }
#line 342 "prog_io_typeclass.m"
}

#line 310 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__310__1_2_p_0(
#line 310 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_54,
#line 310 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_55)
#line 310 "prog_io_typeclass.m"
{
#line 310 "prog_io_typeclass.m"
  {
#line 310 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 310 "prog_io_typeclass.m"
    {
#line 310 "prog_io_typeclass.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__HeadVar__1_54, parse_tree__prog_io_typeclass__HeadVar__2_55);
#line 310 "prog_io_typeclass.m"
      return;
    }
#line 310 "prog_io_typeclass.m"
  }
#line 310 "prog_io_typeclass.m"
}

#line 201 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__201__1_3_f_0(
#line 201 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_79,
#line 201 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_171,
#line 201 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_162)
#line 201 "prog_io_typeclass.m"
{
#line 201 "prog_io_typeclass.m"
  {
#line 201 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 201 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__HeadVar__4_163;

#line 201 "prog_io_typeclass.m"
    {
#line 201 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__HeadVar__4_163 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__HeadVar__2_171, parse_tree__prog_io_typeclass__HeadVar__1_79, parse_tree__prog_io_typeclass__HeadVar__3_162);
    }
#line 201 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__4_163;
#line 201 "prog_io_typeclass.m"
  }
#line 201 "prog_io_typeclass.m"
}

#line 198 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__198__1_3_f_0(
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_77,
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_171,
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_159)
#line 198 "prog_io_typeclass.m"
{
#line 198 "prog_io_typeclass.m"
  {
#line 198 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 198 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__HeadVar__4_160;

#line 198 "prog_io_typeclass.m"
    {
#line 198 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__HeadVar__4_160 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__HeadVar__2_171, parse_tree__prog_io_typeclass__HeadVar__1_77, parse_tree__prog_io_typeclass__HeadVar__3_159);
    }
#line 198 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__4_160;
#line 198 "prog_io_typeclass.m"
  }
#line 198 "prog_io_typeclass.m"
}

#line 159 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__159__1_2_p_0(
#line 159 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 159 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_154)
#line 159 "prog_io_typeclass.m"
{
#line 159 "prog_io_typeclass.m"
  {
#line 159 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 159 "prog_io_typeclass.m"
    {
#line 159 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__is_in_list_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__Params_26, ((MR_Box) (parse_tree__prog_io_typeclass__HeadVar__2_154)));
    }
#line 159 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 159 "prog_io_typeclass.m"
  }
#line 159 "prog_io_typeclass.m"
}

#line 157 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__157__1_2_p_0(
#line 157 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 157 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_152)
#line 157 "prog_io_typeclass.m"
{
#line 157 "prog_io_typeclass.m"
  {
#line 157 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 157 "prog_io_typeclass.m"
    {
#line 157 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__is_in_list_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__Params_26, ((MR_Box) (parse_tree__prog_io_typeclass__HeadVar__2_152)));
    }
#line 157 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 157 "prog_io_typeclass.m"
  }
#line 157 "prog_io_typeclass.m"
}

#line 53 "prog_io_typeclass.m"
void MR_CALL 
parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0(
#line 53 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 53 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 53 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 53 "prog_io_typeclass.m"
{
#line 53 "prog_io_typeclass.m"
  {
#line 53 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 53 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar1_4 = parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 53 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar2_5 = parse_tree__prog_io_typeclass__HeadVar__3_3;

#line 53 "prog_io_typeclass.m"
    {
#line 53 "prog_io_typeclass.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[1], parse_tree__prog_io_typeclass__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar2_5)));
#line 53 "prog_io_typeclass.m"
      return;
    }
#line 53 "prog_io_typeclass.m"
  }
#line 53 "prog_io_typeclass.m"
}

#line 53 "prog_io_typeclass.m"
MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0(
#line 53 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 53 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2)
#line 53 "prog_io_typeclass.m"
{
#line 53 "prog_io_typeclass.m"
  {
#line 53 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 53 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar1_3 = parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 53 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar2_4 = parse_tree__prog_io_typeclass__HeadVar__2_2;

#line 53 "prog_io_typeclass.m"
    {
#line 53 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[1], ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar2_4)));
    }
#line 53 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 53 "prog_io_typeclass.m"
  }
#line 53 "prog_io_typeclass.m"
}

#line 517 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0(
#line 517 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 517 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 517 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 517 "prog_io_typeclass.m"
{
#line 517 "prog_io_typeclass.m"
  {
#line 517 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 517 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar1_4 = parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 517 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar2_5 = parse_tree__prog_io_typeclass__HeadVar__3_3;

#line 517 "prog_io_typeclass.m"
    {
#line 517 "prog_io_typeclass.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[8], parse_tree__prog_io_typeclass__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar2_5)));
#line 517 "prog_io_typeclass.m"
      return;
    }
#line 517 "prog_io_typeclass.m"
  }
#line 517 "prog_io_typeclass.m"
}

#line 517 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0(
#line 517 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 517 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2)
#line 517 "prog_io_typeclass.m"
{
#line 517 "prog_io_typeclass.m"
  {
#line 517 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 517 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar1_3 = parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 517 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar2_4 = parse_tree__prog_io_typeclass__HeadVar__2_2;

#line 517 "prog_io_typeclass.m"
    {
#line 517 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[8], ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar2_4)));
    }
#line 517 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 517 "prog_io_typeclass.m"
  }
#line 517 "prog_io_typeclass.m"
}

#line 500 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0(
#line 500 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 500 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 500 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 500 "prog_io_typeclass.m"
{
#line 500 "prog_io_typeclass.m"
  {
#line 500 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 500 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastX_45 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 500 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastY_46 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__3_3;

#line 500 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__CastX_45 == parse_tree__prog_io_typeclass__CastY_46);
#line 500 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 4453 "parse_tree.prog_io_typeclass.c"
      *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 0;
#line 500 "prog_io_typeclass.m"
    else
#line 500 "prog_io_typeclass.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 500 "prog_io_typeclass.m"
        {
#line 500 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_52_52 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 2);

#line 500 "prog_io_typeclass.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 500 "prog_io_typeclass.m"
            {
#line 500 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_44_44 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3), (MR_Integer) 2);

#line 500 "prog_io_typeclass.m"
              {
#line 500 "prog_io_typeclass.m"
                parse_tree__prog_data____Compare____prog_fundep_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_52_52, parse_tree__prog_io_typeclass__V_44_44);
#line 500 "prog_io_typeclass.m"
                return;
              }
#line 500 "prog_io_typeclass.m"
            }
#line 500 "prog_io_typeclass.m"
          else
#line 500 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4484 "parse_tree.prog_io_typeclass.c"
              *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 500 "prog_io_typeclass.m"
            else
#line 500 "prog_io_typeclass.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4490 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 500 "prog_io_typeclass.m"
              else
#line 4494 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 500 "prog_io_typeclass.m"
        }
#line 500 "prog_io_typeclass.m"
      else
#line 500 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 500 "prog_io_typeclass.m"
          {
#line 500 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 1)));
#line 500 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 0)));

#line 500 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4511 "parse_tree.prog_io_typeclass.c"
              *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 500 "prog_io_typeclass.m"
            else
#line 500 "prog_io_typeclass.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 500 "prog_io_typeclass.m"
                {
#line 500 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__3_3, (MR_Integer) 0)));
#line 500 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__3_3, (MR_Integer) 1)));
#line 500 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_32_32;

#line 500 "prog_io_typeclass.m"
                  {
#line 500 "prog_io_typeclass.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5], &parse_tree__prog_io_typeclass__V_32_32, ((MR_Box) (parse_tree__prog_io_typeclass__V_54_54)), ((MR_Box) (parse_tree__prog_io_typeclass__V_30_30)));
                  }
#line 4531 "parse_tree.prog_io_typeclass.c"
                  parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_32_32 == (MR_Integer) 0);
#line 500 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = !(parse_tree__prog_io_typeclass__succeeded);
#line 500 "prog_io_typeclass.m"
                  if (parse_tree__prog_io_typeclass__succeeded)
#line 500 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__HeadVar__1_1 = parse_tree__prog_io_typeclass__V_32_32;
#line 500 "prog_io_typeclass.m"
                  else
#line 500 "prog_io_typeclass.m"
                    {
#line 500 "prog_io_typeclass.m"
                      parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_53_53, parse_tree__prog_io_typeclass__V_31_31);
#line 500 "prog_io_typeclass.m"
                      return;
                    }
#line 500 "prog_io_typeclass.m"
                }
#line 500 "prog_io_typeclass.m"
              else
#line 500 "prog_io_typeclass.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4554 "parse_tree.prog_io_typeclass.c"
                  *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 500 "prog_io_typeclass.m"
                else
#line 4558 "parse_tree.prog_io_typeclass.c"
                  *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 500 "prog_io_typeclass.m"
          }
#line 500 "prog_io_typeclass.m"
        else
#line 500 "prog_io_typeclass.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 500 "prog_io_typeclass.m"
            {
#line 500 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_55_55 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 1);

#line 500 "prog_io_typeclass.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4573 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 500 "prog_io_typeclass.m"
              else
#line 500 "prog_io_typeclass.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4579 "parse_tree.prog_io_typeclass.c"
                  *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 500 "prog_io_typeclass.m"
                else
#line 500 "prog_io_typeclass.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 500 "prog_io_typeclass.m"
                    {
#line 500 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__V_16_16 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3), (MR_Integer) 1);

#line 500 "prog_io_typeclass.m"
                      {
#line 500 "prog_io_typeclass.m"
                        parse_tree__prog_data____Compare____prog_constraint_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_55_55, parse_tree__prog_io_typeclass__V_16_16);
#line 500 "prog_io_typeclass.m"
                        return;
                      }
#line 500 "prog_io_typeclass.m"
                    }
#line 500 "prog_io_typeclass.m"
                  else
#line 4601 "parse_tree.prog_io_typeclass.c"
                    *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 500 "prog_io_typeclass.m"
            }
#line 500 "prog_io_typeclass.m"
          else
#line 500 "prog_io_typeclass.m"
            {
#line 500 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_56_56 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 0);

#line 500 "prog_io_typeclass.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4614 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 500 "prog_io_typeclass.m"
              else
#line 500 "prog_io_typeclass.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4620 "parse_tree.prog_io_typeclass.c"
                  *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 500 "prog_io_typeclass.m"
                else
#line 500 "prog_io_typeclass.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4626 "parse_tree.prog_io_typeclass.c"
                    *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 500 "prog_io_typeclass.m"
                  else
#line 500 "prog_io_typeclass.m"
                    {
#line 500 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3), (MR_Integer) 0);

#line 500 "prog_io_typeclass.m"
                      {
#line 500 "prog_io_typeclass.m"
                        parse_tree__prog_data____Compare____prog_constraint_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_56_56, parse_tree__prog_io_typeclass__V_5_5);
#line 500 "prog_io_typeclass.m"
                        return;
                      }
#line 500 "prog_io_typeclass.m"
                    }
#line 500 "prog_io_typeclass.m"
            }
#line 500 "prog_io_typeclass.m"
  }
#line 500 "prog_io_typeclass.m"
}

#line 500 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0(
#line 500 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 500 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2)
#line 500 "prog_io_typeclass.m"
{
#line 500 "prog_io_typeclass.m"
  {
#line 500 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 500 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastX_13 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 500 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastY_14 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__2_2;

#line 500 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__CastX_13 == parse_tree__prog_io_typeclass__CastY_14);
#line 500 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 500 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 500 "prog_io_typeclass.m"
    else
#line 500 "prog_io_typeclass.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 500 "prog_io_typeclass.m"
        {
#line 500 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_11_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 2);
#line 500 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_12_12;

#line 500 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 500 "prog_io_typeclass.m"
          if (parse_tree__prog_io_typeclass__succeeded)
#line 500 "prog_io_typeclass.m"
            {
#line 500 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_12_12 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 2);
#line 4694 "parse_tree.prog_io_typeclass.c"
              {
#line 4696 "parse_tree.prog_io_typeclass.c"
                return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____prog_fundep_0_0(parse_tree__prog_io_typeclass__V_11_11, parse_tree__prog_io_typeclass__V_12_12);
              }
#line 500 "prog_io_typeclass.m"
            }
#line 500 "prog_io_typeclass.m"
        }
#line 500 "prog_io_typeclass.m"
      else
#line 500 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 500 "prog_io_typeclass.m"
          {
#line 500 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeInfo_16_16;
#line 500 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 500 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 500 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_9_9;
#line 500 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_10_10;

#line 500 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 500 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 500 "prog_io_typeclass.m"
              {
#line 500 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 0)));
#line 500 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 1)));
#line 4730 "parse_tree.prog_io_typeclass.c"
                parse_tree__prog_io_typeclass__TypeInfo_16_16 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5];
#line 4732 "parse_tree.prog_io_typeclass.c"
                {
#line 4734 "parse_tree.prog_io_typeclass.c"
                  parse_tree__prog_io_typeclass__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_16_16, ((MR_Box) (parse_tree__prog_io_typeclass__V_7_7)), ((MR_Box) (parse_tree__prog_io_typeclass__V_9_9)));
                }
#line 500 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 4739 "parse_tree.prog_io_typeclass.c"
                  {
#line 4741 "parse_tree.prog_io_typeclass.c"
                    return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_io_typeclass__V_8_8, parse_tree__prog_io_typeclass__V_10_10);
                  }
#line 500 "prog_io_typeclass.m"
              }
#line 500 "prog_io_typeclass.m"
          }
#line 500 "prog_io_typeclass.m"
        else
#line 500 "prog_io_typeclass.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 500 "prog_io_typeclass.m"
            {
#line 500 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 1);
#line 500 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_6_6;

#line 500 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 500 "prog_io_typeclass.m"
              if (parse_tree__prog_io_typeclass__succeeded)
#line 500 "prog_io_typeclass.m"
                {
#line 500 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_6_6 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 1);
#line 4767 "parse_tree.prog_io_typeclass.c"
                  {
#line 4769 "parse_tree.prog_io_typeclass.c"
                    return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(parse_tree__prog_io_typeclass__V_5_5, parse_tree__prog_io_typeclass__V_6_6);
                  }
#line 500 "prog_io_typeclass.m"
                }
#line 500 "prog_io_typeclass.m"
            }
#line 500 "prog_io_typeclass.m"
          else
#line 500 "prog_io_typeclass.m"
            {
#line 500 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_3_3 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 0);
#line 500 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_4_4;

#line 500 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 500 "prog_io_typeclass.m"
              if (parse_tree__prog_io_typeclass__succeeded)
#line 500 "prog_io_typeclass.m"
                {
#line 500 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_4_4 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 0);
#line 4793 "parse_tree.prog_io_typeclass.c"
                  {
#line 4795 "parse_tree.prog_io_typeclass.c"
                    return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(parse_tree__prog_io_typeclass__V_3_3, parse_tree__prog_io_typeclass__V_4_4);
                  }
#line 500 "prog_io_typeclass.m"
                }
#line 500 "prog_io_typeclass.m"
            }
#line 500 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 500 "prog_io_typeclass.m"
  }
#line 500 "prog_io_typeclass.m"
}

#line 931 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__is_in_list_2_p_0(
#line 931 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypeInfo_for_T_5,
#line 931 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__List_3,
#line 931 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__Element_4)
#line 931 "prog_io_typeclass.m"
{
#line 934 "prog_io_typeclass.m"
  {
#line 934 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 934 "prog_io_typeclass.m"
    {
#line 934 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = mercury__list__member_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_for_T_5, parse_tree__prog_io_typeclass__Element_4, parse_tree__prog_io_typeclass__List_3);
    }
#line 934 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 934 "prog_io_typeclass.m"
  }
#line 931 "prog_io_typeclass.m"
}

#line 812 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__term_to_instance_method_4_p_0(
#line 812 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass___ModuleName_5,
#line 812 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 812 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 812 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8)
#line 812 "prog_io_typeclass.m"
{
#line 888 "prog_io_typeclass.m"
  {
#line 888 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 888 "prog_io_typeclass.m"
    {
#line 888 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7, parse_tree__prog_io_typeclass__MaybeInstanceMethod_8);
#line 888 "prog_io_typeclass.m"
      return;
    }
#line 888 "prog_io_typeclass.m"
  }
#line 812 "prog_io_typeclass.m"
}

#line 777 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_2(
#line 777 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 777 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 777 "prog_io_typeclass.m"
{
#line 777 "prog_io_typeclass.m"
  {
#line 777 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 777 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 777 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__conv0_HeadVar__4_63;

#line 777 "prog_io_typeclass.m"
    {
#line 777 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv0_HeadVar__4_63 = parse_tree__prog_io_typeclass__IntroducedFrom__func__check_tvars_in_instance_constraint__777__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 777 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__4_63));
#line 777 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 777 "prog_io_typeclass.m"
  }
#line 777 "prog_io_typeclass.m"
}

#line 773 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_1(
#line 773 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 773 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 773 "prog_io_typeclass.m"
{
#line 773 "prog_io_typeclass.m"
  {
#line 773 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 773 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;

#line 773 "prog_io_typeclass.m"
    {
#line 773 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__IntroducedFrom__pred__check_tvars_in_instance_constraint__773__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 773 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 773 "prog_io_typeclass.m"
  }
#line 773 "prog_io_typeclass.m"
}

#line 759 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0(
#line 759 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 759 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__InstanceTerm_2,
#line 759 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 759 "prog_io_typeclass.m"
{
#line 762 "prog_io_typeclass.m"
  {
#line 762 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 762 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 762 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 762 "prog_io_typeclass.m"
    else
#line 763 "prog_io_typeclass.m"
      {
#line 763 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ItemInstance_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 763 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Types_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 1)));
#line 763 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 3)));
#line 763 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 5)));
#line 765 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 0)));
#line 765 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___OriginalTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 2)));
#line 765 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___Methods_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 4)));
#line 765 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___ModName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 6)));
#line 765 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 7)));
#line 765 "prog_io_typeclass.m"
        MR_Integer parse_tree__prog_io_typeclass___SeqNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 8)));
#line 790 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__UnboundTVars_21;
#line 771 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TVars_18;
#line 771 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypesVars_19;
#line 771 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 773 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___BoundTVars_20;
#line 774 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_22_22;
#line 774 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_23_23;

#line 771 "prog_io_typeclass.m"
        {
#line 771 "prog_io_typeclass.m"
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_typeclass__Constraints_12, &parse_tree__prog_io_typeclass__TVars_18);
        }
#line 772 "prog_io_typeclass.m"
        {
#line 772 "prog_io_typeclass.m"
          parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_typeclass__Types_10, &parse_tree__prog_io_typeclass__TypesVars_19);
        }
#line 773 "prog_io_typeclass.m"
        {
#line 773 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 773 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[1]));
#line 773 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_1));
#line 773 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 773 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__TypesVars_19));
#line 773 "prog_io_typeclass.m"
        }
#line 773 "prog_io_typeclass.m"
        {
#line 773 "prog_io_typeclass.m"
          mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__V_29_29, parse_tree__prog_io_typeclass__TVars_18, &parse_tree__prog_io_typeclass___BoundTVars_20, &parse_tree__prog_io_typeclass__UnboundTVars_21);
        }
#line 774 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__UnboundTVars_21)) == (MR_mktag((MR_Integer) 1)));
#line 774 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 774 "prog_io_typeclass.m"
          {
#line 774 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__UnboundTVars_21, (MR_Integer) 0)));
#line 774 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__UnboundTVars_21, (MR_Integer) 1)));
#line 777 "prog_io_typeclass.m"
            {
#line 777 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__TypeInfo_60_60 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0];
#line 777 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_65_65;
#line 777 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__UnboundTVarStrs_24;
#line 777 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__UnboundTVarPieces_25;
#line 777 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Prefix_26;
#line 777 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Pieces_27;
#line 777 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Spec_28;
#line 777 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_30_30;
#line 777 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_39_39;
#line 777 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_48_48;
#line 777 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_49_49;
#line 777 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_50_50;
#line 777 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_51_51;
#line 777 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_52_52;
#line 777 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_55_55;
#line 779 "prog_io_typeclass.m"
              MR_Integer parse_tree__prog_io_typeclass__V_32_32;

#line 777 "prog_io_typeclass.m"
              {
#line 777 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 777 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[3]));
#line 777 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_2));
#line 777 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 777 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_14));
#line 777 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 4) = ((MR_Box) ((MR_Integer) 0));
#line 777 "prog_io_typeclass.m"
              }
#line 777 "prog_io_typeclass.m"
              {
#line 777 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__UnboundTVarStrs_24 = mercury__list__map_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_60_60, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_typeclass__V_30_30, parse_tree__prog_io_typeclass__UnboundTVars_21);
              }
#line 778 "prog_io_typeclass.m"
              {
#line 778 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__UnboundTVarPieces_25 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_typeclass__UnboundTVarStrs_24);
              }
#line 779 "prog_io_typeclass.m"
              {
#line 779 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_32_32 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_60_60, parse_tree__prog_io_typeclass__UnboundTVars_21);
              }
#line 779 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_32_32 == (MR_Integer) 1);
#line 781 "prog_io_typeclass.m"
              if (parse_tree__prog_io_typeclass__succeeded)
#line 780 "prog_io_typeclass.m"
                {
#line 780 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Prefix_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[83]);
#line 780 "prog_io_typeclass.m"
                }
#line 781 "prog_io_typeclass.m"
              else
#line 782 "prog_io_typeclass.m"
                {
#line 782 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Prefix_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[85]);
#line 782 "prog_io_typeclass.m"
                }
#line 5109 "parse_tree.prog_io_typeclass.c"
              parse_tree__prog_io_typeclass__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 784 "prog_io_typeclass.m"
              {
#line 784 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_39_39 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_65_65, parse_tree__prog_io_typeclass__UnboundTVarPieces_25, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[48]));
              }
#line 784 "prog_io_typeclass.m"
              {
#line 784 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__Pieces_27 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_65_65, parse_tree__prog_io_typeclass__Prefix_26, parse_tree__prog_io_typeclass__V_39_39);
              }
#line 788 "prog_io_typeclass.m"
              {
#line 788 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_50_50 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__InstanceTerm_2);
              }
#line 788 "prog_io_typeclass.m"
              {
#line 788 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 788 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_27));
#line 788 "prog_io_typeclass.m"
              }
#line 788 "prog_io_typeclass.m"
              {
#line 788 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_52_52));
#line 788 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 788 "prog_io_typeclass.m"
              }
#line 788 "prog_io_typeclass.m"
              {
#line 788 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 788 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_50_50));
#line 788 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_49_49, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_51_51));
#line 788 "prog_io_typeclass.m"
              }
#line 788 "prog_io_typeclass.m"
              {
#line 788 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_49_49));
#line 788 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 788 "prog_io_typeclass.m"
              }
#line 787 "prog_io_typeclass.m"
              {
#line 787 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 787 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 787 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 787 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_48_48));
#line 787 "prog_io_typeclass.m"
              }
#line 789 "prog_io_typeclass.m"
              {
#line 789 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_28));
#line 789 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "prog_io_typeclass.m"
              }
#line 789 "prog_io_typeclass.m"
              {
#line 789 "prog_io_typeclass.m"
                MR_Word base;
#line 789 "prog_io_typeclass.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 789 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 789 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_55_55));
#line 789 "prog_io_typeclass.m"
              }
#line 777 "prog_io_typeclass.m"
            }
#line 774 "prog_io_typeclass.m"
          }
#line 774 "prog_io_typeclass.m"
        else
#line 791 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 763 "prog_io_typeclass.m"
      }
#line 762 "prog_io_typeclass.m"
  }
#line 759 "prog_io_typeclass.m"
}

#line 695 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(
#line 695 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 695 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 695 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 695 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 695 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 695 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12)
#line 695 "prog_io_typeclass.m"
{
#line 699 "prog_io_typeclass.m"
  {
#line 699 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 699 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 699 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__VarSet_14;
#line 699 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeClassName_15;

#line 703 "prog_io_typeclass.m"
    {
#line 703 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__TypeCtorInfo_31_31, parse_tree__prog_io_typeclass__TVarSet_9, &parse_tree__prog_io_typeclass__VarSet_14);
    }
#line 704 "prog_io_typeclass.m"
    {
#line 704 "prog_io_typeclass.m"
      parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_31_31, parse_tree__prog_io_typeclass__NameTerm_8, parse_tree__prog_io_typeclass__VarSet_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[81]), &parse_tree__prog_io_typeclass__MaybeClassName_15);
    }
#line 720 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_15)) == (MR_mktag((MR_Integer) 0))))
#line 721 "prog_io_typeclass.m"
      {
#line 721 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));

#line 722 "prog_io_typeclass.m"
        {
#line 722 "prog_io_typeclass.m"
          MR_Word base;
#line 722 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 722 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = base;
#line 722 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_29));
#line 722 "prog_io_typeclass.m"
        }
#line 721 "prog_io_typeclass.m"
      }
#line 720 "prog_io_typeclass.m"
    else
#line 707 "prog_io_typeclass.m"
      {
#line 707 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));
#line 707 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TermTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 1)));
#line 707 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeTypes_19;

#line 710 "prog_io_typeclass.m"
        {
#line 710 "prog_io_typeclass.m"
          parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_typeclass__TermTypes_17, parse_tree__prog_io_typeclass__VarSet_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__MaybeTypes_19);
        }
#line 716 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_19)) == (MR_mktag((MR_Integer) 0))))
#line 718 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_19;
#line 716 "prog_io_typeclass.m"
        else
#line 712 "prog_io_typeclass.m"
          {
#line 712 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeTypes_19, (MR_Integer) 0)));
#line 712 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemInstance_21;

#line 713 "prog_io_typeclass.m"
            {
#line 713 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__ItemInstance_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 713 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_16));
#line 713 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_20));
#line 713 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_20));
#line 713 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_9));
#line 713 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_7));
#line 713 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 713 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 713 "prog_io_typeclass.m"
            }
#line 715 "prog_io_typeclass.m"
            {
#line 715 "prog_io_typeclass.m"
              MR_Word base;
#line 715 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 715 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = base;
#line 715 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstance_21));
#line 715 "prog_io_typeclass.m"
            }
#line 712 "prog_io_typeclass.m"
          }
#line 707 "prog_io_typeclass.m"
      }
#line 699 "prog_io_typeclass.m"
  }
#line 695 "prog_io_typeclass.m"
}

#line 436 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_name_6_p_0_1(
#line 436 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 436 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 436 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 436 "prog_io_typeclass.m"
{
#line 436 "prog_io_typeclass.m"
  {
#line 436 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 436 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 436 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_Constraint_3;

#line 436 "prog_io_typeclass.m"
    {
#line 436 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_Constraint_3);
    }
#line 436 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 436 "prog_io_typeclass.m"
      {
#line 436 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_Constraint_3));
#line 436 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 436 "prog_io_typeclass.m"
      }
#line 436 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 436 "prog_io_typeclass.m"
  }
#line 436 "prog_io_typeclass.m"
}

#line 640 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(
#line 640 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 640 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 640 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 640 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 640 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 640 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12)
#line 640 "prog_io_typeclass.m"
{
#line 648 "prog_io_typeclass.m"
  {
#line 648 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_8)) == (MR_mktag((MR_Integer) 0)));
#line 648 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_13;
#line 648 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Constraints_14;
#line 645 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_16_16;
#line 645 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_17_17;
#line 645 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 645 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_19_19;
#line 645 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_20_20;
#line 645 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_15_15;

#line 645 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 645 "prog_io_typeclass.m"
      {
#line 645 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 0)));
#line 645 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 1)));
#line 645 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 2)));
#line 645 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 645 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 645 "prog_io_typeclass.m"
          {
#line 645 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_16_16, (MR_Integer) 0)));
#line 645 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_17_17, (MR_String) "<=") == 0);
#line 645 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 645 "prog_io_typeclass.m"
              {
#line 645 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 645 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 645 "prog_io_typeclass.m"
                  {
#line 645 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 0)));
#line 645 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 1)));
#line 645 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 645 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 645 "prog_io_typeclass.m"
                      {
#line 645 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 0)));
#line 645 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 1)));
#line 645 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "prog_io_typeclass.m"
                      }
#line 645 "prog_io_typeclass.m"
                  }
#line 645 "prog_io_typeclass.m"
              }
#line 645 "prog_io_typeclass.m"
          }
#line 645 "prog_io_typeclass.m"
      }
#line 648 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 658 "prog_io_typeclass.m"
      {
#line 658 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__VarSet_28;
#line 658 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Result0_65;
#line 658 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ConstraintList_90;

#line 659 "prog_io_typeclass.m"
        {
#line 659 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__TVarSet_9, &parse_tree__prog_io_typeclass__VarSet_28);
        }
#line 523 "prog_io_typeclass.m"
        {
#line 523 "prog_io_typeclass.m"
          parse_tree__prog_io_util__conjunction_to_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Constraints_14, &parse_tree__prog_io_typeclass__ConstraintList_90);
        }
#line 524 "prog_io_typeclass.m"
        {
#line 524 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0(parse_tree__prog_io_typeclass__VarSet_28, parse_tree__prog_io_typeclass__ConstraintList_90, &parse_tree__prog_io_typeclass__Result0_65);
        }
#line 5508 "parse_tree.prog_io_typeclass.c"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_65)) == (MR_mktag((MR_Integer) 0))))
#line 5510 "parse_tree.prog_io_typeclass.c"
          {
#line 5512 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__MaybeParsedConstraints_29 = (MR_Word) parse_tree__prog_io_typeclass__Result0_65;

#line 683 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedConstraints_29;
#line 5517 "parse_tree.prog_io_typeclass.c"
          }
#line 5519 "parse_tree.prog_io_typeclass.c"
        else
#line 5521 "parse_tree.prog_io_typeclass.c"
          {
#line 5523 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__ArbitraryConstraints_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_65, (MR_Integer) 0)));
#line 5525 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__Constraints_67;

#line 436 "prog_io_typeclass.m"
            {
#line 436 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = mercury__list__map_3_p_2((MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[5], parse_tree__prog_io_typeclass__ArbitraryConstraints_66, &parse_tree__prog_io_typeclass__Constraints_67);
            }
#line 5533 "parse_tree.prog_io_typeclass.c"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 5535 "parse_tree.prog_io_typeclass.c"
              {
#line 5537 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__MaybeItemInstance0_31;

#line 664 "prog_io_typeclass.m"
                {
#line 664 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_13, parse_tree__prog_io_typeclass__TVarSet_9, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, &parse_tree__prog_io_typeclass__MaybeItemInstance0_31);
                }
#line 669 "prog_io_typeclass.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemInstance0_31)) == (MR_mktag((MR_Integer) 0))))
#line 668 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = parse_tree__prog_io_typeclass__MaybeItemInstance0_31;
#line 669 "prog_io_typeclass.m"
                else
#line 670 "prog_io_typeclass.m"
                  {
#line 670 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__ItemInstance0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstance0_31, (MR_Integer) 0)));
#line 670 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Name_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 0)));
#line 670 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Types_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 1)));
#line 670 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__OriginalTypes_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 2)));
#line 670 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Body_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 4)));
#line 670 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__InstanceVarSet_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 5)));
#line 670 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__ModName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 6)));
#line 670 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__InstanceContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 7)));
#line 670 "prog_io_typeclass.m"
                    MR_Integer parse_tree__prog_io_typeclass__ItemSeqNum_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 8)));
#line 670 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__ItemInstance_43;
#line 671 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass___ConstraintList0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 3)));

#line 676 "prog_io_typeclass.m"
                    {
#line 676 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__ItemInstance_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 676 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Name_34));
#line 676 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_35));
#line 676 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__OriginalTypes_36));
#line 676 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_67));
#line 676 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__Body_38));
#line 676 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceVarSet_39));
#line 676 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModName_40));
#line 676 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceContext_41));
#line 676 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemSeqNum_42));
#line 676 "prog_io_typeclass.m"
                    }
#line 679 "prog_io_typeclass.m"
                    {
#line 679 "prog_io_typeclass.m"
                      MR_Word base;
#line 679 "prog_io_typeclass.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 679 "prog_io_typeclass.m"
                      *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = base;
#line 679 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstance_43));
#line 679 "prog_io_typeclass.m"
                    }
#line 670 "prog_io_typeclass.m"
                  }
#line 5614 "parse_tree.prog_io_typeclass.c"
              }
#line 5616 "parse_tree.prog_io_typeclass.c"
            else
#line 5618 "parse_tree.prog_io_typeclass.c"
              {
#line 5620 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__Spec_68;
#line 5622 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__V_73_73;
#line 5624 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__V_74_74;
#line 5626 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__V_75_75;
#line 5628 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__V_80_80;
#line 5630 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__MaybeParsedConstraints_93;

#line 441 "prog_io_typeclass.m"
                {
#line 441 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_75_75 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Constraints_14);
                }
#line 441 "prog_io_typeclass.m"
                {
#line 441 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_75_75));
#line 441 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[79])));
#line 441 "prog_io_typeclass.m"
                }
#line 442 "prog_io_typeclass.m"
                {
#line 442 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_74_74));
#line 442 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 442 "prog_io_typeclass.m"
                }
#line 440 "prog_io_typeclass.m"
                {
#line 440 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 440 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 440 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_68, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_73_73));
#line 440 "prog_io_typeclass.m"
                }
#line 443 "prog_io_typeclass.m"
                {
#line 443 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_68));
#line 443 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "prog_io_typeclass.m"
                }
#line 443 "prog_io_typeclass.m"
                {
#line 443 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MaybeParsedConstraints_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 443 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedConstraints_93, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_80_80));
#line 443 "prog_io_typeclass.m"
                }
#line 683 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedConstraints_93;
#line 5690 "parse_tree.prog_io_typeclass.c"
              }
#line 5692 "parse_tree.prog_io_typeclass.c"
          }
#line 658 "prog_io_typeclass.m"
      }
#line 648 "prog_io_typeclass.m"
    else
#line 649 "prog_io_typeclass.m"
      {
#line 649 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Arg_8, parse_tree__prog_io_typeclass__TVarSet_9, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemInstance_12);
#line 649 "prog_io_typeclass.m"
        return;
      }
#line 648 "prog_io_typeclass.m"
  }
#line 640 "prog_io_typeclass.m"
}

#line 592 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_fundep_2_p_0(
#line 592 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_3,
#line 592 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_4)
#line 592 "prog_io_typeclass.m"
{
#line 594 "prog_io_typeclass.m"
  {
#line 594 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 594 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__DomainTerm_5;
#line 594 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__RangeTerm_6;
#line 594 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_12_12;
#line 594 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_13_13;
#line 594 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_14_14;
#line 594 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_15_15;
#line 594 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_16_16;
#line 595 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_7_7;
#line 601 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Domain_8;
#line 601 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Range_9;
#line 597 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_7_46;
#line 597 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_8_47;
#line 597 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_7_52;
#line 597 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_8_53;
#line 597 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeTerm_44;
#line 597 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__List_45;
#line 597 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeTerm_50;
#line 597 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__List_51;

#line 595 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 595 "prog_io_typeclass.m"
      {
#line 595 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_3, (MR_Integer) 0)));
#line 595 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_3, (MR_Integer) 1)));
#line 595 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_3, (MR_Integer) 2)));
#line 595 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 595 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 595 "prog_io_typeclass.m"
          {
#line 595 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_12_12, (MR_Integer) 0)));
#line 595 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_13_13, (MR_String) "->") == 0);
#line 594 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 594 "prog_io_typeclass.m"
              {
#line 595 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 595 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 595 "prog_io_typeclass.m"
                  {
#line 595 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__DomainTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_14_14, (MR_Integer) 0)));
#line 595 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_14_14, (MR_Integer) 1)));
#line 595 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 595 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 595 "prog_io_typeclass.m"
                      {
#line 595 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__RangeTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_15_15, (MR_Integer) 0)));
#line 595 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_15_15, (MR_Integer) 1)));
#line 595 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 594 "prog_io_typeclass.m"
                          {
#line 5810 "parse_tree.prog_io_typeclass.c"
                            parse_tree__prog_io_typeclass__TypeCtorInfo_7_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 5812 "parse_tree.prog_io_typeclass.c"
                            parse_tree__prog_io_typeclass__TypeCtorInfo_8_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 613 "prog_io_typeclass.m"
                            {
#line 613 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__TypeTerm_44 = mercury__term__coerce_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_7_46, parse_tree__prog_io_typeclass__TypeCtorInfo_8_47, parse_tree__prog_io_typeclass__DomainTerm_5);
                            }
#line 614 "prog_io_typeclass.m"
                            {
#line 614 "prog_io_typeclass.m"
                              parse_tree__prog_io_util__conjunction_to_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_47, parse_tree__prog_io_typeclass__TypeTerm_44, &parse_tree__prog_io_typeclass__List_45);
                            }
#line 615 "prog_io_typeclass.m"
                            {
#line 615 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_47, parse_tree__prog_io_typeclass__List_45, &parse_tree__prog_io_typeclass__Domain_8);
                            }
#line 597 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 597 "prog_io_typeclass.m"
                              {
#line 5833 "parse_tree.prog_io_typeclass.c"
                                parse_tree__prog_io_typeclass__TypeCtorInfo_7_52 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 5835 "parse_tree.prog_io_typeclass.c"
                                parse_tree__prog_io_typeclass__TypeCtorInfo_8_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 613 "prog_io_typeclass.m"
                                {
#line 613 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__TypeTerm_50 = mercury__term__coerce_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_7_52, parse_tree__prog_io_typeclass__TypeCtorInfo_8_53, parse_tree__prog_io_typeclass__RangeTerm_6);
                                }
#line 614 "prog_io_typeclass.m"
                                {
#line 614 "prog_io_typeclass.m"
                                  parse_tree__prog_io_util__conjunction_to_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_53, parse_tree__prog_io_typeclass__TypeTerm_50, &parse_tree__prog_io_typeclass__List_51);
                                }
#line 615 "prog_io_typeclass.m"
                                {
#line 615 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_53, parse_tree__prog_io_typeclass__List_51, &parse_tree__prog_io_typeclass__Range_9);
                                }
#line 597 "prog_io_typeclass.m"
                              }
#line 601 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 600 "prog_io_typeclass.m"
                              {
#line 600 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_17_17;
#line 600 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_18_18;

#line 600 "prog_io_typeclass.m"
                                {
#line 600 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 600 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Domain_8));
#line 600 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Range_9));
#line 600 "prog_io_typeclass.m"
                                }
#line 600 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_17_17 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_typeclass__V_18_18);
#line 600 "prog_io_typeclass.m"
                                {
#line 600 "prog_io_typeclass.m"
                                  MR_Word base;
#line 600 "prog_io_typeclass.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 600 "prog_io_typeclass.m"
                                  *parse_tree__prog_io_typeclass__Result_4 = base;
#line 600 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_17_17));
#line 600 "prog_io_typeclass.m"
                                }
#line 600 "prog_io_typeclass.m"
                              }
#line 601 "prog_io_typeclass.m"
                            else
#line 604 "prog_io_typeclass.m"
                              {
#line 604 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__Spec_11;
#line 604 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_32_32;
#line 604 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_33_33;
#line 604 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_34_34;
#line 604 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_39_39;

#line 606 "prog_io_typeclass.m"
                                {
#line 606 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_34_34 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Term_3);
                                }
#line 606 "prog_io_typeclass.m"
                                {
#line 606 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 606 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_34_34));
#line 606 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[78])));
#line 606 "prog_io_typeclass.m"
                                }
#line 606 "prog_io_typeclass.m"
                                {
#line 606 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_33_33));
#line 606 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "prog_io_typeclass.m"
                                }
#line 605 "prog_io_typeclass.m"
                                {
#line 605 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 605 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 605 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_32_32));
#line 605 "prog_io_typeclass.m"
                                }
#line 607 "prog_io_typeclass.m"
                                {
#line 607 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_11));
#line 607 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 607 "prog_io_typeclass.m"
                                }
#line 607 "prog_io_typeclass.m"
                                {
#line 607 "prog_io_typeclass.m"
                                  MR_Word base;
#line 607 "prog_io_typeclass.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 607 "prog_io_typeclass.m"
                                  *parse_tree__prog_io_typeclass__Result_4 = base;
#line 607 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_39_39));
#line 607 "prog_io_typeclass.m"
                                }
#line 604 "prog_io_typeclass.m"
                              }
#line 601 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 594 "prog_io_typeclass.m"
                          }
#line 595 "prog_io_typeclass.m"
                      }
#line 595 "prog_io_typeclass.m"
                  }
#line 594 "prog_io_typeclass.m"
              }
#line 595 "prog_io_typeclass.m"
          }
#line 595 "prog_io_typeclass.m"
      }
#line 594 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 594 "prog_io_typeclass.m"
  }
#line 592 "prog_io_typeclass.m"
}

#line 621 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_1(
#line 621 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 621 "prog_io_typeclass.m"
{
#line 621 "prog_io_typeclass.m"
  {
#line 621 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 621 "prog_io_typeclass.m"
    MR_builtin_longjmp((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__commit_0, 1);
#line 621 "prog_io_typeclass.m"
  }
#line 621 "prog_io_typeclass.m"
}

#line 621 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_3(
#line 621 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 621 "prog_io_typeclass.m"
{
#line 621 "prog_io_typeclass.m"
  {
#line 621 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 621 "prog_io_typeclass.m"
    (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__ArgType_70 = ((MR_Word) (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__conv0_ArgType_70);
#line 621 "prog_io_typeclass.m"
    {
#line 621 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_2(parse_tree__prog_io_typeclass__env_ptr);
#line 621 "prog_io_typeclass.m"
      return;
    }
#line 621 "prog_io_typeclass.m"
  }
#line 621 "prog_io_typeclass.m"
}

#line 621 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_2(
#line 621 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 621 "prog_io_typeclass.m"
{
#line 621 "prog_io_typeclass.m"
  {
#line 621 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 622 "prog_io_typeclass.m"
    {
#line 622 "prog_io_typeclass.m"
      (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = parse_tree__prog_type__type_is_nonvar_1_p_0((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__ArgType_70);
    }
#line 621 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 621 "prog_io_typeclass.m"
      {
#line 623 "prog_io_typeclass.m"
        {
#line 623 "prog_io_typeclass.m"
          (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = parse_tree__prog_type__type_is_nonground_1_p_0((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__ArgType_70);
        }
#line 623 "prog_io_typeclass.m"
        if ((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 623 "prog_io_typeclass.m"
          {
#line 623 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_1(parse_tree__prog_io_typeclass__env_ptr);
#line 623 "prog_io_typeclass.m"
            return;
          }
#line 621 "prog_io_typeclass.m"
      }
#line 621 "prog_io_typeclass.m"
  }
#line 621 "prog_io_typeclass.m"
}

#line 621 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_4(
#line 621 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 621 "prog_io_typeclass.m"
{
#line 621 "prog_io_typeclass.m"
  {
#line 621 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 621 "prog_io_typeclass.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__commit_0) == 0)
#line 621 "prog_io_typeclass.m"
      {
#line 621 "prog_io_typeclass.m"
        {
#line 621 "prog_io_typeclass.m"
          {
#line 621 "prog_io_typeclass.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &(parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__conv0_ArgType_70, (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__ArgTypes_68, parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_3, parse_tree__prog_io_typeclass__env_ptr);
          }
#line 621 "prog_io_typeclass.m"
        }
#line 621 "prog_io_typeclass.m"
        (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = MR_FALSE;
#line 621 "prog_io_typeclass.m"
      }
#line 621 "prog_io_typeclass.m"
    else
#line 621 "prog_io_typeclass.m"
      (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = MR_TRUE;
#line 621 "prog_io_typeclass.m"
  }
#line 621 "prog_io_typeclass.m"
}

#line 526 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0(
#line 526 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_1,
#line 526 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 526 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 526 "prog_io_typeclass.m"
{
#line 526 "prog_io_typeclass.m"
  {
#line 526 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s parse_tree__prog_io_typeclass__env;

#line 529 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "prog_io_typeclass.m"
      {
#line 529 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_4[4]);
#line 529 "prog_io_typeclass.m"
      }
#line 529 "prog_io_typeclass.m"
    else
#line 530 "prog_io_typeclass.m"
      {
#line 530 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 0)));
#line 530 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Terms_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 1)));
#line 530 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Result0_10;
#line 530 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Result1_11;
#line 553 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__InstVar_15;
#line 553 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Inst_16;
#line 586 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_18_65;
#line 586 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_19_66;
#line 586 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Arg1_54;
#line 586 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Arg2_55;
#line 586 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__InstVar0_57;
#line 586 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_59_59;
#line 586 "prog_io_typeclass.m"
        MR_String parse_tree__prog_io_typeclass__V_60_60;
#line 586 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_61_61;
#line 586 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_62_62;
#line 586 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_63_63;
#line 586 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_64_64;
#line 587 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_56_56;
#line 588 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_58_58;

#line 587 "prog_io_typeclass.m"
        (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 587 "prog_io_typeclass.m"
        if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 587 "prog_io_typeclass.m"
          {
#line 587 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_7, (MR_Integer) 0)));
#line 587 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_7, (MR_Integer) 1)));
#line 587 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_7, (MR_Integer) 2)));
#line 587 "prog_io_typeclass.m"
            (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_59_59)) == (MR_mktag((MR_Integer) 0)));
#line 587 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 587 "prog_io_typeclass.m"
              {
#line 587 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_59_59, (MR_Integer) 0)));
#line 587 "prog_io_typeclass.m"
                (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_60_60, (MR_String) "=<") == 0);
#line 586 "prog_io_typeclass.m"
                if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 586 "prog_io_typeclass.m"
                  {
#line 587 "prog_io_typeclass.m"
                    (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 587 "prog_io_typeclass.m"
                    if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 587 "prog_io_typeclass.m"
                      {
#line 587 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Arg1_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_61_61, (MR_Integer) 0)));
#line 587 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_61_61, (MR_Integer) 1)));
#line 587 "prog_io_typeclass.m"
                        (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 587 "prog_io_typeclass.m"
                        if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 587 "prog_io_typeclass.m"
                          {
#line 587 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__Arg2_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_62_62, (MR_Integer) 0)));
#line 587 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_62_62, (MR_Integer) 1)));
#line 587 "prog_io_typeclass.m"
                            (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = (parse_tree__prog_io_typeclass__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 586 "prog_io_typeclass.m"
                            if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 586 "prog_io_typeclass.m"
                              {
#line 588 "prog_io_typeclass.m"
                                (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg1_54)) == (MR_mktag((MR_Integer) 1)));
#line 588 "prog_io_typeclass.m"
                                if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 588 "prog_io_typeclass.m"
                                  {
#line 588 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__InstVar0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Arg1_54, (MR_Integer) 0)));
#line 588 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Arg1_54, (MR_Integer) 1)));
#line 6240 "parse_tree.prog_io_typeclass.c"
                                    parse_tree__prog_io_typeclass__TypeCtorInfo_18_65 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 6242 "parse_tree.prog_io_typeclass.c"
                                    parse_tree__prog_io_typeclass__TypeCtorInfo_19_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 589 "prog_io_typeclass.m"
                                    {
#line 589 "prog_io_typeclass.m"
                                      mercury__term__coerce_var_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_18_65, parse_tree__prog_io_typeclass__TypeCtorInfo_19_66, parse_tree__prog_io_typeclass__InstVar0_57, &parse_tree__prog_io_typeclass__InstVar_15);
                                    }
#line 590 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_64_64 = (MR_Integer) 1;
#line 590 "prog_io_typeclass.m"
                                    {
#line 590 "prog_io_typeclass.m"
                                      (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_typeclass__V_64_64, parse_tree__prog_io_typeclass__Arg2_55, &parse_tree__prog_io_typeclass__Inst_16);
                                    }
#line 588 "prog_io_typeclass.m"
                                  }
#line 586 "prog_io_typeclass.m"
                              }
#line 587 "prog_io_typeclass.m"
                          }
#line 587 "prog_io_typeclass.m"
                      }
#line 586 "prog_io_typeclass.m"
                  }
#line 587 "prog_io_typeclass.m"
              }
#line 587 "prog_io_typeclass.m"
          }
#line 553 "prog_io_typeclass.m"
        if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 552 "prog_io_typeclass.m"
          {
#line 552 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_27_27;

#line 552 "prog_io_typeclass.m"
            {
#line 552 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVar_15));
#line 552 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Inst_16));
#line 552 "prog_io_typeclass.m"
            }
#line 552 "prog_io_typeclass.m"
            {
#line 552 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Result0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 552 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_10, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_27_27));
#line 552 "prog_io_typeclass.m"
            }
#line 552 "prog_io_typeclass.m"
          }
#line 553 "prog_io_typeclass.m"
        else
#line 557 "prog_io_typeclass.m"
          {
#line 557 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Result0_17;

#line 554 "prog_io_typeclass.m"
            {
#line 554 "prog_io_typeclass.m"
              (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = parse_tree__prog_io_typeclass__parse_fundep_2_p_0(parse_tree__prog_io_typeclass__Term_7, &parse_tree__prog_io_typeclass__Result0_17);
            }
#line 557 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 556 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Result0_10 = parse_tree__prog_io_typeclass__Result0_17;
#line 557 "prog_io_typeclass.m"
            else
#line 575 "prog_io_typeclass.m"
              {
#line 575 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ClassName_18;
#line 575 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Args0_19;

#line 558 "prog_io_typeclass.m"
                {
#line 558 "prog_io_typeclass.m"
                  (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Term_7, &parse_tree__prog_io_typeclass__ClassName_18, &parse_tree__prog_io_typeclass__Args0_19);
                }
#line 575 "prog_io_typeclass.m"
                if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 561 "prog_io_typeclass.m"
                  {
#line 561 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__ArgsResult_21;

#line 562 "prog_io_typeclass.m"
                    {
#line 562 "prog_io_typeclass.m"
                      parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_typeclass__Args0_19, parse_tree__prog_io_typeclass__VarSet_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__ArgsResult_21);
                    }
#line 571 "prog_io_typeclass.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArgsResult_21)) == (MR_mktag((MR_Integer) 0))))
#line 573 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Result0_10 = (MR_Word) parse_tree__prog_io_typeclass__ArgsResult_21;
#line 571 "prog_io_typeclass.m"
                    else
#line 564 "prog_io_typeclass.m"
                      {
#line 564 "prog_io_typeclass.m"
                        MR_Word parse_tree__prog_io_typeclass__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArgsResult_21, (MR_Integer) 0)));
#line 564 "prog_io_typeclass.m"
                        MR_Word parse_tree__prog_io_typeclass__Constraint_23;
#line 619 "prog_io_typeclass.m"
                        MR_Word parse_tree__prog_io_typeclass___ClassName_67;

#line 565 "prog_io_typeclass.m"
                        {
#line 565 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__Constraint_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 565 "prog_io_typeclass.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_23, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_18));
#line 565 "prog_io_typeclass.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_23, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Args_22));
#line 565 "prog_io_typeclass.m"
                        }
#line 619 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass___ClassName_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_23, (MR_Integer) 0)));
#line 619 "prog_io_typeclass.m"
                        (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__ArgTypes_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_23, (MR_Integer) 1)));
#line 621 "prog_io_typeclass.m"
                        {
#line 621 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_4(&parse_tree__prog_io_typeclass__env);
                        }
#line 568 "prog_io_typeclass.m"
                        if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 567 "prog_io_typeclass.m"
                          {
#line 567 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_typeclass__Constraint_23);

#line 567 "prog_io_typeclass.m"
                            {
#line 567 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__Result0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 567 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_10, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_28_28));
#line 567 "prog_io_typeclass.m"
                            }
#line 567 "prog_io_typeclass.m"
                          }
#line 568 "prog_io_typeclass.m"
                        else
#line 569 "prog_io_typeclass.m"
                          {
#line 569 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_typeclass__Constraint_23);

#line 569 "prog_io_typeclass.m"
                            {
#line 569 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__Result0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 569 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_10, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_29_29));
#line 569 "prog_io_typeclass.m"
                            }
#line 569 "prog_io_typeclass.m"
                          }
#line 564 "prog_io_typeclass.m"
                      }
#line 561 "prog_io_typeclass.m"
                  }
#line 575 "prog_io_typeclass.m"
                else
#line 577 "prog_io_typeclass.m"
                  {
#line 577 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Spec_26;
#line 577 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_40_40;
#line 577 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_41_41;
#line 577 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_42_42;
#line 577 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_47_47;

#line 579 "prog_io_typeclass.m"
                    {
#line 579 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Term_7);
                    }
#line 579 "prog_io_typeclass.m"
                    {
#line 579 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 579 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_42_42));
#line 579 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[77])));
#line 579 "prog_io_typeclass.m"
                    }
#line 579 "prog_io_typeclass.m"
                    {
#line 579 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_41_41));
#line 579 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 579 "prog_io_typeclass.m"
                    }
#line 578 "prog_io_typeclass.m"
                    {
#line 578 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 578 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 578 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_40_40));
#line 578 "prog_io_typeclass.m"
                    }
#line 580 "prog_io_typeclass.m"
                    {
#line 580 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_26));
#line 580 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "prog_io_typeclass.m"
                    }
#line 580 "prog_io_typeclass.m"
                    {
#line 580 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Result0_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 580 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result0_10, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_47_47));
#line 580 "prog_io_typeclass.m"
                    }
#line 577 "prog_io_typeclass.m"
                  }
#line 575 "prog_io_typeclass.m"
              }
#line 557 "prog_io_typeclass.m"
          }
#line 532 "prog_io_typeclass.m"
        {
#line 532 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0(parse_tree__prog_io_typeclass__VarSet_1, parse_tree__prog_io_typeclass__Terms_8, &parse_tree__prog_io_typeclass__Result1_11);
        }
#line 538 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_10)) == (MR_mktag((MR_Integer) 0))))
#line 538 "prog_io_typeclass.m"
          {
#line 538 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result0_10, (MR_Integer) 0)));

#line 538 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result1_11)) == (MR_mktag((MR_Integer) 0))))
#line 538 "prog_io_typeclass.m"
              {
#line 538 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TailSpecs_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result1_11, (MR_Integer) 0)));
#line 538 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_74_74;

#line 539 "prog_io_typeclass.m"
                {
#line 539 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_74_74 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_typeclass__V_83_83, parse_tree__prog_io_typeclass__TailSpecs_73);
                }
#line 539 "prog_io_typeclass.m"
                {
#line 539 "prog_io_typeclass.m"
                  MR_Word base;
#line 539 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 539 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 539 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_74_74));
#line 539 "prog_io_typeclass.m"
                }
#line 538 "prog_io_typeclass.m"
              }
#line 538 "prog_io_typeclass.m"
            else
#line 540 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_typeclass__Result0_10;
#line 538 "prog_io_typeclass.m"
          }
#line 538 "prog_io_typeclass.m"
        else
#line 538 "prog_io_typeclass.m"
          {
#line 538 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_10, (MR_Integer) 0)));

#line 538 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result1_11)) == (MR_mktag((MR_Integer) 0))))
#line 541 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__Result1_11;
#line 538 "prog_io_typeclass.m"
            else
#line 542 "prog_io_typeclass.m"
              {
#line 542 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Constraints_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result1_11, (MR_Integer) 0)));
#line 542 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_81_81;

#line 543 "prog_io_typeclass.m"
                {
#line 543 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_84_84));
#line 543 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_81_81, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_80));
#line 543 "prog_io_typeclass.m"
                }
#line 543 "prog_io_typeclass.m"
                {
#line 543 "prog_io_typeclass.m"
                  MR_Word base;
#line 543 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 543 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_81_81));
#line 543 "prog_io_typeclass.m"
                }
#line 542 "prog_io_typeclass.m"
              }
#line 538 "prog_io_typeclass.m"
          }
#line 530 "prog_io_typeclass.m"
      }
#line 526 "prog_io_typeclass.m"
  }
#line 526 "prog_io_typeclass.m"
}

#line 478 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(
#line 478 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 478 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 478 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 478 "prog_io_typeclass.m"
{
#line 481 "prog_io_typeclass.m"
  {
#line 481 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 481 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "prog_io_typeclass.m"
      {
#line 481 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 481 "prog_io_typeclass.m"
        {
#line 481 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__HeadVar__3_3 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        }
#line 481 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 481 "prog_io_typeclass.m"
      }
#line 481 "prog_io_typeclass.m"
    else
#line 483 "prog_io_typeclass.m"
      {
#line 483 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraint_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 483 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 483 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ProgConstraints0_8;
#line 483 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__InstVarSub0_9;

#line 484 "prog_io_typeclass.m"
        {
#line 484 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(parse_tree__prog_io_typeclass__Constraints_5, &parse_tree__prog_io_typeclass__ProgConstraints0_8, &parse_tree__prog_io_typeclass__InstVarSub0_9);
        }
#line 483 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 490 "prog_io_typeclass.m"
          {
#line 490 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 3))))
#line 495 "prog_io_typeclass.m"
              {
#line 495 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Constraint_4, (MR_Integer) 0)));
#line 495 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Inst_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Constraint_4, (MR_Integer) 1)));

#line 496 "prog_io_typeclass.m"
                {
#line 496 "prog_io_typeclass.m"
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (parse_tree__prog_io_typeclass__InstVar_12)), ((MR_Box) (parse_tree__prog_io_typeclass__Inst_13)), parse_tree__prog_io_typeclass__InstVarSub0_9, parse_tree__prog_io_typeclass__HeadVar__3_3);
                }
#line 497 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__2_2 = parse_tree__prog_io_typeclass__ProgConstraints0_8;
#line 495 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 495 "prog_io_typeclass.m"
              }
#line 490 "prog_io_typeclass.m"
            else
#line 490 "prog_io_typeclass.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 1))))
#line 491 "prog_io_typeclass.m"
                {
#line 491 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__ClassConstraint_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 1);

#line 492 "prog_io_typeclass.m"
                  {
#line 492 "prog_io_typeclass.m"
                    MR_Word base;
#line 492 "prog_io_typeclass.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__HeadVar__2_2 = base;
#line 492 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassConstraint_11));
#line 492 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ProgConstraints0_8));
#line 492 "prog_io_typeclass.m"
                  }
#line 493 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__InstVarSub0_9;
#line 491 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 491 "prog_io_typeclass.m"
                }
#line 490 "prog_io_typeclass.m"
              else
#line 490 "prog_io_typeclass.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 0))))
#line 487 "prog_io_typeclass.m"
                  {
#line 487 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__SimpleConstraint_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 0);

#line 488 "prog_io_typeclass.m"
                    {
#line 488 "prog_io_typeclass.m"
                      MR_Word base;
#line 488 "prog_io_typeclass.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "prog_io_typeclass.m"
                      *parse_tree__prog_io_typeclass__HeadVar__2_2 = base;
#line 488 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraint_10));
#line 488 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ProgConstraints0_8));
#line 488 "prog_io_typeclass.m"
                    }
#line 489 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__InstVarSub0_9;
#line 487 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 487 "prog_io_typeclass.m"
                  }
#line 490 "prog_io_typeclass.m"
                else
#line 490 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = MR_FALSE;
#line 490 "prog_io_typeclass.m"
          }
#line 483 "prog_io_typeclass.m"
      }
#line 481 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 481 "prog_io_typeclass.m"
  }
#line 478 "prog_io_typeclass.m"
}

#line 450 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(
#line 450 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 450 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Constraint_3)
#line 450 "prog_io_typeclass.m"
{
#line 453 "prog_io_typeclass.m"
  {
#line 453 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));

#line 453 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 453 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__Constraint_3 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 0);
#line 453 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 453 "prog_io_typeclass.m"
  }
#line 450 "prog_io_typeclass.m"
}

#line 357 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__item_to_class_method_3_p_0(
#line 357 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 357 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_2,
#line 357 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 357 "prog_io_typeclass.m"
{
#line 360 "prog_io_typeclass.m"
  {
#line 360 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 360 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 360 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 360 "prog_io_typeclass.m"
    else
#line 361 "prog_io_typeclass.m"
      {
#line 361 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Item_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 370 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ItemPredDecl_9;

#line 362 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Item_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 362 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 362 "prog_io_typeclass.m"
          {
#line 362 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__ItemPredDecl_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 1)));
#line 365 "prog_io_typeclass.m"
            {
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 0)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__PorF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 1)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__ArgDecls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 2)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__WithType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 3)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__WithInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 4)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__MaybeDetism_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 5)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__TypeVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 7)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__InstVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 8)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 9)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Purity_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 10)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Constraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 11)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 12)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__ClassMethod_24;
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass___Origin_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 6)));
#line 363 "prog_io_typeclass.m"
              MR_Integer parse_tree__prog_io_typeclass___SeqNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 13)));

#line 366 "prog_io_typeclass.m"
              {
#line 366 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__ClassMethod_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Name_10));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__PorF_11));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__ArgDecls_12));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__WithType_13));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__WithInst_14));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__MaybeDetism_15));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__TypeVarSet_17));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVarSet_18));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__ExistQVars_19));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 9) = ((MR_Box) (parse_tree__prog_io_typeclass__Purity_20));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 10) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_21));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 11) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_22));
#line 366 "prog_io_typeclass.m"
              }
#line 369 "prog_io_typeclass.m"
              {
#line 369 "prog_io_typeclass.m"
                MR_Word base;
#line 369 "prog_io_typeclass.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 369 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 369 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassMethod_24));
#line 369 "prog_io_typeclass.m"
              }
#line 365 "prog_io_typeclass.m"
            }
#line 362 "prog_io_typeclass.m"
          }
#line 362 "prog_io_typeclass.m"
        else
#line 376 "prog_io_typeclass.m"
          {
#line 376 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemModeDecl_25;

#line 370 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Item_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 370 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 370 "prog_io_typeclass.m"
              {
#line 370 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__ItemModeDecl_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 1)));
#line 372 "prog_io_typeclass.m"
                {
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__MaybePorF_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 1)));
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__ArgModes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 2)));
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__Name_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 0)));
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__WithInst_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 3)));
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__MaybeDetism_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 4)));
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__InstVarSet_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 5)));
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__Context_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 6)));
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__ClassMethod_56;
#line 371 "prog_io_typeclass.m"
                  MR_Integer parse_tree__prog_io_typeclass___SeqNum_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 7)));

#line 373 "prog_io_typeclass.m"
                  {
#line 373 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ClassMethod_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Name_50));
#line 373 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MaybePorF_26));
#line 373 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__ArgModes_27));
#line 373 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__WithInst_51));
#line 373 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__MaybeDetism_52));
#line 373 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVarSet_53));
#line 373 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_54));
#line 373 "prog_io_typeclass.m"
                  }
#line 375 "prog_io_typeclass.m"
                  {
#line 375 "prog_io_typeclass.m"
                    MR_Word base;
#line 375 "prog_io_typeclass.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 375 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 375 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassMethod_56));
#line 375 "prog_io_typeclass.m"
                  }
#line 372 "prog_io_typeclass.m"
                }
#line 370 "prog_io_typeclass.m"
              }
#line 370 "prog_io_typeclass.m"
            else
#line 378 "prog_io_typeclass.m"
              {
#line 378 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_29;
#line 378 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_40_40;
#line 378 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_41_41;
#line 378 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_42_42;
#line 378 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_47_47;

#line 380 "prog_io_typeclass.m"
                {
#line 380 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Term_2);
                }
#line 380 "prog_io_typeclass.m"
                {
#line 380 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_42_42));
#line 380 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[76])));
#line 380 "prog_io_typeclass.m"
                }
#line 380 "prog_io_typeclass.m"
                {
#line 380 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_41_41));
#line 380 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "prog_io_typeclass.m"
                }
#line 379 "prog_io_typeclass.m"
                {
#line 379 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 379 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 379 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_29, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_40_40));
#line 379 "prog_io_typeclass.m"
                }
#line 381 "prog_io_typeclass.m"
                {
#line 381 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_29));
#line 381 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "prog_io_typeclass.m"
                }
#line 381 "prog_io_typeclass.m"
                {
#line 381 "prog_io_typeclass.m"
                  MR_Word base;
#line 381 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 381 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 381 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_47_47));
#line 381 "prog_io_typeclass.m"
                }
#line 378 "prog_io_typeclass.m"
              }
#line 376 "prog_io_typeclass.m"
          }
#line 361 "prog_io_typeclass.m"
      }
#line 360 "prog_io_typeclass.m"
  }
#line 357 "prog_io_typeclass.m"
}

#line 310 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0_1(
#line 310 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 310 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 310 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 310 "prog_io_typeclass.m"
{
#line 310 "prog_io_typeclass.m"
  {
#line 310 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 310 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__2_55;

#line 310 "prog_io_typeclass.m"
    {
#line 310 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__310__1_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_HeadVar__2_55);
    }
#line 310 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__2_55));
#line 310 "prog_io_typeclass.m"
  }
#line 310 "prog_io_typeclass.m"
}

#line 299 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(
#line 299 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 299 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 299 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 299 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 299 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 299 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12)
#line 299 "prog_io_typeclass.m"
{
#line 303 "prog_io_typeclass.m"
  {
#line 303 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 303 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 303 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_53_53 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 303 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__VarSet_14;
#line 303 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeClassName_15;

#line 305 "prog_io_typeclass.m"
    {
#line 305 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_52_52, parse_tree__prog_io_typeclass__TypeCtorInfo_53_53, parse_tree__prog_io_typeclass__TVarSet_9, &parse_tree__prog_io_typeclass__VarSet_14);
    }
#line 306 "prog_io_typeclass.m"
    {
#line 306 "prog_io_typeclass.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_53, parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__NameTerm_8, parse_tree__prog_io_typeclass__VarSet_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[56]), &parse_tree__prog_io_typeclass__MaybeClassName_15);
    }
#line 329 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_15)) == (MR_mktag((MR_Integer) 0))))
#line 330 "prog_io_typeclass.m"
      {
#line 330 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));

#line 331 "prog_io_typeclass.m"
        {
#line 331 "prog_io_typeclass.m"
          MR_Word base;
#line 331 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 331 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 331 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_24));
#line 331 "prog_io_typeclass.m"
        }
#line 330 "prog_io_typeclass.m"
      }
#line 329 "prog_io_typeclass.m"
    else
#line 309 "prog_io_typeclass.m"
      {
#line 309 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeInfo_59_59 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[3];
#line 309 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));
#line 309 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TermVars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 1)));
#line 309 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TermVars_18;
#line 321 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Vars_19;
#line 312 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SortedTermVars_20;
#line 312 "prog_io_typeclass.m"
        MR_Integer parse_tree__prog_io_typeclass__V_29_29;
#line 312 "prog_io_typeclass.m"
        MR_Integer parse_tree__prog_io_typeclass__V_60_60;

#line 310 "prog_io_typeclass.m"
        {
#line 310 "prog_io_typeclass.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], parse_tree__prog_io_typeclass__TypeInfo_59_59, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[4], parse_tree__prog_io_typeclass__TermVars0_17, &parse_tree__prog_io_typeclass__TermVars_18);
        }
#line 312 "prog_io_typeclass.m"
        {
#line 312 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_52_52, parse_tree__prog_io_typeclass__TermVars_18, &parse_tree__prog_io_typeclass__Vars_19);
        }
#line 312 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 312 "prog_io_typeclass.m"
          {
#line 313 "prog_io_typeclass.m"
            {
#line 313 "prog_io_typeclass.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_59_59, parse_tree__prog_io_typeclass__TermVars_18, &parse_tree__prog_io_typeclass__SortedTermVars_20);
            }
#line 314 "prog_io_typeclass.m"
            {
#line 314 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_29_29 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_59_59, parse_tree__prog_io_typeclass__SortedTermVars_20);
            }
#line 314 "prog_io_typeclass.m"
            {
#line 314 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_60_60 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_59_59, parse_tree__prog_io_typeclass__TermVars_18);
            }
#line 314 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_29_29 == parse_tree__prog_io_typeclass__V_60_60);
#line 312 "prog_io_typeclass.m"
          }
#line 321 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 319 "prog_io_typeclass.m"
          {
#line 319 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeClassInfo_21;

#line 318 "prog_io_typeclass.m"
            {
#line 318 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__TypeClassInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_16));
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Vars_19));
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_9));
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 318 "prog_io_typeclass.m"
            }
#line 320 "prog_io_typeclass.m"
            {
#line 320 "prog_io_typeclass.m"
              MR_Word base;
#line 320 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 320 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 320 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__TypeClassInfo_21));
#line 320 "prog_io_typeclass.m"
            }
#line 319 "prog_io_typeclass.m"
          }
#line 321 "prog_io_typeclass.m"
        else
#line 323 "prog_io_typeclass.m"
          {
#line 323 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_23;
#line 323 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_43_43;
#line 323 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_44_44;
#line 323 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_45_45;
#line 323 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_50_50;

#line 326 "prog_io_typeclass.m"
            {
#line 326 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_45_45 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_53, parse_tree__prog_io_typeclass__NameTerm_8);
            }
#line 326 "prog_io_typeclass.m"
            {
#line 326 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_45_45));
#line 326 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[57])));
#line 326 "prog_io_typeclass.m"
            }
#line 326 "prog_io_typeclass.m"
            {
#line 326 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_44_44));
#line 326 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "prog_io_typeclass.m"
            }
#line 325 "prog_io_typeclass.m"
            {
#line 325 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 325 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 325 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_43_43));
#line 325 "prog_io_typeclass.m"
            }
#line 327 "prog_io_typeclass.m"
            {
#line 327 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_23));
#line 327 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 327 "prog_io_typeclass.m"
            }
#line 327 "prog_io_typeclass.m"
            {
#line 327 "prog_io_typeclass.m"
              MR_Word base;
#line 327 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 327 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 327 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_50_50));
#line 327 "prog_io_typeclass.m"
            }
#line 323 "prog_io_typeclass.m"
          }
#line 309 "prog_io_typeclass.m"
      }
#line 303 "prog_io_typeclass.m"
  }
#line 299 "prog_io_typeclass.m"
}

#line 281 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(
#line 281 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 281 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 281 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 281 "prog_io_typeclass.m"
{
#line 284 "prog_io_typeclass.m"
  {
#line 284 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 284 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "prog_io_typeclass.m"
      {
#line 284 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 284 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 284 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 284 "prog_io_typeclass.m"
      }
#line 284 "prog_io_typeclass.m"
    else
#line 286 "prog_io_typeclass.m"
      {
#line 286 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraint_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 286 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SimpleConstraints0_8;
#line 286 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps0_9;

#line 287 "prog_io_typeclass.m"
        {
#line 287 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(parse_tree__prog_io_typeclass__Constraints_5, &parse_tree__prog_io_typeclass__SimpleConstraints0_8, &parse_tree__prog_io_typeclass__FunDeps0_9);
        }
#line 286 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 293 "prog_io_typeclass.m"
          {
#line 293 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 2))))
#line 294 "prog_io_typeclass.m"
              {
#line 294 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDep_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 2);

#line 295 "prog_io_typeclass.m"
                {
#line 295 "prog_io_typeclass.m"
                  MR_Word base;
#line 295 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 295 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDep_11));
#line 295 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps0_9));
#line 295 "prog_io_typeclass.m"
                }
#line 296 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__2_2 = parse_tree__prog_io_typeclass__SimpleConstraints0_8;
#line 294 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 294 "prog_io_typeclass.m"
              }
#line 293 "prog_io_typeclass.m"
            else
#line 293 "prog_io_typeclass.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 0))))
#line 290 "prog_io_typeclass.m"
                {
#line 290 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__SimpleConstraint_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 0);

#line 291 "prog_io_typeclass.m"
                  {
#line 291 "prog_io_typeclass.m"
                    MR_Word base;
#line 291 "prog_io_typeclass.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__HeadVar__2_2 = base;
#line 291 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraint_10));
#line 291 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraints0_8));
#line 291 "prog_io_typeclass.m"
                  }
#line 292 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__FunDeps0_9;
#line 290 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 290 "prog_io_typeclass.m"
                }
#line 293 "prog_io_typeclass.m"
              else
#line 293 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_FALSE;
#line 293 "prog_io_typeclass.m"
          }
#line 286 "prog_io_typeclass.m"
      }
#line 284 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 284 "prog_io_typeclass.m"
  }
#line 281 "prog_io_typeclass.m"
}

#line 251 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundep_1_f_0(
#line 251 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1)
#line 251 "prog_io_typeclass.m"
{
#line 253 "prog_io_typeclass.m"
  {
#line 253 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 253 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 253 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Domain_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 253 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Range_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));

#line 253 "prog_io_typeclass.m"
    {
#line 253 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__Domain_3, parse_tree__prog_io_typeclass__Range_4);
    }
#line 253 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 253 "prog_io_typeclass.m"
  }
#line 251 "prog_io_typeclass.m"
}

#line 249 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0_1(
#line 249 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 249 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 249 "prog_io_typeclass.m"
{
#line 249 "prog_io_typeclass.m"
  {
#line 249 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 249 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 249 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__2_2;

#line 249 "prog_io_typeclass.m"
    {
#line 249 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv0_HeadVar__2_2 = parse_tree__prog_io_typeclass__tvars_in_fundep_1_f_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 249 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__2_2));
#line 249 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 249 "prog_io_typeclass.m"
  }
#line 249 "prog_io_typeclass.m"
}

#line 247 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0(
#line 247 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__FunDeps_3)
#line 247 "prog_io_typeclass.m"
{
#line 249 "prog_io_typeclass.m"
  {
#line 249 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 249 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 249 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_4_4;

#line 249 "prog_io_typeclass.m"
    {
#line 249 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__V_4_4 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[3], parse_tree__prog_io_typeclass__FunDeps_3);
    }
#line 249 "prog_io_typeclass.m"
    {
#line 249 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__V_4_4);
    }
#line 249 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 249 "prog_io_typeclass.m"
  }
#line 247 "prog_io_typeclass.m"
}

#line 201 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_4(
#line 201 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 201 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 201 "prog_io_typeclass.m"
{
#line 201 "prog_io_typeclass.m"
  {
#line 201 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 201 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 201 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__conv1_HeadVar__4_163;

#line 201 "prog_io_typeclass.m"
    {
#line 201 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv1_HeadVar__4_163 = parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__201__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 201 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv1_HeadVar__4_163));
#line 201 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 201 "prog_io_typeclass.m"
  }
#line 201 "prog_io_typeclass.m"
}

#line 198 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_3(
#line 198 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 198 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 198 "prog_io_typeclass.m"
{
#line 198 "prog_io_typeclass.m"
  {
#line 198 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 198 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 198 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__conv0_HeadVar__4_160;

#line 198 "prog_io_typeclass.m"
    {
#line 198 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv0_HeadVar__4_160 = parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__198__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 198 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__4_160));
#line 198 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 198 "prog_io_typeclass.m"
  }
#line 198 "prog_io_typeclass.m"
}

#line 159 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_2(
#line 159 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 159 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 159 "prog_io_typeclass.m"
{
#line 159 "prog_io_typeclass.m"
  {
#line 159 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 159 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;

#line 159 "prog_io_typeclass.m"
    {
#line 159 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__159__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 159 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 159 "prog_io_typeclass.m"
  }
#line 159 "prog_io_typeclass.m"
}

#line 157 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_1(
#line 157 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 157 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 157 "prog_io_typeclass.m"
{
#line 157 "prog_io_typeclass.m"
  {
#line 157 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 157 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;

#line 157 "prog_io_typeclass.m"
    {
#line 157 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__157__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 157 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 157 "prog_io_typeclass.m"
  }
#line 157 "prog_io_typeclass.m"
}

#line 130 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Decl_9,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_10,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 130 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 130 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14)
#line 130 "prog_io_typeclass.m"
{
#line 135 "prog_io_typeclass.m"
  {
#line 135 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 135 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TVarSet_15;
#line 135 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeParsedConstraints_16;

#line 136 "prog_io_typeclass.m"
    {
#line 136 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_11, &parse_tree__prog_io_typeclass__TVarSet_15);
    }
#line 137 "prog_io_typeclass.m"
    {
#line 137 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_11, parse_tree__prog_io_typeclass__ConstraintsTerm_10, &parse_tree__prog_io_typeclass__MaybeParsedConstraints_16);
    }
#line 242 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeParsedConstraints_16)) == (MR_mktag((MR_Integer) 0))))
#line 243 "prog_io_typeclass.m"
      {
#line 243 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedConstraints_16, (MR_Integer) 0)));

#line 244 "prog_io_typeclass.m"
        {
#line 244 "prog_io_typeclass.m"
          MR_Word base;
#line 244 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 244 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 244 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_59));
#line 244 "prog_io_typeclass.m"
        }
#line 243 "prog_io_typeclass.m"
      }
#line 242 "prog_io_typeclass.m"
    else
#line 140 "prog_io_typeclass.m"
      {
#line 140 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ConstraintList_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeParsedConstraints_16, (MR_Integer) 0)));
#line 140 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeParsedConstraints_16, (MR_Integer) 1)));
#line 140 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19;

#line 141 "prog_io_typeclass.m"
        {
#line 141 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(parse_tree__prog_io_typeclass__ModuleName_8, parse_tree__prog_io_typeclass__Decl_9, parse_tree__prog_io_typeclass__TVarSet_15, parse_tree__prog_io_typeclass__Context_12, parse_tree__prog_io_typeclass__SeqNum_13, &parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19);
        }
#line 146 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19)) == (MR_mktag((MR_Integer) 0))))
#line 145 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19;
#line 146 "prog_io_typeclass.m"
        else
#line 147 "prog_io_typeclass.m"
          {
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeInfo_151_151;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemTypeClass0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19, (MR_Integer) 0)));
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintVars_22;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SortedConstraintVars_23;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FunDepVars_24;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SortedFunDepVars_25;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Params_26;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintNotInParams_28;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FunDepNotInParams_30;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintErrorContext_33;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FunDepErrorContext_36;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__NotInParams_37;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_61_61;
#line 147 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_169_169;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_170_170;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_171_171;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_172_172;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_175_175;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_176_176;
#line 156 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_119_119;
#line 156 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_120_120;
#line 156 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_121_121;
#line 156 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_122_122;
#line 156 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_123_123;
#line 156 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_124_124;
#line 156 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_125_125;
#line 157 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass___ConstraintInParams_27;
#line 159 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass___FunDepInParams_29;
#line 190 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_173_173;
#line 190 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_174_174;

#line 151 "prog_io_typeclass.m"
            {
#line 151 "prog_io_typeclass.m"
              parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_typeclass__ConstraintList_17, &parse_tree__prog_io_typeclass__ConstraintVars_22);
            }
#line 7788 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeInfo_151_151 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0];
#line 152 "prog_io_typeclass.m"
            {
#line 152 "prog_io_typeclass.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__ConstraintVars_22, &parse_tree__prog_io_typeclass__SortedConstraintVars_23);
            }
#line 153 "prog_io_typeclass.m"
            {
#line 153 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__FunDepVars_24 = parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0(parse_tree__prog_io_typeclass__FunDeps_18);
            }
#line 154 "prog_io_typeclass.m"
            {
#line 154 "prog_io_typeclass.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__FunDepVars_24, &parse_tree__prog_io_typeclass__SortedFunDepVars_25);
            }
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 0)));
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__Params_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 1)));
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 2)));
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 3)));
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 4)));
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 5)));
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 6)));
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 7)));
#line 157 "prog_io_typeclass.m"
            {
#line 157 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 157 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[1]));
#line 157 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_1));
#line 157 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 157 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__Params_26));
#line 157 "prog_io_typeclass.m"
            }
#line 157 "prog_io_typeclass.m"
            {
#line 157 "prog_io_typeclass.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__V_60_60, parse_tree__prog_io_typeclass__SortedConstraintVars_23, &parse_tree__prog_io_typeclass___ConstraintInParams_27, &parse_tree__prog_io_typeclass__ConstraintNotInParams_28);
            }
#line 159 "prog_io_typeclass.m"
            {
#line 159 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 159 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[1]));
#line 159 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_2));
#line 159 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 159 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__Params_26));
#line 159 "prog_io_typeclass.m"
            }
#line 159 "prog_io_typeclass.m"
            {
#line 159 "prog_io_typeclass.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__V_61_61, parse_tree__prog_io_typeclass__SortedFunDepVars_25, &parse_tree__prog_io_typeclass___FunDepInParams_29, &parse_tree__prog_io_typeclass__FunDepNotInParams_30);
            }
#line 170 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__ConstraintNotInParams_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 171 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "prog_io_typeclass.m"
            else
#line 166 "prog_io_typeclass.m"
              {
#line 163 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_62_62;

#line 163 "prog_io_typeclass.m"
                {
#line 163 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_62_62 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, parse_tree__prog_io_typeclass__ConstraintList_17);
                }
#line 163 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_62_62 == (MR_Integer) 1);
#line 166 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 164 "prog_io_typeclass.m"
                  {
#line 165 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[59]);
#line 164 "prog_io_typeclass.m"
                  }
#line 166 "prog_io_typeclass.m"
                else
#line 167 "prog_io_typeclass.m"
                  {
#line 168 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[61]);
#line 167 "prog_io_typeclass.m"
                  }
#line 166 "prog_io_typeclass.m"
              }
#line 183 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 183 "prog_io_typeclass.m"
            else
#line 179 "prog_io_typeclass.m"
              {
#line 176 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_69_69;

#line 176 "prog_io_typeclass.m"
                {
#line 176 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_69_69 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, parse_tree__prog_io_typeclass__FunDeps_18);
                }
#line 176 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_69_69 == (MR_Integer) 1);
#line 179 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 177 "prog_io_typeclass.m"
                  {
#line 178 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[63]);
#line 177 "prog_io_typeclass.m"
                  }
#line 179 "prog_io_typeclass.m"
                else
#line 180 "prog_io_typeclass.m"
                  {
#line 181 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[65]);
#line 180 "prog_io_typeclass.m"
                  }
#line 179 "prog_io_typeclass.m"
              }
#line 187 "prog_io_typeclass.m"
            {
#line 187 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__NotInParams_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__ConstraintNotInParams_28, parse_tree__prog_io_typeclass__FunDepNotInParams_30);
            }
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 0)));
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 1)));
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 2)));
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 3)));
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 4)));
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 5)));
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 6)));
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_169_169 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 7)));
#line 194 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__NotInParams_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 189 "prog_io_typeclass.m"
              {
#line 189 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ItemTypeClass_38;
#line 189 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_126_126 = parse_tree__prog_io_typeclass__V_176_176;
#line 189 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_127_127 = parse_tree__prog_io_typeclass__V_175_175;
#line 189 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_130_130 = parse_tree__prog_io_typeclass__V_172_172;
#line 189 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_131_131 = parse_tree__prog_io_typeclass__V_171_171;
#line 189 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_132_132 = parse_tree__prog_io_typeclass__V_170_170;
#line 189 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_133_133 = parse_tree__prog_io_typeclass__V_169_169;

#line 190 "prog_io_typeclass.m"
                {
#line 190 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ItemTypeClass_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_126_126));
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_127_127));
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__ConstraintList_17));
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps_18));
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_130_130));
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__V_131_131));
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__V_132_132));
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__V_133_133));
#line 190 "prog_io_typeclass.m"
                }
#line 193 "prog_io_typeclass.m"
                {
#line 193 "prog_io_typeclass.m"
                  MR_Word base;
#line 193 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 193 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 193 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemTypeClass_38));
#line 193 "prog_io_typeclass.m"
                }
#line 189 "prog_io_typeclass.m"
              }
#line 194 "prog_io_typeclass.m"
            else
#line 195 "prog_io_typeclass.m"
              {
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_158_158 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_168_168;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ConstraintNotInParamsStrs_42;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDepNotInParamsStrs_43;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Prefix_46;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Suffix_47;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Middle_50;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_57;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_58;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_76_76;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_78_78;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_103_103;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_104_104;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_110_110;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_111_111;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_112_112;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_113_113;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_116_116;
#line 207 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_80_80;

#line 198 "prog_io_typeclass.m"
                {
#line 198 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 198 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[2]));
#line 198 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_3));
#line 198 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 198 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 3) = ((MR_Box) ((MR_Integer) 0));
#line 198 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_171_171));
#line 198 "prog_io_typeclass.m"
                }
#line 198 "prog_io_typeclass.m"
                {
#line 198 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ConstraintNotInParamsStrs_42 = mercury__list__map_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__TypeCtorInfo_158_158, parse_tree__prog_io_typeclass__V_76_76, parse_tree__prog_io_typeclass__ConstraintNotInParams_28);
                }
#line 201 "prog_io_typeclass.m"
                {
#line 201 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 201 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[2]));
#line 201 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_4));
#line 201 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 201 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, 3) = ((MR_Box) ((MR_Integer) 0));
#line 201 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_171_171));
#line 201 "prog_io_typeclass.m"
                }
#line 201 "prog_io_typeclass.m"
                {
#line 201 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__FunDepNotInParamsStrs_43 = mercury__list__map_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__TypeCtorInfo_158_158, parse_tree__prog_io_typeclass__V_78_78, parse_tree__prog_io_typeclass__FunDepNotInParams_30);
                }
#line 203 "prog_io_typeclass.m"
                {
#line 203 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_typeclass__ConstraintNotInParamsStrs_42);
                }
#line 205 "prog_io_typeclass.m"
                {
#line 205 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_typeclass__FunDepNotInParamsStrs_43);
                }
#line 207 "prog_io_typeclass.m"
                {
#line 207 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_80_80 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__NotInParams_37);
                }
#line 207 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_80_80 == (MR_Integer) 1);
#line 210 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 208 "prog_io_typeclass.m"
                  {
#line 208 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Prefix_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[67]);
#line 209 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Suffix_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[69]);
#line 208 "prog_io_typeclass.m"
                  }
#line 210 "prog_io_typeclass.m"
                else
#line 211 "prog_io_typeclass.m"
                  {
#line 211 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Prefix_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[71]);
#line 212 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Suffix_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[73]);
#line 211 "prog_io_typeclass.m"
                  }
#line 218 "prog_io_typeclass.m"
                if ((parse_tree__prog_io_typeclass__ConstraintNotInParams_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 218 "prog_io_typeclass.m"
                  if ((parse_tree__prog_io_typeclass__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "prog_io_typeclass.m"
                    {
#line 217 "prog_io_typeclass.m"
                      {
#line 217 "prog_io_typeclass.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_typeclass", (MR_String) "predicate \140parse_tree.prog_io_typeclass.parse_constrained_class\'/7", (MR_String) "no NotInParams");
#line 217 "prog_io_typeclass.m"
                        return;
                      }
#line 215 "prog_io_typeclass.m"
                    }
#line 218 "prog_io_typeclass.m"
                  else
#line 219 "prog_io_typeclass.m"
                    {
#line 221 "prog_io_typeclass.m"
                      {
#line 221 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45, parse_tree__prog_io_typeclass__FunDepErrorContext_36);
                      }
#line 219 "prog_io_typeclass.m"
                    }
#line 218 "prog_io_typeclass.m"
                else
#line 218 "prog_io_typeclass.m"
                  if ((parse_tree__prog_io_typeclass__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "prog_io_typeclass.m"
                    {
#line 226 "prog_io_typeclass.m"
                      {
#line 226 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44, parse_tree__prog_io_typeclass__ConstraintErrorContext_33);
                      }
#line 224 "prog_io_typeclass.m"
                    }
#line 218 "prog_io_typeclass.m"
                  else
#line 229 "prog_io_typeclass.m"
                    {
#line 229 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_167_167 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 229 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__V_93_93;
#line 229 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__V_94_94;
#line 229 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__V_99_99;

#line 234 "prog_io_typeclass.m"
                      {
#line 234 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_99_99 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_167_167, parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45, parse_tree__prog_io_typeclass__FunDepErrorContext_36);
                      }
#line 233 "prog_io_typeclass.m"
                      {
#line 233 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_94_94 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_167_167, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[75]), parse_tree__prog_io_typeclass__V_99_99);
                      }
#line 233 "prog_io_typeclass.m"
                      {
#line 233 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_93_93 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_167_167, parse_tree__prog_io_typeclass__ConstraintErrorContext_33, parse_tree__prog_io_typeclass__V_94_94);
                      }
#line 232 "prog_io_typeclass.m"
                      {
#line 232 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Middle_50 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_167_167, parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44, parse_tree__prog_io_typeclass__V_93_93);
                      }
#line 229 "prog_io_typeclass.m"
                    }
#line 8207 "parse_tree.prog_io_typeclass.c"
                parse_tree__prog_io_typeclass__TypeCtorInfo_168_168 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 236 "prog_io_typeclass.m"
                {
#line 236 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_104_104 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_168_168, parse_tree__prog_io_typeclass__Suffix_47, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10]));
                }
#line 236 "prog_io_typeclass.m"
                {
#line 236 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_103_103 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_168_168, parse_tree__prog_io_typeclass__Middle_50, parse_tree__prog_io_typeclass__V_104_104);
                }
#line 236 "prog_io_typeclass.m"
                {
#line 236 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_57 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_168_168, parse_tree__prog_io_typeclass__Prefix_46, parse_tree__prog_io_typeclass__V_103_103);
                }
#line 238 "prog_io_typeclass.m"
                {
#line 238 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_113_113, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_57));
#line 238 "prog_io_typeclass.m"
                }
#line 238 "prog_io_typeclass.m"
                {
#line 238 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_112_112, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_113_113));
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "prog_io_typeclass.m"
                }
#line 238 "prog_io_typeclass.m"
                {
#line 238 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_12));
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_111_111, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_112_112));
#line 238 "prog_io_typeclass.m"
                }
#line 238 "prog_io_typeclass.m"
                {
#line 238 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_111_111));
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "prog_io_typeclass.m"
                }
#line 237 "prog_io_typeclass.m"
                {
#line 237 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 237 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 237 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_58, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_110_110));
#line 237 "prog_io_typeclass.m"
                }
#line 239 "prog_io_typeclass.m"
                {
#line 239 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_58));
#line 239 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "prog_io_typeclass.m"
                }
#line 239 "prog_io_typeclass.m"
                {
#line 239 "prog_io_typeclass.m"
                  MR_Word base;
#line 239 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 239 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 239 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_116_116));
#line 239 "prog_io_typeclass.m"
                }
#line 195 "prog_io_typeclass.m"
              }
#line 147 "prog_io_typeclass.m"
          }
#line 140 "prog_io_typeclass.m"
      }
#line 135 "prog_io_typeclass.m"
  }
#line 130 "prog_io_typeclass.m"
}

#line 310 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0_1(
#line 310 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 310 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 310 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 310 "prog_io_typeclass.m"
{
#line 310 "prog_io_typeclass.m"
  {
#line 310 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 310 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__2_55;

#line 310 "prog_io_typeclass.m"
    {
#line 310 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__310__1_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_HeadVar__2_55);
    }
#line 310 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__2_55));
#line 310 "prog_io_typeclass.m"
  }
#line 310 "prog_io_typeclass.m"
}

#line 116 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0(
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_9,
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 116 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 116 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_12)
#line 116 "prog_io_typeclass.m"
{
#line 124 "prog_io_typeclass.m"
  {
#line 124 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_8)) == (MR_mktag((MR_Integer) 0)));
#line 124 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_13;
#line 124 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Constraints_14;
#line 121 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_17_17;
#line 121 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_18_18;
#line 121 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_19_19;
#line 121 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_20_20;
#line 121 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 121 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_15_15;

#line 121 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 121 "prog_io_typeclass.m"
      {
#line 121 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 0)));
#line 121 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 1)));
#line 121 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 2)));
#line 121 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 121 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 121 "prog_io_typeclass.m"
          {
#line 121 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_17_17, (MR_Integer) 0)));
#line 121 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_18_18, (MR_String) "<=") == 0);
#line 121 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 121 "prog_io_typeclass.m"
              {
#line 121 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 121 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 121 "prog_io_typeclass.m"
                  {
#line 121 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 0)));
#line 121 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 1)));
#line 121 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 121 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 121 "prog_io_typeclass.m"
                      {
#line 121 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 0)));
#line 121 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 1)));
#line 121 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 121 "prog_io_typeclass.m"
                      }
#line 121 "prog_io_typeclass.m"
                  }
#line 121 "prog_io_typeclass.m"
              }
#line 121 "prog_io_typeclass.m"
          }
#line 121 "prog_io_typeclass.m"
      }
#line 124 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 122 "prog_io_typeclass.m"
      {
#line 122 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_13, parse_tree__prog_io_typeclass__Constraints_14, parse_tree__prog_io_typeclass__VarSet_9, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);
#line 122 "prog_io_typeclass.m"
        return;
      }
#line 124 "prog_io_typeclass.m"
    else
#line 125 "prog_io_typeclass.m"
      {
#line 125 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_52_69;
#line 125 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_53_70;
#line 125 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TVarSet_16;
#line 125 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__VarSet_31;
#line 125 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeClassName_32;

#line 125 "prog_io_typeclass.m"
        {
#line 125 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_9, &parse_tree__prog_io_typeclass__TVarSet_16);
        }
#line 8460 "parse_tree.prog_io_typeclass.c"
        parse_tree__prog_io_typeclass__TypeCtorInfo_52_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 8462 "parse_tree.prog_io_typeclass.c"
        parse_tree__prog_io_typeclass__TypeCtorInfo_53_70 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 305 "prog_io_typeclass.m"
        {
#line 305 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_52_69, parse_tree__prog_io_typeclass__TypeCtorInfo_53_70, parse_tree__prog_io_typeclass__TVarSet_16, &parse_tree__prog_io_typeclass__VarSet_31);
        }
#line 306 "prog_io_typeclass.m"
        {
#line 306 "prog_io_typeclass.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_70, parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Arg_8, parse_tree__prog_io_typeclass__VarSet_31, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[56]), &parse_tree__prog_io_typeclass__MaybeClassName_32);
        }
#line 329 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_32)) == (MR_mktag((MR_Integer) 0))))
#line 330 "prog_io_typeclass.m"
          {
#line 330 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Specs_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_32, (MR_Integer) 0)));

#line 331 "prog_io_typeclass.m"
            {
#line 331 "prog_io_typeclass.m"
              MR_Word base;
#line 331 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 331 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemTypeClass_12 = base;
#line 331 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_41));
#line 331 "prog_io_typeclass.m"
            }
#line 330 "prog_io_typeclass.m"
          }
#line 329 "prog_io_typeclass.m"
        else
#line 309 "prog_io_typeclass.m"
          {
#line 309 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeInfo_59_76 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[3];
#line 309 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ClassName_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_32, (MR_Integer) 0)));
#line 309 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TermVars0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_32, (MR_Integer) 1)));
#line 309 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TermVars_35;
#line 321 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Vars_36;
#line 312 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SortedTermVars_37;
#line 312 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_46_46;
#line 312 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_77_77;

#line 310 "prog_io_typeclass.m"
            {
#line 310 "prog_io_typeclass.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], parse_tree__prog_io_typeclass__TypeInfo_59_76, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[2], parse_tree__prog_io_typeclass__TermVars0_34, &parse_tree__prog_io_typeclass__TermVars_35);
            }
#line 312 "prog_io_typeclass.m"
            {
#line 312 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_52_69, parse_tree__prog_io_typeclass__TermVars_35, &parse_tree__prog_io_typeclass__Vars_36);
            }
#line 312 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 312 "prog_io_typeclass.m"
              {
#line 313 "prog_io_typeclass.m"
                {
#line 313 "prog_io_typeclass.m"
                  mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_59_76, parse_tree__prog_io_typeclass__TermVars_35, &parse_tree__prog_io_typeclass__SortedTermVars_37);
                }
#line 314 "prog_io_typeclass.m"
                {
#line 314 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_46_46 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_59_76, parse_tree__prog_io_typeclass__SortedTermVars_37);
                }
#line 314 "prog_io_typeclass.m"
                {
#line 314 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_77_77 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_59_76, parse_tree__prog_io_typeclass__TermVars_35);
                }
#line 314 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_46_46 == parse_tree__prog_io_typeclass__V_77_77);
#line 312 "prog_io_typeclass.m"
              }
#line 321 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 319 "prog_io_typeclass.m"
              {
#line 319 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeClassInfo_38;

#line 318 "prog_io_typeclass.m"
                {
#line 318 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__TypeClassInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_33));
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Vars_36));
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_16));
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 318 "prog_io_typeclass.m"
                }
#line 320 "prog_io_typeclass.m"
                {
#line 320 "prog_io_typeclass.m"
                  MR_Word base;
#line 320 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 320 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_12 = base;
#line 320 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__TypeClassInfo_38));
#line 320 "prog_io_typeclass.m"
                }
#line 319 "prog_io_typeclass.m"
              }
#line 321 "prog_io_typeclass.m"
            else
#line 323 "prog_io_typeclass.m"
              {
#line 323 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_40;
#line 323 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 323 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_61_61;
#line 323 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_62_62;
#line 323 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_67_67;

#line 326 "prog_io_typeclass.m"
                {
#line 326 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_62_62 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_70, parse_tree__prog_io_typeclass__Arg_8);
                }
#line 326 "prog_io_typeclass.m"
                {
#line 326 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_62_62));
#line 326 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[57])));
#line 326 "prog_io_typeclass.m"
                }
#line 326 "prog_io_typeclass.m"
                {
#line 326 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_61_61));
#line 326 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "prog_io_typeclass.m"
                }
#line 325 "prog_io_typeclass.m"
                {
#line 325 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 325 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 325 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_40, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_60_60));
#line 325 "prog_io_typeclass.m"
                }
#line 327 "prog_io_typeclass.m"
                {
#line 327 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_40));
#line 327 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 327 "prog_io_typeclass.m"
                }
#line 327 "prog_io_typeclass.m"
                {
#line 327 "prog_io_typeclass.m"
                  MR_Word base;
#line 327 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 327 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_12 = base;
#line 327 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_67_67));
#line 327 "prog_io_typeclass.m"
                }
#line 323 "prog_io_typeclass.m"
              }
#line 309 "prog_io_typeclass.m"
          }
#line 125 "prog_io_typeclass.m"
      }
#line 124 "prog_io_typeclass.m"
  }
#line 116 "prog_io_typeclass.m"
}

#line 342 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0_1(
#line 342 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 342 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 342 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 342 "prog_io_typeclass.m"
{
#line 342 "prog_io_typeclass.m"
  {
#line 342 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 342 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__4_18;

#line 342 "prog_io_typeclass.m"
    {
#line 342 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_class_methods__342__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_HeadVar__4_18);
    }
#line 342 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__4_18));
#line 342 "prog_io_typeclass.m"
  }
#line 342 "prog_io_typeclass.m"
}

#line 90 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0(
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Name_9,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Methods_10,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 90 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 90 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14)
#line 90 "prog_io_typeclass.m"
{
#line 94 "prog_io_typeclass.m"
  {
#line 94 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 94 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TVarSet_15;
#line 8732 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__MethodList_47;

#line 95 "prog_io_typeclass.m"
    {
#line 95 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_11, &parse_tree__prog_io_typeclass__TVarSet_15);
    }
#line 340 "prog_io_typeclass.m"
    {
#line 340 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_typeclass__Methods_10, &parse_tree__prog_io_typeclass__MethodList_47);
    }
#line 8745 "parse_tree.prog_io_typeclass.c"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 8747 "parse_tree.prog_io_typeclass.c"
      {
#line 8749 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Interface_51;
#line 8751 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_54_54;
#line 8753 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Methods_82;
#line 8755 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Specs_83;

#line 342 "prog_io_typeclass.m"
        {
#line 342 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 342 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[1]));
#line 342 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0_1));
#line 342 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 342 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_8));
#line 342 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__VarSet_11));
#line 342 "prog_io_typeclass.m"
        }
#line 342 "prog_io_typeclass.m"
        {
#line 342 "prog_io_typeclass.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[4], parse_tree__prog_io_typeclass__V_54_54, parse_tree__prog_io_typeclass__MethodList_47, &parse_tree__prog_io_typeclass__Interface_51);
        }
#line 391 "prog_io_typeclass.m"
        {
#line 391 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__prog_io_typeclass__Interface_51, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Methods_82, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Specs_83);
        }
#line 8784 "parse_tree.prog_io_typeclass.c"
        if ((parse_tree__prog_io_typeclass__Specs_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8786 "parse_tree.prog_io_typeclass.c"
          {
#line 8788 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18;

#line 100 "prog_io_typeclass.m"
            {
#line 100 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__parse_class_head_6_p_0(parse_tree__prog_io_typeclass__ModuleName_8, parse_tree__prog_io_typeclass__Name_9, parse_tree__prog_io_typeclass__VarSet_11, parse_tree__prog_io_typeclass__Context_12, parse_tree__prog_io_typeclass__SeqNum_13, &parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18);
            }
#line 105 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18)) == (MR_mktag((MR_Integer) 0))))
#line 104 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18;
#line 105 "prog_io_typeclass.m"
            else
#line 106 "prog_io_typeclass.m"
              {
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ParsedNameAndVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18, (MR_Integer) 0)));
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_23_23;
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_25_25;
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_26_26;
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_27_27;
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_28_28;
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_31_31;
#line 106 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_32_32;
#line 107 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 107 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_30_30;

#line 108 "prog_io_typeclass.m"
                {
#line 108 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Methods_82));
#line 108 "prog_io_typeclass.m"
                }
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 0)));
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 1)));
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 2)));
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 3)));
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 4)));
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 5)));
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 6)));
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 7)));
#line 107 "prog_io_typeclass.m"
                {
#line 107 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_25_25));
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_26_26));
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_27_27));
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__V_28_28));
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_23_23));
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_15));
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__V_31_31));
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__V_32_32));
#line 107 "prog_io_typeclass.m"
                }
#line 107 "prog_io_typeclass.m"
                {
#line 107 "prog_io_typeclass.m"
                  MR_Word base;
#line 107 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_21_21));
#line 107 "prog_io_typeclass.m"
                }
#line 106 "prog_io_typeclass.m"
              }
#line 8887 "parse_tree.prog_io_typeclass.c"
          }
#line 8889 "parse_tree.prog_io_typeclass.c"
        else
#line 8891 "parse_tree.prog_io_typeclass.c"
          {
#line 8893 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_89;

#line 397 "prog_io_typeclass.m"
            {
#line 397 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__MaybeParsedMethods_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 397 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_89, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_83));
#line 397 "prog_io_typeclass.m"
            }
#line 113 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_89;
#line 8906 "parse_tree.prog_io_typeclass.c"
          }
#line 8908 "parse_tree.prog_io_typeclass.c"
      }
#line 8910 "parse_tree.prog_io_typeclass.c"
    else
#line 8912 "parse_tree.prog_io_typeclass.c"
      {
#line 8914 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Spec_53;
#line 8916 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_65_65;
#line 8918 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_66_66;
#line 8920 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_67_67;
#line 8922 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_72_72;
#line 8924 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_88;

#line 353 "prog_io_typeclass.m"
        {
#line 353 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_67_67 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Methods_10);
        }
#line 353 "prog_io_typeclass.m"
        {
#line 353 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 353 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_67_67));
#line 353 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[54])));
#line 353 "prog_io_typeclass.m"
        }
#line 353 "prog_io_typeclass.m"
        {
#line 353 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_66_66));
#line 353 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 353 "prog_io_typeclass.m"
        }
#line 352 "prog_io_typeclass.m"
        {
#line 352 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__Spec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 352 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 352 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_53, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_65_65));
#line 352 "prog_io_typeclass.m"
        }
#line 354 "prog_io_typeclass.m"
        {
#line 354 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_53));
#line 354 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "prog_io_typeclass.m"
        }
#line 354 "prog_io_typeclass.m"
        {
#line 354 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__MaybeParsedMethods_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 354 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_88, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_72_72));
#line 354 "prog_io_typeclass.m"
        }
#line 113 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_88;
#line 8984 "parse_tree.prog_io_typeclass.c"
      }
#line 94 "prog_io_typeclass.m"
  }
#line 90 "prog_io_typeclass.m"
}

#line 50 "prog_io_typeclass.m"
void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_and_inst_constraints_4_p_0(
#line 50 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass___ModuleName_5,
#line 50 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 50 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 50 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 50 "prog_io_typeclass.m"
{
#line 456 "prog_io_typeclass.m"
  {
#line 456 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 456 "prog_io_typeclass.m"
    {
#line 456 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_97_110_100_95_105_110_115_116_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__ConstraintsTerm_7, parse_tree__prog_io_typeclass__Result_8);
#line 456 "prog_io_typeclass.m"
      return;
    }
#line 456 "prog_io_typeclass.m"
  }
#line 50 "prog_io_typeclass.m"
}

#line 45 "prog_io_typeclass.m"
void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_constraints_4_p_0(
#line 45 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_5,
#line 45 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 45 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 45 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 45 "prog_io_typeclass.m"
{
#line 419 "prog_io_typeclass.m"
  {
#line 419 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 419 "prog_io_typeclass.m"
    {
#line 419 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__ConstraintsTerm_7, parse_tree__prog_io_typeclass__Result_8);
#line 419 "prog_io_typeclass.m"
      return;
    }
#line 419 "prog_io_typeclass.m"
  }
#line 45 "prog_io_typeclass.m"
}

#line 800 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_6_p_0_1(
#line 800 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 800 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 800 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 800 "prog_io_typeclass.m"
{
#line 800 "prog_io_typeclass.m"
  {
#line 800 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 800 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_MaybeInstanceMethod_8;

#line 800 "prog_io_typeclass.m"
    {
#line 800 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__term_to_instance_method_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_MaybeInstanceMethod_8);
    }
#line 800 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_MaybeInstanceMethod_8));
#line 800 "prog_io_typeclass.m"
  }
#line 800 "prog_io_typeclass.m"
}

#line 38 "prog_io_typeclass.m"
MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_6_p_0(
#line 38 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 38 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_8,
#line 38 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypeClassTerm_9,
#line 38 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 38 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 38 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_12)
#line 38 "prog_io_typeclass.m"
{
#line 628 "prog_io_typeclass.m"
  {
#line 628 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__TypeClassTerm_9)) == (MR_mktag((MR_Integer) 1)));
#line 628 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_24_24;
#line 628 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_25_25;
#line 628 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Arg_13;
#line 628 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TVarSet_14;
#line 628 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 636 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_15;
#line 636 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Methods_16;
#line 633 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_19_19;
#line 633 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_20_20;
#line 633 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 633 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_22_22;
#line 633 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_23_23;
#line 633 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_17_17;

#line 631 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 631 "prog_io_typeclass.m"
      {
#line 631 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 0)));
#line 631 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 1)));
#line 631 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 628 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 628 "prog_io_typeclass.m"
          {
#line 9143 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 9145 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 632 "prog_io_typeclass.m"
            {
#line 632 "prog_io_typeclass.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_24_24, parse_tree__prog_io_typeclass__TypeCtorInfo_25_25, parse_tree__prog_io_typeclass__VarSet_8, &parse_tree__prog_io_typeclass__TVarSet_14);
            }
#line 633 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_13)) == (MR_mktag((MR_Integer) 0)));
#line 633 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 633 "prog_io_typeclass.m"
              {
#line 633 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 0)));
#line 633 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 1)));
#line 633 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 2)));
#line 633 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 633 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 633 "prog_io_typeclass.m"
                  {
#line 633 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 0)));
#line 633 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_20_20, (MR_String) "where") == 0);
#line 633 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 633 "prog_io_typeclass.m"
                      {
#line 633 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 633 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 633 "prog_io_typeclass.m"
                          {
#line 633 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 0)));
#line 633 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 1)));
#line 633 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 633 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 633 "prog_io_typeclass.m"
                              {
#line 633 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__Methods_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_22_22, (MR_Integer) 0)));
#line 633 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_22_22, (MR_Integer) 1)));
#line 633 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 633 "prog_io_typeclass.m"
                              }
#line 633 "prog_io_typeclass.m"
                          }
#line 633 "prog_io_typeclass.m"
                      }
#line 633 "prog_io_typeclass.m"
                  }
#line 633 "prog_io_typeclass.m"
              }
#line 636 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 9212 "parse_tree.prog_io_typeclass.c"
              {
#line 9214 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__MethodList_56;

#line 798 "prog_io_typeclass.m"
                {
#line 798 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_typeclass__Methods_16, &parse_tree__prog_io_typeclass__MethodList_56);
                }
#line 9222 "parse_tree.prog_io_typeclass.c"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 9224 "parse_tree.prog_io_typeclass.c"
                  {
#line 9226 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Interface_57;
#line 9228 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 9230 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Methods_85;
#line 9232 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Specs_86;

#line 800 "prog_io_typeclass.m"
                    {
#line 800 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 800 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[0]));
#line 800 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_instance_6_p_0_1));
#line 800 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 800 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_7));
#line 800 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__VarSet_8));
#line 800 "prog_io_typeclass.m"
                    }
#line 800 "prog_io_typeclass.m"
                    {
#line 800 "prog_io_typeclass.m"
                      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[6], parse_tree__prog_io_typeclass__V_60_60, parse_tree__prog_io_typeclass__MethodList_56, &parse_tree__prog_io_typeclass__Interface_57);
                    }
#line 391 "prog_io_typeclass.m"
                    {
#line 391 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__prog_io_typeclass__Interface_57, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Methods_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Specs_86);
                    }
#line 9261 "parse_tree.prog_io_typeclass.c"
                    if ((parse_tree__prog_io_typeclass__Specs_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9263 "parse_tree.prog_io_typeclass.c"
                      {
#line 9265 "parse_tree.prog_io_typeclass.c"
                        MR_Word parse_tree__prog_io_typeclass__MaybeItemInstance0_36;

#line 734 "prog_io_typeclass.m"
                        {
#line 734 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_15, parse_tree__prog_io_typeclass__TVarSet_14, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, &parse_tree__prog_io_typeclass__MaybeItemInstance0_36);
                        }
#line 739 "prog_io_typeclass.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemInstance0_36)) == (MR_mktag((MR_Integer) 0))))
#line 738 "prog_io_typeclass.m"
                          *parse_tree__prog_io_typeclass__Result_12 = parse_tree__prog_io_typeclass__MaybeItemInstance0_36;
#line 739 "prog_io_typeclass.m"
                        else
#line 740 "prog_io_typeclass.m"
                          {
#line 740 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__ItemInstance0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstance0_36, (MR_Integer) 0)));
#line 740 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__Constraints_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 0)));
#line 740 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__NameString_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 1)));
#line 740 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__Types_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 2)));
#line 740 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__OriginalTypes_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 3)));
#line 740 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__ModName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 6)));
#line 740 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__InstanceContext_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 7)));
#line 740 "prog_io_typeclass.m"
                            MR_Integer parse_tree__prog_io_typeclass__ItemSeqNum_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 8)));
#line 740 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__ItemInstance_48;
#line 740 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__MaybeItemInstance1_49;
#line 740 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_50_50;
#line 743 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 4)));
#line 743 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 5)));

#line 748 "prog_io_typeclass.m"
                            {
#line 748 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 748 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Methods_85));
#line 748 "prog_io_typeclass.m"
                            }
#line 746 "prog_io_typeclass.m"
                            {
#line 746 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__ItemInstance_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 746 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_39));
#line 746 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__NameString_40));
#line 746 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_41));
#line 746 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__OriginalTypes_42));
#line 746 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_50_50));
#line 746 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_14));
#line 746 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModName_45));
#line 746 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceContext_46));
#line 746 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemSeqNum_47));
#line 746 "prog_io_typeclass.m"
                            }
#line 750 "prog_io_typeclass.m"
                            {
#line 750 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__MaybeItemInstance1_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 750 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstance1_49, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstance_48));
#line 750 "prog_io_typeclass.m"
                            }
#line 751 "prog_io_typeclass.m"
                            {
#line 751 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0(parse_tree__prog_io_typeclass__MaybeItemInstance1_49, parse_tree__prog_io_typeclass__Name_15, parse_tree__prog_io_typeclass__Result_12);
                            }
#line 740 "prog_io_typeclass.m"
                          }
#line 9355 "parse_tree.prog_io_typeclass.c"
                      }
#line 9357 "parse_tree.prog_io_typeclass.c"
                    else
#line 9359 "parse_tree.prog_io_typeclass.c"
                      {
#line 9361 "parse_tree.prog_io_typeclass.c"
                        MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_92;

#line 397 "prog_io_typeclass.m"
                        {
#line 397 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__MaybeParsedMethods_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 397 "prog_io_typeclass.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_92, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_86));
#line 397 "prog_io_typeclass.m"
                        }
#line 756 "prog_io_typeclass.m"
                        *parse_tree__prog_io_typeclass__Result_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_92;
#line 9374 "parse_tree.prog_io_typeclass.c"
                      }
#line 9376 "parse_tree.prog_io_typeclass.c"
                  }
#line 9378 "parse_tree.prog_io_typeclass.c"
                else
#line 9380 "parse_tree.prog_io_typeclass.c"
                  {
#line 9382 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Spec_59;
#line 9384 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_68_68;
#line 9386 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_69_69;
#line 9388 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_70_70;
#line 9390 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_75_75;
#line 9392 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_91;

#line 806 "prog_io_typeclass.m"
                    {
#line 806 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_70_70 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Methods_16);
                    }
#line 806 "prog_io_typeclass.m"
                    {
#line 806 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 806 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_70_70));
#line 806 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[53])));
#line 806 "prog_io_typeclass.m"
                    }
#line 806 "prog_io_typeclass.m"
                    {
#line 806 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_69_69));
#line 806 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 806 "prog_io_typeclass.m"
                    }
#line 805 "prog_io_typeclass.m"
                    {
#line 805 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Spec_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 805 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 805 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 805 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_59, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_68_68));
#line 805 "prog_io_typeclass.m"
                    }
#line 807 "prog_io_typeclass.m"
                    {
#line 807 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_59));
#line 807 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 807 "prog_io_typeclass.m"
                    }
#line 807 "prog_io_typeclass.m"
                    {
#line 807 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__MaybeParsedMethods_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 807 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_91, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_75_75));
#line 807 "prog_io_typeclass.m"
                    }
#line 756 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__Result_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_91;
#line 9452 "parse_tree.prog_io_typeclass.c"
                  }
#line 9454 "parse_tree.prog_io_typeclass.c"
              }
#line 636 "prog_io_typeclass.m"
            else
#line 637 "prog_io_typeclass.m"
              {
#line 637 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Arg_13, parse_tree__prog_io_typeclass__TVarSet_14, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__Result_12);
              }
#line 636 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 628 "prog_io_typeclass.m"
          }
#line 631 "prog_io_typeclass.m"
      }
#line 628 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 628 "prog_io_typeclass.m"
  }
#line 38 "prog_io_typeclass.m"
}

#line 33 "prog_io_typeclass.m"
MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_typeclass_6_p_0(
#line 33 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 33 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_8,
#line 33 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypeClassTerm_9,
#line 33 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 33 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 33 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_12)
#line 33 "prog_io_typeclass.m"
{
#line 78 "prog_io_typeclass.m"
  {
#line 78 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__TypeClassTerm_9)) == (MR_mktag((MR_Integer) 1)));
#line 78 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Arg_13;
#line 78 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_17_17;
#line 85 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_14;
#line 85 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Methods_15;
#line 82 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 82 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_19_19;
#line 82 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_20_20;
#line 82 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 82 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_22_22;
#line 82 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_16_16;

#line 81 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 81 "prog_io_typeclass.m"
      {
#line 81 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 0)));
#line 81 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 1)));
#line 81 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 78 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 78 "prog_io_typeclass.m"
          {
#line 82 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_13)) == (MR_mktag((MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 82 "prog_io_typeclass.m"
              {
#line 82 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 1)));
#line 82 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 2)));
#line 82 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 82 "prog_io_typeclass.m"
                  {
#line 82 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_19_19, (MR_String) "where") == 0);
#line 82 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 82 "prog_io_typeclass.m"
                      {
#line 82 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 82 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 82 "prog_io_typeclass.m"
                          {
#line 82 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 1)));
#line 82 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 82 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 82 "prog_io_typeclass.m"
                              {
#line 82 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__Methods_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 1)));
#line 82 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 82 "prog_io_typeclass.m"
                              }
#line 82 "prog_io_typeclass.m"
                          }
#line 82 "prog_io_typeclass.m"
                      }
#line 82 "prog_io_typeclass.m"
                  }
#line 82 "prog_io_typeclass.m"
              }
#line 85 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 83 "prog_io_typeclass.m"
              {
#line 83 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_14, parse_tree__prog_io_typeclass__Methods_15, parse_tree__prog_io_typeclass__VarSet_8, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);
              }
#line 85 "prog_io_typeclass.m"
            else
#line 86 "prog_io_typeclass.m"
              {
#line 86 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__parse_class_head_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Arg_13, parse_tree__prog_io_typeclass__VarSet_8, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);
              }
#line 85 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 78 "prog_io_typeclass.m"
          }
#line 81 "prog_io_typeclass.m"
      }
#line 78 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 78 "prog_io_typeclass.m"
  }
#line 33 "prog_io_typeclass.m"
}

void mercury__parse_tree__prog_io_typeclass__init(void)
{
}

void mercury__parse_tree__prog_io_typeclass__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraints_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_maybe_class_and_inst_constraints_0);
}

void mercury__parse_tree__prog_io_typeclass__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_typeclass. */
