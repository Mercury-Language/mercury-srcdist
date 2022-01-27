/*
** Automatically generated from `superhomogeneous.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "queue.mih"
#include "random.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_dcg.mih"
#include "parse_tree.prog_io_goal.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.field_access.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 166 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 169 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_0[2];

#line 172 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0;

#line 175 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_1[1];

#line 178 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1;

#line 181 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0;

#line 184 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_2[3];

#line 187 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2;

#line 190 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0[1];

#line 193 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1[1];

#line 196 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2[1];

#line 199 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_arg_context_0[3];

#line 202 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0[3];

#line 205 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0[3];

#line 208 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 211 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_expansion_0_0[2];

#line 214 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0;

#line 217 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0[1];

#line 220 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_expansion_0[1];

#line 223 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_expansion_0[1];

#line 226 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_expansion_0[1];

#line 229 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0;

#line 232 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 235 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_maybe_fgti_var_size_0_1[2];

#line 238 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1;

#line 241 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_0[1];

#line 244 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_1[1];

#line 247 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_fgti_var_size_0[2];

#line 250 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_fgti_var_size_0[2];

#line 253 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_fgti_var_size_0[2];

#line 256 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0_10001(
#line 259 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 261 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 264 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0_10001(
#line 267 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 269 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 271 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3);

#line 274 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0_10001(
#line 277 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 279 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 282 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0_10001(
#line 285 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 287 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 289 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3);

#line 292 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0_10001(
#line 295 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 297 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 300 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0_10001(
#line 303 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 305 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 307 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3);

#line 771 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
#line 771 "superhomogeneous.m"
  MR_String hlds__make_hlds__superhomogeneous__YAtom_24,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YArgs_25,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
#line 771 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135,
#line 771 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137,
#line 771 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139,
#line 771 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141,
#line 771 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143,
#line 771 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145,
#line 771 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);

#line 594 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctor0_24,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YArgTerms0_25,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
#line 594 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_88,
#line 594 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90,
#line 594 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_92,
#line 594 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94,
#line 594 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96,
#line 594 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_98,
#line 594 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99);

#line 557 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_21,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 557 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_41,
#line 557 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_42,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_43,
#line 557 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_44,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_45,
#line 557 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_46,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_47,
#line 557 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_48,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49,
#line 557 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_51,
#line 557 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_52);

#line 498 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XTerm_21,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 498 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55,
#line 498 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57,
#line 498 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59,
#line 498 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61,
#line 498 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63,
#line 498 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65,
#line 498 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);

#line 482 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LHSVar_21,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 482 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36,
#line 482 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38,
#line 482 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40,
#line 482 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42,
#line 482 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44,
#line 482 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46,
#line 482 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47);

#line 465 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LHS0_21,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 465 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_37,
#line 465 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_39,
#line 465 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_40,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_41,
#line 465 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_42,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_43,
#line 465 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_44,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_45,
#line 465 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_46,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_47,
#line 465 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_48);

#line 426 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_20,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_21,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContext_23,
#line 426 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__ArgNum_25,
#line 426 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_26,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42,
#line 426 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44,
#line 426 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46,
#line 426 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48,
#line 426 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50,
#line 426 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52,
#line 426 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53);

#line 393 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVars_19,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerms_20,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContexts_21,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 393 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansions_24,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40,
#line 393 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42,
#line 393 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44,
#line 393 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46,
#line 393 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48,
#line 393 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50,
#line 393 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51);

#line 370 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 370 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__5_5,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20);

#line 341 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
#line 341 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__6_6,
#line 341 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8,
#line 341 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10,
#line 341 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
#line 341 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14,
#line 341 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
#line 341 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 341 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);

#line 178 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(
#line 178 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 178 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 178 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3);

#line 178 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(
#line 178 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 178 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2);

#line 182 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(
#line 182 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 182 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 182 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3);

#line 182 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(
#line 182 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 182 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2);

#line 1360 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(
#line 1360 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Arg_6,
#line 1360 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Var_7,
#line 1360 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Vars0_8,
#line 1360 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
#line 1360 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13);

#line 1302 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_9_p_0(
#line 1302 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 1302 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2,
#line 1302 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_3,
#line 1302 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4,
#line 1302 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_5,
#line 1302 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6,
#line 1302 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_7,
#line 1302 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8,
#line 1302 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_9);

#line 1232 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(
#line 1232 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ModuleInfo_1,
#line 1232 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 1232 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 1232 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
#line 1232 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__5_5,
#line 1232 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__6_6,
#line 1232 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 1232 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8);

#line 1045 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__X_26,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__UnificationPurity_27,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LambdaPurity_28,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Groundness_29,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_30,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Args0_32,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Modes_33,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Det_34,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_35,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_36,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_37,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_38,
#line 1045 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_39,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__OutsideSVarState_40,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82,
#line 1045 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84,
#line 1045 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86,
#line 1045 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88,
#line 1045 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90,
#line 1045 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);

#line 1019 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(
#line 1019 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Modes0_8,
#line 1019 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Modes_9,
#line 1019 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_10,
#line 1019 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
#line 1019 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
#line 1019 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 1019 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);

#line 747 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__convert_big_integer_functor_5_p_0(
#line 747 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Functor0_6,
#line 747 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Functor_7,
#line 747 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_8,
#line 747 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 747 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);

#line 334 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(
#line 334 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 334 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__GoalCord_4);

#line 317 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(
#line 317 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 317 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2,
#line 317 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_3,
#line 317 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4,
#line 317 "superhomogeneous.m"
  MR_Integer * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_5);

#line 310 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_2(
#line 310 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 310 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 310 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 302 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1(
#line 302 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 302 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 302 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 293 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(
#line 293 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_7,
#line 293 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__TermVar_8,
#line 293 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_9,
#line 293 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__BaseGoalSize_10,
#line 293 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_11,
#line 293 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_12);

#line 288 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1(
#line 288 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 288 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 288 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 282 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(
#line 282 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
#line 282 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansions_6,
#line 282 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
#line 282 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8);

#line 271 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(
#line 271 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
#line 271 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_6,
#line 271 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
#line 271 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8);

#line 251 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(
#line 251 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 251 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__2_2);

#line 226 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(
#line 226 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
#line 226 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
#line 226 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6);

#line 190 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(
#line 190 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
#line 190 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
#line 190 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_6);

#line 288 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0_1(
#line 288 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 288 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 288 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 288 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0_1(
#line 288 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 288 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 288 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);


static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_1[11][2];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_2[1][6];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_4[1][3];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_5[1][1];


#line 792 "superhomogeneous.m"
/* sealed */ struct hlds__make_hlds__superhomogeneous__vector_common_type_6_0_s {
#line 792 "superhomogeneous.m"
  const MR_String hlds__make_hlds__superhomogeneous__vector_common_type_6_0__vct_6_f_0;
#line 792 "superhomogeneous.m"
};

static /* final */ const struct hlds__make_hlds__superhomogeneous__vector_common_type_6_0_s hlds__make_hlds__superhomogeneous_vector_common_6[16];



static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_1[11][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: integer literal is too big"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In explicit type qualification:"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[9]))),
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

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct hlds__make_hlds__superhomogeneous__vector_common_type_6_0_s hlds__make_hlds__superhomogeneous_vector_common_6[16] = {
  /* row 0 */   {     NULL },
  /* row 1 */   {     (MR_String) "\100" },
  /* row 2 */   {     NULL },
  /* row 3 */   {     NULL },
  /* row 4 */   {     NULL },
  /* row 5 */   {     (MR_String) "else" },
  /* row 6 */   {     NULL },
  /* row 7 */   {     (MR_String) "-->" },
  /* row 8 */   {     (MR_String) "with_type" },
  /* row 9 */   {     NULL },
  /* row 10 */   {     (MR_String) ";" },
  /* row 11 */   {     (MR_String) ":" },
  /* row 12 */   {     NULL },
  /* row 13 */   {     (MR_String) ":=" },
  /* row 14 */   {     NULL },
  /* row 15 */   {     (MR_String) "^" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1194 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1202 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1208 "hlds.make_hlds.superhomogeneous.c"
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

#line 1223 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0
};

#line 1228 "hlds.make_hlds.superhomogeneous.c"
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

#line 1243 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0
  }
};

#line 1251 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_2[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_main_context_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0
};

#line 1258 "hlds.make_hlds.superhomogeneous.c"
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

#line 1273 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0
};

#line 1278 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1
};

#line 1283 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2
};

#line 1288 "hlds.make_hlds.superhomogeneous.c"
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

#line 1307 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0[3] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0
};

#line 1314 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1321 "hlds.make_hlds.superhomogeneous.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_arg_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "arg_context",
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0 },
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_arg_context_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0
};

#line 1338 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1346 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_expansion_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_maybe_fgti_var_size_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1352 "hlds.make_hlds.superhomogeneous.c"
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

#line 1367 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0
};

#line 1372 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_expansion_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0
  }
};

#line 1381 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_expansion_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0
};

#line 1386 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_expansion_0[1] = {
  (MR_Integer) 0
};

#line 1391 "hlds.make_hlds.superhomogeneous.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____expansion_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____expansion_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "expansion",
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_expansion_0 },
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_expansion_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_expansion_0
};

#line 1408 "hlds.make_hlds.superhomogeneous.c"
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

#line 1423 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1431 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_maybe_fgti_var_size_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1437 "hlds.make_hlds.superhomogeneous.c"
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

#line 1452 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0
};

#line 1457 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_1[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1
};

#line 1462 "hlds.make_hlds.superhomogeneous.c"
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

#line 1476 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_fgti_var_size_0[2] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0
};

#line 1482 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_fgti_var_size_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1488 "hlds.make_hlds.superhomogeneous.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_maybe_fgti_var_size_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous",
  (MR_String) "maybe_fgti_var_size",
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_fgti_var_size_0 },
  {     hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_fgti_var_size_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_fgti_var_size_0
};

#line 1505 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0_10001(
#line 1508 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1510 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 1512 "hlds.make_hlds.superhomogeneous.c"
{
#line 1514 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1516 "hlds.make_hlds.superhomogeneous.c"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 1519 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1521 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2));
    }
#line 1524 "hlds.make_hlds.superhomogeneous.c"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 1526 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1528 "hlds.make_hlds.superhomogeneous.c"
}

#line 1531 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0_10001(
#line 1534 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1536 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 1538 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3)
#line 1540 "hlds.make_hlds.superhomogeneous.c"
{
#line 1542 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1544 "hlds.make_hlds.superhomogeneous.c"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1;

#line 1547 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1549 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0(&hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_3));
    }
#line 1552 "hlds.make_hlds.superhomogeneous.c"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1));
#line 1554 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1556 "hlds.make_hlds.superhomogeneous.c"
}

#line 1559 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0_10001(
#line 1562 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1564 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 1566 "hlds.make_hlds.superhomogeneous.c"
{
#line 1568 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1570 "hlds.make_hlds.superhomogeneous.c"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 1573 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1575 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2));
    }
#line 1578 "hlds.make_hlds.superhomogeneous.c"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 1580 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1582 "hlds.make_hlds.superhomogeneous.c"
}

#line 1585 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0_10001(
#line 1588 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1590 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 1592 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3)
#line 1594 "hlds.make_hlds.superhomogeneous.c"
{
#line 1596 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1598 "hlds.make_hlds.superhomogeneous.c"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1;

#line 1601 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1603 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(&hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_3));
    }
#line 1606 "hlds.make_hlds.superhomogeneous.c"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1));
#line 1608 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1610 "hlds.make_hlds.superhomogeneous.c"
}

#line 1613 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0_10001(
#line 1616 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1618 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 1620 "hlds.make_hlds.superhomogeneous.c"
{
#line 1622 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1624 "hlds.make_hlds.superhomogeneous.c"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 1627 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1629 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2));
    }
#line 1632 "hlds.make_hlds.superhomogeneous.c"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 1634 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1636 "hlds.make_hlds.superhomogeneous.c"
}

#line 1639 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0_10001(
#line 1642 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1644 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 1646 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3)
#line 1648 "hlds.make_hlds.superhomogeneous.c"
{
#line 1650 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1652 "hlds.make_hlds.superhomogeneous.c"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1;

#line 1655 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1657 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(&hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_3));
    }
#line 1660 "hlds.make_hlds.superhomogeneous.c"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1));
#line 1662 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1664 "hlds.make_hlds.superhomogeneous.c"
}

#line 771 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
#line 771 "superhomogeneous.m"
  MR_String hlds__make_hlds__superhomogeneous__YAtom_24,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YArgs_25,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
#line 771 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135,
#line 771 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137,
#line 771 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139,
#line 771 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141,
#line 771 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143,
#line 771 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144,
#line 771 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145,
#line 771 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146)
#line 771 "superhomogeneous.m"
{
#line 792 "superhomogeneous.m"
  {
#line 792 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YArgs_25)) == (MR_mktag((MR_Integer) 1)));
#line 792 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_712_712;
#line 792 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_713_713;
#line 792 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_714_714;
#line 792 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_715_715;
#line 792 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__slot_0;
#line 792 "superhomogeneous.m"
    MR_String hlds__make_hlds__superhomogeneous__str_1;

#line 985 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 985 "superhomogeneous.m"
      {
#line 985 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__V_713_713 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgs_25, (MR_Integer) 0)));
#line 985 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__V_712_712 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgs_25, (MR_Integer) 1)));
#line 985 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_712_712)) == (MR_mktag((MR_Integer) 1)));
#line 985 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 985 "superhomogeneous.m"
          {
#line 985 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_715_715 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_712_712, (MR_Integer) 0)));
#line 985 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_714_714 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_712_712, (MR_Integer) 1)));
#line 985 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_714_714 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 792 "superhomogeneous.m"
              {
#line 792 "superhomogeneous.m"
                /* hashed string jump switch */
#line 792 "superhomogeneous.m"
                /* compute the hash value of the input string */
#line 792 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__slot_0 = ((MR_hash_string5(hlds__make_hlds__superhomogeneous__YAtom_24)) & (MR_Integer) 15);
#line 792 "superhomogeneous.m"
                /* no collisions; no hash chain loop */
#line 792 "superhomogeneous.m"
                /* lookup the string for this hash slot */
#line 792 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__str_1 = ((&hlds__make_hlds__superhomogeneous_vector_common_6[0 + hlds__make_hlds__superhomogeneous__slot_0]))->hlds__make_hlds__superhomogeneous__vector_common_type_6_0__vct_6_f_0;
#line 792 "superhomogeneous.m"
                /* did we find a match? */
#line 792 "superhomogeneous.m"
                if ((((hlds__make_hlds__superhomogeneous__str_1 != NULL)) && ((strcmp(hlds__make_hlds__superhomogeneous__str_1, hlds__make_hlds__superhomogeneous__YAtom_24) == 0))))
#line 792 "superhomogeneous.m"
                  {
#line 792 "superhomogeneous.m"
                    /* we found a match; dispatch to the corresponding code */
#line 792 "superhomogeneous.m"
#line 792 "superhomogeneous.m"
                    switch (hlds__make_hlds__superhomogeneous__slot_0) {
#line 792 "superhomogeneous.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 792 "superhomogeneous.m"
                      case (MR_Integer) 1:
#line 822 "superhomogeneous.m"
                        {
#line 822 "superhomogeneous.m"
                          /* case "@" */
#line 822 "superhomogeneous.m"
                          {
#line 822 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ExpansionL_49;
#line 822 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ExpansionR_50;
#line 822 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__GoalCordL_52;
#line 822 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__GoalCordR_54;
#line 822 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_297_297;
#line 822 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_298_298;
#line 822 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_299_299;
#line 822 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_300_300;
#line 822 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_301_301;
#line 822 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_302_302;
#line 822 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_310_310;
#line 834 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_51_51;
#line 835 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_53_53;

#line 826 "superhomogeneous.m"
                            {
#line 826 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_713_713, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ExpansionL_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_297_297, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_298_298, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_299_299, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_300_300, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_301_301, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_302_302);
                            }
#line 830 "superhomogeneous.m"
                            {
#line 830 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_715_715, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ExpansionR_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_297_297, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_298_298, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_299_299, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_300_300, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_301_301, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_302_302, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                            }
#line 834 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionL_49, (MR_Integer) 0)));
#line 834 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__GoalCordL_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionL_49, (MR_Integer) 1)));
#line 835 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionR_50, (MR_Integer) 0)));
#line 835 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__GoalCordR_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionR_50, (MR_Integer) 1)));
#line 836 "superhomogeneous.m"
                            {
#line 836 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__V_310_310 = mercury__cord__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__superhomogeneous__GoalCordL_52, hlds__make_hlds__superhomogeneous__GoalCordR_54);
                            }
#line 836 "superhomogeneous.m"
                            {
#line 836 "superhomogeneous.m"
                              MR_Word base;
#line 836 "superhomogeneous.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 836 "superhomogeneous.m"
                              *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 836 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 836 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_310_310));
#line 836 "superhomogeneous.m"
                            }
#line 822 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 822 "superhomogeneous.m"
                          }
#line 822 "superhomogeneous.m"
                        }
#line 792 "superhomogeneous.m"
                        break;
#line 792 "superhomogeneous.m"
                      case (MR_Integer) 5:
#line 851 "superhomogeneous.m"
                        {
#line 851 "superhomogeneous.m"
                          /* case "else" */
#line 851 "superhomogeneous.m"
                          {
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_565;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_566;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_246_246;
#line 851 "superhomogeneous.m"
                            MR_String hlds__make_hlds__superhomogeneous__V_247_247;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_248_248;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_249_249;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_250_250;
#line 851 "superhomogeneous.m"
                            MR_String hlds__make_hlds__superhomogeneous__V_251_251;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_252_252;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_253_253;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_254_254;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_255_255;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__CondTerm_502;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__MaybeVarsCond_503;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_532_532;
#line 851 "superhomogeneous.m"
                            MR_String hlds__make_hlds__superhomogeneous__V_533_533;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_534_534;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_535;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_564;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__CondTerm0_641;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ThenTerm0_642;
#line 843 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_60_60;
#line 844 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_59_59;

#line 843 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_713_713)) == (MR_mktag((MR_Integer) 0)));
#line 843 "superhomogeneous.m"
                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 843 "superhomogeneous.m"
                              {
#line 843 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 0)));
#line 843 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 1)));
#line 843 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 2)));
#line 843 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_246_246)) == (MR_mktag((MR_Integer) 0)));
#line 843 "superhomogeneous.m"
                                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 843 "superhomogeneous.m"
                                  {
#line 843 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__V_247_247 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_246_246, (MR_Integer) 0)));
#line 843 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_247_247, (MR_String) "if") == 0);
#line 851 "superhomogeneous.m"
                                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 851 "superhomogeneous.m"
                                      {
#line 844 "superhomogeneous.m"
                                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_248_248)) == (MR_mktag((MR_Integer) 1)));
#line 844 "superhomogeneous.m"
                                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 844 "superhomogeneous.m"
                                          {
#line 844 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_248_248, (MR_Integer) 0)));
#line 844 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_248_248, (MR_Integer) 1)));
#line 844 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_255_255 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 851 "superhomogeneous.m"
                                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 851 "superhomogeneous.m"
                                              {
#line 844 "superhomogeneous.m"
                                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_249_249)) == (MR_mktag((MR_Integer) 0)));
#line 844 "superhomogeneous.m"
                                                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 844 "superhomogeneous.m"
                                                  {
#line 844 "superhomogeneous.m"
                                                    hlds__make_hlds__superhomogeneous__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_249_249, (MR_Integer) 0)));
#line 844 "superhomogeneous.m"
                                                    hlds__make_hlds__superhomogeneous__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_249_249, (MR_Integer) 1)));
#line 844 "superhomogeneous.m"
                                                    hlds__make_hlds__superhomogeneous__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_249_249, (MR_Integer) 2)));
#line 844 "superhomogeneous.m"
                                                    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_250_250)) == (MR_mktag((MR_Integer) 0)));
#line 844 "superhomogeneous.m"
                                                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 844 "superhomogeneous.m"
                                                      {
#line 844 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_251_251 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_250_250, (MR_Integer) 0)));
#line 844 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_251_251, (MR_String) "then") == 0);
#line 851 "superhomogeneous.m"
                                                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 851 "superhomogeneous.m"
                                                          {
#line 844 "superhomogeneous.m"
                                                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_252_252)) == (MR_mktag((MR_Integer) 1)));
#line 844 "superhomogeneous.m"
                                                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 844 "superhomogeneous.m"
                                                              {
#line 844 "superhomogeneous.m"
                                                                hlds__make_hlds__superhomogeneous__CondTerm0_641 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_252_252, (MR_Integer) 0)));
#line 844 "superhomogeneous.m"
                                                                hlds__make_hlds__superhomogeneous__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_252_252, (MR_Integer) 1)));
#line 844 "superhomogeneous.m"
                                                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_253_253)) == (MR_mktag((MR_Integer) 1)));
#line 844 "superhomogeneous.m"
                                                                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 844 "superhomogeneous.m"
                                                                  {
#line 844 "superhomogeneous.m"
                                                                    hlds__make_hlds__superhomogeneous__ThenTerm0_642 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_253_253, (MR_Integer) 0)));
#line 844 "superhomogeneous.m"
                                                                    hlds__make_hlds__superhomogeneous__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_253_253, (MR_Integer) 1)));
#line 844 "superhomogeneous.m"
                                                                    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_254_254 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 851 "superhomogeneous.m"
                                                                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 851 "superhomogeneous.m"
                                                                      {
#line 2009 "hlds.make_hlds.superhomogeneous.c"
                                                                        hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_565 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2011 "hlds.make_hlds.superhomogeneous.c"
                                                                        hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_566 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 854 "superhomogeneous.m"
                                                                        {
#line 854 "superhomogeneous.m"
                                                                          mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_565, hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_566, hlds__make_hlds__superhomogeneous__CondTerm0_641, &hlds__make_hlds__superhomogeneous__CondTerm_502);
                                                                        }
#line 855 "superhomogeneous.m"
                                                                        hlds__make_hlds__superhomogeneous__V_533_533 = (MR_String) "Error:";
#line 855 "superhomogeneous.m"
                                                                        hlds__make_hlds__superhomogeneous__V_534_534 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 855 "superhomogeneous.m"
                                                                        hlds__make_hlds__superhomogeneous__V_532_532 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[7]);
#line 855 "superhomogeneous.m"
                                                                        hlds__make_hlds__superhomogeneous__ContextPieces_564 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[8]);
#line 856 "superhomogeneous.m"
                                                                        {
#line 856 "superhomogeneous.m"
                                                                          parse_tree__prog_io_goal__parse_some_vars_goal_5_p_0(hlds__make_hlds__superhomogeneous__CondTerm_502, hlds__make_hlds__superhomogeneous__ContextPieces_564, &hlds__make_hlds__superhomogeneous__MaybeVarsCond_503, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_535);
                                                                        }
#line 908 "superhomogeneous.m"
                                                                        if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeVarsCond_503)) == (MR_mktag((MR_Integer) 0))))
#line 909 "superhomogeneous.m"
                                                                          {
#line 909 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__VarsCondSpecs_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeVarsCond_503, (MR_Integer) 0)));
#line 909 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_384_384;
#line 909 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_385_385;

#line 910 "superhomogeneous.m"
                                                                            {
#line 910 "superhomogeneous.m"
                                                                              *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__VarsCondSpecs_382, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145);
                                                                            }
#line 912 "superhomogeneous.m"
                                                                            {
#line 912 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__V_385_385 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_27);
                                                                            }
#line 912 "superhomogeneous.m"
                                                                            {
#line 912 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__V_384_384 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_385_385)));
                                                                            }
#line 911 "superhomogeneous.m"
                                                                            {
#line 911 "superhomogeneous.m"
                                                                              MR_Word base;
#line 911 "superhomogeneous.m"
                                                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 911 "superhomogeneous.m"
                                                                              *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 911 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 911 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_384_384));
#line 911 "superhomogeneous.m"
                                                                            }
#line 909 "superhomogeneous.m"
                                                                            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135;
#line 909 "superhomogeneous.m"
                                                                            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137;
#line 909 "superhomogeneous.m"
                                                                            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_535;
#line 909 "superhomogeneous.m"
                                                                            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
#line 909 "superhomogeneous.m"
                                                                            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143;
#line 909 "superhomogeneous.m"
                                                                          }
#line 908 "superhomogeneous.m"
                                                                        else
#line 859 "superhomogeneous.m"
                                                                          {
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_370_440;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__Vars_388 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_503, (MR_Integer) 0)));
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__StateVars_389 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_503, (MR_Integer) 1)));
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__CondParseTree_390 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_503, (MR_Integer) 2)));
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_392;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__EmptySubst_393;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__CondGoal_394;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_395;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ThenTerm_396;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_397;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ThenExpansion_398;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_399;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ThenGoalInfo_400;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ThenGoal0_401;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterThenSVarState_402;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ElseTerm_403;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState0_404;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ElseExpansion_405;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState_406;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ElseGoalInfo_407;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ElseGoal0_408;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ThenGoal_409;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ElseGoal_410;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_412;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_413;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__Goal_414;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_415;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_266_417;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_267_418;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_268_419;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_269_420;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_270_421;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_271_422;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_272_423;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_273_424;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_274_425;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_275_426;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_276_427;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_277_428;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_429_429;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_279_430;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_280_431;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_281_432;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_282_433;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_285_434;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_435_435;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_437_437;
#line 859 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_439_439;

