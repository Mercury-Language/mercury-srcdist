/*
** Automatically generated from `superhomogeneous.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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


/* :- module hlds.make_hlds.superhomogeneous. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__superhomogeneous__init
ENDINIT
*/

#include "hlds.make_hlds.superhomogeneous.mih"


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
#include "int.mih"
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
#include "transform_hlds.mih"
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
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.from_ground_term_util.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_dcg.mih"
#include "parse_tree.prog_io_goal.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.field_access.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 159 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 162 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_0[2];

#line 165 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0;

#line 168 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_1[1];

#line 171 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1;

#line 174 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0;

#line 177 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_2[3];

#line 180 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2;

#line 183 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0[1];

#line 186 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1[1];

#line 189 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2[1];

#line 192 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_arg_context_0[3];

#line 195 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0[3];

#line 198 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0[3];

#line 201 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 204 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_expansion_0_0[2];

#line 207 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0;

#line 210 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0[1];

#line 213 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_expansion_0[1];

#line 216 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_expansion_0[1];

#line 219 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_expansion_0[1];

#line 222 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0;

#line 225 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 228 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_maybe_fgti_var_size_0_1[2];

#line 231 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1;

#line 234 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_0[1];

#line 237 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_1[1];

#line 240 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_fgti_var_size_0[2];

#line 243 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_fgti_var_size_0[2];

#line 246 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_fgti_var_size_0[2];

#line 249 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0_10001(
#line 252 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 254 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 257 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0_10001(
#line 260 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 262 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 264 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3);

#line 267 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0_10001(
#line 270 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 272 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 275 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0_10001(
#line 278 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 280 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 282 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3);

#line 285 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0_10001(
#line 288 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 290 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 293 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0_10001(
#line 296 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 298 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 300 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3);

#line 744 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
#line 744 "superhomogeneous.m"
  MR_String hlds__make_hlds__superhomogeneous__YAtom_24,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YArgs_25,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
#line 744 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135,
#line 744 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137,
#line 744 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139,
#line 744 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141,
#line 744 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143,
#line 744 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145,
#line 744 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);

#line 591 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctor_24,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YArgTerms0_25,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
#line 591 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_87,
#line 591 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_88,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_89,
#line 591 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_90,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_91,
#line 591 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_92,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_93,
#line 591 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_94,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_95,
#line 591 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_96,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_97,
#line 591 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_98);

#line 554 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_21,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 554 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_41,
#line 554 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_42,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_43,
#line 554 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_44,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_45,
#line 554 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_46,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_47,
#line 554 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_48,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49,
#line 554 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_51,
#line 554 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_52);

#line 495 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XTerm_21,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 495 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55,
#line 495 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57,
#line 495 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59,
#line 495 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61,
#line 495 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63,
#line 495 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65,
#line 495 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);

#line 479 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LHSVar_21,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 479 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36,
#line 479 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38,
#line 479 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40,
#line 479 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42,
#line 479 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44,
#line 479 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46,
#line 479 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47);

#line 462 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LHS0_21,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 462 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_37,
#line 462 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_39,
#line 462 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_40,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_41,
#line 462 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_42,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_43,
#line 462 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_44,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_45,
#line 462 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_46,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_47,
#line 462 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_48);

#line 423 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_20,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_21,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContext_23,
#line 423 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__ArgNum_25,
#line 423 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_26,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42,
#line 423 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44,
#line 423 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46,
#line 423 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48,
#line 423 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50,
#line 423 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52,
#line 423 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53);

#line 390 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVars_19,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerms_20,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContexts_21,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 390 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansions_24,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40,
#line 390 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42,
#line 390 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44,
#line 390 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46,
#line 390 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48,
#line 390 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50,
#line 390 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51);

#line 367 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 367 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__5_5,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20);

#line 338 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
#line 338 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__6_6,
#line 338 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8,
#line 338 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10,
#line 338 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
#line 338 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14,
#line 338 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
#line 338 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 338 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);

#line 177 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(
#line 177 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 177 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 177 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3);

#line 177 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(
#line 177 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 177 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2);

#line 181 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(
#line 181 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 181 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 181 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3);

#line 181 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(
#line 181 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 181 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2);

#line 1328 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(
#line 1328 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Arg_6,
#line 1328 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Var_7,
#line 1328 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Vars0_8,
#line 1328 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
#line 1328 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13);

#line 1270 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_9_p_0(
#line 1270 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 1270 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2,
#line 1270 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_3,
#line 1270 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4,
#line 1270 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_5,
#line 1270 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6,
#line 1270 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_7,
#line 1270 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8,
#line 1270 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_9);

#line 1200 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(
#line 1200 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ModuleInfo_1,
#line 1200 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 1200 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 1200 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
#line 1200 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__5_5,
#line 1200 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__6_6,
#line 1200 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 1200 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8);

#line 1013 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__X_26,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__UnificationPurity_27,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LambdaPurity_28,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Groundness_29,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_30,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Args0_32,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Modes_33,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Det_34,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_35,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_36,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_37,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_38,
#line 1013 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_39,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__OutsideSVarState_40,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82,
#line 1013 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84,
#line 1013 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86,
#line 1013 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88,
#line 1013 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90,
#line 1013 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);

#line 990 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(
#line 990 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Modes0_8,
#line 990 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Modes_9,
#line 990 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_10,
#line 990 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
#line 990 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
#line 990 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 990 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);

#line 331 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(
#line 331 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 331 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__GoalCord_4);

#line 314 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(
#line 314 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 314 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2,
#line 314 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_3,
#line 314 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4,
#line 314 "superhomogeneous.m"
  MR_Integer * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_5);

#line 307 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_2(
#line 307 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 307 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 307 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 299 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1(
#line 299 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 299 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 299 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 290 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(
#line 290 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_7,
#line 290 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__TermVar_8,
#line 290 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_9,
#line 290 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__BaseGoalSize_10,
#line 290 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_11,
#line 290 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_12);

#line 285 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1(
#line 285 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 285 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 285 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 279 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(
#line 279 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
#line 279 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansions_6,
#line 279 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
#line 279 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8);

#line 268 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(
#line 268 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
#line 268 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_6,
#line 268 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
#line 268 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8);

#line 248 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(
#line 248 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 248 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__2_2);

#line 223 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(
#line 223 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
#line 223 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
#line 223 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6);

#line 189 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(
#line 189 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
#line 189 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
#line 189 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_6);

#line 285 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0_1(
#line 285 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 285 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 285 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 285 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0_1(
#line 285 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 285 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 285 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);


static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_1[8][2];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_2[1][6];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_4[1][3];




static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In explicit type qualification:"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0)),
    ((MR_Box) (&hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_3[0])),
    ((MR_Box) (hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 1129 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1137 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1143 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0 = {
  (MR_String) "ac_head",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_0,
  NULL,
  NULL,
  NULL
};

#line 1158 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0
};

#line 1163 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1 = {
  (MR_String) "ac_call",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_1,
  NULL,
  NULL,
  NULL
};

#line 1178 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0
  }
};

#line 1186 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_2[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_main_context_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0
};

#line 1193 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2 = {
  (MR_String) "ac_functor",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_2,
  NULL,
  NULL,
  NULL
};

#line 1208 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0
};

#line 1213 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1
};

#line 1218 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2
};

#line 1223 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_arg_context_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2
  }
};

#line 1242 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0[3] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0
};

#line 1249 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1256 "hlds.make_hlds.superhomogeneous.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_arg_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "arg_context",
  {
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0
  },
  {
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_arg_context_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0
};

#line 1277 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1285 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_expansion_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_maybe_fgti_var_size_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1291 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0 = {
  (MR_String) "expansion",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_expansion_0_0,
  NULL,
  NULL,
  NULL
};

#line 1306 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0
};

#line 1311 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_expansion_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0
  }
};

#line 1320 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_expansion_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0
};

#line 1325 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_expansion_0[1] = {
  (MR_Integer) 0
};

#line 1330 "hlds.make_hlds.superhomogeneous.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____expansion_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____expansion_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "expansion",
  {
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_expansion_0
  },
  {
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_expansion_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_expansion_0
};

#line 1351 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0 = {
  (MR_String) "not_fgti",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1366 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1374 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_maybe_fgti_var_size_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1380 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1 = {
  (MR_String) "fgti_var_size",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_maybe_fgti_var_size_0_1,
  NULL,
  NULL,
  NULL
};

#line 1395 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0
};

#line 1400 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_1[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1
};

#line 1405 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_fgti_var_size_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_1
  }
};

#line 1419 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_fgti_var_size_0[2] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0
};

#line 1425 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_fgti_var_size_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1431 "hlds.make_hlds.superhomogeneous.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_maybe_fgti_var_size_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "maybe_fgti_var_size",
  {
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_fgti_var_size_0
  },
  {
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_fgti_var_size_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_fgti_var_size_0
};

#line 1452 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0_10001(
#line 1455 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1457 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 1459 "hlds.make_hlds.superhomogeneous.c"
{
#line 1461 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1463 "hlds.make_hlds.superhomogeneous.c"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 1466 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1468 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2));
    }
#line 1471 "hlds.make_hlds.superhomogeneous.c"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 1473 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1475 "hlds.make_hlds.superhomogeneous.c"
}

#line 1478 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0_10001(
#line 1481 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1483 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 1485 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3)
#line 1487 "hlds.make_hlds.superhomogeneous.c"
{
#line 1489 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1491 "hlds.make_hlds.superhomogeneous.c"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1;

#line 1494 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1496 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0(&hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_3));
    }
#line 1499 "hlds.make_hlds.superhomogeneous.c"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1));
#line 1501 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1503 "hlds.make_hlds.superhomogeneous.c"
}

#line 1506 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0_10001(
#line 1509 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1511 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 1513 "hlds.make_hlds.superhomogeneous.c"
{
#line 1515 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1517 "hlds.make_hlds.superhomogeneous.c"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 1520 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1522 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2));
    }
#line 1525 "hlds.make_hlds.superhomogeneous.c"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 1527 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1529 "hlds.make_hlds.superhomogeneous.c"
}

#line 1532 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0_10001(
#line 1535 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1537 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 1539 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3)
#line 1541 "hlds.make_hlds.superhomogeneous.c"
{
#line 1543 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1545 "hlds.make_hlds.superhomogeneous.c"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1;

#line 1548 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1550 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(&hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_3));
    }
#line 1553 "hlds.make_hlds.superhomogeneous.c"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1));
#line 1555 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1557 "hlds.make_hlds.superhomogeneous.c"
}

#line 1560 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0_10001(
#line 1563 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1565 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 1567 "hlds.make_hlds.superhomogeneous.c"
{
#line 1569 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1571 "hlds.make_hlds.superhomogeneous.c"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 1574 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1576 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2));
    }
#line 1579 "hlds.make_hlds.superhomogeneous.c"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 1581 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1583 "hlds.make_hlds.superhomogeneous.c"
}

#line 1586 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0_10001(
#line 1589 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1591 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 1593 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3)
#line 1595 "hlds.make_hlds.superhomogeneous.c"
{
#line 1597 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1599 "hlds.make_hlds.superhomogeneous.c"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1;

#line 1602 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1604 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(&hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_3));
    }
#line 1607 "hlds.make_hlds.superhomogeneous.c"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1));
#line 1609 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1611 "hlds.make_hlds.superhomogeneous.c"
}

#line 744 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
#line 744 "superhomogeneous.m"
  MR_String hlds__make_hlds__superhomogeneous__YAtom_24,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YArgs_25,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
#line 744 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135,
#line 744 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137,
#line 744 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139,
#line 744 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141,
#line 744 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143,
#line 744 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144,
#line 744 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145,
#line 744 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146)
#line 744 "superhomogeneous.m"
{
#line 765 "superhomogeneous.m"
  {
#line 765 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YArgs_25)) == (MR_mktag((MR_Integer) 1)));
#line 765 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_712_712;
#line 765 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_713_713;
#line 765 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_714_714;
#line 765 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_715_715;

#line 957 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 957 "superhomogeneous.m"
      {
#line 957 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__V_713_713 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgs_25, (MR_Integer) 0)));
#line 957 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__V_712_712 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgs_25, (MR_Integer) 1)));
#line 957 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_712_712)) == (MR_mktag((MR_Integer) 1)));
#line 957 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 957 "superhomogeneous.m"
          {
#line 957 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_715_715 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_712_712, (MR_Integer) 0)));
#line 957 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_714_714 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_712_712, (MR_Integer) 1)));
#line 957 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_714_714 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 765 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 765 "superhomogeneous.m"
              {
#line 765 "superhomogeneous.m"
                if ((strcmp(hlds__make_hlds__superhomogeneous__YAtom_24, (MR_String) ";") == 0))
#line 824 "superhomogeneous.m"
                  {
#line 824 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_368;
#line 824 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_369;
#line 824 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__CondTerm0_57;
#line 824 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__ThenTerm0_58;
#line 824 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__CondTerm_62;
#line 824 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__MaybeVarsCond_63;
#line 824 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_239_239;
#line 824 "superhomogeneous.m"
                    MR_String hlds__make_hlds__superhomogeneous__V_240_240;
#line 824 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_241_241;
#line 824 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_242_242;
#line 824 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_243_243;
#line 824 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_256_256;
#line 824 "superhomogeneous.m"
                    MR_String hlds__make_hlds__superhomogeneous__V_257_257;
#line 824 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_258_258;
#line 824 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_259;
#line 824 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_328;
#line 822 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_61_61;

#line 822 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_713_713)) == (MR_mktag((MR_Integer) 0)));
#line 822 "superhomogeneous.m"
                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 822 "superhomogeneous.m"
                      {
#line 822 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 0)));
#line 822 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 1)));
#line 822 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 2)));
#line 822 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_239_239)) == (MR_mktag((MR_Integer) 0)));
#line 822 "superhomogeneous.m"
                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 822 "superhomogeneous.m"
                          {
#line 822 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__V_240_240 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_239_239, (MR_Integer) 0)));
#line 822 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_240_240, (MR_String) "->") == 0);
#line 824 "superhomogeneous.m"
                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 824 "superhomogeneous.m"
                              {
#line 823 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_241_241)) == (MR_mktag((MR_Integer) 1)));
#line 823 "superhomogeneous.m"
                                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 823 "superhomogeneous.m"
                                  {
#line 823 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__CondTerm0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_241_241, (MR_Integer) 0)));
#line 823 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_241_241, (MR_Integer) 1)));
#line 823 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_242_242)) == (MR_mktag((MR_Integer) 1)));
#line 823 "superhomogeneous.m"
                                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 823 "superhomogeneous.m"
                                      {
#line 823 "superhomogeneous.m"
                                        hlds__make_hlds__superhomogeneous__ThenTerm0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_242_242, (MR_Integer) 0)));
#line 823 "superhomogeneous.m"
                                        hlds__make_hlds__superhomogeneous__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_242_242, (MR_Integer) 1)));
#line 823 "superhomogeneous.m"
                                        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_243_243 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 824 "superhomogeneous.m"
                                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 824 "superhomogeneous.m"
                                          {
#line 1789 "hlds.make_hlds.superhomogeneous.c"
                                            hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_368 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1791 "hlds.make_hlds.superhomogeneous.c"
                                            hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_369 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 827 "superhomogeneous.m"
                                            {
#line 827 "superhomogeneous.m"
                                              mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_368, hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_369, hlds__make_hlds__superhomogeneous__CondTerm0_57, &hlds__make_hlds__superhomogeneous__CondTerm_62);
                                            }
#line 828 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__V_257_257 = (MR_String) "Error:";
#line 828 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__V_258_258 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 828 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__V_256_256 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[4]);
#line 828 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__ContextPieces_328 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[5]);
#line 829 "superhomogeneous.m"
                                            {
#line 829 "superhomogeneous.m"
                                              parse_tree__prog_io_goal__parse_some_vars_goal_5_p_0(hlds__make_hlds__superhomogeneous__CondTerm_62, hlds__make_hlds__superhomogeneous__ContextPieces_328, &hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_259);
                                            }
#line 881 "superhomogeneous.m"
                                            if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeVarsCond_63)) == (MR_mktag((MR_Integer) 0))))
#line 882 "superhomogeneous.m"
                                              {
#line 882 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__VarsCondSpecs_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 0)));
#line 882 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__V_262_262;
#line 882 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__V_263_263;

#line 883 "superhomogeneous.m"
                                                {
#line 883 "superhomogeneous.m"
                                                  *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__VarsCondSpecs_91, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145);
                                                }
#line 884 "superhomogeneous.m"
                                                {
#line 884 "superhomogeneous.m"
                                                  hlds__make_hlds__superhomogeneous__V_263_263 = hlds__make_goal__true_goal_0_f_0();
                                                }
#line 884 "superhomogeneous.m"
                                                {
#line 884 "superhomogeneous.m"
                                                  hlds__make_hlds__superhomogeneous__V_262_262 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_263_263)));
                                                }
#line 884 "superhomogeneous.m"
                                                {
#line 884 "superhomogeneous.m"
                                                  MR_Word base;
#line 884 "superhomogeneous.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 884 "superhomogeneous.m"
                                                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 884 "superhomogeneous.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "superhomogeneous.m"
                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_262_262));
#line 884 "superhomogeneous.m"
                                                }
#line 884 "superhomogeneous.m"
                                                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135;
#line 884 "superhomogeneous.m"
                                                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137;
#line 884 "superhomogeneous.m"
                                                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_259;
#line 884 "superhomogeneous.m"
                                                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
#line 884 "superhomogeneous.m"
                                                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143;
#line 882 "superhomogeneous.m"
                                              }
#line 881 "superhomogeneous.m"
                                            else
#line 832 "superhomogeneous.m"
                                              {
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_370_370;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__Vars_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 0)));
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__StateVars_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 1)));
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__CondParseTree_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 2)));
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_68;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__EmptySubst_69;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__CondGoal_70;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__ThenTerm_72;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_73;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__ThenExpansion_74;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_75;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__ThenGoalInfo_76;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__ThenGoal0_77;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__AfterThenSVarState_78;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__ElseTerm_79;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState0_80;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__ElseExpansion_81;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState_82;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__ElseGoalInfo_83;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__ElseGoal0_84;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__ThenGoal_85;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__ElseGoal_86;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_88;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_89;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__Goal_90;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_264;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_266_266;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_267_267;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_268_268;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_269_269;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_270_270;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_271_271;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_272_272;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_273_273;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_274_274;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_275_275;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_276_276;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_277_277;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__V_278_278;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_279_279;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_280_280;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_281_281;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_282_282;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_285_285;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__V_286_286;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__V_292_292;
#line 832 "superhomogeneous.m"
                                                MR_Word hlds__make_hlds__superhomogeneous__V_294_294;

#line 834 "superhomogeneous.m"
                                                {
#line 834 "superhomogeneous.m"
                                                  hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_259, hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_68, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_264);
                                                }
#line 1969 "hlds.make_hlds.superhomogeneous.c"
                                                hlds__make_hlds__superhomogeneous__TypeInfo_370_370 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 836 "superhomogeneous.m"
                                                {
#line 836 "superhomogeneous.m"
                                                  mercury__map__init_1_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_370_370, hlds__make_hlds__superhomogeneous__TypeInfo_370_370, &hlds__make_hlds__superhomogeneous__EmptySubst_69);
                                                }
#line 838 "superhomogeneous.m"
                                                {
#line 838 "superhomogeneous.m"
                                                  hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__CondParseTree_66, hlds__make_hlds__superhomogeneous__EmptySubst_69, &hlds__make_hlds__superhomogeneous__CondGoal_70, hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_68, &hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_266_266, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_259, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_267_267, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_268_268, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_269_269, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_264, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_270_270);
                                                }
#line 843 "superhomogeneous.m"
                                                {
#line 843 "superhomogeneous.m"
                                                  hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__ThenTerm0_58, &hlds__make_hlds__superhomogeneous__ThenTerm_72, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_267_267, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_271_271, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_73, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_270_270, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_272_272);
                                                }
#line 846 "superhomogeneous.m"
                                                {
#line 846 "superhomogeneous.m"
                                                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ThenTerm_72, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ThenExpansion_74, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_73, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_75, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_266_266, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_273_273, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_271_271, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_274_274, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_268_268, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_275_275, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_269_269, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_276_276, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_272_272, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_277_277);
                                                }
#line 851 "superhomogeneous.m"
                                                {
#line 851 "superhomogeneous.m"
                                                  hlds__make_hlds__superhomogeneous__V_278_278 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_368, hlds__make_hlds__superhomogeneous__ThenTerm_72);
                                                }
#line 851 "superhomogeneous.m"
                                                {
#line 851 "superhomogeneous.m"
                                                  hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_278_278, &hlds__make_hlds__superhomogeneous__ThenGoalInfo_76);
                                                }
#line 852 "superhomogeneous.m"
                                                {
#line 852 "superhomogeneous.m"
                                                  hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ThenGoalInfo_76, hlds__make_hlds__superhomogeneous__ThenExpansion_74, &hlds__make_hlds__superhomogeneous__ThenGoal0_77);
                                                }
#line 855 "superhomogeneous.m"
                                                {
#line 855 "superhomogeneous.m"
                                                  hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_75, &hlds__make_hlds__superhomogeneous__AfterThenSVarState_78);
                                                }
#line 858 "superhomogeneous.m"
                                                {
#line 858 "superhomogeneous.m"
                                                  hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_715_715, &hlds__make_hlds__superhomogeneous__ElseTerm_79, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_274_274, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_279_279, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__AfterElseSVarState0_80, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_277_277, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_280_280);
                                                }
#line 860 "superhomogeneous.m"
                                                {
#line 860 "superhomogeneous.m"
                                                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ElseTerm_79, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ElseExpansion_81, hlds__make_hlds__superhomogeneous__AfterElseSVarState0_80, &hlds__make_hlds__superhomogeneous__AfterElseSVarState_82, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_273_273, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_281_281, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_279_279, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_282_282, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_275_275, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_276_276, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_280_280, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_285_285);
                                                }
#line 865 "superhomogeneous.m"
                                                {
#line 865 "superhomogeneous.m"
                                                  hlds__make_hlds__superhomogeneous__V_286_286 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_368, hlds__make_hlds__superhomogeneous__ElseTerm_79);
                                                }
#line 865 "superhomogeneous.m"
                                                {
#line 865 "superhomogeneous.m"
                                                  hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_286_286, &hlds__make_hlds__superhomogeneous__ElseGoalInfo_83);
                                                }
#line 866 "superhomogeneous.m"
                                                {
#line 866 "superhomogeneous.m"
                                                  hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ElseGoalInfo_83, hlds__make_hlds__superhomogeneous__ElseExpansion_81, &hlds__make_hlds__superhomogeneous__ElseGoal0_84);
                                                }
#line 869 "superhomogeneous.m"
                                                {
#line 869 "superhomogeneous.m"
                                                  hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__ThenGoal0_77, &hlds__make_hlds__superhomogeneous__ThenGoal_85, hlds__make_hlds__superhomogeneous__ElseGoal0_84, &hlds__make_hlds__superhomogeneous__ElseGoal_86, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71, hlds__make_hlds__superhomogeneous__AfterThenSVarState_78, hlds__make_hlds__superhomogeneous__AfterElseSVarState_82, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_282_282, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_281_281, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_285_285, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                                }
#line 876 "superhomogeneous.m"
                                                {
#line 876 "superhomogeneous.m"
                                                  hlds__make_hlds__superhomogeneous__V_292_292 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeInfo_370_370, hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__Vars_64);
                                                }
#line 876 "superhomogeneous.m"
                                                {
#line 876 "superhomogeneous.m"
                                                  hlds__make_hlds__superhomogeneous__GoalExpr_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 876 "superhomogeneous.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 876 "superhomogeneous.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_292_292));
#line 876 "superhomogeneous.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__CondGoal_70));
#line 876 "superhomogeneous.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ThenGoal_85));
#line 876 "superhomogeneous.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 4) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ElseGoal_86));
#line 876 "superhomogeneous.m"
                                                }
#line 878 "superhomogeneous.m"
                                                {
#line 878 "superhomogeneous.m"
                                                  hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_89);
                                                }
#line 879 "superhomogeneous.m"
                                                {
#line 879 "superhomogeneous.m"
                                                  hlds__make_hlds__superhomogeneous__Goal_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 879 "superhomogeneous.m"
                                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_90, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_88));
#line 879 "superhomogeneous.m"
                                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_90, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_89));
#line 879 "superhomogeneous.m"
                                                }
#line 880 "superhomogeneous.m"
                                                {
#line 880 "superhomogeneous.m"
                                                  hlds__make_hlds__superhomogeneous__V_294_294 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_90)));
                                                }
#line 880 "superhomogeneous.m"
                                                {
#line 880 "superhomogeneous.m"
                                                  MR_Word base;
#line 880 "superhomogeneous.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 880 "superhomogeneous.m"
                                                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 880 "superhomogeneous.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 880 "superhomogeneous.m"
                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_294_294));
#line 880 "superhomogeneous.m"
                                                }
#line 832 "superhomogeneous.m"
                                              }
#line 881 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 824 "superhomogeneous.m"
                                          }
#line 823 "superhomogeneous.m"
                                      }
#line 823 "superhomogeneous.m"
                                  }
#line 824 "superhomogeneous.m"
                              }
