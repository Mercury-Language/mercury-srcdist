/*
** Automatically generated from `superhomogeneous.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "parse_tree.prog_io_iom.mih"
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




#line 167 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 170 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_0[2];

#line 173 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0;

#line 176 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_1[1];

#line 179 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1;

#line 182 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0;

#line 185 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_2[3];

#line 188 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2;

#line 191 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0[1];

#line 194 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1[1];

#line 197 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2[1];

#line 200 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_arg_context_0[3];

#line 203 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0[3];

#line 206 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0[3];

#line 209 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 212 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_expansion_0_0[2];

#line 215 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0;

#line 218 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0[1];

#line 221 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_expansion_0[1];

#line 224 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_expansion_0[1];

#line 227 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_expansion_0[1];

#line 230 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0;

#line 233 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 236 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_maybe_fgti_var_size_0_1[2];

#line 239 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1;

#line 242 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_0[1];

#line 245 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_1[1];

#line 248 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_fgti_var_size_0[2];

#line 251 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_fgti_var_size_0[2];

#line 254 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_fgti_var_size_0[2];

#line 257 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0_10001(
#line 260 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 262 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 265 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0_10001(
#line 268 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 270 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 272 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3);

#line 275 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0_10001(
#line 278 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 280 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 283 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0_10001(
#line 286 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 288 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 290 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3);

#line 293 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0_10001(
#line 296 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 298 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 301 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0_10001(
#line 304 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 306 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 308 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3);

#line 774 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
#line 774 "superhomogeneous.m"
  MR_String hlds__make_hlds__superhomogeneous__YAtom_24,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YArgs_25,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
#line 774 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135,
#line 774 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137,
#line 774 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139,
#line 774 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141,
#line 774 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143,
#line 774 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145,
#line 774 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);

#line 597 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctor0_24,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YArgTerms0_25,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
#line 597 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_88,
#line 597 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90,
#line 597 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_92,
#line 597 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94,
#line 597 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96,
#line 597 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_98,
#line 597 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99);

#line 560 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_21,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 560 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_41,
#line 560 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_42,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_43,
#line 560 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_44,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_45,
#line 560 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_46,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_47,
#line 560 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_48,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49,
#line 560 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_51,
#line 560 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_52);

#line 501 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XTerm_21,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 501 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55,
#line 501 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57,
#line 501 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59,
#line 501 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61,
#line 501 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63,
#line 501 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65,
#line 501 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);

#line 485 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LHSVar_21,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 485 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36,
#line 485 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38,
#line 485 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40,
#line 485 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42,
#line 485 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44,
#line 485 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46,
#line 485 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47);

#line 468 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LHS0_21,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 468 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_37,
#line 468 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_39,
#line 468 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_40,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_41,
#line 468 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_42,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_43,
#line 468 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_44,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_45,
#line 468 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_46,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_47,
#line 468 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_48);

#line 429 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_20,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_21,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContext_23,
#line 429 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__ArgNum_25,
#line 429 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_26,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42,
#line 429 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44,
#line 429 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46,
#line 429 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48,
#line 429 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50,
#line 429 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52,
#line 429 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53);

#line 396 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVars_19,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerms_20,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContexts_21,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 396 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansions_24,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40,
#line 396 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42,
#line 396 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44,
#line 396 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46,
#line 396 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48,
#line 396 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50,
#line 396 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51);

#line 373 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 373 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__5_5,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20);

#line 344 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
#line 344 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__6_6,
#line 344 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8,
#line 344 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10,
#line 344 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
#line 344 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14,
#line 344 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
#line 344 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 344 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);

#line 181 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(
#line 181 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 181 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 181 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3);

#line 181 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(
#line 181 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 181 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2);

#line 185 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(
#line 185 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 185 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 185 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3);

#line 185 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(
#line 185 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 185 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2);

#line 1364 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(
#line 1364 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Arg_6,
#line 1364 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Var_7,
#line 1364 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Vars0_8,
#line 1364 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
#line 1364 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13);

#line 1306 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_9_p_0(
#line 1306 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 1306 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2,
#line 1306 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_3,
#line 1306 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4,
#line 1306 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_5,
#line 1306 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6,
#line 1306 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_7,
#line 1306 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8,
#line 1306 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_9);

#line 1236 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(
#line 1236 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ModuleInfo_1,
#line 1236 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 1236 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 1236 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
#line 1236 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__5_5,
#line 1236 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__6_6,
#line 1236 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 1236 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8);

#line 1049 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__X_26,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__UnificationPurity_27,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LambdaPurity_28,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Groundness_29,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_30,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Args0_32,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Modes_33,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Det_34,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_35,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_36,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_37,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_38,
#line 1049 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_39,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__OutsideSVarState_40,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82,
#line 1049 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84,
#line 1049 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86,
#line 1049 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88,
#line 1049 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90,
#line 1049 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);

#line 1023 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(
#line 1023 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Modes0_8,
#line 1023 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Modes_9,
#line 1023 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_10,
#line 1023 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
#line 1023 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
#line 1023 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 1023 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);

#line 750 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__convert_big_integer_functor_5_p_0(
#line 750 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Functor0_6,
#line 750 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Functor_7,
#line 750 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_8,
#line 750 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 750 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);

#line 337 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(
#line 337 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 337 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__GoalCord_4);

#line 320 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(
#line 320 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 320 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2,
#line 320 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_3,
#line 320 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4,
#line 320 "superhomogeneous.m"
  MR_Integer * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_5);

#line 313 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_2(
#line 313 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 313 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 313 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 305 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1(
#line 305 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 305 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 305 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 296 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(
#line 296 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_7,
#line 296 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__TermVar_8,
#line 296 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_9,
#line 296 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__BaseGoalSize_10,
#line 296 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_11,
#line 296 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_12);

#line 291 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1(
#line 291 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 291 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 291 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 285 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(
#line 285 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
#line 285 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansions_6,
#line 285 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
#line 285 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8);

#line 274 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(
#line 274 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
#line 274 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_6,
#line 274 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
#line 274 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8);

#line 254 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(
#line 254 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 254 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__2_2);

#line 229 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(
#line 229 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
#line 229 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
#line 229 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6);

#line 193 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(
#line 193 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
#line 193 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
#line 193 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_6);

#line 291 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0_1(
#line 291 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 291 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 291 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

#line 291 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0_1(
#line 291 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 291 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 291 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);


static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_1[8][2];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_2[1][6];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_4[1][3];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_5[1][1];


#line 795 "superhomogeneous.m"
/* sealed */ struct hlds__make_hlds__superhomogeneous__vector_common_type_6_0_s {
#line 795 "superhomogeneous.m"
  const MR_String hlds__make_hlds__superhomogeneous__vector_common_type_6_0__vct_6_f_0;
#line 795 "superhomogeneous.m"
};

static /* final */ const struct hlds__make_hlds__superhomogeneous__vector_common_type_6_0_s hlds__make_hlds__superhomogeneous_vector_common_6[16];



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
    ((MR_Box) ((MR_String) "In explicit type qualification:"))
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



#line 1180 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1188 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1194 "hlds.make_hlds.superhomogeneous.c"
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

#line 1209 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0
};

#line 1214 "hlds.make_hlds.superhomogeneous.c"
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

#line 1229 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0
  }
};

#line 1237 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_2[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_main_context_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0
};

#line 1244 "hlds.make_hlds.superhomogeneous.c"
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

#line 1259 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0
};

#line 1264 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1
};

#line 1269 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2
};

#line 1274 "hlds.make_hlds.superhomogeneous.c"
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

#line 1293 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0[3] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0
};

#line 1300 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1307 "hlds.make_hlds.superhomogeneous.c"
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

#line 1324 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1332 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_expansion_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_maybe_fgti_var_size_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1338 "hlds.make_hlds.superhomogeneous.c"
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

#line 1353 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0
};

#line 1358 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_expansion_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0
  }
};

#line 1367 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_expansion_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0
};

#line 1372 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_expansion_0[1] = {
  (MR_Integer) 0
};

#line 1377 "hlds.make_hlds.superhomogeneous.c"
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

#line 1394 "hlds.make_hlds.superhomogeneous.c"
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

#line 1409 "hlds.make_hlds.superhomogeneous.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1417 "hlds.make_hlds.superhomogeneous.c"
static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_maybe_fgti_var_size_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1423 "hlds.make_hlds.superhomogeneous.c"
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

#line 1438 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0
};

#line 1443 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_1[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1
};

#line 1448 "hlds.make_hlds.superhomogeneous.c"
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

#line 1462 "hlds.make_hlds.superhomogeneous.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_fgti_var_size_0[2] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0
};

#line 1468 "hlds.make_hlds.superhomogeneous.c"
static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_fgti_var_size_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1474 "hlds.make_hlds.superhomogeneous.c"
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

#line 1491 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0_10001(
#line 1494 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1496 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 1498 "hlds.make_hlds.superhomogeneous.c"
{
#line 1500 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1502 "hlds.make_hlds.superhomogeneous.c"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 1505 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1507 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2));
    }
#line 1510 "hlds.make_hlds.superhomogeneous.c"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 1512 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1514 "hlds.make_hlds.superhomogeneous.c"
}

#line 1517 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0_10001(
#line 1520 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1522 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 1524 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3)
#line 1526 "hlds.make_hlds.superhomogeneous.c"
{
#line 1528 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1530 "hlds.make_hlds.superhomogeneous.c"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1;

#line 1533 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1535 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0(&hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_3));
    }
#line 1538 "hlds.make_hlds.superhomogeneous.c"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1));
#line 1540 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1542 "hlds.make_hlds.superhomogeneous.c"
}

#line 1545 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0_10001(
#line 1548 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1550 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 1552 "hlds.make_hlds.superhomogeneous.c"
{
#line 1554 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1556 "hlds.make_hlds.superhomogeneous.c"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 1559 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1561 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2));
    }
#line 1564 "hlds.make_hlds.superhomogeneous.c"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 1566 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1568 "hlds.make_hlds.superhomogeneous.c"
}

#line 1571 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0_10001(
#line 1574 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1576 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 1578 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3)
#line 1580 "hlds.make_hlds.superhomogeneous.c"
{
#line 1582 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1584 "hlds.make_hlds.superhomogeneous.c"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1;

#line 1587 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1589 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(&hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_3));
    }
#line 1592 "hlds.make_hlds.superhomogeneous.c"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1));
#line 1594 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1596 "hlds.make_hlds.superhomogeneous.c"
}

#line 1599 "hlds.make_hlds.superhomogeneous.c"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0_10001(
#line 1602 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1604 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 1606 "hlds.make_hlds.superhomogeneous.c"
{
#line 1608 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1610 "hlds.make_hlds.superhomogeneous.c"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 1613 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1615 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2));
    }
#line 1618 "hlds.make_hlds.superhomogeneous.c"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 1620 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1622 "hlds.make_hlds.superhomogeneous.c"
}

#line 1625 "hlds.make_hlds.superhomogeneous.c"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0_10001(
#line 1628 "hlds.make_hlds.superhomogeneous.c"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 1630 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
#line 1632 "hlds.make_hlds.superhomogeneous.c"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3)
#line 1634 "hlds.make_hlds.superhomogeneous.c"
{
#line 1636 "hlds.make_hlds.superhomogeneous.c"
  {
#line 1638 "hlds.make_hlds.superhomogeneous.c"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1;

#line 1641 "hlds.make_hlds.superhomogeneous.c"
    {
#line 1643 "hlds.make_hlds.superhomogeneous.c"
      hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(&hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_3));
    }
#line 1646 "hlds.make_hlds.superhomogeneous.c"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1));
#line 1648 "hlds.make_hlds.superhomogeneous.c"
  }
#line 1650 "hlds.make_hlds.superhomogeneous.c"
}

#line 774 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
#line 774 "superhomogeneous.m"
  MR_String hlds__make_hlds__superhomogeneous__YAtom_24,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YArgs_25,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
#line 774 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135,
#line 774 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137,
#line 774 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139,
#line 774 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141,
#line 774 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143,
#line 774 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144,
#line 774 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145,
#line 774 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146)
#line 774 "superhomogeneous.m"
{
#line 795 "superhomogeneous.m"
  {
#line 795 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YArgs_25)) == (MR_mktag((MR_Integer) 1)));
#line 795 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_702_702;
#line 795 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_703_703;
#line 795 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_704_704;
#line 795 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_705_705;
#line 795 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__slot_0;
#line 795 "superhomogeneous.m"
    MR_String hlds__make_hlds__superhomogeneous__str_1;

#line 989 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 989 "superhomogeneous.m"
      {
#line 989 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__V_703_703 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgs_25, (MR_Integer) 0)));
#line 989 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__V_702_702 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgs_25, (MR_Integer) 1)));
#line 989 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_702_702)) == (MR_mktag((MR_Integer) 1)));
#line 989 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 989 "superhomogeneous.m"
          {
#line 989 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_705_705 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_702_702, (MR_Integer) 0)));
#line 989 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_704_704 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_702_702, (MR_Integer) 1)));
#line 989 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_704_704 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 795 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 795 "superhomogeneous.m"
              {
#line 795 "superhomogeneous.m"
                /* hashed string jump switch */
#line 795 "superhomogeneous.m"
                /* compute the hash value of the input string */
#line 795 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__slot_0 = ((MR_hash_string5(hlds__make_hlds__superhomogeneous__YAtom_24)) & (MR_Integer) 15);
#line 795 "superhomogeneous.m"
                /* no collisions; no hash chain loop */
#line 795 "superhomogeneous.m"
                /* lookup the string for this hash slot */
#line 795 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__str_1 = ((&hlds__make_hlds__superhomogeneous_vector_common_6[0 + hlds__make_hlds__superhomogeneous__slot_0]))->hlds__make_hlds__superhomogeneous__vector_common_type_6_0__vct_6_f_0;
#line 795 "superhomogeneous.m"
                /* did we find a match? */
#line 795 "superhomogeneous.m"
                if ((((hlds__make_hlds__superhomogeneous__str_1 != NULL)) && ((strcmp(hlds__make_hlds__superhomogeneous__str_1, hlds__make_hlds__superhomogeneous__YAtom_24) == 0))))
#line 795 "superhomogeneous.m"
                  {
#line 795 "superhomogeneous.m"
                    /* we found a match; dispatch to the corresponding code */
#line 795 "superhomogeneous.m"
#line 795 "superhomogeneous.m"
                    switch (hlds__make_hlds__superhomogeneous__slot_0) {
#line 795 "superhomogeneous.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 795 "superhomogeneous.m"
                      case (MR_Integer) 1:
#line 826 "superhomogeneous.m"
                        {
#line 826 "superhomogeneous.m"
                          /* case "@" */
#line 826 "superhomogeneous.m"
                          {
#line 826 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ExpansionL_49;
#line 826 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ExpansionR_50;
#line 826 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__GoalCordL_52;
#line 826 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__GoalCordR_54;
#line 826 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_291_291;
#line 826 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_292_292;
#line 826 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_293_293;
#line 826 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_294_294;
#line 826 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_295_295;
#line 826 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_296_296;
#line 826 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_304_304;
#line 838 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_51_51;
#line 839 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_53_53;

#line 830 "superhomogeneous.m"
                            {
#line 830 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_703_703, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ExpansionL_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_291_291, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_292_292, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_293_293, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_294_294, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_295_295, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_296_296);
                            }
#line 834 "superhomogeneous.m"
                            {
#line 834 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_705_705, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ExpansionR_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_291_291, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_292_292, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_293_293, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_294_294, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_295_295, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_296_296, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                            }
#line 838 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionL_49, (MR_Integer) 0)));
#line 838 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__GoalCordL_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionL_49, (MR_Integer) 1)));
#line 839 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionR_50, (MR_Integer) 0)));
#line 839 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__GoalCordR_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionR_50, (MR_Integer) 1)));
#line 840 "superhomogeneous.m"
                            {
#line 840 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__V_304_304 = mercury__cord__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__superhomogeneous__GoalCordL_52, hlds__make_hlds__superhomogeneous__GoalCordR_54);
                            }
#line 840 "superhomogeneous.m"
                            {
#line 840 "superhomogeneous.m"
                              MR_Word base;
#line 840 "superhomogeneous.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 840 "superhomogeneous.m"
                              *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 840 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 840 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_304_304));
#line 840 "superhomogeneous.m"
                            }
#line 826 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 826 "superhomogeneous.m"
                          }
#line 826 "superhomogeneous.m"
                        }
#line 795 "superhomogeneous.m"
                        break;
#line 795 "superhomogeneous.m"
                      case (MR_Integer) 5:
#line 855 "superhomogeneous.m"
                        {
#line 855 "superhomogeneous.m"
                          /* case "else" */
#line 855 "superhomogeneous.m"
                          {
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_558;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_559;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_560;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_243_243;
#line 855 "superhomogeneous.m"
                            MR_String hlds__make_hlds__superhomogeneous__V_244_244;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_245_245;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_246_246;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_247_247;
#line 855 "superhomogeneous.m"
                            MR_String hlds__make_hlds__superhomogeneous__V_248_248;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_249_249;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_250_250;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_251_251;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_252_252;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__CondTerm_498;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__MaybeVarsCond_499;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_528;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_557;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__CondTerm0_633;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ThenTerm0_634;
#line 847 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_60_60;
#line 848 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_59_59;

#line 847 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_703_703)) == (MR_mktag((MR_Integer) 0)));
#line 847 "superhomogeneous.m"
                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 847 "superhomogeneous.m"
                              {
#line 847 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 0)));
#line 847 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 1)));
#line 847 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 2)));
#line 847 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_243_243)) == (MR_mktag((MR_Integer) 0)));
#line 847 "superhomogeneous.m"
                                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 847 "superhomogeneous.m"
                                  {
#line 847 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__V_244_244 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_243_243, (MR_Integer) 0)));
#line 847 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_244_244, (MR_String) "if") == 0);
#line 855 "superhomogeneous.m"
                                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 855 "superhomogeneous.m"
                                      {
#line 848 "superhomogeneous.m"
                                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_245_245)) == (MR_mktag((MR_Integer) 1)));
#line 848 "superhomogeneous.m"
                                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 848 "superhomogeneous.m"
                                          {
#line 848 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_245_245, (MR_Integer) 0)));
#line 848 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_245_245, (MR_Integer) 1)));
#line 848 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "superhomogeneous.m"
                                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 855 "superhomogeneous.m"
                                              {
#line 848 "superhomogeneous.m"
                                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_246_246)) == (MR_mktag((MR_Integer) 0)));
#line 848 "superhomogeneous.m"
                                                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 848 "superhomogeneous.m"
                                                  {
#line 848 "superhomogeneous.m"
                                                    hlds__make_hlds__superhomogeneous__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_246_246, (MR_Integer) 0)));
#line 848 "superhomogeneous.m"
                                                    hlds__make_hlds__superhomogeneous__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_246_246, (MR_Integer) 1)));
#line 848 "superhomogeneous.m"
                                                    hlds__make_hlds__superhomogeneous__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_246_246, (MR_Integer) 2)));
#line 848 "superhomogeneous.m"
                                                    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_247_247)) == (MR_mktag((MR_Integer) 0)));
#line 848 "superhomogeneous.m"
                                                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 848 "superhomogeneous.m"
                                                      {
#line 848 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_248_248 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_247_247, (MR_Integer) 0)));
#line 848 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_248_248, (MR_String) "then") == 0);
#line 855 "superhomogeneous.m"
                                                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 855 "superhomogeneous.m"
                                                          {
#line 848 "superhomogeneous.m"
                                                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_249_249)) == (MR_mktag((MR_Integer) 1)));
#line 848 "superhomogeneous.m"
                                                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 848 "superhomogeneous.m"
                                                              {
#line 848 "superhomogeneous.m"
                                                                hlds__make_hlds__superhomogeneous__CondTerm0_633 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_249_249, (MR_Integer) 0)));
#line 848 "superhomogeneous.m"
                                                                hlds__make_hlds__superhomogeneous__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_249_249, (MR_Integer) 1)));
#line 848 "superhomogeneous.m"
                                                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_250_250)) == (MR_mktag((MR_Integer) 1)));
#line 848 "superhomogeneous.m"
                                                                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 848 "superhomogeneous.m"
                                                                  {
#line 848 "superhomogeneous.m"
                                                                    hlds__make_hlds__superhomogeneous__ThenTerm0_634 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_250_250, (MR_Integer) 0)));
#line 848 "superhomogeneous.m"
                                                                    hlds__make_hlds__superhomogeneous__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_250_250, (MR_Integer) 1)));
#line 848 "superhomogeneous.m"
                                                                    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_251_251 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "superhomogeneous.m"
                                                                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 855 "superhomogeneous.m"
                                                                      {
#line 1991 "hlds.make_hlds.superhomogeneous.c"
                                                                        hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_558 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1993 "hlds.make_hlds.superhomogeneous.c"
                                                                        hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_559 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 858 "superhomogeneous.m"
                                                                        {
#line 858 "superhomogeneous.m"
                                                                          mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_558, hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_559, hlds__make_hlds__superhomogeneous__CondTerm0_633, &hlds__make_hlds__superhomogeneous__CondTerm_498);
                                                                        }
#line 2000 "hlds.make_hlds.superhomogeneous.c"
                                                                        hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_560 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 859 "superhomogeneous.m"
                                                                        {
#line 859 "superhomogeneous.m"
                                                                          hlds__make_hlds__superhomogeneous__ContextPieces_557 = mercury__cord__init_0_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_560);
                                                                        }
#line 860 "superhomogeneous.m"
                                                                        {
#line 860 "superhomogeneous.m"
                                                                          parse_tree__prog_io_goal__parse_some_vars_goal_5_p_0(hlds__make_hlds__superhomogeneous__CondTerm_498, hlds__make_hlds__superhomogeneous__ContextPieces_557, &hlds__make_hlds__superhomogeneous__MaybeVarsCond_499, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_528);
                                                                        }
#line 912 "superhomogeneous.m"
                                                                        if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeVarsCond_499)) == (MR_mktag((MR_Integer) 0))))
#line 913 "superhomogeneous.m"
                                                                          {
#line 913 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__VarsCondSpecs_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeVarsCond_499, (MR_Integer) 0)));
#line 913 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_380_380;
#line 913 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_381_381;

#line 914 "superhomogeneous.m"
                                                                            {
#line 914 "superhomogeneous.m"
                                                                              *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__VarsCondSpecs_378, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145);
                                                                            }
#line 916 "superhomogeneous.m"
                                                                            {
#line 916 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__V_381_381 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_27);
                                                                            }
#line 916 "superhomogeneous.m"
                                                                            {
#line 916 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__V_380_380 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_381_381)));
                                                                            }
#line 915 "superhomogeneous.m"
                                                                            {
#line 915 "superhomogeneous.m"
                                                                              MR_Word base;
#line 915 "superhomogeneous.m"
                                                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 915 "superhomogeneous.m"
                                                                              *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 915 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 915 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_380_380));
#line 915 "superhomogeneous.m"
                                                                            }
#line 913 "superhomogeneous.m"
                                                                            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135;
#line 913 "superhomogeneous.m"
                                                                            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137;
#line 913 "superhomogeneous.m"
                                                                            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_528;
#line 913 "superhomogeneous.m"
                                                                            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
#line 913 "superhomogeneous.m"
                                                                            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143;
#line 913 "superhomogeneous.m"
                                                                          }
#line 912 "superhomogeneous.m"
                                                                        else
#line 863 "superhomogeneous.m"
                                                                          {
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_365_436;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__Vars_384 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_499, (MR_Integer) 0)));
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__StateVars_385 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_499, (MR_Integer) 1)));
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__CondParseTree_386 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_499, (MR_Integer) 2)));
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_388;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__EmptySubst_389;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__CondGoal_390;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_391;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ThenTerm_392;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_393;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ThenExpansion_394;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_395;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ThenGoalInfo_396;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ThenGoal0_397;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterThenSVarState_398;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ElseTerm_399;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState0_400;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ElseExpansion_401;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState_402;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ElseGoalInfo_403;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ElseGoal0_404;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ThenGoal_405;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ElseGoal_406;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_408;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_409;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__Goal_410;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_258_411;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_260_413;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_261_414;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_262_415;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_263_416;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_417;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_265_418;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_266_419;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_267_420;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_268_421;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_269_422;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_270_423;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_271_424;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_425_425;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_273_426;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_274_427;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_275_428;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_276_429;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_279_430;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_431_431;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_433_433;
#line 863 "superhomogeneous.m"
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_435_435;

#line 865 "superhomogeneous.m"
                                                                            {
#line 865 "superhomogeneous.m"
                                                                              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_528, hlds__make_hlds__superhomogeneous__StateVars_385, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_388, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_258_411);
                                                                            }
#line 2170 "hlds.make_hlds.superhomogeneous.c"
                                                                            hlds__make_hlds__superhomogeneous__TypeInfo_365_436 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 867 "superhomogeneous.m"
                                                                            {
#line 867 "superhomogeneous.m"
                                                                              mercury__map__init_1_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_365_436, hlds__make_hlds__superhomogeneous__TypeInfo_365_436, &hlds__make_hlds__superhomogeneous__EmptySubst_389);
                                                                            }
#line 869 "superhomogeneous.m"
                                                                            {
#line 869 "superhomogeneous.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__CondParseTree_386, hlds__make_hlds__superhomogeneous__EmptySubst_389, &hlds__make_hlds__superhomogeneous__CondGoal_390, hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_388, &hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_391, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_260_413, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_528, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_261_414, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_262_415, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_263_416, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_258_411, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_417);
                                                                            }
#line 874 "superhomogeneous.m"
                                                                            {
#line 874 "superhomogeneous.m"
                                                                              hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__ThenTerm0_634, &hlds__make_hlds__superhomogeneous__ThenTerm_392, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_261_414, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_265_418, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_391, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_393, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_417, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_266_419);
                                                                            }
#line 877 "superhomogeneous.m"
                                                                            {
#line 877 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ThenTerm_392, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ThenExpansion_394, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_393, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_395, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_260_413, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_267_420, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_265_418, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_268_421, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_262_415, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_269_422, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_263_416, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_270_423, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_266_419, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_271_424);
                                                                            }