#line 861 "superhomogeneous.m"
                                                                            {
#line 861 "superhomogeneous.m"
                                                                              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_535, hlds__make_hlds__superhomogeneous__StateVars_389, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_392, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_415);
                                                                            }
#line 2189 "hlds.make_hlds.superhomogeneous.c"
                                                                            hlds__make_hlds__superhomogeneous__TypeInfo_370_440 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 863 "superhomogeneous.m"
                                                                            {
#line 863 "superhomogeneous.m"
                                                                              mercury__map__init_1_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_370_440, hlds__make_hlds__superhomogeneous__TypeInfo_370_440, &hlds__make_hlds__superhomogeneous__EmptySubst_393);
                                                                            }
#line 865 "superhomogeneous.m"
                                                                            {
#line 865 "superhomogeneous.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__CondParseTree_390, hlds__make_hlds__superhomogeneous__EmptySubst_393, &hlds__make_hlds__superhomogeneous__CondGoal_394, hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_392, &hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_395, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_266_417, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_535, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_267_418, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_268_419, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_269_420, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_415, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_270_421);
                                                                            }
#line 870 "superhomogeneous.m"
                                                                            {
#line 870 "superhomogeneous.m"
                                                                              hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__ThenTerm0_642, &hlds__make_hlds__superhomogeneous__ThenTerm_396, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_267_418, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_271_422, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_395, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_397, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_270_421, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_272_423);
                                                                            }
#line 873 "superhomogeneous.m"
                                                                            {
#line 873 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ThenTerm_396, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ThenExpansion_398, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_397, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_399, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_266_417, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_273_424, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_271_422, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_274_425, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_268_419, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_275_426, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_269_420, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_276_427, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_272_423, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_277_428);
                                                                            }
#line 878 "superhomogeneous.m"
                                                                            {
#line 878 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__V_429_429 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_565, hlds__make_hlds__superhomogeneous__ThenTerm_396);
                                                                            }
#line 878 "superhomogeneous.m"
                                                                            {
#line 878 "superhomogeneous.m"
                                                                              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_429_429, &hlds__make_hlds__superhomogeneous__ThenGoalInfo_400);
                                                                            }
#line 879 "superhomogeneous.m"
                                                                            {
#line 879 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ThenGoalInfo_400, hlds__make_hlds__superhomogeneous__ThenExpansion_398, &hlds__make_hlds__superhomogeneous__ThenGoal0_401);
                                                                            }
#line 882 "superhomogeneous.m"
                                                                            {
#line 882 "superhomogeneous.m"
                                                                              hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__superhomogeneous__StateVars_389, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_399, &hlds__make_hlds__superhomogeneous__AfterThenSVarState_402);
                                                                            }
#line 885 "superhomogeneous.m"
                                                                            {
#line 885 "superhomogeneous.m"
                                                                              hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_715_715, &hlds__make_hlds__superhomogeneous__ElseTerm_403, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_274_425, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_279_430, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__AfterElseSVarState0_404, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_277_428, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_280_431);
                                                                            }
#line 887 "superhomogeneous.m"
                                                                            {
#line 887 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ElseTerm_403, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ElseExpansion_405, hlds__make_hlds__superhomogeneous__AfterElseSVarState0_404, &hlds__make_hlds__superhomogeneous__AfterElseSVarState_406, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_273_424, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_281_432, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_279_430, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_282_433, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_275_426, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_276_427, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_280_431, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_285_434);
                                                                            }
#line 892 "superhomogeneous.m"
                                                                            {
#line 892 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__V_435_435 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_565, hlds__make_hlds__superhomogeneous__ElseTerm_403);
                                                                            }
#line 892 "superhomogeneous.m"
                                                                            {
#line 892 "superhomogeneous.m"
                                                                              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_435_435, &hlds__make_hlds__superhomogeneous__ElseGoalInfo_407);
                                                                            }
#line 893 "superhomogeneous.m"
                                                                            {
#line 893 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ElseGoalInfo_407, hlds__make_hlds__superhomogeneous__ElseExpansion_405, &hlds__make_hlds__superhomogeneous__ElseGoal0_408);
                                                                            }
#line 896 "superhomogeneous.m"
                                                                            {
#line 896 "superhomogeneous.m"
                                                                              hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__StateVars_389, hlds__make_hlds__superhomogeneous__ThenGoal0_401, &hlds__make_hlds__superhomogeneous__ThenGoal_409, hlds__make_hlds__superhomogeneous__ElseGoal0_408, &hlds__make_hlds__superhomogeneous__ElseGoal_410, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_395, hlds__make_hlds__superhomogeneous__AfterThenSVarState_402, hlds__make_hlds__superhomogeneous__AfterElseSVarState_406, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_282_433, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_281_432, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_285_434, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                                                            }
#line 903 "superhomogeneous.m"
                                                                            {
#line 903 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__V_437_437 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeInfo_370_440, hlds__make_hlds__superhomogeneous__StateVars_389, hlds__make_hlds__superhomogeneous__Vars_388);
                                                                            }
#line 903 "superhomogeneous.m"
                                                                            {
#line 903 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__GoalExpr_412 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 903 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_412, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 903 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_412, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_437_437));
#line 903 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_412, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__CondGoal_394));
#line 903 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_412, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ThenGoal_409));
#line 903 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_412, 4) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ElseGoal_410));
#line 903 "superhomogeneous.m"
                                                                            }
#line 905 "superhomogeneous.m"
                                                                            {
#line 905 "superhomogeneous.m"
                                                                              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_413);
                                                                            }
#line 906 "superhomogeneous.m"
                                                                            {
#line 906 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__Goal_414 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 906 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_414, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_412));
#line 906 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_414, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_413));
#line 906 "superhomogeneous.m"
                                                                            }
#line 907 "superhomogeneous.m"
                                                                            {
#line 907 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__V_439_439 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_414)));
                                                                            }
#line 907 "superhomogeneous.m"
                                                                            {
#line 907 "superhomogeneous.m"
                                                                              MR_Word base;
#line 907 "superhomogeneous.m"
                                                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 907 "superhomogeneous.m"
                                                                              *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 907 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 907 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_439_439));
#line 907 "superhomogeneous.m"
                                                                            }
#line 859 "superhomogeneous.m"
                                                                          }
#line 908 "superhomogeneous.m"
                                                                        hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 851 "superhomogeneous.m"
                                                                      }
#line 844 "superhomogeneous.m"
                                                                  }
#line 844 "superhomogeneous.m"
                                                              }
#line 851 "superhomogeneous.m"
                                                          }
#line 844 "superhomogeneous.m"
                                                      }
#line 844 "superhomogeneous.m"
                                                  }
#line 851 "superhomogeneous.m"
                                              }
#line 844 "superhomogeneous.m"
                                          }
#line 851 "superhomogeneous.m"
                                      }
#line 843 "superhomogeneous.m"
                                  }
#line 843 "superhomogeneous.m"
                              }
#line 851 "superhomogeneous.m"
                          }
#line 851 "superhomogeneous.m"
                        }
#line 792 "superhomogeneous.m"
                        break;
#line 792 "superhomogeneous.m"
                      case (MR_Integer) 7:
#line 984 "superhomogeneous.m"
                        {
#line 984 "superhomogeneous.m"
                          /* case "-->" */
#line 984 "superhomogeneous.m"
                          {
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_376_376 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_377_377 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__PredTerm1_118;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__DCGLambdaPurity_119;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__PredTerm_120;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Groundness_121;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Vars0_123;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Modes0_124;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Det_125;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Modes_126;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__GoalTerm_127;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__DCG0_129;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__DCGn_130;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_151_151;
#line 984 "superhomogeneous.m"
                            MR_String hlds__make_hlds__superhomogeneous__V_152_152;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_153_153;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_154_154;
#line 984 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_357;

#line 986 "superhomogeneous.m"
                            {
#line 986 "superhomogeneous.m"
                              mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_376_376, hlds__make_hlds__superhomogeneous__TypeCtorInfo_377_377, hlds__make_hlds__superhomogeneous__V_713_713, &hlds__make_hlds__superhomogeneous__PredTerm1_118);
                            }
#line 987 "superhomogeneous.m"
                            {
#line 987 "superhomogeneous.m"
                              parse_tree__prog_io_util__parse_purity_annotation_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_377_377, hlds__make_hlds__superhomogeneous__PredTerm1_118, &hlds__make_hlds__superhomogeneous__DCGLambdaPurity_119, &hlds__make_hlds__superhomogeneous__PredTerm_120);
                            }
#line 988 "superhomogeneous.m"
                            {
#line 988 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_goal__parse_dcg_pred_expression_6_p_0(hlds__make_hlds__superhomogeneous__PredTerm_120, &hlds__make_hlds__superhomogeneous__Groundness_121, &hlds__make_hlds__superhomogeneous__Vars0_123, &hlds__make_hlds__superhomogeneous__Modes0_124, &hlds__make_hlds__superhomogeneous__Det_125);
                            }
#line 984 "superhomogeneous.m"
                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 984 "superhomogeneous.m"
                              {
#line 992 "superhomogeneous.m"
                                {
#line 992 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(hlds__make_hlds__superhomogeneous__Modes0_124, &hlds__make_hlds__superhomogeneous__Modes_126, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150);
                                }
#line 994 "superhomogeneous.m"
                                {
#line 994 "superhomogeneous.m"
                                  mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_376_376, hlds__make_hlds__superhomogeneous__TypeCtorInfo_377_377, hlds__make_hlds__superhomogeneous__V_715_715, &hlds__make_hlds__superhomogeneous__GoalTerm_127);
                                }
#line 995 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_152_152 = (MR_String) "Error:";
#line 995 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_153_153 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 995 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_151_151 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[7]);
#line 995 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__ContextPieces_357 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[8]);
#line 996 "superhomogeneous.m"
                                {
#line 996 "superhomogeneous.m"
                                  parse_tree__prog_io_dcg__parse_dcg_pred_goal_7_p_0(hlds__make_hlds__superhomogeneous__GoalTerm_127, hlds__make_hlds__superhomogeneous__ContextPieces_357, &hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128, &hlds__make_hlds__superhomogeneous__DCG0_129, &hlds__make_hlds__superhomogeneous__DCGn_130, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_154_154);
                                }
#line 1010 "superhomogeneous.m"
                                if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128)) == (MR_mktag((MR_Integer) 0))))
#line 1011 "superhomogeneous.m"
                                  {
#line 1011 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128, (MR_Integer) 0)));
#line 1011 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_157_157;
#line 1011 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_158_158;

#line 1012 "superhomogeneous.m"
                                    {
#line 1012 "superhomogeneous.m"
                                      *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_134, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150);
                                    }
#line 1014 "superhomogeneous.m"
                                    {
#line 1014 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_158_158 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_27);
                                    }
#line 1014 "superhomogeneous.m"
                                    {
#line 1014 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_157_157 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_158_158)));
                                    }
#line 1013 "superhomogeneous.m"
                                    {
#line 1013 "superhomogeneous.m"
                                      MR_Word base;
#line 1013 "superhomogeneous.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1013 "superhomogeneous.m"
                                      *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 1013 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_157_157));
#line 1013 "superhomogeneous.m"
                                    }
#line 1011 "superhomogeneous.m"
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137;
#line 1011 "superhomogeneous.m"
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_154_154;
#line 1011 "superhomogeneous.m"
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
#line 1011 "superhomogeneous.m"
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149;
#line 1011 "superhomogeneous.m"
                                  }
#line 1010 "superhomogeneous.m"
                                else
#line 999 "superhomogeneous.m"
                                  {
#line 999 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128, (MR_Integer) 0)));
#line 999 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__Vars1_132;
#line 999 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__Goal0_133;
#line 999 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_159_159;
#line 999 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_160_160;
#line 999 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_161_161;
#line 999 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_162_162;
#line 999 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_171_171;
#line 999 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__Goal_355;

#line 1001 "superhomogeneous.m"
                                    {
#line 1001 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__DCG0_129));
#line 1001 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_160_160, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Context_27));
#line 1001 "superhomogeneous.m"
                                    }
#line 1002 "superhomogeneous.m"
                                    {
#line 1002 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__DCGn_130));
#line 1002 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_162_162, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Context_27));
#line 1002 "superhomogeneous.m"
                                    }
#line 1002 "superhomogeneous.m"
                                    {
#line 1002 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_162_162));
#line 1002 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "superhomogeneous.m"
                                    }
#line 1001 "superhomogeneous.m"
                                    {
#line 1001 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_160_160));
#line 1001 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_161_161));
#line 1001 "superhomogeneous.m"
                                    }
#line 1000 "superhomogeneous.m"
                                    {
#line 1000 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__Vars1_132 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2], hlds__make_hlds__superhomogeneous__Vars0_123, hlds__make_hlds__superhomogeneous__V_159_159);
                                    }
#line 1003 "superhomogeneous.m"
                                    {
#line 1003 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__DCGLambdaPurity_119, hlds__make_hlds__superhomogeneous__Groundness_121, (MR_Integer) 0, hlds__make_hlds__superhomogeneous__Vars1_132, hlds__make_hlds__superhomogeneous__Modes_126, hlds__make_hlds__superhomogeneous__Det_125, hlds__make_hlds__superhomogeneous__ParsedGoal_131, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, &hlds__make_hlds__superhomogeneous__Goal0_133, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_154_154, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                    }
#line 1008 "superhomogeneous.m"
                                    {
#line 1008 "superhomogeneous.m"
                                      hlds__hlds_goal__goal_set_purity_3_p_0(hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__Goal0_133, &hlds__make_hlds__superhomogeneous__Goal_355);
                                    }
#line 1009 "superhomogeneous.m"
                                    {
#line 1009 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_171_171 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_355)));
                                    }
#line 1009 "superhomogeneous.m"
                                    {
#line 1009 "superhomogeneous.m"
                                      MR_Word base;
#line 1009 "superhomogeneous.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "superhomogeneous.m"
                                      *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 1009 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1009 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_171_171));
#line 1009 "superhomogeneous.m"
                                    }
#line 999 "superhomogeneous.m"
                                  }
#line 984 "superhomogeneous.m"
                                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135;
#line 984 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 984 "superhomogeneous.m"
                              }
#line 984 "superhomogeneous.m"
                          }
#line 984 "superhomogeneous.m"
                        }
#line 792 "superhomogeneous.m"
                        break;
#line 792 "superhomogeneous.m"
                      case (MR_Integer) 8:
#line 792 "superhomogeneous.m"
                      case (MR_Integer) 11:
#line 792 "superhomogeneous.m"
                        {
#line 792 "superhomogeneous.m"
                          /* case ":", "with_type" */
#line 792 "superhomogeneous.m"
                          {
#line 792 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_363 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 792 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_364 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 792 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__DeclType1_41;
#line 792 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__GenericVarSet_43;
#line 792 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__DeclTypeResult_44;
#line 792 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_317_317;
#line 792 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_318_318;
#line 792 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_319_319;

#line 798 "superhomogeneous.m"
                            {
#line 798 "superhomogeneous.m"
                              mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_363, hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_364, hlds__make_hlds__superhomogeneous__V_715_715, &hlds__make_hlds__superhomogeneous__DeclType1_41);
                            }
#line 800 "superhomogeneous.m"
                            {
#line 800 "superhomogeneous.m"
                              mercury__varset__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_363, hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_364, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__GenericVarSet_43);
                            }
#line 801 "superhomogeneous.m"
                            {
#line 801 "superhomogeneous.m"
                              parse_tree__prog_io_util__parse_type_4_p_0(hlds__make_hlds__superhomogeneous__DeclType1_41, hlds__make_hlds__superhomogeneous__GenericVarSet_43, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[10]), &hlds__make_hlds__superhomogeneous__DeclTypeResult_44);
                            }
#line 808 "superhomogeneous.m"
                            if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__DeclTypeResult_44)) == (MR_mktag((MR_Integer) 0))))
#line 809 "superhomogeneous.m"
                              {
#line 809 "superhomogeneous.m"
                                MR_Word hlds__make_hlds__superhomogeneous__DeclTypeSpecs_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__DeclTypeResult_44, (MR_Integer) 0)));

#line 813 "superhomogeneous.m"
                                {
#line 813 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_319_319 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__DeclTypeSpecs_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145);
                                }
#line 809 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_317_317 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
#line 809 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_318_318 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143;
#line 809 "superhomogeneous.m"
                              }
#line 808 "superhomogeneous.m"
                            else
#line 804 "superhomogeneous.m"
                              {
#line 804 "superhomogeneous.m"
                                MR_Word hlds__make_hlds__superhomogeneous__DeclType_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__DeclTypeResult_44, (MR_Integer) 0)));
#line 804 "superhomogeneous.m"
                                MR_Word hlds__make_hlds__superhomogeneous__DeclVarSet_46;

#line 805 "superhomogeneous.m"
                                {
#line 805 "superhomogeneous.m"
                                  mercury__varset__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_363, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__DeclVarSet_46);
                                }
#line 806 "superhomogeneous.m"
                                {
#line 806 "superhomogeneous.m"
                                  hlds__make_hlds__qual_info__process_type_qualification_10_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__DeclType_45, hlds__make_hlds__superhomogeneous__DeclVarSet_46, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_317_317, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_318_318, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_319_319);
                                }
#line 804 "superhomogeneous.m"
                              }
#line 815 "superhomogeneous.m"
                            {
#line 815 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_713_713, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__Expansion_32, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_317_317, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_318_318, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_319_319, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                            }
#line 792 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 792 "superhomogeneous.m"
                          }
#line 792 "superhomogeneous.m"
                        }
#line 792 "superhomogeneous.m"
                        break;
#line 792 "superhomogeneous.m"
                      case (MR_Integer) 10:
#line 851 "superhomogeneous.m"
                        {
#line 851 "superhomogeneous.m"
                          /* case ";" */
#line 851 "superhomogeneous.m"
                          {
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_368;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_369;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__CondTerm0_57;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ThenTerm0_58;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__CondTerm_62;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__MaybeVarsCond_63;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_239_239;
#line 851 "superhomogeneous.m"
                            MR_String hlds__make_hlds__superhomogeneous__V_240_240;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_241_241;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_242_242;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_243_243;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_256_256;
#line 851 "superhomogeneous.m"
                            MR_String hlds__make_hlds__superhomogeneous__V_257_257;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_258_258;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_259;
#line 851 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_328;
#line 849 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_61_61;

#line 849 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_713_713)) == (MR_mktag((MR_Integer) 0)));
#line 849 "superhomogeneous.m"
                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 849 "superhomogeneous.m"
                              {
#line 849 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 0)));
#line 849 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 1)));
#line 849 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 2)));
#line 849 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_239_239)) == (MR_mktag((MR_Integer) 0)));
#line 849 "superhomogeneous.m"
                                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 849 "superhomogeneous.m"
                                  {
#line 849 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__V_240_240 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_239_239, (MR_Integer) 0)));
#line 849 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_240_240, (MR_String) "->") == 0);
#line 851 "superhomogeneous.m"
                                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 851 "superhomogeneous.m"
                                      {
#line 850 "superhomogeneous.m"
                                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_241_241)) == (MR_mktag((MR_Integer) 1)));
#line 850 "superhomogeneous.m"
                                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 850 "superhomogeneous.m"
                                          {
#line 850 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__CondTerm0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_241_241, (MR_Integer) 0)));
#line 850 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_241_241, (MR_Integer) 1)));
#line 850 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_242_242)) == (MR_mktag((MR_Integer) 1)));
#line 850 "superhomogeneous.m"
                                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 850 "superhomogeneous.m"
                                              {
#line 850 "superhomogeneous.m"
                                                hlds__make_hlds__superhomogeneous__ThenTerm0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_242_242, (MR_Integer) 0)));
#line 850 "superhomogeneous.m"
                                                hlds__make_hlds__superhomogeneous__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_242_242, (MR_Integer) 1)));
#line 850 "superhomogeneous.m"
                                                hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_243_243 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 851 "superhomogeneous.m"
                                                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 851 "superhomogeneous.m"
                                                  {
#line 2791 "hlds.make_hlds.superhomogeneous.c"
                                                    hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_368 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2793 "hlds.make_hlds.superhomogeneous.c"
                                                    hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_369 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 854 "superhomogeneous.m"
                                                    {
#line 854 "superhomogeneous.m"
                                                      mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_368, hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_369, hlds__make_hlds__superhomogeneous__CondTerm0_57, &hlds__make_hlds__superhomogeneous__CondTerm_62);
                                                    }
#line 855 "superhomogeneous.m"
                                                    hlds__make_hlds__superhomogeneous__V_257_257 = (MR_String) "Error:";
#line 855 "superhomogeneous.m"
                                                    hlds__make_hlds__superhomogeneous__V_258_258 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 855 "superhomogeneous.m"
                                                    hlds__make_hlds__superhomogeneous__V_256_256 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[7]);
#line 855 "superhomogeneous.m"
                                                    hlds__make_hlds__superhomogeneous__ContextPieces_328 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[8]);
#line 856 "superhomogeneous.m"
                                                    {
#line 856 "superhomogeneous.m"
                                                      parse_tree__prog_io_goal__parse_some_vars_goal_5_p_0(hlds__make_hlds__superhomogeneous__CondTerm_62, hlds__make_hlds__superhomogeneous__ContextPieces_328, &hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_259);
                                                    }
#line 908 "superhomogeneous.m"
                                                    if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeVarsCond_63)) == (MR_mktag((MR_Integer) 0))))
#line 909 "superhomogeneous.m"
                                                      {
#line 909 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__VarsCondSpecs_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 0)));
#line 909 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_262_262;
#line 909 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_263_263;

#line 910 "superhomogeneous.m"
                                                        {
#line 910 "superhomogeneous.m"
                                                          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__VarsCondSpecs_91, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145);
                                                        }
#line 912 "superhomogeneous.m"
                                                        {
#line 912 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_263_263 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_27);
                                                        }
#line 912 "superhomogeneous.m"
                                                        {
#line 912 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_262_262 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_263_263)));
                                                        }
#line 911 "superhomogeneous.m"
                                                        {
#line 911 "superhomogeneous.m"
                                                          MR_Word base;
#line 911 "superhomogeneous.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 911 "superhomogeneous.m"
                                                          *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 911 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 911 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_262_262));
#line 911 "superhomogeneous.m"
                                                        }
#line 909 "superhomogeneous.m"
                                                        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135;
#line 909 "superhomogeneous.m"
                                                        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137;
#line 909 "superhomogeneous.m"
                                                        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_259;
#line 909 "superhomogeneous.m"
                                                        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
#line 909 "superhomogeneous.m"
                                                        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143;
#line 909 "superhomogeneous.m"
                                                      }
#line 908 "superhomogeneous.m"
                                                    else
#line 859 "superhomogeneous.m"
                                                      {
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_370_370;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__Vars_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 0)));
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__StateVars_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 1)));
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__CondParseTree_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 2)));
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_68;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__EmptySubst_69;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__CondGoal_70;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ThenTerm_72;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_73;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ThenExpansion_74;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_75;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ThenGoalInfo_76;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ThenGoal0_77;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterThenSVarState_78;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ElseTerm_79;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState0_80;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ElseExpansion_81;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState_82;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ElseGoalInfo_83;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ElseGoal0_84;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ThenGoal_85;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ElseGoal_86;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_88;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_89;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__Goal_90;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_264;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_266_266;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_267_267;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_268_268;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_269_269;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_270_270;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_271_271;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_272_272;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_273_273;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_274_274;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_275_275;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_276_276;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_277_277;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_278_278;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_279_279;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_280_280;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_281_281;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_282_282;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_285_285;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_286_286;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_292_292;
#line 859 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_294_294;

#line 861 "superhomogeneous.m"
                                                        {
#line 861 "superhomogeneous.m"
                                                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_259, hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_68, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_264);
                                                        }
#line 2971 "hlds.make_hlds.superhomogeneous.c"
                                                        hlds__make_hlds__superhomogeneous__TypeInfo_370_370 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 863 "superhomogeneous.m"
                                                        {
#line 863 "superhomogeneous.m"
                                                          mercury__map__init_1_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_370_370, hlds__make_hlds__superhomogeneous__TypeInfo_370_370, &hlds__make_hlds__superhomogeneous__EmptySubst_69);
                                                        }
#line 865 "superhomogeneous.m"
                                                        {
#line 865 "superhomogeneous.m"
                                                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__CondParseTree_66, hlds__make_hlds__superhomogeneous__EmptySubst_69, &hlds__make_hlds__superhomogeneous__CondGoal_70, hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_68, &hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_266_266, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_259_259, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_267_267, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_268_268, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_269_269, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_264, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_270_270);
                                                        }
#line 870 "superhomogeneous.m"
                                                        {
#line 870 "superhomogeneous.m"
                                                          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__ThenTerm0_58, &hlds__make_hlds__superhomogeneous__ThenTerm_72, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_267_267, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_271_271, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_73, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_270_270, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_272_272);
                                                        }