#line 822 "superhomogeneous.m"
                          }
#line 822 "superhomogeneous.m"
                      }
#line 824 "superhomogeneous.m"
                  }
#line 765 "superhomogeneous.m"
                else
#line 765 "superhomogeneous.m"
                  if ((strcmp(hlds__make_hlds__superhomogeneous__YAtom_24, (MR_String) "\100") == 0))
#line 795 "superhomogeneous.m"
                    {
#line 795 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__ExpansionL_49;
#line 795 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__ExpansionR_50;
#line 795 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__GoalCordL_52;
#line 795 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__GoalCordR_54;
#line 795 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_297_297;
#line 795 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_298_298;
#line 795 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_299_299;
#line 795 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_300_300;
#line 795 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_301_301;
#line 795 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_302_302;
#line 795 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__V_310_310;
#line 807 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__V_51_51;
#line 808 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__V_53_53;

#line 799 "superhomogeneous.m"
                      {
#line 799 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_713_713, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ExpansionL_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_297_297, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_298_298, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_299_299, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_300_300, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_301_301, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_302_302);
                      }
#line 803 "superhomogeneous.m"
                      {
#line 803 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_715_715, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ExpansionR_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_297_297, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_298_298, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_299_299, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_300_300, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_301_301, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_302_302, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                      }
#line 807 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionL_49, (MR_Integer) 0)));
#line 807 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__GoalCordL_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionL_49, (MR_Integer) 1)));
#line 808 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionR_50, (MR_Integer) 0)));
#line 808 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__GoalCordR_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionR_50, (MR_Integer) 1)));
#line 809 "superhomogeneous.m"
                      {
#line 809 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_310_310 = mercury__cord__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__superhomogeneous__GoalCordL_52, hlds__make_hlds__superhomogeneous__GoalCordR_54);
                      }
#line 809 "superhomogeneous.m"
                      {
#line 809 "superhomogeneous.m"
                        MR_Word base;
#line 809 "superhomogeneous.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 809 "superhomogeneous.m"
                        *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 809 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 809 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_310_310));
#line 809 "superhomogeneous.m"
                      }
#line 795 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 795 "superhomogeneous.m"
                    }
#line 765 "superhomogeneous.m"
                  else
#line 765 "superhomogeneous.m"
                    if ((strcmp(hlds__make_hlds__superhomogeneous__YAtom_24, (MR_String) "^") == 0))
#line 889 "superhomogeneous.m"
                      {
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_374_374;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__FieldNames_94;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__InputTerm_95;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__InputTermVar_96;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__Functor_97;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__GetGoal_99;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__ArgContext_100;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__InputArgExpansion_101;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_217_217;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_218_218;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_219_219;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__V_220_220;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_221_221;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_222_222;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_223_223;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_224_224;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_225_225;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_226_226;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_227_227;
#line 889 "superhomogeneous.m"
                        MR_Integer hlds__make_hlds__superhomogeneous__V_228_228;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__V_235_235;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__V_236_236;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_331;
#line 889 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__Goal_332;
#line 897 "superhomogeneous.m"
                        MR_Word hlds__make_hlds__superhomogeneous__V_98_98;

#line 891 "superhomogeneous.m"
                        {
#line 891 "superhomogeneous.m"
                          hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__field_access__maybe_parse_field_list_3_p_0(hlds__make_hlds__superhomogeneous__V_715_715, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__FieldNames_94);
                        }
#line 889 "superhomogeneous.m"
                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 889 "superhomogeneous.m"
                          {
#line 894 "superhomogeneous.m"
                            {
#line 894 "superhomogeneous.m"
                              hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_713_713, &hlds__make_hlds__superhomogeneous__InputTerm_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_217_217, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_218_218, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_219_219);
                            }
#line 896 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__V_220_220 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 896 "superhomogeneous.m"
                            {
#line 896 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__InputTerm_95, &hlds__make_hlds__superhomogeneous__InputTermVar_96, hlds__make_hlds__superhomogeneous__V_220_220, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_217_217, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_221_221);
                            }
#line 897 "superhomogeneous.m"
                            {
#line 897 "superhomogeneous.m"
                              hlds__make_hlds__field_access__expand_get_field_function_call_22_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__FieldNames_94, hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__InputTermVar_96, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__Functor_97, &hlds__make_hlds__superhomogeneous__V_98_98, &hlds__make_hlds__superhomogeneous__GetGoal_99, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_218_218, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_222_222, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_223_223, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_221_221, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_224_224, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_225_225, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_226_226, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_219_219, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_227_227);
                            }
#line 904 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__V_228_228 = (MR_Integer) 1;
#line 902 "superhomogeneous.m"
                            {
#line 902 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__ArgContext_100 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 902 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_100, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Functor_97));
#line 902 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_100, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
#line 902 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_100, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_29));
#line 902 "superhomogeneous.m"
                            }
#line 903 "superhomogeneous.m"
                            {
#line 903 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__InputTermVar_96, hlds__make_hlds__superhomogeneous__InputTerm_95, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__ArgContext_100, hlds__make_hlds__superhomogeneous__V_228_228, &hlds__make_hlds__superhomogeneous__InputArgExpansion_101, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_222_222, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_223_223, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_224_224, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_225_225, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_226_226, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_227_227, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                            }
#line 907 "superhomogeneous.m"
                            {
#line 907 "superhomogeneous.m"
                              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_331);
                            }
#line 908 "superhomogeneous.m"
                            {
#line 908 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_331, hlds__make_hlds__superhomogeneous__InputArgExpansion_101, hlds__make_hlds__superhomogeneous__GetGoal_99, &hlds__make_hlds__superhomogeneous__Goal_332);
                            }
#line 910 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__V_235_235 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2302 "hlds.make_hlds.superhomogeneous.c"
                            hlds__make_hlds__superhomogeneous__TypeCtorInfo_374_374 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 910 "superhomogeneous.m"
                            {
#line 910 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__V_236_236 = mercury__cord__singleton_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_374_374, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_332)));
                            }
#line 910 "superhomogeneous.m"
                            {
#line 910 "superhomogeneous.m"
                              MR_Word base;
#line 910 "superhomogeneous.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 910 "superhomogeneous.m"
                              *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 910 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_235_235));
#line 910 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_236_236));
#line 910 "superhomogeneous.m"
                            }
#line 910 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 889 "superhomogeneous.m"
                          }
#line 889 "superhomogeneous.m"
                      }
#line 765 "superhomogeneous.m"
                    else
#line 765 "superhomogeneous.m"
                      if ((strcmp(hlds__make_hlds__superhomogeneous__YAtom_24, (MR_String) ":=") == 0))
#line 914 "superhomogeneous.m"
                        {
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_375_375;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__FieldValueTerm_105;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__FieldValueVar_106;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__InnerFunctor_107;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__FieldSubContext_108;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__SetGoal_109;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__TermArgContext_110;
#line 914 "superhomogeneous.m"
                          MR_Integer hlds__make_hlds__superhomogeneous__TermArgNumber_111;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__FieldArgContext_112;
#line 914 "superhomogeneous.m"
                          MR_Integer hlds__make_hlds__superhomogeneous__FieldArgNumber_113;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__ArgContexts_114;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__InputFieldArgExpansions_115;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_174_174;
#line 914 "superhomogeneous.m"
                          MR_String hlds__make_hlds__superhomogeneous__V_175_175;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_176_176;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_177_177;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_178_178;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_179_179;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_180_180;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_181_181;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_182_182;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_183_183;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_184_184;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_185_185;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_186_186;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_187_187;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_188_188;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_189_189;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_190_190;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_191_191;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_192_192;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_193_193;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_194_194;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_195_195;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_196_196;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_197_197;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_198_198;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_199_199;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_200_200;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_201_201;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_202_202;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_209_209;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_210_210;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_211_211;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_212_212;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_213_213;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_214_214;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_337;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__Goal_338;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__InputTerm_339;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__InputTermVar_340;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__Functor_341;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__InputTerm0_349;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__FieldNameTerm_350;
#line 914 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__FieldNames_351;
#line 916 "superhomogeneous.m"
                          MR_Word hlds__make_hlds__superhomogeneous__V_104_104;

#line 916 "superhomogeneous.m"
                          hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_713_713)) == (MR_mktag((MR_Integer) 0)));
#line 916 "superhomogeneous.m"
                          if (hlds__make_hlds__superhomogeneous__succeeded)
#line 916 "superhomogeneous.m"
                            {
#line 916 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 0)));
#line 916 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 1)));
#line 916 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 2)));
#line 916 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_174_174)) == (MR_mktag((MR_Integer) 0)));
#line 916 "superhomogeneous.m"
                              if (hlds__make_hlds__superhomogeneous__succeeded)
#line 916 "superhomogeneous.m"
                                {
#line 916 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__V_175_175 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_174_174, (MR_Integer) 0)));
#line 916 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_175_175, (MR_String) "^") == 0);
#line 914 "superhomogeneous.m"
                                  if (hlds__make_hlds__superhomogeneous__succeeded)
#line 914 "superhomogeneous.m"
                                    {
#line 917 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_176_176)) == (MR_mktag((MR_Integer) 1)));
#line 917 "superhomogeneous.m"
                                      if (hlds__make_hlds__superhomogeneous__succeeded)
#line 917 "superhomogeneous.m"
                                        {
#line 917 "superhomogeneous.m"
                                          hlds__make_hlds__superhomogeneous__InputTerm0_349 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_176_176, (MR_Integer) 0)));
#line 917 "superhomogeneous.m"
                                          hlds__make_hlds__superhomogeneous__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_176_176, (MR_Integer) 1)));
#line 917 "superhomogeneous.m"
                                          hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_177_177)) == (MR_mktag((MR_Integer) 1)));
#line 917 "superhomogeneous.m"
                                          if (hlds__make_hlds__superhomogeneous__succeeded)
#line 917 "superhomogeneous.m"
                                            {
#line 917 "superhomogeneous.m"
                                              hlds__make_hlds__superhomogeneous__FieldNameTerm_350 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_177_177, (MR_Integer) 0)));
#line 917 "superhomogeneous.m"
                                              hlds__make_hlds__superhomogeneous__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_177_177, (MR_Integer) 1)));
#line 917 "superhomogeneous.m"
                                              hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_178_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 914 "superhomogeneous.m"
                                              if (hlds__make_hlds__superhomogeneous__succeeded)
#line 914 "superhomogeneous.m"
                                                {
#line 918 "superhomogeneous.m"
                                                  {
#line 918 "superhomogeneous.m"
                                                    hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__field_access__maybe_parse_field_list_3_p_0(hlds__make_hlds__superhomogeneous__FieldNameTerm_350, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__FieldNames_351);
                                                  }
#line 914 "superhomogeneous.m"
                                                  if (hlds__make_hlds__superhomogeneous__succeeded)
#line 914 "superhomogeneous.m"
                                                    {
#line 921 "superhomogeneous.m"
                                                      {
#line 921 "superhomogeneous.m"
                                                        hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__InputTerm0_349, &hlds__make_hlds__superhomogeneous__InputTerm_339, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_179_179, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_180_180, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_181_181);
                                                      }
#line 923 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__V_182_182 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 923 "superhomogeneous.m"
                                                      {
#line 923 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__InputTerm_339, &hlds__make_hlds__superhomogeneous__InputTermVar_340, hlds__make_hlds__superhomogeneous__V_182_182, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_179_179, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_183_183);
                                                      }
#line 924 "superhomogeneous.m"
                                                      {
#line 924 "superhomogeneous.m"
                                                        hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_715_715, &hlds__make_hlds__superhomogeneous__FieldValueTerm_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_183_183, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_184_184, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_180_180, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_185_185, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_181_181, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_186_186);
                                                      }
#line 927 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__V_189_189 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 927 "superhomogeneous.m"
                                                      {
#line 927 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_187_187, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputTermVar_340));
#line 927 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_187_187, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_189_189));
#line 927 "superhomogeneous.m"
                                                      }
#line 926 "superhomogeneous.m"
                                                      {
#line 926 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__FieldValueTerm_105, &hlds__make_hlds__superhomogeneous__FieldValueVar_106, hlds__make_hlds__superhomogeneous__V_187_187, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_184_184, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_188_188);
                                                      }
#line 929 "superhomogeneous.m"
                                                      {
#line 929 "superhomogeneous.m"
                                                        hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__FieldNames_351, hlds__make_hlds__superhomogeneous__FieldValueVar_106, hlds__make_hlds__superhomogeneous__InputTermVar_340, hlds__make_hlds__superhomogeneous__XVar_23, &hlds__make_hlds__superhomogeneous__Functor_341, &hlds__make_hlds__superhomogeneous__V_190_190, &hlds__make_hlds__superhomogeneous__SetGoal_109, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_185_185, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_191_191, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_192_192, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_188_188, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_193_193, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_194_194, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_195_195, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_186_186, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_196_196);
                                                      }
#line 931 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__InnerFunctor_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_190_190, (MR_Integer) 0)));
#line 931 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__FieldSubContext_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_190_190, (MR_Integer) 1)));
#line 936 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__TermArgNumber_111 = (MR_Integer) 1;
#line 939 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__FieldArgNumber_113 = (MR_Integer) 2;
#line 941 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__V_200_200 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 942 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__V_210_210 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 943 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__V_212_212 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 935 "superhomogeneous.m"
                                                      {
#line 935 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__TermArgContext_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 935 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__TermArgContext_110, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Functor_341));
#line 935 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__TermArgContext_110, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
#line 935 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__TermArgContext_110, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_29));
#line 935 "superhomogeneous.m"
                                                      }
#line 937 "superhomogeneous.m"
                                                      {
#line 937 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__FieldArgContext_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 937 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__FieldArgContext_112, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InnerFunctor_107));
#line 937 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__FieldArgContext_112, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
#line 937 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__FieldArgContext_112, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldSubContext_108));
#line 937 "superhomogeneous.m"
                                                      }
#line 940 "superhomogeneous.m"
                                                      {
#line 940 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_197_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 940 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_197_197, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermArgNumber_111));
#line 940 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_197_197, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermArgContext_110));
#line 940 "superhomogeneous.m"
                                                      }
#line 941 "superhomogeneous.m"
                                                      {
#line 941 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_199_199 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 941 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_199_199, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldArgNumber_113));
#line 941 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_199_199, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldArgContext_112));
#line 941 "superhomogeneous.m"
                                                      }
#line 941 "superhomogeneous.m"
                                                      {
#line 941 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 941 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_198_198, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_199_199));
#line 941 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_198_198, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_200_200));
#line 941 "superhomogeneous.m"
                                                      }
#line 940 "superhomogeneous.m"
                                                      {
#line 940 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__ArgContexts_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_114, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_197_197));
#line 940 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_114, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_198_198));
#line 940 "superhomogeneous.m"
                                                      }
#line 942 "superhomogeneous.m"
                                                      {
#line 942 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_209_209, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldValueVar_106));
#line 942 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_209_209, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_210_210));
#line 942 "superhomogeneous.m"
                                                      }
#line 942 "superhomogeneous.m"
                                                      {
#line 942 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_201_201, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputTermVar_340));
#line 942 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_201_201, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_209_209));
#line 942 "superhomogeneous.m"
                                                      }
#line 943 "superhomogeneous.m"
                                                      {
#line 943 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_211_211, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldValueTerm_105));
#line 943 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_211_211, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_212_212));
#line 943 "superhomogeneous.m"
                                                      }
#line 943 "superhomogeneous.m"
                                                      {
#line 943 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_202_202, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputTerm_339));
#line 943 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_202_202, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_211_211));
#line 943 "superhomogeneous.m"
                                                      }
#line 942 "superhomogeneous.m"
                                                      {
#line 942 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(hlds__make_hlds__superhomogeneous__V_201_201, hlds__make_hlds__superhomogeneous__V_202_202, hlds__make_hlds__superhomogeneous__ArgContexts_114, hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__InputFieldArgExpansions_115, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_191_191, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_192_192, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_193_193, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_194_194, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_195_195, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_196_196, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                                      }
#line 947 "superhomogeneous.m"
                                                      {
#line 947 "superhomogeneous.m"
                                                        hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_337);
                                                      }
#line 948 "superhomogeneous.m"
                                                      {
#line 948 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_337, hlds__make_hlds__superhomogeneous__InputFieldArgExpansions_115, hlds__make_hlds__superhomogeneous__SetGoal_109, &hlds__make_hlds__superhomogeneous__Goal_338);
                                                      }
#line 950 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__V_213_213 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2683 "hlds.make_hlds.superhomogeneous.c"
                                                      hlds__make_hlds__superhomogeneous__TypeCtorInfo_375_375 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 950 "superhomogeneous.m"
                                                      {
#line 950 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_214_214 = mercury__cord__singleton_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_375_375, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_338)));
                                                      }
#line 950 "superhomogeneous.m"
                                                      {
#line 950 "superhomogeneous.m"
                                                        MR_Word base;
#line 950 "superhomogeneous.m"
                                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 950 "superhomogeneous.m"
                                                        *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 950 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_213_213));
#line 950 "superhomogeneous.m"
                                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_214_214));
#line 950 "superhomogeneous.m"
                                                      }
#line 950 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 914 "superhomogeneous.m"
                                                    }
#line 914 "superhomogeneous.m"
                                                }
#line 917 "superhomogeneous.m"
                                            }
#line 917 "superhomogeneous.m"
                                        }
#line 914 "superhomogeneous.m"
                                    }
#line 916 "superhomogeneous.m"
                                }
#line 916 "superhomogeneous.m"
                            }
#line 914 "superhomogeneous.m"
                        }
#line 765 "superhomogeneous.m"
                      else
#line 765 "superhomogeneous.m"
                        if ((strcmp(hlds__make_hlds__superhomogeneous__YAtom_24, (MR_String) "-->") == 0))
#line 956 "superhomogeneous.m"
                          {
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_376_376 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_377_377 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__PredTerm1_118;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__DCGLambdaPurity_119;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__PredTerm_120;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Groundness_121;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Vars0_123;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Modes0_124;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Det_125;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Modes_126;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__GoalTerm_127;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__DCG0_129;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__DCGn_130;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_151_151;
#line 956 "superhomogeneous.m"
                            MR_String hlds__make_hlds__superhomogeneous__V_152_152;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_153_153;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_154_154;
#line 956 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_357;

#line 958 "superhomogeneous.m"
                            {
#line 958 "superhomogeneous.m"
                              mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_376_376, hlds__make_hlds__superhomogeneous__TypeCtorInfo_377_377, hlds__make_hlds__superhomogeneous__V_713_713, &hlds__make_hlds__superhomogeneous__PredTerm1_118);
                            }
#line 959 "superhomogeneous.m"
                            {
#line 959 "superhomogeneous.m"
                              parse_tree__prog_io_util__parse_purity_annotation_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_377_377, hlds__make_hlds__superhomogeneous__PredTerm1_118, &hlds__make_hlds__superhomogeneous__DCGLambdaPurity_119, &hlds__make_hlds__superhomogeneous__PredTerm_120);
                            }
#line 960 "superhomogeneous.m"
                            {
#line 960 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_goal__parse_dcg_pred_expression_6_p_0(hlds__make_hlds__superhomogeneous__PredTerm_120, &hlds__make_hlds__superhomogeneous__Groundness_121, &hlds__make_hlds__superhomogeneous__Vars0_123, &hlds__make_hlds__superhomogeneous__Modes0_124, &hlds__make_hlds__superhomogeneous__Det_125);
                            }
#line 956 "superhomogeneous.m"
                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 956 "superhomogeneous.m"
                              {
#line 964 "superhomogeneous.m"
                                {
#line 964 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(hlds__make_hlds__superhomogeneous__Modes0_124, &hlds__make_hlds__superhomogeneous__Modes_126, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150);
                                }
#line 966 "superhomogeneous.m"
                                {
#line 966 "superhomogeneous.m"
                                  mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_376_376, hlds__make_hlds__superhomogeneous__TypeCtorInfo_377_377, hlds__make_hlds__superhomogeneous__V_715_715, &hlds__make_hlds__superhomogeneous__GoalTerm_127);
                                }
#line 967 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_152_152 = (MR_String) "Error:";
#line 967 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_153_153 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 967 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_151_151 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[4]);
#line 967 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__ContextPieces_357 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[5]);
#line 968 "superhomogeneous.m"
                                {
#line 968 "superhomogeneous.m"
                                  parse_tree__prog_io_dcg__parse_dcg_pred_goal_7_p_0(hlds__make_hlds__superhomogeneous__GoalTerm_127, hlds__make_hlds__superhomogeneous__ContextPieces_357, &hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128, &hlds__make_hlds__superhomogeneous__DCG0_129, &hlds__make_hlds__superhomogeneous__DCGn_130, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_154_154);
                                }
#line 982 "superhomogeneous.m"
                                if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128)) == (MR_mktag((MR_Integer) 0))))
#line 983 "superhomogeneous.m"
                                  {
#line 983 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128, (MR_Integer) 0)));
#line 983 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_157_157;
#line 983 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_158_158;

#line 984 "superhomogeneous.m"
                                    {
#line 984 "superhomogeneous.m"
                                      *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_134, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150);
                                    }
#line 985 "superhomogeneous.m"
                                    {
#line 985 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_158_158 = hlds__make_goal__true_goal_0_f_0();
                                    }
#line 985 "superhomogeneous.m"
                                    {
#line 985 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_157_157 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_158_158)));
                                    }
#line 985 "superhomogeneous.m"
                                    {
#line 985 "superhomogeneous.m"
                                      MR_Word base;
#line 985 "superhomogeneous.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 985 "superhomogeneous.m"
                                      *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 985 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 985 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_157_157));
#line 985 "superhomogeneous.m"
                                    }
#line 985 "superhomogeneous.m"
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137;
#line 985 "superhomogeneous.m"
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_154_154;
#line 985 "superhomogeneous.m"
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
#line 985 "superhomogeneous.m"
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149;
#line 983 "superhomogeneous.m"
                                  }
#line 982 "superhomogeneous.m"
                                else
#line 971 "superhomogeneous.m"
                                  {
#line 971 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128, (MR_Integer) 0)));
#line 971 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__Vars1_132;
#line 971 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__Goal0_133;
#line 971 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_159_159;
#line 971 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_160_160;
#line 971 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_161_161;
#line 971 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_162_162;
#line 971 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_171_171;
#line 971 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__Goal_355;

#line 973 "superhomogeneous.m"
                                    {
#line 973 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__DCG0_129));
#line 973 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_160_160, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Context_27));
#line 973 "superhomogeneous.m"
                                    }
#line 974 "superhomogeneous.m"
                                    {
#line 974 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__DCGn_130));
#line 974 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_162_162, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Context_27));
#line 974 "superhomogeneous.m"
                                    }
#line 974 "superhomogeneous.m"
                                    {
#line 974 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_162_162));
#line 974 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 974 "superhomogeneous.m"
                                    }
#line 973 "superhomogeneous.m"
                                    {
#line 973 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_160_160));
#line 973 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_161_161));
#line 973 "superhomogeneous.m"
                                    }
#line 972 "superhomogeneous.m"
                                    {
#line 972 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__Vars1_132 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2], hlds__make_hlds__superhomogeneous__Vars0_123, hlds__make_hlds__superhomogeneous__V_159_159);
                                    }
#line 975 "superhomogeneous.m"
                                    {
#line 975 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__DCGLambdaPurity_119, hlds__make_hlds__superhomogeneous__Groundness_121, (MR_Integer) 0, hlds__make_hlds__superhomogeneous__Vars1_132, hlds__make_hlds__superhomogeneous__Modes_126, hlds__make_hlds__superhomogeneous__Det_125, hlds__make_hlds__superhomogeneous__ParsedGoal_131, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, &hlds__make_hlds__superhomogeneous__Goal0_133, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_154_154, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                    }
#line 980 "superhomogeneous.m"
                                    {
#line 980 "superhomogeneous.m"
                                      hlds__hlds_goal__goal_set_purity_3_p_0(hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__Goal0_133, &hlds__make_hlds__superhomogeneous__Goal_355);
                                    }
#line 981 "superhomogeneous.m"
                                    {
#line 981 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_171_171 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_355)));
                                    }
#line 981 "superhomogeneous.m"
                                    {
#line 981 "superhomogeneous.m"
                                      MR_Word base;
#line 981 "superhomogeneous.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 981 "superhomogeneous.m"
                                      *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 981 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 981 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_171_171));
#line 981 "superhomogeneous.m"
                                    }
#line 971 "superhomogeneous.m"
                                  }
#line 985 "superhomogeneous.m"
                                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135;
#line 985 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 956 "superhomogeneous.m"
                              }
#line 956 "superhomogeneous.m"
                          }
#line 765 "superhomogeneous.m"
                        else
#line 765 "superhomogeneous.m"
                          if ((strcmp(hlds__make_hlds__superhomogeneous__YAtom_24, (MR_String) "else") == 0))