#line 882 "superhomogeneous.m"
                                                                            {
#line 882 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__V_425_425 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_558, hlds__make_hlds__superhomogeneous__ThenTerm_392);
                                                                            }
#line 882 "superhomogeneous.m"
                                                                            {
#line 882 "superhomogeneous.m"
                                                                              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_425_425, &hlds__make_hlds__superhomogeneous__ThenGoalInfo_396);
                                                                            }
#line 883 "superhomogeneous.m"
                                                                            {
#line 883 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ThenGoalInfo_396, hlds__make_hlds__superhomogeneous__ThenExpansion_394, &hlds__make_hlds__superhomogeneous__ThenGoal0_397);
                                                                            }
#line 886 "superhomogeneous.m"
                                                                            {
#line 886 "superhomogeneous.m"
                                                                              hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__superhomogeneous__StateVars_385, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_395, &hlds__make_hlds__superhomogeneous__AfterThenSVarState_398);
                                                                            }
#line 889 "superhomogeneous.m"
                                                                            {
#line 889 "superhomogeneous.m"
                                                                              hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_705_705, &hlds__make_hlds__superhomogeneous__ElseTerm_399, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_268_421, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_273_426, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__AfterElseSVarState0_400, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_271_424, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_274_427);
                                                                            }
#line 891 "superhomogeneous.m"
                                                                            {
#line 891 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ElseTerm_399, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ElseExpansion_401, hlds__make_hlds__superhomogeneous__AfterElseSVarState0_400, &hlds__make_hlds__superhomogeneous__AfterElseSVarState_402, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_267_420, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_275_428, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_273_426, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_276_429, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_269_422, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_270_423, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_274_427, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_279_430);
                                                                            }
#line 896 "superhomogeneous.m"
                                                                            {
#line 896 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__V_431_431 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_558, hlds__make_hlds__superhomogeneous__ElseTerm_399);
                                                                            }
#line 896 "superhomogeneous.m"
                                                                            {
#line 896 "superhomogeneous.m"
                                                                              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_431_431, &hlds__make_hlds__superhomogeneous__ElseGoalInfo_403);
                                                                            }
#line 897 "superhomogeneous.m"
                                                                            {
#line 897 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ElseGoalInfo_403, hlds__make_hlds__superhomogeneous__ElseExpansion_401, &hlds__make_hlds__superhomogeneous__ElseGoal0_404);
                                                                            }
#line 900 "superhomogeneous.m"
                                                                            {
#line 900 "superhomogeneous.m"
                                                                              hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__StateVars_385, hlds__make_hlds__superhomogeneous__ThenGoal0_397, &hlds__make_hlds__superhomogeneous__ThenGoal_405, hlds__make_hlds__superhomogeneous__ElseGoal0_404, &hlds__make_hlds__superhomogeneous__ElseGoal_406, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_391, hlds__make_hlds__superhomogeneous__AfterThenSVarState_398, hlds__make_hlds__superhomogeneous__AfterElseSVarState_402, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_276_429, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_275_428, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_279_430, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                                                            }
#line 907 "superhomogeneous.m"
                                                                            {
#line 907 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__V_433_433 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeInfo_365_436, hlds__make_hlds__superhomogeneous__StateVars_385, hlds__make_hlds__superhomogeneous__Vars_384);
                                                                            }
#line 907 "superhomogeneous.m"
                                                                            {
#line 907 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__GoalExpr_408 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 907 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_408, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 907 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_408, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_433_433));
#line 907 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_408, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__CondGoal_390));
#line 907 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_408, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ThenGoal_405));
#line 907 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_408, 4) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ElseGoal_406));
#line 907 "superhomogeneous.m"
                                                                            }
#line 909 "superhomogeneous.m"
                                                                            {
#line 909 "superhomogeneous.m"
                                                                              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_409);
                                                                            }
#line 910 "superhomogeneous.m"
                                                                            {
#line 910 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__Goal_410 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 910 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_410, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_408));
#line 910 "superhomogeneous.m"
                                                                              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_410, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_409));
#line 910 "superhomogeneous.m"
                                                                            }
#line 911 "superhomogeneous.m"
                                                                            {
#line 911 "superhomogeneous.m"
                                                                              hlds__make_hlds__superhomogeneous__V_435_435 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_410)));
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
                                                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_435_435));
#line 911 "superhomogeneous.m"
                                                                            }
#line 863 "superhomogeneous.m"
                                                                          }
#line 912 "superhomogeneous.m"
                                                                        hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 855 "superhomogeneous.m"
                                                                      }
#line 848 "superhomogeneous.m"
                                                                  }
#line 848 "superhomogeneous.m"
                                                              }
#line 855 "superhomogeneous.m"
                                                          }
#line 848 "superhomogeneous.m"
                                                      }
#line 848 "superhomogeneous.m"
                                                  }
#line 855 "superhomogeneous.m"
                                              }
#line 848 "superhomogeneous.m"
                                          }
#line 855 "superhomogeneous.m"
                                      }
#line 847 "superhomogeneous.m"
                                  }
#line 847 "superhomogeneous.m"
                              }
#line 855 "superhomogeneous.m"
                          }
#line 855 "superhomogeneous.m"
                        }
#line 795 "superhomogeneous.m"
                        break;
#line 795 "superhomogeneous.m"
                      case (MR_Integer) 7:
#line 988 "superhomogeneous.m"
                        {
#line 988 "superhomogeneous.m"
                          /* case "-->" */
#line 988 "superhomogeneous.m"
                          {
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_371_371 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_372_372 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_373_373;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__PredTerm1_118;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__DCGLambdaPurity_119;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__PredTerm_120;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Groundness_121;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Vars0_123;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Modes0_124;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Det_125;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Modes_126;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__GoalTerm_127;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__DCG0_129;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__DCGn_130;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_151_151;
#line 988 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_350;

#line 990 "superhomogeneous.m"
                            {
#line 990 "superhomogeneous.m"
                              mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_371_371, hlds__make_hlds__superhomogeneous__TypeCtorInfo_372_372, hlds__make_hlds__superhomogeneous__V_703_703, &hlds__make_hlds__superhomogeneous__PredTerm1_118);
                            }
#line 991 "superhomogeneous.m"
                            {
#line 991 "superhomogeneous.m"
                              parse_tree__prog_io_util__parse_purity_annotation_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_372_372, hlds__make_hlds__superhomogeneous__PredTerm1_118, &hlds__make_hlds__superhomogeneous__DCGLambdaPurity_119, &hlds__make_hlds__superhomogeneous__PredTerm_120);
                            }
#line 992 "superhomogeneous.m"
                            {
#line 992 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_goal__parse_dcg_pred_expression_6_p_0(hlds__make_hlds__superhomogeneous__PredTerm_120, &hlds__make_hlds__superhomogeneous__Groundness_121, &hlds__make_hlds__superhomogeneous__Vars0_123, &hlds__make_hlds__superhomogeneous__Modes0_124, &hlds__make_hlds__superhomogeneous__Det_125);
                            }
#line 988 "superhomogeneous.m"
                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 988 "superhomogeneous.m"
                              {
#line 996 "superhomogeneous.m"
                                {
#line 996 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(hlds__make_hlds__superhomogeneous__Modes0_124, &hlds__make_hlds__superhomogeneous__Modes_126, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150);
                                }
#line 998 "superhomogeneous.m"
                                {
#line 998 "superhomogeneous.m"
                                  mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_371_371, hlds__make_hlds__superhomogeneous__TypeCtorInfo_372_372, hlds__make_hlds__superhomogeneous__V_705_705, &hlds__make_hlds__superhomogeneous__GoalTerm_127);
                                }
#line 2405 "hlds.make_hlds.superhomogeneous.c"
                                hlds__make_hlds__superhomogeneous__TypeCtorInfo_373_373 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 999 "superhomogeneous.m"
                                {
#line 999 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__ContextPieces_350 = mercury__cord__init_0_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_373_373);
                                }
#line 1000 "superhomogeneous.m"
                                {
#line 1000 "superhomogeneous.m"
                                  parse_tree__prog_io_dcg__parse_dcg_pred_goal_7_p_0(hlds__make_hlds__superhomogeneous__GoalTerm_127, hlds__make_hlds__superhomogeneous__ContextPieces_350, &hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128, &hlds__make_hlds__superhomogeneous__DCG0_129, &hlds__make_hlds__superhomogeneous__DCGn_130, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_151_151);
                                }
#line 1014 "superhomogeneous.m"
                                if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128)) == (MR_mktag((MR_Integer) 0))))
#line 1015 "superhomogeneous.m"
                                  {
#line 1015 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128, (MR_Integer) 0)));
#line 1015 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_154_154;
#line 1015 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_155_155;

#line 1016 "superhomogeneous.m"
                                    {
#line 1016 "superhomogeneous.m"
                                      *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_134, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150);
                                    }
#line 1018 "superhomogeneous.m"
                                    {
#line 1018 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_155_155 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_27);
                                    }
#line 1018 "superhomogeneous.m"
                                    {
#line 1018 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_154_154 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_155_155)));
                                    }
#line 1017 "superhomogeneous.m"
                                    {
#line 1017 "superhomogeneous.m"
                                      MR_Word base;
#line 1017 "superhomogeneous.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "superhomogeneous.m"
                                      *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 1017 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1017 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_154_154));
#line 1017 "superhomogeneous.m"
                                    }
#line 1015 "superhomogeneous.m"
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137;
#line 1015 "superhomogeneous.m"
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_151_151;
#line 1015 "superhomogeneous.m"
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
#line 1015 "superhomogeneous.m"
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149;
#line 1015 "superhomogeneous.m"
                                  }
#line 1014 "superhomogeneous.m"
                                else
#line 1003 "superhomogeneous.m"
                                  {
#line 1003 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128, (MR_Integer) 0)));
#line 1003 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__Vars1_132;
#line 1003 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__Goal0_133;
#line 1003 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_156_156;
#line 1003 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_157_157;
#line 1003 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_158_158;
#line 1003 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_159_159;
#line 1003 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__V_168_168;
#line 1003 "superhomogeneous.m"
                                    MR_Word hlds__make_hlds__superhomogeneous__Goal_348;

#line 1005 "superhomogeneous.m"
                                    {
#line 1005 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__DCG0_129));
#line 1005 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_157_157, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Context_27));
#line 1005 "superhomogeneous.m"
                                    }
#line 1006 "superhomogeneous.m"
                                    {
#line 1006 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__DCGn_130));
#line 1006 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Context_27));
#line 1006 "superhomogeneous.m"
                                    }
#line 1006 "superhomogeneous.m"
                                    {
#line 1006 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_159_159));
#line 1006 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1006 "superhomogeneous.m"
                                    }
#line 1005 "superhomogeneous.m"
                                    {
#line 1005 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_157_157));
#line 1005 "superhomogeneous.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_156_156, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_158_158));
#line 1005 "superhomogeneous.m"
                                    }
#line 1004 "superhomogeneous.m"
                                    {
#line 1004 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__Vars1_132 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2], hlds__make_hlds__superhomogeneous__Vars0_123, hlds__make_hlds__superhomogeneous__V_156_156);
                                    }
#line 1007 "superhomogeneous.m"
                                    {
#line 1007 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__DCGLambdaPurity_119, hlds__make_hlds__superhomogeneous__Groundness_121, (MR_Integer) 0, hlds__make_hlds__superhomogeneous__Vars1_132, hlds__make_hlds__superhomogeneous__Modes_126, hlds__make_hlds__superhomogeneous__Det_125, hlds__make_hlds__superhomogeneous__ParsedGoal_131, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, &hlds__make_hlds__superhomogeneous__Goal0_133, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_151_151, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                    }
#line 1012 "superhomogeneous.m"
                                    {
#line 1012 "superhomogeneous.m"
                                      hlds__hlds_goal__goal_set_purity_3_p_0(hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__Goal0_133, &hlds__make_hlds__superhomogeneous__Goal_348);
                                    }
#line 1013 "superhomogeneous.m"
                                    {
#line 1013 "superhomogeneous.m"
                                      hlds__make_hlds__superhomogeneous__V_168_168 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_348)));
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
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_168_168));
#line 1013 "superhomogeneous.m"
                                    }
#line 1003 "superhomogeneous.m"
                                  }
#line 988 "superhomogeneous.m"
                                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135;
#line 988 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 988 "superhomogeneous.m"
                              }
#line 988 "superhomogeneous.m"
                          }
#line 988 "superhomogeneous.m"
                        }
#line 795 "superhomogeneous.m"
                        break;
#line 795 "superhomogeneous.m"
                      case (MR_Integer) 8:
#line 795 "superhomogeneous.m"
                      case (MR_Integer) 11:
#line 795 "superhomogeneous.m"
                        {
#line 795 "superhomogeneous.m"
                          /* case ":", "with_type" */
#line 795 "superhomogeneous.m"
                          {
#line 795 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_356_356 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 795 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_357_357 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 795 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__DeclType1_41;
#line 795 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_42;
#line 795 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__GenericVarSet_43;
#line 795 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__DeclTypeResult_44;
#line 795 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_310_310;
#line 795 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_311_311;
#line 795 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_312_312;

#line 801 "superhomogeneous.m"
                            {
#line 801 "superhomogeneous.m"
                              mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_356_356, hlds__make_hlds__superhomogeneous__TypeCtorInfo_357_357, hlds__make_hlds__superhomogeneous__V_705_705, &hlds__make_hlds__superhomogeneous__DeclType1_41);
                            }
#line 803 "superhomogeneous.m"
                            {
#line 803 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__ContextPieces_42 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[7]))));
                            }
#line 804 "superhomogeneous.m"
                            {
#line 804 "superhomogeneous.m"
                              mercury__varset__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_356_356, hlds__make_hlds__superhomogeneous__TypeCtorInfo_357_357, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__GenericVarSet_43);
                            }
#line 805 "superhomogeneous.m"
                            {
#line 805 "superhomogeneous.m"
                              parse_tree__prog_io_util__parse_type_4_p_0(hlds__make_hlds__superhomogeneous__DeclType1_41, hlds__make_hlds__superhomogeneous__GenericVarSet_43, hlds__make_hlds__superhomogeneous__ContextPieces_42, &hlds__make_hlds__superhomogeneous__DeclTypeResult_44);
                            }
#line 812 "superhomogeneous.m"
                            if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__DeclTypeResult_44)) == (MR_mktag((MR_Integer) 0))))
#line 813 "superhomogeneous.m"
                              {
#line 813 "superhomogeneous.m"
                                MR_Word hlds__make_hlds__superhomogeneous__DeclTypeSpecs_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__DeclTypeResult_44, (MR_Integer) 0)));

#line 817 "superhomogeneous.m"
                                {
#line 817 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_312_312 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__DeclTypeSpecs_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145);
                                }
#line 813 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_310_310 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
#line 813 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_311_311 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143;
#line 813 "superhomogeneous.m"
                              }
#line 812 "superhomogeneous.m"
                            else
#line 808 "superhomogeneous.m"
                              {
#line 808 "superhomogeneous.m"
                                MR_Word hlds__make_hlds__superhomogeneous__DeclType_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__DeclTypeResult_44, (MR_Integer) 0)));
#line 808 "superhomogeneous.m"
                                MR_Word hlds__make_hlds__superhomogeneous__DeclVarSet_46;

#line 809 "superhomogeneous.m"
                                {
#line 809 "superhomogeneous.m"
                                  mercury__varset__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_356_356, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__DeclVarSet_46);
                                }
#line 810 "superhomogeneous.m"
                                {
#line 810 "superhomogeneous.m"
                                  hlds__make_hlds__qual_info__process_type_qualification_10_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__DeclType_45, hlds__make_hlds__superhomogeneous__DeclVarSet_46, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_310_310, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_311_311, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_312_312);
                                }
#line 808 "superhomogeneous.m"
                              }
#line 819 "superhomogeneous.m"
                            {
#line 819 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_703_703, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__Expansion_32, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_310_310, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_311_311, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_312_312, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                            }
#line 795 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 795 "superhomogeneous.m"
                          }
#line 795 "superhomogeneous.m"
                        }
#line 795 "superhomogeneous.m"
                        break;
#line 795 "superhomogeneous.m"
                      case (MR_Integer) 10:
#line 855 "superhomogeneous.m"
                        {
#line 855 "superhomogeneous.m"
                          /* case ";" */
#line 855 "superhomogeneous.m"
                          {
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_362;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_363;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_364;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__CondTerm0_57;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ThenTerm0_58;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__CondTerm_62;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__MaybeVarsCond_63;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_236_236;
#line 855 "superhomogeneous.m"
                            MR_String hlds__make_hlds__superhomogeneous__V_237_237;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_238_238;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_239_239;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_240_240;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_253;
#line 855 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_321;
#line 853 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_61_61;

#line 853 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_703_703)) == (MR_mktag((MR_Integer) 0)));
#line 853 "superhomogeneous.m"
                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 853 "superhomogeneous.m"
                              {
#line 853 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 0)));
#line 853 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 1)));
#line 853 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 2)));
#line 853 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_236_236)) == (MR_mktag((MR_Integer) 0)));
#line 853 "superhomogeneous.m"
                                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 853 "superhomogeneous.m"
                                  {
#line 853 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__V_237_237 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_236_236, (MR_Integer) 0)));
#line 853 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_237_237, (MR_String) "->") == 0);
#line 855 "superhomogeneous.m"
                                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 855 "superhomogeneous.m"
                                      {
#line 854 "superhomogeneous.m"
                                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_238_238)) == (MR_mktag((MR_Integer) 1)));
#line 854 "superhomogeneous.m"
                                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 854 "superhomogeneous.m"
                                          {
#line 854 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__CondTerm0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_238_238, (MR_Integer) 0)));
#line 854 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_238_238, (MR_Integer) 1)));
#line 854 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_239_239)) == (MR_mktag((MR_Integer) 1)));
#line 854 "superhomogeneous.m"
                                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 854 "superhomogeneous.m"
                                              {
#line 854 "superhomogeneous.m"
                                                hlds__make_hlds__superhomogeneous__ThenTerm0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_239_239, (MR_Integer) 0)));
#line 854 "superhomogeneous.m"
                                                hlds__make_hlds__superhomogeneous__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_239_239, (MR_Integer) 1)));
#line 854 "superhomogeneous.m"
                                                hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_240_240 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "superhomogeneous.m"
                                                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 855 "superhomogeneous.m"
                                                  {
#line 2770 "hlds.make_hlds.superhomogeneous.c"
                                                    hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_362 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2772 "hlds.make_hlds.superhomogeneous.c"
                                                    hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_363 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 858 "superhomogeneous.m"
                                                    {
#line 858 "superhomogeneous.m"
                                                      mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_362, hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_363, hlds__make_hlds__superhomogeneous__CondTerm0_57, &hlds__make_hlds__superhomogeneous__CondTerm_62);
                                                    }
#line 2779 "hlds.make_hlds.superhomogeneous.c"
                                                    hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_364 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 859 "superhomogeneous.m"
                                                    {
#line 859 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__ContextPieces_321 = mercury__cord__init_0_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_364);
                                                    }
#line 860 "superhomogeneous.m"
                                                    {
#line 860 "superhomogeneous.m"
                                                      parse_tree__prog_io_goal__parse_some_vars_goal_5_p_0(hlds__make_hlds__superhomogeneous__CondTerm_62, hlds__make_hlds__superhomogeneous__ContextPieces_321, &hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_253);
                                                    }
#line 912 "superhomogeneous.m"
                                                    if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeVarsCond_63)) == (MR_mktag((MR_Integer) 0))))
#line 913 "superhomogeneous.m"
                                                      {
#line 913 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__VarsCondSpecs_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 0)));
#line 913 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_256_256;
#line 913 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_257_257;

#line 914 "superhomogeneous.m"
                                                        {
#line 914 "superhomogeneous.m"
                                                          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__VarsCondSpecs_91, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145);
                                                        }
#line 916 "superhomogeneous.m"
                                                        {
#line 916 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_257_257 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_27);
                                                        }
#line 916 "superhomogeneous.m"
                                                        {
#line 916 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_256_256 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_257_257)));
                                                        }
#line 915 "superhomogeneous.m"
                                                        {
#line 915 "superhomogeneous.m"
                                                          MR_Word base;
#line 915 "superhomogeneous.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 915 "superhomogeneous.m"
                                                          *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 915 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 915 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_256_256));
#line 915 "superhomogeneous.m"
                                                        }
#line 913 "superhomogeneous.m"
                                                        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135;
#line 913 "superhomogeneous.m"
                                                        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137;
#line 913 "superhomogeneous.m"
                                                        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_253;
#line 913 "superhomogeneous.m"
                                                        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
#line 913 "superhomogeneous.m"
                                                        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143;
#line 913 "superhomogeneous.m"
                                                      }
#line 912 "superhomogeneous.m"
                                                    else
#line 863 "superhomogeneous.m"
                                                      {
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_365_365;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__Vars_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 0)));
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__StateVars_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 1)));
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__CondParseTree_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 2)));
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_68;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__EmptySubst_69;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__CondGoal_70;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ThenTerm_72;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_73;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ThenExpansion_74;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_75;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ThenGoalInfo_76;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ThenGoal0_77;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterThenSVarState_78;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ElseTerm_79;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState0_80;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ElseExpansion_81;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState_82;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ElseGoalInfo_83;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ElseGoal0_84;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ThenGoal_85;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__ElseGoal_86;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_88;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_89;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__Goal_90;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_258_258;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_260_260;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_261_261;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_262_262;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_263_263;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_264;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_265_265;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_266_266;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_267_267;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_268_268;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_269_269;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_270_270;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_271_271;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_272_272;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_273_273;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_274_274;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_275_275;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_276_276;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_279_279;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_280_280;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_286_286;
#line 863 "superhomogeneous.m"
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_288_288;

#line 865 "superhomogeneous.m"
                                                        {
#line 865 "superhomogeneous.m"
                                                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_253, hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_68, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_258_258);
                                                        }
#line 2949 "hlds.make_hlds.superhomogeneous.c"
                                                        hlds__make_hlds__superhomogeneous__TypeInfo_365_365 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 867 "superhomogeneous.m"
                                                        {
#line 867 "superhomogeneous.m"
                                                          mercury__map__init_1_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_365_365, hlds__make_hlds__superhomogeneous__TypeInfo_365_365, &hlds__make_hlds__superhomogeneous__EmptySubst_69);
                                                        }
#line 869 "superhomogeneous.m"
                                                        {
#line 869 "superhomogeneous.m"
                                                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__CondParseTree_66, hlds__make_hlds__superhomogeneous__EmptySubst_69, &hlds__make_hlds__superhomogeneous__CondGoal_70, hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_68, &hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_260_260, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_253, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_261_261, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_262_262, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_263_263, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_258_258, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_264);
                                                        }
#line 874 "superhomogeneous.m"
                                                        {
#line 874 "superhomogeneous.m"
                                                          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__ThenTerm0_58, &hlds__make_hlds__superhomogeneous__ThenTerm_72, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_261_261, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_265_265, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_73, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_264, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_266_266);
                                                        }
#line 877 "superhomogeneous.m"
                                                        {
#line 877 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ThenTerm_72, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ThenExpansion_74, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_73, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_75, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_260_260, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_267_267, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_265_265, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_268_268, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_262_262, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_269_269, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_263_263, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_270_270, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_266_266, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_271_271);
                                                        }
#line 882 "superhomogeneous.m"
                                                        {
#line 882 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_272_272 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_362, hlds__make_hlds__superhomogeneous__ThenTerm_72);
                                                        }
#line 882 "superhomogeneous.m"
                                                        {
#line 882 "superhomogeneous.m"
                                                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_272_272, &hlds__make_hlds__superhomogeneous__ThenGoalInfo_76);
                                                        }
#line 883 "superhomogeneous.m"
                                                        {
#line 883 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ThenGoalInfo_76, hlds__make_hlds__superhomogeneous__ThenExpansion_74, &hlds__make_hlds__superhomogeneous__ThenGoal0_77);
                                                        }
#line 886 "superhomogeneous.m"
                                                        {
#line 886 "superhomogeneous.m"
                                                          hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_75, &hlds__make_hlds__superhomogeneous__AfterThenSVarState_78);
                                                        }
#line 889 "superhomogeneous.m"
                                                        {
#line 889 "superhomogeneous.m"
                                                          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_705_705, &hlds__make_hlds__superhomogeneous__ElseTerm_79, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_268_268, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_273_273, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__AfterElseSVarState0_80, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_271_271, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_274_274);
                                                        }
#line 891 "superhomogeneous.m"
                                                        {
#line 891 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ElseTerm_79, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ElseExpansion_81, hlds__make_hlds__superhomogeneous__AfterElseSVarState0_80, &hlds__make_hlds__superhomogeneous__AfterElseSVarState_82, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_267_267, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_275_275, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_273_273, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_276_276, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_269_269, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_270_270, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_274_274, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_279_279);
                                                        }
#line 896 "superhomogeneous.m"
                                                        {
#line 896 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_280_280 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_362, hlds__make_hlds__superhomogeneous__ElseTerm_79);
                                                        }
#line 896 "superhomogeneous.m"
                                                        {
#line 896 "superhomogeneous.m"
                                                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_280_280, &hlds__make_hlds__superhomogeneous__ElseGoalInfo_83);
                                                        }
#line 897 "superhomogeneous.m"
                                                        {
#line 897 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ElseGoalInfo_83, hlds__make_hlds__superhomogeneous__ElseExpansion_81, &hlds__make_hlds__superhomogeneous__ElseGoal0_84);
                                                        }
#line 900 "superhomogeneous.m"
                                                        {
#line 900 "superhomogeneous.m"
                                                          hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__ThenGoal0_77, &hlds__make_hlds__superhomogeneous__ThenGoal_85, hlds__make_hlds__superhomogeneous__ElseGoal0_84, &hlds__make_hlds__superhomogeneous__ElseGoal_86, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71, hlds__make_hlds__superhomogeneous__AfterThenSVarState_78, hlds__make_hlds__superhomogeneous__AfterElseSVarState_82, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_276_276, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_275_275, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_279_279, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                                        }
#line 907 "superhomogeneous.m"
                                                        {
#line 907 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_286_286 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeInfo_365_365, hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__Vars_64);
                                                        }