#line 873 "superhomogeneous.m"
                                                        {
#line 873 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ThenTerm_72, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ThenExpansion_74, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_73, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_75, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_266_266, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_273_273, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_271_271, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_274_274, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_268_268, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_275_275, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_269_269, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_276_276, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_272_272, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_277_277);
                                                        }
#line 878 "superhomogeneous.m"
                                                        {
#line 878 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_278_278 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_368, hlds__make_hlds__superhomogeneous__ThenTerm_72);
                                                        }
#line 878 "superhomogeneous.m"
                                                        {
#line 878 "superhomogeneous.m"
                                                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_278_278, &hlds__make_hlds__superhomogeneous__ThenGoalInfo_76);
                                                        }
#line 879 "superhomogeneous.m"
                                                        {
#line 879 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ThenGoalInfo_76, hlds__make_hlds__superhomogeneous__ThenExpansion_74, &hlds__make_hlds__superhomogeneous__ThenGoal0_77);
                                                        }
#line 882 "superhomogeneous.m"
                                                        {
#line 882 "superhomogeneous.m"
                                                          hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_75, &hlds__make_hlds__superhomogeneous__AfterThenSVarState_78);
                                                        }
#line 885 "superhomogeneous.m"
                                                        {
#line 885 "superhomogeneous.m"
                                                          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_715_715, &hlds__make_hlds__superhomogeneous__ElseTerm_79, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_274_274, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_279_279, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__AfterElseSVarState0_80, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_277_277, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_280_280);
                                                        }
#line 887 "superhomogeneous.m"
                                                        {
#line 887 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ElseTerm_79, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ElseExpansion_81, hlds__make_hlds__superhomogeneous__AfterElseSVarState0_80, &hlds__make_hlds__superhomogeneous__AfterElseSVarState_82, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_273_273, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_281_281, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_279_279, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_282_282, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_275_275, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_276_276, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_280_280, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_285_285);
                                                        }
#line 892 "superhomogeneous.m"
                                                        {
#line 892 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_286_286 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_368_368, hlds__make_hlds__superhomogeneous__ElseTerm_79);
                                                        }
#line 892 "superhomogeneous.m"
                                                        {
#line 892 "superhomogeneous.m"
                                                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_286_286, &hlds__make_hlds__superhomogeneous__ElseGoalInfo_83);
                                                        }
#line 893 "superhomogeneous.m"
                                                        {
#line 893 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ElseGoalInfo_83, hlds__make_hlds__superhomogeneous__ElseExpansion_81, &hlds__make_hlds__superhomogeneous__ElseGoal0_84);
                                                        }
#line 896 "superhomogeneous.m"
                                                        {
#line 896 "superhomogeneous.m"
                                                          hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__ThenGoal0_77, &hlds__make_hlds__superhomogeneous__ThenGoal_85, hlds__make_hlds__superhomogeneous__ElseGoal0_84, &hlds__make_hlds__superhomogeneous__ElseGoal_86, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71, hlds__make_hlds__superhomogeneous__AfterThenSVarState_78, hlds__make_hlds__superhomogeneous__AfterElseSVarState_82, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_282_282, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_281_281, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_285_285, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                                        }
#line 903 "superhomogeneous.m"
                                                        {
#line 903 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_292_292 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeInfo_370_370, hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__Vars_64);
                                                        }
#line 903 "superhomogeneous.m"
                                                        {
#line 903 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__GoalExpr_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 903 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 903 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_292_292));
#line 903 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__CondGoal_70));
#line 903 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ThenGoal_85));
#line 903 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 4) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ElseGoal_86));
#line 903 "superhomogeneous.m"
                                                        }
#line 905 "superhomogeneous.m"
                                                        {
#line 905 "superhomogeneous.m"
                                                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_89);
                                                        }
#line 906 "superhomogeneous.m"
                                                        {
#line 906 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__Goal_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 906 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_90, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_88));
#line 906 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_90, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_89));
#line 906 "superhomogeneous.m"
                                                        }
#line 907 "superhomogeneous.m"
                                                        {
#line 907 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_294_294 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_90)));
                                                        }
#line 907 "superhomogeneous.m"
                                                        {
#line 907 "superhomogeneous.m"
                                                          MR_Word base;
#line 907 "superhomogeneous.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 907 "superhomogeneous.m"
                                                          *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 907 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 907 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_294_294));
#line 907 "superhomogeneous.m"
                                                        }
#line 859 "superhomogeneous.m"
                                                      }
#line 908 "superhomogeneous.m"
                                                    hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 851 "superhomogeneous.m"
                                                  }
#line 850 "superhomogeneous.m"
                                              }
#line 850 "superhomogeneous.m"
                                          }
#line 851 "superhomogeneous.m"
                                      }
#line 849 "superhomogeneous.m"
                                  }
#line 849 "superhomogeneous.m"
                              }
#line 851 "superhomogeneous.m"
                          }
#line 851 "superhomogeneous.m"
                        }
#line 792 "superhomogeneous.m"
                        break;
#line 792 "superhomogeneous.m"
                      case (MR_Integer) 13:
#line 942 "superhomogeneous.m"
                        {
#line 942 "superhomogeneous.m"
                          /* case ":=" */
#line 942 "superhomogeneous.m"
                          {
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_375_375;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__FieldValueTerm_105;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__FieldValueVar_106;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InnerFunctor_107;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__FieldSubContext_108;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__SetGoal_109;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TermArgContext_110;
#line 942 "superhomogeneous.m"
                            MR_Integer hlds__make_hlds__superhomogeneous__TermArgNumber_111;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__FieldArgContext_112;
#line 942 "superhomogeneous.m"
                            MR_Integer hlds__make_hlds__superhomogeneous__FieldArgNumber_113;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ArgContexts_114;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InputFieldArgExpansions_115;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_174_174;
#line 942 "superhomogeneous.m"
                            MR_String hlds__make_hlds__superhomogeneous__V_175_175;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_176_176;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_177_177;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_178_178;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_179_179;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_180_180;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_181_181;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_182_182;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_183_183;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_184_184;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_185_185;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_186_186;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_187_187;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_188_188;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_189_189;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_190_190;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_191_191;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_192_192;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_193_193;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_194_194;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_195_195;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_196_196;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_197_197;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_198_198;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_199_199;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_200_200;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_201_201;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_202_202;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_209_209;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_210_210;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_211_211;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_212_212;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_213_213;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_214_214;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_337;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Goal_338;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InputTerm_339;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InputTermVar_340;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Functor_341;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InputTerm0_349;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__FieldNameTerm_350;
#line 942 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__FieldNames_351;
#line 944 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_104_104;

#line 944 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_713_713)) == (MR_mktag((MR_Integer) 0)));
#line 944 "superhomogeneous.m"
                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 944 "superhomogeneous.m"
                              {
#line 944 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 0)));
#line 944 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 1)));
#line 944 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_713_713, (MR_Integer) 2)));
#line 944 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_174_174)) == (MR_mktag((MR_Integer) 0)));
#line 944 "superhomogeneous.m"
                                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 944 "superhomogeneous.m"
                                  {
#line 944 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__V_175_175 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_174_174, (MR_Integer) 0)));
#line 944 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_175_175, (MR_String) "^") == 0);
#line 942 "superhomogeneous.m"
                                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 942 "superhomogeneous.m"
                                      {
#line 945 "superhomogeneous.m"
                                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_176_176)) == (MR_mktag((MR_Integer) 1)));
#line 945 "superhomogeneous.m"
                                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 945 "superhomogeneous.m"
                                          {
#line 945 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__InputTerm0_349 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_176_176, (MR_Integer) 0)));
#line 945 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_176_176, (MR_Integer) 1)));
#line 945 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_177_177)) == (MR_mktag((MR_Integer) 1)));
#line 945 "superhomogeneous.m"
                                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 945 "superhomogeneous.m"
                                              {
#line 945 "superhomogeneous.m"
                                                hlds__make_hlds__superhomogeneous__FieldNameTerm_350 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_177_177, (MR_Integer) 0)));
#line 945 "superhomogeneous.m"
                                                hlds__make_hlds__superhomogeneous__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_177_177, (MR_Integer) 1)));
#line 945 "superhomogeneous.m"
                                                hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_178_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 942 "superhomogeneous.m"
                                                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 942 "superhomogeneous.m"
                                                  {
#line 946 "superhomogeneous.m"
                                                    {
#line 946 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__field_access__maybe_parse_field_list_3_p_0(hlds__make_hlds__superhomogeneous__FieldNameTerm_350, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__FieldNames_351);
                                                    }
#line 942 "superhomogeneous.m"
                                                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 942 "superhomogeneous.m"
                                                      {
#line 949 "superhomogeneous.m"
                                                        {
#line 949 "superhomogeneous.m"
                                                          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__InputTerm0_349, &hlds__make_hlds__superhomogeneous__InputTerm_339, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_179_179, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_180_180, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_181_181);
                                                        }
#line 951 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_182_182 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 951 "superhomogeneous.m"
                                                        {
#line 951 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__InputTerm_339, &hlds__make_hlds__superhomogeneous__InputTermVar_340, hlds__make_hlds__superhomogeneous__V_182_182, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_179_179, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_183_183);
                                                        }
#line 952 "superhomogeneous.m"
                                                        {
#line 952 "superhomogeneous.m"
                                                          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_715_715, &hlds__make_hlds__superhomogeneous__FieldValueTerm_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_183_183, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_184_184, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_180_180, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_185_185, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_181_181, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_186_186);
                                                        }
#line 955 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_189_189 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 955 "superhomogeneous.m"
                                                        {
#line 955 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 955 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_187_187, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputTermVar_340));
#line 955 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_187_187, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_189_189));
#line 955 "superhomogeneous.m"
                                                        }
#line 954 "superhomogeneous.m"
                                                        {
#line 954 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__FieldValueTerm_105, &hlds__make_hlds__superhomogeneous__FieldValueVar_106, hlds__make_hlds__superhomogeneous__V_187_187, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_184_184, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_188_188);
                                                        }
#line 957 "superhomogeneous.m"
                                                        {
#line 957 "superhomogeneous.m"
                                                          hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__FieldNames_351, hlds__make_hlds__superhomogeneous__FieldValueVar_106, hlds__make_hlds__superhomogeneous__InputTermVar_340, hlds__make_hlds__superhomogeneous__XVar_23, &hlds__make_hlds__superhomogeneous__Functor_341, &hlds__make_hlds__superhomogeneous__V_190_190, &hlds__make_hlds__superhomogeneous__SetGoal_109, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_185_185, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_191_191, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_192_192, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_188_188, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_193_193, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_194_194, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_195_195, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_186_186, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_196_196);
                                                        }
#line 959 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__InnerFunctor_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_190_190, (MR_Integer) 0)));
#line 959 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__FieldSubContext_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_190_190, (MR_Integer) 1)));
#line 964 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__TermArgNumber_111 = (MR_Integer) 1;
#line 967 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__FieldArgNumber_113 = (MR_Integer) 2;
#line 969 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_200_200 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 970 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_210_210 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 971 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_212_212 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 963 "superhomogeneous.m"
                                                        {
#line 963 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__TermArgContext_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 963 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__TermArgContext_110, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Functor_341));
#line 963 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__TermArgContext_110, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
#line 963 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__TermArgContext_110, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_29));
#line 963 "superhomogeneous.m"
                                                        }
#line 965 "superhomogeneous.m"
                                                        {
#line 965 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__FieldArgContext_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 965 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__FieldArgContext_112, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InnerFunctor_107));
#line 965 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__FieldArgContext_112, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
#line 965 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__FieldArgContext_112, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldSubContext_108));
#line 965 "superhomogeneous.m"
                                                        }
#line 968 "superhomogeneous.m"
                                                        {
#line 968 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_197_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 968 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_197_197, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermArgNumber_111));
#line 968 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_197_197, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermArgContext_110));
#line 968 "superhomogeneous.m"
                                                        }
#line 969 "superhomogeneous.m"
                                                        {
#line 969 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_199_199 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 969 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_199_199, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldArgNumber_113));
#line 969 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_199_199, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldArgContext_112));
#line 969 "superhomogeneous.m"
                                                        }
#line 969 "superhomogeneous.m"
                                                        {
#line 969 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_198_198, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_199_199));
#line 969 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_198_198, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_200_200));
#line 969 "superhomogeneous.m"
                                                        }
#line 968 "superhomogeneous.m"
                                                        {
#line 968 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__ArgContexts_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_114, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_197_197));
#line 968 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_114, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_198_198));
#line 968 "superhomogeneous.m"
                                                        }
#line 970 "superhomogeneous.m"
                                                        {
#line 970 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_209_209, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldValueVar_106));
#line 970 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_209_209, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_210_210));
#line 970 "superhomogeneous.m"
                                                        }
#line 970 "superhomogeneous.m"
                                                        {
#line 970 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_201_201, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputTermVar_340));
#line 970 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_201_201, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_209_209));
#line 970 "superhomogeneous.m"
                                                        }
#line 971 "superhomogeneous.m"
                                                        {
#line 971 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_211_211, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldValueTerm_105));
#line 971 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_211_211, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_212_212));
#line 971 "superhomogeneous.m"
                                                        }
#line 971 "superhomogeneous.m"
                                                        {
#line 971 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_202_202, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputTerm_339));
#line 971 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_202_202, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_211_211));
#line 971 "superhomogeneous.m"
                                                        }
#line 970 "superhomogeneous.m"
                                                        {
#line 970 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(hlds__make_hlds__superhomogeneous__V_201_201, hlds__make_hlds__superhomogeneous__V_202_202, hlds__make_hlds__superhomogeneous__ArgContexts_114, hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__InputFieldArgExpansions_115, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_191_191, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_192_192, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_193_193, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_194_194, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_195_195, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_196_196, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                                        }
#line 975 "superhomogeneous.m"
                                                        {
#line 975 "superhomogeneous.m"
                                                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_337);
                                                        }
#line 976 "superhomogeneous.m"
                                                        {
#line 976 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_337, hlds__make_hlds__superhomogeneous__InputFieldArgExpansions_115, hlds__make_hlds__superhomogeneous__SetGoal_109, &hlds__make_hlds__superhomogeneous__Goal_338);
                                                        }
#line 978 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_213_213 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3476 "hlds.make_hlds.superhomogeneous.c"
                                                        hlds__make_hlds__superhomogeneous__TypeCtorInfo_375_375 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 978 "superhomogeneous.m"
                                                        {
#line 978 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_214_214 = mercury__cord__singleton_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_375_375, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_338)));
                                                        }
#line 978 "superhomogeneous.m"
                                                        {
#line 978 "superhomogeneous.m"
                                                          MR_Word base;
#line 978 "superhomogeneous.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 978 "superhomogeneous.m"
                                                          *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 978 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_213_213));
#line 978 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_214_214));
#line 978 "superhomogeneous.m"
                                                        }
#line 978 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 942 "superhomogeneous.m"
                                                      }
#line 942 "superhomogeneous.m"
                                                  }
#line 945 "superhomogeneous.m"
                                              }
#line 945 "superhomogeneous.m"
                                          }
#line 942 "superhomogeneous.m"
                                      }
#line 944 "superhomogeneous.m"
                                  }
#line 944 "superhomogeneous.m"
                              }
#line 942 "superhomogeneous.m"
                          }
#line 942 "superhomogeneous.m"
                        }
#line 792 "superhomogeneous.m"
                        break;
#line 792 "superhomogeneous.m"
                      case (MR_Integer) 15:
#line 917 "superhomogeneous.m"
                        {
#line 917 "superhomogeneous.m"
                          /* case "^" */
#line 917 "superhomogeneous.m"
                          {
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_374_374;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__FieldNames_94;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InputTerm_95;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InputTermVar_96;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Functor_97;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__GetGoal_99;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ArgContext_100;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InputArgExpansion_101;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_217_217;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_218_218;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_219_219;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_220_220;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_221_221;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_222_222;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_223_223;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_224_224;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_225_225;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_226_226;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_227_227;
#line 917 "superhomogeneous.m"
                            MR_Integer hlds__make_hlds__superhomogeneous__V_228_228;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_235_235;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_236_236;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_331;
#line 917 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Goal_332;
#line 925 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_98_98;

#line 919 "superhomogeneous.m"
                            {
#line 919 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__field_access__maybe_parse_field_list_3_p_0(hlds__make_hlds__superhomogeneous__V_715_715, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__FieldNames_94);
                            }
#line 917 "superhomogeneous.m"
                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 917 "superhomogeneous.m"
                              {
#line 922 "superhomogeneous.m"
                                {
#line 922 "superhomogeneous.m"
                                  hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_713_713, &hlds__make_hlds__superhomogeneous__InputTerm_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_217_217, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_218_218, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_219_219);
                                }
#line 924 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_220_220 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 924 "superhomogeneous.m"
                                {
#line 924 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__InputTerm_95, &hlds__make_hlds__superhomogeneous__InputTermVar_96, hlds__make_hlds__superhomogeneous__V_220_220, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_217_217, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_221_221);
                                }
#line 925 "superhomogeneous.m"
                                {
#line 925 "superhomogeneous.m"
                                  hlds__make_hlds__field_access__expand_get_field_function_call_22_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__FieldNames_94, hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__InputTermVar_96, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__Functor_97, &hlds__make_hlds__superhomogeneous__V_98_98, &hlds__make_hlds__superhomogeneous__GetGoal_99, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_218_218, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_222_222, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_223_223, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_221_221, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_224_224, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_225_225, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_226_226, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_219_219, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_227_227);
                                }
#line 932 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_228_228 = (MR_Integer) 1;
#line 930 "superhomogeneous.m"
                                {
#line 930 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__ArgContext_100 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 930 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_100, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Functor_97));
#line 930 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_100, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
#line 930 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_100, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_29));
#line 930 "superhomogeneous.m"
                                }
#line 931 "superhomogeneous.m"
                                {
#line 931 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__InputTermVar_96, hlds__make_hlds__superhomogeneous__InputTerm_95, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__ArgContext_100, hlds__make_hlds__superhomogeneous__V_228_228, &hlds__make_hlds__superhomogeneous__InputArgExpansion_101, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_222_222, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_223_223, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_224_224, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_225_225, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_226_226, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_227_227, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                }
#line 935 "superhomogeneous.m"
                                {
#line 935 "superhomogeneous.m"
                                  hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_331);
                                }
#line 936 "superhomogeneous.m"
                                {
#line 936 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_331, hlds__make_hlds__superhomogeneous__InputArgExpansion_101, hlds__make_hlds__superhomogeneous__GetGoal_99, &hlds__make_hlds__superhomogeneous__Goal_332);
                                }
#line 938 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_235_235 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3635 "hlds.make_hlds.superhomogeneous.c"
                                hlds__make_hlds__superhomogeneous__TypeCtorInfo_374_374 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 938 "superhomogeneous.m"
                                {
#line 938 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__V_236_236 = mercury__cord__singleton_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_374_374, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_332)));
                                }
#line 938 "superhomogeneous.m"
                                {
#line 938 "superhomogeneous.m"
                                  MR_Word base;
#line 938 "superhomogeneous.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 938 "superhomogeneous.m"
                                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 938 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_235_235));
#line 938 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_236_236));
#line 938 "superhomogeneous.m"
                                }
#line 938 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 917 "superhomogeneous.m"
                              }
#line 917 "superhomogeneous.m"
                          }
#line 917 "superhomogeneous.m"
                        }
#line 792 "superhomogeneous.m"
                        break;
#line 792 "superhomogeneous.m"
                    }
#line 792 "superhomogeneous.m"
                    /* jump out of search loop */
#line 792 "superhomogeneous.m"
                    goto label_0;
#line 792 "superhomogeneous.m"
                  }
#line 792 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = MR_FALSE;
#line 792 "superhomogeneous.m"
              label_0:;
#line 792 "superhomogeneous.m"
              }
#line 985 "superhomogeneous.m"
          }
#line 985 "superhomogeneous.m"
      }
#line 792 "superhomogeneous.m"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 792 "superhomogeneous.m"
  }
#line 771 "superhomogeneous.m"
}

#line 594 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctor0_24,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YArgTerms0_25,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
#line 594 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_88,
#line 594 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90,
#line 594 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_92,
#line 594 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94,
#line 594 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96,
#line 594 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97,
#line 594 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_98,
#line 594 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99)
#line 594 "superhomogeneous.m"
{
#line 605 "superhomogeneous.m"
  {
#line 605 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 605 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__YFunctor_39;
#line 605 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_40;
#line 605 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_100_100;
#line 605 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101;
#line 605 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
#line 605 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103;
#line 617 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionPrime_42;
#line 617 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_104_104;
#line 617 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_105_105;
#line 617 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_106_106;
#line 617 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_107_107;
#line 617 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_108_108;
#line 617 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_109_109;
#line 610 "superhomogeneous.m"
    MR_String hlds__make_hlds__superhomogeneous__YAtom_41;

#line 606 "superhomogeneous.m"
    {
#line 606 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__convert_big_integer_functor_5_p_0(hlds__make_hlds__superhomogeneous__YFunctor0_24, &hlds__make_hlds__superhomogeneous__YFunctor_39, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_98, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_100_100);
    }
#line 607 "superhomogeneous.m"
    {
#line 607 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__YArgTerms0_25, &hlds__make_hlds__superhomogeneous__YArgTerms_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_92, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_88, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_100_100, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103);
    }
#line 610 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YFunctor_39)) == (MR_mktag((MR_Integer) 0)));
#line 610 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 610 "superhomogeneous.m"
      {
#line 610 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__YAtom_41 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YFunctor_39, (MR_Integer) 0)));
#line 611 "superhomogeneous.m"
        {
#line 611 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__YAtom_41, hlds__make_hlds__superhomogeneous__YArgTerms_40, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ExpansionPrime_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_104_104, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_105_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_106_106, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_107_107, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_108_108, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_109_109);
        }
#line 610 "superhomogeneous.m"
      }
#line 617 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 616 "superhomogeneous.m"
      {
#line 616 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_109_109;
#line 616 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_108_108;
#line 616 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_107_107;
#line 616 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_106_106;
#line 616 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_105_105;
#line 616 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_104_104;
#line 616 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__Expansion_32 = hlds__make_hlds__superhomogeneous__ExpansionPrime_42;
#line 616 "superhomogeneous.m"
      }
#line 617 "superhomogeneous.m"
    else
#line 659 "superhomogeneous.m"
      {
#line 659 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__GoalTerm1_45;
#line 659 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__LambdaPurity_47;
#line 659 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_54;
#line 659 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Groundness_56;
#line 659 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Vars1_57;
#line 659 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Modes1_58;
#line 659 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Det1_59;
#line 619 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_186_186 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 619 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_187_187;
#line 619 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__RHS_43;
#line 619 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadTerm0_44;
#line 619 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadTerm1_46;
#line 619 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadTerm_48;
#line 633 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Groundness0_49;
#line 633 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Vars0_51;
#line 633 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Modes0_52;
#line 633 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Det0_53;

#line 619 "superhomogeneous.m"
        {
#line 619 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__RHS_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 619 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__RHS_43, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YFunctor_39));
#line 619 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__RHS_43, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YArgTerms_40));
#line 619 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__RHS_43, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YFunctorContext_26));
#line 619 "superhomogeneous.m"
        }
#line 620 "superhomogeneous.m"
        {
#line 620 "superhomogeneous.m"
          parse_tree__prog_util__parse_rule_term_4_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_186_186, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__RHS_43, &hlds__make_hlds__superhomogeneous__HeadTerm0_44, &hlds__make_hlds__superhomogeneous__GoalTerm1_45);
        }
#line 3872 "hlds.make_hlds.superhomogeneous.c"
        hlds__make_hlds__superhomogeneous__TypeCtorInfo_187_187 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 621 "superhomogeneous.m"
        {
#line 621 "superhomogeneous.m"
          mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_186_186, hlds__make_hlds__superhomogeneous__TypeCtorInfo_187_187, hlds__make_hlds__superhomogeneous__HeadTerm0_44, &hlds__make_hlds__superhomogeneous__HeadTerm1_46);
        }
#line 622 "superhomogeneous.m"
        {
#line 622 "superhomogeneous.m"
          parse_tree__prog_io_util__parse_purity_annotation_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_187_187, hlds__make_hlds__superhomogeneous__HeadTerm1_46, &hlds__make_hlds__superhomogeneous__LambdaPurity_47, &hlds__make_hlds__superhomogeneous__HeadTerm_48);
        }
#line 624 "superhomogeneous.m"
        {
#line 624 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_goal__parse_pred_expression_6_p_0(hlds__make_hlds__superhomogeneous__HeadTerm_48, &hlds__make_hlds__superhomogeneous__Groundness0_49, &hlds__make_hlds__superhomogeneous__Vars0_51, &hlds__make_hlds__superhomogeneous__Modes0_52, &hlds__make_hlds__superhomogeneous__Det0_53);
        }