#line 824 "superhomogeneous.m"
                            {
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_565;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_566;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__V_246_246;
#line 824 "superhomogeneous.m"
                              MR_String hlds__make_hlds__superhomogeneous__V_247_247;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__V_248_248;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__V_249_249;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__V_250_250;
#line 824 "superhomogeneous.m"
                              MR_String hlds__make_hlds__superhomogeneous__V_251_251;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__V_252_252;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__V_253_253;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__V_254_254;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__V_255_255;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__CondTerm_502;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__MaybeVarsCond_503;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__V_532_532;
#line 824 "superhomogeneous.m"
                              MR_String hlds__make_hlds__superhomogeneous__V_533_533;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__V_534_534;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_535;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_564;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__CondTerm0_641;
#line 824 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__ThenTerm0_642;
#line 816 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__V_60_60;
#line 817 "superhomogeneous.m"
                              MR_Word hlds__make_hlds__superhomogeneous__V_59_59;

#line 816 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_713_713)) == (MR_mktag((MR_Integer) 0)));
#line 816 "superhomogeneous.m"
                              if (hlds__make_hlds__superhomogeneous__succeeded)
#line 816 "superhomogeneous.m"
                                {
#line 816 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 0)));
#line 816 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 1)));
#line 816 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 2)));
#line 816 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_246_246)) == (MR_mktag((MR_Integer) 0)));
#line 816 "superhomogeneous.m"
                                  if (hlds__make_hlds__superhomogeneous__succeeded)
#line 816 "superhomogeneous.m"
                                    {
#line 816 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_247_247 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_246_246, (MR_Integer) 0)));
#line 816 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_247_247, (MR_String) "if") == 0);
#line 824 "superhomogeneous.m"
                                      if (hlds__make_hlds__superhomogeneous__succeeded)
#line 824 "superhomogeneous.m"
                                        {
#line 817 "superhomogeneous.m"
                                          hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_248_248)) == (MR_mktag((MR_Integer) 1)));
#line 817 "superhomogeneous.m"
                                          if (hlds__make_hlds__superhomogeneous__succeeded)
#line 817 "superhomogeneous.m"
                                            {
#line 817 "superhomogeneous.m"
                                              hlds__make_hlds__superhomogeneous__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_248_248, (MR_Integer) 0)));
#line 817 "superhomogeneous.m"
                                              hlds__make_hlds__superhomogeneous__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_248_248, (MR_Integer) 1)));
#line 817 "superhomogeneous.m"
                                              hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_255_255 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 824 "superhomogeneous.m"
                                              if (hlds__make_hlds__superhomogeneous__succeeded)
#line 824 "superhomogeneous.m"
                                                {
#line 817 "superhomogeneous.m"
                                                  hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_249_249)) == (MR_mktag((MR_Integer) 0)));
#line 817 "superhomogeneous.m"
                                                  if (hlds__make_hlds__superhomogeneous__succeeded)
#line 817 "superhomogeneous.m"
                                                    {
#line 817 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_249_249, (MR_Integer) 0)));
#line 817 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_249_249, (MR_Integer) 1)));
#line 817 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_249_249, (MR_Integer) 2)));
#line 817 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_250_250)) == (MR_mktag((MR_Integer) 0)));
#line 817 "superhomogeneous.m"
                                                      if (hlds__make_hlds__superhomogeneous__succeeded)
#line 817 "superhomogeneous.m"
                                                        {
#line 817 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_251_251 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_250_250, (MR_Integer) 0)));
#line 817 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_251_251, (MR_String) "then") == 0);
#line 824 "superhomogeneous.m"
                                                          if (hlds__make_hlds__superhomogeneous__succeeded)
#line 824 "superhomogeneous.m"
                                                            {
#line 817 "superhomogeneous.m"
                                                              hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_252_252)) == (MR_mktag((MR_Integer) 1)));
#line 817 "superhomogeneous.m"
                                                              if (hlds__make_hlds__superhomogeneous__succeeded)
#line 817 "superhomogeneous.m"
                                                                {
#line 817 "superhomogeneous.m"
                                                                  hlds__make_hlds__superhomogeneous__CondTerm0_641 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_252_252, (MR_Integer) 0)));
#line 817 "superhomogeneous.m"
                                                                  hlds__make_hlds__superhomogeneous__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_252_252, (MR_Integer) 1)));
#line 817 "superhomogeneous.m"
                                                                  hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_253_253)) == (MR_mktag((MR_Integer) 1)));
#line 817 "superhomogeneous.m"
                                                                  if (hlds__make_hlds__superhomogeneous__succeeded)
#line 817 "superhomogeneous.m"
                                                                    {
#line 817 "superhomogeneous.m"
                                                                      hlds__make_hlds__superhomogeneous__ThenTerm0_642 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_253_253, (MR_Integer) 0)));
#line 817 "superhomogeneous.m"
                                                                      hlds__make_hlds__superhomogeneous__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_253_253, (MR_Integer) 1)));
#line 817 "superhomogeneous.m"
                                                                      hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_254_254 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 824 "superhomogeneous.m"
                                                                      if (hlds__make_hlds__superhomogeneous__succeeded)
#line 824 "superhomogeneous.m"
                                                                        {
#line 3117 "hlds.make_hlds.superhomogeneous.c"
                                                                          hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_565 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 3119 "hlds.make_hlds.superhomogeneous.c"
                                                                          hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_566 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 827 "superhomogeneous.m"
                                                                          {
#line 827 "superhomogeneous.m"
                                                                            mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_565, hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_566, hlds__make_hlds__superhomogeneous__CondTerm0_641, &hlds__make_hlds__superhomogeneous__CondTerm_502);
                                                                          }
#line 828 "superhomogeneous.m"
                                                                          hlds__make_hlds__superhomogeneous__V_533_533 = (MR_String) "Error:";
#line 828 "superhomogeneous.m"
                                                                          hlds__make_hlds__superhomogeneous__V_534_534 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 828 "superhomogeneous.m"
                                                                          hlds__make_hlds__superhomogeneous__V_532_532 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[4]);
#line 828 "superhomogeneous.m"
                                                                          hlds__make_hlds__superhomogeneous__ContextPieces_564 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[5]);
#line 829 "superhomogeneous.m"
                                                                          {
#line 829 "superhomogeneous.m"
                                                                            parse_tree__prog_io_goal__parse_some_vars_goal_5_p_0(hlds__make_hlds__superhomogeneous__CondTerm_502, hlds__make_hlds__superhomogeneous__ContextPieces_564, &hlds__make_hlds__superhomogeneous__MaybeVarsCond_503, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_535);
                                                                          }
#line 881 "superhomogeneous.m"
                                                                          if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeVarsCond_503)) == (MR_mktag((MR_Integer) 0))))
#line 882 "superhomogeneous.m"
                                                                            {
#line 882 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__VarsCondSpecs_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeVarsCond_503, (MR_Integer) 0)));
#line 882 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__V_384_384;
#line 882 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__V_385_385;

#line 883 "superhomogeneous.m"
                                                                              {
#line 883 "superhomogeneous.m"
                                                                                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__VarsCondSpecs_382, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145);
                                                                              }
#line 884 "superhomogeneous.m"
                                                                              {
#line 884 "superhomogeneous.m"
                                                                                hlds__make_hlds__superhomogeneous__V_385_385 = hlds__make_goal__true_goal_0_f_0();
                                                                              }
#line 884 "superhomogeneous.m"
                                                                              {
#line 884 "superhomogeneous.m"
                                                                                hlds__make_hlds__superhomogeneous__V_384_384 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_385_385)));
                                                                              }
#line 884 "superhomogeneous.m"
                                                                              {
#line 884 "superhomogeneous.m"
                                                                                MR_Word base;
#line 884 "superhomogeneous.m"
                                                                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 884 "superhomogeneous.m"
                                                                                *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 884 "superhomogeneous.m"
                                                                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "superhomogeneous.m"
                                                                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_384_384));
#line 884 "superhomogeneous.m"
                                                                              }
#line 884 "superhomogeneous.m"
                                                                              *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135;
#line 884 "superhomogeneous.m"
                                                                              *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137;
#line 884 "superhomogeneous.m"
                                                                              *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_535;
#line 884 "superhomogeneous.m"
                                                                              *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
#line 884 "superhomogeneous.m"
                                                                              *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143;
#line 882 "superhomogeneous.m"
                                                                            }
#line 881 "superhomogeneous.m"
                                                                          else
#line 832 "superhomogeneous.m"
                                                                            {
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_370_440;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__Vars_388 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_503, (MR_Integer) 0)));
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__StateVars_389 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_503, (MR_Integer) 1)));
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__CondParseTree_390 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_503, (MR_Integer) 2)));
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_392;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__EmptySubst_393;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__CondGoal_394;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_395;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__ThenTerm_396;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_397;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__ThenExpansion_398;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_399;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__ThenGoalInfo_400;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__ThenGoal0_401;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__AfterThenSVarState_402;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__ElseTerm_403;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState0_404;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__ElseExpansion_405;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState_406;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__ElseGoalInfo_407;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__ElseGoal0_408;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__ThenGoal_409;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__ElseGoal_410;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_412;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_413;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__Goal_414;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_415;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_266_417;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_267_418;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_268_419;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_269_420;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_270_421;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_271_422;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_272_423;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_273_424;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_274_425;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_275_426;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_276_427;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_277_428;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__V_429_429;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_279_430;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_280_431;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_281_432;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_282_433;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_285_434;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__V_435_435;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__V_437_437;
#line 832 "superhomogeneous.m"
                                                                              MR_Word hlds__make_hlds__superhomogeneous__V_439_439;

#line 834 "superhomogeneous.m"
                                                                              {
#line 834 "superhomogeneous.m"
                                                                                hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_535, hlds__make_hlds__superhomogeneous__StateVars_389, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_392, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_415);
                                                                              }
#line 3297 "hlds.make_hlds.superhomogeneous.c"
                                                                              hlds__make_hlds__superhomogeneous__TypeInfo_370_440 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 836 "superhomogeneous.m"
                                                                              {
#line 836 "superhomogeneous.m"
                                                                                mercury__map__init_1_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_370_440, hlds__make_hlds__superhomogeneous__TypeInfo_370_440, &hlds__make_hlds__superhomogeneous__EmptySubst_393);
                                                                              }
#line 838 "superhomogeneous.m"
                                                                              {
#line 838 "superhomogeneous.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__CondParseTree_390, hlds__make_hlds__superhomogeneous__EmptySubst_393, &hlds__make_hlds__superhomogeneous__CondGoal_394, hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_392, &hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_395, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_266_417, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_535, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_267_418, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_268_419, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_269_420, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_415, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_270_421);
                                                                              }
#line 843 "superhomogeneous.m"
                                                                              {
#line 843 "superhomogeneous.m"
                                                                                hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__ThenTerm0_642, &hlds__make_hlds__superhomogeneous__ThenTerm_396, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_267_418, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_271_422, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_395, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_397, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_270_421, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_272_423);
                                                                              }
#line 846 "superhomogeneous.m"
                                                                              {
#line 846 "superhomogeneous.m"
                                                                                hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ThenTerm_396, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ThenExpansion_398, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_397, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_399, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_266_417, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_273_424, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_271_422, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_274_425, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_268_419, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_275_426, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_269_420, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_276_427, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_272_423, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_277_428);
                                                                              }
#line 851 "superhomogeneous.m"
                                                                              {
#line 851 "superhomogeneous.m"
                                                                                hlds__make_hlds__superhomogeneous__V_429_429 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_565, hlds__make_hlds__superhomogeneous__ThenTerm_396);
                                                                              }
#line 851 "superhomogeneous.m"
                                                                              {
#line 851 "superhomogeneous.m"
                                                                                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_429_429, &hlds__make_hlds__superhomogeneous__ThenGoalInfo_400);
                                                                              }
#line 852 "superhomogeneous.m"
                                                                              {
#line 852 "superhomogeneous.m"
                                                                                hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ThenGoalInfo_400, hlds__make_hlds__superhomogeneous__ThenExpansion_398, &hlds__make_hlds__superhomogeneous__ThenGoal0_401);
                                                                              }
#line 855 "superhomogeneous.m"
                                                                              {
#line 855 "superhomogeneous.m"
                                                                                hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__superhomogeneous__StateVars_389, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_399, &hlds__make_hlds__superhomogeneous__AfterThenSVarState_402);
                                                                              }
#line 858 "superhomogeneous.m"
                                                                              {
#line 858 "superhomogeneous.m"
                                                                                hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_715_715, &hlds__make_hlds__superhomogeneous__ElseTerm_403, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_274_425, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_279_430, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__AfterElseSVarState0_404, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_277_428, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_280_431);
                                                                              }
#line 860 "superhomogeneous.m"
                                                                              {
#line 860 "superhomogeneous.m"
                                                                                hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ElseTerm_403, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ElseExpansion_405, hlds__make_hlds__superhomogeneous__AfterElseSVarState0_404, &hlds__make_hlds__superhomogeneous__AfterElseSVarState_406, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_273_424, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_281_432, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_279_430, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_282_433, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_275_426, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_276_427, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_280_431, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_285_434);
                                                                              }
#line 865 "superhomogeneous.m"
                                                                              {
#line 865 "superhomogeneous.m"
                                                                                hlds__make_hlds__superhomogeneous__V_435_435 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_565, hlds__make_hlds__superhomogeneous__ElseTerm_403);
                                                                              }
#line 865 "superhomogeneous.m"
                                                                              {
#line 865 "superhomogeneous.m"
                                                                                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_435_435, &hlds__make_hlds__superhomogeneous__ElseGoalInfo_407);
                                                                              }
#line 866 "superhomogeneous.m"
                                                                              {
#line 866 "superhomogeneous.m"
                                                                                hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ElseGoalInfo_407, hlds__make_hlds__superhomogeneous__ElseExpansion_405, &hlds__make_hlds__superhomogeneous__ElseGoal0_408);
                                                                              }
#line 869 "superhomogeneous.m"
                                                                              {
#line 869 "superhomogeneous.m"
                                                                                hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__StateVars_389, hlds__make_hlds__superhomogeneous__ThenGoal0_401, &hlds__make_hlds__superhomogeneous__ThenGoal_409, hlds__make_hlds__superhomogeneous__ElseGoal0_408, &hlds__make_hlds__superhomogeneous__ElseGoal_410, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_395, hlds__make_hlds__superhomogeneous__AfterThenSVarState_402, hlds__make_hlds__superhomogeneous__AfterElseSVarState_406, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_282_433, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_281_432, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_285_434, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                                                              }
#line 876 "superhomogeneous.m"
                                                                              {
#line 876 "superhomogeneous.m"
                                                                                hlds__make_hlds__superhomogeneous__V_437_437 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeInfo_370_440, hlds__make_hlds__superhomogeneous__StateVars_389, hlds__make_hlds__superhomogeneous__Vars_388);
                                                                              }
#line 876 "superhomogeneous.m"
                                                                              {
#line 876 "superhomogeneous.m"
                                                                                hlds__make_hlds__superhomogeneous__GoalExpr_412 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 876 "superhomogeneous.m"
                                                                                MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_412, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 876 "superhomogeneous.m"
                                                                                MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_412, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_437_437));
#line 876 "superhomogeneous.m"
                                                                                MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_412, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__CondGoal_394));
#line 876 "superhomogeneous.m"
                                                                                MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_412, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ThenGoal_409));
#line 876 "superhomogeneous.m"
                                                                                MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_412, 4) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ElseGoal_410));
#line 876 "superhomogeneous.m"
                                                                              }
#line 878 "superhomogeneous.m"
                                                                              {
#line 878 "superhomogeneous.m"
                                                                                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_413);
                                                                              }
#line 879 "superhomogeneous.m"
                                                                              {
#line 879 "superhomogeneous.m"
                                                                                hlds__make_hlds__superhomogeneous__Goal_414 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 879 "superhomogeneous.m"
                                                                                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_414, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_412));
#line 879 "superhomogeneous.m"
                                                                                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_414, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_413));
#line 879 "superhomogeneous.m"
                                                                              }
#line 880 "superhomogeneous.m"
                                                                              {
#line 880 "superhomogeneous.m"
                                                                                hlds__make_hlds__superhomogeneous__V_439_439 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_414)));
                                                                              }
#line 880 "superhomogeneous.m"
                                                                              {
#line 880 "superhomogeneous.m"
                                                                                MR_Word base;
#line 880 "superhomogeneous.m"
                                                                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 880 "superhomogeneous.m"
                                                                                *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 880 "superhomogeneous.m"
                                                                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 880 "superhomogeneous.m"
                                                                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_439_439));
#line 880 "superhomogeneous.m"
                                                                              }
#line 832 "superhomogeneous.m"
                                                                            }
#line 881 "superhomogeneous.m"
                                                                          hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 824 "superhomogeneous.m"
                                                                        }
#line 817 "superhomogeneous.m"
                                                                    }
#line 817 "superhomogeneous.m"
                                                                }
#line 824 "superhomogeneous.m"
                                                            }
#line 817 "superhomogeneous.m"
                                                        }
#line 817 "superhomogeneous.m"
                                                    }
#line 824 "superhomogeneous.m"
                                                }
#line 817 "superhomogeneous.m"
                                            }
#line 824 "superhomogeneous.m"
                                        }
#line 816 "superhomogeneous.m"
                                    }
#line 816 "superhomogeneous.m"
                                }
#line 824 "superhomogeneous.m"
                            }
#line 765 "superhomogeneous.m"
                          else
#line 765 "superhomogeneous.m"
                            if ((((strcmp(hlds__make_hlds__superhomogeneous__YAtom_24, (MR_String) ":") == 0)) || ((strcmp(hlds__make_hlds__superhomogeneous__YAtom_24, (MR_String) "with_type") == 0))))
#line 765 "superhomogeneous.m"
                              {
#line 765 "superhomogeneous.m"
                                MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_363 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 765 "superhomogeneous.m"
                                MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_364 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 765 "superhomogeneous.m"
                                MR_Word hlds__make_hlds__superhomogeneous__DeclType1_41;
#line 765 "superhomogeneous.m"
                                MR_Word hlds__make_hlds__superhomogeneous__GenericVarSet_43;
#line 765 "superhomogeneous.m"
                                MR_Word hlds__make_hlds__superhomogeneous__DeclTypeResult_44;
#line 765 "superhomogeneous.m"
                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_317_317;
#line 765 "superhomogeneous.m"
                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_318_318;
#line 765 "superhomogeneous.m"
                                MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_319_319;

#line 771 "superhomogeneous.m"
                                {
#line 771 "superhomogeneous.m"
                                  mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_363, hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_364, hlds__make_hlds__superhomogeneous__V_715_715, &hlds__make_hlds__superhomogeneous__DeclType1_41);
                                }
#line 773 "superhomogeneous.m"
                                {
#line 773 "superhomogeneous.m"
                                  mercury__varset__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_363, hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_364, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__GenericVarSet_43);
                                }
#line 774 "superhomogeneous.m"
                                {
#line 774 "superhomogeneous.m"
                                  parse_tree__prog_io_util__parse_type_4_p_0(hlds__make_hlds__superhomogeneous__DeclType1_41, hlds__make_hlds__superhomogeneous__GenericVarSet_43, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[7]), &hlds__make_hlds__superhomogeneous__DeclTypeResult_44);
                                }
#line 781 "superhomogeneous.m"
                                if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__DeclTypeResult_44)) == (MR_mktag((MR_Integer) 0))))
#line 782 "superhomogeneous.m"
                                  {
#line 782 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__DeclTypeSpecs_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__DeclTypeResult_44, (MR_Integer) 0)));

#line 786 "superhomogeneous.m"
                                    {
#line 786 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_319_319 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__DeclTypeSpecs_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145);
                                    }
#line 786 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_317_317 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
#line 786 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_318_318 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143;
#line 782 "superhomogeneous.m"
                                  }
#line 781 "superhomogeneous.m"
                                else
#line 777 "superhomogeneous.m"
                                  {
#line 777 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__DeclType_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__DeclTypeResult_44, (MR_Integer) 0)));
#line 777 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__DeclVarSet_46;

#line 778 "superhomogeneous.m"
                                    {
#line 778 "superhomogeneous.m"
                                      mercury__varset__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_363, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__DeclVarSet_46);
                                    }
#line 779 "superhomogeneous.m"
                                    {
#line 779 "superhomogeneous.m"
                                      hlds__make_hlds__qual_info__process_type_qualification_10_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__DeclType_45, hlds__make_hlds__superhomogeneous__DeclVarSet_46, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_317_317, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_318_318, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_319_319);
                                    }
#line 777 "superhomogeneous.m"
                                  }
#line 788 "superhomogeneous.m"
                                {
#line 788 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_713_713, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__Expansion_32, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_317_317, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_318_318, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_319_319, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                }
#line 765 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 765 "superhomogeneous.m"
                              }
#line 765 "superhomogeneous.m"
                            else
#line 765 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__succeeded = MR_FALSE;
#line 765 "superhomogeneous.m"
              }
#line 957 "superhomogeneous.m"
          }
#line 957 "superhomogeneous.m"
      }
#line 765 "superhomogeneous.m"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 765 "superhomogeneous.m"
  }
#line 744 "superhomogeneous.m"
}

#line 591 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctor_24,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YArgTerms0_25,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
#line 591 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_87,
#line 591 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_88,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_89,
#line 591 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_90,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_91,
#line 591 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_92,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_93,
#line 591 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_94,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_95,
#line 591 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_96,
#line 591 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_97,
#line 591 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_98)
#line 591 "superhomogeneous.m"
{
#line 602 "superhomogeneous.m"
  {
#line 602 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 602 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_39;
#line 602 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_99_99;
#line 602 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_100_100;
#line 602 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_101_101;
#line 613 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionPrime_41;
#line 613 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
#line 613 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_103_103;
#line 613 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_104_104;
#line 613 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_105_105;
#line 613 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_106_106;
#line 613 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_107_107;
#line 606 "superhomogeneous.m"
    MR_String hlds__make_hlds__superhomogeneous__YAtom_40;

#line 603 "superhomogeneous.m"
    {
#line 603 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__YArgTerms0_25, &hlds__make_hlds__superhomogeneous__YArgTerms_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_91, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_99_99, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_87, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_100_100, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_97, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_101_101);
    }
#line 606 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YFunctor_24)) == (MR_mktag((MR_Integer) 0)));
#line 606 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 606 "superhomogeneous.m"
      {
#line 606 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__YAtom_40 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YFunctor_24, (MR_Integer) 0)));
#line 607 "superhomogeneous.m"
        {
#line 607 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__YAtom_40, hlds__make_hlds__superhomogeneous__YArgTerms_39, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ExpansionPrime_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_100_100, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_89, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_103_103, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_99_99, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_93, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_105_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_95, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_106_106, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_101_101, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_107_107);
        }
#line 606 "superhomogeneous.m"
      }
#line 613 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 612 "superhomogeneous.m"
      {
#line 612 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_98 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_107_107;
#line 612 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_96 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_106_106;
#line 612 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_94 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_105_105;
#line 612 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_92 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_104_104;
#line 612 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_90 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_103_103;
#line 612 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_88 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
#line 612 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__Expansion_32 = hlds__make_hlds__superhomogeneous__ExpansionPrime_41;
#line 612 "superhomogeneous.m"
      }
#line 613 "superhomogeneous.m"
    else
#line 654 "superhomogeneous.m"
      {
#line 654 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__GoalTerm1_44;
#line 654 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__LambdaPurity_46;
#line 654 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_53;
#line 654 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Groundness_55;
#line 654 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Vars1_56;
#line 654 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Modes1_57;
#line 654 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Det1_58;
#line 615 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_184_184 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 615 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_185_185;
#line 615 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__RHS_42;
#line 615 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadTerm0_43;
#line 615 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadTerm1_45;
#line 615 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadTerm_47;
#line 629 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Groundness0_48;
#line 629 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Vars0_50;
#line 629 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Modes0_51;
#line 629 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Det0_52;

#line 615 "superhomogeneous.m"
        {
#line 615 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__RHS_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 615 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__RHS_42, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YFunctor_24));
#line 615 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__RHS_42, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YArgTerms_39));
#line 615 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__RHS_42, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YFunctorContext_26));
#line 615 "superhomogeneous.m"
        }
#line 616 "superhomogeneous.m"
        {
#line 616 "superhomogeneous.m"
          parse_tree__prog_util__parse_rule_term_4_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_184_184, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__RHS_42, &hlds__make_hlds__superhomogeneous__HeadTerm0_43, &hlds__make_hlds__superhomogeneous__GoalTerm1_44);
        }
#line 3727 "hlds.make_hlds.superhomogeneous.c"
        hlds__make_hlds__superhomogeneous__TypeCtorInfo_185_185 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 617 "superhomogeneous.m"
        {
#line 617 "superhomogeneous.m"
          mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_184_184, hlds__make_hlds__superhomogeneous__TypeCtorInfo_185_185, hlds__make_hlds__superhomogeneous__HeadTerm0_43, &hlds__make_hlds__superhomogeneous__HeadTerm1_45);
        }
#line 618 "superhomogeneous.m"
        {
#line 618 "superhomogeneous.m"
          parse_tree__prog_io_util__parse_purity_annotation_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_185_185, hlds__make_hlds__superhomogeneous__HeadTerm1_45, &hlds__make_hlds__superhomogeneous__LambdaPurity_46, &hlds__make_hlds__superhomogeneous__HeadTerm_47);
        }
#line 620 "superhomogeneous.m"
        {
#line 620 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_goal__parse_pred_expression_6_p_0(hlds__make_hlds__superhomogeneous__HeadTerm_47, &hlds__make_hlds__superhomogeneous__Groundness0_48, &hlds__make_hlds__superhomogeneous__Vars0_50, &hlds__make_hlds__superhomogeneous__Modes0_51, &hlds__make_hlds__superhomogeneous__Det0_52);
        }