#line 907 "superhomogeneous.m"
                                                        {
#line 907 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__GoalExpr_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 907 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 907 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_286_286));
#line 907 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__CondGoal_70));
#line 907 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ThenGoal_85));
#line 907 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 4) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ElseGoal_86));
#line 907 "superhomogeneous.m"
                                                        }
#line 909 "superhomogeneous.m"
                                                        {
#line 909 "superhomogeneous.m"
                                                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_89);
                                                        }
#line 910 "superhomogeneous.m"
                                                        {
#line 910 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__Goal_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 910 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_90, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_88));
#line 910 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_90, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_89));
#line 910 "superhomogeneous.m"
                                                        }
#line 911 "superhomogeneous.m"
                                                        {
#line 911 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_288_288 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_90)));
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
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_288_288));
#line 911 "superhomogeneous.m"
                                                        }
#line 863 "superhomogeneous.m"
                                                      }
#line 912 "superhomogeneous.m"
                                                    hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 855 "superhomogeneous.m"
                                                  }
#line 854 "superhomogeneous.m"
                                              }
#line 854 "superhomogeneous.m"
                                          }
#line 855 "superhomogeneous.m"
                                      }
#line 853 "superhomogeneous.m"
                                  }
#line 853 "superhomogeneous.m"
                              }
#line 855 "superhomogeneous.m"
                          }
#line 855 "superhomogeneous.m"
                        }
#line 795 "superhomogeneous.m"
                        break;
#line 795 "superhomogeneous.m"
                      case (MR_Integer) 13:
#line 946 "superhomogeneous.m"
                        {
#line 946 "superhomogeneous.m"
                          /* case ":=" */
#line 946 "superhomogeneous.m"
                          {
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_370_370;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__FieldValueTerm_105;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__FieldValueVar_106;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InnerFunctor_107;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__FieldSubContext_108;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__SetGoal_109;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TermArgContext_110;
#line 946 "superhomogeneous.m"
                            MR_Integer hlds__make_hlds__superhomogeneous__TermArgNumber_111;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__FieldArgContext_112;
#line 946 "superhomogeneous.m"
                            MR_Integer hlds__make_hlds__superhomogeneous__FieldArgNumber_113;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ArgContexts_114;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InputFieldArgExpansions_115;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_171_171;
#line 946 "superhomogeneous.m"
                            MR_String hlds__make_hlds__superhomogeneous__V_172_172;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_173_173;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_174_174;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_175_175;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_176_176;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_177_177;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_178_178;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_179_179;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_180_180;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_181_181;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_182_182;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_183_183;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_184_184;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_185_185;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_186_186;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_187_187;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_188_188;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_189_189;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_190_190;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_191_191;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_192_192;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_193_193;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_194_194;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_195_195;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_196_196;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_197_197;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_198_198;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_199_199;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_206_206;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_207_207;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_208_208;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_209_209;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_210_210;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_211_211;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_330;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Goal_331;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InputTerm_332;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InputTermVar_333;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Functor_334;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InputTerm0_342;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__FieldNameTerm_343;
#line 946 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__FieldNames_344;
#line 948 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_104_104;

#line 948 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_703_703)) == (MR_mktag((MR_Integer) 0)));
#line 948 "superhomogeneous.m"
                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 948 "superhomogeneous.m"
                              {
#line 948 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 0)));
#line 948 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 1)));
#line 948 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 2)));
#line 948 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_171_171)) == (MR_mktag((MR_Integer) 0)));
#line 948 "superhomogeneous.m"
                                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 948 "superhomogeneous.m"
                                  {
#line 948 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__V_172_172 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_171_171, (MR_Integer) 0)));
#line 948 "superhomogeneous.m"
                                    hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_172_172, (MR_String) "^") == 0);
#line 946 "superhomogeneous.m"
                                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 946 "superhomogeneous.m"
                                      {
#line 949 "superhomogeneous.m"
                                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_173_173)) == (MR_mktag((MR_Integer) 1)));
#line 949 "superhomogeneous.m"
                                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 949 "superhomogeneous.m"
                                          {
#line 949 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__InputTerm0_342 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_173_173, (MR_Integer) 0)));
#line 949 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_173_173, (MR_Integer) 1)));
#line 949 "superhomogeneous.m"
                                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_174_174)) == (MR_mktag((MR_Integer) 1)));
#line 949 "superhomogeneous.m"
                                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 949 "superhomogeneous.m"
                                              {
#line 949 "superhomogeneous.m"
                                                hlds__make_hlds__superhomogeneous__FieldNameTerm_343 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_174_174, (MR_Integer) 0)));
#line 949 "superhomogeneous.m"
                                                hlds__make_hlds__superhomogeneous__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_174_174, (MR_Integer) 1)));
#line 949 "superhomogeneous.m"
                                                hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_175_175 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 946 "superhomogeneous.m"
                                                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 946 "superhomogeneous.m"
                                                  {
#line 950 "superhomogeneous.m"
                                                    {
#line 950 "superhomogeneous.m"
                                                      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__field_access__maybe_parse_field_list_3_p_0(hlds__make_hlds__superhomogeneous__FieldNameTerm_343, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__FieldNames_344);
                                                    }
#line 946 "superhomogeneous.m"
                                                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 946 "superhomogeneous.m"
                                                      {
#line 953 "superhomogeneous.m"
                                                        {
#line 953 "superhomogeneous.m"
                                                          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__InputTerm0_342, &hlds__make_hlds__superhomogeneous__InputTerm_332, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_176_176, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_177_177, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_178_178);
                                                        }
#line 955 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_179_179 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 955 "superhomogeneous.m"
                                                        {
#line 955 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__InputTerm_332, &hlds__make_hlds__superhomogeneous__InputTermVar_333, hlds__make_hlds__superhomogeneous__V_179_179, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_176_176, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_180_180);
                                                        }
#line 956 "superhomogeneous.m"
                                                        {
#line 956 "superhomogeneous.m"
                                                          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_705_705, &hlds__make_hlds__superhomogeneous__FieldValueTerm_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_180_180, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_181_181, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_177_177, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_182_182, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_178_178, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_183_183);
                                                        }
#line 959 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_186_186 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 959 "superhomogeneous.m"
                                                        {
#line 959 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_184_184, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputTermVar_333));
#line 959 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_184_184, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_186_186));
#line 959 "superhomogeneous.m"
                                                        }
#line 958 "superhomogeneous.m"
                                                        {
#line 958 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__FieldValueTerm_105, &hlds__make_hlds__superhomogeneous__FieldValueVar_106, hlds__make_hlds__superhomogeneous__V_184_184, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_181_181, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_185_185);
                                                        }
#line 961 "superhomogeneous.m"
                                                        {
#line 961 "superhomogeneous.m"
                                                          hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__FieldNames_344, hlds__make_hlds__superhomogeneous__FieldValueVar_106, hlds__make_hlds__superhomogeneous__InputTermVar_333, hlds__make_hlds__superhomogeneous__XVar_23, &hlds__make_hlds__superhomogeneous__Functor_334, &hlds__make_hlds__superhomogeneous__V_187_187, &hlds__make_hlds__superhomogeneous__SetGoal_109, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_182_182, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_188_188, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_189_189, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_185_185, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_190_190, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_191_191, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_192_192, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_183_183, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_193_193);
                                                        }
#line 963 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__InnerFunctor_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_187_187, (MR_Integer) 0)));
#line 963 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__FieldSubContext_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_187_187, (MR_Integer) 1)));
#line 968 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__TermArgNumber_111 = (MR_Integer) 1;
#line 971 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__FieldArgNumber_113 = (MR_Integer) 2;
#line 973 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_197_197 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 974 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_207_207 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 975 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_209_209 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 967 "superhomogeneous.m"
                                                        {
#line 967 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__TermArgContext_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 967 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__TermArgContext_110, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Functor_334));
#line 967 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__TermArgContext_110, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
#line 967 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__TermArgContext_110, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_29));
#line 967 "superhomogeneous.m"
                                                        }
#line 969 "superhomogeneous.m"
                                                        {
#line 969 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__FieldArgContext_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 969 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__FieldArgContext_112, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InnerFunctor_107));
#line 969 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__FieldArgContext_112, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
#line 969 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__FieldArgContext_112, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldSubContext_108));
#line 969 "superhomogeneous.m"
                                                        }
#line 972 "superhomogeneous.m"
                                                        {
#line 972 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 972 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_194_194, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermArgNumber_111));
#line 972 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_194_194, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermArgContext_110));
#line 972 "superhomogeneous.m"
                                                        }
#line 973 "superhomogeneous.m"
                                                        {
#line 973 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_196_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 973 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_196_196, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldArgNumber_113));
#line 973 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_196_196, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldArgContext_112));
#line 973 "superhomogeneous.m"
                                                        }
#line 973 "superhomogeneous.m"
                                                        {
#line 973 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_195_195, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_196_196));
#line 973 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_195_195, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_197_197));
#line 973 "superhomogeneous.m"
                                                        }
#line 972 "superhomogeneous.m"
                                                        {
#line 972 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__ArgContexts_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_114, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_194_194));
#line 972 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_114, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_195_195));
#line 972 "superhomogeneous.m"
                                                        }
#line 974 "superhomogeneous.m"
                                                        {
#line 974 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_206_206, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldValueVar_106));
#line 974 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_206_206, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_207_207));
#line 974 "superhomogeneous.m"
                                                        }
#line 974 "superhomogeneous.m"
                                                        {
#line 974 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_198_198, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputTermVar_333));
#line 974 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_198_198, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_206_206));
#line 974 "superhomogeneous.m"
                                                        }
#line 975 "superhomogeneous.m"
                                                        {
#line 975 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_208_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 975 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_208_208, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldValueTerm_105));
#line 975 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_208_208, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_209_209));
#line 975 "superhomogeneous.m"
                                                        }
#line 975 "superhomogeneous.m"
                                                        {
#line 975 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 975 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_199_199, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputTerm_332));
#line 975 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_199_199, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_208_208));
#line 975 "superhomogeneous.m"
                                                        }
#line 974 "superhomogeneous.m"
                                                        {
#line 974 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(hlds__make_hlds__superhomogeneous__V_198_198, hlds__make_hlds__superhomogeneous__V_199_199, hlds__make_hlds__superhomogeneous__ArgContexts_114, hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__InputFieldArgExpansions_115, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_188_188, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_189_189, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_190_190, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_191_191, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_192_192, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_193_193, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                                        }
#line 979 "superhomogeneous.m"
                                                        {
#line 979 "superhomogeneous.m"
                                                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_330);
                                                        }
#line 980 "superhomogeneous.m"
                                                        {
#line 980 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_330, hlds__make_hlds__superhomogeneous__InputFieldArgExpansions_115, hlds__make_hlds__superhomogeneous__SetGoal_109, &hlds__make_hlds__superhomogeneous__Goal_331);
                                                        }
#line 982 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__V_210_210 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3454 "hlds.make_hlds.superhomogeneous.c"
                                                        hlds__make_hlds__superhomogeneous__TypeCtorInfo_370_370 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 982 "superhomogeneous.m"
                                                        {
#line 982 "superhomogeneous.m"
                                                          hlds__make_hlds__superhomogeneous__V_211_211 = mercury__cord__singleton_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_370_370, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_331)));
                                                        }
#line 982 "superhomogeneous.m"
                                                        {
#line 982 "superhomogeneous.m"
                                                          MR_Word base;
#line 982 "superhomogeneous.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 982 "superhomogeneous.m"
                                                          *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 982 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_210_210));
#line 982 "superhomogeneous.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_211_211));
#line 982 "superhomogeneous.m"
                                                        }
#line 982 "superhomogeneous.m"
                                                        hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 946 "superhomogeneous.m"
                                                      }
#line 946 "superhomogeneous.m"
                                                  }
#line 949 "superhomogeneous.m"
                                              }
#line 949 "superhomogeneous.m"
                                          }
#line 946 "superhomogeneous.m"
                                      }
#line 948 "superhomogeneous.m"
                                  }
#line 948 "superhomogeneous.m"
                              }
#line 946 "superhomogeneous.m"
                          }
#line 946 "superhomogeneous.m"
                        }
#line 795 "superhomogeneous.m"
                        break;
#line 795 "superhomogeneous.m"
                      case (MR_Integer) 15:
#line 921 "superhomogeneous.m"
                        {
#line 921 "superhomogeneous.m"
                          /* case "^" */
#line 921 "superhomogeneous.m"
                          {
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_369;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__FieldNames_94;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InputTerm_95;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InputTermVar_96;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Functor_97;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__GetGoal_99;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__ArgContext_100;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__InputArgExpansion_101;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_214_214;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_215_215;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_216_216;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_217_217;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_218_218;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_219_219;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_220_220;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_221_221;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_222_222;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_223_223;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_224_224;
#line 921 "superhomogeneous.m"
                            MR_Integer hlds__make_hlds__superhomogeneous__V_225_225;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_232_232;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_233_233;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_324;
#line 921 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__Goal_325;
#line 929 "superhomogeneous.m"
                            MR_Word hlds__make_hlds__superhomogeneous__V_98_98;

#line 923 "superhomogeneous.m"
                            {
#line 923 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__field_access__maybe_parse_field_list_3_p_0(hlds__make_hlds__superhomogeneous__V_705_705, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__FieldNames_94);
                            }
#line 921 "superhomogeneous.m"
                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 921 "superhomogeneous.m"
                              {
#line 926 "superhomogeneous.m"
                                {
#line 926 "superhomogeneous.m"
                                  hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_703_703, &hlds__make_hlds__superhomogeneous__InputTerm_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_214_214, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_215_215, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_216_216);
                                }
#line 928 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_217_217 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 928 "superhomogeneous.m"
                                {
#line 928 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__InputTerm_95, &hlds__make_hlds__superhomogeneous__InputTermVar_96, hlds__make_hlds__superhomogeneous__V_217_217, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_214_214, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_218_218);
                                }
#line 929 "superhomogeneous.m"
                                {
#line 929 "superhomogeneous.m"
                                  hlds__make_hlds__field_access__expand_get_field_function_call_22_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__FieldNames_94, hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__InputTermVar_96, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__Functor_97, &hlds__make_hlds__superhomogeneous__V_98_98, &hlds__make_hlds__superhomogeneous__GetGoal_99, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_215_215, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_219_219, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_220_220, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_218_218, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_221_221, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_222_222, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_223_223, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_216_216, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_224_224);
                                }
#line 936 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_225_225 = (MR_Integer) 1;
#line 934 "superhomogeneous.m"
                                {
#line 934 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__ArgContext_100 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 934 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_100, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Functor_97));
#line 934 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_100, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
#line 934 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_100, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_29));
#line 934 "superhomogeneous.m"
                                }
#line 935 "superhomogeneous.m"
                                {
#line 935 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__InputTermVar_96, hlds__make_hlds__superhomogeneous__InputTerm_95, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__ArgContext_100, hlds__make_hlds__superhomogeneous__V_225_225, &hlds__make_hlds__superhomogeneous__InputArgExpansion_101, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_219_219, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_220_220, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_221_221, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_222_222, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_223_223, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_224_224, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                }
#line 939 "superhomogeneous.m"
                                {
#line 939 "superhomogeneous.m"
                                  hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_324);
                                }
#line 940 "superhomogeneous.m"
                                {
#line 940 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_324, hlds__make_hlds__superhomogeneous__InputArgExpansion_101, hlds__make_hlds__superhomogeneous__GetGoal_99, &hlds__make_hlds__superhomogeneous__Goal_325);
                                }
#line 942 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__V_232_232 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3613 "hlds.make_hlds.superhomogeneous.c"
                                hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_369 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 942 "superhomogeneous.m"
                                {
#line 942 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__V_233_233 = mercury__cord__singleton_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_369, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_325)));
                                }
#line 942 "superhomogeneous.m"
                                {
#line 942 "superhomogeneous.m"
                                  MR_Word base;
#line 942 "superhomogeneous.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 942 "superhomogeneous.m"
                                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 942 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_232_232));
#line 942 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_233_233));
#line 942 "superhomogeneous.m"
                                }
#line 942 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 921 "superhomogeneous.m"
                              }
#line 921 "superhomogeneous.m"
                          }
#line 921 "superhomogeneous.m"
                        }
#line 795 "superhomogeneous.m"
                        break;
#line 795 "superhomogeneous.m"
                    }
#line 795 "superhomogeneous.m"
                    /* jump out of search loop */
#line 795 "superhomogeneous.m"
                    goto label_0;
#line 795 "superhomogeneous.m"
                  }
#line 795 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = MR_FALSE;
#line 795 "superhomogeneous.m"
              label_0:;
#line 795 "superhomogeneous.m"
              }
#line 989 "superhomogeneous.m"
          }
#line 989 "superhomogeneous.m"
      }
#line 795 "superhomogeneous.m"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 795 "superhomogeneous.m"
  }
#line 774 "superhomogeneous.m"
}

#line 597 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctor0_24,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YArgTerms0_25,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
#line 597 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_88,
#line 597 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90,
#line 597 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_92,
#line 597 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94,
#line 597 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96,
#line 597 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97,
#line 597 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_98,
#line 597 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99)
#line 597 "superhomogeneous.m"
{
#line 608 "superhomogeneous.m"
  {
#line 608 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 608 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__YFunctor_39;
#line 608 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_40;
#line 608 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_100_100;
#line 608 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101;
#line 608 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
#line 608 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103;
#line 612 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionPrime_42;
#line 612 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_104_104;
#line 612 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_105_105;
#line 612 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_106_106;
#line 612 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_107_107;
#line 612 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_108_108;
#line 612 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_109_109;
#line 613 "superhomogeneous.m"
    MR_String hlds__make_hlds__superhomogeneous__YAtom_41;

#line 609 "superhomogeneous.m"
    {
#line 609 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__convert_big_integer_functor_5_p_0(hlds__make_hlds__superhomogeneous__YFunctor0_24, &hlds__make_hlds__superhomogeneous__YFunctor_39, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_98, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_100_100);
    }
#line 610 "superhomogeneous.m"
    {
#line 610 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__YArgTerms0_25, &hlds__make_hlds__superhomogeneous__YArgTerms_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_92, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_88, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_100_100, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103);
    }
#line 613 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YFunctor_39)) == (MR_mktag((MR_Integer) 0)));
#line 613 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 613 "superhomogeneous.m"
      {
#line 613 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__YAtom_41 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YFunctor_39, (MR_Integer) 0)));
#line 614 "superhomogeneous.m"
        {
#line 614 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__YAtom_41, hlds__make_hlds__superhomogeneous__YArgTerms_40, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ExpansionPrime_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_104_104, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_105_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_106_106, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_107_107, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_108_108, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_109_109);
        }
#line 613 "superhomogeneous.m"
      }
#line 612 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 619 "superhomogeneous.m"
      {
#line 619 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_109_109;
#line 619 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_108_108;
#line 619 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_107_107;
#line 619 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_106_106;
#line 619 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_105_105;
#line 619 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_104_104;
#line 619 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__Expansion_32 = hlds__make_hlds__superhomogeneous__ExpansionPrime_42;
#line 619 "superhomogeneous.m"
      }
#line 612 "superhomogeneous.m"
    else
#line 620 "superhomogeneous.m"
      {
#line 620 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__GoalTerm1_45;
#line 620 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__LambdaPurity_47;
#line 620 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_54;
#line 620 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Groundness_56;
#line 620 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Vars1_57;
#line 620 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Modes1_58;
#line 620 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Det1_59;
#line 622 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_183_183 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 622 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_184_184;
#line 622 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__RHS_43;
#line 622 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadTerm0_44;
#line 622 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadTerm1_46;
#line 622 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadTerm_48;
#line 626 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Groundness0_49;
#line 626 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Vars0_51;
#line 626 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Modes0_52;
#line 626 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Det0_53;

#line 622 "superhomogeneous.m"
        {
#line 622 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__RHS_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 622 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__RHS_43, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YFunctor_39));
#line 622 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__RHS_43, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YArgTerms_40));
#line 622 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__RHS_43, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YFunctorContext_26));
#line 622 "superhomogeneous.m"
        }
#line 623 "superhomogeneous.m"
        {
#line 623 "superhomogeneous.m"
          parse_tree__prog_util__parse_rule_term_4_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_183_183, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__RHS_43, &hlds__make_hlds__superhomogeneous__HeadTerm0_44, &hlds__make_hlds__superhomogeneous__GoalTerm1_45);
        }
#line 3850 "hlds.make_hlds.superhomogeneous.c"
        hlds__make_hlds__superhomogeneous__TypeCtorInfo_184_184 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 624 "superhomogeneous.m"
        {
#line 624 "superhomogeneous.m"
          mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_183_183, hlds__make_hlds__superhomogeneous__TypeCtorInfo_184_184, hlds__make_hlds__superhomogeneous__HeadTerm0_44, &hlds__make_hlds__superhomogeneous__HeadTerm1_46);
        }
#line 625 "superhomogeneous.m"
        {
#line 625 "superhomogeneous.m"
          parse_tree__prog_io_util__parse_purity_annotation_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_184_184, hlds__make_hlds__superhomogeneous__HeadTerm1_46, &hlds__make_hlds__superhomogeneous__LambdaPurity_47, &hlds__make_hlds__superhomogeneous__HeadTerm_48);
        }
#line 627 "superhomogeneous.m"
        {
#line 627 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_goal__parse_pred_expression_6_p_0(hlds__make_hlds__superhomogeneous__HeadTerm_48, &hlds__make_hlds__superhomogeneous__Groundness0_49, &hlds__make_hlds__superhomogeneous__Vars0_51, &hlds__make_hlds__superhomogeneous__Modes0_52, &hlds__make_hlds__superhomogeneous__Det0_53);
        }
#line 626 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 630 "superhomogeneous.m"
          {
#line 630 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__PredOrFunc_54 = (MR_Integer) 0;
#line 632 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__Groundness_56 = hlds__make_hlds__superhomogeneous__Groundness0_49;
#line 633 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__Vars1_57 = hlds__make_hlds__superhomogeneous__Vars0_51;
#line 634 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__Modes1_58 = hlds__make_hlds__superhomogeneous__Modes0_52;
#line 635 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__Det1_59 = hlds__make_hlds__superhomogeneous__Det0_53;
#line 630 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 630 "superhomogeneous.m"
          }
#line 626 "superhomogeneous.m"
        else
#line 638 "superhomogeneous.m"
          {
#line 637 "superhomogeneous.m"
            {
#line 637 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_goal__parse_func_expression_6_p_0(hlds__make_hlds__superhomogeneous__HeadTerm_48, &hlds__make_hlds__superhomogeneous__Groundness_56, &hlds__make_hlds__superhomogeneous__Vars1_57, &hlds__make_hlds__superhomogeneous__Modes1_58, &hlds__make_hlds__superhomogeneous__Det1_59);
            }
#line 638 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 638 "superhomogeneous.m"
              {
#line 639 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__PredOrFunc_54 = (MR_Integer) 1;
#line 639 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 638 "superhomogeneous.m"
              }
#line 638 "superhomogeneous.m"
          }
#line 620 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 643 "superhomogeneous.m"
          {
#line 643 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Modes_60;
#line 643 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__GoalTerm_62;
#line 643 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_63;
#line 643 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeParsedGoal_64;
#line 643 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_110_110;
#line 643 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_111_111;
#line 643 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_112_112;

#line 642 "superhomogeneous.m"
            {
#line 642 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(hlds__make_hlds__superhomogeneous__Modes1_58, &hlds__make_hlds__superhomogeneous__Modes_60, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_110_110, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_111_111);
            }
#line 645 "superhomogeneous.m"
            {
#line 645 "superhomogeneous.m"
              mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__make_hlds__superhomogeneous__GoalTerm1_45, &hlds__make_hlds__superhomogeneous__GoalTerm_62);
            }
#line 646 "superhomogeneous.m"
            {
#line 646 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__ContextPieces_63 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
            }
#line 647 "superhomogeneous.m"
            {
#line 647 "superhomogeneous.m"
              parse_tree__prog_io_goal__parse_goal_5_p_0(hlds__make_hlds__superhomogeneous__GoalTerm_62, hlds__make_hlds__superhomogeneous__ContextPieces_63, &hlds__make_hlds__superhomogeneous__MaybeParsedGoal_64, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_112_112);
            }
#line 656 "superhomogeneous.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeParsedGoal_64)) == (MR_mktag((MR_Integer) 0))))
#line 657 "superhomogeneous.m"
              {
#line 657 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_64, (MR_Integer) 0)));
#line 657 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_115_115;
#line 657 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_116_116;

#line 658 "superhomogeneous.m"
                {
#line 658 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_67, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_111_111);
                }
#line 660 "superhomogeneous.m"
                {
#line 660 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_116_116 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_27);
                }
#line 660 "superhomogeneous.m"
                {
#line 660 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_115_115 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_116_116)));
                }
#line 659 "superhomogeneous.m"
                {
#line 659 "superhomogeneous.m"
                  MR_Word base;
#line 659 "superhomogeneous.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 659 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 659 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_115_115));
#line 659 "superhomogeneous.m"
                }
#line 657 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90;
#line 657 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_112_112;
#line 657 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94;
#line 657 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_110_110;
#line 657 "superhomogeneous.m"
              }
#line 656 "superhomogeneous.m"
            else
#line 649 "superhomogeneous.m"
              {
#line 649 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_64, (MR_Integer) 0)));
#line 649 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__Goal_66;
#line 649 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_123_123;

#line 650 "superhomogeneous.m"
                {
#line 650 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__LambdaPurity_47, hlds__make_hlds__superhomogeneous__Groundness_56, hlds__make_hlds__superhomogeneous__PredOrFunc_54, hlds__make_hlds__superhomogeneous__Vars1_57, hlds__make_hlds__superhomogeneous__Modes_60, hlds__make_hlds__superhomogeneous__Det1_59, hlds__make_hlds__superhomogeneous__ParsedGoal_65, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, &hlds__make_hlds__superhomogeneous__Goal_66, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_112_112, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_110_110, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_111_111, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99);
                }
#line 655 "superhomogeneous.m"
                {
#line 655 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_123_123 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_66)));
                }
#line 655 "superhomogeneous.m"
                {
#line 655 "superhomogeneous.m"
                  MR_Word base;
#line 655 "superhomogeneous.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 655 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 655 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_123_123));
#line 655 "superhomogeneous.m"
                }
#line 649 "superhomogeneous.m"
              }
