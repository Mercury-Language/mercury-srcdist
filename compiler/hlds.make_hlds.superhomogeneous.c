/*
** Automatically generated from `superhomogeneous.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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
#include "libs.compiler_util.mih"
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
#include "parse_tree.prog_io_type_name.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_1[1];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_2[3];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_arg_context_0[3];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0[3];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0[3];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_expansion_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_expansion_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_expansion_0[1];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_expansion_0[1];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_maybe_fgti_var_size_0_1[2];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_maybe_fgti_var_size_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_fgti_var_size_0[2];

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_fgti_var_size_0[2];

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0_10001(
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0_10001(
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0_10001(
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0_10001(
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0_10001(
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0_10001(
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
  MR_String hlds__make_hlds__superhomogeneous__YAtom_24,
  MR_Word hlds__make_hlds__superhomogeneous__YArgs_25,
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
  MR_Word hlds__make_hlds__superhomogeneous__YFunctor0_24,
  MR_Word hlds__make_hlds__superhomogeneous__YArgTerms0_25,
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_88,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_92,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_98,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__XVar_21,
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_41,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_42,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_43,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_44,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_45,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_46,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_48,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_51,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_52);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__XTerm_21,
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__LHSVar_21,
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__LHS0_21,
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_37,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_39,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_40,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_41,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_42,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_44,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_45,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_46,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_47,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_48);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__XVar_20,
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_21,
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
  MR_Word hlds__make_hlds__superhomogeneous__ArgContext_23,
  MR_Integer hlds__make_hlds__superhomogeneous__ArgNum_25,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_26,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__XVars_19,
  MR_Word hlds__make_hlds__superhomogeneous__YTerms_20,
  MR_Word hlds__make_hlds__superhomogeneous__ArgContexts_21,
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansions_24,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__5_5,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__6_6,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__Arg_6,
  MR_Word * hlds__make_hlds__superhomogeneous__Var_7,
  MR_Word hlds__make_hlds__superhomogeneous__Vars0_8,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_9_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_3,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_5,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_7,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_9);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__ModuleInfo_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__5_5,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__6_6,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__X_26,
  MR_Word hlds__make_hlds__superhomogeneous__UnificationPurity_27,
  MR_Word hlds__make_hlds__superhomogeneous__LambdaPurity_28,
  MR_Word hlds__make_hlds__superhomogeneous__Groundness_29,
  MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_30,
  MR_Word hlds__make_hlds__superhomogeneous__Args0_32,
  MR_Word hlds__make_hlds__superhomogeneous__Modes_33,
  MR_Word hlds__make_hlds__superhomogeneous__Det_34,
  MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_35,
  MR_Word hlds__make_hlds__superhomogeneous__Context_36,
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_37,
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_38,
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_39,
  MR_Word hlds__make_hlds__superhomogeneous__OutsideSVarState_40,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__Modes0_8,
  MR_Word * hlds__make_hlds__superhomogeneous__Modes_9,
  MR_Word hlds__make_hlds__superhomogeneous__Context_10,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__convert_big_integer_functor_5_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__Functor0_6,
  MR_Word * hlds__make_hlds__superhomogeneous__Functor_7,
  MR_Word hlds__make_hlds__superhomogeneous__Context_8,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word * hlds__make_hlds__superhomogeneous__GoalCord_4);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_3,
  MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4,
  MR_Integer * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_5);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_2(
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1(
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_7,
  MR_Word hlds__make_hlds__superhomogeneous__TermVar_8,
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_9,
  MR_Integer hlds__make_hlds__superhomogeneous__BaseGoalSize_10,
  MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_11,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_12);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1(
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
  MR_Word hlds__make_hlds__superhomogeneous__Expansions_6,
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_6,
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
  MR_Word * hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_6);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0_1(
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0_1(
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2);


static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_1[8][2];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_2[1][6];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_4[1][3];

static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_scalar_common_5[1][1];


/* sealed */ struct hlds__make_hlds__superhomogeneous__vector_common_type_6_0_s {
  const MR_String hlds__make_hlds__superhomogeneous__vector_common_type_6_0__vct_6_f_0;
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



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

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

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0
};

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

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_arg_context_0_2[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_main_context_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0
};

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

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2
};

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

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0[3] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

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

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_expansion_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_maybe_fgti_var_size_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

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

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_ptag_ordered_expansion_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_expansion_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_expansion_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_expansion_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_expansion_0[1] = {
  (MR_Integer) 0
};

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

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__field_types_maybe_fgti_var_size_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__superhomogeneous__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

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

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_0[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_stag_ordered_maybe_fgti_var_size_0_1[1] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1
};

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

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_name_ordered_maybe_fgti_var_size_0[2] = {
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_1,
  &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__du_functor_desc_maybe_fgti_var_size_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__functor_number_map_maybe_fgti_var_size_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

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

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0_10001(
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

    {
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2));
    }
    return hlds__make_hlds__superhomogeneous__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0_10001(
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0(&hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_3));
    }
    *hlds__make_hlds__superhomogeneous__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0_10001(
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

    {
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2));
    }
    return hlds__make_hlds__superhomogeneous__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0_10001(
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(&hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_3));
    }
    *hlds__make_hlds__superhomogeneous__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0_10001(
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

    {
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2));
    }
    return hlds__make_hlds__superhomogeneous__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0_10001(
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_2,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(&hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_2), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_3));
    }
    *hlds__make_hlds__superhomogeneous__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
  MR_String hlds__make_hlds__superhomogeneous__YAtom_24,
  MR_Word hlds__make_hlds__superhomogeneous__YArgs_25,
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YArgs_25)) == (MR_mktag((MR_Integer) 1)));
    MR_Word hlds__make_hlds__superhomogeneous__V_702_702;
    MR_Word hlds__make_hlds__superhomogeneous__V_703_703;
    MR_Word hlds__make_hlds__superhomogeneous__V_704_704;
    MR_Word hlds__make_hlds__superhomogeneous__V_705_705;
    MR_Integer hlds__make_hlds__superhomogeneous__slot_0;
    MR_String hlds__make_hlds__superhomogeneous__str_1;

    if (hlds__make_hlds__superhomogeneous__succeeded)
      {
        hlds__make_hlds__superhomogeneous__V_703_703 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgs_25, (MR_Integer) 0)));
        hlds__make_hlds__superhomogeneous__V_702_702 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgs_25, (MR_Integer) 1)));
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_702_702)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__superhomogeneous__succeeded)
          {
            hlds__make_hlds__superhomogeneous__V_705_705 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_702_702, (MR_Integer) 0)));
            hlds__make_hlds__superhomogeneous__V_704_704 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_702_702, (MR_Integer) 1)));
            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_704_704 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                /* hashed string jump switch */
                /* compute the hash value of the input string */
                hlds__make_hlds__superhomogeneous__slot_0 = ((MR_hash_string5(hlds__make_hlds__superhomogeneous__YAtom_24)) & (MR_Integer) 15);
                /* no collisions; no hash chain loop */
                /* lookup the string for this hash slot */
                hlds__make_hlds__superhomogeneous__str_1 = ((&hlds__make_hlds__superhomogeneous_vector_common_6[0 + hlds__make_hlds__superhomogeneous__slot_0]))->hlds__make_hlds__superhomogeneous__vector_common_type_6_0__vct_6_f_0;
                /* did we find a match? */
                if ((((hlds__make_hlds__superhomogeneous__str_1 != NULL)) && ((strcmp(hlds__make_hlds__superhomogeneous__str_1, hlds__make_hlds__superhomogeneous__YAtom_24) == 0))))
                  {
                    /* we found a match; dispatch to the corresponding code */
                    switch (hlds__make_hlds__superhomogeneous__slot_0) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          /* case "@" */
                          {
                            MR_Word hlds__make_hlds__superhomogeneous__ExpansionL_49;
                            MR_Word hlds__make_hlds__superhomogeneous__ExpansionR_50;
                            MR_Word hlds__make_hlds__superhomogeneous__GoalCordL_52;
                            MR_Word hlds__make_hlds__superhomogeneous__GoalCordR_54;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_291_291;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_292_292;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_293_293;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_294_294;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_295_295;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_296_296;
                            MR_Word hlds__make_hlds__superhomogeneous__V_304_304;
                            MR_Word hlds__make_hlds__superhomogeneous__V_51_51;
                            MR_Word hlds__make_hlds__superhomogeneous__V_53_53;

                            {
                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_703_703, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ExpansionL_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_291_291, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_292_292, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_293_293, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_294_294, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_295_295, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_296_296);
                            }
                            {
                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_705_705, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ExpansionR_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_291_291, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_292_292, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_293_293, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_294_294, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_295_295, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_296_296, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                            }
                            hlds__make_hlds__superhomogeneous__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionL_49, (MR_Integer) 0)));
                            hlds__make_hlds__superhomogeneous__GoalCordL_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionL_49, (MR_Integer) 1)));
                            hlds__make_hlds__superhomogeneous__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionR_50, (MR_Integer) 0)));
                            hlds__make_hlds__superhomogeneous__GoalCordR_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ExpansionR_50, (MR_Integer) 1)));
                            {
                              hlds__make_hlds__superhomogeneous__V_304_304 = mercury__cord__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__superhomogeneous__GoalCordL_52, hlds__make_hlds__superhomogeneous__GoalCordR_54);
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_304_304));
                            }
                            hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          /* case "else" */
                          {
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_558;
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_559;
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_560;
                            MR_Word hlds__make_hlds__superhomogeneous__V_243_243;
                            MR_String hlds__make_hlds__superhomogeneous__V_244_244;
                            MR_Word hlds__make_hlds__superhomogeneous__V_245_245;
                            MR_Word hlds__make_hlds__superhomogeneous__V_246_246;
                            MR_Word hlds__make_hlds__superhomogeneous__V_247_247;
                            MR_String hlds__make_hlds__superhomogeneous__V_248_248;
                            MR_Word hlds__make_hlds__superhomogeneous__V_249_249;
                            MR_Word hlds__make_hlds__superhomogeneous__V_250_250;
                            MR_Word hlds__make_hlds__superhomogeneous__V_251_251;
                            MR_Word hlds__make_hlds__superhomogeneous__V_252_252;
                            MR_Word hlds__make_hlds__superhomogeneous__CondTerm_498;
                            MR_Word hlds__make_hlds__superhomogeneous__MaybeVarsCond_499;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_528;
                            MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_557;
                            MR_Word hlds__make_hlds__superhomogeneous__CondTerm0_633;
                            MR_Word hlds__make_hlds__superhomogeneous__ThenTerm0_634;
                            MR_Word hlds__make_hlds__superhomogeneous__V_60_60;
                            MR_Word hlds__make_hlds__superhomogeneous__V_59_59;

                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_703_703)) == (MR_mktag((MR_Integer) 0)));
                            if (hlds__make_hlds__superhomogeneous__succeeded)
                              {
                                hlds__make_hlds__superhomogeneous__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 0)));
                                hlds__make_hlds__superhomogeneous__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 1)));
                                hlds__make_hlds__superhomogeneous__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 2)));
                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_243_243)) == (MR_mktag((MR_Integer) 0)));
                                if (hlds__make_hlds__superhomogeneous__succeeded)
                                  {
                                    hlds__make_hlds__superhomogeneous__V_244_244 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_243_243, (MR_Integer) 0)));
                                    hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_244_244, (MR_String) "if") == 0);
                                    if (hlds__make_hlds__superhomogeneous__succeeded)
                                      {
                                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_245_245)) == (MR_mktag((MR_Integer) 1)));
                                        if (hlds__make_hlds__superhomogeneous__succeeded)
                                          {
                                            hlds__make_hlds__superhomogeneous__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_245_245, (MR_Integer) 0)));
                                            hlds__make_hlds__superhomogeneous__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_245_245, (MR_Integer) 1)));
                                            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (hlds__make_hlds__superhomogeneous__succeeded)
                                              {
                                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_246_246)) == (MR_mktag((MR_Integer) 0)));
                                                if (hlds__make_hlds__superhomogeneous__succeeded)
                                                  {
                                                    hlds__make_hlds__superhomogeneous__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_246_246, (MR_Integer) 0)));
                                                    hlds__make_hlds__superhomogeneous__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_246_246, (MR_Integer) 1)));
                                                    hlds__make_hlds__superhomogeneous__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_246_246, (MR_Integer) 2)));
                                                    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_247_247)) == (MR_mktag((MR_Integer) 0)));
                                                    if (hlds__make_hlds__superhomogeneous__succeeded)
                                                      {
                                                        hlds__make_hlds__superhomogeneous__V_248_248 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_247_247, (MR_Integer) 0)));
                                                        hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_248_248, (MR_String) "then") == 0);
                                                        if (hlds__make_hlds__superhomogeneous__succeeded)
                                                          {
                                                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_249_249)) == (MR_mktag((MR_Integer) 1)));
                                                            if (hlds__make_hlds__superhomogeneous__succeeded)
                                                              {
                                                                hlds__make_hlds__superhomogeneous__CondTerm0_633 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_249_249, (MR_Integer) 0)));
                                                                hlds__make_hlds__superhomogeneous__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_249_249, (MR_Integer) 1)));
                                                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_250_250)) == (MR_mktag((MR_Integer) 1)));
                                                                if (hlds__make_hlds__superhomogeneous__succeeded)
                                                                  {
                                                                    hlds__make_hlds__superhomogeneous__ThenTerm0_634 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_250_250, (MR_Integer) 0)));
                                                                    hlds__make_hlds__superhomogeneous__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_250_250, (MR_Integer) 1)));
                                                                    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_251_251 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                    if (hlds__make_hlds__superhomogeneous__succeeded)
                                                                      {
                                                                        hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_558 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                                                        hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_559 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                                                                        {
                                                                          mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_558, hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_559, hlds__make_hlds__superhomogeneous__CondTerm0_633, &hlds__make_hlds__superhomogeneous__CondTerm_498);
                                                                        }
                                                                        hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_560 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                                                                        {
                                                                          hlds__make_hlds__superhomogeneous__ContextPieces_557 = mercury__cord__init_0_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_560);
                                                                        }
                                                                        {
                                                                          parse_tree__prog_io_goal__parse_some_vars_goal_5_p_0(hlds__make_hlds__superhomogeneous__CondTerm_498, hlds__make_hlds__superhomogeneous__ContextPieces_557, &hlds__make_hlds__superhomogeneous__MaybeVarsCond_499, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_528);
                                                                        }
                                                                        if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeVarsCond_499)) == (MR_mktag((MR_Integer) 0))))
                                                                          {
                                                                            MR_Word hlds__make_hlds__superhomogeneous__VarsCondSpecs_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeVarsCond_499, (MR_Integer) 0)));
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_380_380;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_381_381;

                                                                            {
                                                                              *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__VarsCondSpecs_378, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__superhomogeneous__V_381_381 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_27);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__superhomogeneous__V_380_380 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_381_381)));
                                                                            }
                                                                            {
                                                                              MR_Word base;
                                                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                                              *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
                                                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_380_380));
                                                                            }
                                                                            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135;
                                                                            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137;
                                                                            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_528;
                                                                            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
                                                                            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143;
                                                                          }
                                                                        else
                                                                          {
                                                                            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_365_436;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__Vars_384 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_499, (MR_Integer) 0)));
                                                                            MR_Word hlds__make_hlds__superhomogeneous__StateVars_385 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_499, (MR_Integer) 1)));
                                                                            MR_Word hlds__make_hlds__superhomogeneous__CondParseTree_386 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_499, (MR_Integer) 2)));
                                                                            MR_Word hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_388;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__EmptySubst_389;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__CondGoal_390;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_391;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ThenTerm_392;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_393;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ThenExpansion_394;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_395;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ThenGoalInfo_396;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ThenGoal0_397;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterThenSVarState_398;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ElseTerm_399;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState0_400;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ElseExpansion_401;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState_402;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ElseGoalInfo_403;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ElseGoal0_404;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ThenGoal_405;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__ElseGoal_406;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_408;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_409;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__Goal_410;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_258_411;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_260_413;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_261_414;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_262_415;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_263_416;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_417;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_265_418;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_266_419;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_267_420;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_268_421;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_269_422;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_270_423;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_271_424;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_425_425;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_273_426;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_274_427;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_275_428;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_276_429;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_279_430;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_431_431;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_433_433;
                                                                            MR_Word hlds__make_hlds__superhomogeneous__V_435_435;

                                                                            {
                                                                              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_528, hlds__make_hlds__superhomogeneous__StateVars_385, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_388, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_258_411);
                                                                            }
                                                                            hlds__make_hlds__superhomogeneous__TypeInfo_365_436 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
                                                                            {
                                                                              mercury__map__init_1_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_365_436, hlds__make_hlds__superhomogeneous__TypeInfo_365_436, &hlds__make_hlds__superhomogeneous__EmptySubst_389);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__CondParseTree_386, hlds__make_hlds__superhomogeneous__EmptySubst_389, &hlds__make_hlds__superhomogeneous__CondGoal_390, hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_388, &hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_391, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_260_413, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_528, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_261_414, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_262_415, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_263_416, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_258_411, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_417);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__ThenTerm0_634, &hlds__make_hlds__superhomogeneous__ThenTerm_392, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_261_414, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_265_418, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_391, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_393, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_417, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_266_419);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ThenTerm_392, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ThenExpansion_394, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_393, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_395, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_260_413, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_267_420, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_265_418, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_268_421, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_262_415, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_269_422, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_263_416, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_270_423, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_266_419, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_271_424);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__superhomogeneous__V_425_425 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_558, hlds__make_hlds__superhomogeneous__ThenTerm_392);
                                                                            }
                                                                            {
                                                                              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_425_425, &hlds__make_hlds__superhomogeneous__ThenGoalInfo_396);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ThenGoalInfo_396, hlds__make_hlds__superhomogeneous__ThenExpansion_394, &hlds__make_hlds__superhomogeneous__ThenGoal0_397);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__superhomogeneous__StateVars_385, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_395, &hlds__make_hlds__superhomogeneous__AfterThenSVarState_398);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_705_705, &hlds__make_hlds__superhomogeneous__ElseTerm_399, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_268_421, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_273_426, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__AfterElseSVarState0_400, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_271_424, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_274_427);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ElseTerm_399, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ElseExpansion_401, hlds__make_hlds__superhomogeneous__AfterElseSVarState0_400, &hlds__make_hlds__superhomogeneous__AfterElseSVarState_402, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_267_420, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_275_428, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_273_426, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_276_429, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_269_422, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_270_423, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_274_427, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_279_430);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__superhomogeneous__V_431_431 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_558, hlds__make_hlds__superhomogeneous__ElseTerm_399);
                                                                            }
                                                                            {
                                                                              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_431_431, &hlds__make_hlds__superhomogeneous__ElseGoalInfo_403);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ElseGoalInfo_403, hlds__make_hlds__superhomogeneous__ElseExpansion_401, &hlds__make_hlds__superhomogeneous__ElseGoal0_404);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__StateVars_385, hlds__make_hlds__superhomogeneous__ThenGoal0_397, &hlds__make_hlds__superhomogeneous__ThenGoal_405, hlds__make_hlds__superhomogeneous__ElseGoal0_404, &hlds__make_hlds__superhomogeneous__ElseGoal_406, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_391, hlds__make_hlds__superhomogeneous__AfterThenSVarState_398, hlds__make_hlds__superhomogeneous__AfterElseSVarState_402, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_276_429, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_275_428, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_279_430, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__superhomogeneous__V_433_433 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeInfo_365_436, hlds__make_hlds__superhomogeneous__StateVars_385, hlds__make_hlds__superhomogeneous__Vars_384);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__superhomogeneous__GoalExpr_408 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                                                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_408, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                                                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_408, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_433_433));
                                                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_408, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__CondGoal_390));
                                                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_408, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ThenGoal_405));
                                                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_408, 4) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ElseGoal_406));
                                                                            }
                                                                            {
                                                                              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_409);
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__superhomogeneous__Goal_410 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                                              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_410, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_408));
                                                                              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_410, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_409));
                                                                            }
                                                                            {
                                                                              hlds__make_hlds__superhomogeneous__V_435_435 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_410)));
                                                                            }
                                                                            {
                                                                              MR_Word base;
                                                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                                              *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
                                                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_435_435));
                                                                            }
                                                                          }
                                                                        hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
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
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          /* case "-->" */
                          {
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_371_371 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_372_372 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_373_373;
                            MR_Word hlds__make_hlds__superhomogeneous__PredTerm1_118;
                            MR_Word hlds__make_hlds__superhomogeneous__DCGLambdaPurity_119;
                            MR_Word hlds__make_hlds__superhomogeneous__PredTerm_120;
                            MR_Word hlds__make_hlds__superhomogeneous__Groundness_121;
                            MR_Word hlds__make_hlds__superhomogeneous__Vars0_123;
                            MR_Word hlds__make_hlds__superhomogeneous__Modes0_124;
                            MR_Word hlds__make_hlds__superhomogeneous__Det_125;
                            MR_Word hlds__make_hlds__superhomogeneous__Modes_126;
                            MR_Word hlds__make_hlds__superhomogeneous__GoalTerm_127;
                            MR_Word hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128;
                            MR_Word hlds__make_hlds__superhomogeneous__DCG0_129;
                            MR_Word hlds__make_hlds__superhomogeneous__DCGn_130;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_151_151;
                            MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_350;

                            {
                              mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_371_371, hlds__make_hlds__superhomogeneous__TypeCtorInfo_372_372, hlds__make_hlds__superhomogeneous__V_703_703, &hlds__make_hlds__superhomogeneous__PredTerm1_118);
                            }
                            {
                              parse_tree__prog_io_util__parse_purity_annotation_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_372_372, hlds__make_hlds__superhomogeneous__PredTerm1_118, &hlds__make_hlds__superhomogeneous__DCGLambdaPurity_119, &hlds__make_hlds__superhomogeneous__PredTerm_120);
                            }
                            {
                              hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_goal__parse_dcg_pred_expression_6_p_0(hlds__make_hlds__superhomogeneous__PredTerm_120, &hlds__make_hlds__superhomogeneous__Groundness_121, &hlds__make_hlds__superhomogeneous__Vars0_123, &hlds__make_hlds__superhomogeneous__Modes0_124, &hlds__make_hlds__superhomogeneous__Det_125);
                            }
                            if (hlds__make_hlds__superhomogeneous__succeeded)
                              {
                                {
                                  hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(hlds__make_hlds__superhomogeneous__Modes0_124, &hlds__make_hlds__superhomogeneous__Modes_126, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150);
                                }
                                {
                                  mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_371_371, hlds__make_hlds__superhomogeneous__TypeCtorInfo_372_372, hlds__make_hlds__superhomogeneous__V_705_705, &hlds__make_hlds__superhomogeneous__GoalTerm_127);
                                }
                                hlds__make_hlds__superhomogeneous__TypeCtorInfo_373_373 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                                {
                                  hlds__make_hlds__superhomogeneous__ContextPieces_350 = mercury__cord__init_0_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_373_373);
                                }
                                {
                                  parse_tree__prog_io_dcg__parse_dcg_pred_goal_7_p_0(hlds__make_hlds__superhomogeneous__GoalTerm_127, hlds__make_hlds__superhomogeneous__ContextPieces_350, &hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128, &hlds__make_hlds__superhomogeneous__DCG0_129, &hlds__make_hlds__superhomogeneous__DCGn_130, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_151_151);
                                }
                                if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128)) == (MR_mktag((MR_Integer) 0))))
                                  {
                                    MR_Word hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128, (MR_Integer) 0)));
                                    MR_Word hlds__make_hlds__superhomogeneous__V_154_154;
                                    MR_Word hlds__make_hlds__superhomogeneous__V_155_155;

                                    {
                                      *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_134, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150);
                                    }
                                    {
                                      hlds__make_hlds__superhomogeneous__V_155_155 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_27);
                                    }
                                    {
                                      hlds__make_hlds__superhomogeneous__V_154_154 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_155_155)));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                      *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_154_154));
                                    }
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137;
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_151_151;
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
                                    *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149;
                                  }
                                else
                                  {
                                    MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_128, (MR_Integer) 0)));
                                    MR_Word hlds__make_hlds__superhomogeneous__Vars1_132;
                                    MR_Word hlds__make_hlds__superhomogeneous__Goal0_133;
                                    MR_Word hlds__make_hlds__superhomogeneous__V_156_156;
                                    MR_Word hlds__make_hlds__superhomogeneous__V_157_157;
                                    MR_Word hlds__make_hlds__superhomogeneous__V_158_158;
                                    MR_Word hlds__make_hlds__superhomogeneous__V_159_159;
                                    MR_Word hlds__make_hlds__superhomogeneous__V_168_168;
                                    MR_Word hlds__make_hlds__superhomogeneous__Goal_348;

                                    {
                                      hlds__make_hlds__superhomogeneous__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__DCG0_129));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_157_157, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Context_27));
                                    }
                                    {
                                      hlds__make_hlds__superhomogeneous__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__DCGn_130));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Context_27));
                                    }
                                    {
                                      hlds__make_hlds__superhomogeneous__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_159_159));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    }
                                    {
                                      hlds__make_hlds__superhomogeneous__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_157_157));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_156_156, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_158_158));
                                    }
                                    {
                                      hlds__make_hlds__superhomogeneous__Vars1_132 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2], hlds__make_hlds__superhomogeneous__Vars0_123, hlds__make_hlds__superhomogeneous__V_156_156);
                                    }
                                    {
                                      hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__DCGLambdaPurity_119, hlds__make_hlds__superhomogeneous__Groundness_121, (MR_Integer) 0, hlds__make_hlds__superhomogeneous__Vars1_132, hlds__make_hlds__superhomogeneous__Modes_126, hlds__make_hlds__superhomogeneous__Det_125, hlds__make_hlds__superhomogeneous__ParsedGoal_131, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, &hlds__make_hlds__superhomogeneous__Goal0_133, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_151_151, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_149_149, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_150_150, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                    }
                                    {
                                      hlds__hlds_goal__goal_set_purity_3_p_0(hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__Goal0_133, &hlds__make_hlds__superhomogeneous__Goal_348);
                                    }
                                    {
                                      hlds__make_hlds__superhomogeneous__V_168_168 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_348)));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                      *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_168_168));
                                    }
                                  }
                                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135;
                                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 8:
                      case (MR_Integer) 11:
                        {
                          /* case ":", "with_type" */
                          {
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_356_356 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_357_357 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                            MR_Word hlds__make_hlds__superhomogeneous__DeclType1_41;
                            MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_42;
                            MR_Word hlds__make_hlds__superhomogeneous__GenericVarSet_43;
                            MR_Word hlds__make_hlds__superhomogeneous__DeclTypeResult_44;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_310_310;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_311_311;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_312_312;

                            {
                              mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_356_356, hlds__make_hlds__superhomogeneous__TypeCtorInfo_357_357, hlds__make_hlds__superhomogeneous__V_705_705, &hlds__make_hlds__superhomogeneous__DeclType1_41);
                            }
                            {
                              hlds__make_hlds__superhomogeneous__ContextPieces_42 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[7]))));
                            }
                            {
                              mercury__varset__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_356_356, hlds__make_hlds__superhomogeneous__TypeCtorInfo_357_357, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__GenericVarSet_43);
                            }
                            {
                              parse_tree__prog_io_type_name__parse_type_4_p_0(hlds__make_hlds__superhomogeneous__DeclType1_41, hlds__make_hlds__superhomogeneous__GenericVarSet_43, hlds__make_hlds__superhomogeneous__ContextPieces_42, &hlds__make_hlds__superhomogeneous__DeclTypeResult_44);
                            }
                            if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__DeclTypeResult_44)) == (MR_mktag((MR_Integer) 0))))
                              {
                                MR_Word hlds__make_hlds__superhomogeneous__DeclTypeSpecs_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__DeclTypeResult_44, (MR_Integer) 0)));

                                {
                                  hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_312_312 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__DeclTypeSpecs_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145);
                                }
                                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_310_310 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
                                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_311_311 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143;
                              }
                            else
                              {
                                MR_Word hlds__make_hlds__superhomogeneous__DeclType_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__DeclTypeResult_44, (MR_Integer) 0)));
                                MR_Word hlds__make_hlds__superhomogeneous__DeclVarSet_46;

                                {
                                  mercury__varset__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_356_356, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__DeclVarSet_46);
                                }
                                {
                                  hlds__make_hlds__qual_info__process_type_qualification_10_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__DeclType_45, hlds__make_hlds__superhomogeneous__DeclVarSet_46, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_310_310, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_311_311, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_312_312);
                                }
                              }
                            {
                              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_703_703, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__Expansion_32, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_310_310, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_311_311, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_312_312, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                            }
                            hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          /* case ";" */
                          {
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_362;
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_363;
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_364;
                            MR_Word hlds__make_hlds__superhomogeneous__CondTerm0_57;
                            MR_Word hlds__make_hlds__superhomogeneous__ThenTerm0_58;
                            MR_Word hlds__make_hlds__superhomogeneous__CondTerm_62;
                            MR_Word hlds__make_hlds__superhomogeneous__MaybeVarsCond_63;
                            MR_Word hlds__make_hlds__superhomogeneous__V_236_236;
                            MR_String hlds__make_hlds__superhomogeneous__V_237_237;
                            MR_Word hlds__make_hlds__superhomogeneous__V_238_238;
                            MR_Word hlds__make_hlds__superhomogeneous__V_239_239;
                            MR_Word hlds__make_hlds__superhomogeneous__V_240_240;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_253;
                            MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_321;
                            MR_Word hlds__make_hlds__superhomogeneous__V_61_61;

                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_703_703)) == (MR_mktag((MR_Integer) 0)));
                            if (hlds__make_hlds__superhomogeneous__succeeded)
                              {
                                hlds__make_hlds__superhomogeneous__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 0)));
                                hlds__make_hlds__superhomogeneous__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 1)));
                                hlds__make_hlds__superhomogeneous__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 2)));
                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_236_236)) == (MR_mktag((MR_Integer) 0)));
                                if (hlds__make_hlds__superhomogeneous__succeeded)
                                  {
                                    hlds__make_hlds__superhomogeneous__V_237_237 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_236_236, (MR_Integer) 0)));
                                    hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_237_237, (MR_String) "->") == 0);
                                    if (hlds__make_hlds__superhomogeneous__succeeded)
                                      {
                                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_238_238)) == (MR_mktag((MR_Integer) 1)));
                                        if (hlds__make_hlds__superhomogeneous__succeeded)
                                          {
                                            hlds__make_hlds__superhomogeneous__CondTerm0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_238_238, (MR_Integer) 0)));
                                            hlds__make_hlds__superhomogeneous__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_238_238, (MR_Integer) 1)));
                                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_239_239)) == (MR_mktag((MR_Integer) 1)));
                                            if (hlds__make_hlds__superhomogeneous__succeeded)
                                              {
                                                hlds__make_hlds__superhomogeneous__ThenTerm0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_239_239, (MR_Integer) 0)));
                                                hlds__make_hlds__superhomogeneous__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_239_239, (MR_Integer) 1)));
                                                hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_240_240 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (hlds__make_hlds__superhomogeneous__succeeded)
                                                  {
                                                    hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_362 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                                    hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_363 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                                                    {
                                                      mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_362, hlds__make_hlds__superhomogeneous__TypeCtorInfo_363_363, hlds__make_hlds__superhomogeneous__CondTerm0_57, &hlds__make_hlds__superhomogeneous__CondTerm_62);
                                                    }
                                                    hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_364 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                                                    {
                                                      hlds__make_hlds__superhomogeneous__ContextPieces_321 = mercury__cord__init_0_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_364_364);
                                                    }
                                                    {
                                                      parse_tree__prog_io_goal__parse_some_vars_goal_5_p_0(hlds__make_hlds__superhomogeneous__CondTerm_62, hlds__make_hlds__superhomogeneous__ContextPieces_321, &hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_253);
                                                    }
                                                    if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeVarsCond_63)) == (MR_mktag((MR_Integer) 0))))
                                                      {
                                                        MR_Word hlds__make_hlds__superhomogeneous__VarsCondSpecs_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 0)));
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_256_256;
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_257_257;

                                                        {
                                                          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__VarsCondSpecs_91, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145);
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__V_257_257 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_27);
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__V_256_256 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_257_257)));
                                                        }
                                                        {
                                                          MR_Word base;
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_256_256));
                                                        }
                                                        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135;
                                                        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137;
                                                        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_253;
                                                        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141;
                                                        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143;
                                                      }
                                                    else
                                                      {
                                                        MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_365_365;
                                                        MR_Word hlds__make_hlds__superhomogeneous__Vars_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 0)));
                                                        MR_Word hlds__make_hlds__superhomogeneous__StateVars_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 1)));
                                                        MR_Word hlds__make_hlds__superhomogeneous__CondParseTree_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeVarsCond_63, (MR_Integer) 2)));
                                                        MR_Word hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_68;
                                                        MR_Word hlds__make_hlds__superhomogeneous__EmptySubst_69;
                                                        MR_Word hlds__make_hlds__superhomogeneous__CondGoal_70;
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71;
                                                        MR_Word hlds__make_hlds__superhomogeneous__ThenTerm_72;
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_73;
                                                        MR_Word hlds__make_hlds__superhomogeneous__ThenExpansion_74;
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_75;
                                                        MR_Word hlds__make_hlds__superhomogeneous__ThenGoalInfo_76;
                                                        MR_Word hlds__make_hlds__superhomogeneous__ThenGoal0_77;
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterThenSVarState_78;
                                                        MR_Word hlds__make_hlds__superhomogeneous__ElseTerm_79;
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState0_80;
                                                        MR_Word hlds__make_hlds__superhomogeneous__ElseExpansion_81;
                                                        MR_Word hlds__make_hlds__superhomogeneous__AfterElseSVarState_82;
                                                        MR_Word hlds__make_hlds__superhomogeneous__ElseGoalInfo_83;
                                                        MR_Word hlds__make_hlds__superhomogeneous__ElseGoal0_84;
                                                        MR_Word hlds__make_hlds__superhomogeneous__ThenGoal_85;
                                                        MR_Word hlds__make_hlds__superhomogeneous__ElseGoal_86;
                                                        MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_88;
                                                        MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_89;
                                                        MR_Word hlds__make_hlds__superhomogeneous__Goal_90;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_258_258;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_260_260;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_261_261;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_262_262;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_263_263;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_264;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_265_265;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_266_266;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_267_267;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_268_268;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_269_269;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_270_270;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_271_271;
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_272_272;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_273_273;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_274_274;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_275_275;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_276_276;
                                                        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_279_279;
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_280_280;
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_286_286;
                                                        MR_Word hlds__make_hlds__superhomogeneous__V_288_288;

                                                        {
                                                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_253, hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_68, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_258_258);
                                                        }
                                                        hlds__make_hlds__superhomogeneous__TypeInfo_365_365 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
                                                        {
                                                          mercury__map__init_1_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_365_365, hlds__make_hlds__superhomogeneous__TypeInfo_365_365, &hlds__make_hlds__superhomogeneous__EmptySubst_69);
                                                        }
                                                        {
                                                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__CondParseTree_66, hlds__make_hlds__superhomogeneous__EmptySubst_69, &hlds__make_hlds__superhomogeneous__CondGoal_70, hlds__make_hlds__superhomogeneous__BeforeInsideSVarState_68, &hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_260_260, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_253_253, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_261_261, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_262_262, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_263_263, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_258_258, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_264);
                                                        }
                                                        {
                                                          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__ThenTerm0_58, &hlds__make_hlds__superhomogeneous__ThenTerm_72, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_261_261, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_265_265, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_73, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_264_264, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_266_266);
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ThenTerm_72, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ThenExpansion_74, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState0_73, &hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_75, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_260_260, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_267_267, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_265_265, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_268_268, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_262_262, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_269_269, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_263_263, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_270_270, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_266_266, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_271_271);
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__V_272_272 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_362, hlds__make_hlds__superhomogeneous__ThenTerm_72);
                                                        }
                                                        {
                                                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_272_272, &hlds__make_hlds__superhomogeneous__ThenGoalInfo_76);
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ThenGoalInfo_76, hlds__make_hlds__superhomogeneous__ThenExpansion_74, &hlds__make_hlds__superhomogeneous__ThenGoal0_77);
                                                        }
                                                        {
                                                          hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterThenInsideSVarState_75, &hlds__make_hlds__superhomogeneous__AfterThenSVarState_78);
                                                        }
                                                        {
                                                          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_705_705, &hlds__make_hlds__superhomogeneous__ElseTerm_79, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_268_268, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_273_273, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__AfterElseSVarState0_80, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_271_271, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_274_274);
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__ElseTerm_79, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ElseExpansion_81, hlds__make_hlds__superhomogeneous__AfterElseSVarState0_80, &hlds__make_hlds__superhomogeneous__AfterElseSVarState_82, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_267_267, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_275_275, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_273_273, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_276_276, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_269_269, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_270_270, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_274_274, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_279_279);
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__V_280_280 = mercury__term__get_term_context_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_362_362, hlds__make_hlds__superhomogeneous__ElseTerm_79);
                                                        }
                                                        {
                                                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__V_280_280, &hlds__make_hlds__superhomogeneous__ElseGoalInfo_83);
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__ElseGoalInfo_83, hlds__make_hlds__superhomogeneous__ElseExpansion_81, &hlds__make_hlds__superhomogeneous__ElseGoal0_84);
                                                        }
                                                        {
                                                          hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0((MR_Integer) 1, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__ThenGoal0_77, &hlds__make_hlds__superhomogeneous__ThenGoal_85, hlds__make_hlds__superhomogeneous__ElseGoal0_84, &hlds__make_hlds__superhomogeneous__ElseGoal_86, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, hlds__make_hlds__superhomogeneous__AfterCondInsideSVarState_71, hlds__make_hlds__superhomogeneous__AfterThenSVarState_78, hlds__make_hlds__superhomogeneous__AfterElseSVarState_82, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_276_276, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_275_275, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_279_279, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__V_286_286 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeInfo_365_365, hlds__make_hlds__superhomogeneous__StateVars_65, hlds__make_hlds__superhomogeneous__Vars_64);
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__GoalExpr_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_286_286));
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__CondGoal_70));
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ThenGoal_85));
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_88, 4) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ElseGoal_86));
                                                        }
                                                        {
                                                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_89);
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__Goal_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_90, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_88));
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_90, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_89));
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__V_288_288 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_90)));
                                                        }
                                                        {
                                                          MR_Word base;
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_288_288));
                                                        }
                                                      }
                                                    hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          /* case ":=" */
                          {
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_370_370;
                            MR_Word hlds__make_hlds__superhomogeneous__FieldValueTerm_105;
                            MR_Word hlds__make_hlds__superhomogeneous__FieldValueVar_106;
                            MR_Word hlds__make_hlds__superhomogeneous__InnerFunctor_107;
                            MR_Word hlds__make_hlds__superhomogeneous__FieldSubContext_108;
                            MR_Word hlds__make_hlds__superhomogeneous__SetGoal_109;
                            MR_Word hlds__make_hlds__superhomogeneous__TermArgContext_110;
                            MR_Integer hlds__make_hlds__superhomogeneous__TermArgNumber_111;
                            MR_Word hlds__make_hlds__superhomogeneous__FieldArgContext_112;
                            MR_Integer hlds__make_hlds__superhomogeneous__FieldArgNumber_113;
                            MR_Word hlds__make_hlds__superhomogeneous__ArgContexts_114;
                            MR_Word hlds__make_hlds__superhomogeneous__InputFieldArgExpansions_115;
                            MR_Word hlds__make_hlds__superhomogeneous__V_171_171;
                            MR_String hlds__make_hlds__superhomogeneous__V_172_172;
                            MR_Word hlds__make_hlds__superhomogeneous__V_173_173;
                            MR_Word hlds__make_hlds__superhomogeneous__V_174_174;
                            MR_Word hlds__make_hlds__superhomogeneous__V_175_175;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_176_176;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_177_177;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_178_178;
                            MR_Word hlds__make_hlds__superhomogeneous__V_179_179;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_180_180;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_181_181;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_182_182;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_183_183;
                            MR_Word hlds__make_hlds__superhomogeneous__V_184_184;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_185_185;
                            MR_Word hlds__make_hlds__superhomogeneous__V_186_186;
                            MR_Word hlds__make_hlds__superhomogeneous__V_187_187;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_188_188;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_189_189;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_190_190;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_191_191;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_192_192;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_193_193;
                            MR_Word hlds__make_hlds__superhomogeneous__V_194_194;
                            MR_Word hlds__make_hlds__superhomogeneous__V_195_195;
                            MR_Word hlds__make_hlds__superhomogeneous__V_196_196;
                            MR_Word hlds__make_hlds__superhomogeneous__V_197_197;
                            MR_Word hlds__make_hlds__superhomogeneous__V_198_198;
                            MR_Word hlds__make_hlds__superhomogeneous__V_199_199;
                            MR_Word hlds__make_hlds__superhomogeneous__V_206_206;
                            MR_Word hlds__make_hlds__superhomogeneous__V_207_207;
                            MR_Word hlds__make_hlds__superhomogeneous__V_208_208;
                            MR_Word hlds__make_hlds__superhomogeneous__V_209_209;
                            MR_Word hlds__make_hlds__superhomogeneous__V_210_210;
                            MR_Word hlds__make_hlds__superhomogeneous__V_211_211;
                            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_330;
                            MR_Word hlds__make_hlds__superhomogeneous__Goal_331;
                            MR_Word hlds__make_hlds__superhomogeneous__InputTerm_332;
                            MR_Word hlds__make_hlds__superhomogeneous__InputTermVar_333;
                            MR_Word hlds__make_hlds__superhomogeneous__Functor_334;
                            MR_Word hlds__make_hlds__superhomogeneous__InputTerm0_342;
                            MR_Word hlds__make_hlds__superhomogeneous__FieldNameTerm_343;
                            MR_Word hlds__make_hlds__superhomogeneous__FieldNames_344;
                            MR_Word hlds__make_hlds__superhomogeneous__V_104_104;

                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_703_703)) == (MR_mktag((MR_Integer) 0)));
                            if (hlds__make_hlds__superhomogeneous__succeeded)
                              {
                                hlds__make_hlds__superhomogeneous__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 0)));
                                hlds__make_hlds__superhomogeneous__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 1)));
                                hlds__make_hlds__superhomogeneous__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_703_703, (MR_Integer) 2)));
                                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_171_171)) == (MR_mktag((MR_Integer) 0)));
                                if (hlds__make_hlds__superhomogeneous__succeeded)
                                  {
                                    hlds__make_hlds__superhomogeneous__V_172_172 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_171_171, (MR_Integer) 0)));
                                    hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__V_172_172, (MR_String) "^") == 0);
                                    if (hlds__make_hlds__superhomogeneous__succeeded)
                                      {
                                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_173_173)) == (MR_mktag((MR_Integer) 1)));
                                        if (hlds__make_hlds__superhomogeneous__succeeded)
                                          {
                                            hlds__make_hlds__superhomogeneous__InputTerm0_342 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_173_173, (MR_Integer) 0)));
                                            hlds__make_hlds__superhomogeneous__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_173_173, (MR_Integer) 1)));
                                            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_174_174)) == (MR_mktag((MR_Integer) 1)));
                                            if (hlds__make_hlds__superhomogeneous__succeeded)
                                              {
                                                hlds__make_hlds__superhomogeneous__FieldNameTerm_343 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_174_174, (MR_Integer) 0)));
                                                hlds__make_hlds__superhomogeneous__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_174_174, (MR_Integer) 1)));
                                                hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_175_175 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (hlds__make_hlds__superhomogeneous__succeeded)
                                                  {
                                                    {
                                                      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__field_access__maybe_parse_field_list_3_p_0(hlds__make_hlds__superhomogeneous__FieldNameTerm_343, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__FieldNames_344);
                                                    }
                                                    if (hlds__make_hlds__superhomogeneous__succeeded)
                                                      {
                                                        {
                                                          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__InputTerm0_342, &hlds__make_hlds__superhomogeneous__InputTerm_332, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_176_176, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_177_177, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_178_178);
                                                        }
                                                        hlds__make_hlds__superhomogeneous__V_179_179 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                        {
                                                          hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__InputTerm_332, &hlds__make_hlds__superhomogeneous__InputTermVar_333, hlds__make_hlds__superhomogeneous__V_179_179, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_176_176, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_180_180);
                                                        }
                                                        {
                                                          hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_705_705, &hlds__make_hlds__superhomogeneous__FieldValueTerm_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_180_180, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_181_181, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_177_177, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_182_182, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_178_178, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_183_183);
                                                        }
                                                        hlds__make_hlds__superhomogeneous__V_186_186 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                        {
                                                          hlds__make_hlds__superhomogeneous__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_184_184, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputTermVar_333));
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_184_184, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_186_186));
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__FieldValueTerm_105, &hlds__make_hlds__superhomogeneous__FieldValueVar_106, hlds__make_hlds__superhomogeneous__V_184_184, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_181_181, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_185_185);
                                                        }
                                                        {
                                                          hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__FieldNames_344, hlds__make_hlds__superhomogeneous__FieldValueVar_106, hlds__make_hlds__superhomogeneous__InputTermVar_333, hlds__make_hlds__superhomogeneous__XVar_23, &hlds__make_hlds__superhomogeneous__Functor_334, &hlds__make_hlds__superhomogeneous__V_187_187, &hlds__make_hlds__superhomogeneous__SetGoal_109, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_182_182, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_188_188, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_189_189, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_185_185, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_190_190, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_191_191, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_192_192, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_183_183, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_193_193);
                                                        }
                                                        hlds__make_hlds__superhomogeneous__InnerFunctor_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_187_187, (MR_Integer) 0)));
                                                        hlds__make_hlds__superhomogeneous__FieldSubContext_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_187_187, (MR_Integer) 1)));
                                                        hlds__make_hlds__superhomogeneous__TermArgNumber_111 = (MR_Integer) 1;
                                                        hlds__make_hlds__superhomogeneous__FieldArgNumber_113 = (MR_Integer) 2;
                                                        hlds__make_hlds__superhomogeneous__V_197_197 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                        hlds__make_hlds__superhomogeneous__V_207_207 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                        hlds__make_hlds__superhomogeneous__V_209_209 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                        {
                                                          hlds__make_hlds__superhomogeneous__TermArgContext_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__TermArgContext_110, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Functor_334));
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__TermArgContext_110, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__TermArgContext_110, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_29));
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__FieldArgContext_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__FieldArgContext_112, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InnerFunctor_107));
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__FieldArgContext_112, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
                                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__FieldArgContext_112, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldSubContext_108));
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__V_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_194_194, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermArgNumber_111));
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_194_194, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermArgContext_110));
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__V_196_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_196_196, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldArgNumber_113));
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_196_196, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldArgContext_112));
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_195_195, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_196_196));
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_195_195, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_197_197));
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__ArgContexts_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_114, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_194_194));
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_114, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_195_195));
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_206_206, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldValueVar_106));
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_206_206, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_207_207));
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_198_198, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputTermVar_333));
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_198_198, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_206_206));
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__V_208_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_208_208, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FieldValueTerm_105));
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_208_208, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_209_209));
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_199_199, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputTerm_332));
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_199_199, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_208_208));
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(hlds__make_hlds__superhomogeneous__V_198_198, hlds__make_hlds__superhomogeneous__V_199_199, hlds__make_hlds__superhomogeneous__ArgContexts_114, hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__InputFieldArgExpansions_115, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_188_188, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_189_189, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_190_190, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_191_191, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_192_192, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_193_193, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                                        }
                                                        {
                                                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_330);
                                                        }
                                                        {
                                                          hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_330, hlds__make_hlds__superhomogeneous__InputFieldArgExpansions_115, hlds__make_hlds__superhomogeneous__SetGoal_109, &hlds__make_hlds__superhomogeneous__Goal_331);
                                                        }
                                                        hlds__make_hlds__superhomogeneous__V_210_210 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                        hlds__make_hlds__superhomogeneous__TypeCtorInfo_370_370 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                                                        {
                                                          hlds__make_hlds__superhomogeneous__V_211_211 = mercury__cord__singleton_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_370_370, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_331)));
                                                        }
                                                        {
                                                          MR_Word base;
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_210_210));
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_211_211));
                                                        }
                                                        hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 15:
                        {
                          /* case "^" */
                          {
                            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_369;
                            MR_Word hlds__make_hlds__superhomogeneous__FieldNames_94;
                            MR_Word hlds__make_hlds__superhomogeneous__InputTerm_95;
                            MR_Word hlds__make_hlds__superhomogeneous__InputTermVar_96;
                            MR_Word hlds__make_hlds__superhomogeneous__Functor_97;
                            MR_Word hlds__make_hlds__superhomogeneous__GetGoal_99;
                            MR_Word hlds__make_hlds__superhomogeneous__ArgContext_100;
                            MR_Word hlds__make_hlds__superhomogeneous__InputArgExpansion_101;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_214_214;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_215_215;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_216_216;
                            MR_Word hlds__make_hlds__superhomogeneous__V_217_217;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_218_218;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_219_219;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_220_220;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_221_221;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_222_222;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_223_223;
                            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_224_224;
                            MR_Integer hlds__make_hlds__superhomogeneous__V_225_225;
                            MR_Word hlds__make_hlds__superhomogeneous__V_232_232;
                            MR_Word hlds__make_hlds__superhomogeneous__V_233_233;
                            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_324;
                            MR_Word hlds__make_hlds__superhomogeneous__Goal_325;
                            MR_Word hlds__make_hlds__superhomogeneous__V_98_98;

                            {
                              hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__field_access__maybe_parse_field_list_3_p_0(hlds__make_hlds__superhomogeneous__V_705_705, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__FieldNames_94);
                            }
                            if (hlds__make_hlds__superhomogeneous__succeeded)
                              {
                                {
                                  hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__V_703_703, &hlds__make_hlds__superhomogeneous__InputTerm_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_139, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_214_214, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_135, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_215_215, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_145, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_216_216);
                                }
                                hlds__make_hlds__superhomogeneous__V_217_217 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                {
                                  hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__InputTerm_95, &hlds__make_hlds__superhomogeneous__InputTermVar_96, hlds__make_hlds__superhomogeneous__V_217_217, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_214_214, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_218_218);
                                }
                                {
                                  hlds__make_hlds__field_access__expand_get_field_function_call_22_p_0(hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__FieldNames_94, hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__InputTermVar_96, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__Functor_97, &hlds__make_hlds__superhomogeneous__V_98_98, &hlds__make_hlds__superhomogeneous__GetGoal_99, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_215_215, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_219_219, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_137, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_220_220, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_218_218, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_221_221, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_141, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_222_222, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_143, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_223_223, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_216_216, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_224_224);
                                }
                                hlds__make_hlds__superhomogeneous__V_225_225 = (MR_Integer) 1;
                                {
                                  hlds__make_hlds__superhomogeneous__ArgContext_100 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_100, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Functor_97));
                                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_100, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
                                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_100, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_29));
                                }
                                {
                                  hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__InputTermVar_96, hlds__make_hlds__superhomogeneous__InputTerm_95, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__ArgContext_100, hlds__make_hlds__superhomogeneous__V_225_225, &hlds__make_hlds__superhomogeneous__InputArgExpansion_101, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_219_219, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_136, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_220_220, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_138, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_221_221, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_140, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_222_222, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_223_223, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_144, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_224_224, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_146);
                                }
                                {
                                  hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_324);
                                }
                                {
                                  hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_324, hlds__make_hlds__superhomogeneous__InputArgExpansion_101, hlds__make_hlds__superhomogeneous__GetGoal_99, &hlds__make_hlds__superhomogeneous__Goal_325);
                                }
                                hlds__make_hlds__superhomogeneous__V_232_232 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_369 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                                {
                                  hlds__make_hlds__superhomogeneous__V_233_233 = mercury__cord__singleton_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_369_369, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_325)));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_232_232));
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_233_233));
                                }
                                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
                              }
                          }
                        }
                        break;
                    }
                    /* jump out of search loop */
                    goto label_0;
                  }
                hlds__make_hlds__superhomogeneous__succeeded = MR_FALSE;
              label_0:;
              }
          }
      }
    return hlds__make_hlds__superhomogeneous__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__XVar_23,
  MR_Word hlds__make_hlds__superhomogeneous__YFunctor0_24,
  MR_Word hlds__make_hlds__superhomogeneous__YArgTerms0_25,
  MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_26,
  MR_Word hlds__make_hlds__superhomogeneous__Context_27,
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_28,
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_29,
  MR_Word hlds__make_hlds__superhomogeneous__Purity_30,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_32,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_88,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_92,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_98,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Word hlds__make_hlds__superhomogeneous__YFunctor_39;
    MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_40;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_100_100;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103;
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionPrime_42;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_104_104;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_105_105;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_106_106;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_107_107;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_108_108;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_109_109;
    MR_String hlds__make_hlds__superhomogeneous__YAtom_41;

    {
      hlds__make_hlds__superhomogeneous__convert_big_integer_functor_5_p_0(hlds__make_hlds__superhomogeneous__YFunctor0_24, &hlds__make_hlds__superhomogeneous__YFunctor_39, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_98, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_100_100);
    }
    {
      hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__YArgTerms0_25, &hlds__make_hlds__superhomogeneous__YArgTerms_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_92, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_88, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_100_100, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103);
    }
    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YFunctor_39)) == (MR_mktag((MR_Integer) 0)));
    if (hlds__make_hlds__superhomogeneous__succeeded)
      {
        hlds__make_hlds__superhomogeneous__YAtom_41 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YFunctor_39, (MR_Integer) 0)));
        {
          hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_117_110_114_97_118_101_108_95_115_112_101_99_105_97_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__YAtom_41, hlds__make_hlds__superhomogeneous__YArgTerms_40, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__ExpansionPrime_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_104_104, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_105_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_106_106, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_107_107, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_108_108, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_109_109);
        }
      }
    if (hlds__make_hlds__superhomogeneous__succeeded)
      {
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_109_109;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_108_108;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_107_107;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_106_106;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_105_105;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_104_104;
        *hlds__make_hlds__superhomogeneous__Expansion_32 = hlds__make_hlds__superhomogeneous__ExpansionPrime_42;
      }
    else
      {
        MR_Word hlds__make_hlds__superhomogeneous__GoalTerm1_45;
        MR_Word hlds__make_hlds__superhomogeneous__LambdaPurity_47;
        MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_54;
        MR_Word hlds__make_hlds__superhomogeneous__Groundness_56;
        MR_Word hlds__make_hlds__superhomogeneous__Vars1_57;
        MR_Word hlds__make_hlds__superhomogeneous__Modes1_58;
        MR_Word hlds__make_hlds__superhomogeneous__Det1_59;
        MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_183_183 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_184_184;
        MR_Word hlds__make_hlds__superhomogeneous__RHS_43;
        MR_Word hlds__make_hlds__superhomogeneous__HeadTerm0_44;
        MR_Word hlds__make_hlds__superhomogeneous__HeadTerm1_46;
        MR_Word hlds__make_hlds__superhomogeneous__HeadTerm_48;
        MR_Word hlds__make_hlds__superhomogeneous__Groundness0_49;
        MR_Word hlds__make_hlds__superhomogeneous__Vars0_51;
        MR_Word hlds__make_hlds__superhomogeneous__Modes0_52;
        MR_Word hlds__make_hlds__superhomogeneous__Det0_53;

        {
          hlds__make_hlds__superhomogeneous__RHS_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__RHS_43, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YFunctor_39));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__RHS_43, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YArgTerms_40));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__RHS_43, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YFunctorContext_26));
        }
        {
          parse_tree__prog_util__parse_rule_term_4_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_183_183, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__RHS_43, &hlds__make_hlds__superhomogeneous__HeadTerm0_44, &hlds__make_hlds__superhomogeneous__GoalTerm1_45);
        }
        hlds__make_hlds__superhomogeneous__TypeCtorInfo_184_184 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        {
          mercury__term__coerce_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_183_183, hlds__make_hlds__superhomogeneous__TypeCtorInfo_184_184, hlds__make_hlds__superhomogeneous__HeadTerm0_44, &hlds__make_hlds__superhomogeneous__HeadTerm1_46);
        }
        {
          parse_tree__prog_io_util__parse_purity_annotation_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_184_184, hlds__make_hlds__superhomogeneous__HeadTerm1_46, &hlds__make_hlds__superhomogeneous__LambdaPurity_47, &hlds__make_hlds__superhomogeneous__HeadTerm_48);
        }
        {
          hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_goal__parse_pred_expression_6_p_0(hlds__make_hlds__superhomogeneous__HeadTerm_48, &hlds__make_hlds__superhomogeneous__Groundness0_49, &hlds__make_hlds__superhomogeneous__Vars0_51, &hlds__make_hlds__superhomogeneous__Modes0_52, &hlds__make_hlds__superhomogeneous__Det0_53);
        }
        if (hlds__make_hlds__superhomogeneous__succeeded)
          {
            hlds__make_hlds__superhomogeneous__PredOrFunc_54 = (MR_Integer) 0;
            hlds__make_hlds__superhomogeneous__Groundness_56 = hlds__make_hlds__superhomogeneous__Groundness0_49;
            hlds__make_hlds__superhomogeneous__Vars1_57 = hlds__make_hlds__superhomogeneous__Vars0_51;
            hlds__make_hlds__superhomogeneous__Modes1_58 = hlds__make_hlds__superhomogeneous__Modes0_52;
            hlds__make_hlds__superhomogeneous__Det1_59 = hlds__make_hlds__superhomogeneous__Det0_53;
            hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
          }
        else
          {
            {
              hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_goal__parse_func_expression_6_p_0(hlds__make_hlds__superhomogeneous__HeadTerm_48, &hlds__make_hlds__superhomogeneous__Groundness_56, &hlds__make_hlds__superhomogeneous__Vars1_57, &hlds__make_hlds__superhomogeneous__Modes1_58, &hlds__make_hlds__superhomogeneous__Det1_59);
            }
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                hlds__make_hlds__superhomogeneous__PredOrFunc_54 = (MR_Integer) 1;
                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
              }
          }
        if (hlds__make_hlds__superhomogeneous__succeeded)
          {
            MR_Word hlds__make_hlds__superhomogeneous__Modes_60;
            MR_Word hlds__make_hlds__superhomogeneous__GoalTerm_62;
            MR_Word hlds__make_hlds__superhomogeneous__ContextPieces_63;
            MR_Word hlds__make_hlds__superhomogeneous__MaybeParsedGoal_64;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_110_110;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_111_111;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_112_112;

            {
              hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(hlds__make_hlds__superhomogeneous__Modes1_58, &hlds__make_hlds__superhomogeneous__Modes_60, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_110_110, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_111_111);
            }
            {
              mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__make_hlds__superhomogeneous__GoalTerm1_45, &hlds__make_hlds__superhomogeneous__GoalTerm_62);
            }
            {
              hlds__make_hlds__superhomogeneous__ContextPieces_63 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
            }
            {
              parse_tree__prog_io_goal__parse_goal_5_p_0(hlds__make_hlds__superhomogeneous__GoalTerm_62, hlds__make_hlds__superhomogeneous__ContextPieces_63, &hlds__make_hlds__superhomogeneous__MaybeParsedGoal_64, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_112_112);
            }
            if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeParsedGoal_64)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_64, (MR_Integer) 0)));
                MR_Word hlds__make_hlds__superhomogeneous__V_115_115;
                MR_Word hlds__make_hlds__superhomogeneous__V_116_116;

                {
                  *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__superhomogeneous__ParsedGoalSpecs_67, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_111_111);
                }
                {
                  hlds__make_hlds__superhomogeneous__V_116_116 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_27);
                }
                {
                  hlds__make_hlds__superhomogeneous__V_115_115 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_116_116)));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_115_115));
                }
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90;
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_112_112;
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94;
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_110_110;
              }
            else
              {
                MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeParsedGoal_64, (MR_Integer) 0)));
                MR_Word hlds__make_hlds__superhomogeneous__Goal_66;
                MR_Word hlds__make_hlds__superhomogeneous__V_123_123;

                {
                  hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__LambdaPurity_47, hlds__make_hlds__superhomogeneous__Groundness_56, hlds__make_hlds__superhomogeneous__PredOrFunc_54, hlds__make_hlds__superhomogeneous__Vars1_57, hlds__make_hlds__superhomogeneous__Modes_60, hlds__make_hlds__superhomogeneous__Det1_59, hlds__make_hlds__superhomogeneous__ParsedGoal_65, hlds__make_hlds__superhomogeneous__Context_27, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, &hlds__make_hlds__superhomogeneous__Goal_66, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_112_112, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_110_110, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_111_111, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99);
                }
                {
                  hlds__make_hlds__superhomogeneous__V_123_123 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_66)));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_123_123));
                }
              }
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
          }
        else
          {
            MR_Word hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77;
            MR_Word hlds__make_hlds__superhomogeneous__ConsId_79;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_132_132;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_133_133;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_134_134;
            MR_Word hlds__make_hlds__superhomogeneous__FunctorName_75;
            MR_Word hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_76;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_127_127;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_128_128;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129;
            MR_String hlds__make_hlds__superhomogeneous__FName_68;
            MR_Word hlds__make_hlds__superhomogeneous__ModuleTerm_69;
            MR_Word hlds__make_hlds__superhomogeneous__NameArgsTerm_70;
            MR_Word hlds__make_hlds__superhomogeneous__V_124_124;
            MR_Word hlds__make_hlds__superhomogeneous__V_125_125;

            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YFunctor_39)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                hlds__make_hlds__superhomogeneous__FName_68 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YFunctor_39, (MR_Integer) 0)));
                hlds__make_hlds__superhomogeneous__succeeded = (strcmp(hlds__make_hlds__superhomogeneous__FName_68, (MR_String) ".") == 0);
                if (hlds__make_hlds__superhomogeneous__succeeded)
                  {
                    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YArgTerms_40)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__make_hlds__superhomogeneous__succeeded)
                      {
                        hlds__make_hlds__superhomogeneous__ModuleTerm_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgTerms_40, (MR_Integer) 0)));
                        hlds__make_hlds__superhomogeneous__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YArgTerms_40, (MR_Integer) 1)));
                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_124_124)) == (MR_mktag((MR_Integer) 1)));
                        if (hlds__make_hlds__superhomogeneous__succeeded)
                          {
                            hlds__make_hlds__superhomogeneous__NameArgsTerm_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_124_124, (MR_Integer) 0)));
                            hlds__make_hlds__superhomogeneous__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_124_124, (MR_Integer) 1)));
                            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_125_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
                if (hlds__make_hlds__superhomogeneous__succeeded)
                  {
                    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_191_191;
                    MR_String hlds__make_hlds__superhomogeneous__Name_71;
                    MR_Word hlds__make_hlds__superhomogeneous__NameArgTerms_72;
                    MR_Word hlds__make_hlds__superhomogeneous__Module_74;
                    MR_Word hlds__make_hlds__superhomogeneous__V_126_126;
                    MR_Word hlds__make_hlds__superhomogeneous__V_73_73;

                    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__NameArgsTerm_70)) == (MR_mktag((MR_Integer) 0)));
                    if (hlds__make_hlds__superhomogeneous__succeeded)
                      {
                        hlds__make_hlds__superhomogeneous__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__NameArgsTerm_70, (MR_Integer) 0)));
                        hlds__make_hlds__superhomogeneous__NameArgTerms_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__NameArgsTerm_70, (MR_Integer) 1)));
                        hlds__make_hlds__superhomogeneous__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__NameArgsTerm_70, (MR_Integer) 2)));
                        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_126_126)) == (MR_mktag((MR_Integer) 0)));
                        if (hlds__make_hlds__superhomogeneous__succeeded)
                          {
                            hlds__make_hlds__superhomogeneous__Name_71 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_126_126, (MR_Integer) 0)));
                            hlds__make_hlds__superhomogeneous__TypeCtorInfo_191_191 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                            {
                              hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_191_191, hlds__make_hlds__superhomogeneous__ModuleTerm_69, &hlds__make_hlds__superhomogeneous__Module_74);
                            }
                            if (hlds__make_hlds__superhomogeneous__succeeded)
                              {
                                {
                                  hlds__make_hlds__superhomogeneous__FunctorName_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__FunctorName_75, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Module_74));
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__FunctorName_75, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Name_71));
                                }
                                {
                                  hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__NameArgTerms_72, &hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_76, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_127_127, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_128_128, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129);
                                }
                                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
                else
                  {
                    {
                      hlds__make_hlds__superhomogeneous__FunctorName_75 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(hlds__make_hlds__superhomogeneous__FName_68, (MR_String) "__");
                    }
                    hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_76 = hlds__make_hlds__superhomogeneous__YArgTerms_40;
                    hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103;
                    hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_127_127 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101;
                    hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_128_128 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
                    hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
                  }
              }
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                MR_Integer hlds__make_hlds__superhomogeneous__Arity_78;
                MR_Word hlds__make_hlds__superhomogeneous__V_131_131;

                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_134_134 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129;
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_133_133 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_127_127;
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_132_132 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_128_128;
                hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77 = hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTermsPrime_76;
                {
                  mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2], hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77, &hlds__make_hlds__superhomogeneous__Arity_78);
                }
                {
                  hlds__make_hlds__superhomogeneous__V_131_131 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
                {
                  hlds__make_hlds__superhomogeneous__ConsId_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_79, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__FunctorName_75));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_79, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arity_78));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConsId_79, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_131_131));
                }
              }
            else
              {
                MR_Integer hlds__make_hlds__superhomogeneous__Arity_169;

                {
                  mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2], hlds__make_hlds__superhomogeneous__YArgTerms_40, &hlds__make_hlds__superhomogeneous__Arity_169);
                }
                {
                  parse_tree__prog_util__det_make_functor_cons_id_3_p_0(hlds__make_hlds__superhomogeneous__YFunctor_39, hlds__make_hlds__superhomogeneous__Arity_169, &hlds__make_hlds__superhomogeneous__ConsId_79);
                }
                hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77 = hlds__make_hlds__superhomogeneous__YArgTerms_40;
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_134_134 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_103_103;
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_133_133 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_101_101;
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_132_132 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
              }
            if ((hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word hlds__make_hlds__superhomogeneous__FunctorGoal_80;
                MR_Word hlds__make_hlds__superhomogeneous__V_162_162;
                MR_Word hlds__make_hlds__superhomogeneous__V_166_166;
                MR_Word hlds__make_hlds__superhomogeneous__V_168_168;
                MR_Word hlds__make_hlds__superhomogeneous__Goal_170;

                {
                  hlds__make_hlds__superhomogeneous__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_79));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_162_162, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_162_162, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_162_162, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__FunctorGoal_80, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97);
                }
                {
                  hlds__hlds_goal__goal_set_purity_3_p_0(hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__FunctorGoal_80, &hlds__make_hlds__superhomogeneous__Goal_170);
                }
                {
                  hlds__make_hlds__superhomogeneous__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_166_166, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_23));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_166_166, 1) = ((MR_Box) ((MR_Integer) 1));
                }
                {
                  hlds__make_hlds__superhomogeneous__V_168_168 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_170)));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_166_166));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_168_168));
                }
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_132_132;
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90;
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_133_133;
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94;
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_134_134;
              }
            else
              {
                MR_Word hlds__make_hlds__superhomogeneous__ArgContext_83;

                {
                  hlds__make_hlds__superhomogeneous__ArgContext_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_83, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_79));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_83, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MainContext_28));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_83, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_29));
                }
                switch (hlds__make_hlds__superhomogeneous__Purity_30) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__make_hlds__superhomogeneous__Goal0_87;
                      MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_142_142;
                      MR_Word hlds__make_hlds__superhomogeneous__V_144_144;
                      MR_Word hlds__make_hlds__superhomogeneous__V_148_148;
                      MR_Word hlds__make_hlds__superhomogeneous__Goal_172;
                      MR_Word hlds__make_hlds__superhomogeneous__FunctorGoal_173;
                      MR_Word hlds__make_hlds__superhomogeneous__YVars_174;
                      MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_175;
                      MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_176;

                      {
                        hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__ArgContext_83, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__superhomogeneous__YVars_174, &hlds__make_hlds__superhomogeneous__ArgExpansions_175, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_132_132, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_133_133, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_142_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_134_134, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99);
                      }
                      {
                        hlds__make_hlds__superhomogeneous__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_79));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_144_144, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_144_144, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVars_174));
                      }
                      {
                        hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_144_144, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__FunctorGoal_173, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_142_142, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97);
                      }
                      {
                        hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_176);
                      }
                      {
                        hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_176, hlds__make_hlds__superhomogeneous__ArgExpansions_175, hlds__make_hlds__superhomogeneous__FunctorGoal_173, &hlds__make_hlds__superhomogeneous__Goal0_87);
                      }
                      {
                        hlds__hlds_goal__goal_set_purity_3_p_0(hlds__make_hlds__superhomogeneous__Purity_30, hlds__make_hlds__superhomogeneous__Goal0_87, &hlds__make_hlds__superhomogeneous__Goal_172);
                      }
                      {
                        hlds__make_hlds__superhomogeneous__V_148_148 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_172)));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *hlds__make_hlds__superhomogeneous__Expansion_32 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_148_148));
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__make_hlds__superhomogeneous__YVars_84;
                      MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_85;
                      MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_86;
                      MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_156_156;
                      MR_Word hlds__make_hlds__superhomogeneous__V_158_158;
                      MR_Word hlds__make_hlds__superhomogeneous__FunctorGoal_171;

                      {
                        hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__MaybeQualifiedYArgTerms_77, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__ArgContext_83, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__superhomogeneous__YVars_84, &hlds__make_hlds__superhomogeneous__ArgExpansions_85, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_132_132, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_89, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_91, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_133_133, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_93, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_156_156, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_134_134, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_99);
                      }
                      {
                        hlds__make_hlds__superhomogeneous__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_79));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVars_84));
                      }
                      {
                        hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__V_158_158, hlds__make_hlds__superhomogeneous__YFunctorContext_26, hlds__make_hlds__superhomogeneous__MainContext_28, hlds__make_hlds__superhomogeneous__SubContext_29, hlds__make_hlds__superhomogeneous__Purity_30, &hlds__make_hlds__superhomogeneous__FunctorGoal_171, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_156_156, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_97);
                      }
                      {
                        hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_27, &hlds__make_hlds__superhomogeneous__GoalInfo_86);
                      }
                      {
                        hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_86, hlds__make_hlds__superhomogeneous__XVar_23, hlds__make_hlds__superhomogeneous__FunctorGoal_171, (MR_Integer) 1, hlds__make_hlds__superhomogeneous__ArgExpansions_85, hlds__make_hlds__superhomogeneous__Expansion_32);
                      }
                    }
                    break;
                }
              }
          }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__XVar_21,
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_41,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_42,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_43,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_44,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_45,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_46,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_48,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_51,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_52)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

    if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_22)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__make_hlds__superhomogeneous__YFunctor_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 2)));

        {
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__XVar_21, hlds__make_hlds__superhomogeneous__YFunctor_38, hlds__make_hlds__superhomogeneous__YArgTerms_39, hlds__make_hlds__superhomogeneous__YFunctorContext_40, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_51, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_52);
        }
      }
    else
      {
        MR_Word hlds__make_hlds__superhomogeneous__YVar_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__superhomogeneous__Goal_37;
        MR_Word hlds__make_hlds__superhomogeneous__V_59_59;
        MR_Word hlds__make_hlds__superhomogeneous__V_62_62;
        MR_Word hlds__make_hlds__superhomogeneous__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));

        {
          hlds__make_hlds__superhomogeneous__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_35));
        }
        {
          hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_21, hlds__make_hlds__superhomogeneous__V_59_59, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__Goal_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_50);
        }
        {
          hlds__make_hlds__superhomogeneous__V_62_62 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_37)));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *hlds__make_hlds__superhomogeneous__Expansion_28 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_62_62));
        }
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_42 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_41;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_44 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_43;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_46 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_45;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_48 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_47;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_52 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_51;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__XTerm_21,
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_22,
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

    if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__XTerm_21)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__make_hlds__superhomogeneous__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__superhomogeneous__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__superhomogeneous__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_22)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word hlds__make_hlds__superhomogeneous__TmpVar_48;
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionX_49;
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionY_50;
            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_51;
            MR_Word hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordX_52;
            MR_Word hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordY_53;
            MR_Word hlds__make_hlds__superhomogeneous__GoalCord_54;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_67_67;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_68_68;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_69_69;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_70_70;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_71_71;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_72_72;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_73_73;
            MR_Word hlds__make_hlds__superhomogeneous__YFunctor_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 2)));

            {
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__make_hlds__superhomogeneous__TmpVar_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_67_67);
            }
            {
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__TmpVar_48, hlds__make_hlds__superhomogeneous__V_110_110, hlds__make_hlds__superhomogeneous__V_109_109, hlds__make_hlds__superhomogeneous__V_108_108, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__ExpansionX_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_68_68, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_69_69, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_70_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_71_71, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_72_72, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_73_73);
            }
            {
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__TmpVar_48, hlds__make_hlds__superhomogeneous__YFunctor_99, hlds__make_hlds__superhomogeneous__YArgTerms_100, hlds__make_hlds__superhomogeneous__YFunctorContext_101, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__ExpansionY_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_68_68, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_69_69, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_70_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_71_71, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_72_72, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_73_73, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);
            }
            {
              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_23, &hlds__make_hlds__superhomogeneous__GoalInfo_51);
            }
            {
              hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_51, hlds__make_hlds__superhomogeneous__ExpansionX_49, &hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordX_52);
            }
            {
              hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_51, hlds__make_hlds__superhomogeneous__ExpansionY_50, &hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordY_53);
            }
            {
              hlds__make_hlds__superhomogeneous__GoalCord_54 = mercury__cord__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordX_52, hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCordY_53);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *hlds__make_hlds__superhomogeneous__Expansion_28 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_54));
            }
          }
        else
          {
            MR_Word hlds__make_hlds__superhomogeneous__YVar_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__superhomogeneous__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));

            {
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__YVar_98, hlds__make_hlds__superhomogeneous__V_110_110, hlds__make_hlds__superhomogeneous__V_109_109, hlds__make_hlds__superhomogeneous__V_108_108, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);
            }
          }
      }
    else
      {
        MR_Word hlds__make_hlds__superhomogeneous__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__superhomogeneous__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XTerm_21, (MR_Integer) 1)));

        if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_22)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word hlds__make_hlds__superhomogeneous__YFunctor_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 2)));

            {
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__V_112_112, hlds__make_hlds__superhomogeneous__YFunctor_41, hlds__make_hlds__superhomogeneous__YArgTerms_42, hlds__make_hlds__superhomogeneous__YFunctorContext_43, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66);
            }
          }
        else
          {
            MR_Word hlds__make_hlds__superhomogeneous__YVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__superhomogeneous__Goal_39;
            MR_Word hlds__make_hlds__superhomogeneous__V_93_93;
            MR_Word hlds__make_hlds__superhomogeneous__V_96_96;
            MR_Word hlds__make_hlds__superhomogeneous__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_22, (MR_Integer) 1)));

            {
              hlds__make_hlds__superhomogeneous__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_93_93, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_37));
            }
            {
              hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__V_112_112, hlds__make_hlds__superhomogeneous__V_93_93, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, &hlds__make_hlds__superhomogeneous__Goal_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_63, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_64);
            }
            {
              hlds__make_hlds__superhomogeneous__V_96_96 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_39)));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *hlds__make_hlds__superhomogeneous__Expansion_28 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_96_96));
            }
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_56 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_55;
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_58 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_57;
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_60 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_59;
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_61;
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_66 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_65;
          }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__LHSVar_21,
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Word hlds__make_hlds__superhomogeneous__RHS_35;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_48_48;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_49_49;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_50_50;

    {
      hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__RHS0_22, &hlds__make_hlds__superhomogeneous__RHS_35, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_50_50);
    }
    {
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_118_97_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__LHSVar_21, hlds__make_hlds__superhomogeneous__RHS_35, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_50_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__LHS0_21,
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_22,
  MR_Word hlds__make_hlds__superhomogeneous__Context_23,
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_24,
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_25,
  MR_Word hlds__make_hlds__superhomogeneous__Purity_26,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_28,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_37,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_39,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_40,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_41,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_42,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_44,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_45,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_46,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_47,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_48)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Word hlds__make_hlds__superhomogeneous__LHS_35;
    MR_Word hlds__make_hlds__superhomogeneous__RHS_36;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_49_49;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_50_50;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51_51;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_52_52;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_54_54;

    {
      hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__LHS0_21, &hlds__make_hlds__superhomogeneous__LHS_35, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51_51);
    }
    {
      hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__RHS0_22, &hlds__make_hlds__superhomogeneous__RHS_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_49_49, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_50_50, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_54_54);
    }
    {
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_97_115_115_105_102_121_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__LHS_35, hlds__make_hlds__superhomogeneous__RHS_36, hlds__make_hlds__superhomogeneous__Context_23, hlds__make_hlds__superhomogeneous__MainContext_24, hlds__make_hlds__superhomogeneous__SubContext_25, hlds__make_hlds__superhomogeneous__Purity_26, hlds__make_hlds__superhomogeneous__Expansion_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_54_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_48);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__XVar_20,
  MR_Word hlds__make_hlds__superhomogeneous__YTerm_21,
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
  MR_Word hlds__make_hlds__superhomogeneous__ArgContext_23,
  MR_Integer hlds__make_hlds__superhomogeneous__ArgNum_25,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_26,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

    if (((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerm_21)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__make_hlds__superhomogeneous__YFunctor_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__superhomogeneous__YArgTerms_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__superhomogeneous__YFunctorContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__superhomogeneous__MainContext_65;
        MR_Word hlds__make_hlds__superhomogeneous__SubContext_66;

        switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__ArgContext_23)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
              MR_Integer hlds__make_hlds__superhomogeneous__Arity_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));

              hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__PredOrFunc_74 == (MR_Integer) 1);
              if (hlds__make_hlds__superhomogeneous__succeeded)
                hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__ArgNum_25 == hlds__make_hlds__superhomogeneous__Arity_75);
              if (hlds__make_hlds__superhomogeneous__succeeded)
                hlds__make_hlds__superhomogeneous__MainContext_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              else
                {
                  hlds__make_hlds__superhomogeneous__MainContext_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MainContext_65, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
                }
              hlds__make_hlds__superhomogeneous__SubContext_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__superhomogeneous__PredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));

              {
                hlds__make_hlds__superhomogeneous__MainContext_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_65, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__PredId_76));
                MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_65, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
              }
              hlds__make_hlds__superhomogeneous__SubContext_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__make_hlds__superhomogeneous__ConsId_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__superhomogeneous__SubContexts0_78;
              MR_Word hlds__make_hlds__superhomogeneous__SubContext_79;

              hlds__make_hlds__superhomogeneous__MainContext_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));
              hlds__make_hlds__superhomogeneous__SubContexts0_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 2)));
              {
                hlds__make_hlds__superhomogeneous__SubContext_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_79, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_77));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_79, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
              }
              {
                hlds__make_hlds__superhomogeneous__SubContext_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_66, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_79));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_66, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContexts0_78));
              }
            }
            break;
        }
        {
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_114_97_118_101_108_95_118_97_114_95_102_117_110_99_116_111_114_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_57_93_95_48_22_p_0(hlds__make_hlds__superhomogeneous__XVar_20, hlds__make_hlds__superhomogeneous__YFunctor_39, hlds__make_hlds__superhomogeneous__YArgTerms_40, hlds__make_hlds__superhomogeneous__YFunctorContext_41, hlds__make_hlds__superhomogeneous__Context_22, hlds__make_hlds__superhomogeneous__MainContext_65, hlds__make_hlds__superhomogeneous__SubContext_66, (MR_Integer) 0, hlds__make_hlds__superhomogeneous__Expansion_26, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53);
        }
      }
    else
      {
        MR_Word hlds__make_hlds__superhomogeneous__YVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__superhomogeneous__YVarContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerm_21, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__superhomogeneous__GoalCord_35;

        {
          hlds__make_hlds__superhomogeneous__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_20)), ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_33)));
        }
        if (hlds__make_hlds__superhomogeneous__succeeded)
          {
            {
              hlds__make_hlds__superhomogeneous__GoalCord_35 = mercury__cord__init_0_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
            }
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50;
          }
        else
          {
            MR_Word hlds__make_hlds__superhomogeneous__MainContext_36;
            MR_Word hlds__make_hlds__superhomogeneous__SubContext_37;
            MR_Word hlds__make_hlds__superhomogeneous__Goal_38;
            MR_Word hlds__make_hlds__superhomogeneous__V_61_61;

            switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__ArgContext_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
                  MR_Integer hlds__make_hlds__superhomogeneous__Arity_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));

                  hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__PredOrFunc_84 == (MR_Integer) 1);
                  if (hlds__make_hlds__superhomogeneous__succeeded)
                    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__ArgNum_25 == hlds__make_hlds__superhomogeneous__Arity_85);
                  if (hlds__make_hlds__superhomogeneous__succeeded)
                    hlds__make_hlds__superhomogeneous__MainContext_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                  else
                    {
                      hlds__make_hlds__superhomogeneous__MainContext_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MainContext_36, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
                    }
                  hlds__make_hlds__superhomogeneous__SubContext_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__superhomogeneous__PredId_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));

                  {
                    hlds__make_hlds__superhomogeneous__MainContext_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_36, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__PredId_86));
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__MainContext_36, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
                  }
                  hlds__make_hlds__superhomogeneous__SubContext_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__make_hlds__superhomogeneous__ConsId_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 0)));
                  MR_Word hlds__make_hlds__superhomogeneous__SubContexts0_88;
                  MR_Word hlds__make_hlds__superhomogeneous__SubContext_89;

                  hlds__make_hlds__superhomogeneous__MainContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 1)));
                  hlds__make_hlds__superhomogeneous__SubContexts0_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__ArgContext_23, (MR_Integer) 2)));
                  {
                    hlds__make_hlds__superhomogeneous__SubContext_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_89, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConsId_87));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__SubContext_89, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgNum_25));
                  }
                  {
                    hlds__make_hlds__superhomogeneous__SubContext_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_37, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContext_89));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__SubContext_37, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__SubContexts0_88));
                  }
                }
                break;
            }
            {
              hlds__make_hlds__superhomogeneous__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__YVar_33));
            }
            {
              hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__XVar_20, hlds__make_hlds__superhomogeneous__V_61_61, hlds__make_hlds__superhomogeneous__YVarContext_34, hlds__make_hlds__superhomogeneous__MainContext_36, hlds__make_hlds__superhomogeneous__SubContext_37, (MR_Integer) 0, &hlds__make_hlds__superhomogeneous__Goal_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_51);
            }
            {
              hlds__make_hlds__superhomogeneous__GoalCord_35 = mercury__cord__singleton_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_38)));
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *hlds__make_hlds__superhomogeneous__Expansion_26 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_35));
        }
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_43 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_42;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_45 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_44;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_46;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_48;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_53 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_52;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__XVars_19,
  MR_Word hlds__make_hlds__superhomogeneous__YTerms_20,
  MR_Word hlds__make_hlds__superhomogeneous__ArgContexts_21,
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansions_24,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__XVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (hlds__make_hlds__superhomogeneous__succeeded)
      {
        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__YTerms_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__make_hlds__superhomogeneous__succeeded)
          hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__ArgContexts_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (hlds__make_hlds__superhomogeneous__succeeded)
      {
        *hlds__make_hlds__superhomogeneous__Expansions_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40;
      }
    else
      {
        MR_Word hlds__make_hlds__superhomogeneous__HeadXVar_31;
        MR_Word hlds__make_hlds__superhomogeneous__TailXVars_32;
        MR_Word hlds__make_hlds__superhomogeneous__HeadYTerm_33;
        MR_Word hlds__make_hlds__superhomogeneous__TailYTerms_34;
        MR_Integer hlds__make_hlds__superhomogeneous__HeadArgNumber_35;
        MR_Word hlds__make_hlds__superhomogeneous__HeadArgContext_36;
        MR_Word hlds__make_hlds__superhomogeneous__TailArgContexts_37;
        MR_Word hlds__make_hlds__superhomogeneous__V_52_52;

        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__XVars_19)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__superhomogeneous__succeeded)
          {
            hlds__make_hlds__superhomogeneous__HeadXVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XVars_19, (MR_Integer) 0)));
            hlds__make_hlds__superhomogeneous__TailXVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__XVars_19, (MR_Integer) 1)));
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__YTerms_20)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                hlds__make_hlds__superhomogeneous__HeadYTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerms_20, (MR_Integer) 0)));
                hlds__make_hlds__superhomogeneous__TailYTerms_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__YTerms_20, (MR_Integer) 1)));
                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__ArgContexts_21)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__superhomogeneous__succeeded)
                  {
                    hlds__make_hlds__superhomogeneous__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_21, (MR_Integer) 0)));
                    hlds__make_hlds__superhomogeneous__TailArgContexts_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ArgContexts_21, (MR_Integer) 1)));
                    hlds__make_hlds__superhomogeneous__HeadArgNumber_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_52_52, (MR_Integer) 0)));
                    hlds__make_hlds__superhomogeneous__HeadArgContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_52_52, (MR_Integer) 1)));
                    hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
                  }
              }
          }
        if (hlds__make_hlds__superhomogeneous__succeeded)
          {
            MR_Word hlds__make_hlds__superhomogeneous__HeadExpansion_38;
            MR_Word hlds__make_hlds__superhomogeneous__TailExpansions_39;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_54_54;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_55_55;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_56_56;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_57_57;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_58_58;

            {
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__HeadXVar_31, hlds__make_hlds__superhomogeneous__HeadYTerm_33, hlds__make_hlds__superhomogeneous__Context_22, hlds__make_hlds__superhomogeneous__HeadArgContext_36, hlds__make_hlds__superhomogeneous__HeadArgNumber_35, &hlds__make_hlds__superhomogeneous__HeadExpansion_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_40, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_42, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_54_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_44, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_55_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_46, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_56_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_48, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_57_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_50, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_58_58);
            }
            {
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(hlds__make_hlds__superhomogeneous__TailXVars_32, hlds__make_hlds__superhomogeneous__TailYTerms_34, hlds__make_hlds__superhomogeneous__TailArgContexts_37, hlds__make_hlds__superhomogeneous__Context_22, &hlds__make_hlds__superhomogeneous__TailExpansions_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_53_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_54_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_55_55, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_56_56, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_57_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_51);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__superhomogeneous__Expansions_24 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HeadExpansion_38));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TailExpansions_39));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.do_arg_unifications_with_contexts\'/18", (MR_String) "length mismatch");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__5_5,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

    if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9;
      }
    else
      {
        MR_Word hlds__make_hlds__superhomogeneous__YTerm_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__superhomogeneous__YTerms_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__superhomogeneous__XVar_51;
        MR_Word hlds__make_hlds__superhomogeneous__XVars_52;
        MR_Word hlds__make_hlds__superhomogeneous__Expansion_53;
        MR_Word hlds__make_hlds__superhomogeneous__Expansions_54;
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_74_74;
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75;
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_76_76;
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_77_77;
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_78_78;
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_79_79;
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_80_80;
        MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_81_81;
        MR_Integer hlds__make_hlds__superhomogeneous__V_82_82;

        {
          hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(hlds__make_hlds__superhomogeneous__YTerm_44, &hlds__make_hlds__superhomogeneous__XVar_51, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_13, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_74_74);
        }
        {
          hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_51));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_0_6));
        }
        {
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__XVar_51, hlds__make_hlds__superhomogeneous__YTerm_44, hlds__make_hlds__superhomogeneous__HeadVar__2_2, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__HeadVar__5_5, &hlds__make_hlds__superhomogeneous__Expansion_53, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_9, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_11, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_77_77, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_74_74, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_78_78, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_15, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_79_79, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_17, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_80_80, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_81_81);
        }
        hlds__make_hlds__superhomogeneous__V_82_82 = (hlds__make_hlds__superhomogeneous__HeadVar__5_5 + (MR_Integer) 1);
        {
          hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_102_114_101_115_104_95_118_97_114_115_95_95_91_52_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__YTerms_45, hlds__make_hlds__superhomogeneous__HeadVar__2_2, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__V_82_82, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SeenXVars_75_75, &hlds__make_hlds__superhomogeneous__XVars_52, &hlds__make_hlds__superhomogeneous__Expansions_54, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_10, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_77_77, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_12, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_78_78, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_14, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_79_79, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_16, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_80_80, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_18, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_81_81, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVar_51));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__XVars_52));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansion_53));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansions_54));
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
  MR_Integer hlds__make_hlds__superhomogeneous__HeadVar__6_6,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

    if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18;
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16;
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14;
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12;
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10;
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8;
        }
      else
        {
          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.do_arg_unifications\'/19", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word hlds__make_hlds__superhomogeneous__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__superhomogeneous__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));

        if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.do_arg_unifications\'/19", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word hlds__make_hlds__superhomogeneous__YTerm_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__superhomogeneous__YTerms_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__superhomogeneous__Expansion_104;
            MR_Word hlds__make_hlds__superhomogeneous__Expansions_105;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_124_124;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_125_125;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_126_126;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_127_127;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_128_128;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129;
            MR_Integer hlds__make_hlds__superhomogeneous__V_130_130;

            {
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__V_139_139, hlds__make_hlds__superhomogeneous__YTerm_98, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__HeadVar__4_4, hlds__make_hlds__superhomogeneous__HeadVar__6_6, &hlds__make_hlds__superhomogeneous__Expansion_104, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_8, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_124_124, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_10, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_125_125, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_126_126, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_14, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_127_127, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_128_128, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129);
            }
            hlds__make_hlds__superhomogeneous__V_130_130 = (hlds__make_hlds__superhomogeneous__HeadVar__6_6 + (MR_Integer) 1);
            {
              hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__V_138_138, hlds__make_hlds__superhomogeneous__YTerms_99, hlds__make_hlds__superhomogeneous__HeadVar__3_3, hlds__make_hlds__superhomogeneous__HeadVar__4_4, hlds__make_hlds__superhomogeneous__V_130_130, &hlds__make_hlds__superhomogeneous__Expansions_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_124_124, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_9, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_125_125, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_11, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_126_126, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_127_127, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_128_128, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_129_129, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansion_104));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Expansions_105));
            }
          }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_13 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_14 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__3_3;

    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_13 == hlds__make_hlds__superhomogeneous__CastY_14);
    if (hlds__make_hlds__superhomogeneous__succeeded)
      *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__make_hlds__superhomogeneous__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
      else
        *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Integer hlds__make_hlds__superhomogeneous__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__superhomogeneous__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

        if ((hlds__make_hlds__superhomogeneous__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word hlds__make_hlds__superhomogeneous__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer hlds__make_hlds__superhomogeneous__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__superhomogeneous__V_12_12;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0], &hlds__make_hlds__superhomogeneous__V_12_12, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_18_18)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_10_10)));
            }
            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_12_12 == (MR_Integer) 0);
            hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
            if (hlds__make_hlds__superhomogeneous__succeeded)
              *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_12_12;
            else
              {
                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__superhomogeneous__HeadVar__1_1, hlds__make_hlds__superhomogeneous__V_17_17, hlds__make_hlds__superhomogeneous__V_11_11);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_9 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__1_1;
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_10 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;

    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_9 == hlds__make_hlds__superhomogeneous__CastY_10);
    if (hlds__make_hlds__superhomogeneous__succeeded)
      hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
    else
    if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer hlds__make_hlds__superhomogeneous__CastX_3 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__1_1;
        MR_Integer hlds__make_hlds__superhomogeneous__CastY_4 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;

        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastY_4 == hlds__make_hlds__superhomogeneous__CastX_3);
      }
    else
      {
        MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_11_11;
        MR_Word hlds__make_hlds__superhomogeneous__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__superhomogeneous__V_7_7;
        MR_Integer hlds__make_hlds__superhomogeneous__V_8_8;

        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__superhomogeneous__succeeded)
          {
            hlds__make_hlds__superhomogeneous__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
            hlds__make_hlds__superhomogeneous__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
            hlds__make_hlds__superhomogeneous__TypeInfo_11_11 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
            {
              hlds__make_hlds__superhomogeneous__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_11_11, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_5_5)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_7_7)));
            }
            if (hlds__make_hlds__superhomogeneous__succeeded)
              hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_6_6 == hlds__make_hlds__superhomogeneous__V_8_8);
          }
      }
    return hlds__make_hlds__superhomogeneous__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____expansion_0_0(
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_9 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_10 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__3_3;

    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_9 == hlds__make_hlds__superhomogeneous__CastY_10);
    if (hlds__make_hlds__superhomogeneous__succeeded)
      *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__make_hlds__superhomogeneous__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__superhomogeneous__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__superhomogeneous__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__superhomogeneous__V_8_8;

        {
          hlds__make_hlds__superhomogeneous____Compare____maybe_fgti_var_size_0_0(&hlds__make_hlds__superhomogeneous__V_8_8, hlds__make_hlds__superhomogeneous__V_4_4, hlds__make_hlds__superhomogeneous__V_6_6);
        }
        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_8_8 == (MR_Integer) 0);
        hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
        if (hlds__make_hlds__superhomogeneous__succeeded)
          *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_5_5)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_7_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____expansion_0_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_7 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__1_1;
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_8 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;

    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_7 == hlds__make_hlds__superhomogeneous__CastY_8);
    if (hlds__make_hlds__superhomogeneous__succeeded)
      hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_9_9;
        MR_Word hlds__make_hlds__superhomogeneous__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__superhomogeneous__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__superhomogeneous__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));

        {
          hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous____Unify____maybe_fgti_var_size_0_0(hlds__make_hlds__superhomogeneous__V_3_3, hlds__make_hlds__superhomogeneous__V_5_5);
        }
        if (hlds__make_hlds__superhomogeneous__succeeded)
          {
            hlds__make_hlds__superhomogeneous__TypeInfo_9_9 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1];
            {
              hlds__make_hlds__superhomogeneous__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_9_9, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_4_4)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_6_6)));
            }
          }
      }
    return hlds__make_hlds__superhomogeneous__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__superhomogeneous____Compare____arg_context_0_0(
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_43 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_44 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__3_3;

    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_43 == hlds__make_hlds__superhomogeneous__CastY_44);
    if (hlds__make_hlds__superhomogeneous__succeeded)
      *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer hlds__make_hlds__superhomogeneous__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__superhomogeneous__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer hlds__make_hlds__superhomogeneous__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__superhomogeneous__V_8_8;
                  MR_Integer hlds__make_hlds__superhomogeneous__V_57_57 = (MR_Integer) hlds__make_hlds__superhomogeneous__V_56_56;
                  MR_Integer hlds__make_hlds__superhomogeneous__V_58_58 = (MR_Integer) hlds__make_hlds__superhomogeneous__V_6_6;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__superhomogeneous__V_8_8, hlds__make_hlds__superhomogeneous__V_57_57, hlds__make_hlds__superhomogeneous__V_58_58);
                  }
                  hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_8_8 == (MR_Integer) 0);
                  hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
                  if (hlds__make_hlds__superhomogeneous__succeeded)
                    *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_8_8;
                  else
                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__superhomogeneous__HeadVar__1_1, hlds__make_hlds__superhomogeneous__V_55_55, hlds__make_hlds__superhomogeneous__V_7_7);
                    }
                }
                break;
              case (MR_Integer) 1:
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__make_hlds__superhomogeneous__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__superhomogeneous__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    hlds__hlds_pred____Compare____call_id_0_0(hlds__make_hlds__superhomogeneous__HeadVar__1_1, hlds__make_hlds__superhomogeneous__V_51_51, hlds__make_hlds__superhomogeneous__V_21_21);
                  }
                }
                break;
              case (MR_Integer) 2:
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__make_hlds__superhomogeneous__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__superhomogeneous__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__superhomogeneous__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__make_hlds__superhomogeneous__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word hlds__make_hlds__superhomogeneous__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__superhomogeneous__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__superhomogeneous__V_41_41;

                  {
                    parse_tree__prog_data____Compare____cons_id_0_0(&hlds__make_hlds__superhomogeneous__V_41_41, hlds__make_hlds__superhomogeneous__V_54_54, hlds__make_hlds__superhomogeneous__V_38_38);
                  }
                  hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_41_41 == (MR_Integer) 0);
                  hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
                  if (hlds__make_hlds__superhomogeneous__succeeded)
                    *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_41_41;
                  else
                    {
                      MR_Word hlds__make_hlds__superhomogeneous__V_42_42;

                      {
                        hlds__hlds_goal____Compare____unify_main_context_0_0(&hlds__make_hlds__superhomogeneous__V_42_42, hlds__make_hlds__superhomogeneous__V_53_53, hlds__make_hlds__superhomogeneous__V_39_39);
                      }
                      hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_42_42 == (MR_Integer) 0);
                      hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
                      if (hlds__make_hlds__superhomogeneous__succeeded)
                        *hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__V_42_42;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[3], hlds__make_hlds__superhomogeneous__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_52_52)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_40_40)));
                          }
                        }
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous____Unify____arg_context_0_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Integer hlds__make_hlds__superhomogeneous__CastX_15 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__1_1;
    MR_Integer hlds__make_hlds__superhomogeneous__CastY_16 = (MR_Integer) hlds__make_hlds__superhomogeneous__HeadVar__2_2;

    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__CastX_15 == hlds__make_hlds__superhomogeneous__CastY_16);
    if (hlds__make_hlds__superhomogeneous__succeeded)
      hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__make_hlds__superhomogeneous__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer hlds__make_hlds__superhomogeneous__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__superhomogeneous__V_5_5;
            MR_Integer hlds__make_hlds__superhomogeneous__V_6_6;

            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                hlds__make_hlds__superhomogeneous__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
                hlds__make_hlds__superhomogeneous__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
                hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_3_3 == hlds__make_hlds__superhomogeneous__V_5_5);
                if (hlds__make_hlds__superhomogeneous__succeeded)
                  hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__V_4_4 == hlds__make_hlds__superhomogeneous__V_6_6);
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__make_hlds__superhomogeneous__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__superhomogeneous__V_8_8;

            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                hlds__make_hlds__superhomogeneous__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
                {
                  hlds__make_hlds__superhomogeneous__succeeded = hlds__hlds_pred____Unify____call_id_0_0(hlds__make_hlds__superhomogeneous__V_7_7, hlds__make_hlds__superhomogeneous__V_8_8);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_20_20;
            MR_Word hlds__make_hlds__superhomogeneous__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__superhomogeneous__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__superhomogeneous__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__superhomogeneous__V_12_12;
            MR_Word hlds__make_hlds__superhomogeneous__V_13_13;
            MR_Word hlds__make_hlds__superhomogeneous__V_14_14;

            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                hlds__make_hlds__superhomogeneous__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
                hlds__make_hlds__superhomogeneous__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
                hlds__make_hlds__superhomogeneous__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 2)));
                {
                  hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(hlds__make_hlds__superhomogeneous__V_9_9, hlds__make_hlds__superhomogeneous__V_12_12);
                }
                if (hlds__make_hlds__superhomogeneous__succeeded)
                  {
                    {
                      hlds__make_hlds__superhomogeneous__succeeded = hlds__hlds_goal____Unify____unify_main_context_0_0(hlds__make_hlds__superhomogeneous__V_10_10, hlds__make_hlds__superhomogeneous__V_13_13);
                    }
                    if (hlds__make_hlds__superhomogeneous__succeeded)
                      {
                        hlds__make_hlds__superhomogeneous__TypeInfo_20_20 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[3];
                        {
                          hlds__make_hlds__superhomogeneous__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_20_20, ((MR_Box) (hlds__make_hlds__superhomogeneous__V_11_11)), ((MR_Box) (hlds__make_hlds__superhomogeneous__V_14_14)));
                        }
                      }
                  }
              }
          }
          break;
      }
    return hlds__make_hlds__superhomogeneous__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_var_no_svar_5_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__Arg_6,
  MR_Word * hlds__make_hlds__superhomogeneous__Var_7,
  MR_Word hlds__make_hlds__superhomogeneous__Vars0_8,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__Arg_6)) == (MR_mktag((MR_Integer) 1)));
    MR_Word hlds__make_hlds__superhomogeneous__ArgVar_10;
    MR_Word hlds__make_hlds__superhomogeneous__V_11_11;
    MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_15_15;

    if (hlds__make_hlds__superhomogeneous__succeeded)
      {
        hlds__make_hlds__superhomogeneous__ArgVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_6, (MR_Integer) 0)));
        hlds__make_hlds__superhomogeneous__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_6, (MR_Integer) 1)));
        hlds__make_hlds__superhomogeneous__TypeInfo_15_15 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
        {
          hlds__make_hlds__superhomogeneous__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_15_15, ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgVar_10)), hlds__make_hlds__superhomogeneous__Vars0_8);
        }
        hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
      }
    if (hlds__make_hlds__superhomogeneous__succeeded)
      {
        *hlds__make_hlds__superhomogeneous__Var_7 = hlds__make_hlds__superhomogeneous__ArgVar_10;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12;
      }
    else
      {
        {
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__Var_7, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_12, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_13);
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_9_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_3,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_5,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_7,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__superhomogeneous__succeeded;

        if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_9 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8;
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_7 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6;
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_5 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4;
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_3 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2;
          }
        else
          {
            MR_Word hlds__make_hlds__superhomogeneous__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__superhomogeneous__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__superhomogeneous__Var_28;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38_38;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_39_39;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40;
            MR_Word hlds__make_hlds__superhomogeneous__Arg_57;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60;
            MR_Word hlds__make_hlds__superhomogeneous__ArgVar_58;
            MR_Word hlds__make_hlds__superhomogeneous__V_59_59;
            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_29_64;

            {
              hlds__make_hlds__state_var__substitute_state_var_mapping_8_p_0(hlds__make_hlds__superhomogeneous__Arg_22, &hlds__make_hlds__superhomogeneous__Arg_57, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_39_39);
            }
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__Arg_57)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                hlds__make_hlds__superhomogeneous__ArgVar_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_57, (MR_Integer) 0)));
                hlds__make_hlds__superhomogeneous__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Arg_57, (MR_Integer) 1)));
                hlds__make_hlds__superhomogeneous__TypeInfo_29_64 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
                {
                  hlds__make_hlds__superhomogeneous__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_29_64, ((MR_Box) (hlds__make_hlds__superhomogeneous__ArgVar_58)), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2);
                }
                hlds__make_hlds__superhomogeneous__succeeded = !(hlds__make_hlds__superhomogeneous__succeeded);
              }
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                hlds__make_hlds__superhomogeneous__Var_28 = hlds__make_hlds__superhomogeneous__ArgVar_58;
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60;
              }
            else
              {
                {
                  mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__make_hlds__superhomogeneous__Var_28, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_25_60, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37);
                }
              }
            {
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Var_28));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2));
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1 = hlds__make_hlds__superhomogeneous__Args_23;
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0__tmp_copy_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_40_40;
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0__tmp_copy_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_37_37;
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0__tmp_copy_6 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_38_38;
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0__tmp_copy_8 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_39_39;

              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_8 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0__tmp_copy_8;
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_6 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0__tmp_copy_6;
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0__tmp_copy_4;
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_RevVars_0__tmp_copy_2;
              hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__ModuleInfo_1,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__2_2,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__3_3,
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__4_4,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__5_5,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__6_6,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__7_7,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__8_8)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

    if ((hlds__make_hlds__superhomogeneous__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__make_hlds__superhomogeneous__succeeded)
          {
            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
              }
          }
      }
    else
      {
        MR_Word hlds__make_hlds__superhomogeneous__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__superhomogeneous__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__superhomogeneous__LambdaVar_13;
        MR_Word hlds__make_hlds__superhomogeneous__LambdaVars_14;
        MR_Word hlds__make_hlds__superhomogeneous__Mode_15;
        MR_Word hlds__make_hlds__superhomogeneous__Modes_16;
        MR_Word hlds__make_hlds__superhomogeneous__InputArgs0_21;
        MR_Word hlds__make_hlds__superhomogeneous__OutputArgs0_22;
        MR_Word hlds__make_hlds__superhomogeneous__InputLambdaVars0_23;
        MR_Word hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24;

        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__superhomogeneous__succeeded)
          {
            hlds__make_hlds__superhomogeneous__LambdaVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 0)));
            hlds__make_hlds__superhomogeneous__LambdaVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__3_3, (MR_Integer) 1)));
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                hlds__make_hlds__superhomogeneous__Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__4_4, (MR_Integer) 0)));
                hlds__make_hlds__superhomogeneous__Modes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__4_4, (MR_Integer) 1)));
                {
                  hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(hlds__make_hlds__superhomogeneous__ModuleInfo_1, hlds__make_hlds__superhomogeneous__Args_12, hlds__make_hlds__superhomogeneous__LambdaVars_14, hlds__make_hlds__superhomogeneous__Modes_16, &hlds__make_hlds__superhomogeneous__InputArgs0_21, &hlds__make_hlds__superhomogeneous__OutputArgs0_22, &hlds__make_hlds__superhomogeneous__InputLambdaVars0_23, &hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24);
                }
                if (hlds__make_hlds__superhomogeneous__succeeded)
                  {
                    {
                      hlds__make_hlds__superhomogeneous__succeeded = check_hlds__mode_util__mode_is_undefined_2_p_0(hlds__make_hlds__superhomogeneous__ModuleInfo_1, hlds__make_hlds__superhomogeneous__Mode_15);
                    }
                    if (hlds__make_hlds__superhomogeneous__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arg_11));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputArgs0_21));
                        }
                        *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = hlds__make_hlds__superhomogeneous__OutputArgs0_22;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVar_13));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputLambdaVars0_23));
                        }
                        *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24;
                      }
                    else
                      {
                        {
                          hlds__make_hlds__superhomogeneous__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(hlds__make_hlds__superhomogeneous__ModuleInfo_1, hlds__make_hlds__superhomogeneous__Mode_15);
                        }
                        if (hlds__make_hlds__superhomogeneous__succeeded)
                          {
                            *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = hlds__make_hlds__superhomogeneous__InputArgs0_21;
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arg_11));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__OutputArgs0_22));
                            }
                            *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = hlds__make_hlds__superhomogeneous__InputLambdaVars0_23;
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVar_13));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24));
                            }
                          }
                        else
                          {
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *hlds__make_hlds__superhomogeneous__HeadVar__5_5 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Arg_11));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputArgs0_21));
                            }
                            *hlds__make_hlds__superhomogeneous__HeadVar__6_6 = hlds__make_hlds__superhomogeneous__OutputArgs0_22;
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *hlds__make_hlds__superhomogeneous__HeadVar__7_7 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVar_13));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__InputLambdaVars0_23));
                            }
                            *hlds__make_hlds__superhomogeneous__HeadVar__8_8 = hlds__make_hlds__superhomogeneous__OutputLambdaVars0_24;
                          }
                      }
                    hlds__make_hlds__superhomogeneous__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return hlds__make_hlds__superhomogeneous__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__build_lambda_expression_25_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__X_26,
  MR_Word hlds__make_hlds__superhomogeneous__UnificationPurity_27,
  MR_Word hlds__make_hlds__superhomogeneous__LambdaPurity_28,
  MR_Word hlds__make_hlds__superhomogeneous__Groundness_29,
  MR_Word hlds__make_hlds__superhomogeneous__PredOrFunc_30,
  MR_Word hlds__make_hlds__superhomogeneous__Args0_32,
  MR_Word hlds__make_hlds__superhomogeneous__Modes_33,
  MR_Word hlds__make_hlds__superhomogeneous__Det_34,
  MR_Word hlds__make_hlds__superhomogeneous__ParsedGoal_35,
  MR_Word hlds__make_hlds__superhomogeneous__Context_36,
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_37,
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_38,
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_39,
  MR_Word hlds__make_hlds__superhomogeneous__OutsideSVarState_40,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Word hlds__make_hlds__superhomogeneous__StateVar_46;

    {
      hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_3_p_0(hlds__make_hlds__superhomogeneous__PredOrFunc_30, hlds__make_hlds__superhomogeneous__Args0_32, &hlds__make_hlds__superhomogeneous__StateVar_46);
    }
    if (hlds__make_hlds__superhomogeneous__succeeded)
      {
        {
          hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84, hlds__make_hlds__superhomogeneous__StateVar_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);
        }
        {
          *hlds__make_hlds__superhomogeneous__Goal_39 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_36);
        }
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82;
      }
    else
      {
        MR_Word hlds__make_hlds__superhomogeneous__StateVar_167;

        {
          hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_p_0(hlds__make_hlds__superhomogeneous__Args0_32, &hlds__make_hlds__superhomogeneous__StateVar_167);
        }
        if (hlds__make_hlds__superhomogeneous__succeeded)
          {
            {
              hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84, hlds__make_hlds__superhomogeneous__StateVar_167, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);
            }
            {
              *hlds__make_hlds__superhomogeneous__Goal_39 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_36);
            }
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88;
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86;
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84;
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82;
          }
        else
          {
            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_168_168;
            MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169;
            MR_Word hlds__make_hlds__superhomogeneous__TypeInfo_170_170;
            MR_Word hlds__make_hlds__superhomogeneous__Args_48;
            MR_Word hlds__make_hlds__superhomogeneous__FinalSVarMap_49;
            MR_Word hlds__make_hlds__superhomogeneous__InitialSVarState_50;
            MR_Integer hlds__make_hlds__superhomogeneous__NumArgs_51;
            MR_Word hlds__make_hlds__superhomogeneous__LambdaVars_52;
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputArgs_57;
            MR_Word hlds__make_hlds__superhomogeneous__OutputArgs_58;
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputLambdaVars_59;
            MR_Word hlds__make_hlds__superhomogeneous__OutputLambdaVars_60;
            MR_Word hlds__make_hlds__superhomogeneous__Substitution_61;
            MR_Word hlds__make_hlds__superhomogeneous__ArgContext_62;
            MR_Word hlds__make_hlds__superhomogeneous__HeadBefore0_63;
            MR_Word hlds__make_hlds__superhomogeneous__HeadBefore_64;
            MR_Word hlds__make_hlds__superhomogeneous__Body_65;
            MR_Word hlds__make_hlds__superhomogeneous__HeadAfter0_66;
            MR_Word hlds__make_hlds__superhomogeneous__HeadAfter_67;
            MR_Word hlds__make_hlds__superhomogeneous__FinalSVarState_70;
            MR_Word hlds__make_hlds__superhomogeneous__HLDS_Goal0_71;
            MR_Word hlds__make_hlds__superhomogeneous__QuantifiedArgs_72;
            MR_Word hlds__make_hlds__superhomogeneous__QuantifiedVars0_74;
            MR_Word hlds__make_hlds__superhomogeneous__QuantifiedVars_75;
            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_76;
            MR_Word hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77;
            MR_Word hlds__make_hlds__superhomogeneous__HLDS_Goal_78;
            MR_Word hlds__make_hlds__superhomogeneous__LambdaNonLocals_80;
            MR_Word hlds__make_hlds__superhomogeneous__LambdaRHS_81;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_95_95;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_96_96;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_98_98;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_103_103;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_104_104;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_105_105;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_106_106;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_107_107;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_109_109;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_110_110;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_111_111;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_112_112;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_113_113;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_114_114;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_116_116;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_119_119;
            MR_Word hlds__make_hlds__superhomogeneous__V_156_156;
            MR_Word hlds__make_hlds__superhomogeneous__V_158_158;
            MR_Word hlds__make_hlds__superhomogeneous__V_159_159;
            MR_Word hlds__make_hlds__superhomogeneous__V_161_161;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_162_162;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_163_163;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_164_164;
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputArgs0_53;
            MR_Word hlds__make_hlds__superhomogeneous__OutputArgs0_54;
            MR_Word hlds__make_hlds__superhomogeneous__NonOutputLambdaVars0_55;
            MR_Word hlds__make_hlds__superhomogeneous__OutputLambdaVars0_56;

            {
              hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__Args0_32, &hlds__make_hlds__superhomogeneous__Args_48, &hlds__make_hlds__superhomogeneous__FinalSVarMap_49, hlds__make_hlds__superhomogeneous__OutsideSVarState_40, &hlds__make_hlds__superhomogeneous__InitialSVarState_50, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_84, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_95_95, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_90, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_96_96);
            }
            hlds__make_hlds__superhomogeneous__TypeInfo_168_168 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[2];
            {
              mercury__list__length_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_168_168, hlds__make_hlds__superhomogeneous__Args_48, &hlds__make_hlds__superhomogeneous__NumArgs_51);
            }
            hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169, (MR_String) "LambdaHeadVar__", hlds__make_hlds__superhomogeneous__NumArgs_51, &hlds__make_hlds__superhomogeneous__LambdaVars_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_95_95, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_98_98);
            }
            {
              hlds__make_hlds__superhomogeneous__succeeded = hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_p_0(hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86, hlds__make_hlds__superhomogeneous__Args_48, hlds__make_hlds__superhomogeneous__LambdaVars_52, hlds__make_hlds__superhomogeneous__Modes_33, &hlds__make_hlds__superhomogeneous__NonOutputArgs0_53, &hlds__make_hlds__superhomogeneous__OutputArgs0_54, &hlds__make_hlds__superhomogeneous__NonOutputLambdaVars0_55, &hlds__make_hlds__superhomogeneous__OutputLambdaVars0_56);
            }
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                hlds__make_hlds__superhomogeneous__NonOutputArgs_57 = hlds__make_hlds__superhomogeneous__NonOutputArgs0_53;
                hlds__make_hlds__superhomogeneous__OutputArgs_58 = hlds__make_hlds__superhomogeneous__OutputArgs0_54;
                hlds__make_hlds__superhomogeneous__NonOutputLambdaVars_59 = hlds__make_hlds__superhomogeneous__NonOutputLambdaVars0_55;
                hlds__make_hlds__superhomogeneous__OutputLambdaVars_60 = hlds__make_hlds__superhomogeneous__OutputLambdaVars0_56;
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.build_lambda_expression\'/25", (MR_String) "mismatched lists");
                  return;
                }
              }
            hlds__make_hlds__superhomogeneous__TypeInfo_170_170 = (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0];
            {
              mercury__map__init_1_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_170_170, hlds__make_hlds__superhomogeneous__TypeInfo_170_170, &hlds__make_hlds__superhomogeneous__Substitution_61);
            }
            {
              hlds__make_hlds__superhomogeneous__ArgContext_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_62, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__PredOrFunc_30));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ArgContext_62, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__NumArgs_51));
            }
            {
              hlds__make_hlds__superhomogeneous__HeadBefore0_63 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_36);
            }
            {
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__superhomogeneous__NonOutputLambdaVars_59, hlds__make_hlds__superhomogeneous__NonOutputArgs_57, hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__ArgContext_62, hlds__make_hlds__superhomogeneous__HeadBefore0_63, &hlds__make_hlds__superhomogeneous__HeadBefore_64, hlds__make_hlds__superhomogeneous__InitialSVarState_50, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_82, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_103_103, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_98_98, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_86, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_105_105, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_88, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_106_106, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_96_96, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_107_107);
            }
            {
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0((MR_Integer) 0, hlds__make_hlds__superhomogeneous__ParsedGoal_35, hlds__make_hlds__superhomogeneous__Substitution_61, &hlds__make_hlds__superhomogeneous__Body_65, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_102_102, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_109_109, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_103_103, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_110_110, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_104_104, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_105_105, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_106_106, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_107_107, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_114_114);
            }
            {
              hlds__make_hlds__superhomogeneous__HeadAfter0_66 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__superhomogeneous__Context_36);
            }
            {
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__superhomogeneous__OutputLambdaVars_60, hlds__make_hlds__superhomogeneous__OutputArgs_58, hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__ArgContext_62, hlds__make_hlds__superhomogeneous__HeadAfter0_66, &hlds__make_hlds__superhomogeneous__HeadAfter_67, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_109_109, &hlds__make_hlds__superhomogeneous__FinalSVarState_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_110_110, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_116_116, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_85, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_87, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_113_113, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_119_119, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_114_114, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_91);
            }
            {
              hlds__make_hlds__superhomogeneous__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HeadAfter_67));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__superhomogeneous__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Body_65));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_158_158, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_159_159));
            }
            {
              hlds__make_hlds__superhomogeneous__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HeadBefore_64));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_156_156, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_158_158));
            }
            {
              hlds__make_hlds__state_var__svar_finish_lambda_body_8_p_0(hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__FinalSVarMap_49, hlds__make_hlds__superhomogeneous__V_156_156, &hlds__make_hlds__superhomogeneous__HLDS_Goal0_71, hlds__make_hlds__superhomogeneous__InitialSVarState_50, hlds__make_hlds__superhomogeneous__FinalSVarState_70, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_116_116, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_83);
            }
            switch (hlds__make_hlds__superhomogeneous__PredOrFunc_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__superhomogeneous___ReturnValTerm_73;
                  MR_Box hlds__make_hlds__superhomogeneous__conv0__ReturnValTerm_73;

                  {
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_168_168, hlds__make_hlds__superhomogeneous__Args_48, &hlds__make_hlds__superhomogeneous__QuantifiedArgs_72, &hlds__make_hlds__superhomogeneous__conv0__ReturnValTerm_73);
                  }
                  hlds__make_hlds__superhomogeneous___ReturnValTerm_73 = ((MR_Word) hlds__make_hlds__superhomogeneous__conv0__ReturnValTerm_73);
                }
                break;
              case (MR_Integer) 0:
                hlds__make_hlds__superhomogeneous__QuantifiedArgs_72 = hlds__make_hlds__superhomogeneous__Args_48;
                break;
            }
            {
              mercury__term__vars_list_2_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169, hlds__make_hlds__superhomogeneous__QuantifiedArgs_72, &hlds__make_hlds__superhomogeneous__QuantifiedVars0_74);
            }
            {
              mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__superhomogeneous__TypeInfo_170_170, hlds__make_hlds__superhomogeneous__QuantifiedVars0_74, &hlds__make_hlds__superhomogeneous__QuantifiedVars_75);
            }
            {
              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_36, &hlds__make_hlds__superhomogeneous__GoalInfo_76);
            }
            {
              hlds__make_hlds__superhomogeneous__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__QuantifiedVars_75));
            }
            {
              hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_161_161));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HLDS_Goal0_71));
            }
            {
              hlds__make_hlds__superhomogeneous__HLDS_Goal_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HLDS_Goal_78, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HLDS_GoalExpr_77));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HLDS_Goal_78, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_76));
            }
            {
              hlds__goal_util__goal_vars_2_p_0(hlds__make_hlds__superhomogeneous__HLDS_Goal_78, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_162_162);
            }
            {
              parse_tree__set_of_var__delete_list_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169, hlds__make_hlds__superhomogeneous__LambdaVars_52, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_162_162, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_163_163);
            }
            {
              parse_tree__set_of_var__delete_list_3_p_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169, hlds__make_hlds__superhomogeneous__QuantifiedVars_75, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_163_163, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_164_164);
            }
            {
              hlds__make_hlds__superhomogeneous__LambdaNonLocals_80 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_169_169, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_LambdaGoalVars_164_164);
            }
            {
              hlds__make_hlds__superhomogeneous__LambdaRHS_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 0) = ((MR_Box) ((hlds__make_hlds__superhomogeneous__LambdaPurity_28 | ((((hlds__make_hlds__superhomogeneous__Groundness_29 << (MR_Integer) 2)) | ((hlds__make_hlds__superhomogeneous__PredOrFunc_30 << (MR_Integer) 3)))))));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 1) = (MR_Integer) 0;
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaNonLocals_80));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LambdaVars_52));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 4) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Modes_33));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 5) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Det_34));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__LambdaRHS_81, 6) = ((MR_Box) (hlds__make_hlds__superhomogeneous__HLDS_Goal_78));
            }
            {
              hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__superhomogeneous__X_26, hlds__make_hlds__superhomogeneous__LambdaRHS_81, hlds__make_hlds__superhomogeneous__Context_36, hlds__make_hlds__superhomogeneous__MainContext_37, hlds__make_hlds__superhomogeneous__SubContext_38, hlds__make_hlds__superhomogeneous__UnificationPurity_27, hlds__make_hlds__superhomogeneous__Goal_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_119_119, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_89);
            }
          }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__Modes0_8,
  MR_Word * hlds__make_hlds__superhomogeneous__Modes_9,
  MR_Word hlds__make_hlds__superhomogeneous__Context_10,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Word hlds__make_hlds__superhomogeneous__MaybeOptImported_13;

    {
      hlds__make_hlds__qual_info__qual_info_get_maybe_opt_imported_2_p_0(hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, &hlds__make_hlds__superhomogeneous__MaybeOptImported_13);
    }
    switch (hlds__make_hlds__superhomogeneous__MaybeOptImported_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__superhomogeneous__MQInfo0_14;
          MR_Word hlds__make_hlds__superhomogeneous__MQInfo_15;

          {
            hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, &hlds__make_hlds__superhomogeneous__MQInfo0_14);
          }
          {
            parse_tree__module_qual__qualify_lambda_mode_list_8_p_0((MR_Integer) 0, hlds__make_hlds__superhomogeneous__Context_10, hlds__make_hlds__superhomogeneous__Modes0_8, hlds__make_hlds__superhomogeneous__Modes_9, hlds__make_hlds__superhomogeneous__MQInfo0_14, &hlds__make_hlds__superhomogeneous__MQInfo_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19);
          }
          {
            hlds__make_hlds__qual_info__qual_info_set_mq_info_3_p_0(hlds__make_hlds__superhomogeneous__MQInfo_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *hlds__make_hlds__superhomogeneous__Modes_9 = hlds__make_hlds__superhomogeneous__Modes0_8;
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_17 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_16;
          *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__convert_big_integer_functor_5_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__Functor0_6,
  MR_Word * hlds__make_hlds__superhomogeneous__Functor_7,
  MR_Word hlds__make_hlds__superhomogeneous__Context_8,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__Functor0_6)) == (MR_mktag((MR_Integer) 2)));
    MR_Word hlds__make_hlds__superhomogeneous__Base_10;
    MR_Word hlds__make_hlds__superhomogeneous__Integer_11;

    if (hlds__make_hlds__superhomogeneous__succeeded)
      {
        hlds__make_hlds__superhomogeneous__Base_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__Functor0_6, (MR_Integer) 0)));
        hlds__make_hlds__superhomogeneous__Integer_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__superhomogeneous__Functor0_6, (MR_Integer) 1)));
        {
          MR_Integer hlds__make_hlds__superhomogeneous__Int_12;

          {
            hlds__make_hlds__superhomogeneous__succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(hlds__make_hlds__superhomogeneous__Base_10, hlds__make_hlds__superhomogeneous__Integer_11, &hlds__make_hlds__superhomogeneous__Int_12);
          }
          if (hlds__make_hlds__superhomogeneous__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__superhomogeneous__Functor_7 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Int_12));
              }
              *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18;
            }
          else
            {
              MR_String hlds__make_hlds__superhomogeneous__BasePrefix_13;
              MR_String hlds__make_hlds__superhomogeneous__IntString_14;
              MR_Word hlds__make_hlds__superhomogeneous__Pieces_15;
              MR_Word hlds__make_hlds__superhomogeneous__Msg_16;
              MR_Word hlds__make_hlds__superhomogeneous__Spec_17;
              MR_Integer hlds__make_hlds__superhomogeneous__V_20_20;
              MR_Word hlds__make_hlds__superhomogeneous__V_23_23;
              MR_Word hlds__make_hlds__superhomogeneous__V_24_24;
              MR_String hlds__make_hlds__superhomogeneous__V_25_25;
              MR_Word hlds__make_hlds__superhomogeneous__V_30_30;
              MR_Word hlds__make_hlds__superhomogeneous__V_31_31;
              MR_Word hlds__make_hlds__superhomogeneous__V_35_35;

              {
                hlds__make_hlds__superhomogeneous__BasePrefix_13 = mercury__term_io__integer_base_prefix_1_f_0(hlds__make_hlds__superhomogeneous__Base_10);
              }
              {
                hlds__make_hlds__superhomogeneous__V_20_20 = mercury__term_io__integer_base_int_1_f_0(hlds__make_hlds__superhomogeneous__Base_10);
              }
              {
                hlds__make_hlds__superhomogeneous__IntString_14 = mercury__integer__to_base_string_2_f_0(hlds__make_hlds__superhomogeneous__Integer_11, hlds__make_hlds__superhomogeneous__V_20_20);
              }
              {
                hlds__make_hlds__superhomogeneous__V_25_25 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__BasePrefix_13, hlds__make_hlds__superhomogeneous__IntString_14);
              }
              {
                hlds__make_hlds__superhomogeneous__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_25_25));
              }
              {
                hlds__make_hlds__superhomogeneous__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_24_24));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_1[6])));
              }
              {
                hlds__make_hlds__superhomogeneous__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__superhomogeneous_scalar_common_1[4])));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__Pieces_15, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_23_23));
              }
              {
                hlds__make_hlds__superhomogeneous__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Pieces_15));
              }
              {
                hlds__make_hlds__superhomogeneous__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_31_31));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__superhomogeneous__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Msg_16, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Context_8));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Msg_16, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_30_30));
              }
              {
                hlds__make_hlds__superhomogeneous__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Msg_16));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__superhomogeneous__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_35_35));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Spec_17));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18));
              }
              *hlds__make_hlds__superhomogeneous__Functor_7 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__superhomogeneous_scalar_common_5[0]);
            }
        }
      }
    else
      {
        *hlds__make_hlds__superhomogeneous__Functor_7 = hlds__make_hlds__superhomogeneous__Functor0_6;
        *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_19 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_18;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word * hlds__make_hlds__superhomogeneous__GoalCord_4)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Word hlds__make_hlds__superhomogeneous__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));

    *hlds__make_hlds__superhomogeneous__GoalCord_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_3,
  MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4,
  MR_Integer * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__superhomogeneous__succeeded;

        if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_5 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4;
            *hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_3 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2;
          }
        else
          {
            MR_Word hlds__make_hlds__superhomogeneous__Expansion_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__superhomogeneous__Expansions_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__superhomogeneous__MaybeFGTI_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_12, (MR_Integer) 0)));
            MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24;
            MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25;
            MR_Word hlds__make_hlds__superhomogeneous__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_12, (MR_Integer) 1)));

            if ((hlds__make_hlds__superhomogeneous__MaybeFGTI_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25 = (MR_Integer) 0;
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4;
              }
            else
              {
                MR_Integer hlds__make_hlds__superhomogeneous__Size_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_16, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__superhomogeneous__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_16, (MR_Integer) 0)));

                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24 = (hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4 + hlds__make_hlds__superhomogeneous__Size_19);
                hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2;
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1 = hlds__make_hlds__superhomogeneous__Expansions_13;
              MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0__tmp_copy_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_25_25;
              MR_Integer hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0__tmp_copy_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_24_24;

              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0_4 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_TotalSize_0__tmp_copy_4;
              hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0_2 = hlds__make_hlds__superhomogeneous__STATE_VARIABLE_AllFGTI_0__tmp_copy_2;
              hlds__make_hlds__superhomogeneous__HeadVar__1_1 = hlds__make_hlds__superhomogeneous__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_2(
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
    MR_Word hlds__make_hlds__superhomogeneous__conv1_GoalCord_4;

    {
      hlds__make_hlds__superhomogeneous__project_expansion_goals_2_p_0(((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv1_GoalCord_4);
    }
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv1_GoalCord_4));
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1(
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

    {
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_7,
  MR_Word hlds__make_hlds__superhomogeneous__TermVar_8,
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_9,
  MR_Integer hlds__make_hlds__superhomogeneous__BaseGoalSize_10,
  MR_Word hlds__make_hlds__superhomogeneous__ArgExpansions_11,
  MR_Word * hlds__make_hlds__superhomogeneous__Expansion_12)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Word hlds__make_hlds__superhomogeneous__AllFGTI_13;
    MR_Integer hlds__make_hlds__superhomogeneous__TotalSize_14;

    {
      hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_loop_5_p_0(hlds__make_hlds__superhomogeneous__ArgExpansions_11, (MR_Integer) 1, &hlds__make_hlds__superhomogeneous__AllFGTI_13, hlds__make_hlds__superhomogeneous__BaseGoalSize_10, &hlds__make_hlds__superhomogeneous__TotalSize_14);
    }
    switch (hlds__make_hlds__superhomogeneous__AllFGTI_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30;
          MR_Word hlds__make_hlds__superhomogeneous__ArgGoalCords_15;
          MR_Word hlds__make_hlds__superhomogeneous__ArgGoalsCord_16;
          MR_Word hlds__make_hlds__superhomogeneous__GoalCord_17;
          MR_Word hlds__make_hlds__superhomogeneous__V_21_21;

          {
            hlds__make_hlds__superhomogeneous__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__append_expansions_after_goal_top_ftgi_6_p_0_1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_21_21, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_7));
          }
          {
            mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_21_21, hlds__make_hlds__superhomogeneous__ArgExpansions_11, &hlds__make_hlds__superhomogeneous__ArgGoalCords_15);
          }
          hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
          {
            hlds__make_hlds__superhomogeneous__ArgGoalsCord_16 = mercury__cord__cord_list_to_cord_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30, hlds__make_hlds__superhomogeneous__ArgGoalCords_15);
          }
          {
            hlds__make_hlds__superhomogeneous__GoalCord_17 = mercury__cord__cons_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_30_30, ((MR_Box) (hlds__make_hlds__superhomogeneous__BaseGoal_9)), hlds__make_hlds__superhomogeneous__ArgGoalsCord_16);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *hlds__make_hlds__superhomogeneous__Expansion_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_17));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35;
          MR_Word hlds__make_hlds__superhomogeneous__V_20_20;
          MR_Word hlds__make_hlds__superhomogeneous__ArgGoalCords_23;
          MR_Word hlds__make_hlds__superhomogeneous__ArgGoalsCord_24;
          MR_Word hlds__make_hlds__superhomogeneous__GoalCord_25;

          {
            mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_4[0], hlds__make_hlds__superhomogeneous__ArgExpansions_11, &hlds__make_hlds__superhomogeneous__ArgGoalCords_23);
          }
          hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
          {
            hlds__make_hlds__superhomogeneous__ArgGoalsCord_24 = mercury__cord__cord_list_to_cord_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35, hlds__make_hlds__superhomogeneous__ArgGoalCords_23);
          }
          {
            hlds__make_hlds__superhomogeneous__GoalCord_25 = mercury__cord__cons_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_35_35, ((MR_Box) (hlds__make_hlds__superhomogeneous__BaseGoal_9)), hlds__make_hlds__superhomogeneous__ArgGoalsCord_24);
          }
          {
            hlds__make_hlds__superhomogeneous__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermVar_8));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TotalSize_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *hlds__make_hlds__superhomogeneous__Expansion_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_20_20));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalCord_25));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1(
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

    {
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
  MR_Word hlds__make_hlds__superhomogeneous__Expansions_6,
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18;
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_9;
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCords_10;
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_11;
    MR_Word hlds__make_hlds__superhomogeneous__V_12_12;
    MR_Word hlds__make_hlds__superhomogeneous__V_13_13;

    {
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__BaseGoal_7, &hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
    {
      hlds__make_hlds__superhomogeneous__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_expansions_before_goal_top_not_fgti_4_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_12_12, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_5));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_12_12, hlds__make_hlds__superhomogeneous__Expansions_6, &hlds__make_hlds__superhomogeneous__ExpansionGoalCords_10);
    }
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      hlds__make_hlds__superhomogeneous__ExpansionGoals_11 = mercury__cord__cord_list_to_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18, hlds__make_hlds__superhomogeneous__ExpansionGoalCords_10);
    }
    {
      hlds__make_hlds__superhomogeneous__V_13_13 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_18, hlds__make_hlds__superhomogeneous__ExpansionGoals_11, hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_13_13, hlds__make_hlds__superhomogeneous__GoalInfo_5, hlds__make_hlds__superhomogeneous__Goal_8);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_expansion_before_goal_top_not_fgti_4_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_5,
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_6,
  MR_Word hlds__make_hlds__superhomogeneous__BaseGoal_7,
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_8)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13;
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_9;
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCord_10;
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_11;
    MR_Word hlds__make_hlds__superhomogeneous__V_12_12;

    {
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__BaseGoal_7, &hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
    {
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_5, hlds__make_hlds__superhomogeneous__Expansion_6, &hlds__make_hlds__superhomogeneous__ExpansionGoalCord_10);
    }
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      hlds__make_hlds__superhomogeneous__ExpansionGoals_11 = mercury__cord__list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13, hlds__make_hlds__superhomogeneous__ExpansionGoalCord_10);
    }
    {
      hlds__make_hlds__superhomogeneous__V_12_12 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_13_13, hlds__make_hlds__superhomogeneous__ExpansionGoals_11, hlds__make_hlds__superhomogeneous__BaseGoals_9);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_12_12, hlds__make_hlds__superhomogeneous__GoalInfo_5, hlds__make_hlds__superhomogeneous__Goal_8);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__HeadVar__1_1,
  MR_Word * hlds__make_hlds__superhomogeneous__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;

    if ((hlds__make_hlds__superhomogeneous__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__superhomogeneous__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__make_hlds__superhomogeneous__Goal0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__superhomogeneous__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__superhomogeneous__Goal_5;
        MR_Word hlds__make_hlds__superhomogeneous__Goals_6;
        MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_3, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__superhomogeneous__GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_3, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__superhomogeneous__LHSVar_9;
        MR_Word hlds__make_hlds__superhomogeneous__RHSVars_16;
        MR_Word hlds__make_hlds__superhomogeneous__RHS_10;
        MR_Word hlds__make_hlds__superhomogeneous__V_11_11;
        MR_Word hlds__make_hlds__superhomogeneous__V_12_12;
        MR_Word hlds__make_hlds__superhomogeneous__V_13_13;
        MR_Word hlds__make_hlds__superhomogeneous__V_14_14;
        MR_Word hlds__make_hlds__superhomogeneous__V_15_15;

        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__GoalExpr_7)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__superhomogeneous__succeeded)
          {
            hlds__make_hlds__superhomogeneous__LHSVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 0)));
            hlds__make_hlds__superhomogeneous__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 1)));
            hlds__make_hlds__superhomogeneous__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 2)));
            hlds__make_hlds__superhomogeneous__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 3)));
            hlds__make_hlds__superhomogeneous__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__GoalExpr_7, (MR_Integer) 4)));
            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__RHS_10)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                hlds__make_hlds__superhomogeneous__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__RHS_10, (MR_Integer) 0)));
                hlds__make_hlds__superhomogeneous__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__RHS_10, (MR_Integer) 1)));
                hlds__make_hlds__superhomogeneous__RHSVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__RHS_10, (MR_Integer) 2)));
              }
          }
        if (hlds__make_hlds__superhomogeneous__succeeded)
          {
            MR_Word hlds__make_hlds__superhomogeneous__NonLocals_17;
            MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_18;
            MR_Word hlds__make_hlds__superhomogeneous__V_19_19;

            {
              hlds__make_hlds__superhomogeneous__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__LHSVar_9));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__RHSVars_16));
            }
            {
              parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__V_19_19, &hlds__make_hlds__superhomogeneous__NonLocals_17);
            }
            {
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__superhomogeneous__NonLocals_17, hlds__make_hlds__superhomogeneous__GoalInfo0_8, &hlds__make_hlds__superhomogeneous__GoalInfo_18);
            }
            {
              hlds__make_hlds__superhomogeneous__Goal_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_5, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_7));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal_5, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_18));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.superhomogeneous", (MR_String) "predicate \140hlds.make_hlds.superhomogeneous.mark_nonlocals_in_ground_term_initial\'/2", (MR_String) "wrong shape goal");
              return;
            }
          }
        {
          hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(hlds__make_hlds__superhomogeneous__Goals0_4, &hlds__make_hlds__superhomogeneous__Goals_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__superhomogeneous__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Goal_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Goals_6));
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
  MR_Word * hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Word hlds__make_hlds__superhomogeneous__MaybeFGTI_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__superhomogeneous__GoalCord_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__superhomogeneous__TermVar_9;
    MR_Integer hlds__make_hlds__superhomogeneous__Size_10;
    MR_Integer hlds__make_hlds__superhomogeneous__Threshold_11;
    MR_Word hlds__make_hlds__superhomogeneous__V_20_20;

    hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeFGTI_7)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__make_hlds__superhomogeneous__succeeded)
      {
        hlds__make_hlds__superhomogeneous__TermVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 0)));
        hlds__make_hlds__superhomogeneous__Size_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 1)));
        {
          hlds__make_hlds__superhomogeneous__V_20_20 = libs__globals__get_maybe_from_ground_term_threshold_0_f_0();
        }
        hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_20_20)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__superhomogeneous__succeeded)
          {
            hlds__make_hlds__superhomogeneous__Threshold_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_20_20, (MR_Integer) 0)));
            hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__Size_10 >= hlds__make_hlds__superhomogeneous__Threshold_11);
          }
      }
    if (hlds__make_hlds__superhomogeneous__succeeded)
      {
        MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        MR_Word hlds__make_hlds__superhomogeneous__Goals_12;
        MR_Word hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13;
        MR_Word hlds__make_hlds__superhomogeneous__MarkedGoals_14;
        MR_Word hlds__make_hlds__superhomogeneous__ConjGoalExpr_15;
        MR_Word hlds__make_hlds__superhomogeneous__ConjGoal_16;
        MR_Word hlds__make_hlds__superhomogeneous__Reason_17;
        MR_Word hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18;
        MR_Word hlds__make_hlds__superhomogeneous__ScopeGoal_19;
        MR_Word hlds__make_hlds__superhomogeneous__V_21_21;

        {
          hlds__make_hlds__superhomogeneous__Goals_12 = mercury__cord__list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_24_24, hlds__make_hlds__superhomogeneous__GoalCord_8);
        }
        {
          hlds__make_hlds__superhomogeneous__V_21_21 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__TermVar_9);
        }
        {
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__superhomogeneous__V_21_21, hlds__make_hlds__superhomogeneous__GoalInfo_4, &hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13);
        }
        {
          hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(hlds__make_hlds__superhomogeneous__Goals_12, &hlds__make_hlds__superhomogeneous__MarkedGoals_14);
        }
        {
          hlds__make_hlds__superhomogeneous__ConjGoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_15, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_15, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoals_14));
        }
        {
          hlds__make_hlds__superhomogeneous__ConjGoal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_16, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoalExpr_15));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_16, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13));
        }
        {
          hlds__make_hlds__superhomogeneous__Reason_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_17, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermVar_9));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_17, 2) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Reason_17));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoal_16));
        }
        {
          hlds__make_hlds__superhomogeneous__ScopeGoal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ScopeGoal_19, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ScopeGoalExpr_18));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ScopeGoal_19, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_13));
        }
        {
          *hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6 = mercury__cord__singleton_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_24_24, ((MR_Box) (hlds__make_hlds__superhomogeneous__ScopeGoal_19)));
        }
      }
    else
      *hlds__make_hlds__superhomogeneous__MaybeWrappedGoalCord_6 = hlds__make_hlds__superhomogeneous__GoalCord_8;
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_4,
  MR_Word hlds__make_hlds__superhomogeneous__Expansion_5,
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_6)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Word hlds__make_hlds__superhomogeneous__MaybeFGTI_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCord_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Expansion_5, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_9;

    {
      hlds__make_hlds__superhomogeneous__ExpansionGoals_9 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__superhomogeneous__ExpansionGoalCord_8);
    }
    if ((hlds__make_hlds__superhomogeneous__ExpansionGoals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__superhomogeneous__V_34_34;

        {
          hlds__make_hlds__superhomogeneous__V_34_34 = hlds__make_goal__true_goal_expr_0_f_0();
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *hlds__make_hlds__superhomogeneous__Goal_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__V_34_34));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_4));
        }
      }
    else
      {
        MR_Word hlds__make_hlds__superhomogeneous__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ExpansionGoals_9, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__superhomogeneous__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__ExpansionGoals_9, (MR_Integer) 0)));

        if ((hlds__make_hlds__superhomogeneous__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_39_39, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_39_39, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__superhomogeneous__Context_13;
            MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalInfo_14;

            {
              hlds__make_hlds__superhomogeneous__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__superhomogeneous__GoalInfo_4);
            }
            {
              hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_hlds__superhomogeneous__Context_13, hlds__make_hlds__superhomogeneous__ExpansionGoalInfo0_12, &hlds__make_hlds__superhomogeneous__ExpansionGoalInfo_14);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *hlds__make_hlds__superhomogeneous__Goal_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ExpansionGoalExpr_11));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ExpansionGoalInfo_14));
            }
          }
        else
          {
            MR_Word hlds__make_hlds__superhomogeneous__TermVar_18;
            MR_Integer hlds__make_hlds__superhomogeneous__Size_19;
            MR_Integer hlds__make_hlds__superhomogeneous__Threshold_20;
            MR_Word hlds__make_hlds__superhomogeneous__V_28_28;

            hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__MaybeFGTI_7)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                hlds__make_hlds__superhomogeneous__TermVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 0)));
                hlds__make_hlds__superhomogeneous__Size_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__MaybeFGTI_7, (MR_Integer) 1)));
                {
                  hlds__make_hlds__superhomogeneous__V_28_28 = libs__globals__get_maybe_from_ground_term_threshold_0_f_0();
                }
                hlds__make_hlds__superhomogeneous__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__superhomogeneous__V_28_28)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__superhomogeneous__succeeded)
                  {
                    hlds__make_hlds__superhomogeneous__Threshold_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__superhomogeneous__V_28_28, (MR_Integer) 0)));
                    hlds__make_hlds__superhomogeneous__succeeded = (hlds__make_hlds__superhomogeneous__Size_19 >= hlds__make_hlds__superhomogeneous__Threshold_20);
                  }
              }
            if (hlds__make_hlds__superhomogeneous__succeeded)
              {
                MR_Word hlds__make_hlds__superhomogeneous__MarkedGoalInfo_21;
                MR_Word hlds__make_hlds__superhomogeneous__MarkedGoals_22;
                MR_Word hlds__make_hlds__superhomogeneous__ConjGoalExpr_23;
                MR_Word hlds__make_hlds__superhomogeneous__ConjGoal_24;
                MR_Word hlds__make_hlds__superhomogeneous__Reason_25;
                MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_26;
                MR_Word hlds__make_hlds__superhomogeneous__V_29_29;

                {
                  hlds__make_hlds__superhomogeneous__V_29_29 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__superhomogeneous__TermVar_18);
                }
                {
                  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__superhomogeneous__V_29_29, hlds__make_hlds__superhomogeneous__GoalInfo_4, &hlds__make_hlds__superhomogeneous__MarkedGoalInfo_21);
                }
                {
                  hlds__make_hlds__superhomogeneous__mark_nonlocals_in_ground_term_initial_2_p_0(hlds__make_hlds__superhomogeneous__ExpansionGoals_9, &hlds__make_hlds__superhomogeneous__MarkedGoals_22);
                }
                {
                  hlds__make_hlds__superhomogeneous__ConjGoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_23, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__ConjGoalExpr_23, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoals_22));
                }
                {
                  hlds__make_hlds__superhomogeneous__ConjGoal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_24, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoalExpr_23));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__ConjGoal_24, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_21));
                }
                {
                  hlds__make_hlds__superhomogeneous__Reason_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_25, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__TermVar_18));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__Reason_25, 2) = ((MR_Box) ((MR_Integer) 0));
                }
                {
                  hlds__make_hlds__superhomogeneous__GoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_26, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__Reason_25));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_26, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ConjGoal_24));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__superhomogeneous__Goal_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_26));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__MarkedGoalInfo_21));
                }
              }
            else
              {
                MR_Word hlds__make_hlds__superhomogeneous__GoalExpr_35;

                {
                  hlds__make_hlds__superhomogeneous__GoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_35, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__superhomogeneous__GoalExpr_35, 2) = ((MR_Box) (hlds__make_hlds__superhomogeneous__ExpansionGoals_9));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__superhomogeneous__Goal_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalExpr_35));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo_4));
                }
              }
          }
      }
  }
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__Args_9,
  MR_Word * hlds__make_hlds__superhomogeneous__Vars_10,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_15,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_16,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_17,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_18,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Word hlds__make_hlds__superhomogeneous__RevVars_14;

    {
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_loop_9_p_0(hlds__make_hlds__superhomogeneous__Args_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__superhomogeneous__RevVars_14, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_15, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_16, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_17, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_18, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_20);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[0], hlds__make_hlds__superhomogeneous__RevVars_14, hlds__make_hlds__superhomogeneous__Vars_10);
    }
  }
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__LHS0_20,
  MR_Word hlds__make_hlds__superhomogeneous__RHS0_21,
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
  MR_Word hlds__make_hlds__superhomogeneous__MainContext_23,
  MR_Word hlds__make_hlds__superhomogeneous__SubContext_24,
  MR_Word hlds__make_hlds__superhomogeneous__Purity_25,
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_26,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Word hlds__make_hlds__superhomogeneous__Expansion_34;
    MR_Word hlds__make_hlds__superhomogeneous__GoalInfo_35;

    {
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_117_110_114_97_118_101_108_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_55_93_95_48_20_p_0(hlds__make_hlds__superhomogeneous__LHS0_20, hlds__make_hlds__superhomogeneous__RHS0_21, hlds__make_hlds__superhomogeneous__Context_22, hlds__make_hlds__superhomogeneous__MainContext_23, hlds__make_hlds__superhomogeneous__SubContext_24, hlds__make_hlds__superhomogeneous__Purity_25, &hlds__make_hlds__superhomogeneous__Expansion_34, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_39, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_45, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_46, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_47);
    }
    {
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__superhomogeneous__Context_22, &hlds__make_hlds__superhomogeneous__GoalInfo_35);
    }
    {
      hlds__make_hlds__superhomogeneous__expansion_to_goal_wrap_if_fgti_3_p_0(hlds__make_hlds__superhomogeneous__GoalInfo_35, hlds__make_hlds__superhomogeneous__Expansion_34, hlds__make_hlds__superhomogeneous__Goal_26);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0_1(
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

    {
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
  }
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__XVars_19,
  MR_Word hlds__make_hlds__superhomogeneous__XArgTerms0_20,
  MR_Word hlds__make_hlds__superhomogeneous__ArgContexts_21,
  MR_Word hlds__make_hlds__superhomogeneous__Context_22,
  MR_Word hlds__make_hlds__superhomogeneous__Goal0_23,
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_24,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_35,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_36,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_37,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_38,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_39,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_40,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_42,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_43,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_44,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_45,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_46)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70;
    MR_Word hlds__make_hlds__superhomogeneous__XArgTerms_31;
    MR_Word hlds__make_hlds__superhomogeneous__Expansions_32;
    MR_Word hlds__make_hlds__superhomogeneous__GoalInfo0_34;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49;
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_61;
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCords_62;
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_63;
    MR_Word hlds__make_hlds__superhomogeneous__V_64_64;
    MR_Word hlds__make_hlds__superhomogeneous__V_65_65;
    MR_Word hlds__make_hlds__superhomogeneous__V_33_33;

    {
      hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__XArgTerms0_20, &hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_39, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_35, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49);
    }
    {
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_119_105_116_104_95_99_111_110_116_101_120_116_115_95_95_91_53_93_95_48_18_p_0(hlds__make_hlds__superhomogeneous__XVars_19, hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__ArgContexts_21, hlds__make_hlds__superhomogeneous__Context_22, &hlds__make_hlds__superhomogeneous__Expansions_32, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_46);
    }
    hlds__make_hlds__superhomogeneous__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 0)));
    hlds__make_hlds__superhomogeneous__GoalInfo0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 1)));
    {
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__Goal0_23, &hlds__make_hlds__superhomogeneous__BaseGoals_61);
    }
    {
      hlds__make_hlds__superhomogeneous__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_64_64, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo0_34));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_64_64, hlds__make_hlds__superhomogeneous__Expansions_32, &hlds__make_hlds__superhomogeneous__ExpansionGoalCords_62);
    }
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      hlds__make_hlds__superhomogeneous__ExpansionGoals_63 = mercury__cord__cord_list_to_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70, hlds__make_hlds__superhomogeneous__ExpansionGoalCords_62);
    }
    {
      hlds__make_hlds__superhomogeneous__V_65_65 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_70, hlds__make_hlds__superhomogeneous__ExpansionGoals_63, hlds__make_hlds__superhomogeneous__BaseGoals_61);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_65_65, hlds__make_hlds__superhomogeneous__GoalInfo0_34, hlds__make_hlds__superhomogeneous__Goal_24);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0_1(
  MR_Box hlds__make_hlds__superhomogeneous__closure_arg,
  MR_Box hlds__make_hlds__superhomogeneous__wrapper_arg_1,
  MR_Box * hlds__make_hlds__superhomogeneous__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__superhomogeneous__closure = hlds__make_hlds__superhomogeneous__closure_arg;
    MR_Word hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6;

    {
      hlds__make_hlds__superhomogeneous__expansion_to_goal_cord_wrap_if_fgti_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__superhomogeneous__wrapper_arg_1), &hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6);
    }
    *hlds__make_hlds__superhomogeneous__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__superhomogeneous__conv0_MaybeWrappedGoalCord_6));
  }
}