#line 629 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 623 "superhomogeneous.m"
          {
#line 623 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__PredOrFunc_53 = (MR_Integer) 0;
#line 625 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__Groundness_55 = hlds__make_hlds__superhomogeneous__Groundness0_48;
#line 626 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__Vars1_56 = hlds__make_hlds__superhomogeneous__Vars0_50;
#line 627 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__Modes1_57 = hlds__make_hlds__superhomogeneous__Modes0_51;
#line 628 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__Det1_58 = hlds__make_hlds__superhomogeneous__Det0_52;
#line 623 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 623 "superhomogeneous.m"
          }
#line 629 "superhomogeneous.m"
        else
#line 631 "superhomogeneous.m"
          {
#line 630 "superhomogeneous.m"
            {
#line 630 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_goal__parse_func_expression_6_p_0(hlds__make_hlds__superhomogeneous__HeadTerm_47, &hlds__make_hlds__superhomogeneous__Groundness_55, &hlds__make_hlds__superhomogeneous__Vars1_56, &hlds__make_hlds__superhomogeneous__Modes1_57, &hlds__make_hlds__superhomogeneous__Det1_58);
            }
#line 631 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 631 "superhomogeneous.m"
              {
#line 632 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__PredOrFunc_53 = (MR_Integer) 1;
#line 632 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 631 "superhomogeneous.m"
              }
#line 631 "superhomogeneous.m"
          }
#line 654 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 636 "superhomogeneous.m"
          {
#line 636 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Modes_59;
#line 636 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__GoalTerm_61;
#line 636 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeParsedGoal_63;
#line 636 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_108_108;
#line 636 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_109_109;
#line 636 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_113_113;

#line 635 "superhomogeneous.m"
            {
#line 635 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(hlds__make_hlds__superhomogeneous__Modes1_57, &hlds__make_hlds__superhomogeneous__Modes_59, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_95, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_108_108, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_101_101, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_109_109);
            }
#line 638 "superhomogeneous.m"
            {
#line 638 "superhomogeneous.m"
              mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__make_hlds__superhomogeneous__GoalTerm1_44, &hlds__make_hlds__superhomogeneous__GoalTerm_61);
            }
#line 640 "superhomogeneous.m"
            {
#line 640 "superhomogeneous.m"
              parse_tree__prog_io_goal__parse_goal_5_p_0(hlds__make_hlds__superhomogeneous__GoalTerm_61, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[5]), &hlds__make_hlds__superhomogeneous__MaybeParsedGoal_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_99_99, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_113_113);
            }
#line 649 "superhomogeneous.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeParsedGoal_63)) == (MR_mktag((MR_Integer) 0))))
#line 650 "superhomogeneous.m"
              {
#line 650 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_63, (MR_Integer) 0)));
#line 650 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_116_116;
#line 650 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_117_117;

#line 651 "superhomogeneous.m"
                {
#line 651 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_98 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_66, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_109_109);
                }
#line 652 "superhomogeneous.m"
                {
#line 652 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_117_117 = hlds__make_goal__true_goal_0_f_0();
                }
#line 652 "superhomogeneous.m"
                {
#line 652 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_116_116 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_117_117)));
                }
#line 652 "superhomogeneous.m"
                {
#line 652 "superhomogeneous.m"
                  MR_Word base;
#line 652 "superhomogeneous.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 652 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 652 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_116_116));
#line 652 "superhomogeneous.m"
                }
#line 652 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_90 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_89;
#line 652 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_92 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_113_113;
#line 652 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_94 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_93;
#line 652 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_96 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_108_108;
#line 650 "superhomogeneous.m"
              }
#line 649 "superhomogeneous.m"
            else
#line 642 "superhomogeneous.m"
              {
#line 642 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_63, (MR_Integer) 0)));
#line 642 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__Goal_65;
#line 642 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_124_124;

#line 643 "superhomogeneous.m"
                {
#line 643 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__LambdaPurity_46, hlds__make_hlds__superhomogeneous__Groundness_55, hlds__make_hlds__superhomogeneous__PredOrFunc_53, hlds__make_hlds__superhomogeneous__Vars1_56, hlds__make_hlds__superhomogeneous__Modes_59, hlds__make_hlds__superhomogeneous__Det1_58, hlds__make_hlds__superhomogeneous__ParsedGoal_64, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, &hlds__make_hlds__superhomogeneous__Goal_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_100_100, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_89, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_113_113, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_92, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_93, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_94, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_108_108, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_96, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_109_109, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_98);
                }
#line 648 "superhomogeneous.m"
                {
#line 648 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_124_124 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_65)));
                }
#line 648 "superhomogeneous.m"
                {
#line 648 "superhomogeneous.m"
                  MR_Word base;
#line 648 "superhomogeneous.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 648 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 648 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_124_124));
#line 648 "superhomogeneous.m"
                }
#line 642 "superhomogeneous.m"
              }
#line 652 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_88 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_100_100;
#line 636 "superhomogeneous.m"
          }
#line 654 "superhomogeneous.m"
        else
#line 686 "superhomogeneous.m"
          {
#line 686 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_76;
#line 686 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ConsId_78;
#line 686 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_133_133;
#line 686 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_134_134;
#line 686 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_135_135;
#line 680 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__FunctorName_74;
#line 680 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_75;
#line 680 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_128_128;
#line 680 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_129_129;
#line 680 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_130_130;
#line 660 "superhomogeneous.m"
            MR_String hlds__make_hlds__superhomogeneous__FName_67;
#line 672 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ModuleTerm_68;
#line 672 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NameArgsTerm_69;
#line 662 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_125_125;
#line 662 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_126_126;

#line 660 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YFunctor_24)) == (MR_mktag((MR_Integer) 0)));
#line 660 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 660 "superhomogeneous.m"
              {
#line 660 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__FName_67 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YFunctor_24, (MR_Integer) 0)));
#line 662 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__FName_67, (MR_String) ".") == 0);
#line 662 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 662 "superhomogeneous.m"
                  {
#line 663 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YArgTerms_39)) == (MR_mktag((MR_Integer) 1)));
#line 663 "superhomogeneous.m"
                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 663 "superhomogeneous.m"
                      {
#line 663 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__ModuleTerm_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgTerms_39, (MR_Integer) 0)));
#line 663 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgTerms_39, (MR_Integer) 1)));
#line 663 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_125_125)) == (MR_mktag((MR_Integer) 1)));
#line 663 "superhomogeneous.m"
                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 663 "superhomogeneous.m"
                          {
#line 663 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__NameArgsTerm_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_125_125, (MR_Integer) 0)));
#line 663 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_125_125, (MR_Integer) 1)));
#line 663 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_126_126 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "superhomogeneous.m"
                          }
#line 663 "superhomogeneous.m"
                      }
#line 662 "superhomogeneous.m"
                  }
#line 672 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 665 "superhomogeneous.m"
                  {
#line 665 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_191_191;
#line 665 "superhomogeneous.m"
                    MR_String hlds__make_hlds__superhomogeneous__Name_70;
#line 665 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__NameArgTerms_71;
#line 665 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__Module_73;
#line 665 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_127_127;
#line 665 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_72_72;

#line 665 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__NameArgsTerm_69)) == (MR_mktag((MR_Integer) 0)));
#line 665 "superhomogeneous.m"
                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 665 "superhomogeneous.m"
                      {
#line 665 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__NameArgsTerm_69, (MR_Integer) 0)));
#line 665 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__NameArgTerms_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__NameArgsTerm_69, (MR_Integer) 1)));
#line 665 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__NameArgsTerm_69, (MR_Integer) 2)));
#line 665 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_127_127)) == (MR_mktag((MR_Integer) 0)));
#line 665 "superhomogeneous.m"
                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 665 "superhomogeneous.m"
                          {
#line 665 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__Name_70 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_127_127, (MR_Integer) 0)));
#line 4020 "hlds.make_hlds.superhomogeneous.c"
                            hlds__make_hlds__superhomogeneous__TypeCtorInfo_191_191 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 666 "superhomogeneous.m"
                            {
#line 666 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_191_191, hlds__make_hlds__superhomogeneous__ModuleTerm_68, &hlds__make_hlds__superhomogeneous__Module_73);
                            }
#line 665 "superhomogeneous.m"
                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 665 "superhomogeneous.m"
                              {
#line 667 "superhomogeneous.m"
                                {
#line 667 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__FunctorName_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__FunctorName_74, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Module_73));
#line 667 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__FunctorName_74, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Name_70));
#line 667 "superhomogeneous.m"
                                }
#line 670 "superhomogeneous.m"
                                {
#line 670 "superhomogeneous.m"
                                  hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__NameArgTerms_71, &hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_75, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_99_99, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_128_128, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_100_100, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_129_129, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_101_101, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_130_130);
                                }
#line 670 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 665 "superhomogeneous.m"
                              }
#line 665 "superhomogeneous.m"
                          }
#line 665 "superhomogeneous.m"
                      }
#line 665 "superhomogeneous.m"
                  }
#line 672 "superhomogeneous.m"
                else
#line 673 "superhomogeneous.m"
                  {
#line 673 "superhomogeneous.m"
                    {
#line 673 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__FunctorName_74 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(hlds__make_hlds__superhomogeneous__FName_67, (MR_String) "__");
                    }
#line 674 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_75 = hlds__make_hlds__superhomogeneous__YArgTerms_39;
#line 674 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_130_130 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_101_101;
#line 674 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_128_128 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_99_99;
#line 674 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_129_129 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_100_100;
#line 673 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 673 "superhomogeneous.m"
                  }
#line 660 "superhomogeneous.m"
              }
#line 680 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 677 "superhomogeneous.m"
              {
#line 677 "superhomogeneous.m"
                MR_Integer hlds__make_hlds__superhomogeneous__Arity_77;
#line 677 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_132_132;

#line 677 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_135_135 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_130_130;
#line 677 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_134_134 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_128_128;
#line 677 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_133_133 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_129_129;
#line 677 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_76 = hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_75;
#line 678 "superhomogeneous.m"
                {
#line 678 "superhomogeneous.m"
                  mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2], hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_76, &hlds__make_hlds__superhomogeneous__Arity_77);
                }
#line 679 "superhomogeneous.m"
                {
#line 679 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_132_132 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 679 "superhomogeneous.m"
                {
#line 679 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__ConsId_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 679 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 679 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_78, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FunctorName_74));
#line 679 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_78, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arity_77));
#line 679 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_78, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_132_132));
#line 679 "superhomogeneous.m"
                }
#line 677 "superhomogeneous.m"
              }
#line 680 "superhomogeneous.m"
            else
#line 683 "superhomogeneous.m"
              {
#line 683 "superhomogeneous.m"
                MR_Integer hlds__make_hlds__superhomogeneous__Arity_170;

#line 683 "superhomogeneous.m"
                {
#line 683 "superhomogeneous.m"
                  mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2], hlds__make_hlds__superhomogeneous__YArgTerms_39, &hlds__make_hlds__superhomogeneous__Arity_170);
                }
#line 684 "superhomogeneous.m"
                {
#line 684 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__ConsId_78 = parse_tree__prog_util__make_functor_cons_id_2_f_0(hlds__make_hlds__superhomogeneous__YFunctor_24, hlds__make_hlds__superhomogeneous__Arity_170);
                }
#line 685 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_76 = hlds__make_hlds__superhomogeneous__YArgTerms_39;
#line 685 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_135_135 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_101_101;
#line 685 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_134_134 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_99_99;
#line 685 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_133_133 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_100_100;
#line 683 "superhomogeneous.m"
              }
#line 697 "superhomogeneous.m"
            if ((hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 690 "superhomogeneous.m"
              {
#line 690 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__FunctorGoal_79;
#line 690 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_163_163;
#line 690 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_167_167;
#line 690 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_169_169;
#line 690 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__Goal_171;

#line 692 "superhomogeneous.m"
                {
#line 692 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 692 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_163_163, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_78));
#line 692 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_163_163, 1) = ((MR_Box) ((MR_Integer) 0));
#line 692 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_163_163, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "superhomogeneous.m"
                }
#line 691 "superhomogeneous.m"
                {
#line 691 "superhomogeneous.m"
                  hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_163_163, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__FunctorGoal_79, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_96);
                }
#line 695 "superhomogeneous.m"
                {
#line 695 "superhomogeneous.m"
                  hlds__hlds_goal__goal_set_purity_3_p_0(hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__FunctorGoal_79, &hlds__make_hlds__superhomogeneous__Goal_171);
                }
#line 696 "superhomogeneous.m"
                {
#line 696 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_167_167, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_23));
#line 696 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_167_167, 1) = ((MR_Box) ((MR_Integer) 1));
#line 696 "superhomogeneous.m"
                }
#line 696 "superhomogeneous.m"
                {
#line 696 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_169_169 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_171)));
                }
#line 696 "superhomogeneous.m"
                {
#line 696 "superhomogeneous.m"
                  MR_Word base;
#line 696 "superhomogeneous.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 696 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 696 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_167_167));
#line 696 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_169_169));
#line 696 "superhomogeneous.m"
                }
#line 696 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_88 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_133_133;
#line 696 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_90 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_89;
#line 696 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_92 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_134_134;
#line 696 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_94 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_93;
#line 696 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_98 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_135_135;
#line 690 "superhomogeneous.m"
              }
#line 697 "superhomogeneous.m"
            else
#line 698 "superhomogeneous.m"
              {
#line 698 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ArgContext_82;

#line 699 "superhomogeneous.m"
                {
#line 699 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__ArgContext_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 699 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_82, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_78));
#line 699 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_82, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
#line 699 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_82, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_29));
#line 699 "superhomogeneous.m"
                }
#line 717 "superhomogeneous.m"
                if ((hlds__make_hlds__superhomogeneous__Purity_30 == (MR_Integer) 0))
#line 701 "superhomogeneous.m"
                  {
#line 701 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__YVars_83;
#line 701 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_84;
#line 701 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_85;
#line 701 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_157_157;
#line 701 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_159_159;
#line 701 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__FunctorGoal_172;

#line 706 "superhomogeneous.m"
                    {
#line 706 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_76, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__ArgContext_82, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__superhomogeneous__YVars_83, &hlds__make_hlds__superhomogeneous__ArgExpansions_84, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_133_133, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_88, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_89, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_134_134, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_92, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_93, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_94, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_95, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_157_157, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_135_135, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_98);
                    }
#line 711 "superhomogeneous.m"
                    {
#line 711 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 711 "superhomogeneous.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_78));
#line 711 "superhomogeneous.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 1) = ((MR_Box) ((MR_Integer) 0));
#line 711 "superhomogeneous.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVars_83));
#line 711 "superhomogeneous.m"
                    }
#line 710 "superhomogeneous.m"
                    {
#line 710 "superhomogeneous.m"
                      hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_159_159, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__FunctorGoal_172, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_157_157, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_96);
                    }
#line 714 "superhomogeneous.m"
                    {
#line 714 "superhomogeneous.m"
                      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_85);
                    }
#line 715 "superhomogeneous.m"
                    {
#line 715 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_85, hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__FunctorGoal_172, (MR_Integer) 1, hlds__make_hlds__superhomogeneous__ArgExpansions_84, hlds__make_hlds__superhomogeneous__Expansion_32);
#line 715 "superhomogeneous.m"
                      return;
                    }
#line 701 "superhomogeneous.m"
                  }
#line 717 "superhomogeneous.m"
                else
#line 720 "superhomogeneous.m"
                  {
#line 720 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__Goal0_86;
#line 720 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_143_143;
#line 720 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_145_145;
#line 720 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_149_149;
#line 720 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__Goal_173;
#line 720 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__FunctorGoal_174;
#line 720 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__YVars_175;
#line 720 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_176;
#line 720 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_177;

#line 725 "superhomogeneous.m"
                    {
#line 725 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_76, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__ArgContext_82, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__superhomogeneous__YVars_175, &hlds__make_hlds__superhomogeneous__ArgExpansions_176, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_133_133, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_88, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_89, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_134_134, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_92, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_93, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_94, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_95, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_143_143, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_135_135, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_98);
                    }
#line 730 "superhomogeneous.m"
                    {
#line 730 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 730 "superhomogeneous.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_78));
#line 730 "superhomogeneous.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_145_145, 1) = ((MR_Box) ((MR_Integer) 0));
#line 730 "superhomogeneous.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_145_145, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVars_175));
#line 730 "superhomogeneous.m"
                    }
#line 729 "superhomogeneous.m"
                    {
#line 729 "superhomogeneous.m"
                      hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_145_145, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__FunctorGoal_174, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_143_143, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_96);
                    }
#line 733 "superhomogeneous.m"
                    {
#line 733 "superhomogeneous.m"
                      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_177);
                    }
#line 734 "superhomogeneous.m"
                    {
#line 734 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_177, hlds__make_hlds__superhomogeneous__ArgExpansions_176, hlds__make_hlds__superhomogeneous__FunctorGoal_174, &hlds__make_hlds__superhomogeneous__Goal0_86);
                    }
#line 736 "superhomogeneous.m"
                    {
#line 736 "superhomogeneous.m"
                      hlds__hlds_goal__goal_set_purity_3_p_0(hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__Goal0_86, &hlds__make_hlds__superhomogeneous__Goal_173);
                    }
#line 737 "superhomogeneous.m"
                    {
#line 737 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__V_149_149 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_173)));
                    }
#line 737 "superhomogeneous.m"
                    {
#line 737 "superhomogeneous.m"
                      MR_Word base;
#line 737 "superhomogeneous.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 737 "superhomogeneous.m"
                      *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 737 "superhomogeneous.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 737 "superhomogeneous.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_149_149));
#line 737 "superhomogeneous.m"
                    }
#line 720 "superhomogeneous.m"
                  }
#line 698 "superhomogeneous.m"
              }
#line 686 "superhomogeneous.m"
          }
#line 654 "superhomogeneous.m"
      }
#line 602 "superhomogeneous.m"
  }
#line 591 "superhomogeneous.m"
}

#line 554 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_21,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 554 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_41,
#line 554 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_42,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_43,
#line 554 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_44,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_45,
#line 554 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_46,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_47,
#line 554 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_48,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49,
#line 554 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50,
#line 554 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_51,
#line 554 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_52)
#line 554 "superhomogeneous.m"
{
#line 567 "superhomogeneous.m"
  {
#line 567 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 567 "superhomogeneous.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_22)) == (MR_mktag((MR_Integer) 0))))
#line 572 "superhomogeneous.m"
      {
#line 572 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YFunctor_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 572 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));
#line 572 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 2)));

#line 573 "superhomogeneous.m"
        {
#line 573 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__XVar_21, hlds__make_hlds__superhomogeneous__YFunctor_38, hlds__make_hlds__superhomogeneous__YArgTerms_39, hlds__make_hlds__superhomogeneous__YFunctorContext_40, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_51, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_52);
#line 573 "superhomogeneous.m"
          return;
        }
#line 572 "superhomogeneous.m"
      }
#line 567 "superhomogeneous.m"
    else
#line 567 "superhomogeneous.m"
      {
#line 567 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YVar_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 567 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goal_37;
#line 567 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_59_59;
#line 567 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_62_62;
#line 567 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));

#line 568 "superhomogeneous.m"
        {
#line 568 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 568 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_35));
#line 568 "superhomogeneous.m"
        }
#line 568 "superhomogeneous.m"
        {
#line 568 "superhomogeneous.m"
          hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_21, hlds__make_hlds__superhomogeneous__V_59_59, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__Goal_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50);
        }
#line 570 "superhomogeneous.m"
        {
#line 570 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_62_62 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_37)));
        }
#line 570 "superhomogeneous.m"
        {
#line 570 "superhomogeneous.m"
          MR_Word base;
#line 570 "superhomogeneous.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 570 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Expansion_28 = base;
#line 570 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_62_62));
#line 570 "superhomogeneous.m"
        }
#line 570 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_42 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_41;
#line 570 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_44 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_43;
#line 570 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_46 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_45;
#line 570 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_48 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_47;
#line 570 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_52 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_51;
#line 567 "superhomogeneous.m"
      }
#line 567 "superhomogeneous.m"
  }
#line 554 "superhomogeneous.m"
}

#line 495 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XTerm_21,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 495 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55,
#line 495 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57,
#line 495 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59,
#line 495 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61,
#line 495 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63,
#line 495 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64,
#line 495 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65,
#line 495 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66)
#line 495 "superhomogeneous.m"
{
#line 508 "superhomogeneous.m"
  {
#line 508 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 508 "superhomogeneous.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__XTerm_21)) == (MR_mktag((MR_Integer) 0))))
#line 508 "superhomogeneous.m"
      {
#line 508 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 2)));
#line 508 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 1)));
#line 508 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 0)));

#line 508 "superhomogeneous.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_22)) == (MR_mktag((MR_Integer) 0))))
#line 534 "superhomogeneous.m"
          {
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TmpVar_48;
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionX_49;
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionY_50;
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_51;
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordX_52;
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordY_53;
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__GoalCord_54;
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_67_67;
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_68_68;
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_69_69;
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_70_70;
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_71_71;
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_72_72;
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_73_73;
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YFunctor_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));
#line 534 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 2)));

#line 536 "superhomogeneous.m"
            {
#line 536 "superhomogeneous.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__make_hlds__superhomogeneous__TmpVar_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_67_67);
            }
#line 537 "superhomogeneous.m"
            {
#line 537 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__TmpVar_48, hlds__make_hlds__superhomogeneous__V_110_110, hlds__make_hlds__superhomogeneous__V_109_109, hlds__make_hlds__superhomogeneous__V_108_108, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__ExpansionX_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_68_68, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_69_69, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_70_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_71_71, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_72_72, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_73_73);
            }
#line 541 "superhomogeneous.m"
            {
#line 541 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__TmpVar_48, hlds__make_hlds__superhomogeneous__YFunctor_99, hlds__make_hlds__superhomogeneous__YArgTerms_100, hlds__make_hlds__superhomogeneous__YFunctorContext_101, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__ExpansionY_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_68_68, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_69_69, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_70_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_71_71, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_72_72, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_73_73, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);
            }
#line 545 "superhomogeneous.m"
            {
#line 545 "superhomogeneous.m"
              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_23, &hlds__make_hlds__superhomogeneous__GoalInfo_51);
            }
#line 546 "superhomogeneous.m"
            {
#line 546 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_51, hlds__make_hlds__superhomogeneous__ExpansionX_49, &hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordX_52);
            }
#line 548 "superhomogeneous.m"
            {
#line 548 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_51, hlds__make_hlds__superhomogeneous__ExpansionY_50, &hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordY_53);
            }
#line 550 "superhomogeneous.m"
            {
#line 550 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__GoalCord_54 = mercury__cord__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordX_52, hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordY_53);
            }
#line 551 "superhomogeneous.m"
            {
#line 551 "superhomogeneous.m"
              MR_Word base;
#line 551 "superhomogeneous.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 551 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Expansion_28 = base;
#line 551 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_54));
#line 551 "superhomogeneous.m"
            }
#line 534 "superhomogeneous.m"
          }
#line 508 "superhomogeneous.m"
        else
#line 521 "superhomogeneous.m"
          {
#line 521 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YVar_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 522 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));

#line 523 "superhomogeneous.m"
            {
#line 523 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__YVar_98, hlds__make_hlds__superhomogeneous__V_110_110, hlds__make_hlds__superhomogeneous__V_109_109, hlds__make_hlds__superhomogeneous__V_108_108, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);
#line 523 "superhomogeneous.m"
              return;
            }
#line 521 "superhomogeneous.m"
          }
#line 508 "superhomogeneous.m"
      }
#line 508 "superhomogeneous.m"
    else
#line 508 "superhomogeneous.m"
      {
#line 508 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 0)));
#line 508 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 1)));

#line 508 "superhomogeneous.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_22)) == (MR_mktag((MR_Integer) 0))))
#line 514 "superhomogeneous.m"
          {
#line 514 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YFunctor_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 514 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));
#line 514 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 2)));

#line 516 "superhomogeneous.m"
            {
#line 516 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__V_112_112, hlds__make_hlds__superhomogeneous__YFunctor_41, hlds__make_hlds__superhomogeneous__YArgTerms_42, hlds__make_hlds__superhomogeneous__YFunctorContext_43, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);
#line 516 "superhomogeneous.m"
              return;
            }
#line 514 "superhomogeneous.m"
          }
#line 508 "superhomogeneous.m"
        else
#line 508 "superhomogeneous.m"
          {
#line 508 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 508 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Goal_39;
#line 508 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_93_93;
#line 508 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_96_96;
#line 509 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));

#line 510 "superhomogeneous.m"
            {
#line 510 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 510 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_93_93, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_37));
#line 510 "superhomogeneous.m"
            }
#line 510 "superhomogeneous.m"
            {
#line 510 "superhomogeneous.m"
              hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__V_112_112, hlds__make_hlds__superhomogeneous__V_93_93, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__Goal_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64);
            }
#line 512 "superhomogeneous.m"
            {
#line 512 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_96_96 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_39)));
            }
#line 512 "superhomogeneous.m"
            {
#line 512 "superhomogeneous.m"
              MR_Word base;
#line 512 "superhomogeneous.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 512 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Expansion_28 = base;
#line 512 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_96_96));
#line 512 "superhomogeneous.m"
            }
#line 512 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55;
#line 512 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57;
#line 512 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59;
#line 512 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61;
#line 512 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65;
#line 508 "superhomogeneous.m"
          }