#line 643 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
#line 643 "superhomogeneous.m"
          }
#line 620 "superhomogeneous.m"
        else
#line 694 "superhomogeneous.m"
          {
#line 694 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77;
#line 694 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ConsId_79;
#line 694 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_132_132;
#line 694 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_133_133;
#line 694 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_134_134;
#line 664 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__FunctorName_75;
#line 664 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_76;
#line 664 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_127_127;
#line 664 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_128_128;
#line 664 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129;
#line 668 "superhomogeneous.m"
            MR_String hlds__make_hlds__superhomogeneous__FName_68;
#line 669 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ModuleTerm_69;
#line 669 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NameArgsTerm_70;
#line 670 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_124_124;
#line 670 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_125_125;

#line 668 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YFunctor_39)) == (MR_mktag((MR_Integer) 0)));
#line 668 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 668 "superhomogeneous.m"
              {
#line 668 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__FName_68 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YFunctor_39, (MR_Integer) 0)));
#line 670 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__FName_68, (MR_String) ".") == 0);
#line 670 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 670 "superhomogeneous.m"
                  {
#line 671 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YArgTerms_40)) == (MR_mktag((MR_Integer) 1)));
#line 671 "superhomogeneous.m"
                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 671 "superhomogeneous.m"
                      {
#line 671 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__ModuleTerm_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgTerms_40, (MR_Integer) 0)));
#line 671 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgTerms_40, (MR_Integer) 1)));
#line 671 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_124_124)) == (MR_mktag((MR_Integer) 1)));
#line 671 "superhomogeneous.m"
                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 671 "superhomogeneous.m"
                          {
#line 671 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__NameArgsTerm_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_124_124, (MR_Integer) 0)));
#line 671 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_124_124, (MR_Integer) 1)));
#line 671 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_125_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "superhomogeneous.m"
                          }
#line 671 "superhomogeneous.m"
                      }
#line 670 "superhomogeneous.m"
                  }
#line 669 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 673 "superhomogeneous.m"
                  {
#line 673 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_191_191;
#line 673 "superhomogeneous.m"
                    MR_String hlds__make_hlds__superhomogeneous__Name_71;
#line 673 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__NameArgTerms_72;
#line 673 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__Module_74;
#line 673 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_126_126;
#line 673 "superhomogeneous.m"
                    MR_Word hlds__make_hlds__superhomogeneous__V_73_73;

#line 673 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__NameArgsTerm_70)) == (MR_mktag((MR_Integer) 0)));
#line 673 "superhomogeneous.m"
                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 673 "superhomogeneous.m"
                      {
#line 673 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__NameArgsTerm_70, (MR_Integer) 0)));
#line 673 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__NameArgTerms_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__NameArgsTerm_70, (MR_Integer) 1)));
#line 673 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__NameArgsTerm_70, (MR_Integer) 2)));
#line 673 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_126_126)) == (MR_mktag((MR_Integer) 0)));
#line 673 "superhomogeneous.m"
                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 673 "superhomogeneous.m"
                          {
#line 673 "superhomogeneous.m"
                            hlds__make_hlds__superhomogeneous__Name_71 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_126_126, (MR_Integer) 0)));
#line 4150 "hlds.make_hlds.superhomogeneous.c"
                            hlds__make_hlds__superhomogeneous__TypeCtorInfo_191_191 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 674 "superhomogeneous.m"
                            {
#line 674 "superhomogeneous.m"
                              hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_191_191, hlds__make_hlds__superhomogeneous__ModuleTerm_69, &hlds__make_hlds__superhomogeneous__Module_74);
                            }
#line 673 "superhomogeneous.m"
                            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 673 "superhomogeneous.m"
                              {
#line 675 "superhomogeneous.m"
                                {
#line 675 "superhomogeneous.m"
                                  hlds__make_hlds__superhomogeneous__FunctorName_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__FunctorName_75, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Module_74));
#line 675 "superhomogeneous.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__FunctorName_75, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Name_71));
#line 675 "superhomogeneous.m"
                                }
#line 678 "superhomogeneous.m"
                                {
#line 678 "superhomogeneous.m"
                                  hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__NameArgTerms_72, &hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_76, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_127_127, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_128_128, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129);
                                }
#line 678 "superhomogeneous.m"
                                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 673 "superhomogeneous.m"
                              }
#line 673 "superhomogeneous.m"
                          }
#line 673 "superhomogeneous.m"
                      }
#line 673 "superhomogeneous.m"
                  }
#line 669 "superhomogeneous.m"
                else
#line 681 "superhomogeneous.m"
                  {
#line 681 "superhomogeneous.m"
                    {
#line 681 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__FunctorName_75 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(hlds__make_hlds__superhomogeneous__FName_68, (MR_String) "__");
                    }
#line 682 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_76 = hlds__make_hlds__superhomogeneous__YArgTerms_40;
#line 681 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103;
#line 681 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_127_127 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101;
#line 681 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_128_128 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
#line 681 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 681 "superhomogeneous.m"
                  }
#line 668 "superhomogeneous.m"
              }
#line 664 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 685 "superhomogeneous.m"
              {
#line 685 "superhomogeneous.m"
                MR_Integer hlds__make_hlds__superhomogeneous__Arity_78;
#line 685 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_131_131;

#line 685 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_134_134 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129;
#line 685 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_133_133 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_127_127;
#line 685 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_132_132 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_128_128;
#line 685 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77 = hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_76;
#line 686 "superhomogeneous.m"
                {
#line 686 "superhomogeneous.m"
                  mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2], hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77, &hlds__make_hlds__superhomogeneous__Arity_78);
                }
#line 687 "superhomogeneous.m"
                {
#line 687 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_131_131 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 687 "superhomogeneous.m"
                {
#line 687 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__ConsId_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 687 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 687 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_79, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FunctorName_75));
#line 687 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_79, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arity_78));
#line 687 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_79, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_131_131));
#line 687 "superhomogeneous.m"
                }
#line 685 "superhomogeneous.m"
              }
#line 664 "superhomogeneous.m"
            else
#line 691 "superhomogeneous.m"
              {
#line 691 "superhomogeneous.m"
                MR_Integer hlds__make_hlds__superhomogeneous__Arity_169;

#line 691 "superhomogeneous.m"
                {
#line 691 "superhomogeneous.m"
                  mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2], hlds__make_hlds__superhomogeneous__YArgTerms_40, &hlds__make_hlds__superhomogeneous__Arity_169);
                }
#line 692 "superhomogeneous.m"
                {
#line 692 "superhomogeneous.m"
                  parse_tree__prog_util__det_make_functor_cons_id_3_p_0(hlds__make_hlds__superhomogeneous__YFunctor_39, hlds__make_hlds__superhomogeneous__Arity_169, &hlds__make_hlds__superhomogeneous__ConsId_79);
                }
#line 693 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77 = hlds__make_hlds__superhomogeneous__YArgTerms_40;
#line 691 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_134_134 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103;
#line 691 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_133_133 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101;
#line 691 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_132_132 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
#line 691 "superhomogeneous.m"
              }
#line 705 "superhomogeneous.m"
            if ((hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 698 "superhomogeneous.m"
              {
#line 698 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__FunctorGoal_80;
#line 698 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_162_162;
#line 698 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_166_166;
#line 698 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_168_168;
#line 698 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__Goal_170;

#line 700 "superhomogeneous.m"
                {
#line 700 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 700 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_79));
#line 700 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_162_162, 1) = ((MR_Box) ((MR_Integer) 0));
#line 700 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_162_162, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "superhomogeneous.m"
                }
#line 699 "superhomogeneous.m"
                {
#line 699 "superhomogeneous.m"
                  hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_162_162, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__FunctorGoal_80, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97);
                }
#line 703 "superhomogeneous.m"
                {
#line 703 "superhomogeneous.m"
                  hlds__hlds_goal__goal_set_purity_3_p_0(hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__FunctorGoal_80, &hlds__make_hlds__superhomogeneous__Goal_170);
                }
#line 704 "superhomogeneous.m"
                {
#line 704 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_166_166, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_23));
#line 704 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_166_166, 1) = ((MR_Box) ((MR_Integer) 1));
#line 704 "superhomogeneous.m"
                }
#line 704 "superhomogeneous.m"
                {
#line 704 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_168_168 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_170)));
                }
#line 704 "superhomogeneous.m"
                {
#line 704 "superhomogeneous.m"
                  MR_Word base;
#line 704 "superhomogeneous.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 704 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_166_166));
#line 704 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_168_168));
#line 704 "superhomogeneous.m"
                }
#line 698 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_132_132;
#line 698 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90;
#line 698 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_133_133;
#line 698 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94;
#line 698 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_134_134;
#line 698 "superhomogeneous.m"
              }
#line 705 "superhomogeneous.m"
            else
#line 706 "superhomogeneous.m"
              {
#line 706 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ArgContext_83;

#line 707 "superhomogeneous.m"
                {
#line 707 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__ArgContext_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 707 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_83, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_79));
#line 707 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_83, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
#line 707 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_83, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_29));
#line 707 "superhomogeneous.m"
                }
#line 725 "superhomogeneous.m"
#line 725 "superhomogeneous.m"
                switch (hlds__make_hlds__superhomogeneous__Purity_30) {
#line 725 "superhomogeneous.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 725 "superhomogeneous.m"
                  case (MR_Integer) 2:
#line 725 "superhomogeneous.m"
                  case (MR_Integer) 1:
#line 728 "superhomogeneous.m"
                    {
#line 728 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__Goal0_87;
#line 728 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_142_142;
#line 728 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__V_144_144;
#line 728 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__V_148_148;
#line 728 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__Goal_172;
#line 728 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__FunctorGoal_173;
#line 728 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__YVars_174;
#line 728 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_175;
#line 728 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_176;

#line 733 "superhomogeneous.m"
                      {
#line 733 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__ArgContext_83, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__superhomogeneous__YVars_174, &hlds__make_hlds__superhomogeneous__ArgExpansions_175, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_132_132, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_133_133, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_142_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_134_134, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99);
                      }
#line 738 "superhomogeneous.m"
                      {
#line 738 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 738 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_79));
#line 738 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_144_144, 1) = ((MR_Box) ((MR_Integer) 0));
#line 738 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_144_144, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVars_174));
#line 738 "superhomogeneous.m"
                      }
#line 737 "superhomogeneous.m"
                      {
#line 737 "superhomogeneous.m"
                        hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_144_144, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__FunctorGoal_173, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_142_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97);
                      }
#line 741 "superhomogeneous.m"
                      {
#line 741 "superhomogeneous.m"
                        hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_176);
                      }
#line 742 "superhomogeneous.m"
                      {
#line 742 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_176, hlds__make_hlds__superhomogeneous__ArgExpansions_175, hlds__make_hlds__superhomogeneous__FunctorGoal_173, &hlds__make_hlds__superhomogeneous__Goal0_87);
                      }
#line 744 "superhomogeneous.m"
                      {
#line 744 "superhomogeneous.m"
                        hlds__hlds_goal__goal_set_purity_3_p_0(hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__Goal0_87, &hlds__make_hlds__superhomogeneous__Goal_172);
                      }
#line 745 "superhomogeneous.m"
                      {
#line 745 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_148_148 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_172)));
                      }
#line 745 "superhomogeneous.m"
                      {
#line 745 "superhomogeneous.m"
                        MR_Word base;
#line 745 "superhomogeneous.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 745 "superhomogeneous.m"
                        *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
#line 745 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 745 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_148_148));
#line 745 "superhomogeneous.m"
                      }
#line 728 "superhomogeneous.m"
                    }
#line 725 "superhomogeneous.m"
                    break;
#line 725 "superhomogeneous.m"
                  case (MR_Integer) 0:
#line 709 "superhomogeneous.m"
                    {
#line 709 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__YVars_84;
#line 709 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_85;
#line 709 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_86;
#line 709 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_156_156;
#line 709 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__V_158_158;
#line 709 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__FunctorGoal_171;

#line 714 "superhomogeneous.m"
                      {
#line 714 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__ArgContext_83, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__superhomogeneous__YVars_84, &hlds__make_hlds__superhomogeneous__ArgExpansions_85, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_132_132, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_133_133, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_156_156, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_134_134, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99);
                      }
#line 719 "superhomogeneous.m"
                      {
#line 719 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 719 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_79));
#line 719 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 1) = ((MR_Box) ((MR_Integer) 0));
#line 719 "superhomogeneous.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVars_84));
#line 719 "superhomogeneous.m"
                      }
#line 718 "superhomogeneous.m"
                      {
#line 718 "superhomogeneous.m"
                        hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_158_158, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__FunctorGoal_171, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_156_156, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97);
                      }
#line 722 "superhomogeneous.m"
                      {
#line 722 "superhomogeneous.m"
                        hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_86);
                      }
#line 723 "superhomogeneous.m"
                      {
#line 723 "superhomogeneous.m"
                        hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_86, hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__FunctorGoal_171, (MR_Integer) 1, hlds__make_hlds__superhomogeneous__ArgExpansions_85, hlds__make_hlds__superhomogeneous__Expansion_32);
                      }
#line 709 "superhomogeneous.m"
                    }
#line 725 "superhomogeneous.m"
                    break;
#line 725 "superhomogeneous.m"
                }
#line 706 "superhomogeneous.m"
              }
#line 694 "superhomogeneous.m"
          }
#line 620 "superhomogeneous.m"
      }
#line 608 "superhomogeneous.m"
  }
#line 597 "superhomogeneous.m"
}

#line 560 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_21,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 560 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_41,
#line 560 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_42,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_43,
#line 560 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_44,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_45,
#line 560 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_46,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_47,
#line 560 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_48,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49,
#line 560 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50,
#line 560 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_51,
#line 560 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_52)
#line 560 "superhomogeneous.m"
{
#line 573 "superhomogeneous.m"
  {
#line 573 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 573 "superhomogeneous.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_22)) == (MR_mktag((MR_Integer) 0))))
#line 578 "superhomogeneous.m"
      {
#line 578 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YFunctor_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 578 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));
#line 578 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 2)));

#line 579 "superhomogeneous.m"
        {
#line 579 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__XVar_21, hlds__make_hlds__superhomogeneous__YFunctor_38, hlds__make_hlds__superhomogeneous__YArgTerms_39, hlds__make_hlds__superhomogeneous__YFunctorContext_40, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_51, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_52);
        }
#line 578 "superhomogeneous.m"
      }
#line 573 "superhomogeneous.m"
    else
#line 573 "superhomogeneous.m"
      {
#line 573 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YVar_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 573 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goal_37;
#line 573 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_59_59;
#line 573 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_62_62;
#line 573 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));

#line 574 "superhomogeneous.m"
        {
#line 574 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 574 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_35));
#line 574 "superhomogeneous.m"
        }
#line 574 "superhomogeneous.m"
        {
#line 574 "superhomogeneous.m"
          hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_21, hlds__make_hlds__superhomogeneous__V_59_59, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__Goal_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50);
        }
#line 576 "superhomogeneous.m"
        {
#line 576 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_62_62 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_37)));
        }
#line 576 "superhomogeneous.m"
        {
#line 576 "superhomogeneous.m"
          MR_Word base;
#line 576 "superhomogeneous.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 576 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Expansion_28 = base;
#line 576 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_62_62));
#line 576 "superhomogeneous.m"
        }
#line 573 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_42 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_41;
#line 573 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_44 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_43;
#line 573 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_46 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_45;
#line 573 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_48 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_47;
#line 573 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_52 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_51;
#line 573 "superhomogeneous.m"
      }
#line 573 "superhomogeneous.m"
  }
#line 560 "superhomogeneous.m"
}

#line 501 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XTerm_21,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 501 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55,
#line 501 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57,
#line 501 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59,
#line 501 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61,
#line 501 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63,
#line 501 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64,
#line 501 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65,
#line 501 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66)
#line 501 "superhomogeneous.m"
{
#line 514 "superhomogeneous.m"
  {
#line 514 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 514 "superhomogeneous.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__XTerm_21)) == (MR_mktag((MR_Integer) 0))))
#line 514 "superhomogeneous.m"
      {
#line 514 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 2)));
#line 514 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 1)));
#line 514 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 0)));

#line 514 "superhomogeneous.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_22)) == (MR_mktag((MR_Integer) 0))))
#line 540 "superhomogeneous.m"
          {
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TmpVar_48;
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionX_49;
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionY_50;
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_51;
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordX_52;
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordY_53;
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__GoalCord_54;
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_67_67;
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_68_68;
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_69_69;
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_70_70;
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_71_71;
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_72_72;
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_73_73;
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YFunctor_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));
#line 540 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 2)));

#line 542 "superhomogeneous.m"
            {
#line 542 "superhomogeneous.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__make_hlds__superhomogeneous__TmpVar_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_67_67);
            }
#line 543 "superhomogeneous.m"
            {
#line 543 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__TmpVar_48, hlds__make_hlds__superhomogeneous__V_110_110, hlds__make_hlds__superhomogeneous__V_109_109, hlds__make_hlds__superhomogeneous__V_108_108, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__ExpansionX_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_68_68, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_69_69, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_70_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_71_71, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_72_72, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_73_73);
            }
#line 547 "superhomogeneous.m"
            {
#line 547 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__TmpVar_48, hlds__make_hlds__superhomogeneous__YFunctor_99, hlds__make_hlds__superhomogeneous__YArgTerms_100, hlds__make_hlds__superhomogeneous__YFunctorContext_101, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__ExpansionY_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_68_68, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_69_69, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_70_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_71_71, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_72_72, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_73_73, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);
            }
#line 551 "superhomogeneous.m"
            {
#line 551 "superhomogeneous.m"
              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_23, &hlds__make_hlds__superhomogeneous__GoalInfo_51);
            }
#line 552 "superhomogeneous.m"
            {
#line 552 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_51, hlds__make_hlds__superhomogeneous__ExpansionX_49, &hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordX_52);
            }
#line 554 "superhomogeneous.m"
            {
#line 554 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_51, hlds__make_hlds__superhomogeneous__ExpansionY_50, &hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordY_53);
            }
#line 556 "superhomogeneous.m"
            {
#line 556 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__GoalCord_54 = mercury__cord__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordX_52, hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordY_53);
            }
#line 557 "superhomogeneous.m"
            {
#line 557 "superhomogeneous.m"
              MR_Word base;
#line 557 "superhomogeneous.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 557 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Expansion_28 = base;
#line 557 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 557 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_54));
#line 557 "superhomogeneous.m"
            }
#line 540 "superhomogeneous.m"
          }
#line 514 "superhomogeneous.m"
        else
#line 527 "superhomogeneous.m"
          {
#line 527 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YVar_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 528 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));

#line 529 "superhomogeneous.m"
            {
#line 529 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__YVar_98, hlds__make_hlds__superhomogeneous__V_110_110, hlds__make_hlds__superhomogeneous__V_109_109, hlds__make_hlds__superhomogeneous__V_108_108, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);
            }
#line 527 "superhomogeneous.m"
          }
#line 514 "superhomogeneous.m"
      }
#line 514 "superhomogeneous.m"
    else
#line 514 "superhomogeneous.m"
      {
#line 514 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 0)));
#line 514 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 1)));

#line 514 "superhomogeneous.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_22)) == (MR_mktag((MR_Integer) 0))))
#line 520 "superhomogeneous.m"
          {
#line 520 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YFunctor_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 520 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));
#line 520 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 2)));

#line 522 "superhomogeneous.m"
            {
#line 522 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__V_112_112, hlds__make_hlds__superhomogeneous__YFunctor_41, hlds__make_hlds__superhomogeneous__YArgTerms_42, hlds__make_hlds__superhomogeneous__YFunctorContext_43, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);
            }
#line 520 "superhomogeneous.m"
          }
#line 514 "superhomogeneous.m"
        else
#line 514 "superhomogeneous.m"
          {
#line 514 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
#line 514 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Goal_39;
#line 514 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_93_93;
#line 514 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_96_96;
#line 515 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));

#line 516 "superhomogeneous.m"
            {
#line 516 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 516 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_93_93, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_37));
#line 516 "superhomogeneous.m"
            }
#line 516 "superhomogeneous.m"
            {
#line 516 "superhomogeneous.m"
              hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__V_112_112, hlds__make_hlds__superhomogeneous__V_93_93, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__Goal_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64);
            }
#line 518 "superhomogeneous.m"
            {
#line 518 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_96_96 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_39)));
            }
#line 518 "superhomogeneous.m"
            {
#line 518 "superhomogeneous.m"
              MR_Word base;
#line 518 "superhomogeneous.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 518 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Expansion_28 = base;
#line 518 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_96_96));
#line 518 "superhomogeneous.m"
            }
#line 514 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55;
#line 514 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57;
#line 514 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59;
#line 514 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61;
#line 514 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65;
#line 514 "superhomogeneous.m"
          }
#line 514 "superhomogeneous.m"
      }
#line 514 "superhomogeneous.m"
  }
#line 501 "superhomogeneous.m"
}

#line 485 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LHSVar_21,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 485 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36,
#line 485 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38,
#line 485 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40,
#line 485 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42,
#line 485 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44,
#line 485 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45,
#line 485 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46,
#line 485 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47)
#line 485 "superhomogeneous.m"
{
#line 495 "superhomogeneous.m"
  {
#line 495 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 495 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__RHS_35;
#line 495 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_48_48;
#line 495 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_49_49;
#line 495 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_50_50;

#line 496 "superhomogeneous.m"
    {
#line 496 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__RHS0_22, &hlds__make_hlds__superhomogeneous__RHS_35, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_50_50);
    }
#line 497 "superhomogeneous.m"
    {
#line 497 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__LHSVar_21, hlds__make_hlds__superhomogeneous__RHS_35, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_50_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47);
    }
#line 495 "superhomogeneous.m"
  }
#line 485 "superhomogeneous.m"
}

#line 468 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LHS0_21,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
#line 468 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_37,
#line 468 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_39,
#line 468 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_40,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_41,
#line 468 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_42,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_43,
#line 468 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_44,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_45,
#line 468 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_46,
#line 468 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_47,
#line 468 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_48)
#line 468 "superhomogeneous.m"
{
#line 478 "superhomogeneous.m"
  {
#line 478 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 478 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__LHS_35;
#line 478 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__RHS_36;
#line 478 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_49_49;
#line 478 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_50_50;
#line 478 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51_51;
#line 478 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_52_52;
#line 478 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53;
#line 478 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_54_54;

#line 479 "superhomogeneous.m"
    {
#line 479 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__LHS0_21, &hlds__make_hlds__superhomogeneous__LHS_35, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51_51);
    }
#line 480 "superhomogeneous.m"
    {
#line 480 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__RHS0_22, &hlds__make_hlds__superhomogeneous__RHS_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_49_49, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_50_50, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_54_54);
    }
#line 481 "superhomogeneous.m"
    {
#line 481 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__LHS_35, hlds__make_hlds__superhomogeneous__RHS_36, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_54_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_48);
    }
#line 478 "superhomogeneous.m"
  }
#line 468 "superhomogeneous.m"
}

#line 429 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVar_20,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_21,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContext_23,
#line 429 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__ArgNum_25,
#line 429 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_26,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42,
#line 429 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44,
#line 429 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46,
#line 429 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48,
#line 429 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50,
#line 429 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51,
#line 429 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52,
#line 429 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53)
#line 429 "superhomogeneous.m"
{
#line 444 "superhomogeneous.m"
  {
#line 444 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 444 "superhomogeneous.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_21)) == (MR_mktag((MR_Integer) 0))))
#line 457 "superhomogeneous.m"
      {
#line 457 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YFunctor_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 0)));
#line 457 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 1)));
#line 457 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 2)));
#line 457 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__MainContext_65;
#line 457 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__SubContext_66;

#line 1278 "superhomogeneous.m"
#line 1278 "superhomogeneous.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__ArgContext_23)) {
#line 1278 "superhomogeneous.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1278 "superhomogeneous.m"
          case (MR_Integer) 0:
#line 1278 "superhomogeneous.m"
            {
#line 1278 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
#line 1278 "superhomogeneous.m"
              MR_Integer hlds__make_hlds__superhomogeneous__Arity_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));

#line 1279 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__PredOrFunc_74 == (MR_Integer) 1);
#line 1279 "superhomogeneous.m"
              if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1279 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__ArgNum_25 == hlds__make_hlds__superhomogeneous__Arity_75);
#line 1279 "superhomogeneous.m"
              if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1281 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__MainContext_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1279 "superhomogeneous.m"
              else
#line 1284 "superhomogeneous.m"
                {
#line 1284 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__MainContext_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MainContext_65, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1284 "superhomogeneous.m"
                }
#line 1286 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__SubContext_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1278 "superhomogeneous.m"
            }
#line 1278 "superhomogeneous.m"
            break;
#line 1278 "superhomogeneous.m"
          case (MR_Integer) 1:
#line 1288 "superhomogeneous.m"
            {
#line 1288 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__PredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));

#line 1289 "superhomogeneous.m"
              {
#line 1289 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__MainContext_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "superhomogeneous.m"
                MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_65, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__PredId_76));
#line 1289 "superhomogeneous.m"
                MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_65, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1289 "superhomogeneous.m"
              }
#line 1290 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__SubContext_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1288 "superhomogeneous.m"
            }
#line 1278 "superhomogeneous.m"
            break;
#line 1278 "superhomogeneous.m"
          case (MR_Integer) 2:
#line 1292 "superhomogeneous.m"
            {
#line 1292 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__ConsId_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
#line 1292 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__SubContexts0_78;
#line 1292 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__SubContext_79;

#line 1292 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__MainContext_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));
#line 1292 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__SubContexts0_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 2)));
#line 1293 "superhomogeneous.m"
              {
#line 1293 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__SubContext_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1293 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_79, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_77));
#line 1293 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_79, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1293 "superhomogeneous.m"
              }
#line 1294 "superhomogeneous.m"
              {
#line 1294 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__SubContext_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_66, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_79));
#line 1294 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_66, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContexts0_78));
#line 1294 "superhomogeneous.m"
              }
#line 1292 "superhomogeneous.m"
            }