void MR_CALL 
hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(
  MR_Word hlds__make_hlds__superhomogeneous__XVars_19,
  MR_Word hlds__make_hlds__superhomogeneous__XArgTerms0_20,
  MR_Word hlds__make_hlds__superhomogeneous__Context_21,
  MR_Word hlds__make_hlds__superhomogeneous__ArgContext_22,
  MR_Word hlds__make_hlds__superhomogeneous__Goal0_23,
  MR_Word * hlds__make_hlds__superhomogeneous__Goal_24,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_35,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_36,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_37,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_38,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_39,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_40,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_42,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_43,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_44,
  MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_45,
  MR_Word * hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_46)
{
  {
    MR_bool hlds__make_hlds__superhomogeneous__succeeded;
    MR_Word hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71;
    MR_Word hlds__make_hlds__superhomogeneous__XArgTerms_31;
    MR_Word hlds__make_hlds__superhomogeneous__Expansions_32;
    MR_Word hlds__make_hlds__superhomogeneous__GoalInfo0_34;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48;
    MR_Word hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49;
    MR_Word hlds__make_hlds__superhomogeneous__BaseGoals_62;
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoalCords_63;
    MR_Word hlds__make_hlds__superhomogeneous__ExpansionGoals_64;
    MR_Word hlds__make_hlds__superhomogeneous__V_65_65;
    MR_Word hlds__make_hlds__superhomogeneous__V_66_66;
    MR_Word hlds__make_hlds__superhomogeneous__V_33_33;

    {
      hlds__make_hlds__state_var__substitute_state_var_mappings_8_p_0(hlds__make_hlds__superhomogeneous__XArgTerms0_20, &hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_0_39, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_0_35, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49);
    }
    {
      hlds__make_hlds__superhomogeneous__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_103_95_117_110_105_102_105_99_97_116_105_111_110_115_95_95_91_53_93_95_48_19_p_0(hlds__make_hlds__superhomogeneous__XVars_19, hlds__make_hlds__superhomogeneous__XArgTerms_31, hlds__make_hlds__superhomogeneous__Context_21, hlds__make_hlds__superhomogeneous__ArgContext_22, (MR_Integer) 1, &hlds__make_hlds__superhomogeneous__Expansions_32, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarState_36, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_0_37, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_SVarStore_38, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_VarSet_40, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_0_41, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_ModuleInfo_42, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_0_43, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_QualInfo_44, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_49_49, hlds__make_hlds__superhomogeneous__STATE_VARIABLE_Specs_46);
    }
    hlds__make_hlds__superhomogeneous__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 0)));
    hlds__make_hlds__superhomogeneous__GoalInfo0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__Goal0_23, (MR_Integer) 1)));
    {
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__superhomogeneous__Goal0_23, &hlds__make_hlds__superhomogeneous__BaseGoals_62);
    }
    {
      hlds__make_hlds__superhomogeneous__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 0) = ((MR_Box) (&hlds__make_hlds__superhomogeneous_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__superhomogeneous__V_65_65, 3) = ((MR_Box) (hlds__make_hlds__superhomogeneous__GoalInfo0_34));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &hlds__make_hlds__superhomogeneous__hlds__make_hlds__superhomogeneous__type_ctor_info_expansion_0, (MR_Word) &hlds__make_hlds__superhomogeneous_scalar_common_1[1], hlds__make_hlds__superhomogeneous__V_65_65, hlds__make_hlds__superhomogeneous__Expansions_32, &hlds__make_hlds__superhomogeneous__ExpansionGoalCords_63);
    }
    hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      hlds__make_hlds__superhomogeneous__ExpansionGoals_64 = mercury__cord__cord_list_to_list_1_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71, hlds__make_hlds__superhomogeneous__ExpansionGoalCords_63);
    }
    {
      hlds__make_hlds__superhomogeneous__V_66_66 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__superhomogeneous__TypeCtorInfo_18_71, hlds__make_hlds__superhomogeneous__ExpansionGoals_64, hlds__make_hlds__superhomogeneous__BaseGoals_62);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__superhomogeneous__V_66_66, hlds__make_hlds__superhomogeneous__GoalInfo0_34, hlds__make_hlds__superhomogeneous__Goal_24);
    }
  }
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