#line 633 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 627 "superhomogeneous.m"
          {
#line 627 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__PredOrFunc_54 = (MR_Integer) 0;
#line 629 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__Groundness_56 = hlds__make_hlds__superhomogeneous__Groundness0_49;
#line 630 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__Vars1_57 = hlds__make_hlds__superhomogeneous__Vars0_51;
#line 631 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__Modes1_58 = hlds__make_hlds__superhomogeneous__Modes0_52;
#line 632 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__Det1_59 = hlds__make_hlds__superhomogeneous__Det0_53;
#line 627 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 627 "superhomogeneous.m"
          }
#line 633 "superhomogeneous.m"
        else
#line 635 "superhomogeneous.m"
          {
#line 634 "superhomogeneous.m"
            {
#line 634 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_goal__parse_func_expression_6_p_0(hlds__make_hlds__superhomogeneous__HeadTerm_48, &hlds__make_hlds__superhomogeneous__Groundness_56, &hlds__make_hlds__superhomogeneous__Vars1_57, &hlds__make_hlds__superhomogeneous__Modes1_58, &hlds__make_hlds__superhomogeneous__Det1_59);
            }
#line 635 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 635 "superhomogeneous.m"
              {
#line 636 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__PredOrFunc_54 = (MR_Integer) 1;
#line 636 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 635 "superhomogeneous.m"
              }
#line 635 "superhomogeneous.m"
          }
#line 659 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 640 "superhomogeneous.m"
          {
#line 640 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Modes_60;
#line 640 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__GoalTerm_62;
#line 640 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeParsedGoal_64;
#line 640 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_110_110;
#line 640 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_111_111;
#line 640 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_115_115;

#line 639 "superhomogeneous.m"
            {
#line 639 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(hlds__make_hlds__superhomogeneous__Modes1_58, &hlds__make_hlds__superhomogeneous__Modes_60, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_110_110, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_111_111);
            }
#line 642 "superhomogeneous.m"
            {
#line 642 "superhomogeneous.m"
              mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__make_hlds__superhomogeneous__GoalTerm1_45, &hlds__make_hlds__superhomogeneous__GoalTerm_62);
            }
#line 644 "superhomogeneous.m"
            {
#line 644 "superhomogeneous.m"
              parse_tree__prog_io_goal__parse_goal_5_p_0(hlds__make_hlds__superhomogeneous__GoalTerm_62, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[8]), &hlds__make_hlds__superhomogeneous__MaybeParsedGoal_64, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_115_115);
            }
#line 653 "superhomogeneous.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeParsedGoal_64)) == (MR_mktag((MR_Integer) 0))))
#line 654 "superhomogeneous.m"
              {
#line 654 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_64, (MR_Integer) 0)));
#line 654 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_118_118;
#line 654 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_119_119;

#line 655 "superhomogeneous.m"
                {
#line 655 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_67, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_111_111);
                }
#line 657 "superhomogeneous.m"
                {
#line 657 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_119_119 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_27);
                }
#line 657 "superhomogeneous.m"
                {
#line 657 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_118_118 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_119_119)));
                }
#line 656 "superhomogeneous.m"
                {
#line 656 "superhomogeneous.m"
                  MR_Word base;
#line 656 "superhomogeneous.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 656 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 656 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 656 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_118_118));
#line 656 "superhomogeneous.m"
                }
#line 654 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90;
#line 654 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_115_115;
#line 654 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94;
#line 654 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_110_110;
#line 654 "superhomogeneous.m"
              }
#line 653 "superhomogeneous.m"
            else
#line 646 "superhomogeneous.m"
              {
#line 646 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_64, (MR_Integer) 0)));
#line 646 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__Goal_66;
#line 646 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_126_126;

#line 647 "superhomogeneous.m"
                {
#line 647 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__LambdaPurity_47, hlds__make_hlds__superhomogeneous__Groundness_56, hlds__make_hlds__superhomogeneous__PredOrFunc_54, hlds__make_hlds__superhomogeneous__Vars1_57, hlds__make_hlds__superhomogeneous__Modes_60, hlds__make_hlds__superhomogeneous__Det1_59, hlds__make_hlds__superhomogeneous__ParsedGoal_65, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, &hlds__make_hlds__superhomogeneous__Goal_66, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_115_115, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_110_110, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_111_111, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99);
                }
#line 652 "superhomogeneous.m"
                {
#line 652 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_126_126 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_66)));
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
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_126_126));
#line 652 "superhomogeneous.m"
                }
#line 646 "superhomogeneous.m"
              }
#line 640 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
#line 640 "superhomogeneous.m"
          }
#line 659 "superhomogeneous.m"
        else
#line 691 "superhomogeneous.m"
          {
#line 691 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77;
#line 691 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ConsId_79;
#line 691 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_135_135;
#line 691 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_136_136;
#line 691 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_137_137;
#line 685 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__FunctorName_75;
#line 685 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_76;
#line 685 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_130_130;
#line 685 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_131_131;
#line 685 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_132_132;
#line 665 "superhomogeneous.m"
            MR_String hlds__make_hlds__superhomogeneous__FName_68;
#line 677 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ModuleTerm_69;
#line 677 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NameArgsTerm_70;
#line 667 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_127_127;
#line 667 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_128_128;

#line 665 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YFunctor_39)) == (MR_mktag((MR_Integer) 0)));
#line 665 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 665 "superhomogeneous.m"
              {
#line 665 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__FName_68 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YFunctor_39, (MR_Integer) 0)));
#line 667 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__FName_68, (MR_String) ".") == 0);
#line 667 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 667 "superhomogeneous.m"
                  {
#line 668 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YArgTerms_40)) == (MR_mktag((MR_Integer) 1)));
#line 668 "superhomogeneous.m"
                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 668 "superhomogeneous.m"
                      {
#line 668 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__ModuleTerm_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgTerms_40, (MR_Integer) 0)));
#line 668 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgTerms_40, (MR_Integer) 1)));
#line 668 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_127_127)) == (MR_mktag((MR_Integer) 1)));
#line 668 "superhomogeneous.m"
                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 668 "superhomogeneous.m"
                          {
#line 668 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__NameArgsTerm_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_127_127, (MR_Integer) 0)));
#line 668 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_127_127, (MR_Integer) 1)));
#line 668 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_128_128 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "superhomogeneous.m"
                          }
#line 668 "superhomogeneous.m"
                      }
#line 667 "superhomogeneous.m"
                  }
#line 677 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 670 "superhomogeneous.m"
                  {
#line 670 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_193_193;
#line 670 "superhomogeneous.m"
                    MR_String hlds__make_hlds__superhomogeneous__Name_71;
#line 670 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__NameArgTerms_72;
#line 670 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__Module_74;
#line 670 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_129_129;
#line 670 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_73_73;

#line 670 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__NameArgsTerm_70)) == (MR_mktag((MR_Integer) 0)));
#line 670 "superhomogeneous.m"
                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 670 "superhomogeneous.m"
                      {
#line 670 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__NameArgsTerm_70, (MR_Integer) 0)));
#line 670 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__NameArgTerms_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__NameArgsTerm_70, (MR_Integer) 1)));
#line 670 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__NameArgsTerm_70, (MR_Integer) 2)));
#line 670 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_129_129)) == (MR_mktag((MR_Integer) 0)));
#line 670 "superhomogeneous.m"
                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 670 "superhomogeneous.m"
                          {
#line 670 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__Name_71 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_129_129, (MR_Integer) 0)));
#line 4165 "hlds.make_hlds.superhomogeneous.c"
                            hlds__make_hlds__superhomogeneous__TypeCtorInfo_193_193 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 671 "superhomogeneous.m"
                            {
#line 671 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_193_193, hlds__make_hlds__superhomogeneous__ModuleTerm_69, &hlds__make_hlds__superhomogeneous__Module_74);
                            }
#line 670 "superhomogeneous.m"
                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 670 "superhomogeneous.m"
                              {
#line 672 "superhomogeneous.m"
                                {
#line 672 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__FunctorName_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__FunctorName_75, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Module_74));
#line 672 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__FunctorName_75, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Name_71));
#line 672 "superhomogeneous.m"
                                }
#line 675 "superhomogeneous.m"
                                {
#line 675 "superhomogeneous.m"
                                  hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__NameArgTerms_72, &hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_76, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_130_130, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_131_131, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_132_132);
                                }
#line 675 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 670 "superhomogeneous.m"
                              }
#line 670 "superhomogeneous.m"
                          }
#line 670 "superhomogeneous.m"
                      }
#line 670 "superhomogeneous.m"
                  }
#line 677 "superhomogeneous.m"
                else
#line 678 "superhomogeneous.m"
                  {
#line 678 "superhomogeneous.m"
                    {
#line 678 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__FunctorName_75 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(hlds__make_hlds__superhomogeneous__FName_68, (MR_String) "__");
                    }
#line 679 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_76 = hlds__make_hlds__superhomogeneous__YArgTerms_40;
#line 678 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_132_132 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103;
#line 678 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_130_130 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101;
#line 678 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_131_131 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
#line 678 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 678 "superhomogeneous.m"
                  }
#line 665 "superhomogeneous.m"
              }
#line 685 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 682 "superhomogeneous.m"
              {
#line 682 "superhomogeneous.m"
                MR_Integer hlds__make_hlds__superhomogeneous__Arity_78;
#line 682 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_134_134;

#line 682 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_137_137 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_132_132;
#line 682 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_136_136 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_130_130;
#line 682 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_135_135 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_131_131;
#line 682 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77 = hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_76;
#line 683 "superhomogeneous.m"
                {
#line 683 "superhomogeneous.m"
                  mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2], hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77, &hlds__make_hlds__superhomogeneous__Arity_78);
                }
#line 684 "superhomogeneous.m"
                {
#line 684 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_134_134 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 684 "superhomogeneous.m"
                {
#line 684 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__ConsId_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 684 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 684 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_79, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FunctorName_75));
#line 684 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_79, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arity_78));
#line 684 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_79, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_134_134));
#line 684 "superhomogeneous.m"
                }
#line 682 "superhomogeneous.m"
              }
#line 685 "superhomogeneous.m"
            else
#line 688 "superhomogeneous.m"
              {
#line 688 "superhomogeneous.m"
                MR_Integer hlds__make_hlds__superhomogeneous__Arity_172;

#line 688 "superhomogeneous.m"
                {
#line 688 "superhomogeneous.m"
                  mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2], hlds__make_hlds__superhomogeneous__YArgTerms_40, &hlds__make_hlds__superhomogeneous__Arity_172);
                }
#line 689 "superhomogeneous.m"
                {
#line 689 "superhomogeneous.m"
                  parse_tree__prog_util__det_make_functor_cons_id_3_p_0(hlds__make_hlds__superhomogeneous__YFunctor_39, hlds__make_hlds__superhomogeneous__Arity_172, &hlds__make_hlds__superhomogeneous__ConsId_79);
                }
#line 690 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77 = hlds__make_hlds__superhomogeneous__YArgTerms_40;
#line 688 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_137_137 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103;
#line 688 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_136_136 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101;
#line 688 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_135_135 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
#line 688 "superhomogeneous.m"
              }
#line 702 "superhomogeneous.m"
            if ((hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 695 "superhomogeneous.m"
              {
#line 695 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__FunctorGoal_80;
#line 695 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_165_165;
#line 695 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_169_169;
#line 695 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_171_171;
#line 695 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__Goal_173;

#line 697 "superhomogeneous.m"
                {
#line 697 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 697 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_165_165, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_79));
#line 697 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_165_165, 1) = ((MR_Box) ((MR_Integer) 0));
#line 697 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_165_165, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "superhomogeneous.m"
                }
#line 696 "superhomogeneous.m"
                {
#line 696 "superhomogeneous.m"
                  hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_165_165, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__FunctorGoal_80, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97);
                }
#line 700 "superhomogeneous.m"
                {
#line 700 "superhomogeneous.m"
                  hlds__hlds_goal__goal_set_purity_3_p_0(hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__FunctorGoal_80, &hlds__make_hlds__superhomogeneous__Goal_173);
                }
#line 701 "superhomogeneous.m"
                {
#line 701 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_169_169, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_23));
#line 701 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_169_169, 1) = ((MR_Box) ((MR_Integer) 1));
#line 701 "superhomogeneous.m"
                }
#line 701 "superhomogeneous.m"
                {
#line 701 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_171_171 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_173)));
                }
#line 701 "superhomogeneous.m"
                {
#line 701 "superhomogeneous.m"
                  MR_Word base;
#line 701 "superhomogeneous.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 701 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 701 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_169_169));
#line 701 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_171_171));
#line 701 "superhomogeneous.m"
                }
#line 695 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_135_135;
#line 695 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90;
#line 695 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_136_136;
#line 695 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94;
#line 695 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_137_137;
#line 695 "superhomogeneous.m"
              }
#line 702 "superhomogeneous.m"
            else
#line 703 "superhomogeneous.m"
              {
#line 703 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ArgContext_83;

#line 704 "superhomogeneous.m"
                {
#line 704 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__ArgContext_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 704 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_83, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_79));
#line 704 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_83, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
#line 704 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_83, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_29));
#line 704 "superhomogeneous.m"
                }
#line 722 "superhomogeneous.m"
#line 722 "superhomogeneous.m"
                switch (hlds__make_hlds__superhomogeneous__Purity_30) {
#line 722 "superhomogeneous.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 722 "superhomogeneous.m"
                  case (MR_Integer) 2:
#line 722 "superhomogeneous.m"
                  case (MR_Integer) 1:
#line 725 "superhomogeneous.m"
                    {
#line 725 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__Goal0_87;
#line 725 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_145_145;
#line 725 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__V_147_147;
#line 725 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__V_151_151;
#line 725 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__Goal_175;
#line 725 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__FunctorGoal_176;
#line 725 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__YVars_177;
#line 725 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_178;
#line 725 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_179;

#line 730 "superhomogeneous.m"
                      {
#line 730 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__ArgContext_83, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__superhomogeneous__YVars_177, &hlds__make_hlds__superhomogeneous__ArgExpansions_178, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_135_135, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_136_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_145_145, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_137_137, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99);
                      }
#line 735 "superhomogeneous.m"
                      {
#line 735 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 735 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_147_147, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_79));
#line 735 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_147_147, 1) = ((MR_Box) ((MR_Integer) 0));
#line 735 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_147_147, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVars_177));
#line 735 "superhomogeneous.m"
                      }
#line 734 "superhomogeneous.m"
                      {
#line 734 "superhomogeneous.m"
                        hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_147_147, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__FunctorGoal_176, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_145_145, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97);
                      }
#line 738 "superhomogeneous.m"
                      {
#line 738 "superhomogeneous.m"
                        hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_179);
                      }
#line 739 "superhomogeneous.m"
                      {
#line 739 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_179, hlds__make_hlds__superhomogeneous__ArgExpansions_178, hlds__make_hlds__superhomogeneous__FunctorGoal_176, &hlds__make_hlds__superhomogeneous__Goal0_87);
                      }
#line 741 "superhomogeneous.m"
                      {
#line 741 "superhomogeneous.m"
                        hlds__hlds_goal__goal_set_purity_3_p_0(hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__Goal0_87, &hlds__make_hlds__superhomogeneous__Goal_175);
                      }
#line 742 "superhomogeneous.m"
                      {
#line 742 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_151_151 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_175)));
                      }
#line 742 "superhomogeneous.m"
                      {
#line 742 "superhomogeneous.m"
                        MR_Word base;
#line 742 "superhomogeneous.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 742 "superhomogeneous.m"
                        *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 742 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_151_151));
#line 742 "superhomogeneous.m"
                      }
#line 725 "superhomogeneous.m"
                    }
#line 722 "superhomogeneous.m"
                    break;
#line 722 "superhomogeneous.m"
                  case (MR_Integer) 0:
#line 706 "superhomogeneous.m"
                    {
#line 706 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__YVars_84;
#line 706 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_85;
#line 706 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_86;
#line 706 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_159_159;
#line 706 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__V_161_161;
#line 706 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__FunctorGoal_174;

#line 711 "superhomogeneous.m"
                      {
#line 711 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__ArgContext_83, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__superhomogeneous__YVars_84, &hlds__make_hlds__superhomogeneous__ArgExpansions_85, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_135_135, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_136_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_159_159, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_137_137, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99);
                      }
#line 716 "superhomogeneous.m"
                      {
#line 716 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 716 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_79));
#line 716 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_161_161, 1) = ((MR_Box) ((MR_Integer) 0));
#line 716 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_161_161, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVars_84));
#line 716 "superhomogeneous.m"
                      }
#line 715 "superhomogeneous.m"
                      {
#line 715 "superhomogeneous.m"
                        hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_161_161, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__FunctorGoal_174, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_159_159, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97);
                      }
#line 719 "superhomogeneous.m"
                      {
#line 719 "superhomogeneous.m"
                        hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_86);
                      }
#line 720 "superhomogeneous.m"
                      {
#line 720 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_86, hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__FunctorGoal_174, (MR_Integer) 1, hlds__make_hlds__superhomogeneous__ArgExpansions_85, hlds__make_hlds__superhomogeneous__Expansion_32);
#line 720 "superhomogeneous.m"
                        return;
                      }
#line 706 "superhomogeneous.m"
                    }
#line 722 "superhomogeneous.m"
                    break;
#line 722 "superhomogeneous.m"
                }
#line 703 "superhomogeneous.m"
              }
#line 691 "superhomogeneous.m"
          }
#line 659 "superhomogeneous.m"
      }
#line 605 "superhomogeneous.m"
  }
#line 594 "superhomogeneous.m"
}

#line 557 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_21,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 557 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_41,
#line 557 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_42,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_43,
#line 557 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_44,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_45,
#line 557 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_46,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_47,
#line 557 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_48,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49,
#line 557 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50,
#line 557 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_51,
#line 557 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_52)
#line 557 "superhomogeneous.m"
{
#line 570 "superhomogeneous.m"
  {
#line 570 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 570 "superhomogeneous.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_22)) == (MR_mktag((MR_Integer) 0))))
#line 575 "superhomogeneous.m"
      {
#line 575 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YFunctor_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 575 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));
#line 575 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 2)));

#line 576 "superhomogeneous.m"
        {
#line 576 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__XVar_21, hlds__make_hlds__superhomogeneous__YFunctor_38, hlds__make_hlds__superhomogeneous__YArgTerms_39, hlds__make_hlds__superhomogeneous__YFunctorContext_40, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_51, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_52);
#line 576 "superhomogeneous.m"
          return;
        }
#line 575 "superhomogeneous.m"
      }
#line 570 "superhomogeneous.m"
    else
#line 570 "superhomogeneous.m"
      {
#line 570 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YVar_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 570 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goal_37;
#line 570 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_59_59;
#line 570 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_62_62;
#line 570 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));

#line 571 "superhomogeneous.m"
        {
#line 571 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 571 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_35));
#line 571 "superhomogeneous.m"
        }
#line 571 "superhomogeneous.m"
        {
#line 571 "superhomogeneous.m"
          hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_21, hlds__make_hlds__superhomogeneous__V_59_59, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__Goal_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50);
        }
#line 573 "superhomogeneous.m"
        {
#line 573 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_62_62 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_37)));
        }
#line 573 "superhomogeneous.m"
        {
#line 573 "superhomogeneous.m"
          MR_Word base;
#line 573 "superhomogeneous.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 573 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Expansion_28 = base;
#line 573 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_62_62));
#line 573 "superhomogeneous.m"
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
#line 570 "superhomogeneous.m"
      }
#line 570 "superhomogeneous.m"
  }
#line 557 "superhomogeneous.m"
}

#line 498 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XTerm_21,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 498 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55,
#line 498 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57,
#line 498 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59,
#line 498 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61,
#line 498 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63,
#line 498 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64,
#line 498 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65,
#line 498 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66)
#line 498 "superhomogeneous.m"
{
#line 511 "superhomogeneous.m"
  {
#line 511 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 511 "superhomogeneous.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__XTerm_21)) == (MR_mktag((MR_Integer) 0))))
#line 511 "superhomogeneous.m"
      {
#line 511 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 2)));
#line 511 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 1)));
#line 511 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 0)));

#line 511 "superhomogeneous.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_22)) == (MR_mktag((MR_Integer) 0))))
#line 537 "superhomogeneous.m"
          {
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TmpVar_48;
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionX_49;
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionY_50;
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_51;
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordX_52;
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordY_53;
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__GoalCord_54;
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_67_67;
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_68_68;
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_69_69;
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_70_70;
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_71_71;
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_72_72;
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_73_73;
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YFunctor_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));
#line 537 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 2)));

#line 539 "superhomogeneous.m"
            {
#line 539 "superhomogeneous.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__make_hlds__superhomogeneous__TmpVar_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_67_67);
            }
#line 540 "superhomogeneous.m"
            {
#line 540 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__TmpVar_48, hlds__make_hlds__superhomogeneous__V_110_110, hlds__make_hlds__superhomogeneous__V_109_109, hlds__make_hlds__superhomogeneous__V_108_108, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__ExpansionX_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_68_68, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_69_69, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_70_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_71_71, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_72_72, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_73_73);
            }
#line 544 "superhomogeneous.m"
            {
#line 544 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__TmpVar_48, hlds__make_hlds__superhomogeneous__YFunctor_99, hlds__make_hlds__superhomogeneous__YArgTerms_100, hlds__make_hlds__superhomogeneous__YFunctorContext_101, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__ExpansionY_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_68_68, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_69_69, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_70_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_71_71, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_72_72, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_73_73, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);
            }
#line 548 "superhomogeneous.m"
            {
#line 548 "superhomogeneous.m"
              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_23, &hlds__make_hlds__superhomogeneous__GoalInfo_51);
            }
#line 549 "superhomogeneous.m"
            {
#line 549 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_51, hlds__make_hlds__superhomogeneous__ExpansionX_49, &hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordX_52);
            }
#line 551 "superhomogeneous.m"
            {
#line 551 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_51, hlds__make_hlds__superhomogeneous__ExpansionY_50, &hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordY_53);
            }
#line 553 "superhomogeneous.m"
            {
#line 553 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__GoalCord_54 = mercury__cord__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordX_52, hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordY_53);
            }
#line 554 "superhomogeneous.m"
            {
#line 554 "superhomogeneous.m"
              MR_Word base;
#line 554 "superhomogeneous.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 554 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Expansion_28 = base;
#line 554 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_54));
#line 554 "superhomogeneous.m"
            }
#line 537 "superhomogeneous.m"
          }
#line 511 "superhomogeneous.m"
        else
#line 524 "superhomogeneous.m"
          {
#line 524 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YVar_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 525 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));

#line 526 "superhomogeneous.m"
            {
#line 526 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__YVar_98, hlds__make_hlds__superhomogeneous__V_110_110, hlds__make_hlds__superhomogeneous__V_109_109, hlds__make_hlds__superhomogeneous__V_108_108, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);
#line 526 "superhomogeneous.m"
              return;
            }
#line 524 "superhomogeneous.m"
          }
#line 511 "superhomogeneous.m"
      }
#line 511 "superhomogeneous.m"
    else
#line 511 "superhomogeneous.m"
      {
#line 511 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 0)));
#line 511 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 1)));

#line 511 "superhomogeneous.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_22)) == (MR_mktag((MR_Integer) 0))))
#line 517 "superhomogeneous.m"
          {
#line 517 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YFunctor_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 517 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));
#line 517 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 2)));

#line 519 "superhomogeneous.m"
            {
#line 519 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__V_112_112, hlds__make_hlds__superhomogeneous__YFunctor_41, hlds__make_hlds__superhomogeneous__YArgTerms_42, hlds__make_hlds__superhomogeneous__YFunctorContext_43, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);
#line 519 "superhomogeneous.m"
              return;
            }
#line 517 "superhomogeneous.m"
          }
#line 511 "superhomogeneous.m"
        else
#line 511 "superhomogeneous.m"
          {
#line 511 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 511 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Goal_39;
#line 511 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_93_93;
#line 511 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_96_96;
#line 512 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));

#line 513 "superhomogeneous.m"
            {
#line 513 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 513 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_93_93, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_37));
#line 513 "superhomogeneous.m"
            }
#line 513 "superhomogeneous.m"
            {
#line 513 "superhomogeneous.m"
              hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__V_112_112, hlds__make_hlds__superhomogeneous__V_93_93, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__Goal_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64);
            }
#line 515 "superhomogeneous.m"
            {
#line 515 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_96_96 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_39)));
            }
#line 515 "superhomogeneous.m"
            {
#line 515 "superhomogeneous.m"
              MR_Word base;
#line 515 "superhomogeneous.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 515 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Expansion_28 = base;
#line 515 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_96_96));
#line 515 "superhomogeneous.m"
            }
#line 511 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55;
#line 511 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57;
#line 511 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59;
#line 511 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61;
#line 511 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65;
#line 511 "superhomogeneous.m"
          }
#line 511 "superhomogeneous.m"
      }
#line 511 "superhomogeneous.m"
  }
#line 498 "superhomogeneous.m"
}