#line 508 "superhomogeneous.m"
      }
#line 508 "superhomogeneous.m"
  }
#line 495 "superhomogeneous.m"
}

#line 479 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LHSVar_21,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 479 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36,
#line 479 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38,
#line 479 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40,
#line 479 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42,
#line 479 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44,
#line 479 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45,
#line 479 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46,
#line 479 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47)
#line 479 "superhomogeneous.m"
{
#line 489 "superhomogeneous.m"
  {
#line 489 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 489 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__RHS_35;
#line 489 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_48_48;
#line 489 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_49_49;
#line 489 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_50_50;

#line 490 "superhomogeneous.m"
    {
#line 490 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__RHS0_22, &hlds__make_hlds__superhomogeneous__RHS_35, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_50_50);
    }
#line 491 "superhomogeneous.m"
    {
#line 491 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__LHSVar_21, hlds__make_hlds__superhomogeneous__RHS_35, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_50_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47);
#line 491 "superhomogeneous.m"
      return;
    }
#line 489 "superhomogeneous.m"
  }
#line 479 "superhomogeneous.m"
}

#line 462 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LHS0_21,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 462 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_37,
#line 462 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_39,
#line 462 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_40,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_41,
#line 462 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_42,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_43,
#line 462 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_44,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_45,
#line 462 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_46,
#line 462 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_47,
#line 462 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_48)
#line 462 "superhomogeneous.m"
{
#line 472 "superhomogeneous.m"
  {
#line 472 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 472 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__LHS_35;
#line 472 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__RHS_36;
#line 472 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_49_49;
#line 472 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_50_50;
#line 472 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51_51;
#line 472 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_52_52;
#line 472 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53;
#line 472 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_54_54;

#line 473 "superhomogeneous.m"
    {
#line 473 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__LHS0_21, &hlds__make_hlds__superhomogeneous__LHS_35, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51_51);
    }
#line 474 "superhomogeneous.m"
    {
#line 474 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__RHS0_22, &hlds__make_hlds__superhomogeneous__RHS_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_49_49, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_50_50, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_54_54);
    }
#line 475 "superhomogeneous.m"
    {
#line 475 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__LHS_35, hlds__make_hlds__superhomogeneous__RHS_36, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_54_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_48);
#line 475 "superhomogeneous.m"
      return;
    }
#line 472 "superhomogeneous.m"
  }
#line 462 "superhomogeneous.m"
}

#line 423 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_20,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_21,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContext_23,
#line 423 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__ArgNum_25,
#line 423 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_26,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42,
#line 423 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44,
#line 423 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46,
#line 423 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48,
#line 423 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50,
#line 423 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51,
#line 423 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52,
#line 423 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53)
#line 423 "superhomogeneous.m"
{
#line 438 "superhomogeneous.m"
  {
#line 438 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 438 "superhomogeneous.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_21)) == (MR_mktag((MR_Integer) 0))))
#line 451 "superhomogeneous.m"
      {
#line 451 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YFunctor_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 0)));
#line 451 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 1)));
#line 451 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 2)));
#line 451 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__MainContext_65;
#line 451 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__SubContext_66;

#line 1242 "superhomogeneous.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__ArgContext_23)) == (MR_mktag((MR_Integer) 1))))
#line 1252 "superhomogeneous.m"
          {
#line 1252 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__PredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));

#line 1253 "superhomogeneous.m"
            {
#line 1253 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__MainContext_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1253 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_65, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__PredId_76));
#line 1253 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_65, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1253 "superhomogeneous.m"
            }
#line 1254 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__SubContext_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1252 "superhomogeneous.m"
          }
#line 1242 "superhomogeneous.m"
        else
#line 1242 "superhomogeneous.m"
          if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__ArgContext_23)) == (MR_mktag((MR_Integer) 2))))
#line 1256 "superhomogeneous.m"
            {
#line 1256 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__ConsId_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
#line 1256 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__SubContexts0_78;
#line 1256 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__SubContext_79;

#line 1256 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__MainContext_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));
#line 1256 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__SubContexts0_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 2)));
#line 1257 "superhomogeneous.m"
              {
#line 1257 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__SubContext_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_79, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_77));
#line 1257 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_79, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1257 "superhomogeneous.m"
              }
#line 1258 "superhomogeneous.m"
              {
#line 1258 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__SubContext_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_66, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_79));
#line 1258 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_66, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContexts0_78));
#line 1258 "superhomogeneous.m"
              }
#line 1256 "superhomogeneous.m"
            }
#line 1242 "superhomogeneous.m"
          else
#line 1242 "superhomogeneous.m"
            {
#line 1242 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
#line 1242 "superhomogeneous.m"
              MR_Integer hlds__make_hlds__superhomogeneous__Arity_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));

#line 1243 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__PredOrFunc_74 == (MR_Integer) 1);
#line 1243 "superhomogeneous.m"
              if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1243 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__ArgNum_25 == hlds__make_hlds__superhomogeneous__Arity_75);
#line 1246 "superhomogeneous.m"
              if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1245 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__MainContext_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1246 "superhomogeneous.m"
              else
#line 1248 "superhomogeneous.m"
                {
#line 1248 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__MainContext_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1248 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MainContext_65, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1248 "superhomogeneous.m"
                }
#line 1250 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__SubContext_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1242 "superhomogeneous.m"
            }
#line 454 "superhomogeneous.m"
        {
#line 454 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__XVar_20, hlds__make_hlds__superhomogeneous__YFunctor_39, hlds__make_hlds__superhomogeneous__YArgTerms_40, hlds__make_hlds__superhomogeneous__YFunctorContext_41, hlds__make_hlds__superhomogeneous__Context_22, hlds__make_hlds__superhomogeneous__MainContext_65, hlds__make_hlds__superhomogeneous__SubContext_66, (MR_Integer) 0, hlds__make_hlds__superhomogeneous__Expansion_26, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53);
#line 454 "superhomogeneous.m"
          return;
        }
#line 451 "superhomogeneous.m"
      }
#line 438 "superhomogeneous.m"
    else
#line 438 "superhomogeneous.m"
      {
#line 438 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 0)));
#line 438 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YVarContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 1)));
#line 438 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__GoalCord_35;

#line 439 "superhomogeneous.m"
        {
#line 439 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_20)), ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_33)));
        }
#line 442 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 441 "superhomogeneous.m"
          {
#line 441 "superhomogeneous.m"
            {
#line 441 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__GoalCord_35 = mercury__cord__init_0_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
            }
#line 441 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50;
#line 441 "superhomogeneous.m"
          }
#line 442 "superhomogeneous.m"
        else
#line 444 "superhomogeneous.m"
          {
#line 444 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MainContext_36;
#line 444 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__SubContext_37;
#line 444 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Goal_38;
#line 444 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_61_61;

#line 1242 "superhomogeneous.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__ArgContext_23)) == (MR_mktag((MR_Integer) 1))))
#line 1252 "superhomogeneous.m"
              {
#line 1252 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__PredId_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));

#line 1253 "superhomogeneous.m"
                {
#line 1253 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__MainContext_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1253 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_36, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__PredId_86));
#line 1253 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_36, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1253 "superhomogeneous.m"
                }
#line 1254 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__SubContext_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1252 "superhomogeneous.m"
              }
#line 1242 "superhomogeneous.m"
            else
#line 1242 "superhomogeneous.m"
              if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__ArgContext_23)) == (MR_mktag((MR_Integer) 2))))
#line 1256 "superhomogeneous.m"
                {
#line 1256 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__ConsId_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
#line 1256 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__SubContexts0_88;
#line 1256 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__SubContext_89;

#line 1256 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__MainContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));
#line 1256 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__SubContexts0_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 2)));
#line 1257 "superhomogeneous.m"
                  {
#line 1257 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__SubContext_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_89, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_87));
#line 1257 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_89, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1257 "superhomogeneous.m"
                  }
#line 1258 "superhomogeneous.m"
                  {
#line 1258 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__SubContext_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_37, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_89));
#line 1258 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_37, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContexts0_88));
#line 1258 "superhomogeneous.m"
                  }
#line 1256 "superhomogeneous.m"
                }
#line 1242 "superhomogeneous.m"
              else
#line 1242 "superhomogeneous.m"
                {
#line 1242 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
#line 1242 "superhomogeneous.m"
                  MR_Integer hlds__make_hlds__superhomogeneous__Arity_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));

#line 1243 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__PredOrFunc_84 == (MR_Integer) 1);
#line 1243 "superhomogeneous.m"
                  if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1243 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__ArgNum_25 == hlds__make_hlds__superhomogeneous__Arity_85);
#line 1246 "superhomogeneous.m"
                  if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1245 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__MainContext_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1246 "superhomogeneous.m"
                  else
#line 1248 "superhomogeneous.m"
                    {
#line 1248 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__MainContext_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1248 "superhomogeneous.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MainContext_36, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1248 "superhomogeneous.m"
                    }
#line 1250 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__SubContext_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1242 "superhomogeneous.m"
                }
#line 445 "superhomogeneous.m"
            {
#line 445 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 445 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_33));
#line 445 "superhomogeneous.m"
            }
#line 445 "superhomogeneous.m"
            {
#line 445 "superhomogeneous.m"
              hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_20, hlds__make_hlds__superhomogeneous__V_61_61, hlds__make_hlds__superhomogeneous__YVarContext_34, hlds__make_hlds__superhomogeneous__MainContext_36, hlds__make_hlds__superhomogeneous__SubContext_37, (MR_Integer) 0, &hlds__make_hlds__superhomogeneous__Goal_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51);
            }
#line 447 "superhomogeneous.m"
            {
#line 447 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__GoalCord_35 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_38)));
            }
#line 444 "superhomogeneous.m"
          }
#line 449 "superhomogeneous.m"
        {
#line 449 "superhomogeneous.m"
          MR_Word base;
#line 449 "superhomogeneous.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 449 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Expansion_26 = base;
#line 449 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_35));
#line 449 "superhomogeneous.m"
        }
#line 449 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42;
#line 449 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44;
#line 449 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46;
#line 449 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48;
#line 449 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52;
#line 438 "superhomogeneous.m"
      }
#line 438 "superhomogeneous.m"
  }
#line 423 "superhomogeneous.m"
}

#line 390 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVars_19,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerms_20,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContexts_21,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 390 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansions_24,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40,
#line 390 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42,
#line 390 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44,
#line 390 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46,
#line 390 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48,
#line 390 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49,
#line 390 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50,
#line 390 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51)
#line 390 "superhomogeneous.m"
{
#line 407 "superhomogeneous.m"
  {
#line 407 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__XVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 402 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 402 "superhomogeneous.m"
      {
#line 403 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__YTerms_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 404 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__ArgContexts_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "superhomogeneous.m"
      }
#line 407 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 406 "superhomogeneous.m"
      {
#line 406 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__Expansions_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50;
#line 406 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48;
#line 406 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46;
#line 406 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44;
#line 406 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42;
#line 406 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40;
#line 406 "superhomogeneous.m"
      }
#line 407 "superhomogeneous.m"
    else
#line 419 "superhomogeneous.m"
      {
#line 419 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadXVar_31;
#line 419 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TailXVars_32;
#line 419 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadYTerm_33;
#line 419 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TailYTerms_34;
#line 419 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__HeadArgNumber_35;
#line 419 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadArgContext_36;
#line 419 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TailArgContexts_37;
#line 408 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_52_52;

#line 408 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__XVars_19)) == (MR_mktag((MR_Integer) 1)));
#line 408 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 408 "superhomogeneous.m"
          {
#line 408 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__HeadXVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XVars_19, (MR_Integer) 0)));
#line 408 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__TailXVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XVars_19, (MR_Integer) 1)));
#line 409 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerms_20)) == (MR_mktag((MR_Integer) 1)));
#line 409 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 409 "superhomogeneous.m"
              {
#line 409 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__HeadYTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerms_20, (MR_Integer) 0)));
#line 409 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__TailYTerms_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerms_20, (MR_Integer) 1)));
#line 410 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__ArgContexts_21)) == (MR_mktag((MR_Integer) 1)));
#line 410 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 410 "superhomogeneous.m"
                  {
#line 410 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_21, (MR_Integer) 0)));
#line 410 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__TailArgContexts_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_21, (MR_Integer) 1)));
#line 410 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__HeadArgNumber_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_52_52, (MR_Integer) 0)));
#line 410 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__HeadArgContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_52_52, (MR_Integer) 1)));
#line 410 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 410 "superhomogeneous.m"
                  }
#line 409 "superhomogeneous.m"
              }
#line 408 "superhomogeneous.m"
          }
#line 419 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 414 "superhomogeneous.m"
          {
#line 414 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HeadExpansion_38;
#line 414 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TailExpansions_39;
#line 414 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53;
#line 414 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_54_54;
#line 414 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_55_55;
#line 414 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_56_56;
#line 414 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_57_57;
#line 414 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_58_58;

#line 412 "superhomogeneous.m"
            {
#line 412 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__HeadXVar_31, hlds__make_hlds__superhomogeneous__HeadYTerm_33, hlds__make_hlds__superhomogeneous__Context_22, hlds__make_hlds__superhomogeneous__HeadArgContext_36, hlds__make_hlds__superhomogeneous__HeadArgNumber_35, &hlds__make_hlds__superhomogeneous__HeadExpansion_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_54_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_55_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_56_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_57_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_58_58);
            }
#line 415 "superhomogeneous.m"
            {
#line 415 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(hlds__make_hlds__superhomogeneous__TailXVars_32, hlds__make_hlds__superhomogeneous__TailYTerms_34, hlds__make_hlds__superhomogeneous__TailArgContexts_37, hlds__make_hlds__superhomogeneous__Context_22, &hlds__make_hlds__superhomogeneous__TailExpansions_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_54_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_55_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_56_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_57_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51);
            }
#line 418 "superhomogeneous.m"
            {
#line 418 "superhomogeneous.m"
              MR_Word base;
#line 418 "superhomogeneous.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Expansions_24 = base;
#line 418 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HeadExpansion_38));
#line 418 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TailExpansions_39));
#line 418 "superhomogeneous.m"
            }
#line 414 "superhomogeneous.m"
          }
#line 419 "superhomogeneous.m"
        else
#line 420 "superhomogeneous.m"
          {
#line 420 "superhomogeneous.m"
            {
#line 420 "superhomogeneous.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.do_arg_unifications_with_contexts\'/18", (MR_String) "length mismatch");
#line 420 "superhomogeneous.m"
              return;
            }
#line 420 "superhomogeneous.m"
          }
#line 419 "superhomogeneous.m"
      }
#line 407 "superhomogeneous.m"
  }
#line 390 "superhomogeneous.m"
}

#line 367 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 367 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__5_5,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18,
#line 367 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19,
#line 367 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20)
#line 367 "superhomogeneous.m"
{
#line 375 "superhomogeneous.m"
  {
#line 375 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 375 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "superhomogeneous.m"
      {
#line 376 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 376 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 377 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19;
#line 377 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17;
#line 377 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15;
#line 377 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13;
#line 376 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11;
#line 376 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9;
#line 375 "superhomogeneous.m"
      }
#line 375 "superhomogeneous.m"
    else
#line 380 "superhomogeneous.m"
      {
#line 380 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YTerm_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 380 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YTerms_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 380 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__XVar_51;
#line 380 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__XVars_52;
#line 380 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Expansion_53;
#line 380 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Expansions_54;
#line 380 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_74_74;
#line 380 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75;
#line 380 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_76_76;
#line 380 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_77_77;
#line 380 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_78_78;
#line 380 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_79_79;
#line 380 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_80_80;
#line 380 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_81_81;
#line 380 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__V_82_82;

#line 381 "superhomogeneous.m"
        {
#line 381 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__YTerm_44, &hlds__make_hlds__superhomogeneous__XVar_51, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_74_74);
        }
#line 382 "superhomogeneous.m"
        {
#line 382 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_51));
#line 382 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6));
#line 382 "superhomogeneous.m"
        }
#line 383 "superhomogeneous.m"
        {
#line 383 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__XVar_51, hlds__make_hlds__superhomogeneous__YTerm_44, hlds__make_hlds__superhomogeneous__HeadVar__2_2, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__HeadVar__5_5, &hlds__make_hlds__superhomogeneous__Expansion_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_77_77, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_74_74, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_78_78, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_79_79, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_80_80, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_81_81);
        }
#line 387 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__V_82_82 = (hlds__make_hlds__superhomogeneous__HeadVar__5_5 + (MR_Integer) 1);
#line 386 "superhomogeneous.m"
        {
#line 386 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__YTerms_45, hlds__make_hlds__superhomogeneous__HeadVar__2_2, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__V_82_82, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75, &hlds__make_hlds__superhomogeneous__XVars_52, &hlds__make_hlds__superhomogeneous__Expansions_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_77_77, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_78_78, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_79_79, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_80_80, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_81_81, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20);
        }
#line 379 "superhomogeneous.m"
        {
#line 379 "superhomogeneous.m"
          MR_Word base;
#line 379 "superhomogeneous.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
#line 379 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_51));
#line 379 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVars_52));
#line 379 "superhomogeneous.m"
        }
#line 379 "superhomogeneous.m"
        {
#line 379 "superhomogeneous.m"
          MR_Word base;
#line 379 "superhomogeneous.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = base;
#line 379 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansion_53));
#line 379 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansions_54));
#line 379 "superhomogeneous.m"
        }
#line 380 "superhomogeneous.m"
      }
#line 375 "superhomogeneous.m"
  }
#line 367 "superhomogeneous.m"
}

#line 338 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
#line 338 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__6_6,
#line 338 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8,
#line 338 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10,
#line 338 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
#line 338 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14,
#line 338 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
#line 338 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
#line 338 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 338 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19)
#line 338 "superhomogeneous.m"
{
#line 346 "superhomogeneous.m"
  {
#line 346 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 346 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 346 "superhomogeneous.m"
      if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 346 "superhomogeneous.m"
        {
#line 347 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18;
#line 348 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16;
#line 348 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14;
#line 348 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12;
#line 347 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10;
#line 347 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8;
#line 346 "superhomogeneous.m"
        }
#line 346 "superhomogeneous.m"
      else
#line 351 "superhomogeneous.m"
        {
#line 350 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 352 "superhomogeneous.m"
          {
#line 352 "superhomogeneous.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.do_arg_unifications\'/19", (MR_String) "length mismatch");
#line 352 "superhomogeneous.m"
            return;
          }
#line 351 "superhomogeneous.m"
        }
#line 346 "superhomogeneous.m"
    else
#line 346 "superhomogeneous.m"
      {
#line 346 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 346 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));

#line 346 "superhomogeneous.m"
        if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 355 "superhomogeneous.m"
          {
#line 354 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 356 "superhomogeneous.m"
            {
#line 356 "superhomogeneous.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.do_arg_unifications\'/19", (MR_String) "length mismatch");
#line 356 "superhomogeneous.m"
              return;
            }
#line 355 "superhomogeneous.m"
          }
#line 346 "superhomogeneous.m"
        else
#line 359 "superhomogeneous.m"
          {
#line 359 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YTerm_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 359 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YTerms_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 359 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Expansion_104;
#line 359 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Expansions_105;
#line 359 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_124_124;
#line 359 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_125_125;
#line 359 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_126_126;
#line 359 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_127_127;
#line 359 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_128_128;
#line 359 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129;
#line 359 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__V_130_130;

#line 360 "superhomogeneous.m"
            {
#line 360 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__V_139_139, hlds__make_hlds__superhomogeneous__YTerm_98, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__HeadVar__4_4, hlds__make_hlds__superhomogeneous__HeadVar__6_6, &hlds__make_hlds__superhomogeneous__Expansion_104, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_124_124, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_125_125, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_126_126, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_127_127, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_128_128, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129);
            }
#line 363 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_130_130 = (hlds__make_hlds__superhomogeneous__HeadVar__6_6 + (MR_Integer) 1);
#line 363 "superhomogeneous.m"
            {
#line 363 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__V_138_138, hlds__make_hlds__superhomogeneous__YTerms_99, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__HeadVar__4_4, hlds__make_hlds__superhomogeneous__V_130_130, &hlds__make_hlds__superhomogeneous__Expansions_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_124_124, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_125_125, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_126_126, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_127_127, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_128_128, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);
            }
#line 358 "superhomogeneous.m"
            {
#line 358 "superhomogeneous.m"
              MR_Word base;
#line 358 "superhomogeneous.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
#line 358 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansion_104));
#line 358 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansions_105));
#line 358 "superhomogeneous.m"
            }
#line 359 "superhomogeneous.m"
          }
#line 346 "superhomogeneous.m"
      }
#line 346 "superhomogeneous.m"
  }
#line 338 "superhomogeneous.m"
}

#line 177 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(
#line 177 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 177 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 177 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3)
#line 177 "superhomogeneous.m"
{
#line 177 "superhomogeneous.m"
  {
#line 177 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 177 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_13 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;
#line 177 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_14 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__3_3;

#line 177 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_13 == hlds__make_hlds__superhomogeneous__CastY_14);
#line 177 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 5861 "hlds.make_hlds.superhomogeneous.c"
      *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "superhomogeneous.m"
    else
#line 177 "superhomogeneous.m"
      if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "superhomogeneous.m"
        if ((hlds__make_hlds__superhomogeneous__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "superhomogeneous.m"
        else
#line 5873 "hlds.make_hlds.superhomogeneous.c"
          *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "superhomogeneous.m"
      else
#line 177 "superhomogeneous.m"
        {
#line 177 "superhomogeneous.m"
          MR_Integer hlds__make_hlds__superhomogeneous__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

#line 177 "superhomogeneous.m"
          if ((hlds__make_hlds__superhomogeneous__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5886 "hlds.make_hlds.superhomogeneous.c"
            *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "superhomogeneous.m"
          else
#line 177 "superhomogeneous.m"
            {
#line 177 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
#line 177 "superhomogeneous.m"
              MR_Integer hlds__make_hlds__superhomogeneous__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
#line 177 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__V_12_12;

#line 177 "superhomogeneous.m"
              {
#line 177 "superhomogeneous.m"
                mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0], &hlds__make_hlds__superhomogeneous__V_12_12, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_18_18)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_10_10)));
              }
#line 5904 "hlds.make_hlds.superhomogeneous.c"
              hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_12_12 == (MR_Integer) 0);
#line 177 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 177 "superhomogeneous.m"
              if (hlds__make_hlds__superhomogeneous__succeeded)
#line 177 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_12_12;
#line 177 "superhomogeneous.m"
              else
#line 177 "superhomogeneous.m"
                {
#line 177 "superhomogeneous.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__superhomogeneous__HeadVar__1_1, hlds__make_hlds__superhomogeneous__V_17_17, hlds__make_hlds__superhomogeneous__V_11_11);
#line 177 "superhomogeneous.m"
                  return;
                }
#line 177 "superhomogeneous.m"
            }
#line 177 "superhomogeneous.m"
        }
#line 177 "superhomogeneous.m"
  }
#line 177 "superhomogeneous.m"
}

#line 177 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(
#line 177 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 177 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2)
#line 177 "superhomogeneous.m"
{
#line 177 "superhomogeneous.m"
  {
#line 177 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 177 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_9 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__1_1;
#line 177 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_10 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;

#line 177 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_9 == hlds__make_hlds__superhomogeneous__CastY_10);
#line 177 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 177 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 177 "superhomogeneous.m"
    else
#line 177 "superhomogeneous.m"
      if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "superhomogeneous.m"
        {
#line 177 "superhomogeneous.m"
          MR_Integer hlds__make_hlds__superhomogeneous__CastX_3 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__1_1;
#line 177 "superhomogeneous.m"
          MR_Integer hlds__make_hlds__superhomogeneous__CastY_4 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;

#line 177 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastY_4 == hlds__make_hlds__superhomogeneous__CastX_3);
#line 177 "superhomogeneous.m"
        }
#line 177 "superhomogeneous.m"
      else
#line 177 "superhomogeneous.m"
        {
#line 177 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_11_11;
#line 177 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 177 "superhomogeneous.m"
          MR_Integer hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 177 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__V_7_7;
#line 177 "superhomogeneous.m"
          MR_Integer hlds__make_hlds__superhomogeneous__V_8_8;

#line 177 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 177 "superhomogeneous.m"
          if (hlds__make_hlds__superhomogeneous__succeeded)
#line 177 "superhomogeneous.m"
            {
#line 177 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 177 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 5994 "hlds.make_hlds.superhomogeneous.c"
              hlds__make_hlds__superhomogeneous__TypeInfo_11_11 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 5996 "hlds.make_hlds.superhomogeneous.c"
              {
#line 5998 "hlds.make_hlds.superhomogeneous.c"
                hlds__make_hlds__superhomogeneous__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_11_11, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_5_5)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_7_7)));
              }
#line 177 "superhomogeneous.m"
              if (hlds__make_hlds__superhomogeneous__succeeded)
#line 6003 "hlds.make_hlds.superhomogeneous.c"
                hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_6_6 == hlds__make_hlds__superhomogeneous__V_8_8);
