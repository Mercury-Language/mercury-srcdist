/*
** Automatically generated from `prog_io_typeclass.m'
** by the Mercury compiler,
** version rotd-2013-03-26, configured for x86_64-apple-darwin12.2.1.
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "libs.file_util.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
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



#line 523 "prog_io_typeclass.m"
struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s {
#line 526 "prog_io_typeclass.m"
  MR_bool parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded;
#line 616 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__Types_68;
#line 618 "prog_io_typeclass.m"
  jmp_buf parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__commit_0;
#line 618 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__Type_70;
#line 618 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__conv0_Type_70;
#line 523 "prog_io_typeclass.m"
};


#line 151 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 154 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 157 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0;

#line 160 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0;

#line 163 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 166 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 169 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 172 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 175 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 178 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_0[1];

#line 181 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0;

#line 184 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_1[1];

#line 187 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1;

#line 190 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 193 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_2[2];

#line 196 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2;

#line 199 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_3[1];

#line 202 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3;

#line 205 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_0[1];

#line 208 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_1[1];

#line 211 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_2[1];

#line 214 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_3[1];

#line 217 "parse_tree.prog_io_typeclass.c"
static const MR_DuPtagLayout parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_ptag_ordered_arbitrary_constraint_0[4];

#line 220 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_name_ordered_arbitrary_constraint_0[4];

#line 223 "parse_tree.prog_io_typeclass.c"
static const MR_Integer parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__functor_number_map_arbitrary_constraint_0[4];

#line 226 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0;

#line 229 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 232 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 235 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 238 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0_10001(
#line 241 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 243 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 246 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0_10001(
#line 249 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 251 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 253 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3);

#line 256 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0_10001(
#line 259 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 261 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 264 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0_10001(
#line 267 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 269 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 271 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3);

#line 274 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0_10001(
#line 277 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 279 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 282 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0_10001(
#line 285 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 287 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 289 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3);

#line 809 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(
#line 809 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 809 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 809 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8);

#line 397 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(
#line 397 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 397 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2,
#line 397 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3,
#line 397 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4,
#line 397 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5);

#line 254 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 254 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 254 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 254 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8);

#line 433 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
#line 433 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 433 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 433 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 774 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__check_tvars_in_instance_constraint__774__1_3_f_0(
#line 774 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_14,
#line 774 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_31,
#line 774 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_62);

#line 770 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__check_tvars_in_instance_constraint__770__1_2_p_0(
#line 770 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypesVars_19,
#line 770 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_57);

#line 341 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_class_methods__341__1_4_p_0(
#line 341 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_5,
#line 341 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_7,
#line 341 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_17,
#line 341 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__4_18);

#line 309 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__309__1_2_p_0(
#line 309 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_54,
#line 309 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_55);

#line 200 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__200__1_3_f_0(
#line 200 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_79,
#line 200 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_171,
#line 200 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_162);

#line 197 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__197__1_3_f_0(
#line 197 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_77,
#line 197 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_171,
#line 197 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_159);

#line 158 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__158__1_2_p_0(
#line 158 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 158 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_154);

#line 156 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__156__1_2_p_0(
#line 156 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 156 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_152);

#line 514 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0(
#line 514 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 514 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 514 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 514 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0(
#line 514 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 514 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2);

#line 497 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0(
#line 497 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 497 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 497 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 497 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0(
#line 497 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 497 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2);

#line 928 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__is_in_list_2_p_0(
#line 928 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypeInfo_for_T_5,
#line 928 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__List_3,
#line 928 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__Element_4);

#line 809 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__term_to_instance_method_4_p_0(
#line 809 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass___ModuleName_5,
#line 809 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 809 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 809 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8);

#line 774 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_2(
#line 774 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 774 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 770 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_1(
#line 770 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 770 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 756 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0(
#line 756 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 756 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__InstanceTerm_2,
#line 756 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 692 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(
#line 692 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 692 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 692 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 692 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 692 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 692 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12);

#line 433 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_name_6_p_0_1(
#line 433 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 433 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 433 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 637 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(
#line 637 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 637 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 637 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 637 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 637 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 637 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12);

#line 589 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_fundep_2_p_0(
#line 589 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_3,
#line 589 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_4);

#line 618 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_1(
#line 618 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 618 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_3(
#line 618 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 618 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_2(
#line 618 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 618 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_4(
#line 618 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 523 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0(
#line 523 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_1,
#line 523 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 523 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 475 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(
#line 475 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 475 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 475 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 447 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(
#line 447 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 447 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Constraint_3);

#line 356 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__item_to_class_method_3_p_0(
#line 356 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 356 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_2,
#line 356 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 309 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0_1(
#line 309 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 309 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 309 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 298 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(
#line 298 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 298 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 298 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 298 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 298 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 298 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12);

#line 280 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(
#line 280 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 280 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 280 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 250 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundep_1_f_0(
#line 250 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1);

#line 248 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0_1(
#line 248 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 248 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 246 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0(
#line 246 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__FunDeps_3);

#line 200 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_4(
#line 200 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 200 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 197 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_3(
#line 197 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 197 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 158 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_2(
#line 158 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 158 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 156 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_1(
#line 156 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 156 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 129 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(
#line 129 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 129 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Decl_9,
#line 129 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_10,
#line 129 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 129 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 129 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 129 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14);

#line 309 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0_1(
#line 309 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 309 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 309 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 115 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0(
#line 115 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 115 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 115 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_9,
#line 115 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 115 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 115 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);

#line 341 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0_1(
#line 341 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 341 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 341 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 89 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0(
#line 89 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 89 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Name_9,
#line 89 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Methods_10,
#line 89 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 89 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 89 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 89 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14);

#line 797 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_6_p_0_1(
#line 797 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 797 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 797 "prog_io_typeclass.m"
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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



#line 1470 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1478 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1486 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0
  }
};

#line 1494 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0
  }
};

#line 1502 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1510 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1518 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1526 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1534 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1542 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1547 "parse_tree.prog_io_typeclass.c"
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

#line 1562 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1567 "parse_tree.prog_io_typeclass.c"
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

#line 1582 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1590 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 1596 "parse_tree.prog_io_typeclass.c"
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

#line 1611 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0
};

#line 1616 "parse_tree.prog_io_typeclass.c"
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

#line 1631 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_0[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0
};

#line 1636 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_1[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1
};

#line 1641 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_2[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3
};

#line 1646 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_3[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2
};

#line 1651 "parse_tree.prog_io_typeclass.c"
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

#line 1675 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_name_ordered_arbitrary_constraint_0[4] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3,
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2,
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1,
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0
};

#line 1683 "parse_tree.prog_io_typeclass.c"
static const MR_Integer parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__functor_number_map_arbitrary_constraint_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1691 "parse_tree.prog_io_typeclass.c"
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

#line 1712 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0
  }
};

#line 1720 "parse_tree.prog_io_typeclass.c"
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

#line 1741 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1749 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1758 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1767 "parse_tree.prog_io_typeclass.c"
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

#line 1788 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0_10001(
#line 1791 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1793 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 1795 "parse_tree.prog_io_typeclass.c"
{
#line 1797 "parse_tree.prog_io_typeclass.c"
  {
#line 1799 "parse_tree.prog_io_typeclass.c"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 1802 "parse_tree.prog_io_typeclass.c"
    {
#line 1804 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2));
    }
#line 1807 "parse_tree.prog_io_typeclass.c"
    return parse_tree__prog_io_typeclass__succeeded;
#line 1809 "parse_tree.prog_io_typeclass.c"
  }
#line 1811 "parse_tree.prog_io_typeclass.c"
}

#line 1814 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0_10001(
#line 1817 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1819 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 1821 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3)
#line 1823 "parse_tree.prog_io_typeclass.c"
{
#line 1825 "parse_tree.prog_io_typeclass.c"
  {
#line 1827 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__1_1;

#line 1830 "parse_tree.prog_io_typeclass.c"
    {
#line 1832 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0(&parse_tree__prog_io_typeclass__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_3));
    }
#line 1835 "parse_tree.prog_io_typeclass.c"
    *parse_tree__prog_io_typeclass__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__1_1));
#line 1837 "parse_tree.prog_io_typeclass.c"
  }
#line 1839 "parse_tree.prog_io_typeclass.c"
}

#line 1842 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0_10001(
#line 1845 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1847 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 1849 "parse_tree.prog_io_typeclass.c"
{
#line 1851 "parse_tree.prog_io_typeclass.c"
  {
#line 1853 "parse_tree.prog_io_typeclass.c"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 1856 "parse_tree.prog_io_typeclass.c"
    {
#line 1858 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2));
    }
#line 1861 "parse_tree.prog_io_typeclass.c"
    return parse_tree__prog_io_typeclass__succeeded;
#line 1863 "parse_tree.prog_io_typeclass.c"
  }
#line 1865 "parse_tree.prog_io_typeclass.c"
}

#line 1868 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0_10001(
#line 1871 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1873 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 1875 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3)
#line 1877 "parse_tree.prog_io_typeclass.c"
{
#line 1879 "parse_tree.prog_io_typeclass.c"
  {
#line 1881 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__1_1;

#line 1884 "parse_tree.prog_io_typeclass.c"
    {
#line 1886 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0(&parse_tree__prog_io_typeclass__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_3));
    }
#line 1889 "parse_tree.prog_io_typeclass.c"
    *parse_tree__prog_io_typeclass__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__1_1));
#line 1891 "parse_tree.prog_io_typeclass.c"
  }
#line 1893 "parse_tree.prog_io_typeclass.c"
}

#line 1896 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0_10001(
#line 1899 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1901 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 1903 "parse_tree.prog_io_typeclass.c"
{
#line 1905 "parse_tree.prog_io_typeclass.c"
  {
#line 1907 "parse_tree.prog_io_typeclass.c"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 1910 "parse_tree.prog_io_typeclass.c"
    {
#line 1912 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2));
    }
#line 1915 "parse_tree.prog_io_typeclass.c"
    return parse_tree__prog_io_typeclass__succeeded;
#line 1917 "parse_tree.prog_io_typeclass.c"
  }
#line 1919 "parse_tree.prog_io_typeclass.c"
}

#line 1922 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0_10001(
#line 1925 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1927 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 1929 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3)
#line 1931 "parse_tree.prog_io_typeclass.c"
{
#line 1933 "parse_tree.prog_io_typeclass.c"
  {
#line 1935 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__1_1;

#line 1938 "parse_tree.prog_io_typeclass.c"
    {
#line 1940 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0(&parse_tree__prog_io_typeclass__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_3));
    }
#line 1943 "parse_tree.prog_io_typeclass.c"
    *parse_tree__prog_io_typeclass__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__1_1));
#line 1945 "parse_tree.prog_io_typeclass.c"
  }
#line 1947 "parse_tree.prog_io_typeclass.c"
}

#line 809 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(
#line 809 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 809 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 809 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8)
#line 809 "prog_io_typeclass.m"
{
#line 885 "prog_io_typeclass.m"
  {
#line 885 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MethodTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 885 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ClassMethodTerm_9;
#line 885 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__InstanceMethodTerm_10;
#line 885 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TermContext_11;
#line 815 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_43_43;
#line 815 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_44_44;
#line 815 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_45_45;
#line 815 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_46_46;
#line 815 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_47_47;

#line 815 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 815 "prog_io_typeclass.m"
      {
#line 815 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) 0)));
#line 815 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) 1)));
#line 815 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TermContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) 2)));
#line 815 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 815 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 815 "prog_io_typeclass.m"
          {
#line 815 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_43_43, (MR_Integer) 0)));
#line 815 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_44_44, (MR_String) "is") == 0);
#line 815 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 815 "prog_io_typeclass.m"
              {
#line 815 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 815 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 815 "prog_io_typeclass.m"
                  {
#line 815 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ClassMethodTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_45_45, (MR_Integer) 0)));
#line 815 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_45_45, (MR_Integer) 1)));
#line 816 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 816 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 816 "prog_io_typeclass.m"
                      {
#line 816 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__InstanceMethodTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_46_46, (MR_Integer) 0)));
#line 816 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_46_46, (MR_Integer) 1)));
#line 816 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 816 "prog_io_typeclass.m"
                      }
#line 815 "prog_io_typeclass.m"
                  }
#line 815 "prog_io_typeclass.m"
              }
#line 815 "prog_io_typeclass.m"
          }
#line 815 "prog_io_typeclass.m"
      }
#line 885 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 847 "prog_io_typeclass.m"
      {
#line 847 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__PredNameTerm_14;
#line 847 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArityTerm_15;
#line 822 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SlashTerm_12;
#line 822 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_48_48;
#line 822 "prog_io_typeclass.m"
        MR_String parse_tree__prog_io_typeclass__V_49_49;
#line 822 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_50_50;
#line 822 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_51_51;
#line 822 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_52_52;
#line 822 "prog_io_typeclass.m"
        MR_String parse_tree__prog_io_typeclass__V_53_53;
#line 822 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_54_54;
#line 822 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_55_55;
#line 822 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_56_56;
#line 822 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_13_13;
#line 823 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_16_16;

#line 822 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ClassMethodTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 822 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 822 "prog_io_typeclass.m"
          {
#line 822 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 0)));
#line 822 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 1)));
#line 822 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 2)));
#line 822 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_48_48)) == (MR_mktag((MR_Integer) 0)));
#line 822 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 822 "prog_io_typeclass.m"
              {
#line 822 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_48_48, (MR_Integer) 0)));
#line 822 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_49_49, (MR_String) "pred") == 0);
#line 822 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 822 "prog_io_typeclass.m"
                  {
#line 822 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 822 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 822 "prog_io_typeclass.m"
                      {
#line 822 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__SlashTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, (MR_Integer) 0)));
#line 822 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, (MR_Integer) 1)));
#line 822 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 822 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 822 "prog_io_typeclass.m"
                          {
#line 823 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__SlashTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 823 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 823 "prog_io_typeclass.m"
                              {
#line 823 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_12, (MR_Integer) 0)));
#line 823 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_12, (MR_Integer) 1)));
#line 823 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_12, (MR_Integer) 2)));
#line 823 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_52_52)) == (MR_mktag((MR_Integer) 0)));
#line 823 "prog_io_typeclass.m"
                                if (parse_tree__prog_io_typeclass__succeeded)
#line 823 "prog_io_typeclass.m"
                                  {
#line 823 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_52_52, (MR_Integer) 0)));
#line 823 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_53_53, (MR_String) "/") == 0);
#line 822 "prog_io_typeclass.m"
                                    if (parse_tree__prog_io_typeclass__succeeded)
#line 822 "prog_io_typeclass.m"
                                      {
#line 823 "prog_io_typeclass.m"
                                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 823 "prog_io_typeclass.m"
                                        if (parse_tree__prog_io_typeclass__succeeded)
#line 823 "prog_io_typeclass.m"
                                          {
#line 823 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__PredNameTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_54_54, (MR_Integer) 0)));
#line 823 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_54_54, (MR_Integer) 1)));
#line 824 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 824 "prog_io_typeclass.m"
                                            if (parse_tree__prog_io_typeclass__succeeded)
#line 824 "prog_io_typeclass.m"
                                              {
#line 824 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__ArityTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, (MR_Integer) 0)));
#line 824 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, (MR_Integer) 1)));
#line 824 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 824 "prog_io_typeclass.m"
                                              }
#line 823 "prog_io_typeclass.m"
                                          }
#line 822 "prog_io_typeclass.m"
                                      }
#line 823 "prog_io_typeclass.m"
                                  }
#line 823 "prog_io_typeclass.m"
                              }
#line 822 "prog_io_typeclass.m"
                          }
#line 822 "prog_io_typeclass.m"
                      }
#line 822 "prog_io_typeclass.m"
                  }
#line 822 "prog_io_typeclass.m"
              }
#line 822 "prog_io_typeclass.m"
          }
#line 847 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 836 "prog_io_typeclass.m"
          {
#line 836 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__PredName_17;
#line 836 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__ArityInt_18;
#line 836 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__InstanceMethodName_20;
#line 827 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_259_259 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 827 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_57_57;
#line 827 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_58_58;
#line 828 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_19_19;

#line 827 "prog_io_typeclass.m"
            {
#line 827 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_259_259, parse_tree__prog_io_typeclass__PredNameTerm_14, &parse_tree__prog_io_typeclass__PredName_17);
            }
#line 827 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 827 "prog_io_typeclass.m"
              {
#line 828 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArityTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 828 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 828 "prog_io_typeclass.m"
                  {
#line 828 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_15, (MR_Integer) 0)));
#line 828 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_15, (MR_Integer) 1)));
#line 828 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_15, (MR_Integer) 2)));
#line 828 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 827 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 827 "prog_io_typeclass.m"
                      {
#line 828 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_57_57)) == (MR_mktag((MR_Integer) 1)));
#line 828 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 828 "prog_io_typeclass.m"
                          {
#line 828 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__ArityInt_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_57_57, (MR_Integer) 0)));
#line 829 "prog_io_typeclass.m"
                            {
#line 829 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_259_259, parse_tree__prog_io_typeclass__InstanceMethodTerm_10, &parse_tree__prog_io_typeclass__InstanceMethodName_20);
                            }
#line 828 "prog_io_typeclass.m"
                          }
#line 827 "prog_io_typeclass.m"
                      }
#line 828 "prog_io_typeclass.m"
                  }
#line 827 "prog_io_typeclass.m"
              }
#line 836 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 834 "prog_io_typeclass.m"
              {
#line 834 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceMethod_21;
#line 834 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_60_60;

#line 832 "prog_io_typeclass.m"
                {
#line 832 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 832 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethodName_20));
#line 832 "prog_io_typeclass.m"
                }
#line 832 "prog_io_typeclass.m"
                {
#line 832 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__InstanceMethod_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 832 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 0) = ((MR_Box) ((MR_Integer) 0));
#line 832 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__PredName_17));
#line 832 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_60_60));
#line 832 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ArityInt_18));
#line 832 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__TermContext_11));
#line 832 "prog_io_typeclass.m"
                }
#line 835 "prog_io_typeclass.m"
                {
#line 835 "prog_io_typeclass.m"
                  MR_Word base;
#line 835 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 835 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 835 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethod_21));
#line 835 "prog_io_typeclass.m"
                }
#line 834 "prog_io_typeclass.m"
              }
#line 836 "prog_io_typeclass.m"
            else
#line 837 "prog_io_typeclass.m"
              {
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_260_260 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 837 "prog_io_typeclass.m"
                MR_String parse_tree__prog_io_typeclass__MethodTermStr_22;
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_23;
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_24;
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_63_63;
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_66_66;
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_69_69;
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_72_72;
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_73_73;
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_82_82;
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_83_83;
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_84_84;
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_85_85;
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_86_86;
#line 837 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_89_89;

#line 837 "prog_io_typeclass.m"
                {
#line 837 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MethodTermStr_22 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_260_260, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 841 "prog_io_typeclass.m"
                {
#line 841 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 841 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 841 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_22));
#line 841 "prog_io_typeclass.m"
                }
#line 841 "prog_io_typeclass.m"
                {
#line 841 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 841 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_73_73));
#line 841 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 841 "prog_io_typeclass.m"
                }
#line 840 "prog_io_typeclass.m"
                {
#line 840 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_69_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 840 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_72_72));
#line 840 "prog_io_typeclass.m"
                }
#line 839 "prog_io_typeclass.m"
                {
#line 839 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_66_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[90])));
#line 839 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_69_69));
#line 839 "prog_io_typeclass.m"
                }
#line 838 "prog_io_typeclass.m"
                {
#line 838 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_typeclass_scalar_common_4[11])));
#line 838 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_66_66));
#line 838 "prog_io_typeclass.m"
                }
#line 838 "prog_io_typeclass.m"
                {
#line 838 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[89])));
#line 838 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_23, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_63_63));
#line 838 "prog_io_typeclass.m"
                }
#line 843 "prog_io_typeclass.m"
                {
#line 843 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_84_84 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_260_260, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 844 "prog_io_typeclass.m"
                {
#line 844 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 844 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_23));
#line 844 "prog_io_typeclass.m"
                }
#line 843 "prog_io_typeclass.m"
                {
#line 843 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_86_86));
#line 843 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 843 "prog_io_typeclass.m"
                }
#line 844 "prog_io_typeclass.m"
                {
#line 844 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 844 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_84_84));
#line 844 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_85_85));
#line 844 "prog_io_typeclass.m"
                }
#line 842 "prog_io_typeclass.m"
                {
#line 842 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_83_83));
#line 842 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "prog_io_typeclass.m"
                }
#line 842 "prog_io_typeclass.m"
                {
#line 842 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 842 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 842 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_82_82));
#line 842 "prog_io_typeclass.m"
                }
#line 845 "prog_io_typeclass.m"
                {
#line 845 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_24));
#line 845 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 845 "prog_io_typeclass.m"
                }
#line 845 "prog_io_typeclass.m"
                {
#line 845 "prog_io_typeclass.m"
                  MR_Word base;
#line 845 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 845 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 845 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_89_89));
#line 845 "prog_io_typeclass.m"
                }
#line 837 "prog_io_typeclass.m"
              }
#line 836 "prog_io_typeclass.m"
          }
#line 847 "prog_io_typeclass.m"
        else
#line 873 "prog_io_typeclass.m"
          {
#line 873 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FuncNameTerm_26;
#line 873 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ArityTerm_227;
#line 848 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_91_91;
#line 848 "prog_io_typeclass.m"
            MR_String parse_tree__prog_io_typeclass__V_92_92;
#line 848 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_93_93;
#line 848 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_94_94;
#line 848 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_95_95;
#line 848 "prog_io_typeclass.m"
            MR_String parse_tree__prog_io_typeclass__V_96_96;
#line 848 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_97_97;
#line 848 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_98_98;
#line 848 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_99_99;
#line 848 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SlashTerm_212;
#line 848 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_25_25;
#line 849 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_27_27;

#line 848 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ClassMethodTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 848 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 848 "prog_io_typeclass.m"
              {
#line 848 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 0)));
#line 848 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 1)));
#line 848 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 2)));
#line 848 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_91_91)) == (MR_mktag((MR_Integer) 0)));
#line 848 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 848 "prog_io_typeclass.m"
                  {
#line 848 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_91_91, (MR_Integer) 0)));
#line 848 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_92_92, (MR_String) "func") == 0);
#line 848 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 848 "prog_io_typeclass.m"
                      {
#line 848 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_93_93)) == (MR_mktag((MR_Integer) 1)));
#line 848 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 848 "prog_io_typeclass.m"
                          {
#line 848 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__SlashTerm_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_93_93, (MR_Integer) 0)));
#line 848 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_93_93, (MR_Integer) 1)));
#line 848 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_94_94 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 848 "prog_io_typeclass.m"
                              {
#line 849 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__SlashTerm_212)) == (MR_mktag((MR_Integer) 0)));
#line 849 "prog_io_typeclass.m"
                                if (parse_tree__prog_io_typeclass__succeeded)
#line 849 "prog_io_typeclass.m"
                                  {
#line 849 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_212, (MR_Integer) 0)));
#line 849 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_212, (MR_Integer) 1)));
#line 849 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_212, (MR_Integer) 2)));
#line 849 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_95_95)) == (MR_mktag((MR_Integer) 0)));
#line 849 "prog_io_typeclass.m"
                                    if (parse_tree__prog_io_typeclass__succeeded)
#line 849 "prog_io_typeclass.m"
                                      {
#line 849 "prog_io_typeclass.m"
                                        parse_tree__prog_io_typeclass__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_95_95, (MR_Integer) 0)));
#line 849 "prog_io_typeclass.m"
                                        parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_96_96, (MR_String) "/") == 0);
#line 848 "prog_io_typeclass.m"
                                        if (parse_tree__prog_io_typeclass__succeeded)
#line 848 "prog_io_typeclass.m"
                                          {
#line 849 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_97_97)) == (MR_mktag((MR_Integer) 1)));
#line 849 "prog_io_typeclass.m"
                                            if (parse_tree__prog_io_typeclass__succeeded)
#line 849 "prog_io_typeclass.m"
                                              {
#line 849 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__FuncNameTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_97_97, (MR_Integer) 0)));
#line 849 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_97_97, (MR_Integer) 1)));
#line 850 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_98_98)) == (MR_mktag((MR_Integer) 1)));
#line 850 "prog_io_typeclass.m"
                                                if (parse_tree__prog_io_typeclass__succeeded)
#line 850 "prog_io_typeclass.m"
                                                  {
#line 850 "prog_io_typeclass.m"
                                                    parse_tree__prog_io_typeclass__ArityTerm_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_98_98, (MR_Integer) 0)));
#line 850 "prog_io_typeclass.m"
                                                    parse_tree__prog_io_typeclass__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_98_98, (MR_Integer) 1)));
#line 850 "prog_io_typeclass.m"
                                                    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_99_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 850 "prog_io_typeclass.m"
                                                  }
#line 849 "prog_io_typeclass.m"
                                              }
#line 848 "prog_io_typeclass.m"
                                          }
#line 849 "prog_io_typeclass.m"
                                      }
#line 849 "prog_io_typeclass.m"
                                  }
#line 848 "prog_io_typeclass.m"
                              }
#line 848 "prog_io_typeclass.m"
                          }
#line 848 "prog_io_typeclass.m"
                      }
#line 848 "prog_io_typeclass.m"
                  }
#line 848 "prog_io_typeclass.m"
              }
#line 873 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 862 "prog_io_typeclass.m"
              {
#line 862 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FuncName_28;
#line 862 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__ArityInt_217;
#line 862 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceMethodName_218;
#line 853 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_261_261 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 853 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_100_100;
#line 853 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_101_101;
#line 854 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_29_29;

#line 853 "prog_io_typeclass.m"
                {
#line 853 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_261_261, parse_tree__prog_io_typeclass__FuncNameTerm_26, &parse_tree__prog_io_typeclass__FuncName_28);
                }
#line 853 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 853 "prog_io_typeclass.m"
                  {
#line 854 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArityTerm_227)) == (MR_mktag((MR_Integer) 0)));
#line 854 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 854 "prog_io_typeclass.m"
                      {
#line 854 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_227, (MR_Integer) 0)));
#line 854 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_227, (MR_Integer) 1)));
#line 854 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_227, (MR_Integer) 2)));
#line 854 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_101_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 853 "prog_io_typeclass.m"
                          {
#line 854 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_100_100)) == (MR_mktag((MR_Integer) 1)));
#line 854 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 854 "prog_io_typeclass.m"
                              {
#line 854 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__ArityInt_217 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_100_100, (MR_Integer) 0)));
#line 855 "prog_io_typeclass.m"
                                {
#line 855 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_261_261, parse_tree__prog_io_typeclass__InstanceMethodTerm_10, &parse_tree__prog_io_typeclass__InstanceMethodName_218);
                                }
#line 854 "prog_io_typeclass.m"
                              }
#line 853 "prog_io_typeclass.m"
                          }
#line 854 "prog_io_typeclass.m"
                      }
#line 853 "prog_io_typeclass.m"
                  }
#line 862 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 860 "prog_io_typeclass.m"
                  {
#line 860 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_103_103;
#line 860 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__InstanceMethod_213;

#line 858 "prog_io_typeclass.m"
                    {
#line 858 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 858 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_103_103, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethodName_218));
#line 858 "prog_io_typeclass.m"
                    }
#line 858 "prog_io_typeclass.m"
                    {
#line 858 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__InstanceMethod_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 858 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_213, 0) = ((MR_Box) ((MR_Integer) 1));
#line 858 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_213, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FuncName_28));
#line 858 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_213, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_103_103));
#line 858 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_213, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ArityInt_217));
#line 858 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_213, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__TermContext_11));
#line 858 "prog_io_typeclass.m"
                    }
#line 861 "prog_io_typeclass.m"
                    {
#line 861 "prog_io_typeclass.m"
                      MR_Word base;
#line 861 "prog_io_typeclass.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 861 "prog_io_typeclass.m"
                      *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 861 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethod_213));
#line 861 "prog_io_typeclass.m"
                    }
#line 860 "prog_io_typeclass.m"
                  }
#line 862 "prog_io_typeclass.m"
                else
#line 863 "prog_io_typeclass.m"
                  {
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_262_262 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_106_106;
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_109_109;
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_112_112;
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_115_115;
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_116_116;
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_125_125;
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_126_126;
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_127_127;
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_128_128;
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_129_129;
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_132_132;
#line 863 "prog_io_typeclass.m"
                    MR_String parse_tree__prog_io_typeclass__MethodTermStr_214;
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Pieces_215;
#line 863 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Spec_216;

#line 863 "prog_io_typeclass.m"
                    {
#line 863 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__MethodTermStr_214 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_262_262, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                    }
#line 867 "prog_io_typeclass.m"
                    {
#line 867 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 867 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 867 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_116_116, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_214));
#line 867 "prog_io_typeclass.m"
                    }
#line 867 "prog_io_typeclass.m"
                    {
#line 867 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 867 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_116_116));
#line 867 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 867 "prog_io_typeclass.m"
                    }
#line 866 "prog_io_typeclass.m"
                    {
#line 866 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_112_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 866 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_112_112, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_115_115));
#line 866 "prog_io_typeclass.m"
                    }
#line 865 "prog_io_typeclass.m"
                    {
#line 865 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 865 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_109_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[90])));
#line 865 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_109_109, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_112_112));
#line 865 "prog_io_typeclass.m"
                    }
#line 864 "prog_io_typeclass.m"
                    {
#line 864 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 864 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_106_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_typeclass_scalar_common_4[12])));
#line 864 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_106_106, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_109_109));
#line 864 "prog_io_typeclass.m"
                    }
#line 864 "prog_io_typeclass.m"
                    {
#line 864 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Pieces_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 864 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_215, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[89])));
#line 864 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_215, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_106_106));
#line 864 "prog_io_typeclass.m"
                    }
#line 869 "prog_io_typeclass.m"
                    {
#line 869 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_127_127 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_262_262, parse_tree__prog_io_typeclass__MethodTerm_7);
                    }
#line 870 "prog_io_typeclass.m"
                    {
#line 870 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 870 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_129_129, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_215));
#line 870 "prog_io_typeclass.m"
                    }
#line 869 "prog_io_typeclass.m"
                    {
#line 869 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_128_128, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_129_129));
#line 869 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 869 "prog_io_typeclass.m"
                    }
#line 870 "prog_io_typeclass.m"
                    {
#line 870 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 870 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_126_126, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_127_127));
#line 870 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_126_126, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_128_128));
#line 870 "prog_io_typeclass.m"
                    }
#line 868 "prog_io_typeclass.m"
                    {
#line 868 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_126_126));
#line 868 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 868 "prog_io_typeclass.m"
                    }
#line 868 "prog_io_typeclass.m"
                    {
#line 868 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Spec_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 868 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_216, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 868 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 868 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_216, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_125_125));
#line 868 "prog_io_typeclass.m"
                    }
#line 871 "prog_io_typeclass.m"
                    {
#line 871 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_132_132, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_216));
#line 871 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 871 "prog_io_typeclass.m"
                    }
#line 871 "prog_io_typeclass.m"
                    {
#line 871 "prog_io_typeclass.m"
                      MR_Word base;
#line 871 "prog_io_typeclass.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 871 "prog_io_typeclass.m"
                      *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 871 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_132_132));
#line 871 "prog_io_typeclass.m"
                    }
#line 863 "prog_io_typeclass.m"
                  }
#line 862 "prog_io_typeclass.m"
              }
#line 873 "prog_io_typeclass.m"
            else
#line 874 "prog_io_typeclass.m"
              {
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_263_263 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_136_136;
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_139_139;
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_142_142;
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_145_145;
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_148_148;
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_151_151;
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_152_152;
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_161_161;
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_162_162;
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_163_163;
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_164_164;
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_165_165;
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_168_168;
#line 874 "prog_io_typeclass.m"
                MR_String parse_tree__prog_io_typeclass__MethodTermStr_223;
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_224;
#line 874 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_225;

#line 874 "prog_io_typeclass.m"
                {
#line 874 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MethodTermStr_223 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_263_263, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 880 "prog_io_typeclass.m"
                {
#line 880 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 880 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_152_152, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_223));
#line 880 "prog_io_typeclass.m"
                }
#line 880 "prog_io_typeclass.m"
                {
#line 880 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_151_151, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_152_152));
#line 880 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 880 "prog_io_typeclass.m"
                }
#line 879 "prog_io_typeclass.m"
                {
#line 879 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_148_148, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 879 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_148_148, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_151_151));
#line 879 "prog_io_typeclass.m"
                }
#line 878 "prog_io_typeclass.m"
                {
#line 878 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 878 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_145_145, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[90])));
#line 878 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_145_145, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_148_148));
#line 878 "prog_io_typeclass.m"
                }
#line 877 "prog_io_typeclass.m"
                {
#line 877 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 877 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_142_142, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_typeclass_scalar_common_4[14])));
#line 877 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_142_142, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_145_145));
#line 877 "prog_io_typeclass.m"
                }
#line 876 "prog_io_typeclass.m"
                {
#line 876 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 876 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_139_139, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[92])));
#line 876 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_139_139, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_142_142));
#line 876 "prog_io_typeclass.m"
                }
#line 875 "prog_io_typeclass.m"
                {
#line 875 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 875 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_136_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_typeclass_scalar_common_4[13])));
#line 875 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_136_136, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_139_139));
#line 875 "prog_io_typeclass.m"
                }
#line 875 "prog_io_typeclass.m"
                {
#line 875 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 875 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_224, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[89])));
#line 875 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_224, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_136_136));
#line 875 "prog_io_typeclass.m"
                }
#line 882 "prog_io_typeclass.m"
                {
#line 882 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_163_163 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_263_263, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 882 "prog_io_typeclass.m"
                {
#line 882 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_165_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 882 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_165_165, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_224));
#line 882 "prog_io_typeclass.m"
                }
#line 882 "prog_io_typeclass.m"
                {
#line 882 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 882 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_164_164, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_165_165));
#line 882 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "prog_io_typeclass.m"
                }
#line 882 "prog_io_typeclass.m"
                {
#line 882 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 882 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_162_162, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_163_163));
#line 882 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_162_162, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_164_164));
#line 882 "prog_io_typeclass.m"
                }
#line 881 "prog_io_typeclass.m"
                {
#line 881 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_161_161, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_162_162));
#line 881 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 881 "prog_io_typeclass.m"
                }
#line 881 "prog_io_typeclass.m"
                {
#line 881 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 881 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 881 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 881 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_225, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_161_161));
#line 881 "prog_io_typeclass.m"
                }
#line 883 "prog_io_typeclass.m"
                {
#line 883 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_168_168, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_225));
#line 883 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_168_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "prog_io_typeclass.m"
                }
#line 883 "prog_io_typeclass.m"
                {
#line 883 "prog_io_typeclass.m"
                  MR_Word base;
#line 883 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 883 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 883 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_168_168));
#line 883 "prog_io_typeclass.m"
                }
#line 874 "prog_io_typeclass.m"
              }
#line 873 "prog_io_typeclass.m"
          }
#line 847 "prog_io_typeclass.m"
      }
#line 885 "prog_io_typeclass.m"
    else
#line 895 "prog_io_typeclass.m"
      {
#line 895 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeItem0_31;

#line 896 "prog_io_typeclass.m"
        {
#line 896 "prog_io_typeclass.m"
          parse_tree__prog_io__parse_item_5_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_4[15], parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) -1, &parse_tree__prog_io_typeclass__MaybeItem0_31);
        }
#line 900 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItem0_31)) == (MR_mktag((MR_Integer) 0))))
#line 899 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = (MR_Word) parse_tree__prog_io_typeclass__MaybeItem0_31;
#line 900 "prog_io_typeclass.m"
        else
#line 901 "prog_io_typeclass.m"
          {
#line 901 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Item_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItem0_31, (MR_Integer) 0)));
#line 910 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemClause_34;

#line 902 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Item_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_33, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 902 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 902 "prog_io_typeclass.m"
              {
#line 902 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__ItemClause_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_33, (MR_Integer) 1)));
#line 904 "prog_io_typeclass.m"
                {
#line 904 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__PredOrFunc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 2)));
#line 904 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__ClassMethodName_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 3)));
#line 904 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__HeadArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 4)));
#line 904 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__Context_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 6)));
#line 904 "prog_io_typeclass.m"
                  MR_Integer parse_tree__prog_io_typeclass__V_172_172;
#line 904 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_173_173;
#line 904 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_174_174;
#line 904 "prog_io_typeclass.m"
                  MR_Integer parse_tree__prog_io_typeclass__ArityInt_234;
#line 904 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__InstanceMethod_235;
#line 903 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass___Origin_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 0)));
#line 903 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass___VarNames_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 1)));
#line 903 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass___ClauseBody_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 5)));
#line 903 "prog_io_typeclass.m"
                  MR_Integer parse_tree__prog_io_typeclass___SeqNum_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_34, (MR_Integer) 7)));

#line 905 "prog_io_typeclass.m"
                  {
#line 905 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_172_172 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[7], parse_tree__prog_io_typeclass__HeadArgs_39);
                  }
#line 905 "prog_io_typeclass.m"
                  {
#line 905 "prog_io_typeclass.m"
                    parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__prog_io_typeclass__PredOrFunc_37, &parse_tree__prog_io_typeclass__ArityInt_234, parse_tree__prog_io_typeclass__V_172_172);
                  }
#line 907 "prog_io_typeclass.m"
                  {
#line 907 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_174_174, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemClause_34));
#line 907 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_174_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 907 "prog_io_typeclass.m"
                  }
#line 906 "prog_io_typeclass.m"
                  {
#line 906 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_173_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_173_173, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_174_174));
#line 906 "prog_io_typeclass.m"
                  }
#line 906 "prog_io_typeclass.m"
                  {
#line 906 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__InstanceMethod_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 906 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_235, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__PredOrFunc_37));
#line 906 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_235, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassMethodName_38));
#line 906 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_235, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_173_173));
#line 906 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_235, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ArityInt_234));
#line 906 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_235, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_41));
#line 906 "prog_io_typeclass.m"
                  }
#line 909 "prog_io_typeclass.m"
                  {
#line 909 "prog_io_typeclass.m"
                    MR_Word base;
#line 909 "prog_io_typeclass.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 909 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 909 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethod_235));
#line 909 "prog_io_typeclass.m"
                  }
#line 904 "prog_io_typeclass.m"
                }
#line 902 "prog_io_typeclass.m"
              }
#line 902 "prog_io_typeclass.m"
            else
#line 911 "prog_io_typeclass.m"
              {
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_265_265 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_178_178;
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_181_181;
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_184_184;
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_187_187;
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_190_190;
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_193_193;
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_194_194;
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_203_203;
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_204_204;
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_205_205;
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_206_206;
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_207_207;
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_210_210;
#line 911 "prog_io_typeclass.m"
                MR_String parse_tree__prog_io_typeclass__MethodTermStr_236;
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_237;
#line 911 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_238;

#line 911 "prog_io_typeclass.m"
                {
#line 911 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MethodTermStr_236 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_265_265, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 917 "prog_io_typeclass.m"
                {
#line 917 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_194_194 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_194_194, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 917 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_194_194, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_236));
#line 917 "prog_io_typeclass.m"
                }
#line 917 "prog_io_typeclass.m"
                {
#line 917 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_193_193, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_194_194));
#line 917 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_193_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 917 "prog_io_typeclass.m"
                }
#line 916 "prog_io_typeclass.m"
                {
#line 916 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 916 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_190_190, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 916 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_190_190, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_193_193));
#line 916 "prog_io_typeclass.m"
                }
#line 915 "prog_io_typeclass.m"
                {
#line 915 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 915 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_187_187, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[90])));
#line 915 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_187_187, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_190_190));
#line 915 "prog_io_typeclass.m"
                }
#line 914 "prog_io_typeclass.m"
                {
#line 914 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_184_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_typeclass_scalar_common_4[14])));
#line 914 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_184_184, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_187_187));
#line 914 "prog_io_typeclass.m"
                }
#line 913 "prog_io_typeclass.m"
                {
#line 913 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_181_181, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[92])));
#line 913 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_181_181, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_184_184));
#line 913 "prog_io_typeclass.m"
                }
#line 912 "prog_io_typeclass.m"
                {
#line 912 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_178_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_typeclass_scalar_common_4[13])));
#line 912 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_178_178, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_181_181));
#line 912 "prog_io_typeclass.m"
                }
#line 912 "prog_io_typeclass.m"
                {
#line 912 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_237, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[93])));
#line 912 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_237, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_178_178));
#line 912 "prog_io_typeclass.m"
                }
#line 919 "prog_io_typeclass.m"
                {
#line 919 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_205_205 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_265_265, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 920 "prog_io_typeclass.m"
                {
#line 920 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_207_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 920 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_207_207, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_237));
#line 920 "prog_io_typeclass.m"
                }
#line 919 "prog_io_typeclass.m"
                {
#line 919 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_206_206, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_207_207));
#line 919 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_206_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 919 "prog_io_typeclass.m"
                }
#line 920 "prog_io_typeclass.m"
                {
#line 920 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 920 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_204_204, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_205_205));
#line 920 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_204_204, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_206_206));
#line 920 "prog_io_typeclass.m"
                }
#line 918 "prog_io_typeclass.m"
                {
#line 918 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_203_203, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_204_204));
#line 918 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 918 "prog_io_typeclass.m"
                }
#line 918 "prog_io_typeclass.m"
                {
#line 918 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_238 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 918 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_238, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 918 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 918 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_238, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_203_203));
#line 918 "prog_io_typeclass.m"
                }
#line 921 "prog_io_typeclass.m"
                {
#line 921 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_210_210, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_238));
#line 921 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 921 "prog_io_typeclass.m"
                }
#line 921 "prog_io_typeclass.m"
                {
#line 921 "prog_io_typeclass.m"
                  MR_Word base;
#line 921 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 921 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 921 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_210_210));
#line 921 "prog_io_typeclass.m"
                }
#line 911 "prog_io_typeclass.m"
              }
#line 901 "prog_io_typeclass.m"
          }
#line 895 "prog_io_typeclass.m"
      }
#line 885 "prog_io_typeclass.m"
  }
#line 809 "prog_io_typeclass.m"
}

#line 397 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(
#line 397 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 397 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2,
#line 397 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3,
#line 397 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4,
#line 397 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5)
#line 397 "prog_io_typeclass.m"
{
#line 400 "prog_io_typeclass.m"
  {
#line 400 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 400 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 400 "prog_io_typeclass.m"
      {
#line 400 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4;
#line 400 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2;
#line 400 "prog_io_typeclass.m"
      }
#line 400 "prog_io_typeclass.m"
    else
#line 401 "prog_io_typeclass.m"
      {
#line 401 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 401 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 401 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22;
#line 401 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23;

#line 402 "prog_io_typeclass.m"
        {
#line 402 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__prog_io_typeclass__Xs_13, parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2, &parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22, parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4, &parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23);
        }
#line 406 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__X_12)) == (MR_mktag((MR_Integer) 0))))
#line 407 "prog_io_typeclass.m"
          {
#line 407 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__CurSpecs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__X_12, (MR_Integer) 0)));

#line 408 "prog_io_typeclass.m"
            {
#line 408 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_typeclass__CurSpecs_17, parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23);
            }
#line 408 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22;
#line 407 "prog_io_typeclass.m"
          }
#line 406 "prog_io_typeclass.m"
        else
#line 404 "prog_io_typeclass.m"
          {
#line 404 "prog_io_typeclass.m"
            MR_Box parse_tree__prog_io_typeclass__CurMethod_16 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__X_12, (MR_Integer) 0));

#line 405 "prog_io_typeclass.m"
            {
#line 405 "prog_io_typeclass.m"
              MR_Word base;
#line 405 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3 = base;
#line 405 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_io_typeclass__CurMethod_16;
#line 405 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22));
#line 405 "prog_io_typeclass.m"
            }
#line 405 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23;
#line 404 "prog_io_typeclass.m"
          }
#line 401 "prog_io_typeclass.m"
      }
#line 400 "prog_io_typeclass.m"
  }
#line 397 "prog_io_typeclass.m"
}

#line 254 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 254 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 254 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 254 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 254 "prog_io_typeclass.m"
{
#line 257 "prog_io_typeclass.m"
  {
#line 257 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 257 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_9;
#line 257 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ConstraintList_39;

#line 520 "prog_io_typeclass.m"
    {
#line 520 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__ConstraintList_39);
    }
#line 521 "prog_io_typeclass.m"
    {
#line 521 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__ConstraintList_39, &parse_tree__prog_io_typeclass__Result0_9);
    }
#line 275 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_9)) == (MR_mktag((MR_Integer) 0))))
#line 276 "prog_io_typeclass.m"
      {
#line 276 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));

#line 277 "prog_io_typeclass.m"
        {
#line 277 "prog_io_typeclass.m"
          MR_Word base;
#line 277 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 277 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__Result_8 = base;
#line 277 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_15));
#line 277 "prog_io_typeclass.m"
        }
#line 276 "prog_io_typeclass.m"
      }
#line 275 "prog_io_typeclass.m"
    else
#line 260 "prog_io_typeclass.m"
      {
#line 260 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArbitraryConstraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));
#line 266 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_11;
#line 266 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps_12;

#line 262 "prog_io_typeclass.m"
        {
#line 262 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(parse_tree__prog_io_typeclass__ArbitraryConstraints_10, &parse_tree__prog_io_typeclass__Constraints_11, &parse_tree__prog_io_typeclass__FunDeps_12);
        }
#line 266 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 265 "prog_io_typeclass.m"
          {
#line 265 "prog_io_typeclass.m"
            MR_Word base;
#line 265 "prog_io_typeclass.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__Result_8 = base;
#line 265 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_11));
#line 265 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps_12));
#line 265 "prog_io_typeclass.m"
          }
#line 266 "prog_io_typeclass.m"
        else
#line 269 "prog_io_typeclass.m"
          {
#line 269 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_14;
#line 269 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_26_26;
#line 269 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_27_27;
#line 269 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_28_28;
#line 269 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_33_33;

#line 271 "prog_io_typeclass.m"
            {
#line 271 "prog_io_typeclass.m"
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
#line 270 "prog_io_typeclass.m"
            {
#line 270 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_27_27));
#line 270 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "prog_io_typeclass.m"
            }
#line 270 "prog_io_typeclass.m"
            {
#line 270 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 270 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 270 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_26_26));
#line 270 "prog_io_typeclass.m"
            }
#line 273 "prog_io_typeclass.m"
            {
#line 273 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_14));
#line 273 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 273 "prog_io_typeclass.m"
            }
#line 273 "prog_io_typeclass.m"
            {
#line 273 "prog_io_typeclass.m"
              MR_Word base;
#line 273 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 273 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 273 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_33_33));
#line 273 "prog_io_typeclass.m"
            }
#line 269 "prog_io_typeclass.m"
          }
#line 260 "prog_io_typeclass.m"
      }
#line 257 "prog_io_typeclass.m"
  }
#line 254 "prog_io_typeclass.m"
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
#line 453 "prog_io_typeclass.m"
  {
#line 453 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 453 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_9;
#line 453 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ConstraintList_39;

#line 520 "prog_io_typeclass.m"
    {
#line 520 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__ConstraintList_39);
    }
#line 521 "prog_io_typeclass.m"
    {
#line 521 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__ConstraintList_39, &parse_tree__prog_io_typeclass__Result0_9);
    }
#line 470 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_9)) == (MR_mktag((MR_Integer) 0))))
#line 471 "prog_io_typeclass.m"
      {
#line 471 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));

#line 472 "prog_io_typeclass.m"
        {
#line 472 "prog_io_typeclass.m"
          MR_Word base;
#line 472 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 472 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__Result_8 = base;
#line 472 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_15));
#line 472 "prog_io_typeclass.m"
        }
#line 471 "prog_io_typeclass.m"
      }
#line 470 "prog_io_typeclass.m"
    else
#line 456 "prog_io_typeclass.m"
      {
#line 456 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArbitraryConstraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));
#line 462 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ProgConstraints_11;
#line 462 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__InstVarSub_12;

#line 458 "prog_io_typeclass.m"
        {
#line 458 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(parse_tree__prog_io_typeclass__ArbitraryConstraints_10, &parse_tree__prog_io_typeclass__ProgConstraints_11, &parse_tree__prog_io_typeclass__InstVarSub_12);
        }
#line 462 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 461 "prog_io_typeclass.m"
          {
#line 461 "prog_io_typeclass.m"
            MR_Word base;
#line 461 "prog_io_typeclass.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__Result_8 = base;
#line 461 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ProgConstraints_11));
#line 461 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVarSub_12));
#line 461 "prog_io_typeclass.m"
          }
#line 462 "prog_io_typeclass.m"
        else
#line 464 "prog_io_typeclass.m"
          {
#line 464 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_14;
#line 464 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_26_26;
#line 464 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_27_27;
#line 464 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_28_28;
#line 464 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_33_33;

#line 466 "prog_io_typeclass.m"
            {
#line 466 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_28_28 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7);
            }
#line 467 "prog_io_typeclass.m"
            {
#line 467 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 467 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_28_28));
#line 467 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[87])));
#line 467 "prog_io_typeclass.m"
            }
#line 465 "prog_io_typeclass.m"
            {
#line 465 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_27_27));
#line 465 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "prog_io_typeclass.m"
            }
#line 465 "prog_io_typeclass.m"
            {
#line 465 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 465 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 465 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_26_26));
#line 465 "prog_io_typeclass.m"
            }
#line 468 "prog_io_typeclass.m"
            {
#line 468 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_14));
#line 468 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 468 "prog_io_typeclass.m"
            }
#line 468 "prog_io_typeclass.m"
            {
#line 468 "prog_io_typeclass.m"
              MR_Word base;
#line 468 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 468 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 468 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_33_33));
#line 468 "prog_io_typeclass.m"
            }
#line 464 "prog_io_typeclass.m"
          }
#line 456 "prog_io_typeclass.m"
      }
#line 453 "prog_io_typeclass.m"
  }
#line 50 "prog_io_typeclass.m"
}

#line 433 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
#line 433 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 433 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 433 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 433 "prog_io_typeclass.m"
{
#line 433 "prog_io_typeclass.m"
  {
#line 433 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 433 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 433 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_Constraint_3;

#line 433 "prog_io_typeclass.m"
    {
#line 433 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_Constraint_3);
    }
#line 433 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 433 "prog_io_typeclass.m"
      {
#line 433 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_Constraint_3));
#line 433 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 433 "prog_io_typeclass.m"
      }
#line 433 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 433 "prog_io_typeclass.m"
  }
#line 433 "prog_io_typeclass.m"
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
#line 416 "prog_io_typeclass.m"
  {
#line 416 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 416 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_26;
#line 416 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ConstraintList_51;

#line 520 "prog_io_typeclass.m"
    {
#line 520 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__ConstraintList_51);
    }
#line 521 "prog_io_typeclass.m"
    {
#line 521 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__ConstraintList_51, &parse_tree__prog_io_typeclass__Result0_26);
    }
#line 442 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_26)) == (MR_mktag((MR_Integer) 0))))
#line 444 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__Result_8 = (MR_Word) parse_tree__prog_io_typeclass__Result0_26;
#line 442 "prog_io_typeclass.m"
    else
#line 430 "prog_io_typeclass.m"
      {
#line 430 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArbitraryConstraints_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_26, (MR_Integer) 0)));
#line 436 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_28;

#line 433 "prog_io_typeclass.m"
        {
#line 433 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = mercury__list__map_3_p_2((MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[6], parse_tree__prog_io_typeclass__ArbitraryConstraints_27, &parse_tree__prog_io_typeclass__Constraints_28);
        }
#line 436 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 435 "prog_io_typeclass.m"
          {
#line 435 "prog_io_typeclass.m"
            MR_Word base;
#line 435 "prog_io_typeclass.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 435 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__Result_8 = base;
#line 435 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_28));
#line 435 "prog_io_typeclass.m"
          }
#line 436 "prog_io_typeclass.m"
        else
#line 439 "prog_io_typeclass.m"
          {
#line 439 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_29;
#line 439 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_34_34;
#line 439 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_35_35;
#line 439 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_36_36;
#line 439 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_41_41;

#line 438 "prog_io_typeclass.m"
            {
#line 438 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_36_36 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7);
            }
#line 439 "prog_io_typeclass.m"
            {
#line 439 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_36_36));
#line 439 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[86])));
#line 439 "prog_io_typeclass.m"
            }
#line 437 "prog_io_typeclass.m"
            {
#line 437 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_35_35));
#line 437 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "prog_io_typeclass.m"
            }
#line 437 "prog_io_typeclass.m"
            {
#line 437 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 437 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 437 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_29, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_34_34));
#line 437 "prog_io_typeclass.m"
            }
#line 440 "prog_io_typeclass.m"
            {
#line 440 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_29));
#line 440 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "prog_io_typeclass.m"
            }
#line 440 "prog_io_typeclass.m"
            {
#line 440 "prog_io_typeclass.m"
              MR_Word base;
#line 440 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 440 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 440 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_41_41));
#line 440 "prog_io_typeclass.m"
            }
#line 439 "prog_io_typeclass.m"
          }
#line 430 "prog_io_typeclass.m"
      }
#line 416 "prog_io_typeclass.m"
  }
#line 45 "prog_io_typeclass.m"
}

#line 774 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__check_tvars_in_instance_constraint__774__1_3_f_0(
#line 774 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_14,
#line 774 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_31,
#line 774 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_62)
#line 774 "prog_io_typeclass.m"
{
#line 774 "prog_io_typeclass.m"
  {
#line 774 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 774 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__HeadVar__4_63;

#line 774 "prog_io_typeclass.m"
    {
#line 774 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__HeadVar__4_63 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__TVarSet_14, parse_tree__prog_io_typeclass__HeadVar__2_31, parse_tree__prog_io_typeclass__HeadVar__3_62);
    }
#line 774 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__4_63;
#line 774 "prog_io_typeclass.m"
  }
#line 774 "prog_io_typeclass.m"
}

#line 770 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__check_tvars_in_instance_constraint__770__1_2_p_0(
#line 770 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypesVars_19,
#line 770 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_57)
#line 770 "prog_io_typeclass.m"
{
#line 770 "prog_io_typeclass.m"
  {
#line 770 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 931 "prog_io_typeclass.m"
    {
#line 931 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], ((MR_Box) (parse_tree__prog_io_typeclass__HeadVar__2_57)), parse_tree__prog_io_typeclass__TypesVars_19);
    }
#line 770 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 770 "prog_io_typeclass.m"
  }
#line 770 "prog_io_typeclass.m"
}

#line 341 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_class_methods__341__1_4_p_0(
#line 341 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_5,
#line 341 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_7,
#line 341 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_17,
#line 341 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__4_18)
#line 341 "prog_io_typeclass.m"
{
#line 341 "prog_io_typeclass.m"
  {
#line 341 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 341 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Item_12;

#line 344 "prog_io_typeclass.m"
    {
#line 344 "prog_io_typeclass.m"
      parse_tree__prog_io__parse_decl_5_p_0(parse_tree__prog_io_typeclass__ModuleName_5, parse_tree__prog_io_typeclass__VarSet_7, parse_tree__prog_io_typeclass__HeadVar__3_17, (MR_Integer) -1, &parse_tree__prog_io_typeclass__Item_12);
    }
#line 346 "prog_io_typeclass.m"
    {
#line 346 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__item_to_class_method_3_p_0(parse_tree__prog_io_typeclass__Item_12, parse_tree__prog_io_typeclass__HeadVar__3_17, parse_tree__prog_io_typeclass__HeadVar__4_18);
#line 346 "prog_io_typeclass.m"
      return;
    }
#line 341 "prog_io_typeclass.m"
  }
#line 341 "prog_io_typeclass.m"
}

#line 309 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__309__1_2_p_0(
#line 309 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_54,
#line 309 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_55)
#line 309 "prog_io_typeclass.m"
{
#line 309 "prog_io_typeclass.m"
  {
#line 309 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 309 "prog_io_typeclass.m"
    {
#line 309 "prog_io_typeclass.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__HeadVar__1_54, parse_tree__prog_io_typeclass__HeadVar__2_55);
#line 309 "prog_io_typeclass.m"
      return;
    }
#line 309 "prog_io_typeclass.m"
  }
#line 309 "prog_io_typeclass.m"
}

#line 200 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__200__1_3_f_0(
#line 200 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_79,
#line 200 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_171,
#line 200 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_162)
#line 200 "prog_io_typeclass.m"
{
#line 200 "prog_io_typeclass.m"
  {
#line 200 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 200 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__HeadVar__4_163;

#line 200 "prog_io_typeclass.m"
    {
#line 200 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__HeadVar__4_163 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__HeadVar__2_171, parse_tree__prog_io_typeclass__HeadVar__1_79, parse_tree__prog_io_typeclass__HeadVar__3_162);
    }
#line 200 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__4_163;
#line 200 "prog_io_typeclass.m"
  }
#line 200 "prog_io_typeclass.m"
}

#line 197 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__197__1_3_f_0(
#line 197 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_77,
#line 197 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_171,
#line 197 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_159)
#line 197 "prog_io_typeclass.m"
{
#line 197 "prog_io_typeclass.m"
  {
#line 197 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 197 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__HeadVar__4_160;

#line 197 "prog_io_typeclass.m"
    {
#line 197 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__HeadVar__4_160 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__HeadVar__2_171, parse_tree__prog_io_typeclass__HeadVar__1_77, parse_tree__prog_io_typeclass__HeadVar__3_159);
    }
#line 197 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__4_160;
#line 197 "prog_io_typeclass.m"
  }
#line 197 "prog_io_typeclass.m"
}

#line 158 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__158__1_2_p_0(
#line 158 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 158 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_154)
#line 158 "prog_io_typeclass.m"
{
#line 158 "prog_io_typeclass.m"
  {
#line 158 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 158 "prog_io_typeclass.m"
    {
#line 158 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__is_in_list_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__Params_26, ((MR_Box) (parse_tree__prog_io_typeclass__HeadVar__2_154)));
    }
#line 158 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 158 "prog_io_typeclass.m"
  }
#line 158 "prog_io_typeclass.m"
}

#line 156 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__156__1_2_p_0(
#line 156 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 156 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_152)
#line 156 "prog_io_typeclass.m"
{
#line 156 "prog_io_typeclass.m"
  {
#line 156 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 156 "prog_io_typeclass.m"
    {
#line 156 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__is_in_list_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__Params_26, ((MR_Box) (parse_tree__prog_io_typeclass__HeadVar__2_152)));
    }
#line 156 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 156 "prog_io_typeclass.m"
  }
#line 156 "prog_io_typeclass.m"
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

#line 514 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0(
#line 514 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 514 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 514 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 514 "prog_io_typeclass.m"
{
#line 514 "prog_io_typeclass.m"
  {
#line 514 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 514 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar1_4 = parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 514 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar2_5 = parse_tree__prog_io_typeclass__HeadVar__3_3;

#line 514 "prog_io_typeclass.m"
    {
#line 514 "prog_io_typeclass.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[8], parse_tree__prog_io_typeclass__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar2_5)));
#line 514 "prog_io_typeclass.m"
      return;
    }
#line 514 "prog_io_typeclass.m"
  }
#line 514 "prog_io_typeclass.m"
}

#line 514 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0(
#line 514 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 514 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2)
#line 514 "prog_io_typeclass.m"
{
#line 514 "prog_io_typeclass.m"
  {
#line 514 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 514 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar1_3 = parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 514 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar2_4 = parse_tree__prog_io_typeclass__HeadVar__2_2;

#line 514 "prog_io_typeclass.m"
    {
#line 514 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[8], ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar2_4)));
    }
#line 514 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 514 "prog_io_typeclass.m"
  }
#line 514 "prog_io_typeclass.m"
}

#line 497 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0(
#line 497 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 497 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 497 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 497 "prog_io_typeclass.m"
{
#line 497 "prog_io_typeclass.m"
  {
#line 497 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 497 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastX_45 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 497 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastY_46 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__3_3;

#line 497 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__CastX_45 == parse_tree__prog_io_typeclass__CastY_46);
#line 497 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 4449 "parse_tree.prog_io_typeclass.c"
      *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 0;
#line 497 "prog_io_typeclass.m"
    else
#line 497 "prog_io_typeclass.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 497 "prog_io_typeclass.m"
        {
#line 497 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_52_52 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 2);

#line 497 "prog_io_typeclass.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 497 "prog_io_typeclass.m"
            {
#line 497 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_44_44 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3), (MR_Integer) 2);

#line 497 "prog_io_typeclass.m"
              {
#line 497 "prog_io_typeclass.m"
                parse_tree__prog_data____Compare____prog_fundep_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_52_52, parse_tree__prog_io_typeclass__V_44_44);
#line 497 "prog_io_typeclass.m"
                return;
              }
#line 497 "prog_io_typeclass.m"
            }
#line 497 "prog_io_typeclass.m"
          else
#line 497 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4480 "parse_tree.prog_io_typeclass.c"
              *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 497 "prog_io_typeclass.m"
            else
#line 497 "prog_io_typeclass.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4486 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 497 "prog_io_typeclass.m"
              else
#line 4490 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 497 "prog_io_typeclass.m"
        }
#line 497 "prog_io_typeclass.m"
      else
#line 497 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 497 "prog_io_typeclass.m"
          {
#line 497 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 1)));
#line 497 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 0)));

#line 497 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4507 "parse_tree.prog_io_typeclass.c"
              *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 497 "prog_io_typeclass.m"
            else
#line 497 "prog_io_typeclass.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 497 "prog_io_typeclass.m"
                {
#line 497 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__3_3, (MR_Integer) 0)));
#line 497 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__3_3, (MR_Integer) 1)));
#line 497 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_32_32;

#line 497 "prog_io_typeclass.m"
                  {
#line 497 "prog_io_typeclass.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5], &parse_tree__prog_io_typeclass__V_32_32, ((MR_Box) (parse_tree__prog_io_typeclass__V_54_54)), ((MR_Box) (parse_tree__prog_io_typeclass__V_30_30)));
                  }
#line 4527 "parse_tree.prog_io_typeclass.c"
                  parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_32_32 == (MR_Integer) 0);
#line 497 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = !(parse_tree__prog_io_typeclass__succeeded);
#line 497 "prog_io_typeclass.m"
                  if (parse_tree__prog_io_typeclass__succeeded)
#line 497 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__HeadVar__1_1 = parse_tree__prog_io_typeclass__V_32_32;
#line 497 "prog_io_typeclass.m"
                  else
#line 497 "prog_io_typeclass.m"
                    {
#line 497 "prog_io_typeclass.m"
                      parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_53_53, parse_tree__prog_io_typeclass__V_31_31);
#line 497 "prog_io_typeclass.m"
                      return;
                    }
#line 497 "prog_io_typeclass.m"
                }
#line 497 "prog_io_typeclass.m"
              else
#line 497 "prog_io_typeclass.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4550 "parse_tree.prog_io_typeclass.c"
                  *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 497 "prog_io_typeclass.m"
                else
#line 4554 "parse_tree.prog_io_typeclass.c"
                  *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 497 "prog_io_typeclass.m"
          }
#line 497 "prog_io_typeclass.m"
        else
#line 497 "prog_io_typeclass.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 497 "prog_io_typeclass.m"
            {
#line 497 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_55_55 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 1);

#line 497 "prog_io_typeclass.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4569 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 497 "prog_io_typeclass.m"
              else
#line 497 "prog_io_typeclass.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4575 "parse_tree.prog_io_typeclass.c"
                  *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 497 "prog_io_typeclass.m"
                else
#line 497 "prog_io_typeclass.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 497 "prog_io_typeclass.m"
                    {
#line 497 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__V_16_16 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3), (MR_Integer) 1);

#line 497 "prog_io_typeclass.m"
                      {
#line 497 "prog_io_typeclass.m"
                        parse_tree__prog_data____Compare____prog_constraint_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_55_55, parse_tree__prog_io_typeclass__V_16_16);
#line 497 "prog_io_typeclass.m"
                        return;
                      }
#line 497 "prog_io_typeclass.m"
                    }
#line 497 "prog_io_typeclass.m"
                  else
#line 4597 "parse_tree.prog_io_typeclass.c"
                    *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 497 "prog_io_typeclass.m"
            }
#line 497 "prog_io_typeclass.m"
          else
#line 497 "prog_io_typeclass.m"
            {
#line 497 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_56_56 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 0);

#line 497 "prog_io_typeclass.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4610 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 497 "prog_io_typeclass.m"
              else
#line 497 "prog_io_typeclass.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4616 "parse_tree.prog_io_typeclass.c"
                  *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 497 "prog_io_typeclass.m"
                else
#line 497 "prog_io_typeclass.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4622 "parse_tree.prog_io_typeclass.c"
                    *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 497 "prog_io_typeclass.m"
                  else
#line 497 "prog_io_typeclass.m"
                    {
#line 497 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3), (MR_Integer) 0);

#line 497 "prog_io_typeclass.m"
                      {
#line 497 "prog_io_typeclass.m"
                        parse_tree__prog_data____Compare____prog_constraint_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_56_56, parse_tree__prog_io_typeclass__V_5_5);
#line 497 "prog_io_typeclass.m"
                        return;
                      }
#line 497 "prog_io_typeclass.m"
                    }
#line 497 "prog_io_typeclass.m"
            }
#line 497 "prog_io_typeclass.m"
  }
#line 497 "prog_io_typeclass.m"
}

#line 497 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0(
#line 497 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 497 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2)
#line 497 "prog_io_typeclass.m"
{
#line 497 "prog_io_typeclass.m"
  {
#line 497 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 497 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastX_13 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 497 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastY_14 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__2_2;

#line 497 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__CastX_13 == parse_tree__prog_io_typeclass__CastY_14);
#line 497 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 497 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 497 "prog_io_typeclass.m"
    else
#line 497 "prog_io_typeclass.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 497 "prog_io_typeclass.m"
        {
#line 497 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_11_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 2);
#line 497 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_12_12;

#line 497 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 497 "prog_io_typeclass.m"
          if (parse_tree__prog_io_typeclass__succeeded)
#line 497 "prog_io_typeclass.m"
            {
#line 497 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_12_12 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 2);
#line 4690 "parse_tree.prog_io_typeclass.c"
              {
#line 4692 "parse_tree.prog_io_typeclass.c"
                return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____prog_fundep_0_0(parse_tree__prog_io_typeclass__V_11_11, parse_tree__prog_io_typeclass__V_12_12);
              }
#line 497 "prog_io_typeclass.m"
            }
#line 497 "prog_io_typeclass.m"
        }
#line 497 "prog_io_typeclass.m"
      else
#line 497 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 497 "prog_io_typeclass.m"
          {
#line 497 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeInfo_16_16;
#line 497 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 497 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 497 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_9_9;
#line 497 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_10_10;

#line 497 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 497 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 497 "prog_io_typeclass.m"
              {
#line 497 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 0)));
#line 497 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 1)));
#line 4726 "parse_tree.prog_io_typeclass.c"
                parse_tree__prog_io_typeclass__TypeInfo_16_16 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5];
#line 4728 "parse_tree.prog_io_typeclass.c"
                {
#line 4730 "parse_tree.prog_io_typeclass.c"
                  parse_tree__prog_io_typeclass__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_16_16, ((MR_Box) (parse_tree__prog_io_typeclass__V_7_7)), ((MR_Box) (parse_tree__prog_io_typeclass__V_9_9)));
                }
#line 497 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 4735 "parse_tree.prog_io_typeclass.c"
                  {
#line 4737 "parse_tree.prog_io_typeclass.c"
                    return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_io_typeclass__V_8_8, parse_tree__prog_io_typeclass__V_10_10);
                  }
#line 497 "prog_io_typeclass.m"
              }
#line 497 "prog_io_typeclass.m"
          }
#line 497 "prog_io_typeclass.m"
        else
#line 497 "prog_io_typeclass.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 497 "prog_io_typeclass.m"
            {
#line 497 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 1);
#line 497 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_6_6;

#line 497 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 497 "prog_io_typeclass.m"
              if (parse_tree__prog_io_typeclass__succeeded)
#line 497 "prog_io_typeclass.m"
                {
#line 497 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_6_6 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 1);
#line 4763 "parse_tree.prog_io_typeclass.c"
                  {
#line 4765 "parse_tree.prog_io_typeclass.c"
                    return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(parse_tree__prog_io_typeclass__V_5_5, parse_tree__prog_io_typeclass__V_6_6);
                  }
#line 497 "prog_io_typeclass.m"
                }
#line 497 "prog_io_typeclass.m"
            }
#line 497 "prog_io_typeclass.m"
          else
#line 497 "prog_io_typeclass.m"
            {
#line 497 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_3_3 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 0);
#line 497 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_4_4;

#line 497 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 497 "prog_io_typeclass.m"
              if (parse_tree__prog_io_typeclass__succeeded)
#line 497 "prog_io_typeclass.m"
                {
#line 497 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_4_4 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 0);
#line 4789 "parse_tree.prog_io_typeclass.c"
                  {
#line 4791 "parse_tree.prog_io_typeclass.c"
                    return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(parse_tree__prog_io_typeclass__V_3_3, parse_tree__prog_io_typeclass__V_4_4);
                  }
#line 497 "prog_io_typeclass.m"
                }
#line 497 "prog_io_typeclass.m"
            }
#line 497 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 497 "prog_io_typeclass.m"
  }
#line 497 "prog_io_typeclass.m"
}

#line 928 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__is_in_list_2_p_0(
#line 928 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypeInfo_for_T_5,
#line 928 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__List_3,
#line 928 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__Element_4)
#line 928 "prog_io_typeclass.m"
{
#line 931 "prog_io_typeclass.m"
  {
#line 931 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 931 "prog_io_typeclass.m"
    {
#line 931 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = mercury__list__member_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_for_T_5, parse_tree__prog_io_typeclass__Element_4, parse_tree__prog_io_typeclass__List_3);
    }
#line 931 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 931 "prog_io_typeclass.m"
  }
#line 928 "prog_io_typeclass.m"
}

#line 809 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__term_to_instance_method_4_p_0(
#line 809 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass___ModuleName_5,
#line 809 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 809 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 809 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8)
#line 809 "prog_io_typeclass.m"
{
#line 885 "prog_io_typeclass.m"
  {
#line 885 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 885 "prog_io_typeclass.m"
    {
#line 885 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7, parse_tree__prog_io_typeclass__MaybeInstanceMethod_8);
#line 885 "prog_io_typeclass.m"
      return;
    }
#line 885 "prog_io_typeclass.m"
  }
#line 809 "prog_io_typeclass.m"
}

#line 774 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_2(
#line 774 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 774 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 774 "prog_io_typeclass.m"
{
#line 774 "prog_io_typeclass.m"
  {
#line 774 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 774 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 774 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__conv0_HeadVar__4_63;

#line 774 "prog_io_typeclass.m"
    {
#line 774 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv0_HeadVar__4_63 = parse_tree__prog_io_typeclass__IntroducedFrom__func__check_tvars_in_instance_constraint__774__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 774 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__4_63));
#line 774 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 774 "prog_io_typeclass.m"
  }
#line 774 "prog_io_typeclass.m"
}

#line 770 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_1(
#line 770 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 770 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 770 "prog_io_typeclass.m"
{
#line 770 "prog_io_typeclass.m"
  {
#line 770 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 770 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;

#line 770 "prog_io_typeclass.m"
    {
#line 770 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__IntroducedFrom__pred__check_tvars_in_instance_constraint__770__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 770 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 770 "prog_io_typeclass.m"
  }
#line 770 "prog_io_typeclass.m"
}

#line 756 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0(
#line 756 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 756 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__InstanceTerm_2,
#line 756 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 756 "prog_io_typeclass.m"
{
#line 759 "prog_io_typeclass.m"
  {
#line 759 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 759 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 759 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 759 "prog_io_typeclass.m"
    else
#line 760 "prog_io_typeclass.m"
      {
#line 760 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ItemInstance_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 760 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 0)));
#line 760 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Types_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 2)));
#line 760 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 5)));
#line 762 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 1)));
#line 762 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___OriginalTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 3)));
#line 762 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___Methods_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 4)));
#line 762 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___ModName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 6)));
#line 762 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 7)));
#line 762 "prog_io_typeclass.m"
        MR_Integer parse_tree__prog_io_typeclass___SeqNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 8)));
#line 787 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__UnboundTVars_21;
#line 768 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TVars_18;
#line 768 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypesVars_19;
#line 768 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 770 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___BoundTVars_20;
#line 771 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_22_22;
#line 771 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_23_23;

#line 768 "prog_io_typeclass.m"
        {
#line 768 "prog_io_typeclass.m"
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_typeclass__Constraints_9, &parse_tree__prog_io_typeclass__TVars_18);
        }
#line 769 "prog_io_typeclass.m"
        {
#line 769 "prog_io_typeclass.m"
          parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_typeclass__Types_11, &parse_tree__prog_io_typeclass__TypesVars_19);
        }
#line 770 "prog_io_typeclass.m"
        {
#line 770 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 770 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[1]));
#line 770 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_1));
#line 770 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 770 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__TypesVars_19));
#line 770 "prog_io_typeclass.m"
        }
#line 770 "prog_io_typeclass.m"
        {
#line 770 "prog_io_typeclass.m"
          mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__V_29_29, parse_tree__prog_io_typeclass__TVars_18, &parse_tree__prog_io_typeclass___BoundTVars_20, &parse_tree__prog_io_typeclass__UnboundTVars_21);
        }
#line 771 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__UnboundTVars_21)) == (MR_mktag((MR_Integer) 1)));
#line 771 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 771 "prog_io_typeclass.m"
          {
#line 771 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__UnboundTVars_21, (MR_Integer) 0)));
#line 771 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__UnboundTVars_21, (MR_Integer) 1)));
#line 774 "prog_io_typeclass.m"
            {
#line 774 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__TypeInfo_60_60 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0];
#line 774 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_65_65;
#line 774 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__UnboundTVarStrs_24;
#line 774 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__UnboundTVarPieces_25;
#line 774 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Prefix_26;
#line 774 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Pieces_27;
#line 774 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Spec_28;
#line 774 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_30_30;
#line 774 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_39_39;
#line 774 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_48_48;
#line 774 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_49_49;
#line 774 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_50_50;
#line 774 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_51_51;
#line 774 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_52_52;
#line 774 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_55_55;
#line 776 "prog_io_typeclass.m"
              MR_Integer parse_tree__prog_io_typeclass__V_32_32;

#line 774 "prog_io_typeclass.m"
              {
#line 774 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 774 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[3]));
#line 774 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_2));
#line 774 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 774 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_14));
#line 774 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 4) = ((MR_Box) ((MR_Integer) 0));
#line 774 "prog_io_typeclass.m"
              }
#line 773 "prog_io_typeclass.m"
              {
#line 773 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__UnboundTVarStrs_24 = mercury__list__map_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_60_60, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_typeclass__V_30_30, parse_tree__prog_io_typeclass__UnboundTVars_21);
              }
#line 775 "prog_io_typeclass.m"
              {
#line 775 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__UnboundTVarPieces_25 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_typeclass__UnboundTVarStrs_24);
              }
#line 776 "prog_io_typeclass.m"
              {
#line 776 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_32_32 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_60_60, parse_tree__prog_io_typeclass__UnboundTVars_21);
              }
#line 776 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_32_32 == (MR_Integer) 1);
#line 778 "prog_io_typeclass.m"
              if (parse_tree__prog_io_typeclass__succeeded)
#line 777 "prog_io_typeclass.m"
                {
#line 777 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Prefix_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[83]);
#line 777 "prog_io_typeclass.m"
                }
#line 778 "prog_io_typeclass.m"
              else
#line 779 "prog_io_typeclass.m"
                {
#line 779 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Prefix_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[85]);
#line 779 "prog_io_typeclass.m"
                }
#line 5105 "parse_tree.prog_io_typeclass.c"
              parse_tree__prog_io_typeclass__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 781 "prog_io_typeclass.m"
              {
#line 781 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_39_39 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_65_65, parse_tree__prog_io_typeclass__UnboundTVarPieces_25, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[48]));
              }
#line 781 "prog_io_typeclass.m"
              {
#line 781 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__Pieces_27 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_65_65, parse_tree__prog_io_typeclass__Prefix_26, parse_tree__prog_io_typeclass__V_39_39);
              }
#line 785 "prog_io_typeclass.m"
              {
#line 785 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_50_50 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__InstanceTerm_2);
              }
#line 785 "prog_io_typeclass.m"
              {
#line 785 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 785 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_27));
#line 785 "prog_io_typeclass.m"
              }
#line 785 "prog_io_typeclass.m"
              {
#line 785 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_52_52));
#line 785 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "prog_io_typeclass.m"
              }
#line 785 "prog_io_typeclass.m"
              {
#line 785 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 785 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_50_50));
#line 785 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_49_49, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_51_51));
#line 785 "prog_io_typeclass.m"
              }
#line 784 "prog_io_typeclass.m"
              {
#line 784 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_49_49));
#line 784 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 784 "prog_io_typeclass.m"
              }
#line 784 "prog_io_typeclass.m"
              {
#line 784 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 784 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 784 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 784 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_48_48));
#line 784 "prog_io_typeclass.m"
              }
#line 786 "prog_io_typeclass.m"
              {
#line 786 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_28));
#line 786 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 786 "prog_io_typeclass.m"
              }
#line 786 "prog_io_typeclass.m"
              {
#line 786 "prog_io_typeclass.m"
                MR_Word base;
#line 786 "prog_io_typeclass.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 786 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 786 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_55_55));
#line 786 "prog_io_typeclass.m"
              }
#line 774 "prog_io_typeclass.m"
            }
#line 771 "prog_io_typeclass.m"
          }
#line 771 "prog_io_typeclass.m"
        else
#line 788 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 760 "prog_io_typeclass.m"
      }
#line 759 "prog_io_typeclass.m"
  }
#line 756 "prog_io_typeclass.m"
}

#line 692 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(
#line 692 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 692 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 692 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 692 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 692 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 692 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12)
#line 692 "prog_io_typeclass.m"
{
#line 696 "prog_io_typeclass.m"
  {
#line 696 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 696 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 696 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__VarSet_14;
#line 696 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeClassName_15;

#line 700 "prog_io_typeclass.m"
    {
#line 700 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__TypeCtorInfo_31_31, parse_tree__prog_io_typeclass__TVarSet_9, &parse_tree__prog_io_typeclass__VarSet_14);
    }
#line 701 "prog_io_typeclass.m"
    {
#line 701 "prog_io_typeclass.m"
      parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_31_31, parse_tree__prog_io_typeclass__NameTerm_8, parse_tree__prog_io_typeclass__VarSet_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[81]), &parse_tree__prog_io_typeclass__MaybeClassName_15);
    }
#line 717 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_15)) == (MR_mktag((MR_Integer) 0))))
#line 718 "prog_io_typeclass.m"
      {
#line 718 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));

#line 719 "prog_io_typeclass.m"
        {
#line 719 "prog_io_typeclass.m"
          MR_Word base;
#line 719 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 719 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = base;
#line 719 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_29));
#line 719 "prog_io_typeclass.m"
        }
#line 718 "prog_io_typeclass.m"
      }
#line 717 "prog_io_typeclass.m"
    else
#line 704 "prog_io_typeclass.m"
      {
#line 704 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));
#line 704 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TermTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 1)));
#line 704 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeTypes_19;

#line 707 "prog_io_typeclass.m"
        {
#line 707 "prog_io_typeclass.m"
          parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_typeclass__TermTypes_17, parse_tree__prog_io_typeclass__VarSet_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__MaybeTypes_19);
        }
#line 713 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_19)) == (MR_mktag((MR_Integer) 0))))
#line 715 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_19;
#line 713 "prog_io_typeclass.m"
        else
#line 709 "prog_io_typeclass.m"
          {
#line 709 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeTypes_19, (MR_Integer) 0)));
#line 709 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemInstance_21;

#line 710 "prog_io_typeclass.m"
            {
#line 710 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__ItemInstance_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 710 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 710 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_16));
#line 710 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_20));
#line 710 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_20));
#line 710 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 710 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_9));
#line 710 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_7));
#line 710 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 710 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 710 "prog_io_typeclass.m"
            }
#line 712 "prog_io_typeclass.m"
            {
#line 712 "prog_io_typeclass.m"
              MR_Word base;
#line 712 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 712 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = base;
#line 712 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstance_21));
#line 712 "prog_io_typeclass.m"
            }
#line 709 "prog_io_typeclass.m"
          }
#line 704 "prog_io_typeclass.m"
      }
#line 696 "prog_io_typeclass.m"
  }
#line 692 "prog_io_typeclass.m"
}

#line 433 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_name_6_p_0_1(
#line 433 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 433 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 433 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 433 "prog_io_typeclass.m"
{
#line 433 "prog_io_typeclass.m"
  {
#line 433 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 433 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 433 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_Constraint_3;

#line 433 "prog_io_typeclass.m"
    {
#line 433 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_Constraint_3);
    }
#line 433 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 433 "prog_io_typeclass.m"
      {
#line 433 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_Constraint_3));
#line 433 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 433 "prog_io_typeclass.m"
      }
#line 433 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 433 "prog_io_typeclass.m"
  }
#line 433 "prog_io_typeclass.m"
}

#line 637 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(
#line 637 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 637 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 637 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 637 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 637 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 637 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12)
#line 637 "prog_io_typeclass.m"
{
#line 645 "prog_io_typeclass.m"
  {
#line 645 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_8)) == (MR_mktag((MR_Integer) 0)));
#line 645 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_13;
#line 645 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Constraints_14;
#line 642 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_16_16;
#line 642 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_17_17;
#line 642 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 642 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_19_19;
#line 642 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_20_20;
#line 642 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_15_15;

#line 642 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 642 "prog_io_typeclass.m"
      {
#line 642 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 0)));
#line 642 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 1)));
#line 642 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 2)));
#line 642 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 642 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 642 "prog_io_typeclass.m"
          {
#line 642 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_16_16, (MR_Integer) 0)));
#line 642 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_17_17, (MR_String) "<=") == 0);
#line 642 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 642 "prog_io_typeclass.m"
              {
#line 642 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 642 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 642 "prog_io_typeclass.m"
                  {
#line 642 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 0)));
#line 642 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 1)));
#line 642 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 642 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 642 "prog_io_typeclass.m"
                      {
#line 642 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 0)));
#line 642 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 1)));
#line 642 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "prog_io_typeclass.m"
                      }
#line 642 "prog_io_typeclass.m"
                  }
#line 642 "prog_io_typeclass.m"
              }
#line 642 "prog_io_typeclass.m"
          }
#line 642 "prog_io_typeclass.m"
      }
#line 645 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 655 "prog_io_typeclass.m"
      {
#line 655 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__VarSet_28;
#line 655 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Result0_65;
#line 655 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ConstraintList_90;

#line 656 "prog_io_typeclass.m"
        {
#line 656 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__TVarSet_9, &parse_tree__prog_io_typeclass__VarSet_28);
        }
#line 520 "prog_io_typeclass.m"
        {
#line 520 "prog_io_typeclass.m"
          parse_tree__prog_io_util__conjunction_to_list_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Constraints_14, &parse_tree__prog_io_typeclass__ConstraintList_90);
        }
#line 521 "prog_io_typeclass.m"
        {
#line 521 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0(parse_tree__prog_io_typeclass__VarSet_28, parse_tree__prog_io_typeclass__ConstraintList_90, &parse_tree__prog_io_typeclass__Result0_65);
        }
#line 5504 "parse_tree.prog_io_typeclass.c"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_65)) == (MR_mktag((MR_Integer) 0))))
#line 5506 "parse_tree.prog_io_typeclass.c"
          {
#line 5508 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__MaybeParsedConstraints_29 = (MR_Word) parse_tree__prog_io_typeclass__Result0_65;

#line 680 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedConstraints_29;
#line 5513 "parse_tree.prog_io_typeclass.c"
          }
#line 5515 "parse_tree.prog_io_typeclass.c"
        else
#line 5517 "parse_tree.prog_io_typeclass.c"
          {
#line 5519 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__ArbitraryConstraints_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_65, (MR_Integer) 0)));
#line 5521 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__Constraints_67;

#line 433 "prog_io_typeclass.m"
            {
#line 433 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = mercury__list__map_3_p_2((MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[5], parse_tree__prog_io_typeclass__ArbitraryConstraints_66, &parse_tree__prog_io_typeclass__Constraints_67);
            }
#line 5529 "parse_tree.prog_io_typeclass.c"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 5531 "parse_tree.prog_io_typeclass.c"
              {
#line 5533 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__MaybeItemInstance0_31;

#line 661 "prog_io_typeclass.m"
                {
#line 661 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_13, parse_tree__prog_io_typeclass__TVarSet_9, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, &parse_tree__prog_io_typeclass__MaybeItemInstance0_31);
                }
#line 666 "prog_io_typeclass.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemInstance0_31)) == (MR_mktag((MR_Integer) 0))))
#line 665 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = parse_tree__prog_io_typeclass__MaybeItemInstance0_31;
#line 666 "prog_io_typeclass.m"
                else
#line 667 "prog_io_typeclass.m"
                  {
#line 667 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__ItemInstance0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstance0_31, (MR_Integer) 0)));
#line 667 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Name_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 1)));
#line 667 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Types_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 2)));
#line 667 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__OriginalTypes_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 3)));
#line 667 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Body_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 4)));
#line 667 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__InstanceVarSet_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 5)));
#line 667 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__ModName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 6)));
#line 667 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__InstanceContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 7)));
#line 667 "prog_io_typeclass.m"
                    MR_Integer parse_tree__prog_io_typeclass__ItemSeqNum_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 8)));
#line 667 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__ItemInstance_43;
#line 668 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass___ConstraintList0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_33, (MR_Integer) 0)));

#line 673 "prog_io_typeclass.m"
                    {
#line 673 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__ItemInstance_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 673 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_67));
#line 673 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Name_35));
#line 673 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_36));
#line 673 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__OriginalTypes_37));
#line 673 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__Body_38));
#line 673 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceVarSet_39));
#line 673 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModName_40));
#line 673 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceContext_41));
#line 673 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_43, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemSeqNum_42));
#line 673 "prog_io_typeclass.m"
                    }
#line 676 "prog_io_typeclass.m"
                    {
#line 676 "prog_io_typeclass.m"
                      MR_Word base;
#line 676 "prog_io_typeclass.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 676 "prog_io_typeclass.m"
                      *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = base;
#line 676 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstance_43));
#line 676 "prog_io_typeclass.m"
                    }
#line 667 "prog_io_typeclass.m"
                  }
#line 5610 "parse_tree.prog_io_typeclass.c"
              }
#line 5612 "parse_tree.prog_io_typeclass.c"
            else
#line 5614 "parse_tree.prog_io_typeclass.c"
              {
#line 5616 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__Spec_68;
#line 5618 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__V_73_73;
#line 5620 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__V_74_74;
#line 5622 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__V_75_75;
#line 5624 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__V_80_80;
#line 5626 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__MaybeParsedConstraints_93;

#line 438 "prog_io_typeclass.m"
                {
#line 438 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_75_75 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Constraints_14);
                }
#line 439 "prog_io_typeclass.m"
                {
#line 439 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_75_75));
#line 439 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[79])));
#line 439 "prog_io_typeclass.m"
                }
#line 437 "prog_io_typeclass.m"
                {
#line 437 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_74_74));
#line 437 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "prog_io_typeclass.m"
                }
#line 437 "prog_io_typeclass.m"
                {
#line 437 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 437 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 437 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_68, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_73_73));
#line 437 "prog_io_typeclass.m"
                }
#line 440 "prog_io_typeclass.m"
                {
#line 440 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_68));
#line 440 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "prog_io_typeclass.m"
                }
#line 440 "prog_io_typeclass.m"
                {
#line 440 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MaybeParsedConstraints_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 440 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedConstraints_93, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_80_80));
#line 440 "prog_io_typeclass.m"
                }
#line 680 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedConstraints_93;
#line 5686 "parse_tree.prog_io_typeclass.c"
              }
#line 5688 "parse_tree.prog_io_typeclass.c"
          }
#line 655 "prog_io_typeclass.m"
      }
#line 645 "prog_io_typeclass.m"
    else
#line 646 "prog_io_typeclass.m"
      {
#line 646 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Arg_8, parse_tree__prog_io_typeclass__TVarSet_9, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemInstance_12);
#line 646 "prog_io_typeclass.m"
        return;
      }
#line 645 "prog_io_typeclass.m"
  }
#line 637 "prog_io_typeclass.m"
}

#line 589 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_fundep_2_p_0(
#line 589 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_3,
#line 589 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_4)
#line 589 "prog_io_typeclass.m"
{
#line 591 "prog_io_typeclass.m"
  {
#line 591 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 591 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__DomainTerm_5;
#line 591 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__RangeTerm_6;
#line 591 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_12_12;
#line 591 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_13_13;
#line 591 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_14_14;
#line 591 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_15_15;
#line 591 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_16_16;
#line 592 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_7_7;
#line 598 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Domain_8;
#line 598 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Range_9;
#line 594 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_7_46;
#line 594 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_8_47;
#line 594 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_7_52;
#line 594 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_8_53;
#line 594 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeTerm_44;
#line 594 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__List_45;
#line 594 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeTerm_50;
#line 594 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__List_51;

#line 592 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 592 "prog_io_typeclass.m"
      {
#line 592 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_3, (MR_Integer) 0)));
#line 592 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_3, (MR_Integer) 1)));
#line 592 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_3, (MR_Integer) 2)));
#line 592 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 592 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 592 "prog_io_typeclass.m"
          {
#line 592 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_12_12, (MR_Integer) 0)));
#line 592 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_13_13, (MR_String) "->") == 0);
#line 591 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 591 "prog_io_typeclass.m"
              {
#line 592 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 592 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 592 "prog_io_typeclass.m"
                  {
#line 592 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__DomainTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_14_14, (MR_Integer) 0)));
#line 592 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_14_14, (MR_Integer) 1)));
#line 592 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 592 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 592 "prog_io_typeclass.m"
                      {
#line 592 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__RangeTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_15_15, (MR_Integer) 0)));
#line 592 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_15_15, (MR_Integer) 1)));
#line 592 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 591 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 591 "prog_io_typeclass.m"
                          {
#line 5806 "parse_tree.prog_io_typeclass.c"
                            parse_tree__prog_io_typeclass__TypeCtorInfo_7_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 5808 "parse_tree.prog_io_typeclass.c"
                            parse_tree__prog_io_typeclass__TypeCtorInfo_8_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 610 "prog_io_typeclass.m"
                            {
#line 610 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__TypeTerm_44 = mercury__term__coerce_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_7_46, parse_tree__prog_io_typeclass__TypeCtorInfo_8_47, parse_tree__prog_io_typeclass__DomainTerm_5);
                            }
#line 611 "prog_io_typeclass.m"
                            {
#line 611 "prog_io_typeclass.m"
                              parse_tree__prog_io_util__conjunction_to_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_47, parse_tree__prog_io_typeclass__TypeTerm_44, &parse_tree__prog_io_typeclass__List_45);
                            }
#line 612 "prog_io_typeclass.m"
                            {
#line 612 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_47, parse_tree__prog_io_typeclass__List_45, &parse_tree__prog_io_typeclass__Domain_8);
                            }
#line 594 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 594 "prog_io_typeclass.m"
                              {
#line 5829 "parse_tree.prog_io_typeclass.c"
                                parse_tree__prog_io_typeclass__TypeCtorInfo_7_52 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 5831 "parse_tree.prog_io_typeclass.c"
                                parse_tree__prog_io_typeclass__TypeCtorInfo_8_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 610 "prog_io_typeclass.m"
                                {
#line 610 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__TypeTerm_50 = mercury__term__coerce_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_7_52, parse_tree__prog_io_typeclass__TypeCtorInfo_8_53, parse_tree__prog_io_typeclass__RangeTerm_6);
                                }
#line 611 "prog_io_typeclass.m"
                                {
#line 611 "prog_io_typeclass.m"
                                  parse_tree__prog_io_util__conjunction_to_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_53, parse_tree__prog_io_typeclass__TypeTerm_50, &parse_tree__prog_io_typeclass__List_51);
                                }
#line 612 "prog_io_typeclass.m"
                                {
#line 612 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_53, parse_tree__prog_io_typeclass__List_51, &parse_tree__prog_io_typeclass__Range_9);
                                }
#line 594 "prog_io_typeclass.m"
                              }
#line 598 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 597 "prog_io_typeclass.m"
                              {
#line 597 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_17_17;
#line 597 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_18_18;

#line 597 "prog_io_typeclass.m"
                                {
#line 597 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 597 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Domain_8));
#line 597 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Range_9));
#line 597 "prog_io_typeclass.m"
                                }
#line 597 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_17_17 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_typeclass__V_18_18);
#line 597 "prog_io_typeclass.m"
                                {
#line 597 "prog_io_typeclass.m"
                                  MR_Word base;
#line 597 "prog_io_typeclass.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 597 "prog_io_typeclass.m"
                                  *parse_tree__prog_io_typeclass__Result_4 = base;
#line 597 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_17_17));
#line 597 "prog_io_typeclass.m"
                                }
#line 597 "prog_io_typeclass.m"
                              }
#line 598 "prog_io_typeclass.m"
                            else
#line 601 "prog_io_typeclass.m"
                              {
#line 601 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__Spec_11;
#line 601 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_32_32;
#line 601 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_33_33;
#line 601 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_34_34;
#line 601 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_39_39;

#line 603 "prog_io_typeclass.m"
                                {
#line 603 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_34_34 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Term_3);
                                }
#line 603 "prog_io_typeclass.m"
                                {
#line 603 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 603 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_34_34));
#line 603 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[78])));
#line 603 "prog_io_typeclass.m"
                                }
#line 602 "prog_io_typeclass.m"
                                {
#line 602 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_33_33));
#line 602 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "prog_io_typeclass.m"
                                }
#line 602 "prog_io_typeclass.m"
                                {
#line 602 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 602 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 602 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_32_32));
#line 602 "prog_io_typeclass.m"
                                }
#line 604 "prog_io_typeclass.m"
                                {
#line 604 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_11));
#line 604 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 604 "prog_io_typeclass.m"
                                }
#line 604 "prog_io_typeclass.m"
                                {
#line 604 "prog_io_typeclass.m"
                                  MR_Word base;
#line 604 "prog_io_typeclass.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 604 "prog_io_typeclass.m"
                                  *parse_tree__prog_io_typeclass__Result_4 = base;
#line 604 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_39_39));
#line 604 "prog_io_typeclass.m"
                                }
#line 601 "prog_io_typeclass.m"
                              }
#line 598 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 591 "prog_io_typeclass.m"
                          }
#line 592 "prog_io_typeclass.m"
                      }
#line 592 "prog_io_typeclass.m"
                  }
#line 591 "prog_io_typeclass.m"
              }
#line 592 "prog_io_typeclass.m"
          }
#line 592 "prog_io_typeclass.m"
      }
#line 591 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 591 "prog_io_typeclass.m"
  }
#line 589 "prog_io_typeclass.m"
}

#line 618 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_1(
#line 618 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 618 "prog_io_typeclass.m"
{
#line 618 "prog_io_typeclass.m"
  {
#line 618 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 618 "prog_io_typeclass.m"
    MR_builtin_longjmp((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__commit_0, 1);
#line 618 "prog_io_typeclass.m"
  }
#line 618 "prog_io_typeclass.m"
}

#line 618 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_3(
#line 618 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 618 "prog_io_typeclass.m"
{
#line 618 "prog_io_typeclass.m"
  {
#line 618 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 618 "prog_io_typeclass.m"
    (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__Type_70 = ((MR_Word) (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__conv0_Type_70);
#line 618 "prog_io_typeclass.m"
    {
#line 618 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_2(parse_tree__prog_io_typeclass__env_ptr);
#line 618 "prog_io_typeclass.m"
      return;
    }
#line 618 "prog_io_typeclass.m"
  }
#line 618 "prog_io_typeclass.m"
}

#line 618 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_2(
#line 618 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 618 "prog_io_typeclass.m"
{
#line 618 "prog_io_typeclass.m"
  {
#line 618 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 619 "prog_io_typeclass.m"
    {
#line 619 "prog_io_typeclass.m"
      (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = parse_tree__prog_type__type_is_nonvar_1_p_0((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__Type_70);
    }
#line 618 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 618 "prog_io_typeclass.m"
      {
#line 620 "prog_io_typeclass.m"
        {
#line 620 "prog_io_typeclass.m"
          (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = parse_tree__prog_type__type_is_nonground_1_p_0((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__Type_70);
        }
#line 620 "prog_io_typeclass.m"
        if ((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 620 "prog_io_typeclass.m"
          {
#line 620 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_1(parse_tree__prog_io_typeclass__env_ptr);
#line 620 "prog_io_typeclass.m"
            return;
          }
#line 618 "prog_io_typeclass.m"
      }
#line 618 "prog_io_typeclass.m"
  }
#line 618 "prog_io_typeclass.m"
}

#line 618 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_4(
#line 618 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 618 "prog_io_typeclass.m"
{
#line 618 "prog_io_typeclass.m"
  {
#line 618 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 618 "prog_io_typeclass.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__commit_0) == 0)
#line 618 "prog_io_typeclass.m"
      {
#line 618 "prog_io_typeclass.m"
        {
#line 618 "prog_io_typeclass.m"
          {
#line 618 "prog_io_typeclass.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &(parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__conv0_Type_70, (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__Types_68, parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_3, parse_tree__prog_io_typeclass__env_ptr);
          }
#line 618 "prog_io_typeclass.m"
        }
#line 618 "prog_io_typeclass.m"
        (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = MR_FALSE;
#line 618 "prog_io_typeclass.m"
      }
#line 618 "prog_io_typeclass.m"
    else
#line 618 "prog_io_typeclass.m"
      (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = MR_TRUE;
#line 618 "prog_io_typeclass.m"
  }
#line 618 "prog_io_typeclass.m"
}

#line 523 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0(
#line 523 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_1,
#line 523 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 523 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 523 "prog_io_typeclass.m"
{
#line 523 "prog_io_typeclass.m"
  {
#line 523 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0_s parse_tree__prog_io_typeclass__env;

#line 526 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "prog_io_typeclass.m"
      {
#line 526 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_4[4]);
#line 526 "prog_io_typeclass.m"
      }
#line 526 "prog_io_typeclass.m"
    else
#line 527 "prog_io_typeclass.m"
      {
#line 527 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 0)));
#line 527 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Terms_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 1)));
#line 527 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Result0_10;
#line 527 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Result1_11;
#line 550 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__InstVar_15;
#line 550 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Inst_16;
#line 583 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_18_65;
#line 583 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_19_66;
#line 583 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Arg1_54;
#line 583 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Arg2_55;
#line 583 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__InstVar0_57;
#line 583 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_59_59;
#line 583 "prog_io_typeclass.m"
        MR_String parse_tree__prog_io_typeclass__V_60_60;
#line 583 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_61_61;
#line 583 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_62_62;
#line 583 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_63_63;
#line 583 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_64_64;
#line 584 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_56_56;
#line 585 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_58_58;

#line 584 "prog_io_typeclass.m"
        (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 584 "prog_io_typeclass.m"
        if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 584 "prog_io_typeclass.m"
          {
#line 584 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_7, (MR_Integer) 0)));
#line 584 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_7, (MR_Integer) 1)));
#line 584 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_7, (MR_Integer) 2)));
#line 584 "prog_io_typeclass.m"
            (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_59_59)) == (MR_mktag((MR_Integer) 0)));
#line 584 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 584 "prog_io_typeclass.m"
              {
#line 584 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_59_59, (MR_Integer) 0)));
#line 584 "prog_io_typeclass.m"
                (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_60_60, (MR_String) "=<") == 0);
#line 583 "prog_io_typeclass.m"
                if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 583 "prog_io_typeclass.m"
                  {
#line 584 "prog_io_typeclass.m"
                    (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 584 "prog_io_typeclass.m"
                    if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 584 "prog_io_typeclass.m"
                      {
#line 584 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Arg1_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_61_61, (MR_Integer) 0)));
#line 584 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_61_61, (MR_Integer) 1)));
#line 584 "prog_io_typeclass.m"
                        (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 584 "prog_io_typeclass.m"
                        if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 584 "prog_io_typeclass.m"
                          {
#line 584 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__Arg2_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_62_62, (MR_Integer) 0)));
#line 584 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_62_62, (MR_Integer) 1)));
#line 584 "prog_io_typeclass.m"
                            (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = (parse_tree__prog_io_typeclass__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 583 "prog_io_typeclass.m"
                            if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 583 "prog_io_typeclass.m"
                              {
#line 585 "prog_io_typeclass.m"
                                (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg1_54)) == (MR_mktag((MR_Integer) 1)));
#line 585 "prog_io_typeclass.m"
                                if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 585 "prog_io_typeclass.m"
                                  {
#line 585 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__InstVar0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Arg1_54, (MR_Integer) 0)));
#line 585 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Arg1_54, (MR_Integer) 1)));
#line 6236 "parse_tree.prog_io_typeclass.c"
                                    parse_tree__prog_io_typeclass__TypeCtorInfo_18_65 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 6238 "parse_tree.prog_io_typeclass.c"
                                    parse_tree__prog_io_typeclass__TypeCtorInfo_19_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 586 "prog_io_typeclass.m"
                                    {
#line 586 "prog_io_typeclass.m"
                                      mercury__term__coerce_var_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_18_65, parse_tree__prog_io_typeclass__TypeCtorInfo_19_66, parse_tree__prog_io_typeclass__InstVar0_57, &parse_tree__prog_io_typeclass__InstVar_15);
                                    }
#line 587 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_64_64 = (MR_Integer) 1;
#line 587 "prog_io_typeclass.m"
                                    {
#line 587 "prog_io_typeclass.m"
                                      (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_typeclass__V_64_64, parse_tree__prog_io_typeclass__Arg2_55, &parse_tree__prog_io_typeclass__Inst_16);
                                    }
#line 585 "prog_io_typeclass.m"
                                  }
#line 583 "prog_io_typeclass.m"
                              }
#line 584 "prog_io_typeclass.m"
                          }
#line 584 "prog_io_typeclass.m"
                      }
#line 583 "prog_io_typeclass.m"
                  }
#line 584 "prog_io_typeclass.m"
              }
#line 584 "prog_io_typeclass.m"
          }
#line 550 "prog_io_typeclass.m"
        if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 549 "prog_io_typeclass.m"
          {
#line 549 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_27_27;

#line 549 "prog_io_typeclass.m"
            {
#line 549 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVar_15));
#line 549 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Inst_16));
#line 549 "prog_io_typeclass.m"
            }
#line 549 "prog_io_typeclass.m"
            {
#line 549 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Result0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 549 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_10, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_27_27));
#line 549 "prog_io_typeclass.m"
            }
#line 549 "prog_io_typeclass.m"
          }
#line 550 "prog_io_typeclass.m"
        else
#line 554 "prog_io_typeclass.m"
          {
#line 554 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Result0_17;

#line 551 "prog_io_typeclass.m"
            {
#line 551 "prog_io_typeclass.m"
              (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = parse_tree__prog_io_typeclass__parse_fundep_2_p_0(parse_tree__prog_io_typeclass__Term_7, &parse_tree__prog_io_typeclass__Result0_17);
            }
#line 554 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 553 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Result0_10 = parse_tree__prog_io_typeclass__Result0_17;
#line 554 "prog_io_typeclass.m"
            else
#line 572 "prog_io_typeclass.m"
              {
#line 572 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ClassName_18;
#line 572 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Args0_19;

#line 555 "prog_io_typeclass.m"
                {
#line 555 "prog_io_typeclass.m"
                  (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Term_7, &parse_tree__prog_io_typeclass__ClassName_18, &parse_tree__prog_io_typeclass__Args0_19);
                }
#line 572 "prog_io_typeclass.m"
                if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 558 "prog_io_typeclass.m"
                  {
#line 558 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__ArgsResult_21;

#line 559 "prog_io_typeclass.m"
                    {
#line 559 "prog_io_typeclass.m"
                      parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_typeclass__Args0_19, parse_tree__prog_io_typeclass__VarSet_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__ArgsResult_21);
                    }
#line 568 "prog_io_typeclass.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArgsResult_21)) == (MR_mktag((MR_Integer) 0))))
#line 570 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Result0_10 = (MR_Word) parse_tree__prog_io_typeclass__ArgsResult_21;
#line 568 "prog_io_typeclass.m"
                    else
#line 561 "prog_io_typeclass.m"
                      {
#line 561 "prog_io_typeclass.m"
                        MR_Word parse_tree__prog_io_typeclass__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArgsResult_21, (MR_Integer) 0)));
#line 561 "prog_io_typeclass.m"
                        MR_Word parse_tree__prog_io_typeclass__Constraint_23;
#line 616 "prog_io_typeclass.m"
                        MR_Word parse_tree__prog_io_typeclass___Name_67;

#line 562 "prog_io_typeclass.m"
                        {
#line 562 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__Constraint_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 562 "prog_io_typeclass.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_23, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_18));
#line 562 "prog_io_typeclass.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_23, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Args_22));
#line 562 "prog_io_typeclass.m"
                        }
#line 616 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass___Name_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_23, (MR_Integer) 0)));
#line 616 "prog_io_typeclass.m"
                        (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__Types_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_23, (MR_Integer) 1)));
#line 618 "prog_io_typeclass.m"
                        {
#line 618 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_4(&parse_tree__prog_io_typeclass__env);
                        }
#line 565 "prog_io_typeclass.m"
                        if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0_env_0__succeeded)
#line 564 "prog_io_typeclass.m"
                          {
#line 564 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_typeclass__Constraint_23);

#line 564 "prog_io_typeclass.m"
                            {
#line 564 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__Result0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 564 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_10, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_28_28));
#line 564 "prog_io_typeclass.m"
                            }
#line 564 "prog_io_typeclass.m"
                          }
#line 565 "prog_io_typeclass.m"
                        else
#line 566 "prog_io_typeclass.m"
                          {
#line 566 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_typeclass__Constraint_23);

#line 566 "prog_io_typeclass.m"
                            {
#line 566 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__Result0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 566 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_10, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_29_29));
#line 566 "prog_io_typeclass.m"
                            }
#line 566 "prog_io_typeclass.m"
                          }
#line 561 "prog_io_typeclass.m"
                      }
#line 558 "prog_io_typeclass.m"
                  }
#line 572 "prog_io_typeclass.m"
                else
#line 574 "prog_io_typeclass.m"
                  {
#line 574 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Spec_26;
#line 574 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_40_40;
#line 574 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_41_41;
#line 574 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_42_42;
#line 574 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_47_47;

#line 576 "prog_io_typeclass.m"
                    {
#line 576 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Term_7);
                    }
#line 576 "prog_io_typeclass.m"
                    {
#line 576 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 576 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_42_42));
#line 576 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[77])));
#line 576 "prog_io_typeclass.m"
                    }
#line 575 "prog_io_typeclass.m"
                    {
#line 575 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_41_41));
#line 575 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 575 "prog_io_typeclass.m"
                    }
#line 575 "prog_io_typeclass.m"
                    {
#line 575 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 575 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 575 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 575 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_40_40));
#line 575 "prog_io_typeclass.m"
                    }
#line 577 "prog_io_typeclass.m"
                    {
#line 577 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_26));
#line 577 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 577 "prog_io_typeclass.m"
                    }
#line 577 "prog_io_typeclass.m"
                    {
#line 577 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Result0_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 577 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result0_10, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_47_47));
#line 577 "prog_io_typeclass.m"
                    }
#line 574 "prog_io_typeclass.m"
                  }
#line 572 "prog_io_typeclass.m"
              }
#line 554 "prog_io_typeclass.m"
          }
#line 529 "prog_io_typeclass.m"
        {
#line 529 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_3_p_0(parse_tree__prog_io_typeclass__VarSet_1, parse_tree__prog_io_typeclass__Terms_8, &parse_tree__prog_io_typeclass__Result1_11);
        }
#line 535 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_10)) == (MR_mktag((MR_Integer) 0))))
#line 535 "prog_io_typeclass.m"
          {
#line 535 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result0_10, (MR_Integer) 0)));

#line 535 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result1_11)) == (MR_mktag((MR_Integer) 0))))
#line 535 "prog_io_typeclass.m"
              {
#line 535 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TailSpecs_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result1_11, (MR_Integer) 0)));
#line 535 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_74_74;

#line 536 "prog_io_typeclass.m"
                {
#line 536 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_74_74 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_typeclass__V_83_83, parse_tree__prog_io_typeclass__TailSpecs_73);
                }
#line 535 "prog_io_typeclass.m"
                {
#line 535 "prog_io_typeclass.m"
                  MR_Word base;
#line 535 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 535 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 535 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_74_74));
#line 535 "prog_io_typeclass.m"
                }
#line 535 "prog_io_typeclass.m"
              }
#line 535 "prog_io_typeclass.m"
            else
#line 537 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_typeclass__Result0_10;
#line 535 "prog_io_typeclass.m"
          }
#line 535 "prog_io_typeclass.m"
        else
#line 535 "prog_io_typeclass.m"
          {
#line 535 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_10, (MR_Integer) 0)));

#line 535 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result1_11)) == (MR_mktag((MR_Integer) 0))))
#line 538 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__Result1_11;
#line 535 "prog_io_typeclass.m"
            else
#line 539 "prog_io_typeclass.m"
              {
#line 539 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Constraints_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result1_11, (MR_Integer) 0)));
#line 539 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_81_81;

#line 540 "prog_io_typeclass.m"
                {
#line 540 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_84_84));
#line 540 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_81_81, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_80));
#line 540 "prog_io_typeclass.m"
                }
#line 539 "prog_io_typeclass.m"
                {
#line 539 "prog_io_typeclass.m"
                  MR_Word base;
#line 539 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 539 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 539 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_81_81));
#line 539 "prog_io_typeclass.m"
                }
#line 539 "prog_io_typeclass.m"
              }
#line 535 "prog_io_typeclass.m"
          }
#line 527 "prog_io_typeclass.m"
      }
#line 523 "prog_io_typeclass.m"
  }
#line 523 "prog_io_typeclass.m"
}

#line 475 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(
#line 475 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 475 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 475 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 475 "prog_io_typeclass.m"
{
#line 478 "prog_io_typeclass.m"
  {
#line 478 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 478 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "prog_io_typeclass.m"
      {
#line 478 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 478 "prog_io_typeclass.m"
        {
#line 478 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__HeadVar__3_3 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        }
#line 478 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 478 "prog_io_typeclass.m"
      }
#line 478 "prog_io_typeclass.m"
    else
#line 480 "prog_io_typeclass.m"
      {
#line 480 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraint_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 480 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 480 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ProgConstraints0_8;
#line 480 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__InstVarSub0_9;

#line 481 "prog_io_typeclass.m"
        {
#line 481 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(parse_tree__prog_io_typeclass__Constraints_5, &parse_tree__prog_io_typeclass__ProgConstraints0_8, &parse_tree__prog_io_typeclass__InstVarSub0_9);
        }
#line 480 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 487 "prog_io_typeclass.m"
          {
#line 487 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 3))))
#line 492 "prog_io_typeclass.m"
              {
#line 492 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Constraint_4, (MR_Integer) 0)));
#line 492 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Inst_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Constraint_4, (MR_Integer) 1)));

#line 493 "prog_io_typeclass.m"
                {
#line 493 "prog_io_typeclass.m"
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (parse_tree__prog_io_typeclass__InstVar_12)), ((MR_Box) (parse_tree__prog_io_typeclass__Inst_13)), parse_tree__prog_io_typeclass__InstVarSub0_9, parse_tree__prog_io_typeclass__HeadVar__3_3);
                }
#line 494 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__2_2 = parse_tree__prog_io_typeclass__ProgConstraints0_8;
#line 492 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 492 "prog_io_typeclass.m"
              }
#line 487 "prog_io_typeclass.m"
            else
#line 487 "prog_io_typeclass.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 1))))
#line 488 "prog_io_typeclass.m"
                {
#line 488 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__ClassConstraint_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 1);

#line 489 "prog_io_typeclass.m"
                  {
#line 489 "prog_io_typeclass.m"
                    MR_Word base;
#line 489 "prog_io_typeclass.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__HeadVar__2_2 = base;
#line 489 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassConstraint_11));
#line 489 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ProgConstraints0_8));
#line 489 "prog_io_typeclass.m"
                  }
#line 490 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__InstVarSub0_9;
#line 488 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 488 "prog_io_typeclass.m"
                }
#line 487 "prog_io_typeclass.m"
              else
#line 487 "prog_io_typeclass.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 0))))
#line 484 "prog_io_typeclass.m"
                  {
#line 484 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__SimpleConstraint_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 0);

#line 485 "prog_io_typeclass.m"
                    {
#line 485 "prog_io_typeclass.m"
                      MR_Word base;
#line 485 "prog_io_typeclass.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "prog_io_typeclass.m"
                      *parse_tree__prog_io_typeclass__HeadVar__2_2 = base;
#line 485 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraint_10));
#line 485 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ProgConstraints0_8));
#line 485 "prog_io_typeclass.m"
                    }
#line 486 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__InstVarSub0_9;
#line 484 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 484 "prog_io_typeclass.m"
                  }
#line 487 "prog_io_typeclass.m"
                else
#line 487 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = MR_FALSE;
#line 487 "prog_io_typeclass.m"
          }
#line 480 "prog_io_typeclass.m"
      }
#line 478 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 478 "prog_io_typeclass.m"
  }
#line 475 "prog_io_typeclass.m"
}

#line 447 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(
#line 447 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 447 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Constraint_3)
#line 447 "prog_io_typeclass.m"
{
#line 450 "prog_io_typeclass.m"
  {
#line 450 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));

#line 450 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 450 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__Constraint_3 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 0);
#line 450 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 450 "prog_io_typeclass.m"
  }
#line 447 "prog_io_typeclass.m"
}

#line 356 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__item_to_class_method_3_p_0(
#line 356 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 356 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_2,
#line 356 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 356 "prog_io_typeclass.m"
{
#line 359 "prog_io_typeclass.m"
  {
#line 359 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 359 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 359 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 359 "prog_io_typeclass.m"
    else
#line 360 "prog_io_typeclass.m"
      {
#line 360 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Item_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 367 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ItemPredDecl_9;

#line 361 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Item_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 361 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 361 "prog_io_typeclass.m"
          {
#line 361 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__ItemPredDecl_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 1)));
#line 363 "prog_io_typeclass.m"
            {
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__A_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 1)));
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__B_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 2)));
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__C_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 3)));
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__D_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 4)));
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__E_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 5)));
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__F_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 6)));
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__G_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 7)));
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__H_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 8)));
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__I_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 9)));
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__J_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 10)));
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__K_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 11)));
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__L_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 12)));
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 13)));
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__ClassMethod_25;
#line 362 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass___Origin_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 0)));
#line 362 "prog_io_typeclass.m"
              MR_Integer parse_tree__prog_io_typeclass___SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 14)));

#line 364 "prog_io_typeclass.m"
              {
#line 364 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__ClassMethod_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
#line 364 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_25, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__A_11));
#line 364 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_25, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__B_12));
#line 364 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_25, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__C_13));
#line 364 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_25, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__D_14));
#line 364 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_25, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__E_15));
#line 364 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_25, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__F_16));
#line 364 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_25, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__G_17));
#line 364 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_25, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__H_18));
#line 364 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_25, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__I_19));
#line 364 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_25, 9) = ((MR_Box) (parse_tree__prog_io_typeclass__J_20));
#line 364 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_25, 10) = ((MR_Box) (parse_tree__prog_io_typeclass__K_21));
#line 364 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_25, 11) = ((MR_Box) (parse_tree__prog_io_typeclass__L_22));
#line 364 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_25, 12) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_23));
#line 364 "prog_io_typeclass.m"
              }
#line 366 "prog_io_typeclass.m"
              {
#line 366 "prog_io_typeclass.m"
                MR_Word base;
#line 366 "prog_io_typeclass.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 366 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassMethod_25));
#line 366 "prog_io_typeclass.m"
              }
#line 363 "prog_io_typeclass.m"
            }
#line 361 "prog_io_typeclass.m"
          }
#line 361 "prog_io_typeclass.m"
        else
#line 373 "prog_io_typeclass.m"
          {
#line 373 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemModeDecl_26;

#line 367 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Item_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 367 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 367 "prog_io_typeclass.m"
              {
#line 367 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__ItemModeDecl_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 1)));
#line 369 "prog_io_typeclass.m"
                {
#line 369 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__A_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_26, (MR_Integer) 0)));
#line 369 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__B_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_26, (MR_Integer) 1)));
#line 369 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__C_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_26, (MR_Integer) 2)));
#line 369 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__D_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_26, (MR_Integer) 3)));
#line 369 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__E_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_26, (MR_Integer) 4)));
#line 369 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__F_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_26, (MR_Integer) 5)));
#line 369 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__G_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_26, (MR_Integer) 6)));
#line 369 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__Context_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_26, (MR_Integer) 7)));
#line 369 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__ClassMethod_58;
#line 368 "prog_io_typeclass.m"
                  MR_Integer parse_tree__prog_io_typeclass___SeqNum_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_26, (MR_Integer) 8)));

#line 370 "prog_io_typeclass.m"
                  {
#line 370 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ClassMethod_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 370 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_58, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__A_49));
#line 370 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_58, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__B_50));
#line 370 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_58, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__C_51));
#line 370 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_58, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__D_52));
#line 370 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_58, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__E_53));
#line 370 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_58, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__F_54));
#line 370 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_58, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__G_55));
#line 370 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_58, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_56));
#line 370 "prog_io_typeclass.m"
                  }
#line 372 "prog_io_typeclass.m"
                  {
#line 372 "prog_io_typeclass.m"
                    MR_Word base;
#line 372 "prog_io_typeclass.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 372 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassMethod_58));
#line 372 "prog_io_typeclass.m"
                  }
#line 369 "prog_io_typeclass.m"
                }
#line 367 "prog_io_typeclass.m"
              }
#line 367 "prog_io_typeclass.m"
            else
#line 375 "prog_io_typeclass.m"
              {
#line 375 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_28;
#line 375 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_39_39;
#line 375 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_40_40;
#line 375 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_41_41;
#line 375 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_46_46;

#line 377 "prog_io_typeclass.m"
                {
#line 377 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_41_41 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Term_2);
                }
#line 377 "prog_io_typeclass.m"
                {
#line 377 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 377 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_41_41));
#line 377 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[76])));
#line 377 "prog_io_typeclass.m"
                }
#line 376 "prog_io_typeclass.m"
                {
#line 376 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_40_40));
#line 376 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "prog_io_typeclass.m"
                }
#line 376 "prog_io_typeclass.m"
                {
#line 376 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 376 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 376 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_39_39));
#line 376 "prog_io_typeclass.m"
                }
#line 378 "prog_io_typeclass.m"
                {
#line 378 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_28));
#line 378 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "prog_io_typeclass.m"
                }
#line 378 "prog_io_typeclass.m"
                {
#line 378 "prog_io_typeclass.m"
                  MR_Word base;
#line 378 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 378 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 378 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_46_46));
#line 378 "prog_io_typeclass.m"
                }
#line 375 "prog_io_typeclass.m"
              }
#line 373 "prog_io_typeclass.m"
          }
#line 360 "prog_io_typeclass.m"
      }
#line 359 "prog_io_typeclass.m"
  }
#line 356 "prog_io_typeclass.m"
}

#line 309 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0_1(
#line 309 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 309 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 309 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 309 "prog_io_typeclass.m"
{
#line 309 "prog_io_typeclass.m"
  {
#line 309 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 309 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__2_55;

#line 309 "prog_io_typeclass.m"
    {
#line 309 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__309__1_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_HeadVar__2_55);
    }
#line 309 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__2_55));
#line 309 "prog_io_typeclass.m"
  }
#line 309 "prog_io_typeclass.m"
}

#line 298 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(
#line 298 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 298 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 298 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 298 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 298 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 298 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12)
#line 298 "prog_io_typeclass.m"
{
#line 302 "prog_io_typeclass.m"
  {
#line 302 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 302 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 302 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_53_53 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 302 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__VarSet_14;
#line 302 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeClassName_15;

#line 304 "prog_io_typeclass.m"
    {
#line 304 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_52_52, parse_tree__prog_io_typeclass__TypeCtorInfo_53_53, parse_tree__prog_io_typeclass__TVarSet_9, &parse_tree__prog_io_typeclass__VarSet_14);
    }
#line 305 "prog_io_typeclass.m"
    {
#line 305 "prog_io_typeclass.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_53, parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__NameTerm_8, parse_tree__prog_io_typeclass__VarSet_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[56]), &parse_tree__prog_io_typeclass__MaybeClassName_15);
    }
#line 328 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_15)) == (MR_mktag((MR_Integer) 0))))
#line 329 "prog_io_typeclass.m"
      {
#line 329 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));

#line 330 "prog_io_typeclass.m"
        {
#line 330 "prog_io_typeclass.m"
          MR_Word base;
#line 330 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 330 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 330 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_24));
#line 330 "prog_io_typeclass.m"
        }
#line 329 "prog_io_typeclass.m"
      }
#line 328 "prog_io_typeclass.m"
    else
#line 308 "prog_io_typeclass.m"
      {
#line 308 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeInfo_59_59 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[3];
#line 308 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));
#line 308 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TermVars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 1)));
#line 308 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TermVars_18;
#line 320 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Vars_19;
#line 311 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SortedTermVars_20;
#line 311 "prog_io_typeclass.m"
        MR_Integer parse_tree__prog_io_typeclass__V_29_29;
#line 311 "prog_io_typeclass.m"
        MR_Integer parse_tree__prog_io_typeclass__V_60_60;

#line 309 "prog_io_typeclass.m"
        {
#line 309 "prog_io_typeclass.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], parse_tree__prog_io_typeclass__TypeInfo_59_59, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[4], parse_tree__prog_io_typeclass__TermVars0_17, &parse_tree__prog_io_typeclass__TermVars_18);
        }
#line 311 "prog_io_typeclass.m"
        {
#line 311 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_52_52, parse_tree__prog_io_typeclass__TermVars_18, &parse_tree__prog_io_typeclass__Vars_19);
        }
#line 311 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 311 "prog_io_typeclass.m"
          {
#line 312 "prog_io_typeclass.m"
            {
#line 312 "prog_io_typeclass.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_59_59, parse_tree__prog_io_typeclass__TermVars_18, &parse_tree__prog_io_typeclass__SortedTermVars_20);
            }
#line 313 "prog_io_typeclass.m"
            {
#line 313 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_29_29 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_59_59, parse_tree__prog_io_typeclass__SortedTermVars_20);
            }
#line 313 "prog_io_typeclass.m"
            {
#line 313 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_60_60 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_59_59, parse_tree__prog_io_typeclass__TermVars_18);
            }
#line 313 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_29_29 == parse_tree__prog_io_typeclass__V_60_60);
#line 311 "prog_io_typeclass.m"
          }
#line 320 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 318 "prog_io_typeclass.m"
          {
#line 318 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeClassInfo_21;

#line 317 "prog_io_typeclass.m"
            {
#line 317 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__TypeClassInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 317 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_16));
#line 317 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__Vars_19));
#line 317 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_9));
#line 317 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 317 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 317 "prog_io_typeclass.m"
            }
#line 319 "prog_io_typeclass.m"
            {
#line 319 "prog_io_typeclass.m"
              MR_Word base;
#line 319 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 319 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 319 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__TypeClassInfo_21));
#line 319 "prog_io_typeclass.m"
            }
#line 318 "prog_io_typeclass.m"
          }
#line 320 "prog_io_typeclass.m"
        else
#line 322 "prog_io_typeclass.m"
          {
#line 322 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_23;
#line 322 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_43_43;
#line 322 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_44_44;
#line 322 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_45_45;
#line 322 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_50_50;

#line 325 "prog_io_typeclass.m"
            {
#line 325 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_45_45 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_53, parse_tree__prog_io_typeclass__NameTerm_8);
            }
#line 325 "prog_io_typeclass.m"
            {
#line 325 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_45_45));
#line 325 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[57])));
#line 325 "prog_io_typeclass.m"
            }
#line 324 "prog_io_typeclass.m"
            {
#line 324 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_44_44));
#line 324 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "prog_io_typeclass.m"
            }
#line 324 "prog_io_typeclass.m"
            {
#line 324 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 324 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 324 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_43_43));
#line 324 "prog_io_typeclass.m"
            }
#line 326 "prog_io_typeclass.m"
            {
#line 326 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_23));
#line 326 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "prog_io_typeclass.m"
            }
#line 326 "prog_io_typeclass.m"
            {
#line 326 "prog_io_typeclass.m"
              MR_Word base;
#line 326 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 326 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 326 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_50_50));
#line 326 "prog_io_typeclass.m"
            }
#line 322 "prog_io_typeclass.m"
          }
#line 308 "prog_io_typeclass.m"
      }
#line 302 "prog_io_typeclass.m"
  }
#line 298 "prog_io_typeclass.m"
}

#line 280 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(
#line 280 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 280 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 280 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 280 "prog_io_typeclass.m"
{
#line 283 "prog_io_typeclass.m"
  {
#line 283 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 283 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "prog_io_typeclass.m"
      {
#line 283 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 283 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 283 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 283 "prog_io_typeclass.m"
      }
#line 283 "prog_io_typeclass.m"
    else
#line 285 "prog_io_typeclass.m"
      {
#line 285 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraint_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 285 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 285 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SimpleConstraints0_8;
#line 285 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps0_9;

#line 286 "prog_io_typeclass.m"
        {
#line 286 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(parse_tree__prog_io_typeclass__Constraints_5, &parse_tree__prog_io_typeclass__SimpleConstraints0_8, &parse_tree__prog_io_typeclass__FunDeps0_9);
        }
#line 285 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 292 "prog_io_typeclass.m"
          {
#line 292 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 2))))
#line 293 "prog_io_typeclass.m"
              {
#line 293 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDep_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 2);

#line 294 "prog_io_typeclass.m"
                {
#line 294 "prog_io_typeclass.m"
                  MR_Word base;
#line 294 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 294 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDep_11));
#line 294 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps0_9));
#line 294 "prog_io_typeclass.m"
                }
#line 295 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__2_2 = parse_tree__prog_io_typeclass__SimpleConstraints0_8;
#line 293 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 293 "prog_io_typeclass.m"
              }
#line 292 "prog_io_typeclass.m"
            else
#line 292 "prog_io_typeclass.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 0))))
#line 289 "prog_io_typeclass.m"
                {
#line 289 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__SimpleConstraint_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 0);

#line 290 "prog_io_typeclass.m"
                  {
#line 290 "prog_io_typeclass.m"
                    MR_Word base;
#line 290 "prog_io_typeclass.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__HeadVar__2_2 = base;
#line 290 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraint_10));
#line 290 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraints0_8));
#line 290 "prog_io_typeclass.m"
                  }
#line 291 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__FunDeps0_9;
#line 289 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 289 "prog_io_typeclass.m"
                }
#line 292 "prog_io_typeclass.m"
              else
#line 292 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_FALSE;
#line 292 "prog_io_typeclass.m"
          }
#line 285 "prog_io_typeclass.m"
      }
#line 283 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 283 "prog_io_typeclass.m"
  }
#line 280 "prog_io_typeclass.m"
}

#line 250 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundep_1_f_0(
#line 250 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1)
#line 250 "prog_io_typeclass.m"
{
#line 252 "prog_io_typeclass.m"
  {
#line 252 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 252 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 252 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Domain_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 252 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Range_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));

#line 252 "prog_io_typeclass.m"
    {
#line 252 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__Domain_3, parse_tree__prog_io_typeclass__Range_4);
    }
#line 252 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 252 "prog_io_typeclass.m"
  }
#line 250 "prog_io_typeclass.m"
}

#line 248 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0_1(
#line 248 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 248 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 248 "prog_io_typeclass.m"
{
#line 248 "prog_io_typeclass.m"
  {
#line 248 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 248 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 248 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__2_2;

#line 248 "prog_io_typeclass.m"
    {
#line 248 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv0_HeadVar__2_2 = parse_tree__prog_io_typeclass__tvars_in_fundep_1_f_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 248 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__2_2));
#line 248 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 248 "prog_io_typeclass.m"
  }
#line 248 "prog_io_typeclass.m"
}

#line 246 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0(
#line 246 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__FunDeps_3)
#line 246 "prog_io_typeclass.m"
{
#line 248 "prog_io_typeclass.m"
  {
#line 248 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 248 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 248 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_4_4;

#line 248 "prog_io_typeclass.m"
    {
#line 248 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__V_4_4 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[3], parse_tree__prog_io_typeclass__FunDeps_3);
    }
#line 248 "prog_io_typeclass.m"
    {
#line 248 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__V_4_4);
    }
#line 248 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 248 "prog_io_typeclass.m"
  }
#line 246 "prog_io_typeclass.m"
}

#line 200 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_4(
#line 200 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 200 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 200 "prog_io_typeclass.m"
{
#line 200 "prog_io_typeclass.m"
  {
#line 200 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 200 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 200 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__conv1_HeadVar__4_163;

#line 200 "prog_io_typeclass.m"
    {
#line 200 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv1_HeadVar__4_163 = parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__200__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 200 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv1_HeadVar__4_163));
#line 200 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 200 "prog_io_typeclass.m"
  }
#line 200 "prog_io_typeclass.m"
}

#line 197 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_3(
#line 197 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 197 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 197 "prog_io_typeclass.m"
{
#line 197 "prog_io_typeclass.m"
  {
#line 197 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 197 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 197 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__conv0_HeadVar__4_160;

#line 197 "prog_io_typeclass.m"
    {
#line 197 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv0_HeadVar__4_160 = parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__197__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 197 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__4_160));
#line 197 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 197 "prog_io_typeclass.m"
  }
#line 197 "prog_io_typeclass.m"
}

#line 158 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_2(
#line 158 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 158 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 158 "prog_io_typeclass.m"
{
#line 158 "prog_io_typeclass.m"
  {
#line 158 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 158 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;

#line 158 "prog_io_typeclass.m"
    {
#line 158 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__158__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 158 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 158 "prog_io_typeclass.m"
  }
#line 158 "prog_io_typeclass.m"
}

#line 156 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_1(
#line 156 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 156 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 156 "prog_io_typeclass.m"
{
#line 156 "prog_io_typeclass.m"
  {
#line 156 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 156 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;

#line 156 "prog_io_typeclass.m"
    {
#line 156 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__156__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 156 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 156 "prog_io_typeclass.m"
  }
#line 156 "prog_io_typeclass.m"
}

#line 129 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(
#line 129 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 129 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Decl_9,
#line 129 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_10,
#line 129 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 129 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 129 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 129 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14)
#line 129 "prog_io_typeclass.m"
{
#line 134 "prog_io_typeclass.m"
  {
#line 134 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 134 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TVarSet_15;
#line 134 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeParsedConstraints_16;

#line 135 "prog_io_typeclass.m"
    {
#line 135 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_11, &parse_tree__prog_io_typeclass__TVarSet_15);
    }
#line 136 "prog_io_typeclass.m"
    {
#line 136 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_11, parse_tree__prog_io_typeclass__ConstraintsTerm_10, &parse_tree__prog_io_typeclass__MaybeParsedConstraints_16);
    }
#line 241 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeParsedConstraints_16)) == (MR_mktag((MR_Integer) 0))))
#line 242 "prog_io_typeclass.m"
      {
#line 242 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedConstraints_16, (MR_Integer) 0)));

#line 243 "prog_io_typeclass.m"
        {
#line 243 "prog_io_typeclass.m"
          MR_Word base;
#line 243 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 243 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 243 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_59));
#line 243 "prog_io_typeclass.m"
        }
#line 242 "prog_io_typeclass.m"
      }
#line 241 "prog_io_typeclass.m"
    else
#line 139 "prog_io_typeclass.m"
      {
#line 139 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ConstraintList_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeParsedConstraints_16, (MR_Integer) 0)));
#line 139 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeParsedConstraints_16, (MR_Integer) 1)));
#line 139 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19;

#line 140 "prog_io_typeclass.m"
        {
#line 140 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(parse_tree__prog_io_typeclass__ModuleName_8, parse_tree__prog_io_typeclass__Decl_9, parse_tree__prog_io_typeclass__TVarSet_15, parse_tree__prog_io_typeclass__Context_12, parse_tree__prog_io_typeclass__SeqNum_13, &parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19);
        }
#line 145 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19)) == (MR_mktag((MR_Integer) 0))))
#line 144 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19;
#line 145 "prog_io_typeclass.m"
        else
#line 146 "prog_io_typeclass.m"
          {
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeInfo_151_151;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemTypeClass0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19, (MR_Integer) 0)));
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintVars_22;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SortedConstraintVars_23;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FunDepVars_24;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SortedFunDepVars_25;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Params_26;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintNotInParams_28;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FunDepNotInParams_30;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintErrorContext_33;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FunDepErrorContext_36;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__NotInParams_37;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_61_61;
#line 146 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_169_169;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_170_170;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_171_171;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_172_172;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_173_173;
#line 146 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_174_174;
#line 155 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_119_119;
#line 155 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_120_120;
#line 155 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_121_121;
#line 155 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_122_122;
#line 155 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_123_123;
#line 155 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_124_124;
#line 155 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_125_125;
#line 156 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass___ConstraintInParams_27;
#line 158 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass___FunDepInParams_29;
#line 189 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_175_175;
#line 189 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_176_176;

#line 150 "prog_io_typeclass.m"
            {
#line 150 "prog_io_typeclass.m"
              parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_typeclass__ConstraintList_17, &parse_tree__prog_io_typeclass__ConstraintVars_22);
            }
#line 7792 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeInfo_151_151 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0];
#line 151 "prog_io_typeclass.m"
            {
#line 151 "prog_io_typeclass.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__ConstraintVars_22, &parse_tree__prog_io_typeclass__SortedConstraintVars_23);
            }
#line 152 "prog_io_typeclass.m"
            {
#line 152 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__FunDepVars_24 = parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0(parse_tree__prog_io_typeclass__FunDeps_18);
            }
#line 153 "prog_io_typeclass.m"
            {
#line 153 "prog_io_typeclass.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__FunDepVars_24, &parse_tree__prog_io_typeclass__SortedFunDepVars_25);
            }
#line 155 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 0)));
#line 155 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 1)));
#line 155 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 2)));
#line 155 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__Params_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 3)));
#line 155 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 4)));
#line 155 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 5)));
#line 155 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 6)));
#line 155 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 7)));
#line 156 "prog_io_typeclass.m"
            {
#line 156 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 156 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[1]));
#line 156 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_1));
#line 156 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 156 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__Params_26));
#line 156 "prog_io_typeclass.m"
            }
#line 156 "prog_io_typeclass.m"
            {
#line 156 "prog_io_typeclass.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__V_60_60, parse_tree__prog_io_typeclass__SortedConstraintVars_23, &parse_tree__prog_io_typeclass___ConstraintInParams_27, &parse_tree__prog_io_typeclass__ConstraintNotInParams_28);
            }
#line 158 "prog_io_typeclass.m"
            {
#line 158 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 158 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[1]));
#line 158 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_2));
#line 158 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 158 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__Params_26));
#line 158 "prog_io_typeclass.m"
            }
#line 158 "prog_io_typeclass.m"
            {
#line 158 "prog_io_typeclass.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__V_61_61, parse_tree__prog_io_typeclass__SortedFunDepVars_25, &parse_tree__prog_io_typeclass___FunDepInParams_29, &parse_tree__prog_io_typeclass__FunDepNotInParams_30);
            }
#line 169 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__ConstraintNotInParams_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 169 "prog_io_typeclass.m"
            else
#line 165 "prog_io_typeclass.m"
              {
#line 162 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_62_62;

#line 162 "prog_io_typeclass.m"
                {
#line 162 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_62_62 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, parse_tree__prog_io_typeclass__ConstraintList_17);
                }
#line 162 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_62_62 == (MR_Integer) 1);
#line 165 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 163 "prog_io_typeclass.m"
                  {
#line 163 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[59]);
#line 163 "prog_io_typeclass.m"
                  }
#line 165 "prog_io_typeclass.m"
                else
#line 166 "prog_io_typeclass.m"
                  {
#line 166 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[61]);
#line 166 "prog_io_typeclass.m"
                  }
#line 165 "prog_io_typeclass.m"
              }
#line 182 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 183 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 182 "prog_io_typeclass.m"
            else
#line 178 "prog_io_typeclass.m"
              {
#line 175 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_69_69;

#line 175 "prog_io_typeclass.m"
                {
#line 175 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_69_69 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, parse_tree__prog_io_typeclass__FunDeps_18);
                }
#line 175 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_69_69 == (MR_Integer) 1);
#line 178 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 176 "prog_io_typeclass.m"
                  {
#line 176 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[63]);
#line 176 "prog_io_typeclass.m"
                  }
#line 178 "prog_io_typeclass.m"
                else
#line 179 "prog_io_typeclass.m"
                  {
#line 179 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[65]);
#line 179 "prog_io_typeclass.m"
                  }
#line 178 "prog_io_typeclass.m"
              }
#line 186 "prog_io_typeclass.m"
            {
#line 186 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__NotInParams_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__ConstraintNotInParams_28, parse_tree__prog_io_typeclass__FunDepNotInParams_30);
            }
#line 189 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 0)));
#line 189 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 1)));
#line 189 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 2)));
#line 189 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 3)));
#line 189 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 4)));
#line 189 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 5)));
#line 189 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 6)));
#line 189 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_169_169 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 7)));
#line 193 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__NotInParams_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 188 "prog_io_typeclass.m"
              {
#line 188 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ItemTypeClass_38;
#line 188 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_128_128 = parse_tree__prog_io_typeclass__V_174_174;
#line 188 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_129_129 = parse_tree__prog_io_typeclass__V_173_173;
#line 188 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_130_130 = parse_tree__prog_io_typeclass__V_172_172;
#line 188 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_131_131 = parse_tree__prog_io_typeclass__V_171_171;
#line 188 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_132_132 = parse_tree__prog_io_typeclass__V_170_170;
#line 188 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_133_133 = parse_tree__prog_io_typeclass__V_169_169;

#line 189 "prog_io_typeclass.m"
                {
#line 189 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ItemTypeClass_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 189 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ConstraintList_17));
#line 189 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps_18));
#line 189 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_128_128));
#line 189 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__V_129_129));
#line 189 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_130_130));
#line 189 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__V_131_131));
#line 189 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__V_132_132));
#line 189 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__V_133_133));
#line 189 "prog_io_typeclass.m"
                }
#line 192 "prog_io_typeclass.m"
                {
#line 192 "prog_io_typeclass.m"
                  MR_Word base;
#line 192 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 192 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 192 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemTypeClass_38));
#line 192 "prog_io_typeclass.m"
                }
#line 188 "prog_io_typeclass.m"
              }
#line 193 "prog_io_typeclass.m"
            else
#line 194 "prog_io_typeclass.m"
              {
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_158_158 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_168_168;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ConstraintNotInParamsStrs_42;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDepNotInParamsStrs_43;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Prefix_46;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Suffix_47;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Middle_50;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_57;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_58;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_76_76;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_78_78;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_103_103;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_104_104;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_110_110;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_111_111;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_112_112;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_113_113;
#line 194 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_116_116;
#line 206 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_80_80;

#line 197 "prog_io_typeclass.m"
                {
#line 197 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 197 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[2]));
#line 197 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_3));
#line 197 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 197 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 3) = ((MR_Box) ((MR_Integer) 0));
#line 197 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_171_171));
#line 197 "prog_io_typeclass.m"
                }
#line 196 "prog_io_typeclass.m"
                {
#line 196 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ConstraintNotInParamsStrs_42 = mercury__list__map_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__TypeCtorInfo_158_158, parse_tree__prog_io_typeclass__V_76_76, parse_tree__prog_io_typeclass__ConstraintNotInParams_28);
                }
#line 200 "prog_io_typeclass.m"
                {
#line 200 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 200 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[2]));
#line 200 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_4));
#line 200 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 200 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, 3) = ((MR_Box) ((MR_Integer) 0));
#line 200 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_171_171));
#line 200 "prog_io_typeclass.m"
                }
#line 199 "prog_io_typeclass.m"
                {
#line 199 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__FunDepNotInParamsStrs_43 = mercury__list__map_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__TypeCtorInfo_158_158, parse_tree__prog_io_typeclass__V_78_78, parse_tree__prog_io_typeclass__FunDepNotInParams_30);
                }
#line 202 "prog_io_typeclass.m"
                {
#line 202 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_typeclass__ConstraintNotInParamsStrs_42);
                }
#line 204 "prog_io_typeclass.m"
                {
#line 204 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_typeclass__FunDepNotInParamsStrs_43);
                }
#line 206 "prog_io_typeclass.m"
                {
#line 206 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_80_80 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__NotInParams_37);
                }
#line 206 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_80_80 == (MR_Integer) 1);
#line 209 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 207 "prog_io_typeclass.m"
                  {
#line 207 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Prefix_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[67]);
#line 208 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Suffix_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[69]);
#line 207 "prog_io_typeclass.m"
                  }
#line 209 "prog_io_typeclass.m"
                else
#line 210 "prog_io_typeclass.m"
                  {
#line 210 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Prefix_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[71]);
#line 211 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Suffix_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[73]);
#line 210 "prog_io_typeclass.m"
                  }
#line 217 "prog_io_typeclass.m"
                if ((parse_tree__prog_io_typeclass__ConstraintNotInParams_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 217 "prog_io_typeclass.m"
                  if ((parse_tree__prog_io_typeclass__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 214 "prog_io_typeclass.m"
                    {
#line 216 "prog_io_typeclass.m"
                      {
#line 216 "prog_io_typeclass.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_typeclass", (MR_String) "predicate \140parse_tree.prog_io_typeclass.parse_constrained_class\'/7", (MR_String) "no NotInParams");
#line 216 "prog_io_typeclass.m"
                        return;
                      }
#line 214 "prog_io_typeclass.m"
                    }
#line 217 "prog_io_typeclass.m"
                  else
#line 218 "prog_io_typeclass.m"
                    {
#line 220 "prog_io_typeclass.m"
                      {
#line 220 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45, parse_tree__prog_io_typeclass__FunDepErrorContext_36);
                      }
#line 218 "prog_io_typeclass.m"
                    }
#line 217 "prog_io_typeclass.m"
                else
#line 217 "prog_io_typeclass.m"
                  if ((parse_tree__prog_io_typeclass__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 223 "prog_io_typeclass.m"
                    {
#line 225 "prog_io_typeclass.m"
                      {
#line 225 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44, parse_tree__prog_io_typeclass__ConstraintErrorContext_33);
                      }
#line 223 "prog_io_typeclass.m"
                    }
#line 217 "prog_io_typeclass.m"
                  else
#line 228 "prog_io_typeclass.m"
                    {
#line 228 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_167_167 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 228 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__V_93_93;
#line 228 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__V_94_94;
#line 228 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__V_99_99;

#line 232 "prog_io_typeclass.m"
                      {
#line 232 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_99_99 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_167_167, parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45, parse_tree__prog_io_typeclass__FunDepErrorContext_36);
                      }
#line 232 "prog_io_typeclass.m"
                      {
#line 232 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_94_94 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_167_167, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[75]), parse_tree__prog_io_typeclass__V_99_99);
                      }
#line 231 "prog_io_typeclass.m"
                      {
#line 231 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_93_93 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_167_167, parse_tree__prog_io_typeclass__ConstraintErrorContext_33, parse_tree__prog_io_typeclass__V_94_94);
                      }
#line 230 "prog_io_typeclass.m"
                      {
#line 230 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Middle_50 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_167_167, parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44, parse_tree__prog_io_typeclass__V_93_93);
                      }
#line 228 "prog_io_typeclass.m"
                    }
#line 8211 "parse_tree.prog_io_typeclass.c"
                parse_tree__prog_io_typeclass__TypeCtorInfo_168_168 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 235 "prog_io_typeclass.m"
                {
#line 235 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_104_104 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_168_168, parse_tree__prog_io_typeclass__Suffix_47, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10]));
                }
#line 235 "prog_io_typeclass.m"
                {
#line 235 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_103_103 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_168_168, parse_tree__prog_io_typeclass__Middle_50, parse_tree__prog_io_typeclass__V_104_104);
                }
#line 235 "prog_io_typeclass.m"
                {
#line 235 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_57 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_168_168, parse_tree__prog_io_typeclass__Prefix_46, parse_tree__prog_io_typeclass__V_103_103);
                }
#line 237 "prog_io_typeclass.m"
                {
#line 237 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 237 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_113_113, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_57));
#line 237 "prog_io_typeclass.m"
                }
#line 237 "prog_io_typeclass.m"
                {
#line 237 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_112_112, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_113_113));
#line 237 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "prog_io_typeclass.m"
                }
#line 237 "prog_io_typeclass.m"
                {
#line 237 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 237 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_12));
#line 237 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_111_111, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_112_112));
#line 237 "prog_io_typeclass.m"
                }
#line 236 "prog_io_typeclass.m"
                {
#line 236 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_111_111));
#line 236 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "prog_io_typeclass.m"
                }
#line 236 "prog_io_typeclass.m"
                {
#line 236 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 236 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 236 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_58, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_110_110));
#line 236 "prog_io_typeclass.m"
                }
#line 238 "prog_io_typeclass.m"
                {
#line 238 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_58));
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "prog_io_typeclass.m"
                }
#line 238 "prog_io_typeclass.m"
                {
#line 238 "prog_io_typeclass.m"
                  MR_Word base;
#line 238 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 238 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_116_116));
#line 238 "prog_io_typeclass.m"
                }
#line 194 "prog_io_typeclass.m"
              }
#line 146 "prog_io_typeclass.m"
          }
#line 139 "prog_io_typeclass.m"
      }
#line 134 "prog_io_typeclass.m"
  }
#line 129 "prog_io_typeclass.m"
}

#line 309 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0_1(
#line 309 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 309 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 309 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 309 "prog_io_typeclass.m"
{
#line 309 "prog_io_typeclass.m"
  {
#line 309 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 309 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__2_55;

#line 309 "prog_io_typeclass.m"
    {
#line 309 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__309__1_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_HeadVar__2_55);
    }
#line 309 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__2_55));
#line 309 "prog_io_typeclass.m"
  }
#line 309 "prog_io_typeclass.m"
}

#line 115 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0(
#line 115 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 115 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 115 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_9,
#line 115 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 115 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 115 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_12)
#line 115 "prog_io_typeclass.m"
{
#line 123 "prog_io_typeclass.m"
  {
#line 123 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_8)) == (MR_mktag((MR_Integer) 0)));
#line 123 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_13;
#line 123 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Constraints_14;
#line 120 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_17_17;
#line 120 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_18_18;
#line 120 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_19_19;
#line 120 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_20_20;
#line 120 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 120 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_15_15;

#line 120 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 120 "prog_io_typeclass.m"
      {
#line 120 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 0)));
#line 120 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 1)));
#line 120 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 2)));
#line 120 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 120 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 120 "prog_io_typeclass.m"
          {
#line 120 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_17_17, (MR_Integer) 0)));
#line 120 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_18_18, (MR_String) "<=") == 0);
#line 120 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 120 "prog_io_typeclass.m"
              {
#line 120 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 120 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 120 "prog_io_typeclass.m"
                  {
#line 120 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 0)));
#line 120 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 1)));
#line 120 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 120 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 120 "prog_io_typeclass.m"
                      {
#line 120 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 0)));
#line 120 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 1)));
#line 120 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "prog_io_typeclass.m"
                      }
#line 120 "prog_io_typeclass.m"
                  }
#line 120 "prog_io_typeclass.m"
              }
#line 120 "prog_io_typeclass.m"
          }
#line 120 "prog_io_typeclass.m"
      }
#line 123 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 121 "prog_io_typeclass.m"
      {
#line 121 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_13, parse_tree__prog_io_typeclass__Constraints_14, parse_tree__prog_io_typeclass__VarSet_9, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);
#line 121 "prog_io_typeclass.m"
        return;
      }
#line 123 "prog_io_typeclass.m"
    else
#line 124 "prog_io_typeclass.m"
      {
#line 124 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_52_69;
#line 124 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_53_70;
#line 124 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TVarSet_16;
#line 124 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__VarSet_31;
#line 124 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeClassName_32;

#line 124 "prog_io_typeclass.m"
        {
#line 124 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_9, &parse_tree__prog_io_typeclass__TVarSet_16);
        }
#line 8464 "parse_tree.prog_io_typeclass.c"
        parse_tree__prog_io_typeclass__TypeCtorInfo_52_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 8466 "parse_tree.prog_io_typeclass.c"
        parse_tree__prog_io_typeclass__TypeCtorInfo_53_70 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 304 "prog_io_typeclass.m"
        {
#line 304 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_52_69, parse_tree__prog_io_typeclass__TypeCtorInfo_53_70, parse_tree__prog_io_typeclass__TVarSet_16, &parse_tree__prog_io_typeclass__VarSet_31);
        }
#line 305 "prog_io_typeclass.m"
        {
#line 305 "prog_io_typeclass.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_70, parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Arg_8, parse_tree__prog_io_typeclass__VarSet_31, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[56]), &parse_tree__prog_io_typeclass__MaybeClassName_32);
        }
#line 328 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_32)) == (MR_mktag((MR_Integer) 0))))
#line 329 "prog_io_typeclass.m"
          {
#line 329 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Specs_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_32, (MR_Integer) 0)));

#line 330 "prog_io_typeclass.m"
            {
#line 330 "prog_io_typeclass.m"
              MR_Word base;
#line 330 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 330 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemTypeClass_12 = base;
#line 330 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_41));
#line 330 "prog_io_typeclass.m"
            }
#line 329 "prog_io_typeclass.m"
          }
#line 328 "prog_io_typeclass.m"
        else
#line 308 "prog_io_typeclass.m"
          {
#line 308 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeInfo_59_76 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[3];
#line 308 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ClassName_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_32, (MR_Integer) 0)));
#line 308 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TermVars0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_32, (MR_Integer) 1)));
#line 308 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TermVars_35;
#line 320 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Vars_36;
#line 311 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SortedTermVars_37;
#line 311 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_46_46;
#line 311 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_77_77;

#line 309 "prog_io_typeclass.m"
            {
#line 309 "prog_io_typeclass.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], parse_tree__prog_io_typeclass__TypeInfo_59_76, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[2], parse_tree__prog_io_typeclass__TermVars0_34, &parse_tree__prog_io_typeclass__TermVars_35);
            }
#line 311 "prog_io_typeclass.m"
            {
#line 311 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_52_69, parse_tree__prog_io_typeclass__TermVars_35, &parse_tree__prog_io_typeclass__Vars_36);
            }
#line 311 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 311 "prog_io_typeclass.m"
              {
#line 312 "prog_io_typeclass.m"
                {
#line 312 "prog_io_typeclass.m"
                  mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_59_76, parse_tree__prog_io_typeclass__TermVars_35, &parse_tree__prog_io_typeclass__SortedTermVars_37);
                }
#line 313 "prog_io_typeclass.m"
                {
#line 313 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_46_46 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_59_76, parse_tree__prog_io_typeclass__SortedTermVars_37);
                }
#line 313 "prog_io_typeclass.m"
                {
#line 313 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_77_77 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_59_76, parse_tree__prog_io_typeclass__TermVars_35);
                }
#line 313 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_46_46 == parse_tree__prog_io_typeclass__V_77_77);
#line 311 "prog_io_typeclass.m"
              }
#line 320 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 318 "prog_io_typeclass.m"
              {
#line 318 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeClassInfo_38;

#line 317 "prog_io_typeclass.m"
                {
#line 317 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__TypeClassInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 317 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_33));
#line 317 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__Vars_36));
#line 317 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_16));
#line 317 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 317 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 317 "prog_io_typeclass.m"
                }
#line 319 "prog_io_typeclass.m"
                {
#line 319 "prog_io_typeclass.m"
                  MR_Word base;
#line 319 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 319 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_12 = base;
#line 319 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__TypeClassInfo_38));
#line 319 "prog_io_typeclass.m"
                }
#line 318 "prog_io_typeclass.m"
              }
#line 320 "prog_io_typeclass.m"
            else
#line 322 "prog_io_typeclass.m"
              {
#line 322 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_40;
#line 322 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 322 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_61_61;
#line 322 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_62_62;
#line 322 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_67_67;

#line 325 "prog_io_typeclass.m"
                {
#line 325 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_62_62 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_70, parse_tree__prog_io_typeclass__Arg_8);
                }
#line 325 "prog_io_typeclass.m"
                {
#line 325 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_62_62));
#line 325 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[57])));
#line 325 "prog_io_typeclass.m"
                }
#line 324 "prog_io_typeclass.m"
                {
#line 324 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_61_61));
#line 324 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "prog_io_typeclass.m"
                }
#line 324 "prog_io_typeclass.m"
                {
#line 324 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 324 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 324 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_40, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_60_60));
#line 324 "prog_io_typeclass.m"
                }
#line 326 "prog_io_typeclass.m"
                {
#line 326 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_40));
#line 326 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "prog_io_typeclass.m"
                }
#line 326 "prog_io_typeclass.m"
                {
#line 326 "prog_io_typeclass.m"
                  MR_Word base;
#line 326 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 326 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_12 = base;
#line 326 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_67_67));
#line 326 "prog_io_typeclass.m"
                }
#line 322 "prog_io_typeclass.m"
              }
#line 308 "prog_io_typeclass.m"
          }
#line 124 "prog_io_typeclass.m"
      }
#line 123 "prog_io_typeclass.m"
  }
#line 115 "prog_io_typeclass.m"
}

#line 341 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0_1(
#line 341 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 341 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 341 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 341 "prog_io_typeclass.m"
{
#line 341 "prog_io_typeclass.m"
  {
#line 341 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 341 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__4_18;

#line 341 "prog_io_typeclass.m"
    {
#line 341 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_class_methods__341__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_HeadVar__4_18);
    }
#line 341 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__4_18));
#line 341 "prog_io_typeclass.m"
  }
#line 341 "prog_io_typeclass.m"
}

#line 89 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0(
#line 89 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 89 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Name_9,
#line 89 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Methods_10,
#line 89 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 89 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 89 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 89 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14)
#line 89 "prog_io_typeclass.m"
{
#line 93 "prog_io_typeclass.m"
  {
#line 93 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 93 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TVarSet_15;
#line 8736 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__MethodList_47;

#line 94 "prog_io_typeclass.m"
    {
#line 94 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_11, &parse_tree__prog_io_typeclass__TVarSet_15);
    }
#line 339 "prog_io_typeclass.m"
    {
#line 339 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_typeclass__Methods_10, &parse_tree__prog_io_typeclass__MethodList_47);
    }
#line 8749 "parse_tree.prog_io_typeclass.c"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 8751 "parse_tree.prog_io_typeclass.c"
      {
#line 8753 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Interface_51;
#line 8755 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_54_54;
#line 8757 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Methods_82;
#line 8759 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Specs_83;

#line 341 "prog_io_typeclass.m"
        {
#line 341 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 341 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[1]));
#line 341 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0_1));
#line 341 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 341 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_8));
#line 341 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__VarSet_11));
#line 341 "prog_io_typeclass.m"
        }
#line 341 "prog_io_typeclass.m"
        {
#line 341 "prog_io_typeclass.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[4], parse_tree__prog_io_typeclass__V_54_54, parse_tree__prog_io_typeclass__MethodList_47, &parse_tree__prog_io_typeclass__Interface_51);
        }
#line 388 "prog_io_typeclass.m"
        {
#line 388 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__prog_io_typeclass__Interface_51, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Methods_82, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Specs_83);
        }
#line 8788 "parse_tree.prog_io_typeclass.c"
        if ((parse_tree__prog_io_typeclass__Specs_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8790 "parse_tree.prog_io_typeclass.c"
          {
#line 8792 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18;

#line 99 "prog_io_typeclass.m"
            {
#line 99 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__parse_class_head_6_p_0(parse_tree__prog_io_typeclass__ModuleName_8, parse_tree__prog_io_typeclass__Name_9, parse_tree__prog_io_typeclass__VarSet_11, parse_tree__prog_io_typeclass__Context_12, parse_tree__prog_io_typeclass__SeqNum_13, &parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18);
            }
#line 104 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18)) == (MR_mktag((MR_Integer) 0))))
#line 103 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18;
#line 104 "prog_io_typeclass.m"
            else
#line 105 "prog_io_typeclass.m"
              {
#line 105 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ParsedNameAndVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18, (MR_Integer) 0)));
#line 105 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 105 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_23_23;
#line 105 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_25_25;
#line 105 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_26_26;
#line 105 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_27_27;
#line 105 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_28_28;
#line 105 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_31_31;
#line 105 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_32_32;
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_30_30;

#line 106 "prog_io_typeclass.m"
                {
#line 106 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Methods_82));
#line 106 "prog_io_typeclass.m"
                }
#line 106 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 0)));
#line 106 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 1)));
#line 106 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 2)));
#line 106 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 3)));
#line 106 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 4)));
#line 106 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 5)));
#line 106 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 6)));
#line 106 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 7)));
#line 106 "prog_io_typeclass.m"
                {
#line 106 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 106 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_25_25));
#line 106 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_26_26));
#line 106 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_27_27));
#line 106 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__V_28_28));
#line 106 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_23_23));
#line 106 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_15));
#line 106 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__V_31_31));
#line 106 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__V_32_32));
#line 106 "prog_io_typeclass.m"
                }
#line 106 "prog_io_typeclass.m"
                {
#line 106 "prog_io_typeclass.m"
                  MR_Word base;
#line 106 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 106 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_21_21));
#line 106 "prog_io_typeclass.m"
                }
#line 105 "prog_io_typeclass.m"
              }
#line 8891 "parse_tree.prog_io_typeclass.c"
          }
#line 8893 "parse_tree.prog_io_typeclass.c"
        else
#line 8895 "parse_tree.prog_io_typeclass.c"
          {
#line 8897 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_89;

#line 394 "prog_io_typeclass.m"
            {
#line 394 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__MaybeParsedMethods_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 394 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_89, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_83));
#line 394 "prog_io_typeclass.m"
            }
#line 112 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_89;
#line 8910 "parse_tree.prog_io_typeclass.c"
          }
#line 8912 "parse_tree.prog_io_typeclass.c"
      }
#line 8914 "parse_tree.prog_io_typeclass.c"
    else
#line 8916 "parse_tree.prog_io_typeclass.c"
      {
#line 8918 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Spec_53;
#line 8920 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_65_65;
#line 8922 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_66_66;
#line 8924 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_67_67;
#line 8926 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_72_72;
#line 8928 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_88;

#line 352 "prog_io_typeclass.m"
        {
#line 352 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_67_67 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Methods_10);
        }
#line 352 "prog_io_typeclass.m"
        {
#line 352 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 352 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_67_67));
#line 352 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[54])));
#line 352 "prog_io_typeclass.m"
        }
#line 351 "prog_io_typeclass.m"
        {
#line 351 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_66_66));
#line 351 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "prog_io_typeclass.m"
        }
#line 351 "prog_io_typeclass.m"
        {
#line 351 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__Spec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 351 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 351 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_53, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_65_65));
#line 351 "prog_io_typeclass.m"
        }
#line 353 "prog_io_typeclass.m"
        {
#line 353 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_53));
#line 353 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 353 "prog_io_typeclass.m"
        }
#line 353 "prog_io_typeclass.m"
        {
#line 353 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__MaybeParsedMethods_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 353 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_88, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_72_72));
#line 353 "prog_io_typeclass.m"
        }
#line 112 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_88;
#line 8988 "parse_tree.prog_io_typeclass.c"
      }
#line 93 "prog_io_typeclass.m"
  }
#line 89 "prog_io_typeclass.m"
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
#line 453 "prog_io_typeclass.m"
  {
#line 453 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 453 "prog_io_typeclass.m"
    {
#line 453 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_97_110_100_95_105_110_115_116_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__ConstraintsTerm_7, parse_tree__prog_io_typeclass__Result_8);
#line 453 "prog_io_typeclass.m"
      return;
    }
#line 453 "prog_io_typeclass.m"
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
#line 416 "prog_io_typeclass.m"
  {
#line 416 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 416 "prog_io_typeclass.m"
    {
#line 416 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__ConstraintsTerm_7, parse_tree__prog_io_typeclass__Result_8);
#line 416 "prog_io_typeclass.m"
      return;
    }
#line 416 "prog_io_typeclass.m"
  }
#line 45 "prog_io_typeclass.m"
}

#line 797 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_6_p_0_1(
#line 797 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 797 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 797 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 797 "prog_io_typeclass.m"
{
#line 797 "prog_io_typeclass.m"
  {
#line 797 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 797 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_MaybeInstanceMethod_8;

#line 797 "prog_io_typeclass.m"
    {
#line 797 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__term_to_instance_method_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_MaybeInstanceMethod_8);
    }
#line 797 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_MaybeInstanceMethod_8));
#line 797 "prog_io_typeclass.m"
  }
#line 797 "prog_io_typeclass.m"
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
#line 625 "prog_io_typeclass.m"
  {
#line 625 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__TypeClassTerm_9)) == (MR_mktag((MR_Integer) 1)));
#line 625 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_24_24;
#line 625 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_25_25;
#line 625 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Arg_13;
#line 625 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TVarSet_14;
#line 625 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 633 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_15;
#line 633 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Methods_16;
#line 630 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_19_19;
#line 630 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_20_20;
#line 630 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 630 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_22_22;
#line 630 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_23_23;
#line 630 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_17_17;

#line 628 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 628 "prog_io_typeclass.m"
      {
#line 628 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 0)));
#line 628 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 1)));
#line 628 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 625 "prog_io_typeclass.m"
          {
#line 9147 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 9149 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 629 "prog_io_typeclass.m"
            {
#line 629 "prog_io_typeclass.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_24_24, parse_tree__prog_io_typeclass__TypeCtorInfo_25_25, parse_tree__prog_io_typeclass__VarSet_8, &parse_tree__prog_io_typeclass__TVarSet_14);
            }
#line 630 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_13)) == (MR_mktag((MR_Integer) 0)));
#line 630 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 630 "prog_io_typeclass.m"
              {
#line 630 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 0)));
#line 630 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 1)));
#line 630 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 2)));
#line 630 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 630 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 630 "prog_io_typeclass.m"
                  {
#line 630 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 0)));
#line 630 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_20_20, (MR_String) "where") == 0);
#line 630 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 630 "prog_io_typeclass.m"
                      {
#line 630 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 630 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 630 "prog_io_typeclass.m"
                          {
#line 630 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 0)));
#line 630 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 1)));
#line 630 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 630 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 630 "prog_io_typeclass.m"
                              {
#line 630 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__Methods_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_22_22, (MR_Integer) 0)));
#line 630 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_22_22, (MR_Integer) 1)));
#line 630 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "prog_io_typeclass.m"
                              }
#line 630 "prog_io_typeclass.m"
                          }
#line 630 "prog_io_typeclass.m"
                      }
#line 630 "prog_io_typeclass.m"
                  }
#line 630 "prog_io_typeclass.m"
              }
#line 633 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 9216 "parse_tree.prog_io_typeclass.c"
              {
#line 9218 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__MethodList_56;

#line 795 "prog_io_typeclass.m"
                {
#line 795 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_typeclass__Methods_16, &parse_tree__prog_io_typeclass__MethodList_56);
                }
#line 9226 "parse_tree.prog_io_typeclass.c"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 9228 "parse_tree.prog_io_typeclass.c"
                  {
#line 9230 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Interface_57;
#line 9232 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 9234 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Methods_85;
#line 9236 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Specs_86;

#line 797 "prog_io_typeclass.m"
                    {
#line 797 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 797 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[0]));
#line 797 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_instance_6_p_0_1));
#line 797 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 797 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_7));
#line 797 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__VarSet_8));
#line 797 "prog_io_typeclass.m"
                    }
#line 797 "prog_io_typeclass.m"
                    {
#line 797 "prog_io_typeclass.m"
                      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[6], parse_tree__prog_io_typeclass__V_60_60, parse_tree__prog_io_typeclass__MethodList_56, &parse_tree__prog_io_typeclass__Interface_57);
                    }
#line 388 "prog_io_typeclass.m"
                    {
#line 388 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__prog_io_typeclass__Interface_57, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Methods_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Specs_86);
                    }
#line 9265 "parse_tree.prog_io_typeclass.c"
                    if ((parse_tree__prog_io_typeclass__Specs_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9267 "parse_tree.prog_io_typeclass.c"
                      {
#line 9269 "parse_tree.prog_io_typeclass.c"
                        MR_Word parse_tree__prog_io_typeclass__MaybeItemInstance0_36;

#line 731 "prog_io_typeclass.m"
                        {
#line 731 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_15, parse_tree__prog_io_typeclass__TVarSet_14, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, &parse_tree__prog_io_typeclass__MaybeItemInstance0_36);
                        }
#line 736 "prog_io_typeclass.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemInstance0_36)) == (MR_mktag((MR_Integer) 0))))
#line 735 "prog_io_typeclass.m"
                          *parse_tree__prog_io_typeclass__Result_12 = parse_tree__prog_io_typeclass__MaybeItemInstance0_36;
#line 736 "prog_io_typeclass.m"
                        else
#line 737 "prog_io_typeclass.m"
                          {
#line 737 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__ItemInstance0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstance0_36, (MR_Integer) 0)));
#line 737 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__Constraints_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 0)));
#line 737 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__NameString_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 1)));
#line 737 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__Types_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 2)));
#line 737 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__OriginalTypes_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 3)));
#line 737 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__ModName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 6)));
#line 737 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__InstanceContext_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 7)));
#line 737 "prog_io_typeclass.m"
                            MR_Integer parse_tree__prog_io_typeclass__ItemSeqNum_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 8)));
#line 737 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__ItemInstance_48;
#line 737 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__MaybeItemInstance1_49;
#line 737 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_50_50;
#line 740 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 4)));
#line 740 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 5)));

#line 743 "prog_io_typeclass.m"
                            {
#line 743 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 743 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Methods_85));
#line 743 "prog_io_typeclass.m"
                            }
#line 743 "prog_io_typeclass.m"
                            {
#line 743 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__ItemInstance_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 743 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_39));
#line 743 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__NameString_40));
#line 743 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_41));
#line 743 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__OriginalTypes_42));
#line 743 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_50_50));
#line 743 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_14));
#line 743 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModName_45));
#line 743 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceContext_46));
#line 743 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemSeqNum_47));
#line 743 "prog_io_typeclass.m"
                            }
#line 747 "prog_io_typeclass.m"
                            {
#line 747 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__MaybeItemInstance1_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 747 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstance1_49, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstance_48));
#line 747 "prog_io_typeclass.m"
                            }
#line 748 "prog_io_typeclass.m"
                            {
#line 748 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0(parse_tree__prog_io_typeclass__MaybeItemInstance1_49, parse_tree__prog_io_typeclass__Name_15, parse_tree__prog_io_typeclass__Result_12);
                            }
#line 737 "prog_io_typeclass.m"
                          }
#line 9359 "parse_tree.prog_io_typeclass.c"
                      }
#line 9361 "parse_tree.prog_io_typeclass.c"
                    else
#line 9363 "parse_tree.prog_io_typeclass.c"
                      {
#line 9365 "parse_tree.prog_io_typeclass.c"
                        MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_92;

#line 394 "prog_io_typeclass.m"
                        {
#line 394 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__MaybeParsedMethods_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 394 "prog_io_typeclass.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_92, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_86));
#line 394 "prog_io_typeclass.m"
                        }
#line 753 "prog_io_typeclass.m"
                        *parse_tree__prog_io_typeclass__Result_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_92;
#line 9378 "parse_tree.prog_io_typeclass.c"
                      }
#line 9380 "parse_tree.prog_io_typeclass.c"
                  }
#line 9382 "parse_tree.prog_io_typeclass.c"
                else
#line 9384 "parse_tree.prog_io_typeclass.c"
                  {
#line 9386 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Spec_59;
#line 9388 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_68_68;
#line 9390 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_69_69;
#line 9392 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_70_70;
#line 9394 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_75_75;
#line 9396 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_91;

#line 803 "prog_io_typeclass.m"
                    {
#line 803 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_70_70 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Methods_16);
                    }
#line 803 "prog_io_typeclass.m"
                    {
#line 803 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 803 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_70_70));
#line 803 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[53])));
#line 803 "prog_io_typeclass.m"
                    }
#line 802 "prog_io_typeclass.m"
                    {
#line 802 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_69_69));
#line 802 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "prog_io_typeclass.m"
                    }
#line 802 "prog_io_typeclass.m"
                    {
#line 802 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Spec_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 802 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 802 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_59, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_68_68));
#line 802 "prog_io_typeclass.m"
                    }
#line 804 "prog_io_typeclass.m"
                    {
#line 804 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_59));
#line 804 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 804 "prog_io_typeclass.m"
                    }
#line 804 "prog_io_typeclass.m"
                    {
#line 804 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__MaybeParsedMethods_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 804 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_91, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_75_75));
#line 804 "prog_io_typeclass.m"
                    }
#line 753 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__Result_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_91;
#line 9456 "parse_tree.prog_io_typeclass.c"
                  }
#line 9458 "parse_tree.prog_io_typeclass.c"
              }
#line 633 "prog_io_typeclass.m"
            else
#line 634 "prog_io_typeclass.m"
              {
#line 634 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Arg_13, parse_tree__prog_io_typeclass__TVarSet_14, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__Result_12);
              }
#line 633 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 625 "prog_io_typeclass.m"
          }
#line 628 "prog_io_typeclass.m"
      }
#line 625 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 625 "prog_io_typeclass.m"
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
#line 77 "prog_io_typeclass.m"
  {
#line 77 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__TypeClassTerm_9)) == (MR_mktag((MR_Integer) 1)));
#line 77 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Arg_13;
#line 77 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_17_17;
#line 84 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_14;
#line 84 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Methods_15;
#line 81 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 81 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_19_19;
#line 81 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_20_20;
#line 81 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 81 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_22_22;
#line 81 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_16_16;

#line 80 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 80 "prog_io_typeclass.m"
      {
#line 80 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 0)));
#line 80 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 1)));
#line 80 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 77 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 77 "prog_io_typeclass.m"
          {
#line 81 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_13)) == (MR_mktag((MR_Integer) 0)));
#line 81 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 81 "prog_io_typeclass.m"
              {
#line 81 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 0)));
#line 81 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 1)));
#line 81 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 2)));
#line 81 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 81 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 81 "prog_io_typeclass.m"
                  {
#line 81 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 0)));
#line 81 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_19_19, (MR_String) "where") == 0);
#line 81 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 81 "prog_io_typeclass.m"
                      {
#line 81 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 81 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 81 "prog_io_typeclass.m"
                          {
#line 81 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 0)));
#line 81 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 1)));
#line 81 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 81 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 81 "prog_io_typeclass.m"
                              {
#line 81 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__Methods_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 0)));
#line 81 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 1)));
#line 81 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 81 "prog_io_typeclass.m"
                              }
#line 81 "prog_io_typeclass.m"
                          }
#line 81 "prog_io_typeclass.m"
                      }
#line 81 "prog_io_typeclass.m"
                  }
#line 81 "prog_io_typeclass.m"
              }
#line 84 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 82 "prog_io_typeclass.m"
              {
#line 82 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_14, parse_tree__prog_io_typeclass__Methods_15, parse_tree__prog_io_typeclass__VarSet_8, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);
              }
#line 84 "prog_io_typeclass.m"
            else
#line 85 "prog_io_typeclass.m"
              {
#line 85 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__parse_class_head_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Arg_13, parse_tree__prog_io_typeclass__VarSet_8, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);
              }
#line 84 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 77 "prog_io_typeclass.m"
          }
#line 80 "prog_io_typeclass.m"
      }
#line 77 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 77 "prog_io_typeclass.m"
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