#line 482 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LHSVar_21,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 482 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36,
#line 482 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38,
#line 482 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40,
#line 482 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42,
#line 482 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44,
#line 482 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45,
#line 482 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46,
#line 482 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47)
#line 482 "superhomogeneous.m"
{
#line 492 "superhomogeneous.m"
  {
#line 492 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 492 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__RHS_35;
#line 492 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_48_48;
#line 492 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_49_49;
#line 492 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_50_50;

#line 493 "superhomogeneous.m"
    {
#line 493 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__RHS0_22, &hlds__make_hlds__superhomogeneous__RHS_35, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_50_50);
    }
#line 494 "superhomogeneous.m"
    {
#line 494 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__LHSVar_21, hlds__make_hlds__superhomogeneous__RHS_35, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_50_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47);
#line 494 "superhomogeneous.m"
      return;
    }
#line 492 "superhomogeneous.m"
  }
#line 482 "superhomogeneous.m"
}

#line 465 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LHS0_21,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 465 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_37,
#line 465 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_39,
#line 465 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_40,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_41,
#line 465 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_42,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_43,
#line 465 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_44,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_45,
#line 465 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_46,
#line 465 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_47,
#line 465 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_48)
#line 465 "superhomogeneous.m"
{
#line 475 "superhomogeneous.m"
  {
#line 475 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 475 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__LHS_35;
#line 475 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__RHS_36;
#line 475 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_49_49;
#line 475 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_50_50;
#line 475 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51_51;
#line 475 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_52_52;
#line 475 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53;
#line 475 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_54_54;

#line 476 "superhomogeneous.m"
    {
#line 476 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__LHS0_21, &hlds__make_hlds__superhomogeneous__LHS_35, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51_51);
    }
#line 477 "superhomogeneous.m"
    {
#line 477 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__RHS0_22, &hlds__make_hlds__superhomogeneous__RHS_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_49_49, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_50_50, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_54_54);
    }
#line 478 "superhomogeneous.m"
    {
#line 478 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__LHS_35, hlds__make_hlds__superhomogeneous__RHS_36, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_54_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_48);
#line 478 "superhomogeneous.m"
      return;
    }
#line 475 "superhomogeneous.m"
  }
#line 465 "superhomogeneous.m"
}

#line 426 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_20,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_21,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContext_23,
#line 426 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__ArgNum_25,
#line 426 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_26,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42,
#line 426 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44,
#line 426 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46,
#line 426 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48,
#line 426 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50,
#line 426 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51,
#line 426 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52,
#line 426 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53)
#line 426 "superhomogeneous.m"
{
#line 441 "superhomogeneous.m"
  {
#line 441 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 441 "superhomogeneous.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_21)) == (MR_mktag((MR_Integer) 0))))
#line 454 "superhomogeneous.m"
      {
#line 454 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YFunctor_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 0)));
#line 454 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 1)));
#line 454 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 2)));
#line 454 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__MainContext_65;
#line 454 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__SubContext_66;

#line 1274 "superhomogeneous.m"
#line 1274 "superhomogeneous.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__ArgContext_23)) {
#line 1274 "superhomogeneous.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1274 "superhomogeneous.m"
          case (MR_Integer) 0:
#line 1274 "superhomogeneous.m"
            {
#line 1274 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
#line 1274 "superhomogeneous.m"
              MR_Integer hlds__make_hlds__superhomogeneous__Arity_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));

#line 1275 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__PredOrFunc_74 == (MR_Integer) 1);
#line 1275 "superhomogeneous.m"
              if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1275 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__ArgNum_25 == hlds__make_hlds__superhomogeneous__Arity_75);
#line 1278 "superhomogeneous.m"
              if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1277 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__MainContext_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1278 "superhomogeneous.m"
              else
#line 1280 "superhomogeneous.m"
                {
#line 1280 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__MainContext_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MainContext_65, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1280 "superhomogeneous.m"
                }
#line 1282 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__SubContext_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1274 "superhomogeneous.m"
            }
#line 1274 "superhomogeneous.m"
            break;
#line 1274 "superhomogeneous.m"
          case (MR_Integer) 1:
#line 1284 "superhomogeneous.m"
            {
#line 1284 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__PredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));

#line 1285 "superhomogeneous.m"
              {
#line 1285 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__MainContext_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "superhomogeneous.m"
                MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_65, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__PredId_76));
#line 1285 "superhomogeneous.m"
                MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_65, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1285 "superhomogeneous.m"
              }
#line 1286 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__SubContext_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1284 "superhomogeneous.m"
            }
#line 1274 "superhomogeneous.m"
            break;
#line 1274 "superhomogeneous.m"
          case (MR_Integer) 2:
#line 1288 "superhomogeneous.m"
            {
#line 1288 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__ConsId_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
#line 1288 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__SubContexts0_78;
#line 1288 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__SubContext_79;

#line 1288 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__MainContext_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));
#line 1288 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__SubContexts0_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 2)));
#line 1289 "superhomogeneous.m"
              {
#line 1289 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__SubContext_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1289 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_79, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_77));
#line 1289 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_79, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1289 "superhomogeneous.m"
              }
#line 1290 "superhomogeneous.m"
              {
#line 1290 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__SubContext_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_66, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_79));
#line 1290 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_66, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContexts0_78));
#line 1290 "superhomogeneous.m"
              }
#line 1288 "superhomogeneous.m"
            }
#line 1274 "superhomogeneous.m"
            break;
#line 1274 "superhomogeneous.m"
        }
#line 457 "superhomogeneous.m"
        {
#line 457 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__XVar_20, hlds__make_hlds__superhomogeneous__YFunctor_39, hlds__make_hlds__superhomogeneous__YArgTerms_40, hlds__make_hlds__superhomogeneous__YFunctorContext_41, hlds__make_hlds__superhomogeneous__Context_22, hlds__make_hlds__superhomogeneous__MainContext_65, hlds__make_hlds__superhomogeneous__SubContext_66, (MR_Integer) 0, hlds__make_hlds__superhomogeneous__Expansion_26, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53);
#line 457 "superhomogeneous.m"
          return;
        }
#line 454 "superhomogeneous.m"
      }
#line 441 "superhomogeneous.m"
    else
#line 441 "superhomogeneous.m"
      {
#line 441 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 0)));
#line 441 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YVarContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 1)));
#line 441 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__GoalCord_35;

#line 442 "superhomogeneous.m"
        {
#line 442 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_20)), ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_33)));
        }
#line 445 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 444 "superhomogeneous.m"
          {
#line 444 "superhomogeneous.m"
            {
#line 444 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__GoalCord_35 = mercury__cord__init_0_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
            }
#line 444 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50;
#line 444 "superhomogeneous.m"
          }
#line 445 "superhomogeneous.m"
        else
#line 447 "superhomogeneous.m"
          {
#line 447 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MainContext_36;
#line 447 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__SubContext_37;
#line 447 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Goal_38;
#line 447 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_61_61;

#line 1274 "superhomogeneous.m"
#line 1274 "superhomogeneous.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__ArgContext_23)) {
#line 1274 "superhomogeneous.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1274 "superhomogeneous.m"
              case (MR_Integer) 0:
#line 1274 "superhomogeneous.m"
                {
#line 1274 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
#line 1274 "superhomogeneous.m"
                  MR_Integer hlds__make_hlds__superhomogeneous__Arity_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));

#line 1275 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__PredOrFunc_84 == (MR_Integer) 1);
#line 1275 "superhomogeneous.m"
                  if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1275 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__ArgNum_25 == hlds__make_hlds__superhomogeneous__Arity_85);
#line 1278 "superhomogeneous.m"
                  if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1277 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__MainContext_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1278 "superhomogeneous.m"
                  else
#line 1280 "superhomogeneous.m"
                    {
#line 1280 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__MainContext_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "superhomogeneous.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MainContext_36, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1280 "superhomogeneous.m"
                    }
#line 1282 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__SubContext_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1274 "superhomogeneous.m"
                }
#line 1274 "superhomogeneous.m"
                break;
#line 1274 "superhomogeneous.m"
              case (MR_Integer) 1:
#line 1284 "superhomogeneous.m"
                {
#line 1284 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__PredId_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));

#line 1285 "superhomogeneous.m"
                  {
#line 1285 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__MainContext_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_36, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__PredId_86));
#line 1285 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_36, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1285 "superhomogeneous.m"
                  }
#line 1286 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__SubContext_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1284 "superhomogeneous.m"
                }
#line 1274 "superhomogeneous.m"
                break;
#line 1274 "superhomogeneous.m"
              case (MR_Integer) 2:
#line 1288 "superhomogeneous.m"
                {
#line 1288 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__ConsId_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
#line 1288 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__SubContexts0_88;
#line 1288 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__SubContext_89;

#line 1288 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__MainContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));
#line 1288 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__SubContexts0_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 2)));
#line 1289 "superhomogeneous.m"
                  {
#line 1289 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__SubContext_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1289 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_89, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_87));
#line 1289 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_89, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1289 "superhomogeneous.m"
                  }
#line 1290 "superhomogeneous.m"
                  {
#line 1290 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__SubContext_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_37, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_89));
#line 1290 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_37, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContexts0_88));
#line 1290 "superhomogeneous.m"
                  }
#line 1288 "superhomogeneous.m"
                }
#line 1274 "superhomogeneous.m"
                break;
#line 1274 "superhomogeneous.m"
            }
#line 448 "superhomogeneous.m"
            {
#line 448 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 448 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_33));
#line 448 "superhomogeneous.m"
            }
#line 448 "superhomogeneous.m"
            {
#line 448 "superhomogeneous.m"
              hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_20, hlds__make_hlds__superhomogeneous__V_61_61, hlds__make_hlds__superhomogeneous__YVarContext_34, hlds__make_hlds__superhomogeneous__MainContext_36, hlds__make_hlds__superhomogeneous__SubContext_37, (MR_Integer) 0, &hlds__make_hlds__superhomogeneous__Goal_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51);
            }
#line 450 "superhomogeneous.m"
            {
#line 450 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__GoalCord_35 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_38)));
            }
#line 447 "superhomogeneous.m"
          }
#line 452 "superhomogeneous.m"
        {
#line 452 "superhomogeneous.m"
          MR_Word base;
#line 452 "superhomogeneous.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 452 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Expansion_26 = base;
#line 452 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 452 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_35));
#line 452 "superhomogeneous.m"
        }
#line 441 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42;
#line 441 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44;
#line 441 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46;
#line 441 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48;
#line 441 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52;
#line 441 "superhomogeneous.m"
      }
#line 441 "superhomogeneous.m"
  }
#line 426 "superhomogeneous.m"
}

#line 393 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVars_19,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerms_20,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContexts_21,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 393 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansions_24,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40,
#line 393 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42,
#line 393 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44,
#line 393 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46,
#line 393 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48,
#line 393 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49,
#line 393 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50,
#line 393 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51)
#line 393 "superhomogeneous.m"
{
#line 410 "superhomogeneous.m"
  {
#line 410 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__XVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 405 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 405 "superhomogeneous.m"
      {
#line 406 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__YTerms_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 407 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__ArgContexts_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "superhomogeneous.m"
      }
#line 410 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 409 "superhomogeneous.m"
      {
#line 409 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__Expansions_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50;
#line 409 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48;
#line 409 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46;
#line 409 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44;
#line 409 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42;
#line 409 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40;
#line 409 "superhomogeneous.m"
      }
#line 410 "superhomogeneous.m"
    else
#line 422 "superhomogeneous.m"
      {
#line 422 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadXVar_31;
#line 422 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TailXVars_32;
#line 422 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadYTerm_33;
#line 422 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TailYTerms_34;
#line 422 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__HeadArgNumber_35;
#line 422 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadArgContext_36;
#line 422 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TailArgContexts_37;
#line 411 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_52_52;

#line 411 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__XVars_19)) == (MR_mktag((MR_Integer) 1)));
#line 411 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 411 "superhomogeneous.m"
          {
#line 411 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__HeadXVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XVars_19, (MR_Integer) 0)));
#line 411 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__TailXVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XVars_19, (MR_Integer) 1)));
#line 412 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerms_20)) == (MR_mktag((MR_Integer) 1)));
#line 412 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 412 "superhomogeneous.m"
              {
#line 412 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__HeadYTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerms_20, (MR_Integer) 0)));
#line 412 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__TailYTerms_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerms_20, (MR_Integer) 1)));
#line 413 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__ArgContexts_21)) == (MR_mktag((MR_Integer) 1)));
#line 413 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 413 "superhomogeneous.m"
                  {
#line 413 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_21, (MR_Integer) 0)));
#line 413 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__TailArgContexts_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_21, (MR_Integer) 1)));
#line 413 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__HeadArgNumber_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_52_52, (MR_Integer) 0)));
#line 413 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__HeadArgContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_52_52, (MR_Integer) 1)));
#line 413 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 413 "superhomogeneous.m"
                  }
#line 412 "superhomogeneous.m"
              }
#line 411 "superhomogeneous.m"
          }
#line 422 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 417 "superhomogeneous.m"
          {
#line 417 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HeadExpansion_38;
#line 417 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TailExpansions_39;
#line 417 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53;
#line 417 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_54_54;
#line 417 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_55_55;
#line 417 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_56_56;
#line 417 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_57_57;
#line 417 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_58_58;

#line 415 "superhomogeneous.m"
            {
#line 415 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__HeadXVar_31, hlds__make_hlds__superhomogeneous__HeadYTerm_33, hlds__make_hlds__superhomogeneous__Context_22, hlds__make_hlds__superhomogeneous__HeadArgContext_36, hlds__make_hlds__superhomogeneous__HeadArgNumber_35, &hlds__make_hlds__superhomogeneous__HeadExpansion_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_54_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_55_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_56_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_57_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_58_58);
            }
#line 418 "superhomogeneous.m"
            {
#line 418 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(hlds__make_hlds__superhomogeneous__TailXVars_32, hlds__make_hlds__superhomogeneous__TailYTerms_34, hlds__make_hlds__superhomogeneous__TailArgContexts_37, hlds__make_hlds__superhomogeneous__Context_22, &hlds__make_hlds__superhomogeneous__TailExpansions_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_54_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_55_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_56_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_57_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51);
            }
#line 421 "superhomogeneous.m"
            {
#line 421 "superhomogeneous.m"
              MR_Word base;
#line 421 "superhomogeneous.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Expansions_24 = base;
#line 421 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HeadExpansion_38));
#line 421 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TailExpansions_39));
#line 421 "superhomogeneous.m"
            }
#line 417 "superhomogeneous.m"
          }
#line 422 "superhomogeneous.m"
        else
#line 423 "superhomogeneous.m"
          {
#line 423 "superhomogeneous.m"
            {
#line 423 "superhomogeneous.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.do_arg_unifications_with_contexts\'/18", (MR_String) "length mismatch");
#line 423 "superhomogeneous.m"
              return;
            }
#line 423 "superhomogeneous.m"
          }
#line 422 "superhomogeneous.m"
      }
#line 410 "superhomogeneous.m"
  }
#line 393 "superhomogeneous.m"
}

#line 370 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 370 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__5_5,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18,
#line 370 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19,
#line 370 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20)
#line 370 "superhomogeneous.m"
{
#line 378 "superhomogeneous.m"
  {
#line 378 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 378 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "superhomogeneous.m"
      {
#line 379 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 379 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 380 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19;
#line 380 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17;
#line 380 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15;
#line 380 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13;
#line 379 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11;
#line 379 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9;
#line 378 "superhomogeneous.m"
      }
#line 378 "superhomogeneous.m"
    else
#line 383 "superhomogeneous.m"
      {
#line 383 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YTerm_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 383 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YTerms_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 383 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__XVar_51;
#line 383 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__XVars_52;
#line 383 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Expansion_53;
#line 383 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Expansions_54;
#line 383 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_74_74;
#line 383 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75;
#line 383 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_76_76;
#line 383 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_77_77;
#line 383 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_78_78;
#line 383 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_79_79;
#line 383 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_80_80;
#line 383 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_81_81;
#line 383 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__V_82_82;

#line 384 "superhomogeneous.m"
        {
#line 384 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__YTerm_44, &hlds__make_hlds__superhomogeneous__XVar_51, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_74_74);
        }
#line 385 "superhomogeneous.m"
        {
#line 385 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_51));
#line 385 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6));
#line 385 "superhomogeneous.m"
        }
#line 386 "superhomogeneous.m"
        {
#line 386 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__XVar_51, hlds__make_hlds__superhomogeneous__YTerm_44, hlds__make_hlds__superhomogeneous__HeadVar__2_2, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__HeadVar__5_5, &hlds__make_hlds__superhomogeneous__Expansion_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_77_77, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_74_74, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_78_78, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_79_79, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_80_80, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_81_81);
        }
#line 390 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__V_82_82 = (hlds__make_hlds__superhomogeneous__HeadVar__5_5 + (MR_Integer) 1);
#line 389 "superhomogeneous.m"
        {
#line 389 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__YTerms_45, hlds__make_hlds__superhomogeneous__HeadVar__2_2, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__V_82_82, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75, &hlds__make_hlds__superhomogeneous__XVars_52, &hlds__make_hlds__superhomogeneous__Expansions_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_77_77, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_78_78, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_79_79, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_80_80, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_81_81, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20);
        }
#line 382 "superhomogeneous.m"
        {
#line 382 "superhomogeneous.m"
          MR_Word base;
#line 382 "superhomogeneous.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
#line 382 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_51));
#line 382 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVars_52));
#line 382 "superhomogeneous.m"
        }
#line 382 "superhomogeneous.m"
        {
#line 382 "superhomogeneous.m"
          MR_Word base;
#line 382 "superhomogeneous.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = base;
#line 382 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansion_53));
#line 382 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansions_54));
#line 382 "superhomogeneous.m"
        }
#line 383 "superhomogeneous.m"
      }
#line 378 "superhomogeneous.m"
  }
#line 370 "superhomogeneous.m"
}

#line 341 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
#line 341 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__6_6,
#line 341 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8,
#line 341 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10,
#line 341 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
#line 341 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14,
#line 341 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
#line 341 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
#line 341 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 341 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19)
#line 341 "superhomogeneous.m"
{
#line 349 "superhomogeneous.m"
  {
#line 349 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 349 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "superhomogeneous.m"
      if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "superhomogeneous.m"
        {
#line 350 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 351 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18;
#line 351 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16;
#line 351 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14;
#line 351 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12;
#line 350 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10;
#line 350 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8;
#line 349 "superhomogeneous.m"
        }
#line 349 "superhomogeneous.m"
      else
#line 354 "superhomogeneous.m"
        {
#line 353 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 355 "superhomogeneous.m"
          {
#line 355 "superhomogeneous.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.do_arg_unifications\'/19", (MR_String) "length mismatch");
#line 355 "superhomogeneous.m"
            return;
          }
#line 354 "superhomogeneous.m"
        }
#line 349 "superhomogeneous.m"
    else
#line 349 "superhomogeneous.m"
      {
#line 349 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 349 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));

#line 349 "superhomogeneous.m"
        if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "superhomogeneous.m"
          {
#line 357 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 359 "superhomogeneous.m"
            {
#line 359 "superhomogeneous.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.do_arg_unifications\'/19", (MR_String) "length mismatch");
#line 359 "superhomogeneous.m"
              return;
            }
#line 358 "superhomogeneous.m"
          }
#line 349 "superhomogeneous.m"
        else
#line 362 "superhomogeneous.m"
          {
#line 362 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YTerm_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 362 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YTerms_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 362 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Expansion_104;
#line 362 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Expansions_105;
#line 362 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_124_124;
#line 362 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_125_125;
#line 362 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_126_126;
#line 362 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_127_127;
#line 362 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_128_128;
#line 362 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129;
#line 362 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__V_130_130;

#line 363 "superhomogeneous.m"
            {
#line 363 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__V_139_139, hlds__make_hlds__superhomogeneous__YTerm_98, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__HeadVar__4_4, hlds__make_hlds__superhomogeneous__HeadVar__6_6, &hlds__make_hlds__superhomogeneous__Expansion_104, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_124_124, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_125_125, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_126_126, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_127_127, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_128_128, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129);
            }
#line 366 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_130_130 = (hlds__make_hlds__superhomogeneous__HeadVar__6_6 + (MR_Integer) 1);
#line 366 "superhomogeneous.m"
            {
#line 366 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__V_138_138, hlds__make_hlds__superhomogeneous__YTerms_99, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__HeadVar__4_4, hlds__make_hlds__superhomogeneous__V_130_130, &hlds__make_hlds__superhomogeneous__Expansions_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_124_124, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_125_125, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_126_126, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_127_127, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_128_128, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);
            }
#line 361 "superhomogeneous.m"
            {
#line 361 "superhomogeneous.m"
              MR_Word base;
#line 361 "superhomogeneous.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
#line 361 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansion_104));
#line 361 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansions_105));
#line 361 "superhomogeneous.m"
            }
#line 362 "superhomogeneous.m"
          }
#line 349 "superhomogeneous.m"
      }
#line 349 "superhomogeneous.m"
  }
#line 341 "superhomogeneous.m"
}

#line 178 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(
#line 178 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 178 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 178 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3)
#line 178 "superhomogeneous.m"
{
#line 178 "superhomogeneous.m"
  {
#line 178 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 178 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_13 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;
#line 178 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_14 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__3_3;

#line 178 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_13 == hlds__make_hlds__superhomogeneous__CastY_14);
#line 178 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 6041 "hlds.make_hlds.superhomogeneous.c"
      *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
#line 178 "superhomogeneous.m"
    else
#line 178 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 178 "superhomogeneous.m"
      if ((hlds__make_hlds__superhomogeneous__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 178 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
#line 178 "superhomogeneous.m"
      else
#line 6053 "hlds.make_hlds.superhomogeneous.c"
        *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
#line 178 "superhomogeneous.m"
    else
#line 178 "superhomogeneous.m"
      {
#line 178 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 178 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

#line 178 "superhomogeneous.m"
        if ((hlds__make_hlds__superhomogeneous__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6066 "hlds.make_hlds.superhomogeneous.c"
          *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
#line 178 "superhomogeneous.m"
        else
#line 178 "superhomogeneous.m"
          {
#line 178 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
#line 178 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
#line 178 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_12_12;

#line 178 "superhomogeneous.m"
            {
#line 178 "superhomogeneous.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0], &hlds__make_hlds__superhomogeneous__V_12_12, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_18_18)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_10_10)));
            }
#line 6084 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_12_12 == (MR_Integer) 0);
#line 178 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 178 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 178 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_12_12;
#line 178 "superhomogeneous.m"
            else
#line 178 "superhomogeneous.m"
              {
#line 178 "superhomogeneous.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__superhomogeneous__HeadVar__1_1, hlds__make_hlds__superhomogeneous__V_17_17, hlds__make_hlds__superhomogeneous__V_11_11);
#line 178 "superhomogeneous.m"
                return;
              }
#line 178 "superhomogeneous.m"
          }
#line 178 "superhomogeneous.m"
      }
#line 178 "superhomogeneous.m"
  }
#line 178 "superhomogeneous.m"
}

#line 178 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(
#line 178 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 178 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2)
#line 178 "superhomogeneous.m"
{
#line 178 "superhomogeneous.m"
  {
#line 178 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 178 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_9 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__1_1;
#line 178 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_10 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;

#line 178 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_9 == hlds__make_hlds__superhomogeneous__CastY_10);
#line 178 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 178 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 178 "superhomogeneous.m"
    else
#line 178 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 178 "superhomogeneous.m"
      {
#line 178 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__CastX_3 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__1_1;
#line 178 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__CastY_4 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;

#line 178 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastY_4 == hlds__make_hlds__superhomogeneous__CastX_3);
#line 178 "superhomogeneous.m"
      }
#line 178 "superhomogeneous.m"
    else
#line 178 "superhomogeneous.m"
      {
#line 178 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_11_11;
#line 178 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 178 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 178 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_7_7;
#line 178 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__V_8_8;

#line 178 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 178 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 178 "superhomogeneous.m"
          {
#line 178 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 178 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 6174 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__TypeInfo_11_11 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 6176 "hlds.make_hlds.superhomogeneous.c"
            {
#line 6178 "hlds.make_hlds.superhomogeneous.c"
              hlds__make_hlds__superhomogeneous__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_11_11, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_5_5)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_7_7)));
            }
#line 178 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 6183 "hlds.make_hlds.superhomogeneous.c"
              hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_6_6 == hlds__make_hlds__superhomogeneous__V_8_8);
#line 178 "superhomogeneous.m"
          }
#line 178 "superhomogeneous.m"
      }
#line 178 "superhomogeneous.m"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 178 "superhomogeneous.m"
  }
#line 178 "superhomogeneous.m"
}