#line 1278 "superhomogeneous.m"
            break;
#line 1278 "superhomogeneous.m"
        }
#line 460 "superhomogeneous.m"
        {
#line 460 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__XVar_20, hlds__make_hlds__superhomogeneous__YFunctor_39, hlds__make_hlds__superhomogeneous__YArgTerms_40, hlds__make_hlds__superhomogeneous__YFunctorContext_41, hlds__make_hlds__superhomogeneous__Context_22, hlds__make_hlds__superhomogeneous__MainContext_65, hlds__make_hlds__superhomogeneous__SubContext_66, (MR_Integer) 0, hlds__make_hlds__superhomogeneous__Expansion_26, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53);
        }
#line 457 "superhomogeneous.m"
      }
#line 444 "superhomogeneous.m"
    else
#line 444 "superhomogeneous.m"
      {
#line 444 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 0)));
#line 444 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YVarContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 1)));
#line 444 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__GoalCord_35;

#line 445 "superhomogeneous.m"
        {
#line 445 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_20)), ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_33)));
        }
#line 445 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 447 "superhomogeneous.m"
          {
#line 447 "superhomogeneous.m"
            {
#line 447 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__GoalCord_35 = mercury__cord__init_0_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
            }
#line 447 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50;
#line 447 "superhomogeneous.m"
          }
#line 445 "superhomogeneous.m"
        else
#line 450 "superhomogeneous.m"
          {
#line 450 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MainContext_36;
#line 450 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__SubContext_37;
#line 450 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Goal_38;
#line 450 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_61_61;

#line 1278 "superhomogeneous.m"
#line 1278 "superhomogeneous.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__ArgContext_23)) {
#line 1278 "superhomogeneous.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1278 "superhomogeneous.m"
              case (MR_Integer) 0:
#line 1278 "superhomogeneous.m"
                {
#line 1278 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
#line 1278 "superhomogeneous.m"
                  MR_Integer hlds__make_hlds__superhomogeneous__Arity_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));

#line 1279 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__PredOrFunc_84 == (MR_Integer) 1);
#line 1279 "superhomogeneous.m"
                  if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1279 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__ArgNum_25 == hlds__make_hlds__superhomogeneous__Arity_85);
#line 1279 "superhomogeneous.m"
                  if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1281 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__MainContext_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1279 "superhomogeneous.m"
                  else
#line 1284 "superhomogeneous.m"
                    {
#line 1284 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__MainContext_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "superhomogeneous.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MainContext_36, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1284 "superhomogeneous.m"
                    }
#line 1286 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__SubContext_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1278 "superhomogeneous.m"
                }
#line 1278 "superhomogeneous.m"
                break;
#line 1278 "superhomogeneous.m"
              case (MR_Integer) 1:
#line 1288 "superhomogeneous.m"
                {
#line 1288 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__PredId_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));

#line 1289 "superhomogeneous.m"
                  {
#line 1289 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__MainContext_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_36, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__PredId_86));
#line 1289 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_36, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1289 "superhomogeneous.m"
                  }
#line 1290 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__SubContext_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1288 "superhomogeneous.m"
                }
#line 1278 "superhomogeneous.m"
                break;
#line 1278 "superhomogeneous.m"
              case (MR_Integer) 2:
#line 1292 "superhomogeneous.m"
                {
#line 1292 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__ConsId_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
#line 1292 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__SubContexts0_88;
#line 1292 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__SubContext_89;

#line 1292 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__MainContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));
#line 1292 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__SubContexts0_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 2)));
#line 1293 "superhomogeneous.m"
                  {
#line 1293 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__SubContext_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1293 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_89, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_87));
#line 1293 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_89, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
#line 1293 "superhomogeneous.m"
                  }
#line 1294 "superhomogeneous.m"
                  {
#line 1294 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__SubContext_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_37, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_89));
#line 1294 "superhomogeneous.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_37, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContexts0_88));
#line 1294 "superhomogeneous.m"
                  }
#line 1292 "superhomogeneous.m"
                }
#line 1278 "superhomogeneous.m"
                break;
#line 1278 "superhomogeneous.m"
            }
#line 451 "superhomogeneous.m"
            {
#line 451 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 451 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_33));
#line 451 "superhomogeneous.m"
            }
#line 451 "superhomogeneous.m"
            {
#line 451 "superhomogeneous.m"
              hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_20, hlds__make_hlds__superhomogeneous__V_61_61, hlds__make_hlds__superhomogeneous__YVarContext_34, hlds__make_hlds__superhomogeneous__MainContext_36, hlds__make_hlds__superhomogeneous__SubContext_37, (MR_Integer) 0, &hlds__make_hlds__superhomogeneous__Goal_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51);
            }
#line 453 "superhomogeneous.m"
            {
#line 453 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__GoalCord_35 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_38)));
            }
#line 450 "superhomogeneous.m"
          }
#line 455 "superhomogeneous.m"
        {
#line 455 "superhomogeneous.m"
          MR_Word base;
#line 455 "superhomogeneous.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 455 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Expansion_26 = base;
#line 455 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 455 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_35));
#line 455 "superhomogeneous.m"
        }
#line 444 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42;
#line 444 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44;
#line 444 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46;
#line 444 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48;
#line 444 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52;
#line 444 "superhomogeneous.m"
      }
#line 444 "superhomogeneous.m"
  }
#line 429 "superhomogeneous.m"
}

#line 396 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVars_19,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__YTerms_20,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContexts_21,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 396 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansions_24,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40,
#line 396 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42,
#line 396 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44,
#line 396 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46,
#line 396 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48,
#line 396 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49,
#line 396 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50,
#line 396 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51)
#line 396 "superhomogeneous.m"
{
#line 407 "superhomogeneous.m"
  {
#line 407 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__XVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 408 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 408 "superhomogeneous.m"
      {
#line 409 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__YTerms_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 410 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__ArgContexts_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "superhomogeneous.m"
      }
#line 407 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 412 "superhomogeneous.m"
      {
#line 412 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__Expansions_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 412 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50;
#line 412 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48;
#line 412 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46;
#line 412 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44;
#line 412 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42;
#line 412 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40;
#line 412 "superhomogeneous.m"
      }
#line 407 "superhomogeneous.m"
    else
#line 413 "superhomogeneous.m"
      {
#line 413 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadXVar_31;
#line 413 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TailXVars_32;
#line 413 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadYTerm_33;
#line 413 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TailYTerms_34;
#line 413 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__HeadArgNumber_35;
#line 413 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__HeadArgContext_36;
#line 413 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TailArgContexts_37;
#line 414 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_52_52;

#line 414 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__XVars_19)) == (MR_mktag((MR_Integer) 1)));
#line 414 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 414 "superhomogeneous.m"
          {
#line 414 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__HeadXVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XVars_19, (MR_Integer) 0)));
#line 414 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__TailXVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XVars_19, (MR_Integer) 1)));
#line 415 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerms_20)) == (MR_mktag((MR_Integer) 1)));
#line 415 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 415 "superhomogeneous.m"
              {
#line 415 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__HeadYTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerms_20, (MR_Integer) 0)));
#line 415 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__TailYTerms_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerms_20, (MR_Integer) 1)));
#line 416 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__ArgContexts_21)) == (MR_mktag((MR_Integer) 1)));
#line 416 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 416 "superhomogeneous.m"
                  {
#line 416 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_21, (MR_Integer) 0)));
#line 416 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__TailArgContexts_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_21, (MR_Integer) 1)));
#line 416 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__HeadArgNumber_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_52_52, (MR_Integer) 0)));
#line 416 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__HeadArgContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_52_52, (MR_Integer) 1)));
#line 416 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 416 "superhomogeneous.m"
                  }
#line 415 "superhomogeneous.m"
              }
#line 414 "superhomogeneous.m"
          }
#line 413 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 420 "superhomogeneous.m"
          {
#line 420 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HeadExpansion_38;
#line 420 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TailExpansions_39;
#line 420 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53;
#line 420 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_54_54;
#line 420 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_55_55;
#line 420 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_56_56;
#line 420 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_57_57;
#line 420 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_58_58;

#line 418 "superhomogeneous.m"
            {
#line 418 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__HeadXVar_31, hlds__make_hlds__superhomogeneous__HeadYTerm_33, hlds__make_hlds__superhomogeneous__Context_22, hlds__make_hlds__superhomogeneous__HeadArgContext_36, hlds__make_hlds__superhomogeneous__HeadArgNumber_35, &hlds__make_hlds__superhomogeneous__HeadExpansion_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_54_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_55_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_56_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_57_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_58_58);
            }
#line 421 "superhomogeneous.m"
            {
#line 421 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(hlds__make_hlds__superhomogeneous__TailXVars_32, hlds__make_hlds__superhomogeneous__TailYTerms_34, hlds__make_hlds__superhomogeneous__TailArgContexts_37, hlds__make_hlds__superhomogeneous__Context_22, &hlds__make_hlds__superhomogeneous__TailExpansions_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_54_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_55_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_56_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_57_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51);
            }
#line 424 "superhomogeneous.m"
            {
#line 424 "superhomogeneous.m"
              MR_Word base;
#line 424 "superhomogeneous.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Expansions_24 = base;
#line 424 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HeadExpansion_38));
#line 424 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TailExpansions_39));
#line 424 "superhomogeneous.m"
            }
#line 420 "superhomogeneous.m"
          }
#line 413 "superhomogeneous.m"
        else
#line 426 "superhomogeneous.m"
          {
#line 426 "superhomogeneous.m"
            {
#line 426 "superhomogeneous.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.do_arg_unifications_with_contexts\'/18", (MR_String) "length mismatch");
#line 426 "superhomogeneous.m"
              return;
            }
#line 426 "superhomogeneous.m"
          }
#line 413 "superhomogeneous.m"
      }
#line 407 "superhomogeneous.m"
  }
#line 396 "superhomogeneous.m"
}

#line 373 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 373 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__5_5,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18,
#line 373 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19,
#line 373 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20)
#line 373 "superhomogeneous.m"
{
#line 381 "superhomogeneous.m"
  {
#line 381 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 381 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "superhomogeneous.m"
      {
#line 382 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 382 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 383 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19;
#line 383 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17;
#line 383 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15;
#line 383 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13;
#line 382 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11;
#line 382 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9;
#line 381 "superhomogeneous.m"
      }
#line 381 "superhomogeneous.m"
    else
#line 386 "superhomogeneous.m"
      {
#line 386 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YTerm_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 386 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__YTerms_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 386 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__XVar_51;
#line 386 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__XVars_52;
#line 386 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Expansion_53;
#line 386 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Expansions_54;
#line 386 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_74_74;
#line 386 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75;
#line 386 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_76_76;
#line 386 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_77_77;
#line 386 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_78_78;
#line 386 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_79_79;
#line 386 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_80_80;
#line 386 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_81_81;
#line 386 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__V_82_82;

#line 387 "superhomogeneous.m"
        {
#line 387 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__YTerm_44, &hlds__make_hlds__superhomogeneous__XVar_51, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_74_74);
        }
#line 388 "superhomogeneous.m"
        {
#line 388 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_51));
#line 388 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6));
#line 388 "superhomogeneous.m"
        }
#line 389 "superhomogeneous.m"
        {
#line 389 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__XVar_51, hlds__make_hlds__superhomogeneous__YTerm_44, hlds__make_hlds__superhomogeneous__HeadVar__2_2, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__HeadVar__5_5, &hlds__make_hlds__superhomogeneous__Expansion_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_77_77, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_74_74, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_78_78, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_79_79, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_80_80, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_81_81);
        }
#line 393 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__V_82_82 = (hlds__make_hlds__superhomogeneous__HeadVar__5_5 + (MR_Integer) 1);
#line 392 "superhomogeneous.m"
        {
#line 392 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__YTerms_45, hlds__make_hlds__superhomogeneous__HeadVar__2_2, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__V_82_82, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75, &hlds__make_hlds__superhomogeneous__XVars_52, &hlds__make_hlds__superhomogeneous__Expansions_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_77_77, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_78_78, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_79_79, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_80_80, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_81_81, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20);
        }
#line 385 "superhomogeneous.m"
        {
#line 385 "superhomogeneous.m"
          MR_Word base;
#line 385 "superhomogeneous.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
#line 385 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_51));
#line 385 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVars_52));
#line 385 "superhomogeneous.m"
        }
#line 385 "superhomogeneous.m"
        {
#line 385 "superhomogeneous.m"
          MR_Word base;
#line 385 "superhomogeneous.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = base;
#line 385 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansion_53));
#line 385 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansions_54));
#line 385 "superhomogeneous.m"
        }
#line 386 "superhomogeneous.m"
      }
#line 381 "superhomogeneous.m"
  }
#line 373 "superhomogeneous.m"
}

#line 344 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
#line 344 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__6_6,
#line 344 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8,
#line 344 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10,
#line 344 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
#line 344 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14,
#line 344 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
#line 344 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
#line 344 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 344 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19)
#line 344 "superhomogeneous.m"
{
#line 352 "superhomogeneous.m"
  {
#line 352 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 352 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "superhomogeneous.m"
      if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "superhomogeneous.m"
        {
#line 353 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 354 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18;
#line 354 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16;
#line 354 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14;
#line 354 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12;
#line 353 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10;
#line 353 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8;
#line 352 "superhomogeneous.m"
        }
#line 352 "superhomogeneous.m"
      else
#line 357 "superhomogeneous.m"
        {
#line 356 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "superhomogeneous.m"
          {
#line 358 "superhomogeneous.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.do_arg_unifications\'/19", (MR_String) "length mismatch");
#line 358 "superhomogeneous.m"
            return;
          }
#line 357 "superhomogeneous.m"
        }
#line 352 "superhomogeneous.m"
    else
#line 352 "superhomogeneous.m"
      {
#line 352 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 352 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));

#line 352 "superhomogeneous.m"
        if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "superhomogeneous.m"
          {
#line 360 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 362 "superhomogeneous.m"
            {
#line 362 "superhomogeneous.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.do_arg_unifications\'/19", (MR_String) "length mismatch");
#line 362 "superhomogeneous.m"
              return;
            }
#line 361 "superhomogeneous.m"
          }
#line 352 "superhomogeneous.m"
        else
#line 365 "superhomogeneous.m"
          {
#line 365 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YTerm_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 365 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__YTerms_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 365 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Expansion_104;
#line 365 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Expansions_105;
#line 365 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_124_124;
#line 365 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_125_125;
#line 365 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_126_126;
#line 365 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_127_127;
#line 365 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_128_128;
#line 365 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129;
#line 365 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__V_130_130;

#line 366 "superhomogeneous.m"
            {
#line 366 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__V_139_139, hlds__make_hlds__superhomogeneous__YTerm_98, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__HeadVar__4_4, hlds__make_hlds__superhomogeneous__HeadVar__6_6, &hlds__make_hlds__superhomogeneous__Expansion_104, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_124_124, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_125_125, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_126_126, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_127_127, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_128_128, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129);
            }
#line 369 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_130_130 = (hlds__make_hlds__superhomogeneous__HeadVar__6_6 + (MR_Integer) 1);
#line 369 "superhomogeneous.m"
            {
#line 369 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__V_138_138, hlds__make_hlds__superhomogeneous__YTerms_99, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__HeadVar__4_4, hlds__make_hlds__superhomogeneous__V_130_130, &hlds__make_hlds__superhomogeneous__Expansions_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_124_124, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_125_125, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_126_126, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_127_127, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_128_128, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);
            }
#line 364 "superhomogeneous.m"
            {
#line 364 "superhomogeneous.m"
              MR_Word base;
#line 364 "superhomogeneous.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
#line 364 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansion_104));
#line 364 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansions_105));
#line 364 "superhomogeneous.m"
            }
#line 365 "superhomogeneous.m"
          }
#line 352 "superhomogeneous.m"
      }
#line 352 "superhomogeneous.m"
  }
#line 344 "superhomogeneous.m"
}

#line 181 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(
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
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_13 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;
#line 181 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_14 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__3_3;

#line 181 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_13 == hlds__make_hlds__superhomogeneous__CastY_14);
#line 181 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 6012 "hlds.make_hlds.superhomogeneous.c"
      *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
#line 181 "superhomogeneous.m"
    else
#line 181 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "superhomogeneous.m"
      if ((hlds__make_hlds__superhomogeneous__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
#line 181 "superhomogeneous.m"
      else
#line 6024 "hlds.make_hlds.superhomogeneous.c"
        *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
#line 181 "superhomogeneous.m"
    else
#line 181 "superhomogeneous.m"
      {
#line 181 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 181 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

#line 181 "superhomogeneous.m"
        if ((hlds__make_hlds__superhomogeneous__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6037 "hlds.make_hlds.superhomogeneous.c"
          *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
#line 181 "superhomogeneous.m"
        else
#line 181 "superhomogeneous.m"
          {
#line 181 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
#line 181 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
#line 181 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_12_12;

#line 181 "superhomogeneous.m"
            {
#line 181 "superhomogeneous.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0], &hlds__make_hlds__superhomogeneous__V_12_12, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_18_18)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_10_10)));
            }
#line 6055 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_12_12 == (MR_Integer) 0);
#line 181 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 181 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 181 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_12_12;
#line 181 "superhomogeneous.m"
            else
#line 181 "superhomogeneous.m"
              {
#line 181 "superhomogeneous.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__superhomogeneous__HeadVar__1_1, hlds__make_hlds__superhomogeneous__V_17_17, hlds__make_hlds__superhomogeneous__V_11_11);
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
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(
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
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_9 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__1_1;
#line 181 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_10 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;

#line 181 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_9 == hlds__make_hlds__superhomogeneous__CastY_10);
#line 181 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 181 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 181 "superhomogeneous.m"
    else
#line 181 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "superhomogeneous.m"
      {
#line 181 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__CastX_3 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__1_1;
#line 181 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__CastY_4 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;

#line 181 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastY_4 == hlds__make_hlds__superhomogeneous__CastX_3);
#line 181 "superhomogeneous.m"
      }
#line 181 "superhomogeneous.m"
    else
#line 181 "superhomogeneous.m"
      {
#line 181 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_11_11;
#line 181 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 181 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 181 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_7_7;
#line 181 "superhomogeneous.m"
        MR_Integer hlds__make_hlds__superhomogeneous__V_8_8;

#line 181 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 181 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 181 "superhomogeneous.m"
          {
#line 181 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 181 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 6143 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__TypeInfo_11_11 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 6145 "hlds.make_hlds.superhomogeneous.c"
            {
#line 6147 "hlds.make_hlds.superhomogeneous.c"
              hlds__make_hlds__superhomogeneous__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_11_11, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_5_5)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_7_7)));
            }
#line 181 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 6152 "hlds.make_hlds.superhomogeneous.c"
              hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_6_6 == hlds__make_hlds__superhomogeneous__V_8_8);
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

#line 185 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(
#line 185 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 185 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 185 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3)
#line 185 "superhomogeneous.m"
{
#line 185 "superhomogeneous.m"
  {
#line 185 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 185 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_9 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;
#line 185 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_10 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__3_3;

#line 185 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_9 == hlds__make_hlds__superhomogeneous__CastY_10);
#line 185 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 6189 "hlds.make_hlds.superhomogeneous.c"
      *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
#line 185 "superhomogeneous.m"
    else
#line 185 "superhomogeneous.m"
      {
#line 185 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 185 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
#line 185 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
#line 185 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_8_8;

#line 185 "superhomogeneous.m"
        {
#line 185 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(&hlds__make_hlds__superhomogeneous__V_8_8, hlds__make_hlds__superhomogeneous__V_4_4, hlds__make_hlds__superhomogeneous__V_6_6);
        }
#line 6211 "hlds.make_hlds.superhomogeneous.c"
        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_8_8 == (MR_Integer) 0);
#line 185 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 185 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 185 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_8_8;
#line 185 "superhomogeneous.m"
        else
#line 185 "superhomogeneous.m"
          {
#line 185 "superhomogeneous.m"
            {
#line 185 "superhomogeneous.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_5_5)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_7_7)));
            }
#line 185 "superhomogeneous.m"
          }
#line 185 "superhomogeneous.m"
      }
#line 185 "superhomogeneous.m"
  }
#line 185 "superhomogeneous.m"
}

#line 185 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(
#line 185 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 185 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2)
#line 185 "superhomogeneous.m"
{
#line 185 "superhomogeneous.m"
  {
#line 185 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 185 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_7 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__1_1;
#line 185 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_8 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;

#line 185 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_7 == hlds__make_hlds__superhomogeneous__CastY_8);
#line 185 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 185 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 185 "superhomogeneous.m"
    else
#line 185 "superhomogeneous.m"
      {
#line 185 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_9_9;
#line 185 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 185 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 185 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 185 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));

#line 6276 "hlds.make_hlds.superhomogeneous.c"
        {
#line 6278 "hlds.make_hlds.superhomogeneous.c"
          hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(hlds__make_hlds__superhomogeneous__V_3_3, hlds__make_hlds__superhomogeneous__V_5_5);
        }
#line 185 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 185 "superhomogeneous.m"
          {
#line 6285 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__TypeInfo_9_9 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1];
#line 6287 "hlds.make_hlds.superhomogeneous.c"
            {
#line 6289 "hlds.make_hlds.superhomogeneous.c"
              hlds__make_hlds__superhomogeneous__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_9_9, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_4_4)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_6_6)));
            }
#line 185 "superhomogeneous.m"
          }
#line 185 "superhomogeneous.m"
      }
#line 185 "superhomogeneous.m"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 185 "superhomogeneous.m"
  }
#line 185 "superhomogeneous.m"
}

#line 37 "superhomogeneous.m"
void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0(
#line 37 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 37 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 37 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3)
#line 37 "superhomogeneous.m"
{
#line 37 "superhomogeneous.m"
  {
#line 37 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 37 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_43 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;
#line 37 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_44 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__3_3;

#line 37 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_43 == hlds__make_hlds__superhomogeneous__CastY_44);
#line 37 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 6327 "hlds.make_hlds.superhomogeneous.c"
      *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
#line 37 "superhomogeneous.m"
    else
#line 37 "superhomogeneous.m"
#line 37 "superhomogeneous.m"
      switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) {
#line 37 "superhomogeneous.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 37 "superhomogeneous.m"
        case (MR_Integer) 0:
#line 37 "superhomogeneous.m"
          {
#line 37 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

#line 37 "superhomogeneous.m"
#line 37 "superhomogeneous.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) {
#line 37 "superhomogeneous.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 37 "superhomogeneous.m"
              case (MR_Integer) 0:
#line 37 "superhomogeneous.m"
                {
#line 37 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
#line 37 "superhomogeneous.m"
                  MR_Integer hlds__make_hlds__superhomogeneous__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
#line 37 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__V_8_8;
#line 37 "superhomogeneous.m"
                  MR_Integer hlds__make_hlds__superhomogeneous__V_57_57 = (MR_Integer) hlds__make_hlds__superhomogeneous__V_56_56;
#line 37 "superhomogeneous.m"
                  MR_Integer hlds__make_hlds__superhomogeneous__V_58_58 = (MR_Integer) hlds__make_hlds__superhomogeneous__V_6_6;

#line 37 "superhomogeneous.m"
                  {
#line 37 "superhomogeneous.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__superhomogeneous__V_8_8, hlds__make_hlds__superhomogeneous__V_57_57, hlds__make_hlds__superhomogeneous__V_58_58);
                  }
#line 6370 "hlds.make_hlds.superhomogeneous.c"
                  hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_8_8 == (MR_Integer) 0);
#line 37 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 37 "superhomogeneous.m"
                  if (hlds__make_hlds__superhomogeneous__succeeded)
#line 37 "superhomogeneous.m"
                    *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_8_8;
#line 37 "superhomogeneous.m"
                  else
#line 37 "superhomogeneous.m"
                    {
#line 37 "superhomogeneous.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__superhomogeneous__HeadVar__1_1, hlds__make_hlds__superhomogeneous__V_55_55, hlds__make_hlds__superhomogeneous__V_7_7);
                    }
#line 37 "superhomogeneous.m"
                }
#line 37 "superhomogeneous.m"
                break;
#line 37 "superhomogeneous.m"
              case (MR_Integer) 1:
#line 6391 "hlds.make_hlds.superhomogeneous.c"
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "superhomogeneous.m"
                break;
#line 37 "superhomogeneous.m"
              case (MR_Integer) 2:
#line 6397 "hlds.make_hlds.superhomogeneous.c"
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "superhomogeneous.m"
                break;
#line 37 "superhomogeneous.m"
            }
#line 37 "superhomogeneous.m"
          }
#line 37 "superhomogeneous.m"
          break;
#line 37 "superhomogeneous.m"
        case (MR_Integer) 1:
#line 37 "superhomogeneous.m"
          {
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

#line 37 "superhomogeneous.m"
#line 37 "superhomogeneous.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) {
#line 37 "superhomogeneous.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 37 "superhomogeneous.m"
              case (MR_Integer) 0:
#line 6421 "hlds.make_hlds.superhomogeneous.c"
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
#line 37 "superhomogeneous.m"
                break;
#line 37 "superhomogeneous.m"
              case (MR_Integer) 1:
#line 37 "superhomogeneous.m"
                {
#line 37 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));

#line 37 "superhomogeneous.m"
                  {
#line 37 "superhomogeneous.m"
                    hlds__hlds_pred____Compare____call_id_0_0(hlds__make_hlds__superhomogeneous__HeadVar__1_1, hlds__make_hlds__superhomogeneous__V_51_51, hlds__make_hlds__superhomogeneous__V_21_21);
                  }
#line 37 "superhomogeneous.m"
                }
#line 37 "superhomogeneous.m"
                break;
#line 37 "superhomogeneous.m"
              case (MR_Integer) 2:
#line 6443 "hlds.make_hlds.superhomogeneous.c"
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "superhomogeneous.m"
                break;
#line 37 "superhomogeneous.m"
            }
#line 37 "superhomogeneous.m"
          }
#line 37 "superhomogeneous.m"
          break;
#line 37 "superhomogeneous.m"
        case (MR_Integer) 2:
#line 37 "superhomogeneous.m"
          {
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 2)));
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

#line 37 "superhomogeneous.m"
#line 37 "superhomogeneous.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) {
#line 37 "superhomogeneous.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 37 "superhomogeneous.m"
              case (MR_Integer) 0:
#line 6471 "hlds.make_hlds.superhomogeneous.c"
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
#line 37 "superhomogeneous.m"
                break;
#line 37 "superhomogeneous.m"
              case (MR_Integer) 1:
#line 6477 "hlds.make_hlds.superhomogeneous.c"
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
#line 37 "superhomogeneous.m"
                break;
#line 37 "superhomogeneous.m"
              case (MR_Integer) 2:
#line 37 "superhomogeneous.m"
                {
#line 37 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
#line 37 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
#line 37 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 2)));
#line 37 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous__V_41_41;

#line 37 "superhomogeneous.m"
                  {
#line 37 "superhomogeneous.m"
                    parse_tree__prog_data____Compare____cons_id_0_0(&hlds__make_hlds__superhomogeneous__V_41_41, hlds__make_hlds__superhomogeneous__V_54_54, hlds__make_hlds__superhomogeneous__V_38_38);
                  }
#line 6499 "hlds.make_hlds.superhomogeneous.c"
                  hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_41_41 == (MR_Integer) 0);
#line 37 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 37 "superhomogeneous.m"
                  if (hlds__make_hlds__superhomogeneous__succeeded)
#line 37 "superhomogeneous.m"
                    *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_41_41;
#line 37 "superhomogeneous.m"
                  else
#line 37 "superhomogeneous.m"
                    {
#line 37 "superhomogeneous.m"
                      MR_Word hlds__make_hlds__superhomogeneous__V_42_42;

#line 37 "superhomogeneous.m"
                      {
#line 37 "superhomogeneous.m"
                        hlds__hlds_goal____Compare____unify_main_context_0_0(&hlds__make_hlds__superhomogeneous__V_42_42, hlds__make_hlds__superhomogeneous__V_53_53, hlds__make_hlds__superhomogeneous__V_39_39);
                      }
#line 6519 "hlds.make_hlds.superhomogeneous.c"
                      hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_42_42 == (MR_Integer) 0);
#line 37 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 37 "superhomogeneous.m"
                      if (hlds__make_hlds__superhomogeneous__succeeded)
#line 37 "superhomogeneous.m"
                        *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_42_42;
#line 37 "superhomogeneous.m"
                      else
#line 37 "superhomogeneous.m"
                        {
#line 37 "superhomogeneous.m"
                          {
#line 37 "superhomogeneous.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[3], hlds__make_hlds__superhomogeneous__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_52_52)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_40_40)));
                          }
#line 37 "superhomogeneous.m"
                        }
#line 37 "superhomogeneous.m"
                    }
#line 37 "superhomogeneous.m"
                }
#line 37 "superhomogeneous.m"
                break;
#line 37 "superhomogeneous.m"
            }
#line 37 "superhomogeneous.m"
          }
#line 37 "superhomogeneous.m"
          break;
#line 37 "superhomogeneous.m"
      }
#line 37 "superhomogeneous.m"
  }
#line 37 "superhomogeneous.m"
}

#line 37 "superhomogeneous.m"
MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0(
#line 37 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 37 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2)
#line 37 "superhomogeneous.m"
{
#line 37 "superhomogeneous.m"
  {
#line 37 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 37 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_15 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__1_1;
#line 37 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_16 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;

#line 37 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_15 == hlds__make_hlds__superhomogeneous__CastY_16);
#line 37 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 37 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 37 "superhomogeneous.m"
    else
#line 37 "superhomogeneous.m"
#line 37 "superhomogeneous.m"
      switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__1_1)) {
#line 37 "superhomogeneous.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 37 "superhomogeneous.m"
        case (MR_Integer) 0:
#line 37 "superhomogeneous.m"
          {
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 37 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_5_5;
#line 37 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__V_6_6;

#line 37 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 37 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 37 "superhomogeneous.m"
              {
#line 37 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 37 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 6611 "hlds.make_hlds.superhomogeneous.c"
                hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_3_3 == hlds__make_hlds__superhomogeneous__V_5_5);
#line 37 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 6615 "hlds.make_hlds.superhomogeneous.c"
                  hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_4_4 == hlds__make_hlds__superhomogeneous__V_6_6);
#line 37 "superhomogeneous.m"
              }
#line 37 "superhomogeneous.m"
          }
#line 37 "superhomogeneous.m"
          break;
#line 37 "superhomogeneous.m"
        case (MR_Integer) 1:
#line 37 "superhomogeneous.m"
          {
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_8_8;

#line 37 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 37 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 37 "superhomogeneous.m"
              {
#line 37 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 6640 "hlds.make_hlds.superhomogeneous.c"
                {
#line 6642 "hlds.make_hlds.superhomogeneous.c"
                  hlds__make_hlds__superhomogeneous__succeeded = hlds__hlds_pred____Unify____call_id_0_0(hlds__make_hlds__superhomogeneous__V_7_7, hlds__make_hlds__superhomogeneous__V_8_8);
                }
#line 37 "superhomogeneous.m"
              }
#line 37 "superhomogeneous.m"
          }
#line 37 "superhomogeneous.m"
          break;
#line 37 "superhomogeneous.m"
        case (MR_Integer) 2:
#line 37 "superhomogeneous.m"
          {
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_20_20;
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 2)));
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_12_12;
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_13_13;
#line 37 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_14_14;

#line 37 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 37 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 37 "superhomogeneous.m"
              {
#line 37 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 37 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 37 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 2)));
#line 6682 "hlds.make_hlds.superhomogeneous.c"
                {
#line 6684 "hlds.make_hlds.superhomogeneous.c"
                  hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__make_hlds__superhomogeneous__V_9_9, hlds__make_hlds__superhomogeneous__V_12_12);
                }
#line 37 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 37 "superhomogeneous.m"
                  {
#line 6691 "hlds.make_hlds.superhomogeneous.c"
                    {
#line 6693 "hlds.make_hlds.superhomogeneous.c"
                      hlds__make_hlds__superhomogeneous__succeeded = hlds__hlds_goal____Unify____unify_main_context_0_0(hlds__make_hlds__superhomogeneous__V_10_10, hlds__make_hlds__superhomogeneous__V_13_13);
                    }
#line 37 "superhomogeneous.m"
                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 37 "superhomogeneous.m"
                      {
#line 6700 "hlds.make_hlds.superhomogeneous.c"
                        hlds__make_hlds__superhomogeneous__TypeInfo_20_20 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[3];
#line 6702 "hlds.make_hlds.superhomogeneous.c"
                        {
#line 6704 "hlds.make_hlds.superhomogeneous.c"
                          hlds__make_hlds__superhomogeneous__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_20_20, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_11_11)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_14_14)));
                        }
#line 37 "superhomogeneous.m"
                      }
#line 37 "superhomogeneous.m"
                  }
#line 37 "superhomogeneous.m"
              }
#line 37 "superhomogeneous.m"
          }
#line 37 "superhomogeneous.m"
          break;
#line 37 "superhomogeneous.m"
      }
#line 37 "superhomogeneous.m"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 37 "superhomogeneous.m"
  }
#line 37 "superhomogeneous.m"
}

#line 1364 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(
#line 1364 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Arg_6,
#line 1364 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Var_7,
#line 1364 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Vars0_8,
#line 1364 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
#line 1364 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13)
#line 1364 "superhomogeneous.m"
{
#line 1368 "superhomogeneous.m"
  {
#line 1368 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__Arg_6)) == (MR_mktag((MR_Integer) 1)));
#line 1368 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ArgVar_10;
#line 1369 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_11_11;
#line 1370 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_15_15;

#line 1369 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1369 "superhomogeneous.m"
      {
#line 1369 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__ArgVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_6, (MR_Integer) 0)));
#line 1369 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_6, (MR_Integer) 1)));
#line 6760 "hlds.make_hlds.superhomogeneous.c"
        hlds__make_hlds__superhomogeneous__TypeInfo_15_15 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 1370 "superhomogeneous.m"
        {
#line 1370 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_15_15, ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgVar_10)), hlds__make_hlds__superhomogeneous__Vars0_8);
        }
#line 1370 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 1369 "superhomogeneous.m"
      }
#line 1368 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1372 "superhomogeneous.m"
      {
#line 1372 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__Var_7 = hlds__make_hlds__superhomogeneous__ArgVar_10;
#line 1372 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12;
#line 1372 "superhomogeneous.m"
      }
#line 1368 "superhomogeneous.m"
    else
#line 1374 "superhomogeneous.m"
      {
#line 1374 "superhomogeneous.m"
        {
#line 1374 "superhomogeneous.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__Var_7, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13);
        }
#line 1374 "superhomogeneous.m"
      }
#line 1368 "superhomogeneous.m"
  }
#line 1364 "superhomogeneous.m"
}

#line 1306 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_9_p_0(
#line 1306 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 1306 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2,
#line 1306 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_3,
#line 1306 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4,
#line 1306 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_5,
#line 1306 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6,
#line 1306 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_7,
#line 1306 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8,
#line 1306 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_9)
#line 1306 "superhomogeneous.m"
{
#line 1311 "superhomogeneous.m"
  while (MR_TRUE)
#line 1311 "superhomogeneous.m"
    {
#line 1311 "superhomogeneous.m"
      /* tailcall optimized into a loop */
#line 1311 "superhomogeneous.m"
      {
#line 1311 "superhomogeneous.m"
        MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 1311 "superhomogeneous.m"
        if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1311 "superhomogeneous.m"
          {
#line 1312 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_9 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8;
#line 1312 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_7 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6;
#line 1312 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_5 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4;
#line 1311 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_3 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2;
#line 1311 "superhomogeneous.m"
          }
#line 1311 "superhomogeneous.m"
        else
#line 1314 "superhomogeneous.m"
          {
#line 1314 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 1314 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 1314 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Var_28;
#line 1314 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37;
#line 1314 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38_38;
#line 1314 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_39_39;
#line 1314 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40;
#line 1314 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Arg_57;
#line 1314 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60;
#line 1329 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ArgVar_58;
#line 1330 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_59_59;
#line 1331 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_29_64;

#line 1328 "superhomogeneous.m"
            {
#line 1328 "superhomogeneous.m"
              hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__Arg_22, &hlds__make_hlds__superhomogeneous__Arg_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_39_39);
            }
#line 1330 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__Arg_57)) == (MR_mktag((MR_Integer) 1)));
#line 1330 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1330 "superhomogeneous.m"
              {
#line 1330 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__ArgVar_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_57, (MR_Integer) 0)));
#line 1330 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_57, (MR_Integer) 1)));
#line 6889 "hlds.make_hlds.superhomogeneous.c"
                hlds__make_hlds__superhomogeneous__TypeInfo_29_64 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 1331 "superhomogeneous.m"
                {
#line 1331 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_29_64, ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgVar_58)), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2);
                }
#line 1331 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
#line 1330 "superhomogeneous.m"
              }
#line 1329 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1333 "superhomogeneous.m"
              {
#line 1333 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Var_28 = hlds__make_hlds__superhomogeneous__ArgVar_58;
#line 1333 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60;
#line 1333 "superhomogeneous.m"
              }
#line 1329 "superhomogeneous.m"
            else
#line 1335 "superhomogeneous.m"
              {
#line 1335 "superhomogeneous.m"
                {
#line 1335 "superhomogeneous.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__make_hlds__superhomogeneous__Var_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37);
                }
#line 1335 "superhomogeneous.m"
              }
#line 1317 "superhomogeneous.m"
            {
#line 1317 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Var_28));
#line 1317 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2));
#line 1317 "superhomogeneous.m"
            }
#line 1318 "superhomogeneous.m"
            /* direct tailcall eliminated */
#line 1318 "superhomogeneous.m"
            {
#line 1318 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1 = hlds__make_hlds__superhomogeneous__Args_23;
#line 1318 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0__tmp_copy_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40;
#line 1318 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0__tmp_copy_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37;
#line 1318 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0__tmp_copy_6 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38_38;
#line 1318 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0__tmp_copy_8 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_39_39;

#line 1318 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0__tmp_copy_8;
#line 1318 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0__tmp_copy_6;
#line 1318 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0__tmp_copy_4;
#line 1318 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0__tmp_copy_2;
#line 1318 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1;
#line 1318 "superhomogeneous.m"
            }
#line 1318 "superhomogeneous.m"
            continue;
#line 1314 "superhomogeneous.m"
          }
#line 1311 "superhomogeneous.m"
      }
#line 1311 "superhomogeneous.m"
      break;
#line 1311 "superhomogeneous.m"
    }
#line 1306 "superhomogeneous.m"
}

#line 1236 "superhomogeneous.m"
static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(
#line 1236 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ModuleInfo_1,
#line 1236 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
#line 1236 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
#line 1236 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
#line 1236 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__5_5,
#line 1236 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__6_6,
#line 1236 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
#line 1236 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8)
#line 1236 "superhomogeneous.m"
{
#line 1241 "superhomogeneous.m"
  {
#line 1241 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 1241 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1241 "superhomogeneous.m"
      {
#line 1241 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1241 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1241 "superhomogeneous.m"
          {
#line 1241 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1241 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1241 "superhomogeneous.m"
              {
#line 1241 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1241 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1241 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1241 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1241 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 1241 "superhomogeneous.m"
              }
#line 1241 "superhomogeneous.m"
          }
#line 1241 "superhomogeneous.m"
      }
#line 1241 "superhomogeneous.m"
    else
#line 1244 "superhomogeneous.m"
      {
#line 1244 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
#line 1244 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
#line 1244 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__LambdaVar_13;
#line 1244 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__LambdaVars_14;
#line 1244 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Mode_15;
#line 1244 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Modes_16;
#line 1244 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__InputArgs0_21;
#line 1244 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__OutputArgs0_22;
#line 1244 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__InputLambdaVars0_23;
#line 1244 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24;

#line 1243 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1243 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1243 "superhomogeneous.m"
          {
#line 1243 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__LambdaVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
#line 1243 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__LambdaVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
#line 1243 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1243 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1243 "superhomogeneous.m"
              {
#line 1243 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__4_4, (MR_Integer) 0)));
#line 1243 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Modes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__4_4, (MR_Integer) 1)));
#line 1245 "superhomogeneous.m"
                {
#line 1245 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(hlds__make_hlds__superhomogeneous__ModuleInfo_1, hlds__make_hlds__superhomogeneous__Args_12, hlds__make_hlds__superhomogeneous__LambdaVars_14, hlds__make_hlds__superhomogeneous__Modes_16, &hlds__make_hlds__superhomogeneous__InputArgs0_21, &hlds__make_hlds__superhomogeneous__OutputArgs0_22, &hlds__make_hlds__superhomogeneous__InputLambdaVars0_23, &hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24);
                }
#line 1244 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1244 "superhomogeneous.m"
                  {
#line 1254 "superhomogeneous.m"
                    {
#line 1254 "superhomogeneous.m"
                      hlds__make_hlds__superhomogeneous__succeeded = check_hlds__mode_util__mode_is_undefined_2_p_0(hlds__make_hlds__superhomogeneous__ModuleInfo_1, hlds__make_hlds__superhomogeneous__Mode_15);
                    }
#line 1254 "superhomogeneous.m"
                    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1255 "superhomogeneous.m"
                      {
#line 1255 "superhomogeneous.m"
                        {
#line 1255 "superhomogeneous.m"
                          MR_Word base;
#line 1255 "superhomogeneous.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1255 "superhomogeneous.m"
                          *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = base;
#line 1255 "superhomogeneous.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arg_11));
#line 1255 "superhomogeneous.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputArgs0_21));
#line 1255 "superhomogeneous.m"
                        }
#line 1256 "superhomogeneous.m"
                        *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = hlds__make_hlds__superhomogeneous__OutputArgs0_22;
#line 1257 "superhomogeneous.m"
                        {
#line 1257 "superhomogeneous.m"
                          MR_Word base;
#line 1257 "superhomogeneous.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "superhomogeneous.m"
                          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
#line 1257 "superhomogeneous.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVar_13));
#line 1257 "superhomogeneous.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputLambdaVars0_23));
#line 1257 "superhomogeneous.m"
                        }
#line 1258 "superhomogeneous.m"
                        *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24;
#line 1255 "superhomogeneous.m"
                      }
#line 1254 "superhomogeneous.m"
                    else
#line 1259 "superhomogeneous.m"
                      {
#line 1259 "superhomogeneous.m"
                        {
#line 1259 "superhomogeneous.m"
                          hlds__make_hlds__superhomogeneous__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(hlds__make_hlds__superhomogeneous__ModuleInfo_1, hlds__make_hlds__superhomogeneous__Mode_15);
                        }
#line 1259 "superhomogeneous.m"
                        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1260 "superhomogeneous.m"
                          {
#line 1260 "superhomogeneous.m"
                            *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = hlds__make_hlds__superhomogeneous__InputArgs0_21;
#line 1261 "superhomogeneous.m"
                            {
#line 1261 "superhomogeneous.m"
                              MR_Word base;
#line 1261 "superhomogeneous.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "superhomogeneous.m"
                              *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = base;
#line 1261 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arg_11));
#line 1261 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__OutputArgs0_22));
#line 1261 "superhomogeneous.m"
                            }
#line 1262 "superhomogeneous.m"
                            *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = hlds__make_hlds__superhomogeneous__InputLambdaVars0_23;
#line 1263 "superhomogeneous.m"
                            {
#line 1263 "superhomogeneous.m"
                              MR_Word base;
#line 1263 "superhomogeneous.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "superhomogeneous.m"
                              *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = base;
#line 1263 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVar_13));
#line 1263 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24));
#line 1263 "superhomogeneous.m"
                            }
#line 1260 "superhomogeneous.m"
                          }
#line 1259 "superhomogeneous.m"
                        else
#line 1265 "superhomogeneous.m"
                          {
#line 1265 "superhomogeneous.m"
                            {
#line 1265 "superhomogeneous.m"
                              MR_Word base;
#line 1265 "superhomogeneous.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "superhomogeneous.m"
                              *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = base;
#line 1265 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arg_11));
#line 1265 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputArgs0_21));
#line 1265 "superhomogeneous.m"
                            }
#line 1266 "superhomogeneous.m"
                            *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = hlds__make_hlds__superhomogeneous__OutputArgs0_22;
#line 1267 "superhomogeneous.m"
                            {
#line 1267 "superhomogeneous.m"
                              MR_Word base;
#line 1267 "superhomogeneous.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1267 "superhomogeneous.m"
                              *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
#line 1267 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVar_13));
#line 1267 "superhomogeneous.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputLambdaVars0_23));
#line 1267 "superhomogeneous.m"
                            }
#line 1268 "superhomogeneous.m"
                            *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24;
#line 1265 "superhomogeneous.m"
                          }
#line 1259 "superhomogeneous.m"
                      }
#line 1254 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
#line 1244 "superhomogeneous.m"
                  }
#line 1243 "superhomogeneous.m"
              }
#line 1243 "superhomogeneous.m"
          }
#line 1244 "superhomogeneous.m"
      }
#line 1241 "superhomogeneous.m"
    return hlds__make_hlds__superhomogeneous__succeeded;
#line 1241 "superhomogeneous.m"
  }
#line 1236 "superhomogeneous.m"
}

#line 1049 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__X_26,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__UnificationPurity_27,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LambdaPurity_28,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Groundness_29,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_30,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Args0_32,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Modes_33,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Det_34,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_35,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_36,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_37,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_38,
#line 1049 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_39,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__OutsideSVarState_40,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82,
#line 1049 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84,
#line 1049 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86,
#line 1049 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88,
#line 1049 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89,
#line 1049 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90,
#line 1049 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91)
#line 1049 "superhomogeneous.m"
{
#line 1101 "superhomogeneous.m"
  {
#line 1101 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 1101 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__StateVar_46;

#line 1101 "superhomogeneous.m"
    {
#line 1101 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_3_p_0(hlds__make_hlds__superhomogeneous__PredOrFunc_30, hlds__make_hlds__superhomogeneous__Args0_32, &hlds__make_hlds__superhomogeneous__StateVar_46);
    }
#line 1101 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1102 "superhomogeneous.m"
      {
#line 1102 "superhomogeneous.m"
        {
#line 1102 "superhomogeneous.m"
          hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84, hlds__make_hlds__superhomogeneous__StateVar_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);
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
#line 1101 "superhomogeneous.m"
    else
#line 1104 "superhomogeneous.m"
      {
#line 1104 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__StateVar_167;

#line 1104 "superhomogeneous.m"
        {
#line 1104 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_p_0(hlds__make_hlds__superhomogeneous__Args0_32, &hlds__make_hlds__superhomogeneous__StateVar_167);
        }
#line 1104 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1106 "superhomogeneous.m"
          {
#line 1105 "superhomogeneous.m"
            {
#line 1105 "superhomogeneous.m"
              hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84, hlds__make_hlds__superhomogeneous__StateVar_167, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);
            }
#line 1107 "superhomogeneous.m"
            {
#line 1107 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Goal_39 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_36);
            }
#line 1106 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88;
#line 1106 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86;
#line 1106 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84;
#line 1106 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82;
#line 1106 "superhomogeneous.m"
          }
#line 1104 "superhomogeneous.m"
        else
#line 1111 "superhomogeneous.m"
          {
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_168_168;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_170_170;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Args_48;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__FinalSVarMap_49;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__InitialSVarState_50;
#line 1111 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__NumArgs_51;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__LambdaVars_52;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputArgs_57;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__OutputArgs_58;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputLambdaVars_59;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__OutputLambdaVars_60;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Substitution_61;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ArgContext_62;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HeadBefore0_63;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HeadBefore_64;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Body_65;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HeadAfter0_66;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HeadAfter_67;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__FinalSVarState_70;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HLDS_Goal0_71;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__QuantifiedArgs_72;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__QuantifiedVars0_74;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__QuantifiedVars_75;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_76;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__HLDS_Goal_78;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__LambdaNonLocals_80;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__LambdaRHS_81;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_95_95;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_96_96;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_98_98;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_103_103;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_104_104;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_105_105;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_106_106;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_107_107;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_109_109;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_110_110;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_111_111;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_112_112;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_113_113;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_114_114;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_116_116;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_119_119;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_156_156;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_158_158;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_159_159;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_161_161;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_162_162;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_163_163;
#line 1111 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_164_164;
#line 1127 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputArgs0_53;
#line 1127 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__OutputArgs0_54;
#line 1127 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputLambdaVars0_55;
#line 1127 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__OutputLambdaVars0_56;

#line 1110 "superhomogeneous.m"
            {
#line 1110 "superhomogeneous.m"
              hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__Args0_32, &hlds__make_hlds__superhomogeneous__Args_48, &hlds__make_hlds__superhomogeneous__FinalSVarMap_49, hlds__make_hlds__superhomogeneous__OutsideSVarState_40, &hlds__make_hlds__superhomogeneous__InitialSVarState_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_95_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_96_96);
            }
#line 7479 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__TypeInfo_168_168 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2];
#line 1121 "superhomogeneous.m"
            {
#line 1121 "superhomogeneous.m"
              mercury__list__length_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_168_168, hlds__make_hlds__superhomogeneous__Args_48, &hlds__make_hlds__superhomogeneous__NumArgs_51);
            }
#line 7486 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1122 "superhomogeneous.m"
            {
#line 1122 "superhomogeneous.m"
              parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169, (MR_String) "LambdaHeadVar__", hlds__make_hlds__superhomogeneous__NumArgs_51, &hlds__make_hlds__superhomogeneous__LambdaVars_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_95_95, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_98_98);
            }
#line 1128 "superhomogeneous.m"
            {
#line 1128 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86, hlds__make_hlds__superhomogeneous__Args_48, hlds__make_hlds__superhomogeneous__LambdaVars_52, hlds__make_hlds__superhomogeneous__Modes_33, &hlds__make_hlds__superhomogeneous__NonOutputArgs0_53, &hlds__make_hlds__superhomogeneous__OutputArgs0_54, &hlds__make_hlds__superhomogeneous__NonOutputLambdaVars0_55, &hlds__make_hlds__superhomogeneous__OutputLambdaVars0_56);
            }
#line 1127 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 1132 "superhomogeneous.m"
              {
#line 1132 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__NonOutputArgs_57 = hlds__make_hlds__superhomogeneous__NonOutputArgs0_53;
#line 1133 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__OutputArgs_58 = hlds__make_hlds__superhomogeneous__OutputArgs0_54;
#line 1134 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__NonOutputLambdaVars_59 = hlds__make_hlds__superhomogeneous__NonOutputLambdaVars0_55;
#line 1135 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__OutputLambdaVars_60 = hlds__make_hlds__superhomogeneous__OutputLambdaVars0_56;
#line 1132 "superhomogeneous.m"
              }
#line 1127 "superhomogeneous.m"
            else
#line 1137 "superhomogeneous.m"
              {
#line 1137 "superhomogeneous.m"
                {
#line 1137 "superhomogeneous.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.build_lambda_expression\'/25", (MR_String) "mismatched lists");
#line 1137 "superhomogeneous.m"
                  return;
                }
#line 1137 "superhomogeneous.m"
              }
#line 7525 "hlds.make_hlds.superhomogeneous.c"
            hlds__make_hlds__superhomogeneous__TypeInfo_170_170 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
#line 1140 "superhomogeneous.m"
            {
#line 1140 "superhomogeneous.m"
              mercury__map__init_1_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_170_170, hlds__make_hlds__superhomogeneous__TypeInfo_170_170, &hlds__make_hlds__superhomogeneous__Substitution_61);
            }
#line 1141 "superhomogeneous.m"
            {
#line 1141 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__ArgContext_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1141 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_62, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__PredOrFunc_30));
#line 1141 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_62, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__NumArgs_51));
#line 1141 "superhomogeneous.m"
            }
#line 1146 "superhomogeneous.m"
            {
#line 1146 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HeadBefore0_63 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_36);
            }
#line 1147 "superhomogeneous.m"
            {
#line 1147 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__superhomogeneous__NonOutputLambdaVars_59, hlds__make_hlds__superhomogeneous__NonOutputArgs_57, hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__ArgContext_62, hlds__make_hlds__superhomogeneous__HeadBefore0_63, &hlds__make_hlds__superhomogeneous__HeadBefore_64, hlds__make_hlds__superhomogeneous__InitialSVarState_50, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_103_103, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_98_98, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_105_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_106_106, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_96_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_107_107);
            }
#line 1152 "superhomogeneous.m"
            {
#line 1152 "superhomogeneous.m"
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 0, hlds__make_hlds__superhomogeneous__ParsedGoal_35, hlds__make_hlds__superhomogeneous__Substitution_61, &hlds__make_hlds__superhomogeneous__Body_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_109_109, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_103_103, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_110_110, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_104_104, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_105_105, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_106_106, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_107_107, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_114_114);
            }