#line 177 "superhomogeneous.m"
            }
#line 177 "superhomogeneous.m"
        }
#line 177 "superhomogeneous.m"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 177 "superhomogeneous.m"
  }
#line 177 "superhomogeneous.m"
}

#line 181 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(
#line 181 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 181 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 181 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3)
#line 181 "superhomogeneous.m"
{
#line 181 "superhomogeneous.m"
  {
#line 181 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 181 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_9 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;
#line 181 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_10 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__3_3;

#line 181 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_9 == hlds__make_hlds__superhomogeneous__CastY_10);
#line 181 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 6040 "hlds.make_hlds.superhomogeneous.c"
      *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
#line 181 "superhomogeneous.m"
    else
#line 181 "superhomogeneous.m"
      {
#line 181 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 181 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 181 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
#line 181 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
#line 181 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_8_8;

#line 181 "superhomogeneous.m"
        {
#line 181 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(&hlds__make_hlds__superhomogeneous__V_8_8, hlds__make_hlds__superhomogeneous__V_4_4, hlds__make_hlds__superhomogeneous__V_6_6);
        }
#line 6062 "hlds.make_hlds.superhomogeneous.c"
        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_8_8 == (MR_Integer) 0);
#line 181 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 181 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 181 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_8_8;
#line 181 "superhomogeneous.m"
        else
#line 181 "superhomogeneous.m"
          {
#line 181 "superhomogeneous.m"
            {
#line 181 "superhomogeneous.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_5_5)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_7_7)));
#line 181 "superhomogeneous.m"
              return;
            }
#line 181 "superhomogeneous.m"
          }
#line 181 "superhomogeneous.m"
      }
#line 181 "superhomogeneous.m"
  }
#line 181 "superhomogeneous.m"
}

#line 181 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(
#line 181 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 181 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2)
#line 181 "superhomogeneous.m"
{
#line 181 "superhomogeneous.m"
  {
#line 181 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 181 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_7 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__1_1;
#line 181 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_8 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;

#line 181 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_7 == hlds__make_hlds__superhomogeneous__CastY_8);
#line 181 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 181 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 181 "superhomogeneous.m"
    else
#line 181 "superhomogeneous.m"
      {
#line 181 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_9_9;
#line 181 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 181 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 181 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 181 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));

#line 6129 "hlds.make_hlds.superhomogeneous.c"
        {
#line 6131 "hlds.make_hlds.superhomogeneous.c"
          hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(hlds__make_hlds__superhomogeneous__V_3_3, hlds__make_hlds__superhomogeneous__V_5_5);
        }
#line 181 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 181 "superhomogeneous.m"
          {
#line 6138 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__TypeInfo_9_9 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1];
#line 6140 "hlds.make_hlds.superhomogeneous.c"
            {
#line 6142 "hlds.make_hlds.superhomogeneous.c"
              return hlds__make_hlds__superhomogeneous__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_9_9, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_4_4)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_6_6)));
            }
#line 181 "superhomogeneous.m"
          }
#line 181 "superhomogeneous.m"
      }
#line 181 "superhomogeneous.m"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 181 "superhomogeneous.m"
  }
#line 181 "superhomogeneous.m"
}

#line 36 "superhomogeneous.m"
void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0(
#line 36 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 36 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 36 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3)
#line 36 "superhomogeneous.m"
{
#line 36 "superhomogeneous.m"
  {
#line 36 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 36 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_43 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;
#line 36 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_44 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__3_3;

#line 36 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_43 == hlds__make_hlds__superhomogeneous__CastY_44);
#line 36 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 6180 "hlds.make_hlds.superhomogeneous.c"
      *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "superhomogeneous.m"
    else
#line 36 "superhomogeneous.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 36 "superhomogeneous.m"
        {
#line 36 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "superhomogeneous.m"
          if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 36 "superhomogeneous.m"
            {
#line 36 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));

#line 36 "superhomogeneous.m"
              {
#line 36 "superhomogeneous.m"
                hlds__hlds_pred____Compare____call_id_0_0(hlds__make_hlds__superhomogeneous__HeadVar__1_1, hlds__make_hlds__superhomogeneous__V_51_51, hlds__make_hlds__superhomogeneous__V_21_21);
#line 36 "superhomogeneous.m"
                return;
              }
#line 36 "superhomogeneous.m"
            }
#line 36 "superhomogeneous.m"
          else
#line 36 "superhomogeneous.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6211 "hlds.make_hlds.superhomogeneous.c"
              *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "superhomogeneous.m"
            else
#line 6215 "hlds.make_hlds.superhomogeneous.c"
              *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "superhomogeneous.m"
        }
#line 36 "superhomogeneous.m"
      else
#line 36 "superhomogeneous.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 36 "superhomogeneous.m"
          {
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 2)));
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "superhomogeneous.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6234 "hlds.make_hlds.superhomogeneous.c"
              *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "superhomogeneous.m"
            else
#line 36 "superhomogeneous.m"
              if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 36 "superhomogeneous.m"
                {
#line 36 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
#line 36 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
#line 36 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 2)));
#line 36 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__V_41_41;

#line 36 "superhomogeneous.m"
                  {
#line 36 "superhomogeneous.m"
                    parse_tree__prog_data____Compare____cons_id_0_0(&hlds__make_hlds__superhomogeneous__V_41_41, hlds__make_hlds__superhomogeneous__V_54_54, hlds__make_hlds__superhomogeneous__V_38_38);
                  }
#line 6256 "hlds.make_hlds.superhomogeneous.c"
                  hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_41_41 == (MR_Integer) 0);
#line 36 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 36 "superhomogeneous.m"
                  if (hlds__make_hlds__superhomogeneous__succeeded)
#line 36 "superhomogeneous.m"
                    *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_41_41;
#line 36 "superhomogeneous.m"
                  else
#line 36 "superhomogeneous.m"
                    {
#line 36 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__V_42_42;

#line 36 "superhomogeneous.m"
                      {
#line 36 "superhomogeneous.m"
                        hlds__hlds_goal____Compare____unify_main_context_0_0(&hlds__make_hlds__superhomogeneous__V_42_42, hlds__make_hlds__superhomogeneous__V_53_53, hlds__make_hlds__superhomogeneous__V_39_39);
                      }
#line 6276 "hlds.make_hlds.superhomogeneous.c"
                      hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_42_42 == (MR_Integer) 0);
#line 36 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 36 "superhomogeneous.m"
                      if (hlds__make_hlds__superhomogeneous__succeeded)
#line 36 "superhomogeneous.m"
                        *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_42_42;
#line 36 "superhomogeneous.m"
                      else
#line 36 "superhomogeneous.m"
                        {
#line 36 "superhomogeneous.m"
                          {
#line 36 "superhomogeneous.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[3], hlds__make_hlds__superhomogeneous__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_52_52)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_40_40)));
#line 36 "superhomogeneous.m"
                            return;
                          }
#line 36 "superhomogeneous.m"
                        }
#line 36 "superhomogeneous.m"
                    }
#line 36 "superhomogeneous.m"
                }
#line 36 "superhomogeneous.m"
              else
#line 6303 "hlds.make_hlds.superhomogeneous.c"
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "superhomogeneous.m"
          }
#line 36 "superhomogeneous.m"
        else
#line 36 "superhomogeneous.m"
          {
#line 36 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "superhomogeneous.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6318 "hlds.make_hlds.superhomogeneous.c"
              *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "superhomogeneous.m"
            else
#line 36 "superhomogeneous.m"
              if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6324 "hlds.make_hlds.superhomogeneous.c"
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "superhomogeneous.m"
              else
#line 36 "superhomogeneous.m"
                {
#line 36 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
#line 36 "superhomogeneous.m"
                  MR_Integer hlds__make_hlds__superhomogeneous__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
#line 36 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__V_8_8;
#line 36 "superhomogeneous.m"
                  MR_Integer hlds__make_hlds__superhomogeneous__V_57_57 = (MR_Integer) hlds__make_hlds__superhomogeneous__V_56_56;
#line 36 "superhomogeneous.m"
                  MR_Integer hlds__make_hlds__superhomogeneous__V_58_58 = (MR_Integer) hlds__make_hlds__superhomogeneous__V_6_6;

#line 36 "superhomogeneous.m"
                  {
#line 36 "superhomogeneous.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__superhomogeneous__V_8_8, hlds__make_hlds__superhomogeneous__V_57_57, hlds__make_hlds__superhomogeneous__V_58_58);
                  }
#line 6346 "hlds.make_hlds.superhomogeneous.c"
                  hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_8_8 == (MR_Integer) 0);
#line 36 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 36 "superhomogeneous.m"
                  if (hlds__make_hlds__superhomogeneous__succeeded)
#line 36 "superhomogeneous.m"
                    *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_8_8;
#line 36 "superhomogeneous.m"
                  else
#line 36 "superhomogeneous.m"
                    {
#line 36 "superhomogeneous.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__superhomogeneous__HeadVar__1_1, hlds__make_hlds__superhomogeneous__V_55_55, hlds__make_hlds__superhomogeneous__V_7_7);
#line 36 "superhomogeneous.m"
                      return;
                    }
#line 36 "superhomogeneous.m"
                }
#line 36 "superhomogeneous.m"
          }
#line 36 "superhomogeneous.m"
  }
#line 36 "superhomogeneous.m"
}

#line 36 "superhomogeneous.m"
MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0(
#line 36 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 36 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2)
#line 36 "superhomogeneous.m"
{
#line 36 "superhomogeneous.m"
  {
#line 36 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 36 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_15 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__1_1;
#line 36 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_16 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;

#line 36 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_15 == hlds__make_hlds__superhomogeneous__CastY_16);
#line 36 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 36 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 36 "superhomogeneous.m"
    else
#line 36 "superhomogeneous.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 36 "superhomogeneous.m"
        {
#line 36 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 36 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__V_8_8;

#line 36 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 36 "superhomogeneous.m"
          if (hlds__make_hlds__superhomogeneous__succeeded)
#line 36 "superhomogeneous.m"
            {
#line 36 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 6415 "hlds.make_hlds.superhomogeneous.c"
              {
#line 6417 "hlds.make_hlds.superhomogeneous.c"
                return hlds__make_hlds__superhomogeneous__succeeded = hlds__hlds_pred____Unify____call_id_0_0(hlds__make_hlds__superhomogeneous__V_7_7, hlds__make_hlds__superhomogeneous__V_8_8);
              }
#line 36 "superhomogeneous.m"
            }
#line 36 "superhomogeneous.m"
        }
#line 36 "superhomogeneous.m"
      else
#line 36 "superhomogeneous.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 36 "superhomogeneous.m"
          {
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_20_20;
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 2)));
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_12_12;
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_13_13;
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_14_14;

#line 36 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 36 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 36 "superhomogeneous.m"
              {
#line 36 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 36 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 36 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 2)));
#line 6457 "hlds.make_hlds.superhomogeneous.c"
                {
#line 6459 "hlds.make_hlds.superhomogeneous.c"
                  hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__make_hlds__superhomogeneous__V_9_9, hlds__make_hlds__superhomogeneous__V_12_12);
                }
#line 36 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 36 "superhomogeneous.m"
                  {
#line 6466 "hlds.make_hlds.superhomogeneous.c"
                    {
#line 6468 "hlds.make_hlds.superhomogeneous.c"
                      hlds__make_hlds__superhomogeneous__succeeded = hlds__hlds_goal____Unify____unify_main_context_0_0(hlds__make_hlds__superhomogeneous__V_10_10, hlds__make_hlds__superhomogeneous__V_13_13);
                    }
#line 36 "superhomogeneous.m"
                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 36 "superhomogeneous.m"
                      {
#line 6475 "hlds.make_hlds.superhomogeneous.c"
                        hlds__make_hlds__superhomogeneous__TypeInfo_20_20 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[3];
#line 6477 "hlds.make_hlds.superhomogeneous.c"
                        {
#line 6479 "hlds.make_hlds.superhomogeneous.c"
                          return hlds__make_hlds__superhomogeneous__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_20_20, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_11_11)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_14_14)));
                        }
#line 36 "superhomogeneous.m"
                      }
#line 36 "superhomogeneous.m"
                  }
#line 36 "superhomogeneous.m"
              }
#line 36 "superhomogeneous.m"
          }
#line 36 "superhomogeneous.m"
        else
#line 36 "superhomogeneous.m"
          {
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 36 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_5_5;
#line 36 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__V_6_6;

#line 36 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 36 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 36 "superhomogeneous.m"
              {
#line 36 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 36 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 6513 "hlds.make_hlds.superhomogeneous.c"
                hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_3_3 == hlds__make_hlds__superhomogeneous__V_5_5);
#line 36 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 6517 "hlds.make_hlds.superhomogeneous.c"
                  hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_4_4 == hlds__make_hlds__superhomogeneous__V_6_6);
#line 36 "superhomogeneous.m"
              }
#line 36 "superhomogeneous.m"
          }
#line 36 "superhomogeneous.m"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 36 "superhomogeneous.m"
  }
#line 36 "superhomogeneous.m"
}

#line 1328 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(
#line 1328 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Arg_6,
#line 1328 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Var_7,
#line 1328 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Vars0_8,
#line 1328 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
#line 1328 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13)
#line 1328 "superhomogeneous.m"
{
#line 1337 "superhomogeneous.m"
  {
#line 1337 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__Arg_6)) == (MR_mktag((MR_Integer) 1)));
#line 1337 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ArgVar_10;
#line 1333 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_11_11;
#line 1334 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_15_15;

#line 1333 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1333 "superhomogeneous.m"
      {
#line 1333 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__ArgVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_6, (MR_Integer) 0)));
#line 1333 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_6, (MR_Integer) 1)));
#line 6564 "hlds.make_hlds.superhomogeneous.c"
        hlds__make_hlds__superhomogeneous__TypeInfo_15_15 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 1334 "superhomogeneous.m"
        {
#line 1334 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_15_15, ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgVar_10)), hlds__make_hlds__superhomogeneous__Vars0_8);
        }
#line 1334 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 1333 "superhomogeneous.m"
      }
#line 1337 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1336 "superhomogeneous.m"
      {
#line 1336 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__Var_7 = hlds__make_hlds__superhomogeneous__ArgVar_10;
#line 1336 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12;
#line 1336 "superhomogeneous.m"
      }
#line 1337 "superhomogeneous.m"
    else
#line 1338 "superhomogeneous.m"
      {
#line 1338 "superhomogeneous.m"
        {
#line 1338 "superhomogeneous.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__Var_7, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13);
#line 1338 "superhomogeneous.m"
          return;
        }
#line 1338 "superhomogeneous.m"
      }
#line 1337 "superhomogeneous.m"
  }
#line 1328 "superhomogeneous.m"
}

#line 1270 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_9_p_0(
#line 1270 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 1270 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2,
#line 1270 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_3,
#line 1270 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4,
#line 1270 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_5,
#line 1270 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6,
#line 1270 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_7,
#line 1270 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8,
#line 1270 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_9)
#line 1270 "superhomogeneous.m"
{
#line 1275 "superhomogeneous.m"
  while (MR_TRUE)
#line 1275 "superhomogeneous.m"
    {
#line 1275 "superhomogeneous.m"
      /* tailcall optimized into a loop */
#line 1275 "superhomogeneous.m"
      {
#line 1275 "superhomogeneous.m"
        MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 1275 "superhomogeneous.m"
        if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1275 "superhomogeneous.m"
          {
#line 1276 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_9 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8;
#line 1276 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_7 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6;
#line 1276 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_5 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4;
#line 1275 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_3 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2;
#line 1275 "superhomogeneous.m"
          }
#line 1275 "superhomogeneous.m"
        else
#line 1278 "superhomogeneous.m"
          {
#line 1278 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 1278 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 1278 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Var_28;
#line 1278 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37;
#line 1278 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38_38;
#line 1278 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_39_39;
#line 1278 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40;
#line 1278 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Arg_57;
#line 1278 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60;
#line 1298 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ArgVar_58;
#line 1294 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_59_59;
#line 1295 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_29_64;

#line 1292 "superhomogeneous.m"
            {
#line 1292 "superhomogeneous.m"
              hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__Arg_22, &hlds__make_hlds__superhomogeneous__Arg_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_39_39);
            }
#line 1294 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__Arg_57)) == (MR_mktag((MR_Integer) 1)));
#line 1294 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1294 "superhomogeneous.m"
              {
#line 1294 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__ArgVar_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_57, (MR_Integer) 0)));
#line 1294 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_57, (MR_Integer) 1)));
#line 6695 "hlds.make_hlds.superhomogeneous.c"
                hlds__make_hlds__superhomogeneous__TypeInfo_29_64 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 1295 "superhomogeneous.m"
                {
#line 1295 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_29_64, ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgVar_58)), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2);
                }
#line 1295 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 1294 "superhomogeneous.m"
              }
#line 1298 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1297 "superhomogeneous.m"
              {
#line 1297 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Var_28 = hlds__make_hlds__superhomogeneous__ArgVar_58;
#line 1297 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60;
#line 1297 "superhomogeneous.m"
              }
#line 1298 "superhomogeneous.m"
            else
#line 1299 "superhomogeneous.m"
              {
#line 1299 "superhomogeneous.m"
                {
#line 1299 "superhomogeneous.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__make_hlds__superhomogeneous__Var_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37);
                }
#line 1299 "superhomogeneous.m"
              }
#line 1281 "superhomogeneous.m"
            {
#line 1281 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Var_28));
#line 1281 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2));
#line 1281 "superhomogeneous.m"
            }
#line 1282 "superhomogeneous.m"
            /* direct tailcall eliminated */
#line 1282 "superhomogeneous.m"
            {
#line 1282 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1 = hlds__make_hlds__superhomogeneous__Args_23;
#line 1282 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0__tmp_copy_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40;
#line 1282 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0__tmp_copy_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37;
#line 1282 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0__tmp_copy_6 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38_38;
#line 1282 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0__tmp_copy_8 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_39_39;

#line 1282 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0__tmp_copy_8;
#line 1282 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0__tmp_copy_6;
#line 1282 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0__tmp_copy_4;
#line 1282 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0__tmp_copy_2;
#line 1282 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1;
#line 1282 "superhomogeneous.m"
            }
#line 1282 "superhomogeneous.m"
            continue;
#line 1278 "superhomogeneous.m"
          }
#line 1275 "superhomogeneous.m"
      }
#line 1275 "superhomogeneous.m"
      break;
#line 1275 "superhomogeneous.m"
    }
#line 1270 "superhomogeneous.m"
}

#line 1200 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(
#line 1200 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ModuleInfo_1,
#line 1200 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 1200 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 1200 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
#line 1200 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__5_5,
#line 1200 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__6_6,
#line 1200 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 1200 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8)
#line 1200 "superhomogeneous.m"
{
#line 1205 "superhomogeneous.m"
  {
#line 1205 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 1205 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1205 "superhomogeneous.m"
      {
#line 1205 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1205 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1205 "superhomogeneous.m"
          {
#line 1205 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1205 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1205 "superhomogeneous.m"
              {
#line 1205 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1205 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1205 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1205 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1205 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 1205 "superhomogeneous.m"
              }
#line 1205 "superhomogeneous.m"
          }
#line 1205 "superhomogeneous.m"
      }
#line 1205 "superhomogeneous.m"
    else
#line 1208 "superhomogeneous.m"
      {
#line 1208 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 1208 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 1208 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__LambdaVar_13;
#line 1208 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__LambdaVars_14;
#line 1208 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Mode_15;
#line 1208 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Modes_16;
#line 1208 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__InputArgs0_21;
#line 1208 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__OutputArgs0_22;
#line 1208 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__InputLambdaVars0_23;
#line 1208 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24;

#line 1207 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1207 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1207 "superhomogeneous.m"
          {
#line 1207 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__LambdaVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
#line 1207 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__LambdaVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
#line 1207 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1207 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1207 "superhomogeneous.m"
              {
#line 1207 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__4_4, (MR_Integer) 0)));
#line 1207 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Modes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__4_4, (MR_Integer) 1)));
#line 1209 "superhomogeneous.m"
                {
#line 1209 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(hlds__make_hlds__superhomogeneous__ModuleInfo_1, hlds__make_hlds__superhomogeneous__Args_12, hlds__make_hlds__superhomogeneous__LambdaVars_14, hlds__make_hlds__superhomogeneous__Modes_16, &hlds__make_hlds__superhomogeneous__InputArgs0_21, &hlds__make_hlds__superhomogeneous__OutputArgs0_22, &hlds__make_hlds__superhomogeneous__InputLambdaVars0_23, &hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24);
                }
#line 1208 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1208 "superhomogeneous.m"
                  {
#line 1218 "superhomogeneous.m"
                    {
#line 1218 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__succeeded = check_hlds__mode_util__mode_is_undefined_2_p_0(hlds__make_hlds__superhomogeneous__ModuleInfo_1, hlds__make_hlds__superhomogeneous__Mode_15);
                    }
#line 1223 "superhomogeneous.m"
                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1219 "superhomogeneous.m"
                      {
#line 1219 "superhomogeneous.m"
                        {
#line 1219 "superhomogeneous.m"
                          MR_Word base;
#line 1219 "superhomogeneous.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "superhomogeneous.m"
                          *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = base;
#line 1219 "superhomogeneous.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arg_11));
#line 1219 "superhomogeneous.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputArgs0_21));
#line 1219 "superhomogeneous.m"
                        }
#line 1220 "superhomogeneous.m"
                        *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = hlds__make_hlds__superhomogeneous__OutputArgs0_22;
#line 1221 "superhomogeneous.m"
                        {
#line 1221 "superhomogeneous.m"
                          MR_Word base;
#line 1221 "superhomogeneous.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "superhomogeneous.m"
                          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
#line 1221 "superhomogeneous.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVar_13));
#line 1221 "superhomogeneous.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputLambdaVars0_23));
#line 1221 "superhomogeneous.m"
                        }
#line 1222 "superhomogeneous.m"
                        *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24;
#line 1219 "superhomogeneous.m"
                      }
#line 1223 "superhomogeneous.m"
                    else
#line 1228 "superhomogeneous.m"
                      {
#line 1223 "superhomogeneous.m"
                        {
#line 1223 "superhomogeneous.m"
                          hlds__make_hlds__superhomogeneous__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(hlds__make_hlds__superhomogeneous__ModuleInfo_1, hlds__make_hlds__superhomogeneous__Mode_15);
                        }
#line 1228 "superhomogeneous.m"
                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1224 "superhomogeneous.m"
                          {
#line 1224 "superhomogeneous.m"
                            *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = hlds__make_hlds__superhomogeneous__InputArgs0_21;
#line 1225 "superhomogeneous.m"
                            {
#line 1225 "superhomogeneous.m"
                              MR_Word base;
#line 1225 "superhomogeneous.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "superhomogeneous.m"
                              *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = base;
#line 1225 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arg_11));
#line 1225 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__OutputArgs0_22));
#line 1225 "superhomogeneous.m"
                            }
#line 1226 "superhomogeneous.m"
                            *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = hlds__make_hlds__superhomogeneous__InputLambdaVars0_23;
#line 1227 "superhomogeneous.m"
                            {
#line 1227 "superhomogeneous.m"
                              MR_Word base;
#line 1227 "superhomogeneous.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "superhomogeneous.m"
                              *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = base;
#line 1227 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVar_13));
#line 1227 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24));
#line 1227 "superhomogeneous.m"
                            }
#line 1224 "superhomogeneous.m"
                          }
#line 1228 "superhomogeneous.m"
                        else
#line 1229 "superhomogeneous.m"
                          {
#line 1229 "superhomogeneous.m"
                            {
#line 1229 "superhomogeneous.m"
                              MR_Word base;
#line 1229 "superhomogeneous.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "superhomogeneous.m"
                              *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = base;
#line 1229 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arg_11));
#line 1229 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputArgs0_21));
#line 1229 "superhomogeneous.m"
                            }
#line 1230 "superhomogeneous.m"
                            *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = hlds__make_hlds__superhomogeneous__OutputArgs0_22;
#line 1231 "superhomogeneous.m"
                            {
#line 1231 "superhomogeneous.m"
                              MR_Word base;
#line 1231 "superhomogeneous.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "superhomogeneous.m"
                              *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
#line 1231 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVar_13));
#line 1231 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputLambdaVars0_23));
#line 1231 "superhomogeneous.m"
                            }
#line 1232 "superhomogeneous.m"
                            *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24;
#line 1229 "superhomogeneous.m"
                          }
#line 1228 "superhomogeneous.m"
                      }
#line 1223 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 1208 "superhomogeneous.m"
                  }
#line 1207 "superhomogeneous.m"
              }
#line 1207 "superhomogeneous.m"
          }
#line 1208 "superhomogeneous.m"
      }
#line 1205 "superhomogeneous.m"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 1205 "superhomogeneous.m"
  }
#line 1200 "superhomogeneous.m"
}