#line 182 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(
#line 182 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 182 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 182 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3)
#line 182 "superhomogeneous.m"
{
#line 182 "superhomogeneous.m"
  {
#line 182 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 182 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_9 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;
#line 182 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_10 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__3_3;

#line 182 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_9 == hlds__make_hlds__superhomogeneous__CastY_10);
#line 182 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 6220 "hlds.make_hlds.superhomogeneous.c"
      *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
#line 182 "superhomogeneous.m"
    else
#line 182 "superhomogeneous.m"
      {
#line 182 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 182 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 182 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
#line 182 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
#line 182 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_8_8;

#line 182 "superhomogeneous.m"
        {
#line 182 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(&hlds__make_hlds__superhomogeneous__V_8_8, hlds__make_hlds__superhomogeneous__V_4_4, hlds__make_hlds__superhomogeneous__V_6_6);
        }
#line 6242 "hlds.make_hlds.superhomogeneous.c"
        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_8_8 == (MR_Integer) 0);
#line 182 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 182 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 182 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_8_8;
#line 182 "superhomogeneous.m"
        else
#line 182 "superhomogeneous.m"
          {
#line 182 "superhomogeneous.m"
            {
#line 182 "superhomogeneous.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_5_5)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_7_7)));
#line 182 "superhomogeneous.m"
              return;
            }
#line 182 "superhomogeneous.m"
          }
#line 182 "superhomogeneous.m"
      }
#line 182 "superhomogeneous.m"
  }
#line 182 "superhomogeneous.m"
}

#line 182 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(
#line 182 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 182 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2)
#line 182 "superhomogeneous.m"
{
#line 182 "superhomogeneous.m"
  {
#line 182 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 182 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_7 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__1_1;
#line 182 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_8 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;

#line 182 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_7 == hlds__make_hlds__superhomogeneous__CastY_8);
#line 182 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 182 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 182 "superhomogeneous.m"
    else
#line 182 "superhomogeneous.m"
      {
#line 182 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_9_9;
#line 182 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 182 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 182 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 182 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));

#line 6309 "hlds.make_hlds.superhomogeneous.c"
        {
#line 6311 "hlds.make_hlds.superhomogeneous.c"
          hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(hlds__make_hlds__superhomogeneous__V_3_3, hlds__make_hlds__superhomogeneous__V_5_5);
        }
#line 182 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 182 "superhomogeneous.m"
          {
#line 6318 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__TypeInfo_9_9 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1];
#line 6320 "hlds.make_hlds.superhomogeneous.c"
            {
#line 6322 "hlds.make_hlds.superhomogeneous.c"
              return hlds__make_hlds__superhomogeneous__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_9_9, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_4_4)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_6_6)));
            }
#line 182 "superhomogeneous.m"
          }
#line 182 "superhomogeneous.m"
      }
#line 182 "superhomogeneous.m"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 182 "superhomogeneous.m"
  }
#line 182 "superhomogeneous.m"
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
#line 6360 "hlds.make_hlds.superhomogeneous.c"
      *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "superhomogeneous.m"
    else
#line 36 "superhomogeneous.m"
#line 36 "superhomogeneous.m"
      switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) {
#line 36 "superhomogeneous.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 36 "superhomogeneous.m"
        case (MR_Integer) 0:
#line 36 "superhomogeneous.m"
          {
#line 36 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "superhomogeneous.m"
#line 36 "superhomogeneous.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) {
#line 36 "superhomogeneous.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 36 "superhomogeneous.m"
              case (MR_Integer) 0:
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
#line 6403 "hlds.make_hlds.superhomogeneous.c"
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
                break;
#line 36 "superhomogeneous.m"
              case (MR_Integer) 1:
#line 6426 "hlds.make_hlds.superhomogeneous.c"
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "superhomogeneous.m"
                break;
#line 36 "superhomogeneous.m"
              case (MR_Integer) 2:
#line 6432 "hlds.make_hlds.superhomogeneous.c"
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "superhomogeneous.m"
                break;
#line 36 "superhomogeneous.m"
            }
#line 36 "superhomogeneous.m"
          }
#line 36 "superhomogeneous.m"
          break;
#line 36 "superhomogeneous.m"
        case (MR_Integer) 1:
#line 36 "superhomogeneous.m"
          {
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "superhomogeneous.m"
#line 36 "superhomogeneous.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) {
#line 36 "superhomogeneous.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 36 "superhomogeneous.m"
              case (MR_Integer) 0:
#line 6456 "hlds.make_hlds.superhomogeneous.c"
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "superhomogeneous.m"
                break;
#line 36 "superhomogeneous.m"
              case (MR_Integer) 1:
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
                break;
#line 36 "superhomogeneous.m"
              case (MR_Integer) 2:
#line 6480 "hlds.make_hlds.superhomogeneous.c"
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "superhomogeneous.m"
                break;
#line 36 "superhomogeneous.m"
            }
#line 36 "superhomogeneous.m"
          }
#line 36 "superhomogeneous.m"
          break;
#line 36 "superhomogeneous.m"
        case (MR_Integer) 2:
#line 36 "superhomogeneous.m"
          {
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 2)));
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 36 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "superhomogeneous.m"
#line 36 "superhomogeneous.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) {
#line 36 "superhomogeneous.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 36 "superhomogeneous.m"
              case (MR_Integer) 0:
#line 6508 "hlds.make_hlds.superhomogeneous.c"
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "superhomogeneous.m"
                break;
#line 36 "superhomogeneous.m"
              case (MR_Integer) 1:
#line 6514 "hlds.make_hlds.superhomogeneous.c"
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "superhomogeneous.m"
                break;
#line 36 "superhomogeneous.m"
              case (MR_Integer) 2:
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
#line 6536 "hlds.make_hlds.superhomogeneous.c"
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
#line 6556 "hlds.make_hlds.superhomogeneous.c"
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
                break;
#line 36 "superhomogeneous.m"
            }
#line 36 "superhomogeneous.m"
          }
#line 36 "superhomogeneous.m"
          break;
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
#line 36 "superhomogeneous.m"
      switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__1_1)) {
#line 36 "superhomogeneous.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 36 "superhomogeneous.m"
        case (MR_Integer) 0:
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
#line 6650 "hlds.make_hlds.superhomogeneous.c"
                hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_3_3 == hlds__make_hlds__superhomogeneous__V_5_5);
#line 36 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 6654 "hlds.make_hlds.superhomogeneous.c"
                  hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_4_4 == hlds__make_hlds__superhomogeneous__V_6_6);
#line 36 "superhomogeneous.m"
              }
#line 36 "superhomogeneous.m"
          }
#line 36 "superhomogeneous.m"
          break;
#line 36 "superhomogeneous.m"
        case (MR_Integer) 1:
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
#line 6679 "hlds.make_hlds.superhomogeneous.c"
                {
#line 6681 "hlds.make_hlds.superhomogeneous.c"
                  return hlds__make_hlds__superhomogeneous__succeeded = hlds__hlds_pred____Unify____call_id_0_0(hlds__make_hlds__superhomogeneous__V_7_7, hlds__make_hlds__superhomogeneous__V_8_8);
                }
#line 36 "superhomogeneous.m"
              }
#line 36 "superhomogeneous.m"
          }
#line 36 "superhomogeneous.m"
          break;
#line 36 "superhomogeneous.m"
        case (MR_Integer) 2:
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
#line 6721 "hlds.make_hlds.superhomogeneous.c"
                {
#line 6723 "hlds.make_hlds.superhomogeneous.c"
                  hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__make_hlds__superhomogeneous__V_9_9, hlds__make_hlds__superhomogeneous__V_12_12);
                }
#line 36 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 36 "superhomogeneous.m"
                  {
#line 6730 "hlds.make_hlds.superhomogeneous.c"
                    {
#line 6732 "hlds.make_hlds.superhomogeneous.c"
                      hlds__make_hlds__superhomogeneous__succeeded = hlds__hlds_goal____Unify____unify_main_context_0_0(hlds__make_hlds__superhomogeneous__V_10_10, hlds__make_hlds__superhomogeneous__V_13_13);
                    }
#line 36 "superhomogeneous.m"
                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 36 "superhomogeneous.m"
                      {
#line 6739 "hlds.make_hlds.superhomogeneous.c"
                        hlds__make_hlds__superhomogeneous__TypeInfo_20_20 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[3];
#line 6741 "hlds.make_hlds.superhomogeneous.c"
                        {
#line 6743 "hlds.make_hlds.superhomogeneous.c"
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
          break;
#line 36 "superhomogeneous.m"
      }
#line 36 "superhomogeneous.m"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 36 "superhomogeneous.m"
  }
#line 36 "superhomogeneous.m"
}

#line 1360 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(
#line 1360 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Arg_6,
#line 1360 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Var_7,
#line 1360 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Vars0_8,
#line 1360 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
#line 1360 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13)
#line 1360 "superhomogeneous.m"
{
#line 1369 "superhomogeneous.m"
  {
#line 1369 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__Arg_6)) == (MR_mktag((MR_Integer) 1)));
#line 1369 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ArgVar_10;
#line 1365 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_11_11;
#line 1366 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_15_15;

#line 1365 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1365 "superhomogeneous.m"
      {
#line 1365 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__ArgVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_6, (MR_Integer) 0)));
#line 1365 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_6, (MR_Integer) 1)));
#line 6799 "hlds.make_hlds.superhomogeneous.c"
        hlds__make_hlds__superhomogeneous__TypeInfo_15_15 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 1366 "superhomogeneous.m"
        {
#line 1366 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_15_15, ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgVar_10)), hlds__make_hlds__superhomogeneous__Vars0_8);
        }
#line 1366 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 1365 "superhomogeneous.m"
      }
#line 1369 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1368 "superhomogeneous.m"
      {
#line 1368 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__Var_7 = hlds__make_hlds__superhomogeneous__ArgVar_10;
#line 1368 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12;
#line 1368 "superhomogeneous.m"
      }
#line 1369 "superhomogeneous.m"
    else
#line 1370 "superhomogeneous.m"
      {
#line 1370 "superhomogeneous.m"
        {
#line 1370 "superhomogeneous.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__Var_7, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13);
#line 1370 "superhomogeneous.m"
          return;
        }
#line 1370 "superhomogeneous.m"
      }
#line 1369 "superhomogeneous.m"
  }
#line 1360 "superhomogeneous.m"
}

#line 1302 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_9_p_0(
#line 1302 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 1302 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2,
#line 1302 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_3,
#line 1302 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4,
#line 1302 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_5,
#line 1302 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6,
#line 1302 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_7,
#line 1302 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8,
#line 1302 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_9)
#line 1302 "superhomogeneous.m"
{
#line 1307 "superhomogeneous.m"
  while (MR_TRUE)
#line 1307 "superhomogeneous.m"
    {
#line 1307 "superhomogeneous.m"
      /* tailcall optimized into a loop */
#line 1307 "superhomogeneous.m"
      {
#line 1307 "superhomogeneous.m"
        MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 1307 "superhomogeneous.m"
        if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1307 "superhomogeneous.m"
          {
#line 1308 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_9 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8;
#line 1308 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_7 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6;
#line 1308 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_5 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4;
#line 1307 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_3 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2;
#line 1307 "superhomogeneous.m"
          }
#line 1307 "superhomogeneous.m"
        else
#line 1310 "superhomogeneous.m"
          {
#line 1310 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 1310 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 1310 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Var_28;
#line 1310 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37;
#line 1310 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38_38;
#line 1310 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_39_39;
#line 1310 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40;
#line 1310 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Arg_57;
#line 1310 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60;
#line 1330 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ArgVar_58;
#line 1326 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_59_59;
#line 1327 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_29_64;

#line 1324 "superhomogeneous.m"
            {
#line 1324 "superhomogeneous.m"
              hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__Arg_22, &hlds__make_hlds__superhomogeneous__Arg_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_39_39);
            }
#line 1326 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__Arg_57)) == (MR_mktag((MR_Integer) 1)));
#line 1326 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1326 "superhomogeneous.m"
              {
#line 1326 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__ArgVar_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_57, (MR_Integer) 0)));
#line 1326 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_57, (MR_Integer) 1)));
#line 6930 "hlds.make_hlds.superhomogeneous.c"
                hlds__make_hlds__superhomogeneous__TypeInfo_29_64 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 1327 "superhomogeneous.m"
                {
#line 1327 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_29_64, ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgVar_58)), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2);
                }
#line 1327 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 1326 "superhomogeneous.m"
              }
#line 1330 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1329 "superhomogeneous.m"
              {
#line 1329 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Var_28 = hlds__make_hlds__superhomogeneous__ArgVar_58;
#line 1329 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60;
#line 1329 "superhomogeneous.m"
              }
#line 1330 "superhomogeneous.m"
            else
#line 1331 "superhomogeneous.m"
              {
#line 1331 "superhomogeneous.m"
                {
#line 1331 "superhomogeneous.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__make_hlds__superhomogeneous__Var_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37);
                }
#line 1331 "superhomogeneous.m"
              }
#line 1313 "superhomogeneous.m"
            {
#line 1313 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1313 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Var_28));
#line 1313 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2));
#line 1313 "superhomogeneous.m"
            }
#line 1314 "superhomogeneous.m"
            /* direct tailcall eliminated */
#line 1314 "superhomogeneous.m"
            {
#line 1314 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1 = hlds__make_hlds__superhomogeneous__Args_23;
#line 1314 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0__tmp_copy_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40;
#line 1314 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0__tmp_copy_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37;
#line 1314 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0__tmp_copy_6 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38_38;
#line 1314 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0__tmp_copy_8 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_39_39;

#line 1314 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0__tmp_copy_8;
#line 1314 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0__tmp_copy_6;
#line 1314 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0__tmp_copy_4;
#line 1314 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0__tmp_copy_2;
#line 1314 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1;
#line 1314 "superhomogeneous.m"
            }
#line 1314 "superhomogeneous.m"
            continue;
#line 1310 "superhomogeneous.m"
          }
#line 1307 "superhomogeneous.m"
      }
#line 1307 "superhomogeneous.m"
      break;
#line 1307 "superhomogeneous.m"
    }
#line 1302 "superhomogeneous.m"
}

#line 1232 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(
#line 1232 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ModuleInfo_1,
#line 1232 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 1232 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 1232 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
#line 1232 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__5_5,
#line 1232 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__6_6,
#line 1232 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 1232 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8)
#line 1232 "superhomogeneous.m"
{
#line 1237 "superhomogeneous.m"
  {
#line 1237 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 1237 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1237 "superhomogeneous.m"
      {
#line 1237 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1237 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1237 "superhomogeneous.m"
          {
#line 1237 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1237 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1237 "superhomogeneous.m"
              {
#line 1237 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1237 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1237 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1237 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1237 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 1237 "superhomogeneous.m"
              }
#line 1237 "superhomogeneous.m"
          }
#line 1237 "superhomogeneous.m"
      }
#line 1237 "superhomogeneous.m"
    else
#line 1240 "superhomogeneous.m"
      {
#line 1240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 1240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 1240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__LambdaVar_13;
#line 1240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__LambdaVars_14;
#line 1240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Mode_15;
#line 1240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Modes_16;
#line 1240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__InputArgs0_21;
#line 1240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__OutputArgs0_22;
#line 1240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__InputLambdaVars0_23;
#line 1240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24;

#line 1239 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1239 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1239 "superhomogeneous.m"
          {
#line 1239 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__LambdaVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
#line 1239 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__LambdaVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
#line 1239 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1239 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1239 "superhomogeneous.m"
              {
#line 1239 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__4_4, (MR_Integer) 0)));
#line 1239 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Modes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__4_4, (MR_Integer) 1)));
#line 1241 "superhomogeneous.m"
                {
#line 1241 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(hlds__make_hlds__superhomogeneous__ModuleInfo_1, hlds__make_hlds__superhomogeneous__Args_12, hlds__make_hlds__superhomogeneous__LambdaVars_14, hlds__make_hlds__superhomogeneous__Modes_16, &hlds__make_hlds__superhomogeneous__InputArgs0_21, &hlds__make_hlds__superhomogeneous__OutputArgs0_22, &hlds__make_hlds__superhomogeneous__InputLambdaVars0_23, &hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24);
                }
#line 1240 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1240 "superhomogeneous.m"
                  {
#line 1250 "superhomogeneous.m"
                    {
#line 1250 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__succeeded = check_hlds__mode_util__mode_is_undefined_2_p_0(hlds__make_hlds__superhomogeneous__ModuleInfo_1, hlds__make_hlds__superhomogeneous__Mode_15);
                    }
#line 1255 "superhomogeneous.m"
                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1251 "superhomogeneous.m"
                      {
#line 1251 "superhomogeneous.m"
                        {
#line 1251 "superhomogeneous.m"
                          MR_Word base;
#line 1251 "superhomogeneous.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "superhomogeneous.m"
                          *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = base;
#line 1251 "superhomogeneous.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arg_11));
#line 1251 "superhomogeneous.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputArgs0_21));
#line 1251 "superhomogeneous.m"
                        }
#line 1252 "superhomogeneous.m"
                        *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = hlds__make_hlds__superhomogeneous__OutputArgs0_22;
#line 1253 "superhomogeneous.m"
                        {
#line 1253 "superhomogeneous.m"
                          MR_Word base;
#line 1253 "superhomogeneous.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1253 "superhomogeneous.m"
                          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
#line 1253 "superhomogeneous.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVar_13));
#line 1253 "superhomogeneous.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputLambdaVars0_23));
#line 1253 "superhomogeneous.m"
                        }
#line 1254 "superhomogeneous.m"
                        *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24;
#line 1251 "superhomogeneous.m"
                      }
#line 1255 "superhomogeneous.m"
                    else
#line 1260 "superhomogeneous.m"
                      {
#line 1255 "superhomogeneous.m"
                        {
#line 1255 "superhomogeneous.m"
                          hlds__make_hlds__superhomogeneous__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(hlds__make_hlds__superhomogeneous__ModuleInfo_1, hlds__make_hlds__superhomogeneous__Mode_15);
                        }
#line 1260 "superhomogeneous.m"
                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1256 "superhomogeneous.m"
                          {
#line 1256 "superhomogeneous.m"
                            *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = hlds__make_hlds__superhomogeneous__InputArgs0_21;
#line 1257 "superhomogeneous.m"
                            {
#line 1257 "superhomogeneous.m"
                              MR_Word base;
#line 1257 "superhomogeneous.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "superhomogeneous.m"
                              *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = base;
#line 1257 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arg_11));
#line 1257 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__OutputArgs0_22));
#line 1257 "superhomogeneous.m"
                            }
#line 1258 "superhomogeneous.m"
                            *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = hlds__make_hlds__superhomogeneous__InputLambdaVars0_23;
#line 1259 "superhomogeneous.m"
                            {
#line 1259 "superhomogeneous.m"
                              MR_Word base;
#line 1259 "superhomogeneous.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "superhomogeneous.m"
                              *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = base;
#line 1259 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVar_13));
#line 1259 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24));
#line 1259 "superhomogeneous.m"
                            }
#line 1256 "superhomogeneous.m"
                          }
#line 1260 "superhomogeneous.m"
                        else
#line 1261 "superhomogeneous.m"
                          {
#line 1261 "superhomogeneous.m"
                            {
#line 1261 "superhomogeneous.m"
                              MR_Word base;
#line 1261 "superhomogeneous.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "superhomogeneous.m"
                              *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = base;
#line 1261 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arg_11));
#line 1261 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputArgs0_21));
#line 1261 "superhomogeneous.m"
                            }
#line 1262 "superhomogeneous.m"
                            *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = hlds__make_hlds__superhomogeneous__OutputArgs0_22;
#line 1263 "superhomogeneous.m"
                            {
#line 1263 "superhomogeneous.m"
                              MR_Word base;
#line 1263 "superhomogeneous.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "superhomogeneous.m"
                              *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
#line 1263 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVar_13));
#line 1263 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputLambdaVars0_23));
#line 1263 "superhomogeneous.m"
                            }
#line 1264 "superhomogeneous.m"
                            *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24;
#line 1261 "superhomogeneous.m"
                          }
#line 1260 "superhomogeneous.m"
                      }
#line 1255 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 1240 "superhomogeneous.m"
                  }
#line 1239 "superhomogeneous.m"
              }
#line 1239 "superhomogeneous.m"
          }
#line 1240 "superhomogeneous.m"
      }
#line 1237 "superhomogeneous.m"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 1237 "superhomogeneous.m"
  }
#line 1232 "superhomogeneous.m"
}

#line 1045 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__X_26,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__UnificationPurity_27,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LambdaPurity_28,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Groundness_29,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_30,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Args0_32,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Modes_33,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Det_34,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_35,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_36,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_37,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_38,
#line 1045 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_39,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__OutsideSVarState_40,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82,
#line 1045 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84,
#line 1045 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86,
#line 1045 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88,
#line 1045 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89,
#line 1045 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90,
#line 1045 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91)
#line 1045 "superhomogeneous.m"
{
#line 1100 "superhomogeneous.m"
  {
#line 1100 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 1100 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__StateVar_46;

#line 1097 "superhomogeneous.m"
    {
#line 1097 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_3_p_0(hlds__make_hlds__superhomogeneous__PredOrFunc_30, hlds__make_hlds__superhomogeneous__Args0_32, &hlds__make_hlds__superhomogeneous__StateVar_46);
    }
#line 1100 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1098 "superhomogeneous.m"
      {
#line 1098 "superhomogeneous.m"
        {
#line 1098 "superhomogeneous.m"
          hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84, hlds__make_hlds__superhomogeneous__StateVar_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);
        }
#line 1099 "superhomogeneous.m"
        {
#line 1099 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Goal_39 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_36);
        }
#line 1098 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88;
#line 1098 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86;
#line 1098 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84;
#line 1098 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82;
#line 1098 "superhomogeneous.m"
      }
#line 1100 "superhomogeneous.m"
    else
#line 1104 "superhomogeneous.m"
      {
#line 1104 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__StateVar_167;

#line 1100 "superhomogeneous.m"
        {
#line 1100 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_p_0(hlds__make_hlds__superhomogeneous__Args0_32, &hlds__make_hlds__superhomogeneous__StateVar_167);
        }
#line 1104 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1102 "superhomogeneous.m"
          {
#line 1101 "superhomogeneous.m"
            {
#line 1101 "superhomogeneous.m"
              hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84, hlds__make_hlds__superhomogeneous__StateVar_167, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);
            }
#line 1103 "superhomogeneous.m"
            {
#line 1103 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Goal_39 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_36);
            }
#line 1102 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88;
#line 1102 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86;
#line 1102 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84;
#line 1102 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82;
#line 1102 "superhomogeneous.m"
          }
#line 1104 "superhomogeneous.m"
        else
#line 1107 "superhomogeneous.m"
          {
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_168_168;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_170_170;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Args_48;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__FinalSVarMap_49;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__InitialSVarState_50;
#line 1107 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__NumArgs_51;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__LambdaVars_52;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputArgs_57;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__OutputArgs_58;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputLambdaVars_59;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__OutputLambdaVars_60;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Substitution_61;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ArgContext_62;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HeadBefore0_63;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HeadBefore_64;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Body_65;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HeadAfter0_66;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HeadAfter_67;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__FinalSVarState_70;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HLDS_Goal0_71;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__QuantifiedArgs_72;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__QuantifiedVars0_74;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__QuantifiedVars_75;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_76;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HLDS_Goal_78;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__LambdaNonLocals_80;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__LambdaRHS_81;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_95_95;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_96_96;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_98_98;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_103_103;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_104_104;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_105_105;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_106_106;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_107_107;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_109_109;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_110_110;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_111_111;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_112_112;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_113_113;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_114_114;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_116_116;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_119_119;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_156_156;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_158_158;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_159_159;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_161_161;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_162_162;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_163_163;
#line 1107 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_164_164;
#line 1132 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputArgs0_53;
#line 1132 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__OutputArgs0_54;
#line 1132 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputLambdaVars0_55;
#line 1132 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__OutputLambdaVars0_56;

#line 1106 "superhomogeneous.m"
            {
#line 1106 "superhomogeneous.m"
              hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__Args0_32, &hlds__make_hlds__superhomogeneous__Args_48, &hlds__make_hlds__superhomogeneous__FinalSVarMap_49, hlds__make_hlds__superhomogeneous__OutsideSVarState_40, &hlds__make_hlds__superhomogeneous__InitialSVarState_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_95_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_96_96);
            }
#line 7520 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__TypeInfo_168_168 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2];
#line 1117 "superhomogeneous.m"
            {
#line 1117 "superhomogeneous.m"
              mercury__list__length_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_168_168, hlds__make_hlds__superhomogeneous__Args_48, &hlds__make_hlds__superhomogeneous__NumArgs_51);
            }
#line 7527 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1118 "superhomogeneous.m"
            {
#line 1118 "superhomogeneous.m"
              parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169, (MR_String) "LambdaHeadVar__", hlds__make_hlds__superhomogeneous__NumArgs_51, &hlds__make_hlds__superhomogeneous__LambdaVars_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_95_95, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_98_98);
            }
#line 1124 "superhomogeneous.m"
            {
#line 1124 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86, hlds__make_hlds__superhomogeneous__Args_48, hlds__make_hlds__superhomogeneous__LambdaVars_52, hlds__make_hlds__superhomogeneous__Modes_33, &hlds__make_hlds__superhomogeneous__NonOutputArgs0_53, &hlds__make_hlds__superhomogeneous__OutputArgs0_54, &hlds__make_hlds__superhomogeneous__NonOutputLambdaVars0_55, &hlds__make_hlds__superhomogeneous__OutputLambdaVars0_56);
            }