#line 1159 "superhomogeneous.m"
            {
#line 1159 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HeadAfter0_66 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_36);
            }
#line 1160 "superhomogeneous.m"
            {
#line 1160 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__superhomogeneous__OutputLambdaVars_60, hlds__make_hlds__superhomogeneous__OutputArgs_58, hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__ArgContext_62, hlds__make_hlds__superhomogeneous__HeadAfter0_66, &hlds__make_hlds__superhomogeneous__HeadAfter_67, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_109_109, &hlds__make_hlds__superhomogeneous__FinalSVarState_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_110_110, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_116_116, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_113_113, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_119_119, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_114_114, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);
            }
#line 1196 "superhomogeneous.m"
            {
#line 1196 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HeadAfter_67));
#line 1196 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1196 "superhomogeneous.m"
            }
#line 1196 "superhomogeneous.m"
            {
#line 1196 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Body_65));
#line 1196 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_159_159));
#line 1196 "superhomogeneous.m"
            }
#line 1196 "superhomogeneous.m"
            {
#line 1196 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HeadBefore_64));
#line 1196 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_156_156, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_158_158));
#line 1196 "superhomogeneous.m"
            }
#line 1195 "superhomogeneous.m"
            {
#line 1195 "superhomogeneous.m"
              hlds__make_hlds__state_var__svar_finish_lambda_body_8_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__FinalSVarMap_49, hlds__make_hlds__superhomogeneous__V_156_156, &hlds__make_hlds__superhomogeneous__HLDS_Goal0_71, hlds__make_hlds__superhomogeneous__InitialSVarState_50, hlds__make_hlds__superhomogeneous__FinalSVarState_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_116_116, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83);
            }
#line 1204 "superhomogeneous.m"
#line 1204 "superhomogeneous.m"
            switch (hlds__make_hlds__superhomogeneous__PredOrFunc_30) {
#line 1204 "superhomogeneous.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1204 "superhomogeneous.m"
              case (MR_Integer) 1:
#line 1206 "superhomogeneous.m"
                {
#line 1206 "superhomogeneous.m"
                  MR_Word hlds__make_hlds__superhomogeneous___ReturnValTerm_73;
#line 1206 "superhomogeneous.m"
                  MR_Box hlds__make_hlds__superhomogeneous__conv0__ReturnValTerm_73;

#line 1206 "superhomogeneous.m"
                  {
#line 1206 "superhomogeneous.m"
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_168_168, hlds__make_hlds__superhomogeneous__Args_48, &hlds__make_hlds__superhomogeneous__QuantifiedArgs_72, &hlds__make_hlds__superhomogeneous__conv0__ReturnValTerm_73);
                  }
#line 1206 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous___ReturnValTerm_73 = ((MR_Word) hlds__make_hlds__superhomogeneous__conv0__ReturnValTerm_73);
#line 1206 "superhomogeneous.m"
                }
#line 1204 "superhomogeneous.m"
                break;
#line 1204 "superhomogeneous.m"
              case (MR_Integer) 0:
#line 1203 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__QuantifiedArgs_72 = hlds__make_hlds__superhomogeneous__Args_48;
#line 1204 "superhomogeneous.m"
                break;
#line 1204 "superhomogeneous.m"
            }
#line 1208 "superhomogeneous.m"
            {
#line 1208 "superhomogeneous.m"
              mercury__term__vars_list_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169, hlds__make_hlds__superhomogeneous__QuantifiedArgs_72, &hlds__make_hlds__superhomogeneous__QuantifiedVars0_74);
            }
#line 1209 "superhomogeneous.m"
            {
#line 1209 "superhomogeneous.m"
              mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_170_170, hlds__make_hlds__superhomogeneous__QuantifiedVars0_74, &hlds__make_hlds__superhomogeneous__QuantifiedVars_75);
            }
#line 1211 "superhomogeneous.m"
            {
#line 1211 "superhomogeneous.m"
              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_36, &hlds__make_hlds__superhomogeneous__GoalInfo_76);
            }
#line 1212 "superhomogeneous.m"
            {
#line 1212 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1212 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__QuantifiedVars_75));
#line 1212 "superhomogeneous.m"
            }
#line 1212 "superhomogeneous.m"
            {
#line 1212 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "superhomogeneous.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1212 "superhomogeneous.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_161_161));
#line 1212 "superhomogeneous.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HLDS_Goal0_71));
#line 1212 "superhomogeneous.m"
            }
#line 1213 "superhomogeneous.m"
            {
#line 1213 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HLDS_Goal_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1213 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HLDS_Goal_78, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77));
#line 1213 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HLDS_Goal_78, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_76));
#line 1213 "superhomogeneous.m"
            }
#line 1219 "superhomogeneous.m"
            {
#line 1219 "superhomogeneous.m"
              hlds__goal_util__goal_vars_2_p_0(hlds__make_hlds__superhomogeneous__HLDS_Goal_78, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_162_162);
            }
#line 1220 "superhomogeneous.m"
            {
#line 1220 "superhomogeneous.m"
              parse_tree__set_of_var__delete_list_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169, hlds__make_hlds__superhomogeneous__LambdaVars_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_162_162, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_163_163);
            }
#line 1221 "superhomogeneous.m"
            {
#line 1221 "superhomogeneous.m"
              parse_tree__set_of_var__delete_list_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169, hlds__make_hlds__superhomogeneous__QuantifiedVars_75, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_163_163, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_164_164);
            }
#line 1222 "superhomogeneous.m"
            {
#line 1222 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__LambdaNonLocals_80 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_164_164);
            }
#line 1225 "superhomogeneous.m"
            {
#line 1225 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__LambdaRHS_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 0) = ((MR_Box) ((hlds__make_hlds__superhomogeneous__LambdaPurity_28 | ((((hlds__make_hlds__superhomogeneous__Groundness_29 << (MR_Integer) 2)) | ((hlds__make_hlds__superhomogeneous__PredOrFunc_30 << (MR_Integer) 3)))))));
#line 1225 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 1) = (MR_Integer) 0;
#line 1225 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaNonLocals_80));
#line 1225 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVars_52));
#line 1225 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 4) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Modes_33));
#line 1225 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 5) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Det_34));
#line 1225 "superhomogeneous.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 6) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HLDS_Goal_78));
#line 1225 "superhomogeneous.m"
            }
#line 1228 "superhomogeneous.m"
            {
#line 1228 "superhomogeneous.m"
              hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__X_26, hlds__make_hlds__superhomogeneous__LambdaRHS_81, hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__MainContext_37, hlds__make_hlds__superhomogeneous__SubContext_38, hlds__make_hlds__superhomogeneous__UnificationPurity_27, hlds__make_hlds__superhomogeneous__Goal_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_119_119, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89);
            }
#line 1111 "superhomogeneous.m"
          }
#line 1104 "superhomogeneous.m"
      }
#line 1101 "superhomogeneous.m"
  }
#line 1049 "superhomogeneous.m"
}

#line 1023 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(
#line 1023 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Modes0_8,
#line 1023 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Modes_9,
#line 1023 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_10,
#line 1023 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
#line 1023 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
#line 1023 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 1023 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19)
#line 1023 "superhomogeneous.m"
{
#line 1029 "superhomogeneous.m"
  {
#line 1029 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 1029 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__MaybeOptImported_13;

#line 1030 "superhomogeneous.m"
    {
#line 1030 "superhomogeneous.m"
      hlds__make_hlds__qual_info__qual_info_get_maybe_opt_imported_2_p_0(hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, &hlds__make_hlds__superhomogeneous__MaybeOptImported_13);
    }
#line 1038 "superhomogeneous.m"
#line 1038 "superhomogeneous.m"
    switch (hlds__make_hlds__superhomogeneous__MaybeOptImported_13) {
#line 1038 "superhomogeneous.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1038 "superhomogeneous.m"
      case (MR_Integer) 0:
#line 1032 "superhomogeneous.m"
        {
#line 1032 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__MQInfo0_14;
#line 1032 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__MQInfo_15;

#line 1033 "superhomogeneous.m"
          {
#line 1033 "superhomogeneous.m"
            hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, &hlds__make_hlds__superhomogeneous__MQInfo0_14);
          }
#line 1035 "superhomogeneous.m"
          {
#line 1035 "superhomogeneous.m"
            parse_tree__module_qual__qualify_lambda_mode_list_8_p_0((MR_Integer) 0, hlds__make_hlds__superhomogeneous__Context_10, hlds__make_hlds__superhomogeneous__Modes0_8, hlds__make_hlds__superhomogeneous__Modes_9, hlds__make_hlds__superhomogeneous__MQInfo0_14, &hlds__make_hlds__superhomogeneous__MQInfo_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);
          }
#line 1037 "superhomogeneous.m"
          {
#line 1037 "superhomogeneous.m"
            hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(hlds__make_hlds__superhomogeneous__MQInfo_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17);
          }
#line 1032 "superhomogeneous.m"
        }
#line 1038 "superhomogeneous.m"
        break;
#line 1038 "superhomogeneous.m"
      case (MR_Integer) 1:
#line 1039 "superhomogeneous.m"
        {
#line 1041 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Modes_9 = hlds__make_hlds__superhomogeneous__Modes0_8;
#line 1039 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16;
#line 1039 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18;
#line 1039 "superhomogeneous.m"
        }
#line 1038 "superhomogeneous.m"
        break;
#line 1038 "superhomogeneous.m"
    }
#line 1029 "superhomogeneous.m"
  }
#line 1023 "superhomogeneous.m"
}

#line 750 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__convert_big_integer_functor_5_p_0(
#line 750 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Functor0_6,
#line 750 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Functor_7,
#line 750 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_8,
#line 750 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
#line 750 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19)
#line 750 "superhomogeneous.m"
{
#line 754 "superhomogeneous.m"
  {
#line 754 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__Functor0_6)) == (MR_mktag((MR_Integer) 2)));
#line 754 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__Base_10;
#line 754 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__Integer_11;

#line 754 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 754 "superhomogeneous.m"
      {
#line 754 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__Base_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__Functor0_6, (MR_Integer) 0)));
#line 754 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__Integer_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__Functor0_6, (MR_Integer) 1)));
#line 755 "superhomogeneous.m"
        {
#line 755 "superhomogeneous.m"
          MR_Integer hlds__make_hlds__superhomogeneous__Int_12;

#line 755 "superhomogeneous.m"
          {
#line 755 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(hlds__make_hlds__superhomogeneous__Base_10, hlds__make_hlds__superhomogeneous__Integer_11, &hlds__make_hlds__superhomogeneous__Int_12);
          }
#line 755 "superhomogeneous.m"
          if (hlds__make_hlds__superhomogeneous__succeeded)
#line 756 "superhomogeneous.m"
            {
#line 756 "superhomogeneous.m"
              {
#line 756 "superhomogeneous.m"
                MR_Word base;
#line 756 "superhomogeneous.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 756 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__Functor_7 = base;
#line 756 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Int_12));
#line 756 "superhomogeneous.m"
              }
#line 756 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18;
#line 756 "superhomogeneous.m"
            }
#line 755 "superhomogeneous.m"
          else
#line 758 "superhomogeneous.m"
            {
#line 758 "superhomogeneous.m"
              MR_String hlds__make_hlds__superhomogeneous__BasePrefix_13;
#line 758 "superhomogeneous.m"
              MR_String hlds__make_hlds__superhomogeneous__IntString_14;
#line 758 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__Pieces_15;
#line 758 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__Msg_16;
#line 758 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__Spec_17;
#line 758 "superhomogeneous.m"
              MR_Integer hlds__make_hlds__superhomogeneous__V_20_20;
#line 758 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__V_23_23;
#line 758 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__V_24_24;
#line 758 "superhomogeneous.m"
              MR_String hlds__make_hlds__superhomogeneous__V_25_25;
#line 758 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__V_30_30;
#line 758 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__V_31_31;
#line 758 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__V_35_35;

#line 758 "superhomogeneous.m"
              {
#line 758 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__BasePrefix_13 = mercury__term_io__integer_base_prefix_1_f_0(hlds__make_hlds__superhomogeneous__Base_10);
              }
#line 760 "superhomogeneous.m"
              {
#line 760 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_20_20 = mercury__term_io__integer_base_int_1_f_0(hlds__make_hlds__superhomogeneous__Base_10);
              }
#line 760 "superhomogeneous.m"
              {
#line 760 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__IntString_14 = mercury__integer__to_base_string_2_f_0(hlds__make_hlds__superhomogeneous__Integer_11, hlds__make_hlds__superhomogeneous__V_20_20);
              }
#line 762 "superhomogeneous.m"
              {
#line 762 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_25_25 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__BasePrefix_13, hlds__make_hlds__superhomogeneous__IntString_14);
              }
#line 762 "superhomogeneous.m"
              {
#line 762 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "superhomogeneous.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 762 "superhomogeneous.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_25_25));
#line 762 "superhomogeneous.m"
              }
#line 762 "superhomogeneous.m"
              {
#line 762 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_24_24));
#line 762 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[6])));
#line 762 "superhomogeneous.m"
              }
#line 761 "superhomogeneous.m"
              {
#line 761 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[4])));
#line 761 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Pieces_15, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_23_23));
#line 761 "superhomogeneous.m"
              }
#line 763 "superhomogeneous.m"
              {
#line 763 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 763 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Pieces_15));
#line 763 "superhomogeneous.m"
              }
#line 763 "superhomogeneous.m"
              {
#line 763 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 763 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_31_31));
#line 763 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 763 "superhomogeneous.m"
              }
#line 763 "superhomogeneous.m"
              {
#line 763 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 763 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Msg_16, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Context_8));
#line 763 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Msg_16, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_30_30));
#line 763 "superhomogeneous.m"
              }
#line 764 "superhomogeneous.m"
              {
#line 764 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Msg_16));
#line 764 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 764 "superhomogeneous.m"
              }
#line 764 "superhomogeneous.m"
              {
#line 764 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 764 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 764 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 764 "superhomogeneous.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_35_35));
#line 764 "superhomogeneous.m"
              }
#line 765 "superhomogeneous.m"
              {
#line 765 "superhomogeneous.m"
                MR_Word base;
#line 765 "superhomogeneous.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "superhomogeneous.m"
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = base;
#line 765 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Spec_17));
#line 765 "superhomogeneous.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18));
#line 765 "superhomogeneous.m"
              }
#line 766 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Functor_7 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_5[0]);
#line 758 "superhomogeneous.m"
            }
#line 755 "superhomogeneous.m"
        }
#line 754 "superhomogeneous.m"
      }
#line 754 "superhomogeneous.m"
    else
#line 769 "superhomogeneous.m"
      {
#line 769 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__Functor_7 = hlds__make_hlds__superhomogeneous__Functor0_6;
#line 769 "superhomogeneous.m"
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18;
#line 769 "superhomogeneous.m"
      }
#line 754 "superhomogeneous.m"
  }
#line 750 "superhomogeneous.m"
}

#line 337 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(
#line 337 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 337 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__GoalCord_4)
#line 337 "superhomogeneous.m"
{
#line 340 "superhomogeneous.m"
  {
#line 340 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 340 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));

#line 340 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__GoalCord_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 340 "superhomogeneous.m"
  }
#line 337 "superhomogeneous.m"
}

#line 320 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(
#line 320 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 320 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2,
#line 320 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_3,
#line 320 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4,
#line 320 "superhomogeneous.m"
  MR_Integer * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_5)
#line 320 "superhomogeneous.m"
{
#line 323 "superhomogeneous.m"
  while (MR_TRUE)
#line 323 "superhomogeneous.m"
    {
#line 323 "superhomogeneous.m"
      /* tailcall optimized into a loop */
#line 323 "superhomogeneous.m"
      {
#line 323 "superhomogeneous.m"
        MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 323 "superhomogeneous.m"
        if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 323 "superhomogeneous.m"
          {
#line 323 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_5 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4;
#line 323 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_3 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2;
#line 323 "superhomogeneous.m"
          }
#line 323 "superhomogeneous.m"
        else
#line 325 "superhomogeneous.m"
          {
#line 325 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Expansion_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 325 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Expansions_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 325 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__MaybeFGTI_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_12, (MR_Integer) 0)));
#line 325 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24;
#line 325 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25;
#line 326 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_12, (MR_Integer) 1)));

#line 330 "superhomogeneous.m"
            if ((hlds__make_hlds__superhomogeneous__MaybeFGTI_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "superhomogeneous.m"
              {
#line 329 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25 = (MR_Integer) 0;
#line 328 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4;
#line 328 "superhomogeneous.m"
              }
#line 330 "superhomogeneous.m"
            else
#line 331 "superhomogeneous.m"
              {
#line 331 "superhomogeneous.m"
                MR_Integer hlds__make_hlds__superhomogeneous__Size_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_16, (MR_Integer) 1)));
#line 331 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_16, (MR_Integer) 0)));

#line 332 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24 = (hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4 + hlds__make_hlds__superhomogeneous__Size_19);
#line 331 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2;
#line 331 "superhomogeneous.m"
              }
#line 334 "superhomogeneous.m"
            /* direct tailcall eliminated */
#line 334 "superhomogeneous.m"
            {
#line 334 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1 = hlds__make_hlds__superhomogeneous__Expansions_13;
#line 334 "superhomogeneous.m"
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0__tmp_copy_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25;
#line 334 "superhomogeneous.m"
              MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0__tmp_copy_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24;

#line 334 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0__tmp_copy_4;
#line 334 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0__tmp_copy_2;
#line 334 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1;
#line 334 "superhomogeneous.m"
            }
#line 334 "superhomogeneous.m"
            continue;
#line 325 "superhomogeneous.m"
          }
#line 323 "superhomogeneous.m"
      }
#line 323 "superhomogeneous.m"
      break;
#line 323 "superhomogeneous.m"
    }
#line 320 "superhomogeneous.m"
}

#line 313 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_2(
#line 313 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 313 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 313 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 313 "superhomogeneous.m"
{
#line 313 "superhomogeneous.m"
  {
#line 313 "superhomogeneous.m"
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
#line 313 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__conv1_GoalCord_4;

#line 313 "superhomogeneous.m"
    {
#line 313 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv1_GoalCord_4);
    }
#line 313 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv1_GoalCord_4));
#line 313 "superhomogeneous.m"
  }
#line 313 "superhomogeneous.m"
}

#line 305 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1(
#line 305 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 305 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 305 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 305 "superhomogeneous.m"
{
#line 305 "superhomogeneous.m"
  {
#line 305 "superhomogeneous.m"
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
#line 305 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

#line 305 "superhomogeneous.m"
    {
#line 305 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
#line 305 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
#line 305 "superhomogeneous.m"
  }
#line 305 "superhomogeneous.m"
}

#line 296 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(
#line 296 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_7,
#line 296 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__TermVar_8,
#line 296 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_9,
#line 296 "superhomogeneous.m"
  MR_Integer hlds__make_hlds__superhomogeneous__BaseGoalSize_10,
#line 296 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_11,
#line 296 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_12)
#line 296 "superhomogeneous.m"
{
#line 300 "superhomogeneous.m"
  {
#line 300 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 300 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__AllFGTI_13;
#line 300 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__TotalSize_14;

#line 301 "superhomogeneous.m"
    {
#line 301 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(hlds__make_hlds__superhomogeneous__ArgExpansions_11, (MR_Integer) 1, &hlds__make_hlds__superhomogeneous__AllFGTI_13, hlds__make_hlds__superhomogeneous__BaseGoalSize_10, &hlds__make_hlds__superhomogeneous__TotalSize_14);
    }
#line 311 "superhomogeneous.m"
#line 311 "superhomogeneous.m"
    switch (hlds__make_hlds__superhomogeneous__AllFGTI_13) {
#line 311 "superhomogeneous.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 311 "superhomogeneous.m"
      case (MR_Integer) 0:
#line 304 "superhomogeneous.m"
        {
#line 304 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30;
#line 304 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__ArgGoalCords_15;
#line 304 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__ArgGoalsCord_16;
#line 304 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__GoalCord_17;
#line 304 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__V_21_21;

#line 305 "superhomogeneous.m"
          {
#line 305 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 305 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
#line 305 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1));
#line 305 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 305 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_7));
#line 305 "superhomogeneous.m"
          }
#line 305 "superhomogeneous.m"
          {
#line 305 "superhomogeneous.m"
            mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_21_21, hlds__make_hlds__superhomogeneous__ArgExpansions_11, &hlds__make_hlds__superhomogeneous__ArgGoalCords_15);
          }
#line 8310 "hlds.make_hlds.superhomogeneous.c"
          hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 307 "superhomogeneous.m"
          {
#line 307 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__ArgGoalsCord_16 = mercury__cord__cord_list_to_cord_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30, hlds__make_hlds__superhomogeneous__ArgGoalCords_15);
          }
#line 309 "superhomogeneous.m"
          {
#line 309 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__GoalCord_17 = mercury__cord__cons_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30, ((MR_Box) (hlds__make_hlds__superhomogeneous__BaseGoal_9)), hlds__make_hlds__superhomogeneous__ArgGoalsCord_16);
          }
#line 310 "superhomogeneous.m"
          {
#line 310 "superhomogeneous.m"
            MR_Word base;
#line 310 "superhomogeneous.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__Expansion_12 = base;
#line 310 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_17));
#line 310 "superhomogeneous.m"
          }
#line 304 "superhomogeneous.m"
        }
#line 311 "superhomogeneous.m"
        break;
#line 311 "superhomogeneous.m"
      case (MR_Integer) 1:
#line 312 "superhomogeneous.m"
        {
#line 312 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35;
#line 312 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__V_20_20;
#line 312 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__ArgGoalCords_23;
#line 312 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__ArgGoalsCord_24;
#line 312 "superhomogeneous.m"
          MR_Word hlds__make_hlds__superhomogeneous__GoalCord_25;

#line 313 "superhomogeneous.m"
          {
#line 313 "superhomogeneous.m"
            mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_4[0], hlds__make_hlds__superhomogeneous__ArgExpansions_11, &hlds__make_hlds__superhomogeneous__ArgGoalCords_23);
          }
#line 8360 "hlds.make_hlds.superhomogeneous.c"
          hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 314 "superhomogeneous.m"
          {
#line 314 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__ArgGoalsCord_24 = mercury__cord__cord_list_to_cord_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35, hlds__make_hlds__superhomogeneous__ArgGoalCords_23);
          }
#line 316 "superhomogeneous.m"
          {
#line 316 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__GoalCord_25 = mercury__cord__cons_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35, ((MR_Box) (hlds__make_hlds__superhomogeneous__BaseGoal_9)), hlds__make_hlds__superhomogeneous__ArgGoalsCord_24);
          }
#line 317 "superhomogeneous.m"
          {
#line 317 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "superhomogeneous.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermVar_8));
#line 317 "superhomogeneous.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TotalSize_14));
#line 317 "superhomogeneous.m"
          }
#line 317 "superhomogeneous.m"
          {
#line 317 "superhomogeneous.m"
            MR_Word base;
#line 317 "superhomogeneous.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "superhomogeneous.m"
            *hlds__make_hlds__superhomogeneous__Expansion_12 = base;
#line 317 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_20_20));
#line 317 "superhomogeneous.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_25));
#line 317 "superhomogeneous.m"
          }
#line 312 "superhomogeneous.m"
        }
#line 311 "superhomogeneous.m"
        break;
#line 311 "superhomogeneous.m"
    }
#line 300 "superhomogeneous.m"
  }
#line 296 "superhomogeneous.m"
}