#line 1013 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__X_26,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__UnificationPurity_27,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LambdaPurity_28,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Groundness_29,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_30,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Args0_32,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Modes_33,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Det_34,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_35,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_36,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_37,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_38,
#line 1013 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_39,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__OutsideSVarState_40,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82,
#line 1013 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84,
#line 1013 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86,
#line 1013 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88,
#line 1013 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89,
#line 1013 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90,
#line 1013 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91)
#line 1013 "superhomogeneous.m"
{
#line 1068 "superhomogeneous.m"
  {
#line 1068 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 1068 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__StateVar_46;

#line 1065 "superhomogeneous.m"
    {
#line 1065 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_3_p_0(hlds__make_hlds__superhomogeneous__PredOrFunc_30, hlds__make_hlds__superhomogeneous__Args0_32, &hlds__make_hlds__superhomogeneous__StateVar_46);
    }
#line 1068 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1066 "superhomogeneous.m"
      {
#line 1066 "superhomogeneous.m"
        {
#line 1066 "superhomogeneous.m"
          hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84, hlds__make_hlds__superhomogeneous__StateVar_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);
        }
#line 1067 "superhomogeneous.m"
        {
#line 1067 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Goal_39 = hlds__make_goal__true_goal_0_f_0();
        }
#line 1067 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88;
#line 1067 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86;
#line 1067 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84;
#line 1067 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82;
#line 1066 "superhomogeneous.m"
      }
#line 1068 "superhomogeneous.m"
    else
#line 1072 "superhomogeneous.m"
      {
#line 1072 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__StateVar_166;

#line 1068 "superhomogeneous.m"
        {
#line 1068 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_p_0(hlds__make_hlds__superhomogeneous__Args0_32, &hlds__make_hlds__superhomogeneous__StateVar_166);
        }
#line 1072 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1070 "superhomogeneous.m"
          {
#line 1069 "superhomogeneous.m"
            {
#line 1069 "superhomogeneous.m"
              hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84, hlds__make_hlds__superhomogeneous__StateVar_166, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);
            }
#line 1071 "superhomogeneous.m"
            {
#line 1071 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Goal_39 = hlds__make_goal__true_goal_0_f_0();
            }
#line 1071 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88;
#line 1071 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86;
#line 1071 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84;
#line 1071 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82;
#line 1070 "superhomogeneous.m"
          }
#line 1072 "superhomogeneous.m"
        else
#line 1075 "superhomogeneous.m"
          {
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_167_167;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_168_168;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_169_169;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Args_48;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__FinalSVarMap_49;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__InitialSVarState_50;
#line 1075 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__NumArgs_51;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__LambdaVars_52;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputArgs_57;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__OutputArgs_58;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputLambdaVars_59;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__OutputLambdaVars_60;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Substitution_61;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ArgContext_62;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HeadBefore0_63;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HeadBefore_64;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Body_65;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HeadAfter0_66;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HeadAfter_67;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__FinalSVarState_70;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HLDS_Goal0_71;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__QuantifiedArgs_72;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__QuantifiedVars0_74;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__QuantifiedVars_75;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_76;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HLDS_Goal_78;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__LambdaNonLocals_80;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__LambdaRHS_81;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_95_95;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_96_96;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_97_97;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_101_101;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_102_102;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_103_103;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_104_104;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_105_105;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_106_106;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_108_108;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_109_109;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_110_110;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_111_111;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_112_112;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_113_113;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_115_115;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_118_118;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_155_155;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_157_157;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_158_158;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_160_160;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_161_161;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_162_162;
#line 1075 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_163_163;
#line 1100 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputArgs0_53;
#line 1100 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__OutputArgs0_54;
#line 1100 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputLambdaVars0_55;
#line 1100 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__OutputLambdaVars0_56;

#line 1074 "superhomogeneous.m"
            {
#line 1074 "superhomogeneous.m"
              hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__Args0_32, &hlds__make_hlds__superhomogeneous__Args_48, &hlds__make_hlds__superhomogeneous__FinalSVarMap_49, hlds__make_hlds__superhomogeneous__OutsideSVarState_40, &hlds__make_hlds__superhomogeneous__InitialSVarState_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_95_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_96_96);
            }
#line 7285 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__TypeInfo_167_167 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2];
#line 1085 "superhomogeneous.m"
            {
#line 1085 "superhomogeneous.m"
              mercury__list__length_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_167_167, hlds__make_hlds__superhomogeneous__Args_48, &hlds__make_hlds__superhomogeneous__NumArgs_51);
            }
#line 7292 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__TypeCtorInfo_168_168 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1086 "superhomogeneous.m"
            {
#line 1086 "superhomogeneous.m"
              mercury__varset__new_vars_4_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_168_168, hlds__make_hlds__superhomogeneous__NumArgs_51, &hlds__make_hlds__superhomogeneous__LambdaVars_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_95_95, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_97_97);
            }
#line 1092 "superhomogeneous.m"
            {
#line 1092 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86, hlds__make_hlds__superhomogeneous__Args_48, hlds__make_hlds__superhomogeneous__LambdaVars_52, hlds__make_hlds__superhomogeneous__Modes_33, &hlds__make_hlds__superhomogeneous__NonOutputArgs0_53, &hlds__make_hlds__superhomogeneous__OutputArgs0_54, &hlds__make_hlds__superhomogeneous__NonOutputLambdaVars0_55, &hlds__make_hlds__superhomogeneous__OutputLambdaVars0_56);
            }
#line 1100 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1096 "superhomogeneous.m"
              {
#line 1096 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__NonOutputArgs_57 = hlds__make_hlds__superhomogeneous__NonOutputArgs0_53;
#line 1097 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__OutputArgs_58 = hlds__make_hlds__superhomogeneous__OutputArgs0_54;
#line 1098 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__NonOutputLambdaVars_59 = hlds__make_hlds__superhomogeneous__NonOutputLambdaVars0_55;
#line 1099 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__OutputLambdaVars_60 = hlds__make_hlds__superhomogeneous__OutputLambdaVars0_56;
#line 1096 "superhomogeneous.m"
              }
#line 1100 "superhomogeneous.m"
            else
#line 1101 "superhomogeneous.m"
              {
#line 1101 "superhomogeneous.m"
                {
#line 1101 "superhomogeneous.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.build_lambda_expression\'/25", (MR_String) "mismatched lists");
#line 1101 "superhomogeneous.m"
                  return;
                }
#line 1101 "superhomogeneous.m"
              }
#line 7331 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__TypeInfo_169_169 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 1104 "superhomogeneous.m"
            {
#line 1104 "superhomogeneous.m"
              mercury__map__init_1_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_169_169, hlds__make_hlds__superhomogeneous__TypeInfo_169_169, &hlds__make_hlds__superhomogeneous__Substitution_61);
            }
#line 1105 "superhomogeneous.m"
            {
#line 1105 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__ArgContext_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1105 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_62, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__PredOrFunc_30));
#line 1105 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_62, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__NumArgs_51));
#line 1105 "superhomogeneous.m"
            }
#line 1110 "superhomogeneous.m"
            {
#line 1110 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HeadBefore0_63 = hlds__make_goal__true_goal_0_f_0();
            }
#line 1111 "superhomogeneous.m"
            {
#line 1111 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__superhomogeneous__NonOutputLambdaVars_59, hlds__make_hlds__superhomogeneous__NonOutputArgs_57, hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__ArgContext_62, hlds__make_hlds__superhomogeneous__HeadBefore0_63, &hlds__make_hlds__superhomogeneous__HeadBefore_64, hlds__make_hlds__superhomogeneous__InitialSVarState_50, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_101_101, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_102_102, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_97_97, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_103_103, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_104_104, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_105_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_96_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_106_106);
            }
#line 1116 "superhomogeneous.m"
            {
#line 1116 "superhomogeneous.m"
              hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0((MR_Integer) 0, hlds__make_hlds__superhomogeneous__ParsedGoal_35, hlds__make_hlds__superhomogeneous__Substitution_61, &hlds__make_hlds__superhomogeneous__Body_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_101_101, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_108_108, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_102_102, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_109_109, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_103_103, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_110_110, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_104_104, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_111_111, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_105_105, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_112_112, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_106_106, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_113_113);
            }
#line 1123 "superhomogeneous.m"
            {
#line 1123 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HeadAfter0_66 = hlds__make_goal__true_goal_0_f_0();
            }
#line 1124 "superhomogeneous.m"
            {
#line 1124 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__superhomogeneous__OutputLambdaVars_60, hlds__make_hlds__superhomogeneous__OutputArgs_58, hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__ArgContext_62, hlds__make_hlds__superhomogeneous__HeadAfter0_66, &hlds__make_hlds__superhomogeneous__HeadAfter_67, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_108_108, &hlds__make_hlds__superhomogeneous__FinalSVarState_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_109_109, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_115_115, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_110_110, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_111_111, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_112_112, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_118_118, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_113_113, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);
            }
#line 1160 "superhomogeneous.m"
            {
#line 1160 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HeadAfter_67));
#line 1160 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1160 "superhomogeneous.m"
            }
#line 1160 "superhomogeneous.m"
            {
#line 1160 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Body_65));
#line 1160 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_157_157, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_158_158));
#line 1160 "superhomogeneous.m"
            }
#line 1160 "superhomogeneous.m"
            {
#line 1160 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_155_155, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HeadBefore_64));
#line 1160 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_155_155, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_157_157));
#line 1160 "superhomogeneous.m"
            }
#line 1159 "superhomogeneous.m"
            {
#line 1159 "superhomogeneous.m"
              hlds__make_hlds__state_var__svar_finish_lambda_body_8_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__FinalSVarMap_49, hlds__make_hlds__superhomogeneous__V_155_155, &hlds__make_hlds__superhomogeneous__HLDS_Goal0_71, hlds__make_hlds__superhomogeneous__InitialSVarState_50, hlds__make_hlds__superhomogeneous__FinalSVarState_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_115_115, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83);
            }
#line 1168 "superhomogeneous.m"
            if ((hlds__make_hlds__superhomogeneous__PredOrFunc_30 == (MR_Integer) 1))
#line 1170 "superhomogeneous.m"
              {
#line 1170 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous___ReturnValTerm_73;
#line 1170 "superhomogeneous.m"
                MR_Box hlds__make_hlds__superhomogeneous__conv0__ReturnValTerm_73;

#line 1170 "superhomogeneous.m"
                {
#line 1170 "superhomogeneous.m"
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_167_167, hlds__make_hlds__superhomogeneous__Args_48, &hlds__make_hlds__superhomogeneous__QuantifiedArgs_72, &hlds__make_hlds__superhomogeneous__conv0__ReturnValTerm_73);
                }
#line 1170 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous___ReturnValTerm_73 = ((MR_Word) hlds__make_hlds__superhomogeneous__conv0__ReturnValTerm_73);
#line 1170 "superhomogeneous.m"
              }
#line 1168 "superhomogeneous.m"
            else
#line 1167 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__QuantifiedArgs_72 = hlds__make_hlds__superhomogeneous__Args_48;
#line 1172 "superhomogeneous.m"
            {
#line 1172 "superhomogeneous.m"
              mercury__term__vars_list_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_168_168, hlds__make_hlds__superhomogeneous__QuantifiedArgs_72, &hlds__make_hlds__superhomogeneous__QuantifiedVars0_74);
            }
#line 1173 "superhomogeneous.m"
            {
#line 1173 "superhomogeneous.m"
              mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_169_169, hlds__make_hlds__superhomogeneous__QuantifiedVars0_74, &hlds__make_hlds__superhomogeneous__QuantifiedVars_75);
            }
#line 1175 "superhomogeneous.m"
            {
#line 1175 "superhomogeneous.m"
              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_36, &hlds__make_hlds__superhomogeneous__GoalInfo_76);
            }
#line 1176 "superhomogeneous.m"
            {
#line 1176 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1176 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__QuantifiedVars_75));
#line 1176 "superhomogeneous.m"
            }
#line 1176 "superhomogeneous.m"
            {
#line 1176 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "superhomogeneous.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1176 "superhomogeneous.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_160_160));
#line 1176 "superhomogeneous.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HLDS_Goal0_71));
#line 1176 "superhomogeneous.m"
            }
#line 1177 "superhomogeneous.m"
            {
#line 1177 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HLDS_Goal_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HLDS_Goal_78, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77));
#line 1177 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HLDS_Goal_78, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_76));
#line 1177 "superhomogeneous.m"
            }
#line 1183 "superhomogeneous.m"
            {
#line 1183 "superhomogeneous.m"
              hlds__goal_util__goal_vars_2_p_0(hlds__make_hlds__superhomogeneous__HLDS_Goal_78, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_161_161);
            }
#line 1184 "superhomogeneous.m"
            {
#line 1184 "superhomogeneous.m"
              parse_tree__set_of_var__delete_list_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_168_168, hlds__make_hlds__superhomogeneous__LambdaVars_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_161_161, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_162_162);
            }
#line 1185 "superhomogeneous.m"
            {
#line 1185 "superhomogeneous.m"
              parse_tree__set_of_var__delete_list_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_168_168, hlds__make_hlds__superhomogeneous__QuantifiedVars_75, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_162_162, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_163_163);
            }
#line 1186 "superhomogeneous.m"
            {
#line 1186 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__LambdaNonLocals_80 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_168_168, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_163_163);
            }
#line 1189 "superhomogeneous.m"
            {
#line 1189 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__LambdaRHS_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 0) = ((MR_Box) ((hlds__make_hlds__superhomogeneous__LambdaPurity_28 | ((((hlds__make_hlds__superhomogeneous__Groundness_29 << (MR_Integer) 2)) | ((hlds__make_hlds__superhomogeneous__PredOrFunc_30 << (MR_Integer) 3)))))));
#line 1189 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 1) = (MR_Integer) 0;
#line 1189 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaNonLocals_80));
#line 1189 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVars_52));
#line 1189 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 4) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Modes_33));
#line 1189 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 5) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Det_34));
#line 1189 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 6) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HLDS_Goal_78));
#line 1189 "superhomogeneous.m"
            }
#line 1192 "superhomogeneous.m"
            {
#line 1192 "superhomogeneous.m"
              hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__X_26, hlds__make_hlds__superhomogeneous__LambdaRHS_81, hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__MainContext_37, hlds__make_hlds__superhomogeneous__SubContext_38, hlds__make_hlds__superhomogeneous__UnificationPurity_27, hlds__make_hlds__superhomogeneous__Goal_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_118_118, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89);
#line 1192 "superhomogeneous.m"
              return;
            }
#line 1075 "superhomogeneous.m"
          }
#line 1072 "superhomogeneous.m"
      }
#line 1068 "superhomogeneous.m"
  }
#line 1013 "superhomogeneous.m"
}

#line 990 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(
#line 990 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Modes0_8,
#line 990 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Modes_9,
#line 990 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_10,
#line 990 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
#line 990 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
#line 990 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 990 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19)
#line 990 "superhomogeneous.m"
{
#line 996 "superhomogeneous.m"
  {
#line 996 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 996 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ImportStatus_13;

#line 998 "superhomogeneous.m"
    {
#line 998 "superhomogeneous.m"
      hlds__make_hlds__qual_info__qual_info_get_import_status_2_p_0(hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, &hlds__make_hlds__superhomogeneous__ImportStatus_13);
    }
#line 999 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__ImportStatus_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 999 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 1004 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1000 "superhomogeneous.m"
      {
#line 1000 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__MQInfo0_14;
#line 1000 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__MQInfo_15;

#line 1000 "superhomogeneous.m"
        {
#line 1000 "superhomogeneous.m"
          hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, &hlds__make_hlds__superhomogeneous__MQInfo0_14);
        }
#line 1001 "superhomogeneous.m"
        {
#line 1001 "superhomogeneous.m"
          parse_tree__module_qual__qualify_lambda_mode_list_7_p_0(hlds__make_hlds__superhomogeneous__Modes0_8, hlds__make_hlds__superhomogeneous__Modes_9, hlds__make_hlds__superhomogeneous__Context_10, hlds__make_hlds__superhomogeneous__MQInfo0_14, &hlds__make_hlds__superhomogeneous__MQInfo_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);
        }
#line 1003 "superhomogeneous.m"
        {
#line 1003 "superhomogeneous.m"
          hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(hlds__make_hlds__superhomogeneous__MQInfo_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17);
#line 1003 "superhomogeneous.m"
          return;
        }
#line 1000 "superhomogeneous.m"
      }
#line 1004 "superhomogeneous.m"
    else
#line 1005 "superhomogeneous.m"
      {
#line 1005 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__Modes_9 = hlds__make_hlds__superhomogeneous__Modes0_8;
#line 1005 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18;
#line 1005 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16;
#line 1005 "superhomogeneous.m"
      }
#line 996 "superhomogeneous.m"
  }
#line 990 "superhomogeneous.m"
}

#line 331 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(
#line 331 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 331 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__GoalCord_4)
#line 331 "superhomogeneous.m"
{
#line 334 "superhomogeneous.m"
  {
#line 334 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 334 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));

#line 334 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__GoalCord_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 334 "superhomogeneous.m"
  }
#line 331 "superhomogeneous.m"
}

#line 314 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(
#line 314 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 314 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2,
#line 314 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_3,
#line 314 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4,
#line 314 "superhomogeneous.m"
  MR_Integer * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_5)
#line 314 "superhomogeneous.m"
{
#line 317 "superhomogeneous.m"
  while (MR_TRUE)
#line 317 "superhomogeneous.m"
    {
#line 317 "superhomogeneous.m"
      /* tailcall optimized into a loop */
#line 317 "superhomogeneous.m"
      {
#line 317 "superhomogeneous.m"
        MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 317 "superhomogeneous.m"
        if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "superhomogeneous.m"
          {
#line 317 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_5 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4;
#line 317 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_3 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2;
#line 317 "superhomogeneous.m"
          }
#line 317 "superhomogeneous.m"
        else
#line 319 "superhomogeneous.m"
          {
#line 319 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Expansion_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 319 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Expansions_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 319 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeFGTI_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_12, (MR_Integer) 0)));
#line 319 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24;
#line 319 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25;
#line 320 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_12, (MR_Integer) 1)));

#line 324 "superhomogeneous.m"
            if ((hlds__make_hlds__superhomogeneous__MaybeFGTI_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 322 "superhomogeneous.m"
              {
#line 323 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25 = (MR_Integer) 0;
#line 323 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4;
#line 322 "superhomogeneous.m"
              }
#line 324 "superhomogeneous.m"
            else
#line 325 "superhomogeneous.m"
              {
#line 325 "superhomogeneous.m"
                MR_Integer hlds__make_hlds__superhomogeneous__Size_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_16, (MR_Integer) 1)));
#line 325 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_16, (MR_Integer) 0)));

#line 326 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24 = (hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4 + hlds__make_hlds__superhomogeneous__Size_19);
#line 326 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2;
#line 325 "superhomogeneous.m"
              }
#line 328 "superhomogeneous.m"
            /* direct tailcall eliminated */
#line 328 "superhomogeneous.m"
            {
#line 328 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1 = hlds__make_hlds__superhomogeneous__Expansions_13;
#line 328 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0__tmp_copy_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25;
#line 328 "superhomogeneous.m"
              MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0__tmp_copy_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24;

#line 328 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0__tmp_copy_4;
#line 328 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0__tmp_copy_2;
#line 328 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1;
#line 328 "superhomogeneous.m"
            }
#line 328 "superhomogeneous.m"
            continue;
#line 319 "superhomogeneous.m"
          }
#line 317 "superhomogeneous.m"
      }
#line 317 "superhomogeneous.m"
      break;
#line 317 "superhomogeneous.m"
    }
#line 314 "superhomogeneous.m"
}

#line 307 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_2(
#line 307 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 307 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 307 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 307 "superhomogeneous.m"
{
#line 307 "superhomogeneous.m"
  {
#line 307 "superhomogeneous.m"
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
#line 307 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__conv1_GoalCord_4;

#line 307 "superhomogeneous.m"
    {
#line 307 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv1_GoalCord_4);
    }
#line 307 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv1_GoalCord_4));
#line 307 "superhomogeneous.m"
  }
#line 307 "superhomogeneous.m"
}

#line 299 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1(
#line 299 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 299 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 299 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 299 "superhomogeneous.m"
{
#line 299 "superhomogeneous.m"
  {
#line 299 "superhomogeneous.m"
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
#line 299 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

#line 299 "superhomogeneous.m"
    {
#line 299 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
#line 299 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
#line 299 "superhomogeneous.m"
  }
#line 299 "superhomogeneous.m"
}

#line 290 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(
#line 290 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_7,
#line 290 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__TermVar_8,
#line 290 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_9,
#line 290 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__BaseGoalSize_10,
#line 290 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_11,
#line 290 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_12)
#line 290 "superhomogeneous.m"
{
#line 294 "superhomogeneous.m"
  {
#line 294 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 294 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__AllFGTI_13;
#line 294 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__TotalSize_14;

#line 295 "superhomogeneous.m"
    {
#line 295 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(hlds__make_hlds__superhomogeneous__ArgExpansions_11, (MR_Integer) 1, &hlds__make_hlds__superhomogeneous__AllFGTI_13, hlds__make_hlds__superhomogeneous__BaseGoalSize_10, &hlds__make_hlds__superhomogeneous__TotalSize_14);
    }
#line 305 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__AllFGTI_13 == (MR_Integer) 0))
#line 298 "superhomogeneous.m"
      {
#line 298 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30;
#line 298 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ArgGoalCords_15;
#line 298 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ArgGoalsCord_16;
#line 298 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__GoalCord_17;
#line 298 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_21_21;

#line 299 "superhomogeneous.m"
        {
#line 299 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 299 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
#line 299 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1));
#line 299 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 299 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_7));
#line 299 "superhomogeneous.m"
        }
#line 299 "superhomogeneous.m"
        {
#line 299 "superhomogeneous.m"
          mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_21_21, hlds__make_hlds__superhomogeneous__ArgExpansions_11, &hlds__make_hlds__superhomogeneous__ArgGoalCords_15);
        }
#line 7869 "hlds.make_hlds.superhomogeneous.c"
        hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 301 "superhomogeneous.m"
        {
#line 301 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__ArgGoalsCord_16 = mercury__cord__cord_list_to_cord_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30, hlds__make_hlds__superhomogeneous__ArgGoalCords_15);
        }
#line 303 "superhomogeneous.m"
        {
#line 303 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__GoalCord_17 = mercury__cord__cons_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30, ((MR_Box) (hlds__make_hlds__superhomogeneous__BaseGoal_9)), hlds__make_hlds__superhomogeneous__ArgGoalsCord_16);
        }
#line 304 "superhomogeneous.m"
        {
#line 304 "superhomogeneous.m"
          MR_Word base;
#line 304 "superhomogeneous.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 304 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Expansion_12 = base;
#line 304 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_17));
#line 304 "superhomogeneous.m"
        }
#line 298 "superhomogeneous.m"
      }
#line 305 "superhomogeneous.m"
    else
#line 306 "superhomogeneous.m"
      {
#line 306 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35;
#line 306 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_20_20;
#line 306 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ArgGoalCords_23;
#line 306 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ArgGoalsCord_24;
#line 306 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__GoalCord_25;

#line 307 "superhomogeneous.m"
        {
#line 307 "superhomogeneous.m"
          mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_4[0], hlds__make_hlds__superhomogeneous__ArgExpansions_11, &hlds__make_hlds__superhomogeneous__ArgGoalCords_23);
        }
#line 7917 "hlds.make_hlds.superhomogeneous.c"
        hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 308 "superhomogeneous.m"
        {
#line 308 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__ArgGoalsCord_24 = mercury__cord__cord_list_to_cord_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35, hlds__make_hlds__superhomogeneous__ArgGoalCords_23);
        }
#line 310 "superhomogeneous.m"
        {
#line 310 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__GoalCord_25 = mercury__cord__cons_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35, ((MR_Box) (hlds__make_hlds__superhomogeneous__BaseGoal_9)), hlds__make_hlds__superhomogeneous__ArgGoalsCord_24);
        }
#line 311 "superhomogeneous.m"
        {
#line 311 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermVar_8));
#line 311 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TotalSize_14));
#line 311 "superhomogeneous.m"
        }
#line 311 "superhomogeneous.m"
        {
#line 311 "superhomogeneous.m"
          MR_Word base;
#line 311 "superhomogeneous.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 311 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Expansion_12 = base;
#line 311 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_20_20));
#line 311 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_25));
#line 311 "superhomogeneous.m"
        }
#line 306 "superhomogeneous.m"
      }
#line 294 "superhomogeneous.m"
  }
#line 290 "superhomogeneous.m"
}