#line 1132 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1128 "superhomogeneous.m"
              {
#line 1128 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__NonOutputArgs_57 = hlds__make_hlds__superhomogeneous__NonOutputArgs0_53;
#line 1129 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__OutputArgs_58 = hlds__make_hlds__superhomogeneous__OutputArgs0_54;
#line 1130 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__NonOutputLambdaVars_59 = hlds__make_hlds__superhomogeneous__NonOutputLambdaVars0_55;
#line 1131 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__OutputLambdaVars_60 = hlds__make_hlds__superhomogeneous__OutputLambdaVars0_56;
#line 1128 "superhomogeneous.m"
              }
#line 1132 "superhomogeneous.m"
            else
#line 1133 "superhomogeneous.m"
              {
#line 1133 "superhomogeneous.m"
                {
#line 1133 "superhomogeneous.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.build_lambda_expression\'/25", (MR_String) "mismatched lists");
#line 1133 "superhomogeneous.m"
                  return;
                }
#line 1133 "superhomogeneous.m"
              }
#line 7566 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__TypeInfo_170_170 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 1136 "superhomogeneous.m"
            {
#line 1136 "superhomogeneous.m"
              mercury__map__init_1_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_170_170, hlds__make_hlds__superhomogeneous__TypeInfo_170_170, &hlds__make_hlds__superhomogeneous__Substitution_61);
            }
#line 1137 "superhomogeneous.m"
            {
#line 1137 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__ArgContext_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1137 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_62, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__PredOrFunc_30));
#line 1137 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_62, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__NumArgs_51));
#line 1137 "superhomogeneous.m"
            }
#line 1142 "superhomogeneous.m"
            {
#line 1142 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HeadBefore0_63 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_36);
            }
#line 1143 "superhomogeneous.m"
            {
#line 1143 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__superhomogeneous__NonOutputLambdaVars_59, hlds__make_hlds__superhomogeneous__NonOutputArgs_57, hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__ArgContext_62, hlds__make_hlds__superhomogeneous__HeadBefore0_63, &hlds__make_hlds__superhomogeneous__HeadBefore_64, hlds__make_hlds__superhomogeneous__InitialSVarState_50, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_103_103, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_98_98, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_105_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_106_106, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_96_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_107_107);
            }
#line 1148 "superhomogeneous.m"
            {
#line 1148 "superhomogeneous.m"
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 0, hlds__make_hlds__superhomogeneous__ParsedGoal_35, hlds__make_hlds__superhomogeneous__Substitution_61, &hlds__make_hlds__superhomogeneous__Body_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_109_109, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_103_103, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_110_110, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_104_104, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_105_105, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_106_106, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_107_107, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_114_114);
            }
#line 1155 "superhomogeneous.m"
            {
#line 1155 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HeadAfter0_66 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_36);
            }
#line 1156 "superhomogeneous.m"
            {
#line 1156 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__superhomogeneous__OutputLambdaVars_60, hlds__make_hlds__superhomogeneous__OutputArgs_58, hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__ArgContext_62, hlds__make_hlds__superhomogeneous__HeadAfter0_66, &hlds__make_hlds__superhomogeneous__HeadAfter_67, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_109_109, &hlds__make_hlds__superhomogeneous__FinalSVarState_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_110_110, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_116_116, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_113_113, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_119_119, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_114_114, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);
            }
#line 1192 "superhomogeneous.m"
            {
#line 1192 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HeadAfter_67));
#line 1192 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1192 "superhomogeneous.m"
            }
#line 1192 "superhomogeneous.m"
            {
#line 1192 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Body_65));
#line 1192 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_159_159));
#line 1192 "superhomogeneous.m"
            }
#line 1192 "superhomogeneous.m"
            {
#line 1192 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HeadBefore_64));
#line 1192 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_156_156, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_158_158));
#line 1192 "superhomogeneous.m"
            }
#line 1191 "superhomogeneous.m"
            {
#line 1191 "superhomogeneous.m"
              hlds__make_hlds__state_var__svar_finish_lambda_body_8_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__FinalSVarMap_49, hlds__make_hlds__superhomogeneous__V_156_156, &hlds__make_hlds__superhomogeneous__HLDS_Goal0_71, hlds__make_hlds__superhomogeneous__InitialSVarState_50, hlds__make_hlds__superhomogeneous__FinalSVarState_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_116_116, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83);
            }
#line 1200 "superhomogeneous.m"
#line 1200 "superhomogeneous.m"
            switch (hlds__make_hlds__superhomogeneous__PredOrFunc_30) {
#line 1200 "superhomogeneous.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1200 "superhomogeneous.m"
              case (MR_Integer) 1:
#line 1202 "superhomogeneous.m"
                {
#line 1202 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous___ReturnValTerm_73;
#line 1202 "superhomogeneous.m"
                  MR_Box hlds__make_hlds__superhomogeneous__conv0__ReturnValTerm_73;

#line 1202 "superhomogeneous.m"
                  {
#line 1202 "superhomogeneous.m"
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_168_168, hlds__make_hlds__superhomogeneous__Args_48, &hlds__make_hlds__superhomogeneous__QuantifiedArgs_72, &hlds__make_hlds__superhomogeneous__conv0__ReturnValTerm_73);
                  }
#line 1202 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous___ReturnValTerm_73 = ((MR_Word) hlds__make_hlds__superhomogeneous__conv0__ReturnValTerm_73);
#line 1202 "superhomogeneous.m"
                }
#line 1200 "superhomogeneous.m"
                break;
#line 1200 "superhomogeneous.m"
              case (MR_Integer) 0:
#line 1199 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__QuantifiedArgs_72 = hlds__make_hlds__superhomogeneous__Args_48;
#line 1200 "superhomogeneous.m"
                break;
#line 1200 "superhomogeneous.m"
            }
#line 1204 "superhomogeneous.m"
            {
#line 1204 "superhomogeneous.m"
              mercury__term__vars_list_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169, hlds__make_hlds__superhomogeneous__QuantifiedArgs_72, &hlds__make_hlds__superhomogeneous__QuantifiedVars0_74);
            }
#line 1205 "superhomogeneous.m"
            {
#line 1205 "superhomogeneous.m"
              mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_170_170, hlds__make_hlds__superhomogeneous__QuantifiedVars0_74, &hlds__make_hlds__superhomogeneous__QuantifiedVars_75);
            }
#line 1207 "superhomogeneous.m"
            {
#line 1207 "superhomogeneous.m"
              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_36, &hlds__make_hlds__superhomogeneous__GoalInfo_76);
            }
#line 1208 "superhomogeneous.m"
            {
#line 1208 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1208 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__QuantifiedVars_75));
#line 1208 "superhomogeneous.m"
            }
#line 1208 "superhomogeneous.m"
            {
#line 1208 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1208 "superhomogeneous.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1208 "superhomogeneous.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_161_161));
#line 1208 "superhomogeneous.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HLDS_Goal0_71));
#line 1208 "superhomogeneous.m"
            }
#line 1209 "superhomogeneous.m"
            {
#line 1209 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HLDS_Goal_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1209 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HLDS_Goal_78, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77));
#line 1209 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HLDS_Goal_78, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_76));
#line 1209 "superhomogeneous.m"
            }
#line 1215 "superhomogeneous.m"
            {
#line 1215 "superhomogeneous.m"
              hlds__goal_util__goal_vars_2_p_0(hlds__make_hlds__superhomogeneous__HLDS_Goal_78, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_162_162);
            }
#line 1216 "superhomogeneous.m"
            {
#line 1216 "superhomogeneous.m"
              parse_tree__set_of_var__delete_list_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169, hlds__make_hlds__superhomogeneous__LambdaVars_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_162_162, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_163_163);
            }
#line 1217 "superhomogeneous.m"
            {
#line 1217 "superhomogeneous.m"
              parse_tree__set_of_var__delete_list_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169, hlds__make_hlds__superhomogeneous__QuantifiedVars_75, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_163_163, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_164_164);
            }
#line 1218 "superhomogeneous.m"
            {
#line 1218 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__LambdaNonLocals_80 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_164_164);
            }
#line 1221 "superhomogeneous.m"
            {
#line 1221 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__LambdaRHS_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 0) = ((MR_Box) ((hlds__make_hlds__superhomogeneous__LambdaPurity_28 | ((((hlds__make_hlds__superhomogeneous__Groundness_29 << (MR_Integer) 2)) | ((hlds__make_hlds__superhomogeneous__PredOrFunc_30 << (MR_Integer) 3)))))));
#line 1221 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 1) = (MR_Integer) 0;
#line 1221 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaNonLocals_80));
#line 1221 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVars_52));
#line 1221 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 4) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Modes_33));
#line 1221 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 5) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Det_34));
#line 1221 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 6) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HLDS_Goal_78));
#line 1221 "superhomogeneous.m"
            }
#line 1224 "superhomogeneous.m"
            {
#line 1224 "superhomogeneous.m"
              hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__X_26, hlds__make_hlds__superhomogeneous__LambdaRHS_81, hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__MainContext_37, hlds__make_hlds__superhomogeneous__SubContext_38, hlds__make_hlds__superhomogeneous__UnificationPurity_27, hlds__make_hlds__superhomogeneous__Goal_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_119_119, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89);
#line 1224 "superhomogeneous.m"
              return;
            }
#line 1107 "superhomogeneous.m"
          }
#line 1104 "superhomogeneous.m"
      }
#line 1100 "superhomogeneous.m"
  }
#line 1045 "superhomogeneous.m"
}

#line 1019 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(
#line 1019 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Modes0_8,
#line 1019 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Modes_9,
#line 1019 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_10,
#line 1019 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
#line 1019 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
#line 1019 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 1019 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19)
#line 1019 "superhomogeneous.m"
{
#line 1025 "superhomogeneous.m"
  {
#line 1025 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 1025 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__MaybeOptImported_13;

#line 1026 "superhomogeneous.m"
    {
#line 1026 "superhomogeneous.m"
      hlds__make_hlds__qual_info__qual_info_get_maybe_opt_imported_2_p_0(hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, &hlds__make_hlds__superhomogeneous__MaybeOptImported_13);
    }
#line 1034 "superhomogeneous.m"
#line 1034 "superhomogeneous.m"
    switch (hlds__make_hlds__superhomogeneous__MaybeOptImported_13) {
#line 1034 "superhomogeneous.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1034 "superhomogeneous.m"
      case (MR_Integer) 0:
#line 1028 "superhomogeneous.m"
        {
#line 1028 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__MQInfo0_14;
#line 1028 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__MQInfo_15;

#line 1029 "superhomogeneous.m"
          {
#line 1029 "superhomogeneous.m"
            hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, &hlds__make_hlds__superhomogeneous__MQInfo0_14);
          }
#line 1031 "superhomogeneous.m"
          {
#line 1031 "superhomogeneous.m"
            parse_tree__module_qual__qualify_lambda_mode_list_8_p_0((MR_Integer) 0, hlds__make_hlds__superhomogeneous__Context_10, hlds__make_hlds__superhomogeneous__Modes0_8, hlds__make_hlds__superhomogeneous__Modes_9, hlds__make_hlds__superhomogeneous__MQInfo0_14, &hlds__make_hlds__superhomogeneous__MQInfo_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);
          }
#line 1033 "superhomogeneous.m"
          {
#line 1033 "superhomogeneous.m"
            hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(hlds__make_hlds__superhomogeneous__MQInfo_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17);
#line 1033 "superhomogeneous.m"
            return;
          }
#line 1028 "superhomogeneous.m"
        }
#line 1034 "superhomogeneous.m"
        break;
#line 1034 "superhomogeneous.m"
      case (MR_Integer) 1:
#line 1035 "superhomogeneous.m"
        {
#line 1037 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Modes_9 = hlds__make_hlds__superhomogeneous__Modes0_8;
#line 1035 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16;
#line 1035 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18;
#line 1035 "superhomogeneous.m"
        }
#line 1034 "superhomogeneous.m"
        break;
#line 1034 "superhomogeneous.m"
    }
#line 1025 "superhomogeneous.m"
  }
#line 1019 "superhomogeneous.m"
}

#line 747 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__convert_big_integer_functor_5_p_0(
#line 747 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Functor0_6,
#line 747 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Functor_7,
#line 747 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_8,
#line 747 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 747 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19)
#line 747 "superhomogeneous.m"
{
#line 765 "superhomogeneous.m"
  {
#line 765 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__Functor0_6)) == (MR_mktag((MR_Integer) 2)));
#line 765 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__Base_10;
#line 765 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__Integer_11;

#line 751 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 751 "superhomogeneous.m"
      {
#line 751 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__Base_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__Functor0_6, (MR_Integer) 0)));
#line 751 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__Integer_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__Functor0_6, (MR_Integer) 1)));
#line 754 "superhomogeneous.m"
        {
#line 754 "superhomogeneous.m"
          MR_Integer hlds__make_hlds__superhomogeneous__Int_12;

#line 752 "superhomogeneous.m"
          {
#line 752 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(hlds__make_hlds__superhomogeneous__Base_10, hlds__make_hlds__superhomogeneous__Integer_11, &hlds__make_hlds__superhomogeneous__Int_12);
          }
#line 754 "superhomogeneous.m"
          if (hlds__make_hlds__superhomogeneous__succeeded)
#line 753 "superhomogeneous.m"
            {
#line 753 "superhomogeneous.m"
              {
#line 753 "superhomogeneous.m"
                MR_Word base;
#line 753 "superhomogeneous.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 753 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__Functor_7 = base;
#line 753 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Int_12));
#line 753 "superhomogeneous.m"
              }
#line 753 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18;
#line 753 "superhomogeneous.m"
            }
#line 754 "superhomogeneous.m"
          else
#line 755 "superhomogeneous.m"
            {
#line 755 "superhomogeneous.m"
              MR_String hlds__make_hlds__superhomogeneous__BasePrefix_13;
#line 755 "superhomogeneous.m"
              MR_String hlds__make_hlds__superhomogeneous__IntString_14;
#line 755 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__Pieces_15;
#line 755 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__Msg_16;
#line 755 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__Spec_17;
#line 755 "superhomogeneous.m"
              MR_Integer hlds__make_hlds__superhomogeneous__V_20_20;
#line 755 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__V_23_23;
#line 755 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__V_24_24;
#line 755 "superhomogeneous.m"
              MR_String hlds__make_hlds__superhomogeneous__V_25_25;
#line 755 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__V_30_30;
#line 755 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__V_31_31;
#line 755 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__V_35_35;

#line 755 "superhomogeneous.m"
              {
#line 755 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__BasePrefix_13 = mercury__term_io__integer_base_prefix_1_f_0(hlds__make_hlds__superhomogeneous__Base_10);
              }
#line 757 "superhomogeneous.m"
              {
#line 757 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_20_20 = mercury__term_io__integer_base_int_1_f_0(hlds__make_hlds__superhomogeneous__Base_10);
              }
#line 757 "superhomogeneous.m"
              {
#line 757 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__IntString_14 = mercury__integer__to_base_string_2_f_0(hlds__make_hlds__superhomogeneous__Integer_11, hlds__make_hlds__superhomogeneous__V_20_20);
              }
#line 759 "superhomogeneous.m"
              {
#line 759 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_25_25 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__BasePrefix_13, hlds__make_hlds__superhomogeneous__IntString_14);
              }
#line 759 "superhomogeneous.m"
              {
#line 759 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "superhomogeneous.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 759 "superhomogeneous.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_25_25));
#line 759 "superhomogeneous.m"
              }
#line 759 "superhomogeneous.m"
              {
#line 759 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_24_24));
#line 759 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[6])));
#line 759 "superhomogeneous.m"
              }
#line 758 "superhomogeneous.m"
              {
#line 758 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[4])));
#line 758 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Pieces_15, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_23_23));
#line 758 "superhomogeneous.m"
              }
#line 760 "superhomogeneous.m"
              {
#line 760 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 760 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Pieces_15));
#line 760 "superhomogeneous.m"
              }
#line 760 "superhomogeneous.m"
              {
#line 760 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_31_31));
#line 760 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 760 "superhomogeneous.m"
              }
#line 760 "superhomogeneous.m"
              {
#line 760 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 760 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Msg_16, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Context_8));
#line 760 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Msg_16, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_30_30));
#line 760 "superhomogeneous.m"
              }
#line 761 "superhomogeneous.m"
              {
#line 761 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Msg_16));
#line 761 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 761 "superhomogeneous.m"
              }
#line 761 "superhomogeneous.m"
              {
#line 761 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 761 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 761 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 761 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_35_35));
#line 761 "superhomogeneous.m"
              }
#line 762 "superhomogeneous.m"
              {
#line 762 "superhomogeneous.m"
                MR_Word base;
#line 762 "superhomogeneous.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = base;
#line 762 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Spec_17));
#line 762 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18));
#line 762 "superhomogeneous.m"
              }
#line 763 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Functor_7 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_5[0]);
#line 755 "superhomogeneous.m"
            }
#line 754 "superhomogeneous.m"
        }
#line 751 "superhomogeneous.m"
      }
#line 751 "superhomogeneous.m"
    else
#line 766 "superhomogeneous.m"
      {
#line 766 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__Functor_7 = hlds__make_hlds__superhomogeneous__Functor0_6;
#line 766 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18;
#line 766 "superhomogeneous.m"
      }
#line 765 "superhomogeneous.m"
  }
#line 747 "superhomogeneous.m"
}

#line 334 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(
#line 334 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 334 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__GoalCord_4)
#line 334 "superhomogeneous.m"
{
#line 337 "superhomogeneous.m"
  {
#line 337 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 337 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));

#line 337 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__GoalCord_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 337 "superhomogeneous.m"
  }
#line 334 "superhomogeneous.m"
}

#line 317 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(
#line 317 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 317 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2,
#line 317 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_3,
#line 317 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4,
#line 317 "superhomogeneous.m"
  MR_Integer * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_5)
#line 317 "superhomogeneous.m"
{
#line 320 "superhomogeneous.m"
  while (MR_TRUE)
#line 320 "superhomogeneous.m"
    {
#line 320 "superhomogeneous.m"
      /* tailcall optimized into a loop */
#line 320 "superhomogeneous.m"
      {
#line 320 "superhomogeneous.m"
        MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 320 "superhomogeneous.m"
        if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 320 "superhomogeneous.m"
          {
#line 320 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_5 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4;
#line 320 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_3 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2;
#line 320 "superhomogeneous.m"
          }
#line 320 "superhomogeneous.m"
        else
#line 322 "superhomogeneous.m"
          {
#line 322 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Expansion_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 322 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Expansions_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 322 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeFGTI_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_12, (MR_Integer) 0)));
#line 322 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24;
#line 322 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25;
#line 323 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_12, (MR_Integer) 1)));

#line 327 "superhomogeneous.m"
            if ((hlds__make_hlds__superhomogeneous__MaybeFGTI_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "superhomogeneous.m"
              {
#line 326 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25 = (MR_Integer) 0;
#line 325 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4;
#line 325 "superhomogeneous.m"
              }
#line 327 "superhomogeneous.m"
            else
#line 328 "superhomogeneous.m"
              {
#line 328 "superhomogeneous.m"
                MR_Integer hlds__make_hlds__superhomogeneous__Size_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_16, (MR_Integer) 1)));
#line 328 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_16, (MR_Integer) 0)));

#line 329 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24 = (hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4 + hlds__make_hlds__superhomogeneous__Size_19);
#line 328 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2;
#line 328 "superhomogeneous.m"
              }
#line 331 "superhomogeneous.m"
            /* direct tailcall eliminated */
#line 331 "superhomogeneous.m"
            {
#line 331 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1 = hlds__make_hlds__superhomogeneous__Expansions_13;
#line 331 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0__tmp_copy_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25;
#line 331 "superhomogeneous.m"
              MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0__tmp_copy_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24;

#line 331 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0__tmp_copy_4;
#line 331 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0__tmp_copy_2;
#line 331 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1;
#line 331 "superhomogeneous.m"
            }
#line 331 "superhomogeneous.m"
            continue;
#line 322 "superhomogeneous.m"
          }
#line 320 "superhomogeneous.m"
      }
#line 320 "superhomogeneous.m"
      break;
#line 320 "superhomogeneous.m"
    }
#line 317 "superhomogeneous.m"
}

#line 310 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_2(
#line 310 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 310 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 310 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 310 "superhomogeneous.m"
{
#line 310 "superhomogeneous.m"
  {
#line 310 "superhomogeneous.m"
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
#line 310 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__conv1_GoalCord_4;

#line 310 "superhomogeneous.m"
    {
#line 310 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv1_GoalCord_4);
    }
#line 310 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv1_GoalCord_4));
#line 310 "superhomogeneous.m"
  }
#line 310 "superhomogeneous.m"
}

#line 302 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1(
#line 302 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 302 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 302 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 302 "superhomogeneous.m"
{
#line 302 "superhomogeneous.m"
  {
#line 302 "superhomogeneous.m"
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
#line 302 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

#line 302 "superhomogeneous.m"
    {
#line 302 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
#line 302 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
#line 302 "superhomogeneous.m"
  }
#line 302 "superhomogeneous.m"
}

#line 293 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(
#line 293 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_7,
#line 293 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__TermVar_8,
#line 293 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_9,
#line 293 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__BaseGoalSize_10,
#line 293 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_11,
#line 293 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_12)
#line 293 "superhomogeneous.m"
{
#line 297 "superhomogeneous.m"
  {
#line 297 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 297 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__AllFGTI_13;
#line 297 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__TotalSize_14;

#line 298 "superhomogeneous.m"
    {
#line 298 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(hlds__make_hlds__superhomogeneous__ArgExpansions_11, (MR_Integer) 1, &hlds__make_hlds__superhomogeneous__AllFGTI_13, hlds__make_hlds__superhomogeneous__BaseGoalSize_10, &hlds__make_hlds__superhomogeneous__TotalSize_14);
    }
#line 308 "superhomogeneous.m"
#line 308 "superhomogeneous.m"
    switch (hlds__make_hlds__superhomogeneous__AllFGTI_13) {
#line 308 "superhomogeneous.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 308 "superhomogeneous.m"
      case (MR_Integer) 0:
#line 301 "superhomogeneous.m"
        {
#line 301 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30;
#line 301 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__ArgGoalCords_15;
#line 301 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__ArgGoalsCord_16;
#line 301 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__GoalCord_17;
#line 301 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__V_21_21;

#line 302 "superhomogeneous.m"
          {
#line 302 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 302 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
#line 302 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1));
#line 302 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 302 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_7));
#line 302 "superhomogeneous.m"
          }
#line 302 "superhomogeneous.m"
          {
#line 302 "superhomogeneous.m"
            mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_21_21, hlds__make_hlds__superhomogeneous__ArgExpansions_11, &hlds__make_hlds__superhomogeneous__ArgGoalCords_15);
          }
#line 8355 "hlds.make_hlds.superhomogeneous.c"
          hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 304 "superhomogeneous.m"
          {
#line 304 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__ArgGoalsCord_16 = mercury__cord__cord_list_to_cord_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30, hlds__make_hlds__superhomogeneous__ArgGoalCords_15);
          }
#line 306 "superhomogeneous.m"
          {
#line 306 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__GoalCord_17 = mercury__cord__cons_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30, ((MR_Box) (hlds__make_hlds__superhomogeneous__BaseGoal_9)), hlds__make_hlds__superhomogeneous__ArgGoalsCord_16);
          }
#line 307 "superhomogeneous.m"
          {
#line 307 "superhomogeneous.m"
            MR_Word base;
#line 307 "superhomogeneous.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 307 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__Expansion_12 = base;
#line 307 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_17));
#line 307 "superhomogeneous.m"
          }
#line 301 "superhomogeneous.m"
        }
#line 308 "superhomogeneous.m"
        break;
#line 308 "superhomogeneous.m"
      case (MR_Integer) 1:
#line 309 "superhomogeneous.m"
        {
#line 309 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35;
#line 309 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__V_20_20;
#line 309 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__ArgGoalCords_23;
#line 309 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__ArgGoalsCord_24;
#line 309 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__GoalCord_25;

#line 310 "superhomogeneous.m"
          {
#line 310 "superhomogeneous.m"
            mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_4[0], hlds__make_hlds__superhomogeneous__ArgExpansions_11, &hlds__make_hlds__superhomogeneous__ArgGoalCords_23);
          }
#line 8405 "hlds.make_hlds.superhomogeneous.c"
          hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 311 "superhomogeneous.m"
          {
#line 311 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__ArgGoalsCord_24 = mercury__cord__cord_list_to_cord_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35, hlds__make_hlds__superhomogeneous__ArgGoalCords_23);
          }
#line 313 "superhomogeneous.m"
          {
#line 313 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__GoalCord_25 = mercury__cord__cons_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35, ((MR_Box) (hlds__make_hlds__superhomogeneous__BaseGoal_9)), hlds__make_hlds__superhomogeneous__ArgGoalsCord_24);
          }
#line 314 "superhomogeneous.m"
          {
#line 314 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "superhomogeneous.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermVar_8));
#line 314 "superhomogeneous.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TotalSize_14));
#line 314 "superhomogeneous.m"
          }
#line 314 "superhomogeneous.m"
          {
#line 314 "superhomogeneous.m"
            MR_Word base;
#line 314 "superhomogeneous.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__Expansion_12 = base;
#line 314 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_20_20));
#line 314 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_25));
#line 314 "superhomogeneous.m"
          }
#line 309 "superhomogeneous.m"
        }
#line 308 "superhomogeneous.m"
        break;
#line 308 "superhomogeneous.m"
    }
#line 297 "superhomogeneous.m"
  }
