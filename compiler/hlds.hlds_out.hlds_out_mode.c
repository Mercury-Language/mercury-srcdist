/*
** Automatically generated from `hlds_out_mode.m'
** by the Mercury compiler,
** version DEV
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


/* :- module hlds.hlds_out.hlds_out_mode. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_out__hlds_out_mode__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_mode.mih"


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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2];

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__671__1_2_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_57);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__663__1_2_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_67);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__679__1_2_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_45);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__227__1_3_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
  MR_Word hlds__hlds_out__hlds_out_mode__LambdaHeadVar__1_28,
  MR_Word hlds__hlds_out__hlds_out_mode__LambdaHeadVar__2_29);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168,
  MR_String hlds__hlds_out__hlds_out_mode__Suffix_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_11,
  MR_Word hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_12,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_13,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_14,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_15,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_16,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_31,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_1,
  MR_Integer * hlds__hlds_out__hlds_out_mode__InstAddr_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent0_2,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107,
  MR_String hlds__hlds_out__hlds_out_mode__Suffix_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_10,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_11,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_12,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_13,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_14,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_32,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_29,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_2,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56,
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_8,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum_2,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_5,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__ConsId_4,
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
  MR_Word * hlds__hlds_out__hlds_out_mode__Term_6);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_8,
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_9);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_1,
  MR_Word hlds__hlds_out__hlds_out_mode__Context_2,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_String hlds__hlds_out__hlds_out_mode__SharedName_2);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_7);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
  MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_5);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_type_ctor_propagated_to_term_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
  MR_Word hlds__hlds_out__hlds_out_mode__PropagatedResult_5);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
  MR_Word hlds__hlds_out__hlds_out_mode__ContainsTypes_5);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_var_to_term_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVar_5);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstResults_5);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
  MR_String hlds__hlds_out__hlds_out_mode__Name_5);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[14][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_2[38][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_3[3][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_5[2][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_6[1][5];


/* sealed */ struct hlds__hlds_out__hlds_out_mode__vector_common_type_4_0_s {
  const MR_String hlds__hlds_out__hlds_out_mode__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_mode__vector_common_type_4_0_s hlds__hlds_out__hlds_out_mode_vector_common_4[21];



static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__string__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "base_typeclass_info_const"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "closure_cons"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "deep_profiling_proc_layout"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "ground_term_const"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "table_io_entry_desc"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "tabling_info_const"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "type_info_const"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "typeclass_info_cell_constructor"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "typeclass_info_const"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_2[38][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ">>"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "free"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "no_results"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "groundness_unknown"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "is_ground"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "is_not_ground"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "contains_any_unknown"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "does_contain_any"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "does_not_contain_any"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "contains_inst_names_unknown"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "contains_inst_names_known"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "contains_inst_vars_unknown"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "contains_inst_vars_known"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "results"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "fgtc"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "contains_types_unknown"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "contains_types_known"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "no_type_ctor_propagated"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "type_ctor_propagated"))
  },
  /* row 19 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "\044any"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "\044ground"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "\044merge_inst"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "\044mostly_uniq_inst"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "\044shared_inst"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "\044typed_ground"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "\044typed_inst"))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "\044unify"))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "EMPTY_BOUND_INSTS"))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "=<"))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "any_func"))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "any_pred"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_3[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};


static /* final */ const struct hlds__hlds_out__hlds_out_mode__vector_common_type_4_0_s hlds__hlds_out__hlds_out_mode_vector_common_4[21] = {
  /* row 0 */   {     (MR_String) "any" },
  /* row 1 */   {     (MR_String) "unique_any" },
  /* row 2 */   {     (MR_String) "mostly_unique_any" },
  /* row 3 */   {     (MR_String) "clobbered_any" },
  /* row 4 */   {     (MR_String) "mostly_clobbered_any" },
  /* row 5 */   {     (MR_String) "det" },
  /* row 6 */   {     (MR_String) "semidet" },
  /* row 7 */   {     (MR_String) "multi" },
  /* row 8 */   {     (MR_String) "nondet" },
  /* row 9 */   {     (MR_String) "cc_multi" },
  /* row 10 */   {     (MR_String) "cc_nondet" },
  /* row 11 */   {     (MR_String) "erroneous" },
  /* row 12 */   {     (MR_String) "failure" },
  /* row 13 */   {     (MR_String) "det" },
  /* row 14 */   {     (MR_String) "semidet" },
  /* row 15 */   {     (MR_String) "multi" },
  /* row 16 */   {     (MR_String) "nondet" },
  /* row 17 */   {     (MR_String) "cc_multi" },
  /* row 18 */   {     (MR_String) "cc_nondet" },
  /* row 19 */   {     (MR_String) "erroneous" },
  /* row 20 */   {     (MR_String) "failure" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "hlds.hlds_out.hlds_out_mode.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0 = {
  (MR_String) "do_not_incl_addr",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1 = {
  (MR_String) "do_incl_addr",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0
};

static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__type_ctor_info_incl_addr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_mode",
  (MR_String) "incl_addr",
  {     hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0 },
  {     hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0
};

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

    {
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
    return hlds__hlds_out__hlds_out_mode__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1;

    {
      hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0(&hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3));
    }
    *hlds__hlds_out__hlds_out_mode__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
    MR_Word hlds__hlds_out__hlds_out_mode__conv2_Term_8;

    {
      hlds__hlds_out__hlds_out_mode__conv2_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv2_Term_8));
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

    {
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
    MR_Word hlds__hlds_out__hlds_out_mode__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_mode__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_mode__Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_mode__ModesTerm_15;
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;
    MR_String hlds__hlds_out__hlds_out_mode__V_52_52;
    MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;
    MR_Word hlds__hlds_out__hlds_out_mode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 2)));

    switch (hlds__hlds_out__hlds_out_mode__PredOrFunc_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48;
          MR_Word hlds__hlds_out__hlds_out_mode__ArgModes_16;
          MR_Word hlds__hlds_out__hlds_out_mode__RetMode_17;
          MR_Word hlds__hlds_out__hlds_out_mode__ArgModesTerm_18;
          MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
          MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
          MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
          MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;
          MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
          MR_Box hlds__hlds_out__hlds_out_mode__conv0_RetMode_17;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_mode__Modes_12, &hlds__hlds_out__hlds_out_mode__ArgModes_16, &hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
          }
          hlds__hlds_out__hlds_out_mode__RetMode_17 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
          {
            hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
          }
          {
            hlds__hlds_out__hlds_out_mode__V_20_20 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_22_22, hlds__hlds_out__hlds_out_mode__ArgModes_16);
          }
          hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[36], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ArgModesTerm_18);
          }
          {
            hlds__hlds_out__hlds_out_mode__V_27_27 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__RetMode_17);
          }
          {
            hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgModesTerm_18));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_26_26));
          }
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[33], hlds__hlds_out__hlds_out_mode__V_24_24, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
          MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

          {
            hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
          }
          {
            hlds__hlds_out__hlds_out_mode__V_30_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_32_32, hlds__hlds_out__hlds_out_mode__Modes_12);
          }
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[37], hlds__hlds_out__hlds_out_mode__V_30_30, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
          }
        }
        break;
    }
    hlds__hlds_out__hlds_out_mode__V_52_52 = ((&hlds__hlds_out__hlds_out_mode_vector_common_4[13 + hlds__hlds_out__hlds_out_mode__Det_14]))->hlds__hlds_out__hlds_out_mode__vector_common_type_4_0__vct_4_f_0;
    {
      hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_52_52));
    }
    {
      hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
    }
    {
      hlds__hlds_out__hlds_out_mode__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModesTerm_15));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
    }
    {
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[35], hlds__hlds_out__hlds_out_mode__V_34_34, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
    }
    return hlds__hlds_out__hlds_out_mode__Term_10;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
    MR_Word hlds__hlds_out__hlds_out_mode__conv2_Term_8;

    {
      hlds__hlds_out__hlds_out_mode__conv2_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv2_Term_8));
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

    {
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
    MR_Word hlds__hlds_out__hlds_out_mode__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_mode__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_mode__Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_mode__ModesTerm_15;
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;
    MR_String hlds__hlds_out__hlds_out_mode__V_52_52;
    MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;
    MR_Word hlds__hlds_out__hlds_out_mode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 2)));

    switch (hlds__hlds_out__hlds_out_mode__PredOrFunc_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48;
          MR_Word hlds__hlds_out__hlds_out_mode__ArgModes_16;
          MR_Word hlds__hlds_out__hlds_out_mode__RetMode_17;
          MR_Word hlds__hlds_out__hlds_out_mode__ArgModesTerm_18;
          MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
          MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
          MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
          MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;
          MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
          MR_Box hlds__hlds_out__hlds_out_mode__conv0_RetMode_17;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_mode__Modes_12, &hlds__hlds_out__hlds_out_mode__ArgModes_16, &hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
          }
          hlds__hlds_out__hlds_out_mode__RetMode_17 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
          {
            hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
          }
          {
            hlds__hlds_out__hlds_out_mode__V_20_20 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_22_22, hlds__hlds_out__hlds_out_mode__ArgModes_16);
          }
          hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[32], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ArgModesTerm_18);
          }
          {
            hlds__hlds_out__hlds_out_mode__V_27_27 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__RetMode_17);
          }
          {
            hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgModesTerm_18));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_26_26));
          }
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[33], hlds__hlds_out__hlds_out_mode__V_24_24, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
          MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

          {
            hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
          }
          {
            hlds__hlds_out__hlds_out_mode__V_30_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_32_32, hlds__hlds_out__hlds_out_mode__Modes_12);
          }
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[34], hlds__hlds_out__hlds_out_mode__V_30_30, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
          }
        }
        break;
    }
    hlds__hlds_out__hlds_out_mode__V_52_52 = ((&hlds__hlds_out__hlds_out_mode_vector_common_4[5 + hlds__hlds_out__hlds_out_mode__Det_14]))->hlds__hlds_out__hlds_out_mode__vector_common_type_4_0__vct_4_f_0;
    {
      hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_52_52));
    }
    {
      hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
    }
    {
      hlds__hlds_out__hlds_out_mode__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModesTerm_15));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
    }
    {
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[35], hlds__hlds_out__hlds_out_mode__V_34_34, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
    }
    return hlds__hlds_out__hlds_out_mode__Term_10;
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__671__1_2_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_57)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

    {
      hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[4], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_57)));
    }
    return hlds__hlds_out__hlds_out_mode__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__663__1_2_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_67)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

    {
      hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[4], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_67)));
    }
    return hlds__hlds_out__hlds_out_mode__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__679__1_2_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_45)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

    {
      hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[4], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_45)));
    }
    return hlds__hlds_out__hlds_out_mode__succeeded;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__227__1_3_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
  MR_Word hlds__hlds_out__hlds_out_mode__LambdaHeadVar__1_28,
  MR_Word hlds__hlds_out__hlds_out_mode__LambdaHeadVar__2_29)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__LambdaHeadVar__3_30;
    MR_Word hlds__hlds_out__hlds_out_mode__V_33_33;
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
    MR_Word hlds__hlds_out__hlds_out_mode__V_35_35;
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;

    {
      hlds__hlds_out__hlds_out_mode__V_36_36 = mercury__term__context_init_0_f_0();
    }
    {
      hlds__hlds_out__hlds_out_mode__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_35_35, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__LambdaHeadVar__1_28));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_35_35, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
    }
    {
      hlds__hlds_out__hlds_out_mode__V_34_34 = mercury__term__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__V_35_35);
    }
    {
      hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__LambdaHeadVar__2_29));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__hlds_out__hlds_out_mode__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34));
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
    }
    {
      hlds__hlds_out__hlds_out_mode__LambdaHeadVar__3_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__LambdaHeadVar__3_30, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[31]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__LambdaHeadVar__3_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_33_33));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__LambdaHeadVar__3_30, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
    }
    return hlds__hlds_out__hlds_out_mode__LambdaHeadVar__3_30;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0(
  MR_Word * hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Integer hlds__hlds_out__hlds_out_mode__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
    MR_Integer hlds__hlds_out__hlds_out_mode__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_mode__HeadVar__1_1, hlds__hlds_out__hlds_out_mode__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_mode__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0(
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_1,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__HeadVar__2_1 == hlds__hlds_out__hlds_out_mode__HeadVar__2_2);

    return hlds__hlds_out__hlds_out_mode__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3;
        else
          {
            MR_Word hlds__hlds_out__hlds_out_mode__Mode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_mode__Modes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17;
            MR_Word hlds__hlds_out__hlds_out_mode__InstA1_27;
            MR_Word hlds__hlds_out__hlds_out_mode__InstB1_28;
            MR_Word hlds__hlds_out__hlds_out_mode__InstA2_29;
            MR_Word hlds__hlds_out__hlds_out_mode__InstB2_30;
            MR_Word hlds__hlds_out__hlds_out_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_9, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_9, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_35;
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_37;
            MR_Word hlds__hlds_out__hlds_out_mode__V_39_39;
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            hlds__hlds_out__hlds_out_mode__InstA1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_31_31, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_mode__InstB1_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_31_31, (MR_Integer) 1)));
            hlds__hlds_out__hlds_out_mode__InstA2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_mode__InstB2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, (MR_Integer) 1)));
            {
              hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_27));
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_29));
            }
            {
              parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__HeadVar__2_2, hlds__hlds_out__hlds_out_mode__V_34_34, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_35);
            }
            hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) " = ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_35, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_37);
            }
            {
              hlds__hlds_out__hlds_out_mode__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_39_39, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_28));
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_39_39, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_30));
            }
            {
              parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__HeadVar__2_2, hlds__hlds_out__hlds_out_mode__V_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17);
            }
            if ((hlds__hlds_out__hlds_out_mode__Modes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17;
            else
              {
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19;
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

                {
                  hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) ", ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Modes_10;
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0__tmp_copy_3 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19;

                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0__tmp_copy_3;
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168,
  MR_String hlds__hlds_out__hlds_out_mode__Suffix_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_11,
  MR_Word hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_12,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_13,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_14,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_15,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_16,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_31,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;

    switch (hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
        }
        break;
      case (MR_Integer) 1:
        hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_31;
        break;
    }
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_mode__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_153_153;

          if ((hlds__hlds_out__hlds_out_mode__Args_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Name_18, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_153_153);
            }
          else
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_144_144;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_146_146;
              MR_Integer hlds__hlds_out__hlds_out_mode__V_147_147;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_148_148;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_150_150;

              {
                parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Name_18, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_144_144);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_144_144, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_146_146);
              }
              hlds__hlds_out__hlds_out_mode__V_147_147 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Args_19, hlds__hlds_out__hlds_out_mode__V_147_147, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_146_146, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_148_148);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_148_148, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_150_150);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_150_150, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_153_153);
              }
            }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_153_153, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__IsLive_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_mode__Real_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_mode__InstA_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)));
          MR_Word hlds__hlds_out__hlds_out_mode__InstB_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 3)));
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_130_130;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133;
          MR_Word hlds__hlds_out__hlds_out_mode__V_134_134;
          MR_Integer hlds__hlds_out__hlds_out_mode__V_135_135;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_136_136;
          MR_Word hlds__hlds_out__hlds_out_mode__V_137_137;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_140_140;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_142_142;

          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044unify(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129);
          }
          {
            parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__IsLive_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_130_130);
          }
          {
            parse_tree__parse_tree_out_inst__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Real_23, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_130_130, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133);
          }
          {
            hlds__hlds_out__hlds_out_mode__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_137_137, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_25));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__hlds_out__hlds_out_mode__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_134_134, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA_24));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_134_134, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_137_137));
          }
          hlds__hlds_out__hlds_out_mode__V_135_135 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
          {
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__V_134_134, hlds__hlds_out__hlds_out_mode__V_135_135, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_136_136);
          }
          {
            parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_136_136, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_140_140);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_140_140, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_142_142);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_142_142, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_117_117;
          MR_Integer hlds__hlds_out__hlds_out_mode__V_119_119;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_120_120;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_124_124;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126;
          MR_Word hlds__hlds_out__hlds_out_mode__InstB_156 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_mode__Inst_178 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_mode__Insts_179;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_190;
          MR_Word hlds__hlds_out__hlds_out_mode__Inst_199;
          MR_Word hlds__hlds_out__hlds_out_mode__Insts_200;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_211;

          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044merge_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_117_117);
          }
          {
            hlds__hlds_out__hlds_out_mode__Insts_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_179, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_156));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          hlds__hlds_out__hlds_out_mode__V_119_119 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
          {
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__Inst_178, hlds__hlds_out__hlds_out_mode__V_119_119, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_117_117, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_190);
          }
          hlds__hlds_out__hlds_out_mode__Inst_199 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_179, (MR_Integer) 0)));
          hlds__hlds_out__hlds_out_mode__Insts_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_179, (MR_Integer) 1)));
          {
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__Inst_199, hlds__hlds_out__hlds_out_mode__V_119_119, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_190, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_211);
          }
          {
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Insts_200, hlds__hlds_out__hlds_out_mode__V_119_119, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_211, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_120_120);
          }
          {
            parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_120_120, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_124_124);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_124_124, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_27 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) & (MR_Integer) 7);
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_101_101;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_102_102;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_106_106;
              MR_Integer hlds__hlds_out__hlds_out_mode__V_109_109;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_110_110;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_112_112;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_114_114;
              MR_Word hlds__hlds_out__hlds_out_mode__IsLive_157 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word hlds__hlds_out__hlds_out_mode__Real_158 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044ground(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__IsLive_157, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_101_101);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Real_158, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_101_101, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_102_102);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Uniq_27, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_102_102, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_106_106);
              }
              hlds__hlds_out__hlds_out_mode__V_109_109 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__SubInstName_26, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_109_109, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_106_106, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_110_110);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_110_110, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_112_112);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_112_112, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_114_114);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_114_114, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_84_84;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89;
              MR_Integer hlds__hlds_out__hlds_out_mode__V_92_92;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97;
              MR_Word hlds__hlds_out__hlds_out_mode__IsLive_159 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word hlds__hlds_out__hlds_out_mode__Real_160 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_162 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) & (MR_Integer) 7);

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044any(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__IsLive_159, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_84_84);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Real_160, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_84_84, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Uniq_162, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89);
              }
              hlds__hlds_out__hlds_out_mode__V_92_92 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__SubInstName_161, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_92_92, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72;
              MR_Integer hlds__hlds_out__hlds_out_mode__V_75_75;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80;
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044shared_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72);
              }
              hlds__hlds_out__hlds_out_mode__V_75_75 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__SubInstName_163, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_75_75, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61;
              MR_Integer hlds__hlds_out__hlds_out_mode__V_64_64;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_67_67;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_69_69;
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044mostly_uniq_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61);
              }
              hlds__hlds_out__hlds_out_mode__V_64_64 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__SubInstName_164, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_64_64, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_67_67);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_67_67, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_69_69);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_69_69, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Uniqueness_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_mode__TypeVarSet_30;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_54_54;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_58_58;

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044typed_ground(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Uniqueness_28, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ", ", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_54_54);
              }
              {
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_mode__TypeVarSet_30);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__TypeVarSet_30, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Type_29, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_54_54, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_58_58);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_58_58, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;
              MR_Integer hlds__hlds_out__hlds_out_mode__V_42_42;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_mode__Type_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__TypeVarSet_167;

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044typed_inst(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35);
              }
              {
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_mode__TypeVarSet_167);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__TypeVarSet_167, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Type_166, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
              }
              hlds__hlds_out__hlds_out_mode__V_42_42 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__SubInstName_165, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_42_42, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43);
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_1,
  MR_Integer * hlds__hlds_out__hlds_out_mode__InstAddr_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__Inst_1 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 *hlds__hlds_out__hlds_out_mode__InstAddr_2  = InstAddr;
}
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent0_2,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6;
        else
          {
            MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_mode__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_15, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_mode__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_15, (MR_Integer) 1)));
            MR_Integer hlds__hlds_out__hlds_out_mode__Indent1_24 = (hlds__hlds_out__hlds_out_mode__Indent0_2 + (MR_Integer) 1);
            MR_Integer hlds__hlds_out__hlds_out_mode__Indent2_25 = (hlds__hlds_out__hlds_out_mode__Indent1_24 + (MR_Integer) 1);
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;

            if ((hlds__hlds_out__hlds_out_mode__Args_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43;
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45;
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43);
                }
                {
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__ConsId_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45);
                }
                hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
                }
              }
            else
              {
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36;
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38;
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40;
                MR_Word hlds__hlds_out__hlds_out_mode__Inst_60;
                MR_Word hlds__hlds_out__hlds_out_mode__Insts_61;
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34);
                }
                {
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__ConsId_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36);
                }
                hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "(\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
                }
                hlds__hlds_out__hlds_out_mode__Inst_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Args_23, (MR_Integer) 0)));
                hlds__hlds_out__hlds_out_mode__Insts_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Args_23, (MR_Integer) 1)));
                if ((hlds__hlds_out__hlds_out_mode__Insts_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__Inst_60, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
                    }
                  }
                else
                  {
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_72;
                    MR_Word hlds__hlds_out__hlds_out_mode__Inst_102;
                    MR_Word hlds__hlds_out__hlds_out_mode__Insts_103;
                    MR_String hlds__hlds_out__hlds_out_mode__Suffix_109;
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_114;

                    {
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__Inst_60, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_72);
                    }
                    hlds__hlds_out__hlds_out_mode__Inst_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_61, (MR_Integer) 0)));
                    hlds__hlds_out__hlds_out_mode__Insts_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_61, (MR_Integer) 1)));
                    if ((hlds__hlds_out__hlds_out_mode__Insts_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      hlds__hlds_out__hlds_out_mode__Suffix_109 = (MR_String) "\n";
                    else
                      hlds__hlds_out__hlds_out_mode__Suffix_109 = (MR_String) ",\n";
                    {
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Suffix_109, hlds__hlds_out__hlds_out_mode__Inst_102, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_72, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_114);
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Insts_103, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_114, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
                    }
                  }
                {
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
                }
                hlds__hlds_out__hlds_out_mode__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) ")\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
                }
              }
            if ((hlds__hlds_out__hlds_out_mode__BoundInsts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;
            else
              {
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48;
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent0_2, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48);
                }
                hlds__hlds_out__hlds_out_mode__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  hlds__hlds_out__hlds_out_mode__func_3(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) ";\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__BoundInsts_16;
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;

                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6;
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107,
  MR_String hlds__hlds_out__hlds_out_mode__Suffix_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_10,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_11,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_12,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_13,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_14,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_32,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41;

    {
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34);
    }
    switch (hlds__hlds_out__hlds_out_mode__InclAddr_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer hlds__hlds_out__hlds_out_mode__InstAddr_16;
          MR_String hlds__hlds_out__hlds_out_mode__InstAddrStr_17;
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;

          {
            hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(hlds__hlds_out__hlds_out_mode__Inst_10, &hlds__hlds_out__hlds_out_mode__InstAddr_16);
          }
          {
            mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19], (MR_Integer) 2, hlds__hlds_out__hlds_out_mode__InstAddr_16, &hlds__hlds_out__hlds_out_mode__InstAddrStr_17);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__InstAddrStr_17, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) ": ", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41);
          }
        }
        break;
      case (MR_Integer) 0:
        hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
        break;
    }
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_mode__Inst_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95;

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) "free", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43;

              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) "not_reached", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_92_92;

          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) "free(with some type)", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_92_92);
          }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_92_92, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__Uniq_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_99_99;

          if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Uniq_18, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_99_99);
            }
          else
            {
              MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_20 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_19), (MR_Integer) 1);

              {
                parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_6_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__Uniq_18, hlds__hlds_out__hlds_out_mode__PredInstInfo_20, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_99_99);
              }
            }
          {
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_99_99, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__InstResults_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 3)));
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_62_62;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_64_64;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_73_73;
              MR_Integer hlds__hlds_out__hlds_out_mode__V_79_79;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89;
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));

              {
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Uniq_101, (MR_String) "bound", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_62_62);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) "(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_62_62, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_64_64);
              }
              switch (hlds__hlds_out__hlds_out_mode__Lang_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_108_108;
                    MR_Word hlds__hlds_out__hlds_out_mode__InstResultsTerm_24;
                    MR_String hlds__hlds_out__hlds_out_mode__InstResultsStr_25;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_65_65;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_66_66;
                    MR_Integer hlds__hlds_out__hlds_out_mode__V_68_68;
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_69_69;
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_71_71;

                    {
                      hlds__hlds_out__hlds_out_mode__V_65_65 = mercury__term__context_init_0_f_0();
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__InstResultsTerm_24 = hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__V_65_65, hlds__hlds_out__hlds_out_mode__InstResults_22);
                    }
                    hlds__hlds_out__hlds_out_mode__TypeCtorInfo_108_108 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      hlds__hlds_out__hlds_out_mode__V_66_66 = mercury__varset__init_0_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_108_108);
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__InstResultsStr_25 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_108_108, hlds__hlds_out__hlds_out_mode__V_66_66, (MR_Integer) 2, hlds__hlds_out__hlds_out_mode__InstResultsTerm_24);
                    }
                    hlds__hlds_out__hlds_out_mode__V_68_68 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
                    {
                      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__V_68_68, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_64_64, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_69_69);
                    }
                    {
                      parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__InstResultsStr_25, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_69_69, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_71_71);
                    }
                    {
                      parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_71_71, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_73_73);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_73_73 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_64_64;
                  break;
              }
              hlds__hlds_out__hlds_out_mode__V_79_79 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
              switch (hlds__hlds_out__hlds_out_mode__Lang_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Integer hlds__hlds_out__hlds_out_mode__V_74_74 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_75_75;
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78;
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80;
                    MR_Integer hlds__hlds_out__hlds_out_mode__V_82_82;
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83;

                    {
                      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__V_74_74, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_73_73, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_75_75);
                    }
                    {
                      parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) "[\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_75_75, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78);
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__BoundInsts_23, hlds__hlds_out__hlds_out_mode__V_79_79, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80);
                    }
                    hlds__hlds_out__hlds_out_mode__V_82_82 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
                    {
                      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__V_82_82, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83);
                    }
                    {
                      parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) "]\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__BoundInsts_23, hlds__hlds_out__hlds_out_mode__V_79_79, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_73_73, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86);
                  }
                  break;
              }
              {
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59;
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 2)));

              if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_105 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Uniq_104, (MR_String) "ground", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59);
                  }
                }
              else
                {
                  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_102 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_105), (MR_Integer) 1);

                  {
                    parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_6_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__Uniq_104, hlds__hlds_out__hlds_out_mode__PredInstInfo_102, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59);
                  }
                }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_54_54;

              {
                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__InstVarSet_14, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Var_26, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_54_54);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_54_54, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__ConstrainedInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 2)));
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_51_51;

              {
                parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_6_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__Vars_27, hlds__hlds_out__hlds_out_mode__ConstrainedInst_28, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_51_51);
              }
              {
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_51_51, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__InstName_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));

              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__InstName_31, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Name_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_mode__V_47_47;

              {
                hlds__hlds_out__hlds_out_mode__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_29));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_47_47, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Args_30));
              }
              {
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_107, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__V_47_47, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_29,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_2,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6;
        else
          {
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_mode__Insts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
            MR_String hlds__hlds_out__hlds_out_mode__Suffix_22;
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27;

            if ((hlds__hlds_out__hlds_out_mode__Insts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              hlds__hlds_out__hlds_out_mode__Suffix_22 = (MR_String) "\n";
            else
              hlds__hlds_out__hlds_out_mode__Suffix_22 = (MR_String) ",\n";
            {
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_29, hlds__hlds_out__hlds_out_mode__Suffix_22, hlds__hlds_out__hlds_out_mode__Inst_15, hlds__hlds_out__hlds_out_mode__Indent_2, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Insts_16;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27;

              hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6;
              hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56,
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_8,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_14;
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_15;
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_16;
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_17;
    MR_Integer hlds__hlds_out__hlds_out_mode__InstA1Addr_18;
    MR_Integer hlds__hlds_out__hlds_out_mode__InstA2Addr_19;
    MR_Integer hlds__hlds_out__hlds_out_mode__InstB1Addr_20;
    MR_Integer hlds__hlds_out__hlds_out_mode__InstB2Addr_21;
    MR_Word hlds__hlds_out__hlds_out_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_8, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_8, (MR_Integer) 1)));
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40;
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

    hlds__hlds_out__hlds_out_mode__InstA1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_mode__InstB1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_mode__InstA2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_mode__InstB2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 1)));
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstA1_14 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstA1Addr_18  = InstAddr;
}
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstA2_16 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstA2Addr_19  = InstAddr;
}
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstB1_15 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstB1Addr_20  = InstAddr;
}
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstB2_17 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstB2Addr_21  = InstAddr;
}
    {
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26);
    }
    hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "old lhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28);
    }
    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__InstA1_14, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31);
    }
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB1Addr_20 == hlds__hlds_out__hlds_out_mode__InstA1Addr_18);
    if (hlds__hlds_out__hlds_out_mode__succeeded)
      {
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

        {
          hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "old rhs inst: same as old lhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
        }
      }
    else
      {
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35;
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

        {
          hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "old rhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35);
        }
        {
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__InstB1_15, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
        }
      }
    {
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
    }
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstA2Addr_19 == hlds__hlds_out__hlds_out_mode__InstA1Addr_18);
    if (hlds__hlds_out__hlds_out_mode__succeeded)
      {
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

        {
          hlds__hlds_out__hlds_out_mode__func_3(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new lhs inst: unchanged\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
        }
      }
    else
      {
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstA2Addr_19 == hlds__hlds_out__hlds_out_mode__InstB1Addr_20);
        if (hlds__hlds_out__hlds_out_mode__succeeded)
          {
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              hlds__hlds_out__hlds_out_mode__func_4(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new lhs inst: changed to old rhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
            }
          }
        else
          {
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44;
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              hlds__hlds_out__hlds_out_mode__func_5(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new lhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44);
            }
            {
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__InstA2_16, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
            }
          }
      }
    {
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
    }
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB2Addr_21 == hlds__hlds_out__hlds_out_mode__InstB1Addr_20);
    if (hlds__hlds_out__hlds_out_mode__succeeded)
      {
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

        {
          hlds__hlds_out__hlds_out_mode__func_6(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new rhs inst: unchanged\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
        }
      }
    else
      {
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB2Addr_21 == hlds__hlds_out__hlds_out_mode__InstA2Addr_19);
        if (hlds__hlds_out__hlds_out_mode__succeeded)
          {
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              hlds__hlds_out__hlds_out_mode__func_7(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new rhs inst: changed to new lhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
            }
          }
        else
          {
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_53_53;
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              hlds__hlds_out__hlds_out_mode__func_8(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new rhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_53_53);
            }
            {
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__InstB2_17, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_53_53, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
            }
          }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum_2,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_5,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6,
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7,
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7;
        else
          {
            MR_Word hlds__hlds_out__hlds_out_mode__UniMode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_mode__UniModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27;
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29;
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30;
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;
            MR_Integer hlds__hlds_out__hlds_out_mode__V_34_34;
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, hlds__hlds_out__hlds_out_mode__Indent_3, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27);
            }
            hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) ((MR_String) "argument ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29);
            }
            hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 8)));
            {
              hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgNum_2)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30);
            }
            hlds__hlds_out__hlds_out_mode__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) ((MR_String) ":\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
            }
            {
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, hlds__hlds_out__hlds_out_mode__UniMode_17, hlds__hlds_out__hlds_out_mode__Indent_3, hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__InclAddr_5, hlds__hlds_out__hlds_out_mode__InstVarSet_6, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
            }
            hlds__hlds_out__hlds_out_mode__V_34_34 = (hlds__hlds_out__hlds_out_mode__ArgNum_2 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__UniModes_18;
              MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum__tmp_copy_2 = hlds__hlds_out__hlds_out_mode__V_34_34;
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;

              hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_7;
              hlds__hlds_out__hlds_out_mode__ArgNum_2 = hlds__hlds_out__hlds_out_mode__ArgNum__tmp_copy_2;
              hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

    {
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__671__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
    return hlds__hlds_out__hlds_out_mode__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

    {
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__663__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
    return hlds__hlds_out__hlds_out_mode__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

    {
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__679__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
    return hlds__hlds_out__hlds_out_mode__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__ConsId_4,
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
  MR_Word * hlds__hlds_out__hlds_out_mode__Term_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__Context_129;

          {
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_129);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *hlds__hlds_out__hlds_out_mode__Term_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[12])));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_129));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_25 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4), (MR_Integer) 1);
          MR_String hlds__hlds_out__hlds_out_mode__V_78_78;
          MR_Word hlds__hlds_out__hlds_out_mode__V_82_82;
          MR_Word hlds__hlds_out__hlds_out_mode__Context_125;
          MR_String hlds__hlds_out__hlds_out_mode__FunctorName_126;
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorName_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_25, (MR_Integer) 0)));
          MR_Integer hlds__hlds_out__hlds_out_mode__Arity_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_25, (MR_Integer) 1)));
          MR_String hlds__hlds_out__hlds_out_mode__V_151_151;
          MR_Word hlds__hlds_out__hlds_out_mode__V_157_157;
          MR_String hlds__hlds_out__hlds_out_mode__V_159_159;
          MR_String hlds__hlds_out__hlds_out_mode__V_160_160;
          MR_String hlds__hlds_out__hlds_out_mode__V_167_167;

          {
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_125);
          }
          {
            hlds__hlds_out__hlds_out_mode__V_78_78 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorName_127);
          }
          hlds__hlds_out__hlds_out_mode__V_157_157 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19];
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_157_157, hlds__hlds_out__hlds_out_mode__Arity_128, &hlds__hlds_out__hlds_out_mode__V_151_151);
          }
          {
            hlds__hlds_out__hlds_out_mode__V_159_159 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_151_151);
          }
          {
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_157_157, hlds__hlds_out__hlds_out_mode__V_78_78, &hlds__hlds_out__hlds_out_mode__V_160_160);
          }
          {
            hlds__hlds_out__hlds_out_mode__V_167_167 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_160_160, hlds__hlds_out__hlds_out_mode__V_159_159);
          }
          {
            hlds__hlds_out__hlds_out_mode__FunctorName_126 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_cell_constructor for ", hlds__hlds_out__hlds_out_mode__V_167_167);
          }
          {
            hlds__hlds_out__hlds_out_mode__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_82_82, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_126));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *hlds__hlds_out__hlds_out_mode__Term_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_82_82));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_125));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__Context_139;

          {
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_139);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *hlds__hlds_out__hlds_out_mode__Term_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[10])));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_139));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Context_141;

              {
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_141);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[9])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_141));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Context_143;

              {
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_143);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[7])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_143));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
              MR_Integer hlds__hlds_out__hlds_out_mode___Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_mode___TypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 3)));

              {
                parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__SymName_7, hlds__hlds_out__hlds_out_mode__ArgTerms_5, hlds__hlds_out__hlds_out_mode__Term_6);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[30], hlds__hlds_out__hlds_out_mode__ArgTerms_5, hlds__hlds_out__hlds_out_mode__Term_6);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Context_12;

              {
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_12);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[6])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_12));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer hlds__hlds_out__hlds_out_mode__Int_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__V_106_106;
              MR_Word hlds__hlds_out__hlds_out_mode__Context_114;

              {
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_114);
              }
              {
                hlds__hlds_out__hlds_out_mode__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_106_106, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Int_14));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_106_106));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_114));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Float hlds__hlds_out__hlds_out_mode__Float_15 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__V_104_104;
              MR_Word hlds__hlds_out__hlds_out_mode__Context_115;

              {
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_115);
              }
              {
                hlds__hlds_out__hlds_out_mode__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_104_104, 1) = MR_box_float(hlds__hlds_out__hlds_out_mode__Float_15);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_104_104));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_115));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Char hlds__hlds_out__hlds_out_mode__Char_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
              MR_String hlds__hlds_out__hlds_out_mode__V_100_100;
              MR_Word hlds__hlds_out__hlds_out_mode__SymName_117;

              {
                hlds__hlds_out__hlds_out_mode__V_100_100 = mercury__string__from_char_1_f_0(hlds__hlds_out__hlds_out_mode__Char_17);
              }
              {
                hlds__hlds_out__hlds_out_mode__SymName_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SymName_117, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_100_100));
              }
              {
                parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__SymName_117, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_mode__Term_6);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String hlds__hlds_out__hlds_out_mode__String_16 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__V_102_102;
              MR_Word hlds__hlds_out__hlds_out_mode__Context_116;

              {
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_116);
              }
              {
                hlds__hlds_out__hlds_out_mode__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_102_102, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__String_16));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_102_102));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_116));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__V_98_98;
              MR_Word hlds__hlds_out__hlds_out_mode__Context_118;
              MR_String hlds__hlds_out__hlds_out_mode__FunctorName_119;
              MR_String hlds__hlds_out__hlds_out_mode__String_120 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));

              {
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_118);
              }
              {
                hlds__hlds_out__hlds_out_mode__FunctorName_119 = mercury__string__f_43_43_2_f_0((MR_String) "ImplDefinedConst: ", hlds__hlds_out__hlds_out_mode__String_120);
              }
              {
                hlds__hlds_out__hlds_out_mode__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_98_98, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_119));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_98_98));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_118));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
              MR_String hlds__hlds_out__hlds_out_mode__TypeCtorName_19 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
              MR_Integer hlds__hlds_out__hlds_out_mode__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 3)));
              MR_String hlds__hlds_out__hlds_out_mode__V_89_89;
              MR_Word hlds__hlds_out__hlds_out_mode__V_95_95;
              MR_Word hlds__hlds_out__hlds_out_mode__Context_121;
              MR_String hlds__hlds_out__hlds_out_mode__FunctorName_122;
              MR_String hlds__hlds_out__hlds_out_mode__V_169_169;
              MR_Word hlds__hlds_out__hlds_out_mode__V_175_175;
              MR_String hlds__hlds_out__hlds_out_mode__V_177_177;
              MR_String hlds__hlds_out__hlds_out_mode__V_178_178;
              MR_String hlds__hlds_out__hlds_out_mode__V_185_185;
              MR_String hlds__hlds_out__hlds_out_mode__V_187_187;
              MR_String hlds__hlds_out__hlds_out_mode__V_188_188;
              MR_String hlds__hlds_out__hlds_out_mode__V_195_195;

              {
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_121);
              }
              {
                hlds__hlds_out__hlds_out_mode__V_89_89 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__ModuleName_18);
              }
              hlds__hlds_out__hlds_out_mode__V_175_175 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_175_175, hlds__hlds_out__hlds_out_mode__Arity_20, &hlds__hlds_out__hlds_out_mode__V_169_169);
              }
              {
                hlds__hlds_out__hlds_out_mode__V_177_177 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_169_169);
              }
              {
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_175_175, hlds__hlds_out__hlds_out_mode__TypeCtorName_19, &hlds__hlds_out__hlds_out_mode__V_178_178);
              }
              {
                hlds__hlds_out__hlds_out_mode__V_185_185 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_178_178, hlds__hlds_out__hlds_out_mode__V_177_177);
              }
              {
                hlds__hlds_out__hlds_out_mode__V_187_187 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_mode__V_185_185);
              }
              {
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_175_175, hlds__hlds_out__hlds_out_mode__V_89_89, &hlds__hlds_out__hlds_out_mode__V_188_188);
              }
              {
                hlds__hlds_out__hlds_out_mode__V_195_195 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_188_188, hlds__hlds_out__hlds_out_mode__V_187_187);
              }
              {
                hlds__hlds_out__hlds_out_mode__FunctorName_122 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo for ", hlds__hlds_out__hlds_out_mode__V_195_195);
              }
              {
                hlds__hlds_out__hlds_out_mode__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_95_95, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_122));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_95_95));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_121));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Context_123;

              {
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_123);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[5])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_123));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer hlds__hlds_out__hlds_out_mode__TIConstNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__Arg_27;
              MR_Word hlds__hlds_out__hlds_out_mode__V_63_63;
              MR_Word hlds__hlds_out__hlds_out_mode__V_68_68;
              MR_Word hlds__hlds_out__hlds_out_mode__V_71_71;
              MR_Word hlds__hlds_out__hlds_out_mode__Context_131;

              {
                hlds__hlds_out__hlds_out_mode__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_63_63, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "type_info_const arity != 0");
              }
              {
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_131);
              }
              {
                hlds__hlds_out__hlds_out_mode__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_68_68, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TIConstNum_26));
              }
              {
                hlds__hlds_out__hlds_out_mode__Arg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_68_68));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_131));
              }
              {
                hlds__hlds_out__hlds_out_mode__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_71_71, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Arg_27));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[11])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_71_71));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_131));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer hlds__hlds_out__hlds_out_mode__TCIConstNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__V_53_53;
              MR_Word hlds__hlds_out__hlds_out_mode__V_58_58;
              MR_Word hlds__hlds_out__hlds_out_mode__V_61_61;
              MR_Word hlds__hlds_out__hlds_out_mode__Context_133;
              MR_Word hlds__hlds_out__hlds_out_mode__Arg_135;

              {
                hlds__hlds_out__hlds_out_mode__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_53_53, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "typeclass_info_const arity != 0");
              }
              {
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_133);
              }
              {
                hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TCIConstNum_28));
              }
              {
                hlds__hlds_out__hlds_out_mode__Arg_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_133));
              }
              {
                hlds__hlds_out__hlds_out_mode__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_61_61, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Arg_135));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[13])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_61_61));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_133));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__SubConsId_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_mode__SubArg_30;
              MR_Word hlds__hlds_out__hlds_out_mode__NumArg_31;
              MR_Word hlds__hlds_out__hlds_out_mode__V_41_41;
              MR_Word hlds__hlds_out__hlds_out_mode__V_47_47;
              MR_Word hlds__hlds_out__hlds_out_mode__V_50_50;
              MR_Word hlds__hlds_out__hlds_out_mode__V_51_51;
              MR_Word hlds__hlds_out__hlds_out_mode__Context_136;
              MR_Integer hlds__hlds_out__hlds_out_mode__TCIConstNum_138 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));

              {
                hlds__hlds_out__hlds_out_mode__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_41_41, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "ground_term_const arity != 0");
              }
              {
                hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(hlds__hlds_out__hlds_out_mode__SubConsId_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__SubArg_30);
              }
              {
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_136);
              }
              {
                hlds__hlds_out__hlds_out_mode__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TCIConstNum_138));
              }
              {
                hlds__hlds_out__hlds_out_mode__NumArg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_47_47));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_136));
              }
              {
                hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_51_51, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubArg_30));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__hlds_out__hlds_out_mode__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_50_50, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__NumArg_31));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_50_50, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_51_51));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[8])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_50_50));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_136));
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

    {
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_8,
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_9)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
    MR_Word hlds__hlds_out__hlds_out_mode__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_8, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_mode__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_8, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_13;
    MR_Word hlds__hlds_out__hlds_out_mode__FirstTerm_14;
    MR_Word hlds__hlds_out__hlds_out_mode__V_18_18;

    {
      hlds__hlds_out__hlds_out_mode__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
    }
    {
      hlds__hlds_out__hlds_out_mode__ArgTerms_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_18_18, hlds__hlds_out__hlds_out_mode__Args_12);
    }
    {
      hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(hlds__hlds_out__hlds_out_mode__ConsId_11, hlds__hlds_out__hlds_out_mode__ArgTerms_13, &hlds__hlds_out__hlds_out_mode__FirstTerm_14);
    }
    if ((hlds__hlds_out__hlds_out_mode__BoundInsts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__hlds_out__hlds_out_mode__Term_10 = hlds__hlds_out__hlds_out_mode__FirstTerm_14;
    else
      {
        MR_Word hlds__hlds_out__hlds_out_mode__HeadBoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__BoundInsts_9, (MR_Integer) 0)));
        MR_Word hlds__hlds_out__hlds_out_mode__TailBoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__BoundInsts_9, (MR_Integer) 1)));
        MR_Word hlds__hlds_out__hlds_out_mode__SecondTerm_17;
        MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
        MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;

        {
          hlds__hlds_out__hlds_out_mode__SecondTerm_17 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__HeadBoundInst_15, hlds__hlds_out__hlds_out_mode__TailBoundInsts_16);
        }
        {
          hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SecondTerm_17));
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__hlds_out__hlds_out_mode__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FirstTerm_14));
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_20_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_22_22));
        }
        {
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[29], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
        }
      }
    return hlds__hlds_out__hlds_out_mode__Term_10;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_1,
  MR_Word hlds__hlds_out__hlds_out_mode__Context_2,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__4_4;

    if ((hlds__hlds_out__hlds_out_mode__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          hlds__hlds_out__hlds_out_mode__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[28]));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_2));
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 1)));

        {
          hlds__hlds_out__hlds_out_mode__HeadVar__4_4 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_1, hlds__hlds_out__hlds_out_mode__Context_2, hlds__hlds_out__hlds_out_mode__BoundInst_12, hlds__hlds_out__hlds_out_mode__BoundInsts_13);
        }
      }
    return hlds__hlds_out__hlds_out_mode__HeadVar__4_4;
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
  MR_String hlds__hlds_out__hlds_out_mode__SharedName_2)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__3_3;

    switch (hlds__hlds_out__hlds_out_mode__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "clobbered";
        break;
      case (MR_Integer) 4:
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "mostly_clobbered";
        break;
      case (MR_Integer) 2:
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "mostly_unique";
        break;
      case (MR_Integer) 0:
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__SharedName_2;
        break;
      case (MR_Integer) 1:
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "unique";
        break;
    }
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

    switch (hlds__hlds_out__hlds_out_mode__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "fake";
        break;
      case (MR_Integer) 0:
        hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "real";
        break;
    }
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

    switch (hlds__hlds_out__hlds_out_mode__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "dead";
        break;
      case (MR_Integer) 0:
        hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "live";
        break;
    }
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

    {
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

    {
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
        MR_Word hlds__hlds_out__hlds_out_mode__Term_8;

        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
              MR_Word hlds__hlds_out__hlds_out_mode__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__V_117_117;
              MR_Word hlds__hlds_out__hlds_out_mode__V_118_118;

              {
                hlds__hlds_out__hlds_out_mode__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_118_118, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_118_118, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_118_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_118_118, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_118_118, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
              }
              {
                hlds__hlds_out__hlds_out_mode__V_117_117 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_118_118, hlds__hlds_out__hlds_out_mode__Args_10);
              }
              {
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__Name_9, hlds__hlds_out__hlds_out_mode__V_117_117, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Liveness_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
              MR_Word hlds__hlds_out__hlds_out_mode__Real_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__InstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_mode__InstB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 3)));

              switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__hlds_out__hlds_out_mode__V_102_102;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_104_104;
                    MR_String hlds__hlds_out__hlds_out_mode__V_105_105;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_106_106;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_107_107;
                    MR_String hlds__hlds_out__hlds_out_mode__V_108_108;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_109_109;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_110_110;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_111_111;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_112_112;

                    {
                      hlds__hlds_out__hlds_out_mode__V_105_105 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Liveness_11);
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__V_104_104 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_105_105);
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__V_108_108 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_12);
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__V_107_107 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_108_108);
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__V_110_110 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstA_13);
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__V_112_112 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstB_14);
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_111_111, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_112_112));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_109_109, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_110_110));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_109_109, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_111_111));
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_106_106, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_107_107));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_106_106, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_109_109));
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_102_102, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_104_104));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_102_102, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_106_106));
                    }
                    {
                      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[27], hlds__hlds_out__hlds_out_mode__V_102_102, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "unify_inst");
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__InstA_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
              MR_Word hlds__hlds_out__hlds_out_mode__InstB_120 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

              switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__hlds_out__hlds_out_mode__V_92_92;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_94_94;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_95_95;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_96_96;

                    {
                      hlds__hlds_out__hlds_out_mode__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_94_94, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_94_94, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1));
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_94_94, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_94_94, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_96_96, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_120));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_95_95, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA_119));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_95_95, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_96_96));
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__V_92_92 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_94_94, hlds__hlds_out__hlds_out_mode__V_95_95);
                    }
                    {
                      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[22], hlds__hlds_out__hlds_out_mode__V_92_92, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "merge_inst");
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
                  MR_Word hlds__hlds_out__hlds_out_mode__Uniq_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) & (MR_Integer) 7);
                  MR_Word hlds__hlds_out__hlds_out_mode__IsLive_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word hlds__hlds_out__hlds_out_mode__Real_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__hlds_out__hlds_out_mode__V_74_74;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_76_76;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_77_77;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_78_78;
                        MR_String hlds__hlds_out__hlds_out_mode__V_79_79;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_81_81;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_82_82;
                        MR_String hlds__hlds_out__hlds_out_mode__V_83_83;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_84_84;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_85_85;
                        MR_String hlds__hlds_out__hlds_out_mode__V_86_86;

                        {
                          hlds__hlds_out__hlds_out_mode__V_76_76 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_15);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_79_79 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_16, (MR_String) "shared");
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_78_78 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_79_79);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_83_83 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__IsLive_17);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_82_82 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_83_83);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_86_86 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_121);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_85_85 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_86_86);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_84_84, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_85_85));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_81_81, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_82_82));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_81_81, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_84_84));
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_77_77, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_78_78));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_77_77, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_81_81));
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_74_74, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_76_76));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_74_74, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_77_77));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[21], hlds__hlds_out__hlds_out_mode__V_74_74, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "ground_inst");
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__hlds_out__hlds_out_mode__Real_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
                  MR_Word hlds__hlds_out__hlds_out_mode__Uniq_124 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) & (MR_Integer) 7);
                  MR_Word hlds__hlds_out__hlds_out_mode__IsLive_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__hlds_out__hlds_out_mode__V_56_56;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_58_58;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_59_59;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_60_60;
                        MR_String hlds__hlds_out__hlds_out_mode__V_61_61;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_63_63;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_64_64;
                        MR_String hlds__hlds_out__hlds_out_mode__V_65_65;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_66_66;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_67_67;
                        MR_String hlds__hlds_out__hlds_out_mode__V_68_68;

                        {
                          hlds__hlds_out__hlds_out_mode__V_58_58 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_123);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_61_61 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_124, (MR_String) "shared");
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_60_60 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_61_61);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_65_65 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__IsLive_125);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_64_64 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_65_65);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_68_68 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_122);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_67_67 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_68_68);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_66_66, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_67_67));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_63_63, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_64_64));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_63_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_66_66));
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_59_59, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_60_60));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_59_59, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_63_63));
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_56_56, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_56_56, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_59_59));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[20], hlds__hlds_out__hlds_out_mode__V_56_56, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "any_inst");
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__hlds_out__hlds_out_mode__V_48_48;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_50_50;

                        {
                          hlds__hlds_out__hlds_out_mode__V_50_50 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_126);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_48_48, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_50_50));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[24], hlds__hlds_out__hlds_out_mode__V_48_48, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "shared_inst");
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__hlds_out__hlds_out_mode__V_40_40;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_42_42;

                        {
                          hlds__hlds_out__hlds_out_mode__V_42_42 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_127);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_42_42));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[23], hlds__hlds_out__hlds_out_mode__V_40_40, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "mostly_uniq_inst");
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word hlds__hlds_out__hlds_out_mode__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
                  MR_Word hlds__hlds_out__hlds_out_mode__Uniq_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_150_150;
                        MR_Word hlds__hlds_out__hlds_out_mode__Term0_19;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
                        MR_String hlds__hlds_out__hlds_out_mode__V_31_31;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_33_33;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;

                        {
                          parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_18, &hlds__hlds_out__hlds_out_mode__Term0_19);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_31_31 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_128, (MR_String) "shared");
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_30_30 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_31_31);
                        }
                        hlds__hlds_out__hlds_out_mode__TypeCtorInfo_150_150 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        {
                          hlds__hlds_out__hlds_out_mode__V_34_34 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__hlds_out__hlds_out_mode__TypeCtorInfo_150_150, hlds__hlds_out__hlds_out_mode__Term0_19);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_30_30));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_33_33));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_150_150, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[25], hlds__hlds_out__hlds_out_mode__V_28_28, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "typed_ground");
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
                  MR_Word hlds__hlds_out__hlds_out_mode__Type_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_152_152;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_23_23;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
                        MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
                        MR_Word hlds__hlds_out__hlds_out_mode__Term0_129;

                        {
                          parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_132, &hlds__hlds_out__hlds_out_mode__Term0_129);
                        }
                        hlds__hlds_out__hlds_out_mode__TypeCtorInfo_152_152 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        {
                          hlds__hlds_out__hlds_out_mode__V_23_23 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__hlds_out__hlds_out_mode__TypeCtorInfo_152_152, hlds__hlds_out__hlds_out_mode__Term0_129);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_25_25 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_131);
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_25_25));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          hlds__hlds_out__hlds_out_mode__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_21_21, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_23_23));
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_24_24));
                        }
                        {
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_152_152, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[26], hlds__hlds_out__hlds_out_mode__V_21_21, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__hlds_out__hlds_out_mode__InstName__tmp_copy_7 = hlds__hlds_out__hlds_out_mode__SubInstName_131;

                          hlds__hlds_out__hlds_out_mode__InstName_7 = hlds__hlds_out__hlds_out_mode__InstName__tmp_copy_7;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
        return hlds__hlds_out__hlds_out_mode__Term_8;
      }
      break;
    }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
  MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_5)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;
    MR_Word hlds__hlds_out__hlds_out_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_5, (MR_Integer) 0)));
    MR_Integer hlds__hlds_out__hlds_out_mode__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_5, (MR_Integer) 1)));
    MR_String hlds__hlds_out__hlds_out_mode__ConsName_9;
    MR_String hlds__hlds_out__hlds_out_mode__V_13_13;
    MR_Word hlds__hlds_out__hlds_out_mode__V_17_17;
    MR_String hlds__hlds_out__hlds_out_mode__V_19_19;
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
    MR_String hlds__hlds_out__hlds_out_mode__V_27_27;
    MR_String hlds__hlds_out__hlds_out_mode__V_28_28;

    {
      hlds__hlds_out__hlds_out_mode__V_13_13 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__SymName_7);
    }
    hlds__hlds_out__hlds_out_mode__V_25_25 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_25_25, hlds__hlds_out__hlds_out_mode__Arity_8, &hlds__hlds_out__hlds_out_mode__V_19_19);
    }
    {
      hlds__hlds_out__hlds_out_mode__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_19_19);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_25_25, hlds__hlds_out__hlds_out_mode__V_13_13, &hlds__hlds_out__hlds_out_mode__V_28_28);
    }
    {
      hlds__hlds_out__hlds_out_mode__ConsName_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_28_28, hlds__hlds_out__hlds_out_mode__V_27_27);
    }
    {
      hlds__hlds_out__hlds_out_mode__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_17_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ConsName_9));
    }
    {
      hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_17_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
    }
    return hlds__hlds_out__hlds_out_mode__Term_6;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_type_ctor_propagated_to_term_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
  MR_Word hlds__hlds_out__hlds_out_mode__PropagatedResult_5)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;

    if ((hlds__hlds_out__hlds_out_mode__PropagatedResult_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[17]));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__PropagatedResult_5), (MR_Integer) 1);
        MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;
        MR_Word hlds__hlds_out__hlds_out_mode__V_11_11;

        {
          hlds__hlds_out__hlds_out_mode__V_11_11 = hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_4, hlds__hlds_out__hlds_out_mode__TypeCtor_7);
        }
        {
          hlds__hlds_out__hlds_out_mode__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_10_10, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_11_11));
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[18]));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_10_10));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
        }
      }
    return hlds__hlds_out__hlds_out_mode__Term_6;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_6;

    {
      hlds__hlds_out__hlds_out_mode__conv0_Term_6 = hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_6));
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
  MR_Word hlds__hlds_out__hlds_out_mode__ContainsTypes_5)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;

    if ((hlds__hlds_out__hlds_out_mode__ContainsTypes_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[15]));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ContainsTypes_5, (MR_Integer) 0)));
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtors_8;
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorTerms_9;
        MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;

        {
          mercury__set__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_mode__TypeCtorSet_7, &hlds__hlds_out__hlds_out_mode__TypeCtors_8);
        }
        {
          hlds__hlds_out__hlds_out_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0_1));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
        }
        {
          hlds__hlds_out__hlds_out_mode__TypeCtorTerms_9 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_16, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_10_10, hlds__hlds_out__hlds_out_mode__TypeCtors_8);
        }
        {
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[16]));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TypeCtorTerms_9));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
        }
      }
    return hlds__hlds_out__hlds_out_mode__Term_6;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_var_to_term_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVar_5)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;
    MR_Integer hlds__hlds_out__hlds_out_mode__InstVarNum_7;
    MR_String hlds__hlds_out__hlds_out_mode__InstVarNumStr_8;
    MR_Word hlds__hlds_out__hlds_out_mode__V_9_9;
    MR_String hlds__hlds_out__hlds_out_mode__V_10_10;

    {
      hlds__hlds_out__hlds_out_mode__InstVarNum_7 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__hlds_out__hlds_out_mode__InstVar_5);
    }
    {
      hlds__hlds_out__hlds_out_mode__InstVarNumStr_8 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__InstVarNum_7);
    }
    {
      hlds__hlds_out__hlds_out_mode__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "inst_var_", hlds__hlds_out__hlds_out_mode__InstVarNumStr_8);
    }
    {
      hlds__hlds_out__hlds_out_mode__V_9_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_9_9, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_10_10));
    }
    {
      hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_9_9));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
    }
    return hlds__hlds_out__hlds_out_mode__Term_6;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_6;

    {
      hlds__hlds_out__hlds_out_mode__conv0_Term_6 = hlds__hlds_out__hlds_out_mode__inst_var_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_6));
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstResults_5)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;

    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstResults_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_mode__InstResults_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[2]));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[14]));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__GroundnessResult_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_mode__AnyResult_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_mode__InstNamesResult_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 2)));
          MR_Word hlds__hlds_out__hlds_out_mode__InstVarsResult_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 3)));
          MR_Word hlds__hlds_out__hlds_out_mode__TypeResult_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 4)));
          MR_Word hlds__hlds_out__hlds_out_mode__PropagatedResult_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 5)));
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm1_13;
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm2_14;
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm3_15;
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm4_16;
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm5_17;
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm6_18;
          MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
          MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
          MR_Word hlds__hlds_out__hlds_out_mode__V_29_29;
          MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
          MR_Word hlds__hlds_out__hlds_out_mode__V_31_31;
          MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

          switch (hlds__hlds_out__hlds_out_mode__GroundnessResult_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                {
                  hlds__hlds_out__hlds_out_mode__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[3]));
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  hlds__hlds_out__hlds_out_mode__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[4]));
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  hlds__hlds_out__hlds_out_mode__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[5]));
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
                }
              }
              break;
          }
          switch (hlds__hlds_out__hlds_out_mode__AnyResult_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                {
                  hlds__hlds_out__hlds_out_mode__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[6]));
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  hlds__hlds_out__hlds_out_mode__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[7]));
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  hlds__hlds_out__hlds_out_mode__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[8]));
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
                }
              }
              break;
          }
          if ((hlds__hlds_out__hlds_out_mode__InstNamesResult_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                hlds__hlds_out__hlds_out_mode__SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[9]));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
              }
            }
          else
            {
              MR_Word hlds__hlds_out__hlds_out_mode__InstNameSet_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstNamesResult_9, (MR_Integer) 0)));
              MR_Integer hlds__hlds_out__hlds_out_mode__NumInstNames_62;
              MR_Word hlds__hlds_out__hlds_out_mode__CountTerm_63;
              MR_Word hlds__hlds_out__hlds_out_mode__V_64_64;
              MR_Word hlds__hlds_out__hlds_out_mode__V_68_68;

              {
                mercury__set__count_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, hlds__hlds_out__hlds_out_mode__InstNameSet_61, &hlds__hlds_out__hlds_out_mode__NumInstNames_62);
              }
              {
                hlds__hlds_out__hlds_out_mode__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_64_64, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__NumInstNames_62));
              }
              {
                hlds__hlds_out__hlds_out_mode__CountTerm_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_63, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_64_64));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_63, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
              }
              {
                hlds__hlds_out__hlds_out_mode__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_68_68, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__CountTerm_63));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__hlds_out__hlds_out_mode__SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[10]));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_68_68));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
              }
            }
          if ((hlds__hlds_out__hlds_out_mode__InstVarsResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                hlds__hlds_out__hlds_out_mode__SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[11]));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
              }
            }
          else
            {
              MR_Word hlds__hlds_out__hlds_out_mode__TypeInfo_16_86 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3];
              MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstVarsResult_10, (MR_Integer) 0)));
              MR_Word hlds__hlds_out__hlds_out_mode__InstVars_78;
              MR_Word hlds__hlds_out__hlds_out_mode__InstVarTerms_79;
              MR_Word hlds__hlds_out__hlds_out_mode__V_80_80;

              {
                mercury__set__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_mode__TypeInfo_16_86, hlds__hlds_out__hlds_out_mode__InstVarSet_77, &hlds__hlds_out__hlds_out_mode__InstVars_78);
              }
              {
                hlds__hlds_out__hlds_out_mode__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
              }
              {
                hlds__hlds_out__hlds_out_mode__InstVarTerms_79 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeInfo_16_86, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_80_80, hlds__hlds_out__hlds_out_mode__InstVars_78);
              }
              {
                hlds__hlds_out__hlds_out_mode__SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[12]));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstVarTerms_79));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
              }
            }
          {
            hlds__hlds_out__hlds_out_mode__SubTerm5_17 = hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_4, hlds__hlds_out__hlds_out_mode__TypeResult_11);
          }
          {
            hlds__hlds_out__hlds_out_mode__SubTerm6_18 = hlds__hlds_out__hlds_out_mode__inst_result_type_ctor_propagated_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_4, hlds__hlds_out__hlds_out_mode__PropagatedResult_12);
          }
          {
            hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm6_18));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__hlds_out__hlds_out_mode__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_31_31, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm5_17));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_31_31, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_32_32));
          }
          {
            hlds__hlds_out__hlds_out_mode__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_30_30, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm4_16));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_30_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_31_31));
          }
          {
            hlds__hlds_out__hlds_out_mode__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_29_29, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm3_15));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_29_29, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_30_30));
          }
          {
            hlds__hlds_out__hlds_out_mode__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm2_14));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_29_29));
          }
          {
            hlds__hlds_out__hlds_out_mode__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_27_27, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm1_13));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_28_28));
          }
          {
            hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[13]));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
          }
        }
        break;
    }
    return hlds__hlds_out__hlds_out_mode__Term_6;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
{
  {
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3;
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_LambdaHeadVar__3_30;

    {
      hlds__hlds_out__hlds_out_mode__conv0_LambdaHeadVar__3_30 = hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__227__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
    hlds__hlds_out__hlds_out_mode__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_LambdaHeadVar__3_30));
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__Term_8;

    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_mode__Inst_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, (MR_String) "not_reached");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_mode__Term0_13;
          MR_Word hlds__hlds_out__hlds_out_mode__Term1_14;
          MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;

          {
            parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_12, &hlds__hlds_out__hlds_out_mode__Term0_13);
          }
          {
            hlds__hlds_out__hlds_out_mode__Term1_14 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__Term0_13);
          }
          {
            hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Term1_14));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[1]));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_mode__Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));

          if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_String hlds__hlds_out__hlds_out_mode__V_58_58 = ((&hlds__hlds_out__hlds_out_mode_vector_common_4[0 + hlds__hlds_out__hlds_out_mode__Uniq_9]))->hlds__hlds_out__hlds_out_mode__vector_common_type_4_0__vct_4_f_0;
              MR_Word hlds__hlds_out__hlds_out_mode__V_78_78;

              {
                hlds__hlds_out__hlds_out_mode__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_78_78, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
              }
              {
                hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_78_78));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
              }
            }
          else
            {
              MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_11 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_10), (MR_Integer) 1);

              {
                hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__PredInstInfo_11);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__InstResults_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 3)));
              MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_17;
              MR_Word hlds__hlds_out__hlds_out_mode__V_50_50;
              MR_String hlds__hlds_out__hlds_out_mode__V_51_51;
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));

              switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__hlds_out__hlds_out_mode__V_44_44;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_45_45;
                    MR_Word hlds__hlds_out__hlds_out_mode__V_46_46;

                    {
                      hlds__hlds_out__hlds_out_mode__V_44_44 = hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstResults_15);
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__V_46_46 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__BoundInsts_16);
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_45_45, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_46_46));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_44_44));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_45_45));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__hlds_out__hlds_out_mode__V_48_48;

                    {
                      hlds__hlds_out__hlds_out_mode__V_48_48 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__BoundInsts_16);
                    }
                    {
                      hlds__hlds_out__hlds_out_mode__ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_48_48));
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
              }
              switch (hlds__hlds_out__hlds_out_mode__Uniq_59) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                  hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "clobbered";
                  break;
                case (MR_Integer) 4:
                  hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "mostly_clobbered";
                  break;
                case (MR_Integer) 2:
                  hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "mostly_unique";
                  break;
                case (MR_Integer) 0:
                  hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "bound";
                  break;
                case (MR_Integer) 1:
                  hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "unique";
                  break;
              }
              {
                hlds__hlds_out__hlds_out_mode__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_50_50, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_51_51));
              }
              {
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__V_50_50, hlds__hlds_out__hlds_out_mode__ArgTerms_17, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));

              if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_String hlds__hlds_out__hlds_out_mode__V_42_42;
                  MR_Word hlds__hlds_out__hlds_out_mode__V_96_96;

                  switch (hlds__hlds_out__hlds_out_mode__Uniq_62) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 3:
                      hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "clobbered";
                      break;
                    case (MR_Integer) 4:
                      hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "mostly_clobbered";
                      break;
                    case (MR_Integer) 2:
                      hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "mostly_unique";
                      break;
                    case (MR_Integer) 0:
                      hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "ground";
                      break;
                    case (MR_Integer) 1:
                      hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "unique";
                      break;
                  }
                  {
                    hlds__hlds_out__hlds_out_mode__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_96_96, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_42_42));
                  }
                  {
                    hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_96_96));
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
                  }
                }
              else
                {
                  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_60 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_63), (MR_Integer) 1);

                  {
                    hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__PredInstInfo_60);
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__V_40_40;
              MR_Word hlds__hlds_out__hlds_out_mode__V_41_41;

              {
                hlds__hlds_out__hlds_out_mode__V_41_41 = mercury__term__context_init_0_f_0();
              }
              {
                hlds__hlds_out__hlds_out_mode__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Var_18));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_41_41));
              }
              {
                hlds__hlds_out__hlds_out_mode__Term_8 = mercury__term__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__V_40_40);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__SubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
              MR_Word hlds__hlds_out__hlds_out_mode__V_39_39;
              MR_Box hlds__hlds_out__hlds_out_mode__conv1_Term_8;

              {
                hlds__hlds_out__hlds_out_mode__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0_1));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
              }
              {
                hlds__hlds_out__hlds_out_mode__V_39_39 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInst_20);
              }
              {
                hlds__hlds_out__hlds_out_mode__conv1_Term_8 = mercury__set__fold_3_f_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_27_27, hlds__hlds_out__hlds_out_mode__Vars_19, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_39_39)));
              }
              hlds__hlds_out__hlds_out_mode__Term_8 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv1_Term_8);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__InstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));

              {
                hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstName_24);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__hlds_out__hlds_out_mode__Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_mode__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;

              {
                hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_22));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Args_23));
              }
              {
                hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_26_26);
              }
            }
            break;
        }
        break;
    }
    return hlds__hlds_out__hlds_out_mode__Term_8;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
  MR_String hlds__hlds_out__hlds_out_mode__Name_5)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

    {
      hlds__hlds_out__hlds_out_mode__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_6_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_5));
    }
    {
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_6_6));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
    }
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_uni_mode_list_to_string_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__UniModes_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_String hlds__hlds_out__hlds_out_mode__String_6;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_6;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__UniModes_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_6);
    }
    hlds__hlds_out__hlds_out_mode__String_6 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_6);
    return hlds__hlds_out__hlds_out_mode__String_6;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_list_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__UniModes_5,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_9;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__UniModes_5, hlds__hlds_out__hlds_out_mode__InstVarSet_6, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_9);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_uni_mode_to_string_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_String hlds__hlds_out__hlds_out_mode__String_6;
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2];
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_14;
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_15;
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_16;
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_17;
    MR_Word hlds__hlds_out__hlds_out_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
    MR_String hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_22;
    MR_String hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_24;
    MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_22;
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_24;
    MR_Box hlds__hlds_out__hlds_out_mode__conv3_String_6;

    hlds__hlds_out__hlds_out_mode__InstA1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_mode__InstB1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_mode__InstA2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_19_19, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_mode__InstB2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_19_19, (MR_Integer) 1)));
    {
      hlds__hlds_out__hlds_out_mode__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_14));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_16));
    }
    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__V_21_21, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_22);
    }
    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_22 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_22);
    hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_22)), &hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_24);
    }
    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_24 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_24);
    {
      hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_15));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_17));
    }
    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__V_26_26, ((MR_Box) (hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_24)), &hlds__hlds_out__hlds_out_mode__conv3_String_6);
    }
    hlds__hlds_out__hlds_out_mode__String_6 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv3_String_6);
    return hlds__hlds_out__hlds_out_mode__String_6;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_5,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1];
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_17;
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_18;
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_19;
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_20;
    MR_Word hlds__hlds_out__hlds_out_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_5, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_5, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
    MR_Word hlds__hlds_out__hlds_out_mode__V_29_29;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_25;
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_27;
    MR_Box hlds__hlds_out__hlds_out_mode__conv3_STATE_VARIABLE_IO_9;

    hlds__hlds_out__hlds_out_mode__InstA1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_mode__InstB1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_mode__InstA2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_mode__InstB2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, (MR_Integer) 1)));
    {
      hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_19));
    }
    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_6, hlds__hlds_out__hlds_out_mode__V_24_24, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_25);
    }
    hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_27);
    }
    {
      hlds__hlds_out__hlds_out_mode__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_29_29, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_29_29, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_20));
    }
    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_6, hlds__hlds_out__hlds_out_mode__V_29_29, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv3_STATE_VARIABLE_IO_9);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_uni_mode_list_to_string_5_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_7,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Insts_7, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
    return hlds__hlds_out__hlds_out_mode__String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_uni_mode_list_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_8,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Insts_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_uni_mode_to_string_5_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Inst_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
    return hlds__hlds_out__hlds_out_mode__String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_uni_mode_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Inst_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_inst_to_string_5_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], (MR_String) "\n", hlds__hlds_out__hlds_out_mode__Inst_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
    return hlds__hlds_out__hlds_out_mode__String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_U_15;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], (MR_String) "\n", hlds__hlds_out__hlds_out_mode__Inst_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_U_15);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_inst_list_to_string_5_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_7,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Insts_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
    return hlds__hlds_out__hlds_out_mode__String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_list_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_8,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

    {
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Insts_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
  }
}

MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_5)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

    {
      hlds__hlds_out__hlds_out_mode__V_6_6 = mercury__term__context_init_0_f_0();
    }
    {
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__V_6_6, hlds__hlds_out__hlds_out_mode__InstName_5);
    }
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_5)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

    {
      hlds__hlds_out__hlds_out_mode__V_6_6 = mercury__term__context_init_0_f_0();
    }
    {
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__V_6_6, hlds__hlds_out__hlds_out_mode__Inst_5);
    }
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0_1(
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
{
  {
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

    {
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
  MR_Word hlds__hlds_out__hlds_out_mode__Mode_7)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__Term_8;

    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Mode_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__hlds_out__hlds_out_mode__InstA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 0)));
        MR_Word hlds__hlds_out__hlds_out_mode__InstB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 1)));
        MR_Word hlds__hlds_out__hlds_out_mode__V_17_17;
        MR_Word hlds__hlds_out__hlds_out_mode___Uniq_11;
        MR_Word hlds__hlds_out__hlds_out_mode__V_12_12;

        hlds__hlds_out__hlds_out_mode__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstA_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstA_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (hlds__hlds_out__hlds_out_mode__succeeded)
          {
            hlds__hlds_out__hlds_out_mode___Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstA_9, (MR_Integer) 1)));
            hlds__hlds_out__hlds_out_mode__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstA_9, (MR_Integer) 2)));
            hlds__hlds_out__hlds_out_mode__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__V_17_17)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_out__hlds_out_mode__succeeded)
              {
                hlds__hlds_out__hlds_out_mode__V_12_12 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__V_17_17), (MR_Integer) 1);
                {
                  hlds__hlds_out__hlds_out_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__hlds_out__hlds_out_mode__InstB_10, hlds__hlds_out__hlds_out_mode__InstA_9);
                }
              }
          }
        if (hlds__hlds_out__hlds_out_mode__succeeded)
          {
            hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstA_9);
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_mode__V_19_19;
            MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
            MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
            MR_Word hlds__hlds_out__hlds_out_mode__V_23_23;

            {
              hlds__hlds_out__hlds_out_mode__V_21_21 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstA_9);
            }
            {
              hlds__hlds_out__hlds_out_mode__V_23_23 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstB_10);
            }
            {
              hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_23_23));
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__hlds_out__hlds_out_mode__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_19_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_21_21));
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_22_22));
            }
            {
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[0], hlds__hlds_out__hlds_out_mode__V_19_19, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
            }
          }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_mode__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 0)));
        MR_Word hlds__hlds_out__hlds_out_mode__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 1)));
        MR_Word hlds__hlds_out__hlds_out_mode__V_15_15;
        MR_Word hlds__hlds_out__hlds_out_mode__V_16_16;

        {
          hlds__hlds_out__hlds_out_mode__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0_1));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
        }
        {
          hlds__hlds_out__hlds_out_mode__V_15_15 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_16_16, hlds__hlds_out__hlds_out_mode__Args_14);
        }
        {
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__Name_13, hlds__hlds_out__hlds_out_mode__V_15_15, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
      }
    return hlds__hlds_out__hlds_out_mode__Term_8;
  }
}

MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__mode_to_term_2_f_0(
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
  MR_Word hlds__hlds_out__hlds_out_mode__Mode_5)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

    {
      hlds__hlds_out__hlds_out_mode__V_6_6 = mercury__term__context_init_0_f_0();
    }
    {
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__V_6_6, hlds__hlds_out__hlds_out_mode__Mode_5);
    }
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__VarSet_1,
  MR_Word hlds__hlds_out__hlds_out_mode__AppendVarNums_2,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

        if ((hlds__hlds_out__hlds_out_mode__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_mode__Var_16;
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_17;
            MR_Word hlds__hlds_out__hlds_out_mode__VarsInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_20;
            MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, (MR_Integer) 0)));

            hlds__hlds_out__hlds_out_mode__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_mode__Inst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 1)));
            {
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__VarSet_1, hlds__hlds_out__hlds_out_mode__AppendVarNums_2, hlds__hlds_out__hlds_out_mode__Var_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " -> ");
            }
            {
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_mode__InstVarSet_20);
            }
            {
              parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_20, hlds__hlds_out__hlds_out_mode__Inst_17);
            }
            if ((hlds__hlds_out__hlds_out_mode__VarsInsts_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                {
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(hlds__hlds_out__hlds_out_mode__Indent_3);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "%            ");
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__4__tmp_copy_4 = hlds__hlds_out__hlds_out_mode__VarsInsts_18;

                  hlds__hlds_out__hlds_out_mode__HeadVar__4_4 = hlds__hlds_out__hlds_out_mode__HeadVar__4__tmp_copy_4;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__write_instmap_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_mode__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_mode__AppendVarNums_8,
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_mode__InstMap_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

    {
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(hlds__hlds_out__hlds_out_mode__InstMap_10);
    }
    if (hlds__hlds_out__hlds_out_mode__succeeded)
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "unreachable");
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_mode__AssocList_12;

        {
          hlds__instmap__instmap_to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_mode__InstMap_10, &hlds__hlds_out__hlds_out_mode__AssocList_12);
        }
        {
          hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_p_0(hlds__hlds_out__hlds_out_mode__VarSet_7, hlds__hlds_out__hlds_out_mode__AppendVarNums_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__AssocList_12);
        }
      }
  }
}

void mercury__hlds__hlds_out__hlds_out_mode__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_mode__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__type_ctor_info_incl_addr_0);
}

void mercury__hlds__hlds_out__hlds_out_mode__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_out.hlds_out_mode. */