#line 285 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1(
#line 285 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 285 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 285 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 285 "superhomogeneous.m"
{
#line 285 "superhomogeneous.m"
  {
#line 285 "superhomogeneous.m"
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
#line 285 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

#line 285 "superhomogeneous.m"
    {
#line 285 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
#line 285 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
#line 285 "superhomogeneous.m"
  }
#line 285 "superhomogeneous.m"
}

#line 279 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(
#line 279 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
#line 279 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansions_6,
#line 279 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
#line 279 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8)
#line 279 "superhomogeneous.m"
{
#line 283 "superhomogeneous.m"
  {
#line 283 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 283 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18;
#line 283 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_9;
#line 283 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCords_10;
#line 283 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_11;
#line 283 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_12_12;
#line 283 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_13_13;

#line 284 "superhomogeneous.m"
    {
#line 284 "superhomogeneous.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__BaseGoal_7, &hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
#line 285 "superhomogeneous.m"
    {
#line 285 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
#line 285 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1));
#line 285 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 285 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_5));
#line 285 "superhomogeneous.m"
    }
#line 285 "superhomogeneous.m"
    {
#line 285 "superhomogeneous.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_12_12, hlds__make_hlds__superhomogeneous__Expansions_6, &hlds__make_hlds__superhomogeneous__ExpansionGoalCords_10);
    }
#line 8044 "hlds.make_hlds.superhomogeneous.c"
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 287 "superhomogeneous.m"
    {
#line 287 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__ExpansionGoals_11 = mercury__cord__cord_list_to_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18, hlds__make_hlds__superhomogeneous__ExpansionGoalCords_10);
    }
#line 288 "superhomogeneous.m"
    {
#line 288 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_13_13 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18, hlds__make_hlds__superhomogeneous__ExpansionGoals_11, hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
#line 288 "superhomogeneous.m"
    {
#line 288 "superhomogeneous.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_13_13, hlds__make_hlds__superhomogeneous__GoalInfo_5, hlds__make_hlds__superhomogeneous__Goal_8);
#line 288 "superhomogeneous.m"
      return;
    }
#line 283 "superhomogeneous.m"
  }
#line 279 "superhomogeneous.m"
}

#line 268 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(
#line 268 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
#line 268 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_6,
#line 268 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
#line 268 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8)
#line 268 "superhomogeneous.m"
{
#line 272 "superhomogeneous.m"
  {
#line 272 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 272 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13;
#line 272 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_9;
#line 272 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCord_10;
#line 272 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_11;
#line 272 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_12_12;

#line 273 "superhomogeneous.m"
    {
#line 273 "superhomogeneous.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__BaseGoal_7, &hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
#line 274 "superhomogeneous.m"
    {
#line 274 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_5, hlds__make_hlds__superhomogeneous__Expansion_6, &hlds__make_hlds__superhomogeneous__ExpansionGoalCord_10);
    }
#line 8106 "hlds.make_hlds.superhomogeneous.c"
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 276 "superhomogeneous.m"
    {
#line 276 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__ExpansionGoals_11 = mercury__cord__list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13, hlds__make_hlds__superhomogeneous__ExpansionGoalCord_10);
    }
#line 277 "superhomogeneous.m"
    {
#line 277 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_12_12 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13, hlds__make_hlds__superhomogeneous__ExpansionGoals_11, hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
#line 277 "superhomogeneous.m"
    {
#line 277 "superhomogeneous.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_12_12, hlds__make_hlds__superhomogeneous__GoalInfo_5, hlds__make_hlds__superhomogeneous__Goal_8);
#line 277 "superhomogeneous.m"
      return;
    }
#line 272 "superhomogeneous.m"
  }
#line 268 "superhomogeneous.m"
}

#line 248 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(
#line 248 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 248 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__2_2)
#line 248 "superhomogeneous.m"
{
#line 251 "superhomogeneous.m"
  {
#line 251 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 251 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 251 "superhomogeneous.m"
      *hlds__make_hlds__superhomogeneous__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 251 "superhomogeneous.m"
    else
#line 252 "superhomogeneous.m"
      {
#line 252 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goal0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 252 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 252 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goal_5;
#line 252 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goals_6;
#line 252 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_3, (MR_Integer) 0)));
#line 252 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_3, (MR_Integer) 1)));
#line 261 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__LHSVar_9;
#line 261 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__RHSVars_16;
#line 255 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__RHS_10;
#line 255 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_11_11;
#line 255 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_12_12;
#line 255 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_13_13;
#line 256 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_14_14;
#line 256 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_15_15;

#line 255 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__GoalExpr_7)) == (MR_mktag((MR_Integer) 1)));
#line 255 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 255 "superhomogeneous.m"
          {
#line 255 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__LHSVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 0)));
#line 255 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 1)));
#line 255 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 2)));
#line 255 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 3)));
#line 255 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 4)));
#line 256 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__RHS_10)) == (MR_mktag((MR_Integer) 1)));
#line 256 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 256 "superhomogeneous.m"
              {
#line 256 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__RHS_10, (MR_Integer) 0)));
#line 256 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__RHS_10, (MR_Integer) 1)));
#line 256 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__RHSVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__RHS_10, (MR_Integer) 2)));
#line 256 "superhomogeneous.m"
              }
#line 255 "superhomogeneous.m"
          }
#line 261 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 258 "superhomogeneous.m"
          {
#line 258 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NonLocals_17;
#line 258 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_18;
#line 258 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_19_19;

#line 258 "superhomogeneous.m"
            {
#line 258 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LHSVar_9));
#line 258 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__RHSVars_16));
#line 258 "superhomogeneous.m"
            }
#line 258 "superhomogeneous.m"
            {
#line 258 "superhomogeneous.m"
              parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__V_19_19, &hlds__make_hlds__superhomogeneous__NonLocals_17);
            }
#line 259 "superhomogeneous.m"
            {
#line 259 "superhomogeneous.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__superhomogeneous__NonLocals_17, hlds__make_hlds__superhomogeneous__GoalInfo0_8, &hlds__make_hlds__superhomogeneous__GoalInfo_18);
            }
#line 260 "superhomogeneous.m"
            {
#line 260 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__Goal_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 260 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_5, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_7));
#line 260 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_5, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_18));
#line 260 "superhomogeneous.m"
            }
#line 258 "superhomogeneous.m"
          }
#line 261 "superhomogeneous.m"
        else
#line 262 "superhomogeneous.m"
          {
#line 262 "superhomogeneous.m"
            {
#line 262 "superhomogeneous.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.mark_nonlocals_in_ground_term_initial\'/2", (MR_String) "wrong shape goal");
#line 262 "superhomogeneous.m"
              return;
            }
#line 262 "superhomogeneous.m"
          }
#line 264 "superhomogeneous.m"
        {
#line 264 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(hlds__make_hlds__superhomogeneous__Goals0_4, &hlds__make_hlds__superhomogeneous__Goals_6);
        }
#line 252 "superhomogeneous.m"
        {
#line 252 "superhomogeneous.m"
          MR_Word base;
#line 252 "superhomogeneous.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__2_2 = base;
#line 252 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_5));
#line 252 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Goals_6));
#line 252 "superhomogeneous.m"
        }
#line 252 "superhomogeneous.m"
      }
#line 251 "superhomogeneous.m"
  }
#line 248 "superhomogeneous.m"
}

#line 223 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(
#line 223 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
#line 223 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
#line 223 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6)
#line 223 "superhomogeneous.m"
{
#line 227 "superhomogeneous.m"
  {
#line 227 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 227 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__MaybeFGTI_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 0)));
#line 227 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__GoalCord_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 1)));
#line 244 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TermVar_9;
#line 230 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__Size_10;
#line 230 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__Threshold_11;
#line 230 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_20_20;

#line 230 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeFGTI_7)) == (MR_mktag((MR_Integer) 1)));
#line 230 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 230 "superhomogeneous.m"
      {
#line 230 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__TermVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 0)));
#line 230 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__Size_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 1)));
#line 231 "superhomogeneous.m"
        {
#line 231 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_20_20 = libs__globals__get_maybe_from_ground_term_threshold_0_f_0();
        }
#line 231 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 231 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 231 "superhomogeneous.m"
          {
#line 231 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__Threshold_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_20_20, (MR_Integer) 0)));
#line 232 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__Size_10 >= hlds__make_hlds__superhomogeneous__Threshold_11);
#line 231 "superhomogeneous.m"
          }
#line 230 "superhomogeneous.m"
      }
#line 244 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 234 "superhomogeneous.m"
      {
#line 234 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 234 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goals_12;
#line 234 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13;
#line 234 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__MarkedGoals_14;
#line 234 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ConjGoalExpr_15;
#line 234 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ConjGoal_16;
#line 234 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Reason_17;
#line 234 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18;
#line 234 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ScopeGoal_19;
#line 234 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_21_21;

#line 234 "superhomogeneous.m"
        {
#line 234 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__Goals_12 = mercury__cord__list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_24_24, hlds__make_hlds__superhomogeneous__GoalCord_8);
        }
#line 235 "superhomogeneous.m"
        {
#line 235 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_21_21 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__TermVar_9);
        }
#line 235 "superhomogeneous.m"
        {
#line 235 "superhomogeneous.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__superhomogeneous__V_21_21, hlds__make_hlds__superhomogeneous__GoalInfo_4, &hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13);
        }
#line 237 "superhomogeneous.m"
        {
#line 237 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(hlds__make_hlds__superhomogeneous__Goals_12, &hlds__make_hlds__superhomogeneous__MarkedGoals_14);
        }
#line 238 "superhomogeneous.m"
        {
#line 238 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__ConjGoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 238 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 238 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 238 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_15, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoals_14));
#line 238 "superhomogeneous.m"
        }
#line 239 "superhomogeneous.m"
        {
#line 239 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__ConjGoal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 239 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_16, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoalExpr_15));
#line 239 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_16, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13));
#line 239 "superhomogeneous.m"
        }
#line 240 "superhomogeneous.m"
        {
#line 240 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__Reason_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 240 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 240 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_17, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermVar_9));
#line 240 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_17, 2) = ((MR_Box) ((MR_Integer) 0));
#line 240 "superhomogeneous.m"
        }
#line 241 "superhomogeneous.m"
        {
#line 241 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 241 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 241 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Reason_17));
#line 241 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoal_16));
#line 241 "superhomogeneous.m"
        }
#line 242 "superhomogeneous.m"
        {
#line 242 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__ScopeGoal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 242 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ScopeGoal_19, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18));
#line 242 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ScopeGoal_19, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13));
#line 242 "superhomogeneous.m"
        }
#line 243 "superhomogeneous.m"
        {
#line 243 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6 = mercury__cord__singleton_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_24_24, ((MR_Box) (hlds__make_hlds__superhomogeneous__ScopeGoal_19)));
        }
#line 234 "superhomogeneous.m"
      }
#line 244 "superhomogeneous.m"
    else
#line 245 "superhomogeneous.m"
      *hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6 = hlds__make_hlds__superhomogeneous__GoalCord_8;
#line 227 "superhomogeneous.m"
  }
#line 223 "superhomogeneous.m"
}

#line 189 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(
#line 189 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
#line 189 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
#line 189 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_6)
#line 189 "superhomogeneous.m"
{
#line 192 "superhomogeneous.m"
  {
#line 192 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 192 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__MaybeFGTI_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 0)));
#line 192 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__GoalCord_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 1)));
#line 192 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__Goals_9;

#line 194 "superhomogeneous.m"
    {
#line 194 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__Goals_9 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__superhomogeneous__GoalCord_8);
    }
#line 198 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__Goals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 196 "superhomogeneous.m"
      {
#line 196 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_30_30;

#line 197 "superhomogeneous.m"
        {
#line 197 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_30_30 = hlds__make_goal__true_goal_expr_0_f_0();
        }
#line 197 "superhomogeneous.m"
        {
#line 197 "superhomogeneous.m"
          MR_Word base;
#line 197 "superhomogeneous.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 197 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Goal_6 = base;
#line 197 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_30_30));
#line 197 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_4));
#line 197 "superhomogeneous.m"
        }
#line 196 "superhomogeneous.m"
      }
#line 198 "superhomogeneous.m"
    else
#line 198 "superhomogeneous.m"
      {
#line 198 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Goals_9, (MR_Integer) 1)));
#line 198 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Goals_9, (MR_Integer) 0)));

#line 198 "superhomogeneous.m"
        if ((hlds__make_hlds__superhomogeneous__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 199 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Goal_6 = hlds__make_hlds__superhomogeneous__V_36_36;
#line 198 "superhomogeneous.m"
        else
#line 216 "superhomogeneous.m"
          {
#line 216 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TermVar_13;
#line 203 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__Size_14;
#line 203 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__Threshold_15;
#line 203 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_24_24;

#line 203 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeFGTI_7)) == (MR_mktag((MR_Integer) 1)));
#line 203 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 203 "superhomogeneous.m"
              {
#line 203 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__TermVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 0)));
#line 203 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Size_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 1)));
#line 204 "superhomogeneous.m"
                {
#line 204 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_24_24 = libs__globals__get_maybe_from_ground_term_threshold_0_f_0();
                }
#line 204 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 204 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 204 "superhomogeneous.m"
                  {
#line 204 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__Threshold_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_24_24, (MR_Integer) 0)));
#line 205 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__Size_14 >= hlds__make_hlds__superhomogeneous__Threshold_15);
#line 204 "superhomogeneous.m"
                  }
#line 203 "superhomogeneous.m"
              }
#line 216 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 208 "superhomogeneous.m"
              {
#line 208 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__MarkedGoalInfo_16;
#line 208 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__MarkedGoals_17;
#line 208 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ConjGoalExpr_18;
#line 208 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ConjGoal_19;
#line 208 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__Reason_20;
#line 208 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ScopeGoalExpr_21;
#line 208 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_25_25;

#line 207 "superhomogeneous.m"
                {
#line 207 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_25_25 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__TermVar_13);
                }
#line 207 "superhomogeneous.m"
                {
#line 207 "superhomogeneous.m"
                  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__superhomogeneous__V_25_25, hlds__make_hlds__superhomogeneous__GoalInfo_4, &hlds__make_hlds__superhomogeneous__MarkedGoalInfo_16);
                }
#line 209 "superhomogeneous.m"
                {
#line 209 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(hlds__make_hlds__superhomogeneous__Goals_9, &hlds__make_hlds__superhomogeneous__MarkedGoals_17);
                }
#line 210 "superhomogeneous.m"
                {
#line 210 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__ConjGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 210 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 210 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_18, 1) = ((MR_Box) ((MR_Integer) 0));
#line 210 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_18, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoals_17));
#line 210 "superhomogeneous.m"
                }
#line 211 "superhomogeneous.m"
                {
#line 211 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__ConjGoal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 211 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_19, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoalExpr_18));
#line 211 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_19, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_16));
#line 211 "superhomogeneous.m"
                }
#line 212 "superhomogeneous.m"
                {
#line 212 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__Reason_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 212 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 212 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_20, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermVar_13));
#line 212 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_20, 2) = ((MR_Box) ((MR_Integer) 0));
#line 212 "superhomogeneous.m"
                }
#line 213 "superhomogeneous.m"
                {
#line 213 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__ScopeGoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 213 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ScopeGoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 213 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ScopeGoalExpr_21, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Reason_20));
#line 213 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ScopeGoalExpr_21, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoal_19));
#line 213 "superhomogeneous.m"
                }
#line 214 "superhomogeneous.m"
                {
#line 214 "superhomogeneous.m"
                  MR_Word base;
#line 214 "superhomogeneous.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 214 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__Goal_6 = base;
#line 214 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ScopeGoalExpr_21));
#line 214 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_16));
#line 214 "superhomogeneous.m"
                }
#line 208 "superhomogeneous.m"
              }
#line 216 "superhomogeneous.m"
            else
#line 217 "superhomogeneous.m"
              {
#line 217 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ConjGoalExpr_31;

#line 217 "superhomogeneous.m"
                {
#line 217 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__ConjGoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 217 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 217 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 217 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_31, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Goals_9));
#line 217 "superhomogeneous.m"
                }
#line 218 "superhomogeneous.m"
                {
#line 218 "superhomogeneous.m"
                  MR_Word base;
#line 218 "superhomogeneous.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 218 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__Goal_6 = base;
#line 218 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoalExpr_31));
#line 218 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_4));
#line 218 "superhomogeneous.m"
                }
#line 217 "superhomogeneous.m"
              }
#line 216 "superhomogeneous.m"
          }
#line 198 "superhomogeneous.m"
      }
#line 192 "superhomogeneous.m"
  }
#line 189 "superhomogeneous.m"
}

#line 91 "superhomogeneous.m"
void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(
#line 91 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Args_9,
#line 91 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Vars_10,
#line 91 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_15,
#line 91 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_16,
#line 91 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_17,
#line 91 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_18,
#line 91 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19,
#line 91 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20)
#line 91 "superhomogeneous.m"
{
#line 1263 "superhomogeneous.m"
  {
#line 1263 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 1263 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__RevVars_14;

#line 1266 "superhomogeneous.m"
    {
#line 1266 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_9_p_0(hlds__make_hlds__superhomogeneous__Args_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__superhomogeneous__RevVars_14, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_16, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_17, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_18, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20);
    }
#line 1268 "superhomogeneous.m"
    {
#line 1268 "superhomogeneous.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0], hlds__make_hlds__superhomogeneous__RevVars_14, hlds__make_hlds__superhomogeneous__Vars_10);
#line 1268 "superhomogeneous.m"
      return;
    }
#line 1263 "superhomogeneous.m"
  }
#line 91 "superhomogeneous.m"
}

#line 72 "superhomogeneous.m"
void MR_CALL 
hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(
#line 72 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LHS0_20,
#line 72 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_21,
#line 72 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 72 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_23,
#line 72 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_24,
#line 72 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_25,
#line 72 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_26,
#line 72 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36,
#line 72 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37,
#line 72 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38,
#line 72 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39,
#line 72 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40,
#line 72 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41,
#line 72 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42,
#line 72 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43,
#line 72 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44,
#line 72 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45,
#line 72 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46,
#line 72 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47)
#line 72 "superhomogeneous.m"
{
#line 159 "superhomogeneous.m"
  {
#line 159 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 159 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__Expansion_34;
#line 159 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_35;

#line 169 "superhomogeneous.m"
    {
#line 169 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__LHS0_20, hlds__make_hlds__superhomogeneous__RHS0_21, hlds__make_hlds__superhomogeneous__Context_22, hlds__make_hlds__superhomogeneous__MainContext_23, hlds__make_hlds__superhomogeneous__SubContext_24, hlds__make_hlds__superhomogeneous__Purity_25, &hlds__make_hlds__superhomogeneous__Expansion_34, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47);
    }
#line 172 "superhomogeneous.m"
    {
#line 172 "superhomogeneous.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_22, &hlds__make_hlds__superhomogeneous__GoalInfo_35);
    }
#line 173 "superhomogeneous.m"
    {
#line 173 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_35, hlds__make_hlds__superhomogeneous__Expansion_34, hlds__make_hlds__superhomogeneous__Goal_26);
#line 173 "superhomogeneous.m"
      return;
    }
#line 159 "superhomogeneous.m"
  }
#line 72 "superhomogeneous.m"
}

#line 285 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0_1(
#line 285 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 285 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 285 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 285 "superhomogeneous.m"
{
#line 285 "superhomogeneous.m"
  {
#line 285 "superhomogeneous.m"
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
#line 285 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

#line 285 "superhomogeneous.m"
    {
#line 285 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
#line 285 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
#line 285 "superhomogeneous.m"
  }
#line 285 "superhomogeneous.m"
}

#line 64 "superhomogeneous.m"
void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(
#line 64 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVars_19,
#line 64 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XArgTerms0_20,
#line 64 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContexts_21,
#line 64 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 64 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Goal0_23,
#line 64 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_24,
#line 64 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_35,
#line 64 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_36,
#line 64 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_37,
#line 64 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_38,
#line 64 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_39,
#line 64 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_40,
#line 64 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_41,
#line 64 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_42,
#line 64 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_43,
#line 64 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_44,
#line 64 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_45,
#line 64 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_46)
#line 64 "superhomogeneous.m"
{
#line 147 "superhomogeneous.m"
  {
#line 147 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 147 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70;
#line 147 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__XArgTerms_31;
#line 147 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__Expansions_32;
#line 147 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__GoalInfo0_34;
#line 147 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47;
#line 147 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48;
#line 147 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49;
#line 147 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_61;
#line 147 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCords_62;
#line 147 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_63;
#line 147 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_64_64;
#line 147 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_65_65;
#line 153 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_33_33;

#line 148 "superhomogeneous.m"
    {
#line 148 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__XArgTerms0_20, &hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_39, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_35, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49);
    }
#line 150 "superhomogeneous.m"
    {
#line 150 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(hlds__make_hlds__superhomogeneous__XVars_19, hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__ArgContexts_21, hlds__make_hlds__superhomogeneous__Context_22, &hlds__make_hlds__superhomogeneous__Expansions_32, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_46);
    }
#line 153 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 0)));
#line 153 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__GoalInfo0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 1)));
#line 284 "superhomogeneous.m"
    {
#line 284 "superhomogeneous.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__Goal0_23, &hlds__make_hlds__superhomogeneous__BaseGoals_61);
    }
#line 285 "superhomogeneous.m"
    {
#line 285 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
#line 285 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0_1));
#line 285 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 285 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo0_34));
#line 285 "superhomogeneous.m"
    }
#line 285 "superhomogeneous.m"
    {
#line 285 "superhomogeneous.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_64_64, hlds__make_hlds__superhomogeneous__Expansions_32, &hlds__make_hlds__superhomogeneous__ExpansionGoalCords_62);
    }
#line 8978 "hlds.make_hlds.superhomogeneous.c"
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 287 "superhomogeneous.m"
    {
#line 287 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__ExpansionGoals_63 = mercury__cord__cord_list_to_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70, hlds__make_hlds__superhomogeneous__ExpansionGoalCords_62);
    }
#line 288 "superhomogeneous.m"
    {
#line 288 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_65_65 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70, hlds__make_hlds__superhomogeneous__ExpansionGoals_63, hlds__make_hlds__superhomogeneous__BaseGoals_61);
    }
#line 288 "superhomogeneous.m"
    {
#line 288 "superhomogeneous.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_65_65, hlds__make_hlds__superhomogeneous__GoalInfo0_34, hlds__make_hlds__superhomogeneous__Goal_24);
#line 288 "superhomogeneous.m"
      return;
    }
#line 147 "superhomogeneous.m"
  }
#line 64 "superhomogeneous.m"
}

#line 285 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0_1(
#line 285 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 285 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 285 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 285 "superhomogeneous.m"
{
#line 285 "superhomogeneous.m"
  {
#line 285 "superhomogeneous.m"
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
#line 285 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

#line 285 "superhomogeneous.m"
    {
#line 285 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
#line 285 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
#line 285 "superhomogeneous.m"
  }
#line 285 "superhomogeneous.m"
}

#line 57 "superhomogeneous.m"
void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(
#line 57 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVars_19,
#line 57 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XArgTerms0_20,
#line 57 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_21,
#line 57 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContext_22,
#line 57 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Goal0_23,
#line 57 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_24,
#line 57 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_35,
#line 57 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_36,
#line 57 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_37,
#line 57 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_38,
#line 57 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_39,
#line 57 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_40,
#line 57 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_41,
#line 57 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_42,
#line 57 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_43,
#line 57 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_44,
#line 57 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_45,
#line 57 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_46)
#line 57 "superhomogeneous.m"
{
#line 135 "superhomogeneous.m"
  {
#line 135 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 135 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71;
#line 135 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__XArgTerms_31;
#line 135 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__Expansions_32;
#line 135 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__GoalInfo0_34;
#line 135 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47;
#line 135 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48;
#line 135 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49;
#line 135 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_62;
#line 135 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCords_63;
#line 135 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_64;
#line 135 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_65_65;
#line 135 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_66_66;
#line 141 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_33_33;

#line 136 "superhomogeneous.m"
    {
#line 136 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__XArgTerms0_20, &hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_39, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_35, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49);
    }
#line 138 "superhomogeneous.m"
    {
#line 138 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__XVars_19, hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__Context_21, hlds__make_hlds__superhomogeneous__ArgContext_22, (MR_Integer) 1, &hlds__make_hlds__superhomogeneous__Expansions_32, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_46);
    }
#line 141 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 0)));
#line 141 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__GoalInfo0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 1)));
#line 284 "superhomogeneous.m"
    {
#line 284 "superhomogeneous.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__Goal0_23, &hlds__make_hlds__superhomogeneous__BaseGoals_62);
    }
#line 285 "superhomogeneous.m"
    {
#line 285 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
#line 285 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0_1));
#line 285 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 285 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo0_34));
#line 285 "superhomogeneous.m"
    }
#line 285 "superhomogeneous.m"
    {
#line 285 "superhomogeneous.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_65_65, hlds__make_hlds__superhomogeneous__Expansions_32, &hlds__make_hlds__superhomogeneous__ExpansionGoalCords_63);
    }
#line 9142 "hlds.make_hlds.superhomogeneous.c"
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 287 "superhomogeneous.m"
    {
#line 287 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__ExpansionGoals_64 = mercury__cord__cord_list_to_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71, hlds__make_hlds__superhomogeneous__ExpansionGoalCords_63);
    }
#line 288 "superhomogeneous.m"
    {
#line 288 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_66_66 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71, hlds__make_hlds__superhomogeneous__ExpansionGoals_64, hlds__make_hlds__superhomogeneous__BaseGoals_62);
    }
#line 288 "superhomogeneous.m"
    {
#line 288 "superhomogeneous.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_66_66, hlds__make_hlds__superhomogeneous__GoalInfo0_34, hlds__make_hlds__superhomogeneous__Goal_24);
#line 288 "superhomogeneous.m"
      return;
    }
#line 135 "superhomogeneous.m"
  }
#line 57 "superhomogeneous.m"
}

void mercury__hlds__make_hlds__superhomogeneous__init(void)
{
}

void mercury__hlds__make_hlds__superhomogeneous__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_arg_context_0);
	MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0);
	MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_maybe_fgti_var_size_0);
}

void mercury__hlds__make_hlds__superhomogeneous__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.superhomogeneous. */