#line 293 "superhomogeneous.m"
}

#line 288 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1(
#line 288 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 288 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 288 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 288 "superhomogeneous.m"
{
#line 288 "superhomogeneous.m"
  {
#line 288 "superhomogeneous.m"
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
#line 288 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

#line 288 "superhomogeneous.m"
    {
#line 288 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
#line 288 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
#line 288 "superhomogeneous.m"
  }
#line 288 "superhomogeneous.m"
}

#line 282 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(
#line 282 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
#line 282 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansions_6,
#line 282 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
#line 282 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8)
#line 282 "superhomogeneous.m"
{
#line 286 "superhomogeneous.m"
  {
#line 286 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 286 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18;
#line 286 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_9;
#line 286 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCords_10;
#line 286 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_11;
#line 286 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_12_12;
#line 286 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_13_13;

#line 287 "superhomogeneous.m"
    {
#line 287 "superhomogeneous.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__BaseGoal_7, &hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
#line 288 "superhomogeneous.m"
    {
#line 288 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 288 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
#line 288 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1));
#line 288 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 288 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_5));
#line 288 "superhomogeneous.m"
    }
#line 288 "superhomogeneous.m"
    {
#line 288 "superhomogeneous.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_12_12, hlds__make_hlds__superhomogeneous__Expansions_6, &hlds__make_hlds__superhomogeneous__ExpansionGoalCords_10);
    }
#line 8536 "hlds.make_hlds.superhomogeneous.c"
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 290 "superhomogeneous.m"
    {
#line 290 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__ExpansionGoals_11 = mercury__cord__cord_list_to_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18, hlds__make_hlds__superhomogeneous__ExpansionGoalCords_10);
    }
#line 291 "superhomogeneous.m"
    {
#line 291 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_13_13 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18, hlds__make_hlds__superhomogeneous__ExpansionGoals_11, hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
#line 291 "superhomogeneous.m"
    {
#line 291 "superhomogeneous.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_13_13, hlds__make_hlds__superhomogeneous__GoalInfo_5, hlds__make_hlds__superhomogeneous__Goal_8);
#line 291 "superhomogeneous.m"
      return;
    }
#line 286 "superhomogeneous.m"
  }
#line 282 "superhomogeneous.m"
}

#line 271 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(
#line 271 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
#line 271 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_6,
#line 271 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
#line 271 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8)
#line 271 "superhomogeneous.m"
{
#line 275 "superhomogeneous.m"
  {
#line 275 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 275 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13;
#line 275 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_9;
#line 275 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCord_10;
#line 275 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_11;
#line 275 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_12_12;

#line 276 "superhomogeneous.m"
    {
#line 276 "superhomogeneous.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__BaseGoal_7, &hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
#line 277 "superhomogeneous.m"
    {
#line 277 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_5, hlds__make_hlds__superhomogeneous__Expansion_6, &hlds__make_hlds__superhomogeneous__ExpansionGoalCord_10);
    }
#line 8598 "hlds.make_hlds.superhomogeneous.c"
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 279 "superhomogeneous.m"
    {
#line 279 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__ExpansionGoals_11 = mercury__cord__list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13, hlds__make_hlds__superhomogeneous__ExpansionGoalCord_10);
    }
#line 280 "superhomogeneous.m"
    {
#line 280 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_12_12 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13, hlds__make_hlds__superhomogeneous__ExpansionGoals_11, hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
#line 280 "superhomogeneous.m"
    {
#line 280 "superhomogeneous.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_12_12, hlds__make_hlds__superhomogeneous__GoalInfo_5, hlds__make_hlds__superhomogeneous__Goal_8);
#line 280 "superhomogeneous.m"
      return;
    }
#line 275 "superhomogeneous.m"
  }
#line 271 "superhomogeneous.m"
}

#line 251 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(
#line 251 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 251 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__2_2)
#line 251 "superhomogeneous.m"
{
#line 254 "superhomogeneous.m"
  {
#line 254 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 254 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "superhomogeneous.m"
      *hlds__make_hlds__superhomogeneous__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 254 "superhomogeneous.m"
    else
#line 255 "superhomogeneous.m"
      {
#line 255 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goal0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 255 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 255 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goal_5;
#line 255 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goals_6;
#line 255 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_3, (MR_Integer) 0)));
#line 255 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_3, (MR_Integer) 1)));
#line 264 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__LHSVar_9;
#line 264 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__RHSVars_16;
#line 258 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__RHS_10;
#line 258 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_11_11;
#line 258 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_12_12;
#line 258 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_13_13;
#line 259 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_14_14;
#line 259 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_15_15;

#line 258 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__GoalExpr_7)) == (MR_mktag((MR_Integer) 1)));
#line 258 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 258 "superhomogeneous.m"
          {
#line 258 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__LHSVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 0)));
#line 258 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 1)));
#line 258 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 2)));
#line 258 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 3)));
#line 258 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 4)));
#line 259 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__RHS_10)) == (MR_mktag((MR_Integer) 1)));
#line 259 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 259 "superhomogeneous.m"
              {
#line 259 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__RHS_10, (MR_Integer) 0)));
#line 259 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__RHS_10, (MR_Integer) 1)));
#line 259 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__RHSVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__RHS_10, (MR_Integer) 2)));
#line 259 "superhomogeneous.m"
              }
#line 258 "superhomogeneous.m"
          }
#line 264 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 261 "superhomogeneous.m"
          {
#line 261 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NonLocals_17;
#line 261 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_18;
#line 261 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_19_19;

#line 261 "superhomogeneous.m"
            {
#line 261 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LHSVar_9));
#line 261 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__RHSVars_16));
#line 261 "superhomogeneous.m"
            }
#line 261 "superhomogeneous.m"
            {
#line 261 "superhomogeneous.m"
              parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__V_19_19, &hlds__make_hlds__superhomogeneous__NonLocals_17);
            }
#line 262 "superhomogeneous.m"
            {
#line 262 "superhomogeneous.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__superhomogeneous__NonLocals_17, hlds__make_hlds__superhomogeneous__GoalInfo0_8, &hlds__make_hlds__superhomogeneous__GoalInfo_18);
            }
#line 263 "superhomogeneous.m"
            {
#line 263 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__Goal_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 263 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_5, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_7));
#line 263 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_5, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_18));
#line 263 "superhomogeneous.m"
            }
#line 261 "superhomogeneous.m"
          }
#line 264 "superhomogeneous.m"
        else
#line 265 "superhomogeneous.m"
          {
#line 265 "superhomogeneous.m"
            {
#line 265 "superhomogeneous.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.mark_nonlocals_in_ground_term_initial\'/2", (MR_String) "wrong shape goal");
#line 265 "superhomogeneous.m"
              return;
            }
#line 265 "superhomogeneous.m"
          }
#line 267 "superhomogeneous.m"
        {
#line 267 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(hlds__make_hlds__superhomogeneous__Goals0_4, &hlds__make_hlds__superhomogeneous__Goals_6);
        }
#line 255 "superhomogeneous.m"
        {
#line 255 "superhomogeneous.m"
          MR_Word base;
#line 255 "superhomogeneous.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__2_2 = base;
#line 255 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_5));
#line 255 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Goals_6));
#line 255 "superhomogeneous.m"
        }
#line 255 "superhomogeneous.m"
      }
#line 254 "superhomogeneous.m"
  }
#line 251 "superhomogeneous.m"
}

#line 226 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(
#line 226 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
#line 226 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
#line 226 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6)
#line 226 "superhomogeneous.m"
{
#line 230 "superhomogeneous.m"
  {
#line 230 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 230 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__MaybeFGTI_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 0)));
#line 230 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__GoalCord_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 1)));
#line 247 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TermVar_9;
#line 233 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__Size_10;
#line 233 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__Threshold_11;
#line 233 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_20_20;

#line 233 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeFGTI_7)) == (MR_mktag((MR_Integer) 1)));
#line 233 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 233 "superhomogeneous.m"
      {
#line 233 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__TermVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 0)));
#line 233 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__Size_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 1)));
#line 234 "superhomogeneous.m"
        {
#line 234 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_20_20 = libs__globals__get_maybe_from_ground_term_threshold_0_f_0();
        }
#line 234 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 234 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 234 "superhomogeneous.m"
          {
#line 234 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__Threshold_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_20_20, (MR_Integer) 0)));
#line 235 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__Size_10 >= hlds__make_hlds__superhomogeneous__Threshold_11);
#line 234 "superhomogeneous.m"
          }
#line 233 "superhomogeneous.m"
      }
#line 247 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 237 "superhomogeneous.m"
      {
#line 237 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 237 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goals_12;
#line 237 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13;
#line 237 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__MarkedGoals_14;
#line 237 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ConjGoalExpr_15;
#line 237 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ConjGoal_16;
#line 237 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Reason_17;
#line 237 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18;
#line 237 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ScopeGoal_19;
#line 237 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_21_21;

#line 237 "superhomogeneous.m"
        {
#line 237 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__Goals_12 = mercury__cord__list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_24_24, hlds__make_hlds__superhomogeneous__GoalCord_8);
        }
#line 238 "superhomogeneous.m"
        {
#line 238 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_21_21 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__TermVar_9);
        }
#line 238 "superhomogeneous.m"
        {
#line 238 "superhomogeneous.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__superhomogeneous__V_21_21, hlds__make_hlds__superhomogeneous__GoalInfo_4, &hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13);
        }
#line 240 "superhomogeneous.m"
        {
#line 240 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(hlds__make_hlds__superhomogeneous__Goals_12, &hlds__make_hlds__superhomogeneous__MarkedGoals_14);
        }
#line 241 "superhomogeneous.m"
        {
#line 241 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__ConjGoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 241 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 241 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 241 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_15, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoals_14));
#line 241 "superhomogeneous.m"
        }
#line 242 "superhomogeneous.m"
        {
#line 242 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__ConjGoal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 242 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_16, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoalExpr_15));
#line 242 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_16, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13));
#line 242 "superhomogeneous.m"
        }
#line 243 "superhomogeneous.m"
        {
#line 243 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__Reason_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 243 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 243 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_17, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermVar_9));
#line 243 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_17, 2) = ((MR_Box) ((MR_Integer) 0));
#line 243 "superhomogeneous.m"
        }
#line 244 "superhomogeneous.m"
        {
#line 244 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 244 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 244 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Reason_17));
#line 244 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoal_16));
#line 244 "superhomogeneous.m"
        }
#line 245 "superhomogeneous.m"
        {
#line 245 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__ScopeGoal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ScopeGoal_19, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18));
#line 245 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ScopeGoal_19, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13));
#line 245 "superhomogeneous.m"
        }
#line 246 "superhomogeneous.m"
        {
#line 246 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6 = mercury__cord__singleton_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_24_24, ((MR_Box) (hlds__make_hlds__superhomogeneous__ScopeGoal_19)));
        }
#line 237 "superhomogeneous.m"
      }
#line 247 "superhomogeneous.m"
    else
#line 248 "superhomogeneous.m"
      *hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6 = hlds__make_hlds__superhomogeneous__GoalCord_8;
#line 230 "superhomogeneous.m"
  }
#line 226 "superhomogeneous.m"
}

#line 190 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(
#line 190 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
#line 190 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
#line 190 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_6)
#line 190 "superhomogeneous.m"
{
#line 193 "superhomogeneous.m"
  {
#line 193 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 193 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__MaybeFGTI_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 0)));
#line 193 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCord_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 1)));
#line 193 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_9;

#line 195 "superhomogeneous.m"
    {
#line 195 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__ExpansionGoals_9 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__superhomogeneous__ExpansionGoalCord_8);
    }
#line 199 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__ExpansionGoals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "superhomogeneous.m"
      {
#line 197 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_34_34;

#line 198 "superhomogeneous.m"
        {
#line 198 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_34_34 = hlds__make_goal__true_goal_expr_0_f_0();
        }
#line 198 "superhomogeneous.m"
        {
#line 198 "superhomogeneous.m"
          MR_Word base;
#line 198 "superhomogeneous.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 198 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Goal_6 = base;
#line 198 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_34_34));
#line 198 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_4));
#line 198 "superhomogeneous.m"
        }
#line 197 "superhomogeneous.m"
      }
#line 199 "superhomogeneous.m"
    else
#line 199 "superhomogeneous.m"
      {
#line 199 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ExpansionGoals_9, (MR_Integer) 1)));
#line 199 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ExpansionGoals_9, (MR_Integer) 0)));

#line 199 "superhomogeneous.m"
        if ((hlds__make_hlds__superhomogeneous__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "superhomogeneous.m"
          {
#line 200 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_39_39, (MR_Integer) 0)));
#line 200 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_39_39, (MR_Integer) 1)));
#line 200 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Context_13;
#line 200 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalInfo_14;

#line 202 "superhomogeneous.m"
            {
#line 202 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__superhomogeneous__GoalInfo_4);
            }
#line 203 "superhomogeneous.m"
            {
#line 203 "superhomogeneous.m"
              hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_hlds__superhomogeneous__Context_13, hlds__make_hlds__superhomogeneous__ExpansionGoalInfo0_12, &hlds__make_hlds__superhomogeneous__ExpansionGoalInfo_14);
            }
#line 204 "superhomogeneous.m"
            {
#line 204 "superhomogeneous.m"
              MR_Word base;
#line 204 "superhomogeneous.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 204 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Goal_6 = base;
#line 204 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ExpansionGoalExpr_11));
#line 204 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ExpansionGoalInfo_14));
#line 204 "superhomogeneous.m"
            }
#line 200 "superhomogeneous.m"
          }
#line 199 "superhomogeneous.m"
        else
#line 220 "superhomogeneous.m"
          {
#line 220 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TermVar_18;
#line 208 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__Size_19;
#line 208 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__Threshold_20;
#line 208 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_28_28;

#line 208 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeFGTI_7)) == (MR_mktag((MR_Integer) 1)));
#line 208 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 208 "superhomogeneous.m"
              {
#line 208 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__TermVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 0)));
#line 208 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Size_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 1)));
#line 209 "superhomogeneous.m"
                {
#line 209 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_28_28 = libs__globals__get_maybe_from_ground_term_threshold_0_f_0();
                }
#line 209 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 209 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 209 "superhomogeneous.m"
                  {
#line 209 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__Threshold_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_28_28, (MR_Integer) 0)));
#line 210 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__Size_19 >= hlds__make_hlds__superhomogeneous__Threshold_20);
#line 209 "superhomogeneous.m"
                  }
#line 208 "superhomogeneous.m"
              }
#line 220 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 213 "superhomogeneous.m"
              {
#line 213 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__MarkedGoalInfo_21;
#line 213 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__MarkedGoals_22;
#line 213 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ConjGoalExpr_23;
#line 213 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ConjGoal_24;
#line 213 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__Reason_25;
#line 213 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_26;
#line 213 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_29_29;

#line 212 "superhomogeneous.m"
                {
#line 212 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_29_29 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__TermVar_18);
                }
#line 212 "superhomogeneous.m"
                {
#line 212 "superhomogeneous.m"
                  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__superhomogeneous__V_29_29, hlds__make_hlds__superhomogeneous__GoalInfo_4, &hlds__make_hlds__superhomogeneous__MarkedGoalInfo_21);
                }
#line 214 "superhomogeneous.m"
                {
#line 214 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(hlds__make_hlds__superhomogeneous__ExpansionGoals_9, &hlds__make_hlds__superhomogeneous__MarkedGoals_22);
                }
#line 215 "superhomogeneous.m"
                {
#line 215 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__ConjGoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 215 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 215 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_23, 1) = ((MR_Box) ((MR_Integer) 0));
#line 215 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_23, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoals_22));
#line 215 "superhomogeneous.m"
                }
#line 216 "superhomogeneous.m"
                {
#line 216 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__ConjGoal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 216 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_24, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoalExpr_23));
#line 216 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_24, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_21));
#line 216 "superhomogeneous.m"
                }
#line 217 "superhomogeneous.m"
                {
#line 217 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__Reason_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 217 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 217 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_25, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermVar_18));
#line 217 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_25, 2) = ((MR_Box) ((MR_Integer) 0));
#line 217 "superhomogeneous.m"
                }
#line 218 "superhomogeneous.m"
                {
#line 218 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__GoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 218 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 218 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_26, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Reason_25));
#line 218 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_26, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoal_24));
#line 218 "superhomogeneous.m"
                }
#line 219 "superhomogeneous.m"
                {
#line 219 "superhomogeneous.m"
                  MR_Word base;
#line 219 "superhomogeneous.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 219 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__Goal_6 = base;
#line 219 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_26));
#line 219 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_21));
#line 219 "superhomogeneous.m"
                }
#line 213 "superhomogeneous.m"
              }
#line 220 "superhomogeneous.m"
            else
#line 221 "superhomogeneous.m"
              {
#line 221 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_35;

#line 221 "superhomogeneous.m"
                {
#line 221 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__GoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 221 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 221 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_35, 1) = ((MR_Box) ((MR_Integer) 0));
#line 221 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_35, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ExpansionGoals_9));
#line 221 "superhomogeneous.m"
                }
#line 222 "superhomogeneous.m"
                {
#line 222 "superhomogeneous.m"
                  MR_Word base;
#line 222 "superhomogeneous.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 222 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__Goal_6 = base;
#line 222 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_35));
#line 222 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_4));
#line 222 "superhomogeneous.m"
                }
#line 221 "superhomogeneous.m"
              }
#line 220 "superhomogeneous.m"
          }
#line 199 "superhomogeneous.m"
      }
#line 193 "superhomogeneous.m"
  }
#line 190 "superhomogeneous.m"
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
#line 1295 "superhomogeneous.m"
  {
#line 1295 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 1295 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__RevVars_14;

#line 1298 "superhomogeneous.m"
    {
#line 1298 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_9_p_0(hlds__make_hlds__superhomogeneous__Args_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__superhomogeneous__RevVars_14, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_16, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_17, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_18, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20);
    }
#line 1300 "superhomogeneous.m"
    {
#line 1300 "superhomogeneous.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0], hlds__make_hlds__superhomogeneous__RevVars_14, hlds__make_hlds__superhomogeneous__Vars_10);
#line 1300 "superhomogeneous.m"
      return;
    }
#line 1295 "superhomogeneous.m"
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
#line 160 "superhomogeneous.m"
  {
#line 160 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 160 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__Expansion_34;
#line 160 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_35;

#line 170 "superhomogeneous.m"
    {
#line 170 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__LHS0_20, hlds__make_hlds__superhomogeneous__RHS0_21, hlds__make_hlds__superhomogeneous__Context_22, hlds__make_hlds__superhomogeneous__MainContext_23, hlds__make_hlds__superhomogeneous__SubContext_24, hlds__make_hlds__superhomogeneous__Purity_25, &hlds__make_hlds__superhomogeneous__Expansion_34, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47);
    }
#line 173 "superhomogeneous.m"
    {
#line 173 "superhomogeneous.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_22, &hlds__make_hlds__superhomogeneous__GoalInfo_35);
    }
#line 174 "superhomogeneous.m"
    {
#line 174 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_35, hlds__make_hlds__superhomogeneous__Expansion_34, hlds__make_hlds__superhomogeneous__Goal_26);
#line 174 "superhomogeneous.m"
      return;
    }
#line 160 "superhomogeneous.m"
  }
#line 72 "superhomogeneous.m"
}

#line 288 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0_1(
#line 288 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 288 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 288 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 288 "superhomogeneous.m"
{
#line 288 "superhomogeneous.m"
  {
#line 288 "superhomogeneous.m"
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
#line 288 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

#line 288 "superhomogeneous.m"
    {
#line 288 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
#line 288 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
#line 288 "superhomogeneous.m"
  }
#line 288 "superhomogeneous.m"
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
#line 148 "superhomogeneous.m"
  {
#line 148 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 148 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70;
#line 148 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__XArgTerms_31;
#line 148 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__Expansions_32;
#line 148 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__GoalInfo0_34;
#line 148 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47;
#line 148 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48;
#line 148 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49;
#line 148 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_61;
#line 148 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCords_62;
#line 148 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_63;
#line 148 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_64_64;
#line 148 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_65_65;
#line 154 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_33_33;

#line 149 "superhomogeneous.m"
    {
#line 149 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__XArgTerms0_20, &hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_39, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_35, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49);
    }
#line 151 "superhomogeneous.m"
    {
#line 151 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(hlds__make_hlds__superhomogeneous__XVars_19, hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__ArgContexts_21, hlds__make_hlds__superhomogeneous__Context_22, &hlds__make_hlds__superhomogeneous__Expansions_32, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_46);
    }
#line 154 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 0)));
#line 154 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__GoalInfo0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 1)));
#line 287 "superhomogeneous.m"
    {
#line 287 "superhomogeneous.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__Goal0_23, &hlds__make_hlds__superhomogeneous__BaseGoals_61);
    }
#line 288 "superhomogeneous.m"
    {
#line 288 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 288 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
#line 288 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0_1));
#line 288 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 288 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo0_34));
#line 288 "superhomogeneous.m"
    }
#line 288 "superhomogeneous.m"
    {
#line 288 "superhomogeneous.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_64_64, hlds__make_hlds__superhomogeneous__Expansions_32, &hlds__make_hlds__superhomogeneous__ExpansionGoalCords_62);
    }
#line 9505 "hlds.make_hlds.superhomogeneous.c"
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 290 "superhomogeneous.m"
    {
#line 290 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__ExpansionGoals_63 = mercury__cord__cord_list_to_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70, hlds__make_hlds__superhomogeneous__ExpansionGoalCords_62);
    }
#line 291 "superhomogeneous.m"
    {
#line 291 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_65_65 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70, hlds__make_hlds__superhomogeneous__ExpansionGoals_63, hlds__make_hlds__superhomogeneous__BaseGoals_61);
    }
#line 291 "superhomogeneous.m"
    {
#line 291 "superhomogeneous.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_65_65, hlds__make_hlds__superhomogeneous__GoalInfo0_34, hlds__make_hlds__superhomogeneous__Goal_24);
#line 291 "superhomogeneous.m"
      return;
    }
#line 148 "superhomogeneous.m"
  }
#line 64 "superhomogeneous.m"
}

#line 288 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0_1(
#line 288 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 288 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 288 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 288 "superhomogeneous.m"
{
#line 288 "superhomogeneous.m"
  {
#line 288 "superhomogeneous.m"
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
#line 288 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

#line 288 "superhomogeneous.m"
    {
#line 288 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
#line 288 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
#line 288 "superhomogeneous.m"
  }
#line 288 "superhomogeneous.m"
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
#line 136 "superhomogeneous.m"
  {
#line 136 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 136 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71;
#line 136 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__XArgTerms_31;
#line 136 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__Expansions_32;
#line 136 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__GoalInfo0_34;
#line 136 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47;
#line 136 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48;
#line 136 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49;
#line 136 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_62;
#line 136 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCords_63;
#line 136 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_64;
#line 136 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_65_65;
#line 136 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_66_66;
#line 142 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_33_33;

#line 137 "superhomogeneous.m"
    {
#line 137 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__XArgTerms0_20, &hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_39, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_35, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49);
    }
#line 139 "superhomogeneous.m"
    {
#line 139 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__XVars_19, hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__Context_21, hlds__make_hlds__superhomogeneous__ArgContext_22, (MR_Integer) 1, &hlds__make_hlds__superhomogeneous__Expansions_32, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_46);
    }
#line 142 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 0)));
#line 142 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__GoalInfo0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 1)));
#line 287 "superhomogeneous.m"
    {
#line 287 "superhomogeneous.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__Goal0_23, &hlds__make_hlds__superhomogeneous__BaseGoals_62);
    }
#line 288 "superhomogeneous.m"
    {
#line 288 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 288 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
#line 288 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0_1));
#line 288 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 288 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo0_34));
#line 288 "superhomogeneous.m"
    }
#line 288 "superhomogeneous.m"
    {
#line 288 "superhomogeneous.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_65_65, hlds__make_hlds__superhomogeneous__Expansions_32, &hlds__make_hlds__superhomogeneous__ExpansionGoalCords_63);
    }
#line 9669 "hlds.make_hlds.superhomogeneous.c"
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 290 "superhomogeneous.m"
    {
#line 290 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__ExpansionGoals_64 = mercury__cord__cord_list_to_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71, hlds__make_hlds__superhomogeneous__ExpansionGoalCords_63);
    }
#line 291 "superhomogeneous.m"
    {
#line 291 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_66_66 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71, hlds__make_hlds__superhomogeneous__ExpansionGoals_64, hlds__make_hlds__superhomogeneous__BaseGoals_62);
    }
#line 291 "superhomogeneous.m"
    {
#line 291 "superhomogeneous.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_66_66, hlds__make_hlds__superhomogeneous__GoalInfo0_34, hlds__make_hlds__superhomogeneous__Goal_24);
#line 291 "superhomogeneous.m"
      return;
    }
#line 136 "superhomogeneous.m"
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