#line 291 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1(
#line 291 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 291 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 291 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 291 "superhomogeneous.m"
{
#line 291 "superhomogeneous.m"
  {
#line 291 "superhomogeneous.m"
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
#line 291 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

#line 291 "superhomogeneous.m"
    {
#line 291 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
#line 291 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
#line 291 "superhomogeneous.m"
  }
#line 291 "superhomogeneous.m"
}

#line 285 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(
#line 285 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
#line 285 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansions_6,
#line 285 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
#line 285 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8)
#line 285 "superhomogeneous.m"
{
#line 289 "superhomogeneous.m"
  {
#line 289 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 289 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18;
#line 289 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_9;
#line 289 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCords_10;
#line 289 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_11;
#line 289 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_12_12;
#line 289 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_13_13;

#line 290 "superhomogeneous.m"
    {
#line 290 "superhomogeneous.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__BaseGoal_7, &hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
#line 291 "superhomogeneous.m"
    {
#line 291 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 291 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
#line 291 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1));
#line 291 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 291 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_5));
#line 291 "superhomogeneous.m"
    }
#line 291 "superhomogeneous.m"
    {
#line 291 "superhomogeneous.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_12_12, hlds__make_hlds__superhomogeneous__Expansions_6, &hlds__make_hlds__superhomogeneous__ExpansionGoalCords_10);
    }
#line 8491 "hlds.make_hlds.superhomogeneous.c"
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 293 "superhomogeneous.m"
    {
#line 293 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__ExpansionGoals_11 = mercury__cord__cord_list_to_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18, hlds__make_hlds__superhomogeneous__ExpansionGoalCords_10);
    }
#line 294 "superhomogeneous.m"
    {
#line 294 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_13_13 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18, hlds__make_hlds__superhomogeneous__ExpansionGoals_11, hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
#line 294 "superhomogeneous.m"
    {
#line 294 "superhomogeneous.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_13_13, hlds__make_hlds__superhomogeneous__GoalInfo_5, hlds__make_hlds__superhomogeneous__Goal_8);
    }
#line 289 "superhomogeneous.m"
  }
#line 285 "superhomogeneous.m"
}

#line 274 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(
#line 274 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
#line 274 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_6,
#line 274 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
#line 274 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8)
#line 274 "superhomogeneous.m"
{
#line 278 "superhomogeneous.m"
  {
#line 278 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 278 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13;
#line 278 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_9;
#line 278 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCord_10;
#line 278 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_11;
#line 278 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_12_12;

#line 279 "superhomogeneous.m"
    {
#line 279 "superhomogeneous.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__BaseGoal_7, &hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
#line 280 "superhomogeneous.m"
    {
#line 280 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_5, hlds__make_hlds__superhomogeneous__Expansion_6, &hlds__make_hlds__superhomogeneous__ExpansionGoalCord_10);
    }
#line 8551 "hlds.make_hlds.superhomogeneous.c"
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 282 "superhomogeneous.m"
    {
#line 282 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__ExpansionGoals_11 = mercury__cord__list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13, hlds__make_hlds__superhomogeneous__ExpansionGoalCord_10);
    }
#line 283 "superhomogeneous.m"
    {
#line 283 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_12_12 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13, hlds__make_hlds__superhomogeneous__ExpansionGoals_11, hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
#line 283 "superhomogeneous.m"
    {
#line 283 "superhomogeneous.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_12_12, hlds__make_hlds__superhomogeneous__GoalInfo_5, hlds__make_hlds__superhomogeneous__Goal_8);
    }
#line 278 "superhomogeneous.m"
  }
#line 274 "superhomogeneous.m"
}

#line 254 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(
#line 254 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
#line 254 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__2_2)
#line 254 "superhomogeneous.m"
{
#line 257 "superhomogeneous.m"
  {
#line 257 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

#line 257 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 257 "superhomogeneous.m"
      *hlds__make_hlds__superhomogeneous__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 257 "superhomogeneous.m"
    else
#line 258 "superhomogeneous.m"
      {
#line 258 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goal0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
#line 258 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
#line 258 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goal_5;
#line 258 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goals_6;
#line 258 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_3, (MR_Integer) 0)));
#line 258 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_3, (MR_Integer) 1)));
#line 260 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__LHSVar_9;
#line 260 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__RHSVars_16;
#line 261 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__RHS_10;
#line 261 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_11_11;
#line 261 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_12_12;
#line 261 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_13_13;
#line 262 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_14_14;
#line 262 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_15_15;

#line 261 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__GoalExpr_7)) == (MR_mktag((MR_Integer) 1)));
#line 261 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 261 "superhomogeneous.m"
          {
#line 261 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__LHSVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 0)));
#line 261 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 1)));
#line 261 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 2)));
#line 261 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 3)));
#line 261 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 4)));
#line 262 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__RHS_10)) == (MR_mktag((MR_Integer) 1)));
#line 262 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 262 "superhomogeneous.m"
              {
#line 262 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__RHS_10, (MR_Integer) 0)));
#line 262 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__RHS_10, (MR_Integer) 1)));
#line 262 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__RHSVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__RHS_10, (MR_Integer) 2)));
#line 262 "superhomogeneous.m"
              }
#line 261 "superhomogeneous.m"
          }
#line 260 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 264 "superhomogeneous.m"
          {
#line 264 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__NonLocals_17;
#line 264 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_18;
#line 264 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_19_19;

#line 264 "superhomogeneous.m"
            {
#line 264 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LHSVar_9));
#line 264 "superhomogeneous.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__RHSVars_16));
#line 264 "superhomogeneous.m"
            }
#line 264 "superhomogeneous.m"
            {
#line 264 "superhomogeneous.m"
              parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__V_19_19, &hlds__make_hlds__superhomogeneous__NonLocals_17);
            }
#line 265 "superhomogeneous.m"
            {
#line 265 "superhomogeneous.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__superhomogeneous__NonLocals_17, hlds__make_hlds__superhomogeneous__GoalInfo0_8, &hlds__make_hlds__superhomogeneous__GoalInfo_18);
            }
#line 266 "superhomogeneous.m"
            {
#line 266 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__Goal_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 266 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_5, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_7));
#line 266 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_5, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_18));
#line 266 "superhomogeneous.m"
            }
#line 264 "superhomogeneous.m"
          }
#line 260 "superhomogeneous.m"
        else
#line 268 "superhomogeneous.m"
          {
#line 268 "superhomogeneous.m"
            {
#line 268 "superhomogeneous.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.mark_nonlocals_in_ground_term_initial\'/2", (MR_String) "wrong shape goal");
#line 268 "superhomogeneous.m"
              return;
            }
#line 268 "superhomogeneous.m"
          }
#line 270 "superhomogeneous.m"
        {
#line 270 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(hlds__make_hlds__superhomogeneous__Goals0_4, &hlds__make_hlds__superhomogeneous__Goals_6);
        }
#line 258 "superhomogeneous.m"
        {
#line 258 "superhomogeneous.m"
          MR_Word base;
#line 258 "superhomogeneous.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__HeadVar__2_2 = base;
#line 258 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_5));
#line 258 "superhomogeneous.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Goals_6));
#line 258 "superhomogeneous.m"
        }
#line 258 "superhomogeneous.m"
      }
#line 257 "superhomogeneous.m"
  }
#line 254 "superhomogeneous.m"
}

#line 229 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(
#line 229 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
#line 229 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
#line 229 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6)
#line 229 "superhomogeneous.m"
{
#line 233 "superhomogeneous.m"
  {
#line 233 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 233 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__MaybeFGTI_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 0)));
#line 233 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__GoalCord_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 1)));
#line 235 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TermVar_9;
#line 236 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__Size_10;
#line 236 "superhomogeneous.m"
    MR_Integer hlds__make_hlds__superhomogeneous__Threshold_11;
#line 236 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_20_20;

#line 236 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeFGTI_7)) == (MR_mktag((MR_Integer) 1)));
#line 236 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 236 "superhomogeneous.m"
      {
#line 236 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__TermVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 0)));
#line 236 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__Size_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 1)));
#line 237 "superhomogeneous.m"
        {
#line 237 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_20_20 = libs__globals__get_maybe_from_ground_term_threshold_0_f_0();
        }
#line 237 "superhomogeneous.m"
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 237 "superhomogeneous.m"
        if (hlds__make_hlds__superhomogeneous__succeeded)
#line 237 "superhomogeneous.m"
          {
#line 237 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__Threshold_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_20_20, (MR_Integer) 0)));
#line 238 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__Size_10 >= hlds__make_hlds__superhomogeneous__Threshold_11);
#line 237 "superhomogeneous.m"
          }
#line 236 "superhomogeneous.m"
      }
#line 235 "superhomogeneous.m"
    if (hlds__make_hlds__superhomogeneous__succeeded)
#line 240 "superhomogeneous.m"
      {
#line 240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Goals_12;
#line 240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13;
#line 240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__MarkedGoals_14;
#line 240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ConjGoalExpr_15;
#line 240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ConjGoal_16;
#line 240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__Reason_17;
#line 240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18;
#line 240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__ScopeGoal_19;
#line 240 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_21_21;

#line 240 "superhomogeneous.m"
        {
#line 240 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__Goals_12 = mercury__cord__list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_24_24, hlds__make_hlds__superhomogeneous__GoalCord_8);
        }
#line 241 "superhomogeneous.m"
        {
#line 241 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_21_21 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__TermVar_9);
        }
#line 241 "superhomogeneous.m"
        {
#line 241 "superhomogeneous.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__superhomogeneous__V_21_21, hlds__make_hlds__superhomogeneous__GoalInfo_4, &hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13);
        }
#line 243 "superhomogeneous.m"
        {
#line 243 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(hlds__make_hlds__superhomogeneous__Goals_12, &hlds__make_hlds__superhomogeneous__MarkedGoals_14);
        }
#line 244 "superhomogeneous.m"
        {
#line 244 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__ConjGoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 244 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 244 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 244 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_15, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoals_14));
#line 244 "superhomogeneous.m"
        }
#line 245 "superhomogeneous.m"
        {
#line 245 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__ConjGoal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_16, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoalExpr_15));
#line 245 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_16, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13));
#line 245 "superhomogeneous.m"
        }
#line 246 "superhomogeneous.m"
        {
#line 246 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__Reason_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 246 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 246 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_17, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermVar_9));
#line 246 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_17, 2) = ((MR_Box) ((MR_Integer) 0));
#line 246 "superhomogeneous.m"
        }
#line 247 "superhomogeneous.m"
        {
#line 247 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 247 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 247 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Reason_17));
#line 247 "superhomogeneous.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoal_16));
#line 247 "superhomogeneous.m"
        }
#line 248 "superhomogeneous.m"
        {
#line 248 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__ScopeGoal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ScopeGoal_19, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18));
#line 248 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ScopeGoal_19, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13));
#line 248 "superhomogeneous.m"
        }
#line 249 "superhomogeneous.m"
        {
#line 249 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6 = mercury__cord__singleton_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_24_24, ((MR_Box) (hlds__make_hlds__superhomogeneous__ScopeGoal_19)));
        }
#line 240 "superhomogeneous.m"
      }
#line 235 "superhomogeneous.m"
    else
#line 251 "superhomogeneous.m"
      *hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6 = hlds__make_hlds__superhomogeneous__GoalCord_8;
#line 233 "superhomogeneous.m"
  }
#line 229 "superhomogeneous.m"
}

#line 193 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(
#line 193 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
#line 193 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
#line 193 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_6)
#line 193 "superhomogeneous.m"
{
#line 196 "superhomogeneous.m"
  {
#line 196 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 196 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__MaybeFGTI_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 0)));
#line 196 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCord_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 1)));
#line 196 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_9;

#line 198 "superhomogeneous.m"
    {
#line 198 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__ExpansionGoals_9 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__superhomogeneous__ExpansionGoalCord_8);
    }
#line 202 "superhomogeneous.m"
    if ((hlds__make_hlds__superhomogeneous__ExpansionGoals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "superhomogeneous.m"
      {
#line 200 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_34_34;

#line 201 "superhomogeneous.m"
        {
#line 201 "superhomogeneous.m"
          hlds__make_hlds__superhomogeneous__V_34_34 = hlds__make_goal__true_goal_expr_0_f_0();
        }
#line 201 "superhomogeneous.m"
        {
#line 201 "superhomogeneous.m"
          MR_Word base;
#line 201 "superhomogeneous.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 201 "superhomogeneous.m"
          *hlds__make_hlds__superhomogeneous__Goal_6 = base;
#line 201 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_34_34));
#line 201 "superhomogeneous.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_4));
#line 201 "superhomogeneous.m"
        }
#line 200 "superhomogeneous.m"
      }
#line 202 "superhomogeneous.m"
    else
#line 202 "superhomogeneous.m"
      {
#line 202 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ExpansionGoals_9, (MR_Integer) 1)));
#line 202 "superhomogeneous.m"
        MR_Word hlds__make_hlds__superhomogeneous__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ExpansionGoals_9, (MR_Integer) 0)));

#line 202 "superhomogeneous.m"
        if ((hlds__make_hlds__superhomogeneous__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 203 "superhomogeneous.m"
          {
#line 203 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_39_39, (MR_Integer) 0)));
#line 203 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_39_39, (MR_Integer) 1)));
#line 203 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__Context_13;
#line 203 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalInfo_14;

#line 205 "superhomogeneous.m"
            {
#line 205 "superhomogeneous.m"
              hlds__make_hlds__superhomogeneous__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__superhomogeneous__GoalInfo_4);
            }
#line 206 "superhomogeneous.m"
            {
#line 206 "superhomogeneous.m"
              hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_hlds__superhomogeneous__Context_13, hlds__make_hlds__superhomogeneous__ExpansionGoalInfo0_12, &hlds__make_hlds__superhomogeneous__ExpansionGoalInfo_14);
            }
#line 207 "superhomogeneous.m"
            {
#line 207 "superhomogeneous.m"
              MR_Word base;
#line 207 "superhomogeneous.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "superhomogeneous.m"
              *hlds__make_hlds__superhomogeneous__Goal_6 = base;
#line 207 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ExpansionGoalExpr_11));
#line 207 "superhomogeneous.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ExpansionGoalInfo_14));
#line 207 "superhomogeneous.m"
            }
#line 203 "superhomogeneous.m"
          }
#line 202 "superhomogeneous.m"
        else
#line 210 "superhomogeneous.m"
          {
#line 210 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__TermVar_18;
#line 211 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__Size_19;
#line 211 "superhomogeneous.m"
            MR_Integer hlds__make_hlds__superhomogeneous__Threshold_20;
#line 211 "superhomogeneous.m"
            MR_Word hlds__make_hlds__superhomogeneous__V_28_28;

#line 211 "superhomogeneous.m"
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeFGTI_7)) == (MR_mktag((MR_Integer) 1)));
#line 211 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 211 "superhomogeneous.m"
              {
#line 211 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__TermVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 0)));
#line 211 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__Size_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 1)));
#line 212 "superhomogeneous.m"
                {
#line 212 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_28_28 = libs__globals__get_maybe_from_ground_term_threshold_0_f_0();
                }
#line 212 "superhomogeneous.m"
                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 212 "superhomogeneous.m"
                if (hlds__make_hlds__superhomogeneous__succeeded)
#line 212 "superhomogeneous.m"
                  {
#line 212 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__Threshold_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_28_28, (MR_Integer) 0)));
#line 213 "superhomogeneous.m"
                    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__Size_19 >= hlds__make_hlds__superhomogeneous__Threshold_20);
#line 212 "superhomogeneous.m"
                  }
#line 211 "superhomogeneous.m"
              }
#line 210 "superhomogeneous.m"
            if (hlds__make_hlds__superhomogeneous__succeeded)
#line 216 "superhomogeneous.m"
              {
#line 216 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__MarkedGoalInfo_21;
#line 216 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__MarkedGoals_22;
#line 216 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ConjGoalExpr_23;
#line 216 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__ConjGoal_24;
#line 216 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__Reason_25;
#line 216 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_26;
#line 216 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__V_29_29;

#line 215 "superhomogeneous.m"
                {
#line 215 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__V_29_29 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__TermVar_18);
                }
#line 215 "superhomogeneous.m"
                {
#line 215 "superhomogeneous.m"
                  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__superhomogeneous__V_29_29, hlds__make_hlds__superhomogeneous__GoalInfo_4, &hlds__make_hlds__superhomogeneous__MarkedGoalInfo_21);
                }
#line 217 "superhomogeneous.m"
                {
#line 217 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(hlds__make_hlds__superhomogeneous__ExpansionGoals_9, &hlds__make_hlds__superhomogeneous__MarkedGoals_22);
                }
#line 218 "superhomogeneous.m"
                {
#line 218 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__ConjGoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 218 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 218 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_23, 1) = ((MR_Box) ((MR_Integer) 0));
#line 218 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_23, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoals_22));
#line 218 "superhomogeneous.m"
                }
#line 219 "superhomogeneous.m"
                {
#line 219 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__ConjGoal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 219 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_24, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoalExpr_23));
#line 219 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_24, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_21));
#line 219 "superhomogeneous.m"
                }
#line 220 "superhomogeneous.m"
                {
#line 220 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__Reason_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 220 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 220 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_25, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermVar_18));
#line 220 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_25, 2) = ((MR_Box) ((MR_Integer) 0));
#line 220 "superhomogeneous.m"
                }
#line 221 "superhomogeneous.m"
                {
#line 221 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__GoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 221 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 221 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_26, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Reason_25));
#line 221 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_26, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoal_24));
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
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_26));
#line 222 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_21));
#line 222 "superhomogeneous.m"
                }
#line 216 "superhomogeneous.m"
              }
#line 210 "superhomogeneous.m"
            else
#line 224 "superhomogeneous.m"
              {
#line 224 "superhomogeneous.m"
                MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_35;

#line 224 "superhomogeneous.m"
                {
#line 224 "superhomogeneous.m"
                  hlds__make_hlds__superhomogeneous__GoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 224 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 224 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_35, 1) = ((MR_Box) ((MR_Integer) 0));
#line 224 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_35, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ExpansionGoals_9));
#line 224 "superhomogeneous.m"
                }
#line 225 "superhomogeneous.m"
                {
#line 225 "superhomogeneous.m"
                  MR_Word base;
#line 225 "superhomogeneous.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 225 "superhomogeneous.m"
                  *hlds__make_hlds__superhomogeneous__Goal_6 = base;
#line 225 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_35));
#line 225 "superhomogeneous.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_4));
#line 225 "superhomogeneous.m"
                }
#line 224 "superhomogeneous.m"
              }
#line 210 "superhomogeneous.m"
          }
#line 202 "superhomogeneous.m"
      }
#line 196 "superhomogeneous.m"
  }
#line 193 "superhomogeneous.m"
}

#line 92 "superhomogeneous.m"
void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(
#line 92 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Args_9,
#line 92 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Vars_10,
#line 92 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_15,
#line 92 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_16,
#line 92 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_17,
#line 92 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_18,
#line 92 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19,
#line 92 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20)
#line 92 "superhomogeneous.m"
{
#line 1299 "superhomogeneous.m"
  {
#line 1299 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 1299 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__RevVars_14;

#line 1302 "superhomogeneous.m"
    {
#line 1302 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_9_p_0(hlds__make_hlds__superhomogeneous__Args_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__superhomogeneous__RevVars_14, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_16, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_17, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_18, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20);
    }
#line 1304 "superhomogeneous.m"
    {
#line 1304 "superhomogeneous.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0], hlds__make_hlds__superhomogeneous__RevVars_14, hlds__make_hlds__superhomogeneous__Vars_10);
    }
#line 1299 "superhomogeneous.m"
  }
#line 92 "superhomogeneous.m"
}

#line 73 "superhomogeneous.m"
void MR_CALL 
hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(
#line 73 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__LHS0_20,
#line 73 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_21,
#line 73 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 73 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_23,
#line 73 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_24,
#line 73 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Purity_25,
#line 73 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_26,
#line 73 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36,
#line 73 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37,
#line 73 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38,
#line 73 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39,
#line 73 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40,
#line 73 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41,
#line 73 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42,
#line 73 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43,
#line 73 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44,
#line 73 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45,
#line 73 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46,
#line 73 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47)
#line 73 "superhomogeneous.m"
{
#line 163 "superhomogeneous.m"
  {
#line 163 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 163 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__Expansion_34;
#line 163 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_35;

#line 173 "superhomogeneous.m"
    {
#line 173 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__LHS0_20, hlds__make_hlds__superhomogeneous__RHS0_21, hlds__make_hlds__superhomogeneous__Context_22, hlds__make_hlds__superhomogeneous__MainContext_23, hlds__make_hlds__superhomogeneous__SubContext_24, hlds__make_hlds__superhomogeneous__Purity_25, &hlds__make_hlds__superhomogeneous__Expansion_34, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47);
    }
#line 176 "superhomogeneous.m"
    {
#line 176 "superhomogeneous.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_22, &hlds__make_hlds__superhomogeneous__GoalInfo_35);
    }
#line 177 "superhomogeneous.m"
    {
#line 177 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_35, hlds__make_hlds__superhomogeneous__Expansion_34, hlds__make_hlds__superhomogeneous__Goal_26);
    }
#line 163 "superhomogeneous.m"
  }
#line 73 "superhomogeneous.m"
}

#line 291 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0_1(
#line 291 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 291 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 291 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 291 "superhomogeneous.m"
{
#line 291 "superhomogeneous.m"
  {
#line 291 "superhomogeneous.m"
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
#line 291 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

#line 291 "superhomogeneous.m"
    {
#line 291 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
#line 291 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
#line 291 "superhomogeneous.m"
  }
#line 291 "superhomogeneous.m"
}

#line 65 "superhomogeneous.m"
void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(
#line 65 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVars_19,
#line 65 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XArgTerms0_20,
#line 65 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContexts_21,
#line 65 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
#line 65 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Goal0_23,
#line 65 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_24,
#line 65 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_35,
#line 65 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_36,
#line 65 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_37,
#line 65 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_38,
#line 65 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_39,
#line 65 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_40,
#line 65 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_41,
#line 65 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_42,
#line 65 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_43,
#line 65 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_44,
#line 65 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_45,
#line 65 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_46)
#line 65 "superhomogeneous.m"
{
#line 151 "superhomogeneous.m"
  {
#line 151 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 151 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70;
#line 151 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__XArgTerms_31;
#line 151 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__Expansions_32;
#line 151 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__GoalInfo0_34;
#line 151 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47;
#line 151 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48;
#line 151 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49;
#line 151 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_61;
#line 151 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCords_62;
#line 151 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_63;
#line 151 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_64_64;
#line 151 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_65_65;
#line 157 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_33_33;

#line 152 "superhomogeneous.m"
    {
#line 152 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__XArgTerms0_20, &hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_39, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_35, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49);
    }
#line 154 "superhomogeneous.m"
    {
#line 154 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(hlds__make_hlds__superhomogeneous__XVars_19, hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__ArgContexts_21, hlds__make_hlds__superhomogeneous__Context_22, &hlds__make_hlds__superhomogeneous__Expansions_32, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_46);
    }
#line 157 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 0)));
#line 157 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__GoalInfo0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 1)));
#line 290 "superhomogeneous.m"
    {
#line 290 "superhomogeneous.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__Goal0_23, &hlds__make_hlds__superhomogeneous__BaseGoals_61);
    }
#line 291 "superhomogeneous.m"
    {
#line 291 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 291 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
#line 291 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0_1));
#line 291 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 291 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo0_34));
#line 291 "superhomogeneous.m"
    }
#line 291 "superhomogeneous.m"
    {
#line 291 "superhomogeneous.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_64_64, hlds__make_hlds__superhomogeneous__Expansions_32, &hlds__make_hlds__superhomogeneous__ExpansionGoalCords_62);
    }
#line 9452 "hlds.make_hlds.superhomogeneous.c"
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 293 "superhomogeneous.m"
    {
#line 293 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__ExpansionGoals_63 = mercury__cord__cord_list_to_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70, hlds__make_hlds__superhomogeneous__ExpansionGoalCords_62);
    }
#line 294 "superhomogeneous.m"
    {
#line 294 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_65_65 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70, hlds__make_hlds__superhomogeneous__ExpansionGoals_63, hlds__make_hlds__superhomogeneous__BaseGoals_61);
    }
#line 294 "superhomogeneous.m"
    {
#line 294 "superhomogeneous.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_65_65, hlds__make_hlds__superhomogeneous__GoalInfo0_34, hlds__make_hlds__superhomogeneous__Goal_24);
    }
#line 151 "superhomogeneous.m"
  }
#line 65 "superhomogeneous.m"
}

#line 291 "superhomogeneous.m"
static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0_1(
#line 291 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
#line 291 "superhomogeneous.m"
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
#line 291 "superhomogeneous.m"
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
#line 291 "superhomogeneous.m"
{
#line 291 "superhomogeneous.m"
  {
#line 291 "superhomogeneous.m"
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
#line 291 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

#line 291 "superhomogeneous.m"
    {
#line 291 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
#line 291 "superhomogeneous.m"
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
#line 291 "superhomogeneous.m"
  }
#line 291 "superhomogeneous.m"
}

#line 58 "superhomogeneous.m"
void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(
#line 58 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XVars_19,
#line 58 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__XArgTerms0_20,
#line 58 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Context_21,
#line 58 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__ArgContext_22,
#line 58 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__Goal0_23,
#line 58 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_24,
#line 58 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_35,
#line 58 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_36,
#line 58 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_37,
#line 58 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_38,
#line 58 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_39,
#line 58 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_40,
#line 58 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_41,
#line 58 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_42,
#line 58 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_43,
#line 58 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_44,
#line 58 "superhomogeneous.m"
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_45,
#line 58 "superhomogeneous.m"
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_46)
#line 58 "superhomogeneous.m"
{
#line 139 "superhomogeneous.m"
  {
#line 139 "superhomogeneous.m"
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
#line 139 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71;
#line 139 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__XArgTerms_31;
#line 139 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__Expansions_32;
#line 139 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__GoalInfo0_34;
#line 139 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47;
#line 139 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48;
#line 139 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49;
#line 139 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_62;
#line 139 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCords_63;
#line 139 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_64;
#line 139 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_65_65;
#line 139 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_66_66;
#line 145 "superhomogeneous.m"
    MR_Word hlds__make_hlds__superhomogeneous__V_33_33;

#line 140 "superhomogeneous.m"
    {
#line 140 "superhomogeneous.m"
      hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__XArgTerms0_20, &hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_39, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_35, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49);
    }
#line 142 "superhomogeneous.m"
    {
#line 142 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__XVars_19, hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__Context_21, hlds__make_hlds__superhomogeneous__ArgContext_22, (MR_Integer) 1, &hlds__make_hlds__superhomogeneous__Expansions_32, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_46);
    }
#line 145 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 0)));
#line 145 "superhomogeneous.m"
    hlds__make_hlds__superhomogeneous__GoalInfo0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 1)));
#line 290 "superhomogeneous.m"
    {
#line 290 "superhomogeneous.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__Goal0_23, &hlds__make_hlds__superhomogeneous__BaseGoals_62);
    }
#line 291 "superhomogeneous.m"
    {
#line 291 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 291 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
#line 291 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0_1));
#line 291 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 291 "superhomogeneous.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo0_34));
#line 291 "superhomogeneous.m"
    }
#line 291 "superhomogeneous.m"
    {
#line 291 "superhomogeneous.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_65_65, hlds__make_hlds__superhomogeneous__Expansions_32, &hlds__make_hlds__superhomogeneous__ExpansionGoalCords_63);
    }
#line 9614 "hlds.make_hlds.superhomogeneous.c"
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 293 "superhomogeneous.m"
    {
#line 293 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__ExpansionGoals_64 = mercury__cord__cord_list_to_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71, hlds__make_hlds__superhomogeneous__ExpansionGoalCords_63);
    }
#line 294 "superhomogeneous.m"
    {
#line 294 "superhomogeneous.m"
      hlds__make_hlds__superhomogeneous__V_66_66 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71, hlds__make_hlds__superhomogeneous__ExpansionGoals_64, hlds__make_hlds__superhomogeneous__BaseGoals_62);
    }
#line 294 "superhomogeneous.m"
    {
#line 294 "superhomogeneous.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_66_66, hlds__make_hlds__superhomogeneous__GoalInfo0_34, hlds__make_hlds__superhomogeneous__Goal_24);
    }
#line 139 "superhomogeneous.m"
  }
#line 58 "superhomogeneous.m"
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
