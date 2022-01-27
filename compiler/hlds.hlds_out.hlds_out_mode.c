/*
** Automatically generated from `hlds_out_mode.m'
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


/* :- module hlds.hlds_out.hlds_out_mode. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_out__hlds_out_mode__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_mode.mih"


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
#include "term_io.mih"
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
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 138 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 141 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 144 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 150 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 153 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 156 "hlds.hlds_out.hlds_out_mode.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_types_expanded_inst_info_0_0[3];

#line 159 "hlds.hlds_out.hlds_out_mode.c"
static const MR_ConstString hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_names_expanded_inst_info_0_0[3];

#line 162 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0;

#line 165 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0[1];

#line 168 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_ptag_ordered_expanded_inst_info_0[1];

#line 171 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_name_ordered_expanded_inst_info_0[1];

#line 174 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_expanded_inst_info_0[1];

#line 177 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0;

#line 180 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1;

#line 183 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2];

#line 186 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2];

#line 189 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2];

#line 192 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0_10001(
#line 195 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 197 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

#line 200 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0_10001(
#line 203 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 205 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 207 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3);

#line 210 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
#line 213 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 215 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

#line 218 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
#line 221 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 223 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 225 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3);

#line 228 "hlds.hlds_out.hlds_out_mode.c"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0_10001(
#line 231 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 233 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 236 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0_10001(
#line 239 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 241 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 243 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 245 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3,
#line 247 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_4,
#line 249 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_5);

#line 381 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 381 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 381 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 387 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 387 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 387 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 372 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 372 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 372 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 372 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9);

#line 357 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 357 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 357 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 363 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 363 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 363 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 348 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 348 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 348 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 348 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9);

#line 588 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__588__1_2_p_0(
#line 588 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 588 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_57);

#line 580 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__580__1_2_p_0(
#line 580 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 580 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_67);

#line 596 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__596__1_2_p_0(
#line 596 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 596 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_45);

#line 239 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__239__1_3_f_0(
#line 239 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 239 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_28,
#line 239 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_29);

#line 1071 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0(
#line 1071 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5,
#line 1071 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1071 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1071 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__HeadVar__3_3,
#line 1071 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__HeadVar__4_4);

#line 1070 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0(
#line 1070 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

#line 1074 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0(
#line 1074 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1074 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1074 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3);

#line 1074 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0(
#line 1074 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1074 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2);

#line 1007 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0(
#line 1007 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21,
#line 1007 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1007 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1007 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3,
#line 1007 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4);

#line 897 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_7_p_0(
#line 897 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153,
#line 897 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_8,
#line 897 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 897 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 897 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 897 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 897 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_27,
#line 897 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28);

#line 884 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
#line 884 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_1,
#line 884 "hlds_out_mode.m"
  MR_Integer * hlds__hlds_out__hlds_out_mode__InstAddr_2);

#line 849 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
#line 849 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 849 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 849 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent0_2,
#line 849 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 849 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 849 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 849 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 849 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7);

#line 764 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(
#line 764 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89,
#line 764 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
#line 764 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 764 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 764 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 764 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 764 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_30,
#line 764 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);

#line 741 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
#line 741 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_26,
#line 741 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 741 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_2,
#line 741 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 741 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 741 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 741 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 741 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7);

#line 676 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(
#line 676 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 676 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_8,
#line 676 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 676 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 676 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 676 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 676 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22,
#line 676 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);

#line 648 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0(
#line 648 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37,
#line 648 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 648 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum_2,
#line 648 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
#line 648 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 648 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_5,
#line 648 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6,
#line 648 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7,
#line 648 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8);

#line 588 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3(
#line 588 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

#line 580 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2(
#line 580 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

#line 596 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1(
#line 596 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

#line 517 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(
#line 517 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ConsId_4,
#line 517 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 517 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__Term_6);

#line 504 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1(
#line 504 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 504 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 499 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(
#line 499 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 499 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 499 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_8,
#line 499 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_9);

#line 489 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(
#line 489 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_1,
#line 489 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_2,
#line 489 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3);

#line 481 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(
#line 481 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 481 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__SharedName_2);

#line 468 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(
#line 468 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

#line 463 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(
#line 463 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

#line 406 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_3(
#line 406 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 406 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 427 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2(
#line 427 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 427 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 411 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1(
#line 411 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 411 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 399 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(
#line 399 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 399 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 399 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_7);

#line 340 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(
#line 340 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 340 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_5);

#line 335 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1(
#line 335 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 335 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 256 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(
#line 256 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 256 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstResults_5);

#line 239 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0_1(
#line 239 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 239 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 239 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

#line 188 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(
#line 188 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 188 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 188 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7);

#line 127 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(
#line 127 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 127 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__Name_5);

#line 181 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0_1(
#line 181 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 181 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[9][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_2[41][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_3[3][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_4[1][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_5[1][5];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__mercury_to_mercury__output__arity1__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__mercury_to_mercury__output__arity1__string__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__type_ctor_info_expanded_inst_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__parse_tree__mercury_to_mercury__simple_inst_info__arity0__)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_simple_inst_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_2[41][1] = {
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
    ((MR_Box) ((MR_String) "fgtc"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "groundness_unknown"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "is_ground"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "is_not_ground"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "contains_any_unknown"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "does_contain_any"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "does_not_contain_any"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "contains_instnames_unknown"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "contains_types_known"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "contains_types_unknown"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "results"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\044merge_inst"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\044unify"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "\044any"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\044ground"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "\044mostly_uniq_inst"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "\044shared_inst"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "\044typed_ground"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "\044typed_inst"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "EMPTY_BOUND_INSTS"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "typeclass_info_cell_constructor"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "tabling_info_const"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "base_typeclass_info_const"))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "closure_cons"))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "deep_profiling_proc_layout"))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "ground_term_const"))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "table_io_decl"))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "type_info_const"))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "typeclass_info_const"))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "=<"))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) "any_func"))
  },
  /* row 40 */
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_output_lang_0)),
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "hlds.hlds_out.hlds_out_mode.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 995 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1003 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1011 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1019 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1027 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1035 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 1043 "hlds.hlds_out.hlds_out_mode.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_types_expanded_inst_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0
};

#line 1050 "hlds.hlds_out.hlds_out_mode.c"
static const MR_ConstString hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_names_expanded_inst_info_0_0[3] = {
  (MR_String) "eii_varset",
  (MR_String) "eii_module_info",
  (MR_String) "eii_expansions"
};

#line 1057 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0 = {
  (MR_String) "expanded_inst_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_types_expanded_inst_info_0_0,
  hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_names_expanded_inst_info_0_0,
  NULL,
  NULL
};

#line 1072 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0[1] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0
};

#line 1077 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_ptag_ordered_expanded_inst_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0
  }
};

#line 1086 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_name_ordered_expanded_inst_info_0[1] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0
};

#line 1091 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_expanded_inst_info_0[1] = {
  (MR_Integer) 0
};

#line 1096 "hlds.hlds_out.hlds_out_mode.c"
const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__type_ctor_info_expanded_inst_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_mode",
  (MR_String) "expanded_inst_info",
  {
    hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_name_ordered_expanded_inst_info_0
  },
  {
    hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_ptag_ordered_expanded_inst_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_expanded_inst_info_0
};

#line 1117 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0 = {
  (MR_String) "do_not_incl_addr",
  (MR_Integer) 0
};

#line 1123 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1 = {
  (MR_String) "do_incl_addr",
  (MR_Integer) 1
};

#line 1129 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1
};

#line 1135 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0
};

#line 1141 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1147 "hlds.hlds_out.hlds_out_mode.c"
const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__type_ctor_info_incl_addr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_mode",
  (MR_String) "incl_addr",
  {
    hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0
  },
  {
    hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0
};

#line 1168 "hlds.hlds_out.hlds_out_mode.c"
const MR_BaseTypeclassInfo base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0_10001))
};

#line 1179 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0_10001(
#line 1182 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1184 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
#line 1186 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1188 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1190 "hlds.hlds_out.hlds_out_mode.c"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1193 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1195 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
#line 1198 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 1200 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1202 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1205 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0_10001(
#line 1208 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1210 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 1212 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3)
#line 1214 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1216 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1218 "hlds.hlds_out.hlds_out_mode.c"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1;

#line 1221 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1223 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0(&hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3));
    }
#line 1226 "hlds.hlds_out.hlds_out_mode.c"
    *hlds__hlds_out__hlds_out_mode__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1));
#line 1228 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1230 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1233 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
#line 1236 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1238 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
#line 1240 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1242 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1244 "hlds.hlds_out.hlds_out_mode.c"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1247 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1249 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
#line 1252 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 1254 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1256 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1259 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
#line 1262 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1264 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 1266 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3)
#line 1268 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1270 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1272 "hlds.hlds_out.hlds_out_mode.c"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1;

#line 1275 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1277 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0(&hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3));
    }
#line 1280 "hlds.hlds_out.hlds_out_mode.c"
    *hlds__hlds_out__hlds_out_mode__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1));
#line 1282 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1284 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1287 "hlds.hlds_out.hlds_out_mode.c"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0_10001(
#line 1290 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 1292 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 1294 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1296 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1298 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 1300 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__closure;
#line 1302 "hlds.hlds_out.hlds_out_mode.c"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__2_2;

#line 1305 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 1307 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1309 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__conv0_HeadVar__2_2 = hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 1312 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__2_2));
#line 1314 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 1316 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1318 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1321 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0_10001(
#line 1324 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 1326 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1328 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 1330 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3,
#line 1332 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_4,
#line 1334 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_5)
#line 1336 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1338 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1340 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__closure;

#line 1343 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 1345 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1347 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3), hlds__hlds_out__hlds_out_mode__wrapper_arg_4, hlds__hlds_out__hlds_out_mode__wrapper_arg_5);
    }
#line 1350 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1352 "hlds.hlds_out.hlds_out_mode.c"
}

#line 381 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 381 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 381 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 381 "hlds_out_mode.m"
{
#line 381 "hlds_out_mode.m"
  {
#line 381 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 381 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 381 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv2_Term_8;

#line 381 "hlds_out_mode.m"
    {
#line 381 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv2_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 381 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv2_Term_8));
#line 381 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 381 "hlds_out_mode.m"
  }
#line 381 "hlds_out_mode.m"
}

#line 387 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 387 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 387 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 387 "hlds_out_mode.m"
{
#line 387 "hlds_out_mode.m"
  {
#line 387 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 387 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 387 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 387 "hlds_out_mode.m"
    {
#line 387 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 387 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
#line 387 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 387 "hlds_out_mode.m"
  }
#line 387 "hlds_out_mode.m"
}

#line 372 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 372 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 372 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 372 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9)
#line 372 "hlds_out_mode.m"
{
#line 375 "hlds_out_mode.m"
  {
#line 375 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 375 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
#line 375 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 0)));
#line 375 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 1)));
#line 375 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 3)));
#line 375 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ModesTerm_15;
#line 375 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 375 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
#line 375 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;
#line 375 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_52_52;
#line 375 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;
#line 377 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 2)));

#line 383 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__PredOrFunc_11 == (MR_Integer) 1))
#line 384 "hlds_out_mode.m"
      {
#line 384 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 384 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48;
#line 384 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__ArgModes_16;
#line 384 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__RetMode_17;
#line 384 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__ArgModesTerm_18;
#line 384 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 384 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
#line 384 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 384 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;
#line 384 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 385 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__conv0_RetMode_17;

#line 385 "hlds_out_mode.m"
        {
#line 385 "hlds_out_mode.m"
          parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_mode__Modes_12, &hlds__hlds_out__hlds_out_mode__ArgModes_16, &hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
        }
#line 385 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__RetMode_17 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
#line 387 "hlds_out_mode.m"
        {
#line 387 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 387 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 387 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
#line 387 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 387 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 387 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 387 "hlds_out_mode.m"
        }
#line 386 "hlds_out_mode.m"
        {
#line 386 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_20_20 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_22_22, hlds__hlds_out__hlds_out_mode__ArgModes_16);
        }
#line 1512 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 386 "hlds_out_mode.m"
        {
#line 386 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[39], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ArgModesTerm_18);
        }
#line 390 "hlds_out_mode.m"
        {
#line 390 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_27_27 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__RetMode_17);
        }
#line 390 "hlds_out_mode.m"
        {
#line 390 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
#line 390 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "hlds_out_mode.m"
        }
#line 389 "hlds_out_mode.m"
        {
#line 389 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgModesTerm_18));
#line 389 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_26_26));
#line 389 "hlds_out_mode.m"
        }
#line 389 "hlds_out_mode.m"
        {
#line 389 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[36], hlds__hlds_out__hlds_out_mode__V_24_24, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
        }
#line 384 "hlds_out_mode.m"
      }
#line 383 "hlds_out_mode.m"
    else
#line 379 "hlds_out_mode.m"
      {
#line 379 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 379 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

#line 381 "hlds_out_mode.m"
        {
#line 381 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 381 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 381 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
#line 381 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 381 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 381 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 381 "hlds_out_mode.m"
        }
#line 380 "hlds_out_mode.m"
        {
#line 380 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_30_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_32_32, hlds__hlds_out__hlds_out_mode__Modes_12);
        }
#line 380 "hlds_out_mode.m"
        {
#line 380 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[40], hlds__hlds_out__hlds_out_mode__V_30_30, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
        }
#line 379 "hlds_out_mode.m"
      }
#line 627 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 4))
#line 631 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "cc_multi";
#line 627 "hlds_out_mode.m"
    else
#line 627 "hlds_out_mode.m"
      if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 5))
#line 632 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "cc_nondet";
#line 627 "hlds_out_mode.m"
      else
#line 627 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 0))
#line 629 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "det";
#line 627 "hlds_out_mode.m"
        else
#line 627 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 6))
#line 627 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "erroneous";
#line 627 "hlds_out_mode.m"
          else
#line 627 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 7))
#line 628 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "failure";
#line 627 "hlds_out_mode.m"
            else
#line 627 "hlds_out_mode.m"
              if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 2))
#line 633 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "multi";
#line 627 "hlds_out_mode.m"
              else
#line 627 "hlds_out_mode.m"
                if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 3))
#line 634 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "nondet";
#line 627 "hlds_out_mode.m"
                else
#line 630 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "semidet";
#line 130 "hlds_out_mode.m"
    {
#line 130 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 130 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_52_52));
#line 130 "hlds_out_mode.m"
    }
#line 129 "hlds_out_mode.m"
    {
#line 129 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 129 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
#line 129 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 129 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 129 "hlds_out_mode.m"
    }
#line 394 "hlds_out_mode.m"
    {
#line 394 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
#line 394 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "hlds_out_mode.m"
    }
#line 393 "hlds_out_mode.m"
    {
#line 393 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModesTerm_15));
#line 393 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
#line 393 "hlds_out_mode.m"
    }
#line 393 "hlds_out_mode.m"
    {
#line 393 "hlds_out_mode.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[38], hlds__hlds_out__hlds_out_mode__V_34_34, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
    }
#line 375 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_10;
#line 375 "hlds_out_mode.m"
  }
#line 372 "hlds_out_mode.m"
}

#line 357 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 357 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 357 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 357 "hlds_out_mode.m"
{
#line 357 "hlds_out_mode.m"
  {
#line 357 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 357 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 357 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv2_Term_8;

#line 357 "hlds_out_mode.m"
    {
#line 357 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv2_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 357 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv2_Term_8));
#line 357 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 357 "hlds_out_mode.m"
  }
#line 357 "hlds_out_mode.m"
}

#line 363 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 363 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 363 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 363 "hlds_out_mode.m"
{
#line 363 "hlds_out_mode.m"
  {
#line 363 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 363 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 363 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 363 "hlds_out_mode.m"
    {
#line 363 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 363 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
#line 363 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 363 "hlds_out_mode.m"
  }
#line 363 "hlds_out_mode.m"
}

#line 348 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 348 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 348 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 348 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9)
#line 348 "hlds_out_mode.m"
{
#line 351 "hlds_out_mode.m"
  {
#line 351 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 351 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
#line 351 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 0)));
#line 351 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 1)));
#line 351 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 3)));
#line 351 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ModesTerm_15;
#line 351 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 351 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
#line 351 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;
#line 351 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_52_52;
#line 351 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;
#line 353 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 2)));

#line 359 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__PredOrFunc_11 == (MR_Integer) 1))
#line 360 "hlds_out_mode.m"
      {
#line 360 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 360 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48;
#line 360 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__ArgModes_16;
#line 360 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__RetMode_17;
#line 360 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__ArgModesTerm_18;
#line 360 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 360 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
#line 360 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 360 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;
#line 360 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 361 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__conv0_RetMode_17;

#line 361 "hlds_out_mode.m"
        {
#line 361 "hlds_out_mode.m"
          parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_mode__Modes_12, &hlds__hlds_out__hlds_out_mode__ArgModes_16, &hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
        }
#line 361 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__RetMode_17 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
#line 363 "hlds_out_mode.m"
        {
#line 363 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 363 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 363 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
#line 363 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 363 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 363 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 363 "hlds_out_mode.m"
        }
#line 362 "hlds_out_mode.m"
        {
#line 362 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_20_20 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_22_22, hlds__hlds_out__hlds_out_mode__ArgModes_16);
        }
#line 1841 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 362 "hlds_out_mode.m"
        {
#line 362 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[35], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ArgModesTerm_18);
        }
#line 366 "hlds_out_mode.m"
        {
#line 366 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_27_27 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__RetMode_17);
        }
#line 366 "hlds_out_mode.m"
        {
#line 366 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
#line 366 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "hlds_out_mode.m"
        }
#line 365 "hlds_out_mode.m"
        {
#line 365 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgModesTerm_18));
#line 365 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_26_26));
#line 365 "hlds_out_mode.m"
        }
#line 365 "hlds_out_mode.m"
        {
#line 365 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[36], hlds__hlds_out__hlds_out_mode__V_24_24, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
        }
#line 360 "hlds_out_mode.m"
      }
#line 359 "hlds_out_mode.m"
    else
#line 355 "hlds_out_mode.m"
      {
#line 355 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 355 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

#line 357 "hlds_out_mode.m"
        {
#line 357 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 357 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 357 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
#line 357 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 357 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 357 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 357 "hlds_out_mode.m"
        }
#line 356 "hlds_out_mode.m"
        {
#line 356 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_30_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_32_32, hlds__hlds_out__hlds_out_mode__Modes_12);
        }
#line 356 "hlds_out_mode.m"
        {
#line 356 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[37], hlds__hlds_out__hlds_out_mode__V_30_30, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
        }
#line 355 "hlds_out_mode.m"
      }
#line 627 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 4))
#line 631 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "cc_multi";
#line 627 "hlds_out_mode.m"
    else
#line 627 "hlds_out_mode.m"
      if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 5))
#line 632 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "cc_nondet";
#line 627 "hlds_out_mode.m"
      else
#line 627 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 0))
#line 629 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "det";
#line 627 "hlds_out_mode.m"
        else
#line 627 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 6))
#line 627 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "erroneous";
#line 627 "hlds_out_mode.m"
          else
#line 627 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 7))
#line 628 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "failure";
#line 627 "hlds_out_mode.m"
            else
#line 627 "hlds_out_mode.m"
              if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 2))
#line 633 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "multi";
#line 627 "hlds_out_mode.m"
              else
#line 627 "hlds_out_mode.m"
                if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 3))
#line 634 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "nondet";
#line 627 "hlds_out_mode.m"
                else
#line 630 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "semidet";
#line 130 "hlds_out_mode.m"
    {
#line 130 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 130 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_52_52));
#line 130 "hlds_out_mode.m"
    }
#line 129 "hlds_out_mode.m"
    {
#line 129 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 129 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
#line 129 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 129 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 129 "hlds_out_mode.m"
    }
#line 370 "hlds_out_mode.m"
    {
#line 370 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
#line 370 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "hlds_out_mode.m"
    }
#line 369 "hlds_out_mode.m"
    {
#line 369 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModesTerm_15));
#line 369 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
#line 369 "hlds_out_mode.m"
    }
#line 369 "hlds_out_mode.m"
    {
#line 369 "hlds_out_mode.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[38], hlds__hlds_out__hlds_out_mode__V_34_34, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
    }
#line 351 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_10;
#line 351 "hlds_out_mode.m"
  }
#line 348 "hlds_out_mode.m"
}

#line 588 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__588__1_2_p_0(
#line 588 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 588 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_57)
#line 588 "hlds_out_mode.m"
{
#line 588 "hlds_out_mode.m"
  {
#line 588 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 588 "hlds_out_mode.m"
    {
#line 588 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[5], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_57)));
    }
#line 588 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 588 "hlds_out_mode.m"
  }
#line 588 "hlds_out_mode.m"
}

#line 580 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__580__1_2_p_0(
#line 580 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 580 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_67)
#line 580 "hlds_out_mode.m"
{
#line 580 "hlds_out_mode.m"
  {
#line 580 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 580 "hlds_out_mode.m"
    {
#line 580 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[5], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_67)));
    }
#line 580 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 580 "hlds_out_mode.m"
  }
#line 580 "hlds_out_mode.m"
}

#line 596 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__596__1_2_p_0(
#line 596 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 596 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_45)
#line 596 "hlds_out_mode.m"
{
#line 596 "hlds_out_mode.m"
  {
#line 596 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 596 "hlds_out_mode.m"
    {
#line 596 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[5], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_45)));
    }
#line 596 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 596 "hlds_out_mode.m"
  }
#line 596 "hlds_out_mode.m"
}

#line 239 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__239__1_3_f_0(
#line 239 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 239 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_28,
#line 239 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_29)
#line 239 "hlds_out_mode.m"
{
#line 239 "hlds_out_mode.m"
  {
#line 239 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 239 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__4_30;
#line 239 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_33_33;
#line 239 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 239 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_35_35;
#line 239 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
#line 239 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;

#line 241 "hlds_out_mode.m"
    {
#line 241 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_36_36 = mercury__term__context_init_0_f_0();
    }
#line 241 "hlds_out_mode.m"
    {
#line 241 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_35_35, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_28));
#line 241 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_35_35, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
#line 241 "hlds_out_mode.m"
    }
#line 241 "hlds_out_mode.m"
    {
#line 241 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_34_34 = mercury__term__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__V_35_35);
    }
#line 241 "hlds_out_mode.m"
    {
#line 241 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__3_29));
#line 241 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "hlds_out_mode.m"
    }
#line 240 "hlds_out_mode.m"
    {
#line 240 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34));
#line 240 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
#line 240 "hlds_out_mode.m"
    }
#line 239 "hlds_out_mode.m"
    {
#line 239 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__4_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 239 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_30, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[34]));
#line 239 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_33_33));
#line 239 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_30, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 239 "hlds_out_mode.m"
    }
#line 239 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__4_30;
#line 239 "hlds_out_mode.m"
  }
#line 239 "hlds_out_mode.m"
}

#line 1071 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0(
#line 1071 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5,
#line 1071 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1071 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1071 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__HeadVar__3_3,
#line 1071 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__HeadVar__4_4)
#line 1071 "hlds_out_mode.m"
{
#line 1055 "hlds_out_mode.m"
  {
#line 1055 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1053 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1053 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1053 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));

#line 1053 "hlds_out_mode.m"
    {
#line 1053 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__1_1)), hlds__hlds_out__hlds_out_mode__V_15_15);
    }
#line 1055 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1054 "hlds_out_mode.m"
      {
#line 2213 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 2216 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 2218 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5), ((MR_Box) ((MR_String) "...")), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, hlds__hlds_out__hlds_out_mode__HeadVar__4_4);
#line 2220 "hlds.hlds_out.hlds_out_mode.c"
          return;
        }
#line 1054 "hlds_out_mode.m"
      }
#line 1055 "hlds_out_mode.m"
    else
#line 1060 "hlds_out_mode.m"
      {
#line 1055 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_11_11;
#line 1055 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_12_12;

#line 1055 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1055 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1055 "hlds_out_mode.m"
          {
#line 1055 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1055 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1059 "hlds_out_mode.m"
            {
#line 1059 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_inst_name_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__HeadVar__1_1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_2)), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, hlds__hlds_out__hlds_out_mode__HeadVar__4_4);
#line 1059 "hlds_out_mode.m"
              return;
            }
#line 1055 "hlds_out_mode.m"
          }
#line 1055 "hlds_out_mode.m"
        else
#line 1061 "hlds_out_mode.m"
          {
#line 1061 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_13;
#line 1061 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Expansions_14;
#line 1061 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1061 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 1061 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
#line 1061 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1061 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1062 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 1062 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
#line 1063 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_29_29;
#line 1063 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 1063 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_31_31;

#line 1061 "hlds_out_mode.m"
            {
#line 1061 "hlds_out_mode.m"
              check_hlds__mode_util__inst_lookup_3_p_0(hlds__hlds_out__hlds_out_mode__V_19_19, hlds__hlds_out__hlds_out_mode__HeadVar__1_1, &hlds__hlds_out__hlds_out_mode__Inst_13);
            }
#line 1062 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1062 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1062 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1062 "hlds_out_mode.m"
            {
#line 1062 "hlds_out_mode.m"
              mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__1_1)), hlds__hlds_out__hlds_out_mode__V_20_20, &hlds__hlds_out__hlds_out_mode__Expansions_14);
            }
#line 1063 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1063 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1063 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1063 "hlds_out_mode.m"
            {
#line 1063 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_29_29));
#line 1063 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_30_30));
#line 1063 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Expansions_14));
#line 1063 "hlds_out_mode.m"
            }
#line 1063 "hlds_out_mode.m"
            {
#line 1063 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_inst_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__Inst_13, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_21_21)), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, hlds__hlds_out__hlds_out_mode__HeadVar__4_4);
#line 1063 "hlds_out_mode.m"
              return;
            }
#line 1061 "hlds_out_mode.m"
          }
#line 1060 "hlds_out_mode.m"
      }
#line 1055 "hlds_out_mode.m"
  }
#line 1071 "hlds_out_mode.m"
}

#line 1070 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0(
#line 1070 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
#line 1070 "hlds_out_mode.m"
{
#line 1070 "hlds_out_mode.m"
  {
#line 1070 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1070 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1070 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1070 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 2)));

#line 1070 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 1070 "hlds_out_mode.m"
  }
#line 1070 "hlds_out_mode.m"
}

#line 48 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0(
#line 48 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 48 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 48 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3)
#line 48 "hlds_out_mode.m"
{
#line 48 "hlds_out_mode.m"
  {
#line 48 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 48 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 48 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__3_3;

#line 48 "hlds_out_mode.m"
    {
#line 48 "hlds_out_mode.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_mode__HeadVar__1_1, hlds__hlds_out__hlds_out_mode__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_mode__Cast_HeadVar2_5);
#line 48 "hlds_out_mode.m"
      return;
    }
#line 48 "hlds_out_mode.m"
  }
#line 48 "hlds_out_mode.m"
}

#line 48 "hlds_out_mode.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0(
#line 48 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_1,
#line 48 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2)
#line 48 "hlds_out_mode.m"
{
#line 2398 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 2400 "hlds.hlds_out.hlds_out_mode.c"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__HeadVar__2_1 == hlds__hlds_out__hlds_out_mode__HeadVar__2_2);

#line 2403 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 2405 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 48 "hlds_out_mode.m"
}

#line 1074 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0(
#line 1074 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1074 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1074 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3)
#line 1074 "hlds_out_mode.m"
{
#line 1074 "hlds_out_mode.m"
  {
#line 1074 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1074 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastX_12 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 1074 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastY_13 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__3_3;

#line 1074 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__CastX_12 == hlds__hlds_out__hlds_out_mode__CastY_13);
#line 1074 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 2434 "hlds.hlds_out.hlds_out_mode.c"
      *hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 1074 "hlds_out_mode.m"
    else
#line 1074 "hlds_out_mode.m"
      {
#line 1074 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1074 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1074 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1074 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 1074 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 1)));
#line 1074 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 2)));
#line 1074 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;

#line 1074 "hlds_out_mode.m"
        {
#line 1074 "hlds_out_mode.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[7], &hlds__hlds_out__hlds_out_mode__V_10_10, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_4_4)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_7_7)));
        }
#line 2460 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__V_10_10 == (MR_Integer) 0);
#line 1074 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = !(hlds__hlds_out__hlds_out_mode__succeeded);
#line 1074 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1074 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__V_10_10;
#line 1074 "hlds_out_mode.m"
        else
#line 1074 "hlds_out_mode.m"
          {
#line 1074 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_11_11;

#line 1074 "hlds_out_mode.m"
            {
#line 1074 "hlds_out_mode.m"
              hlds__hlds_module____Compare____module_info_0_0(&hlds__hlds_out__hlds_out_mode__V_11_11, hlds__hlds_out__hlds_out_mode__V_5_5, hlds__hlds_out__hlds_out_mode__V_8_8);
            }
#line 2480 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__V_11_11 == (MR_Integer) 0);
#line 1074 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__succeeded = !(hlds__hlds_out__hlds_out_mode__succeeded);
#line 1074 "hlds_out_mode.m"
            if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1074 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__V_11_11;
#line 1074 "hlds_out_mode.m"
            else
#line 1074 "hlds_out_mode.m"
              {
#line 1074 "hlds_out_mode.m"
                {
#line 1074 "hlds_out_mode.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[8], hlds__hlds_out__hlds_out_mode__HeadVar__1_1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_9_9)));
#line 1074 "hlds_out_mode.m"
                  return;
                }
#line 1074 "hlds_out_mode.m"
              }
#line 1074 "hlds_out_mode.m"
          }
#line 1074 "hlds_out_mode.m"
      }
#line 1074 "hlds_out_mode.m"
  }
#line 1074 "hlds_out_mode.m"
}

#line 1074 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0(
#line 1074 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1074 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2)
#line 1074 "hlds_out_mode.m"
{
#line 1074 "hlds_out_mode.m"
  {
#line 1074 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1074 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastX_9 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__1_1;
#line 1074 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastY_10 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

#line 1074 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__CastX_9 == hlds__hlds_out__hlds_out_mode__CastY_10);
#line 1074 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1074 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = MR_TRUE;
#line 1074 "hlds_out_mode.m"
    else
#line 1074 "hlds_out_mode.m"
      {
#line 1074 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeInfo_13_13;
#line 1074 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1074 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1074 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 2)));
#line 1074 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1074 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1074 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));

#line 2553 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 2555 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[7], ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_3_3)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_6_6)));
        }
#line 1074 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1074 "hlds_out_mode.m"
          {
#line 2562 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 2564 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__hlds_out__hlds_out_mode__V_4_4, hlds__hlds_out__hlds_out_mode__V_7_7);
            }
#line 1074 "hlds_out_mode.m"
            if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1074 "hlds_out_mode.m"
              {
#line 2571 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__TypeInfo_13_13 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[8];
#line 2573 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 2575 "hlds.hlds_out.hlds_out_mode.c"
                  return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_mode__TypeInfo_13_13, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_5_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_8_8)));
                }
#line 1074 "hlds_out_mode.m"
              }
#line 1074 "hlds_out_mode.m"
          }
#line 1074 "hlds_out_mode.m"
      }
#line 1074 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 1074 "hlds_out_mode.m"
  }
#line 1074 "hlds_out_mode.m"
}

#line 1007 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0(
#line 1007 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21,
#line 1007 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1007 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1007 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3,
#line 1007 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4)
#line 1007 "hlds_out_mode.m"
{
#line 1010 "hlds_out_mode.m"
  while (MR_TRUE)
#line 1010 "hlds_out_mode.m"
    {
#line 1010 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 1010 "hlds_out_mode.m"
      {
#line 1010 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1010 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3;
#line 1010 "hlds_out_mode.m"
        else
#line 1011 "hlds_out_mode.m"
          {
#line 1011 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_41;
#line 1011 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Mode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1011 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Modes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1011 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17;
#line 1011 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstA1_27;
#line 1011 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstB1_28;
#line 1011 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstA2_29;
#line 1011 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstB2_30;
#line 1011 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_9, (MR_Integer) 0)));
#line 1011 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_9, (MR_Integer) 1)));
#line 1011 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_33_33;
#line 1011 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 1011 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_35;
#line 1011 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_37;
#line 1011 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_38_38;
#line 2655 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1032 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstA1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_31_31, (MR_Integer) 0)));
#line 1032 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstB1_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_31_31, (MR_Integer) 1)));
#line 1032 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstA2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, (MR_Integer) 0)));
#line 1032 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstB2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, (MR_Integer) 1)));
#line 1033 "hlds_out_mode.m"
            {
#line 1033 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1033 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_33_33, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_27));
#line 1033 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_33_33, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_29));
#line 1033 "hlds_out_mode.m"
            }
#line 1033 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 2678 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_41 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6];
#line 1033 "hlds_out_mode.m"
            {
#line 1033 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_41, hlds__hlds_out__hlds_out_mode__V_33_33, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_35);
            }
#line 2685 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2687 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 2689 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) " = ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_35, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_37);
            }
#line 1035 "hlds_out_mode.m"
            {
#line 1035 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1035 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_38_38, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_28));
#line 1035 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_38_38, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_30));
#line 1035 "hlds_out_mode.m"
            }
#line 1035 "hlds_out_mode.m"
            {
#line 1035 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_41, hlds__hlds_out__hlds_out_mode__V_38_38, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17);
            }
#line 1016 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Modes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1014 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17;
#line 1016 "hlds_out_mode.m"
            else
#line 1017 "hlds_out_mode.m"
              {
#line 1017 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19;
#line 2717 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

#line 2720 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 2722 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) ", ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19);
                }
#line 1019 "hlds_out_mode.m"
                /* direct tailcall eliminated */
#line 1019 "hlds_out_mode.m"
                {
#line 1019 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Modes_10;
#line 1019 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0__tmp_copy_3 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19;

#line 1019 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0__tmp_copy_3;
#line 1019 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 1019 "hlds_out_mode.m"
                }
#line 1019 "hlds_out_mode.m"
                continue;
#line 1017 "hlds_out_mode.m"
              }
#line 1011 "hlds_out_mode.m"
          }
#line 1010 "hlds_out_mode.m"
      }
#line 1010 "hlds_out_mode.m"
      break;
#line 1010 "hlds_out_mode.m"
    }
#line 1007 "hlds_out_mode.m"
}

#line 897 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_7_p_0(
#line 897 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153,
#line 897 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_8,
#line 897 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 897 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 897 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 897 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 897 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_27,
#line 897 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28)
#line 897 "hlds_out_mode.m"
{
#line 904 "hlds_out_mode.m"
  {
#line 904 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 904 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_8)) == (MR_mktag((MR_Integer) 1))))
#line 920 "hlds_out_mode.m"
      {
#line 920 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstB_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 1)));
#line 920 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_116_116;
#line 920 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_118_118;
#line 920 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__V_120_120;
#line 920 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_121_121;
#line 920 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_125_125;
#line 920 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Inst_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 0)));
#line 920 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Insts_164;
#line 920 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_172;
#line 920 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Inst_181;
#line 747 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Insts_182;

#line 921 "hlds_out_mode.m"
        {
#line 921 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_116_116);
        }
#line 922 "hlds_out_mode.m"
        {
#line 922 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) "\044merge_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_116_116, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_118_118);
        }
#line 923 "hlds_out_mode.m"
        {
#line 923 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Insts_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 923 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_164, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_19));
#line 923 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 923 "hlds_out_mode.m"
        }
#line 923 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__V_120_120 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 748 "hlds_out_mode.m"
        {
#line 748 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Inst_163, hlds__hlds_out__hlds_out_mode__V_120_120, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_118_118, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_172);
        }
#line 747 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__Inst_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_164, (MR_Integer) 0)));
#line 747 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__Insts_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_164, (MR_Integer) 1)));
#line 748 "hlds_out_mode.m"
        {
#line 748 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Inst_181, hlds__hlds_out__hlds_out_mode__V_120_120, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_172, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_121_121);
        }
#line 925 "hlds_out_mode.m"
        {
#line 925 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_121_121, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_125_125);
        }
#line 926 "hlds_out_mode.m"
        {
#line 926 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_125_125, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28);
#line 926 "hlds_out_mode.m"
          return;
        }
#line 920 "hlds_out_mode.m"
      }
#line 904 "hlds_out_mode.m"
    else
#line 904 "hlds_out_mode.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_8)) == (MR_mktag((MR_Integer) 2))))
#line 943 "hlds_out_mode.m"
        {
#line 943 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__IsLive_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 0)));
#line 943 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Real_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 3)));
#line 943 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83;
#line 943 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85;
#line 943 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86;
#line 943 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87;
#line 943 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89;
#line 943 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_90_90;
#line 943 "hlds_out_mode.m"
          MR_Integer hlds__hlds_out__hlds_out_mode__V_91_91;
#line 943 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_92_92;
#line 943 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_93_93;
#line 943 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_96_96;
#line 943 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstA_141 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 1)));
#line 943 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstB_142 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 2)));

#line 944 "hlds_out_mode.m"
          {
#line 944 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83);
          }
#line 945 "hlds_out_mode.m"
          {
#line 945 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) "\044unify(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85);
          }
#line 946 "hlds_out_mode.m"
          {
#line 946 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__IsLive_21, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86);
          }
#line 947 "hlds_out_mode.m"
          {
#line 947 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Real_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87);
          }
#line 948 "hlds_out_mode.m"
          {
#line 948 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89);
          }
#line 949 "hlds_out_mode.m"
          {
#line 949 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_93_93, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_142));
#line 949 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 949 "hlds_out_mode.m"
          }
#line 949 "hlds_out_mode.m"
          {
#line 949 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_90_90, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA_141));
#line 949 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_90_90, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_93_93));
#line 949 "hlds_out_mode.m"
          }
#line 949 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_91_91 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 949 "hlds_out_mode.m"
          {
#line 949 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__V_90_90, hlds__hlds_out__hlds_out_mode__V_91_91, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_92_92);
          }
#line 951 "hlds_out_mode.m"
          {
#line 951 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_92_92, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_96_96);
          }
#line 952 "hlds_out_mode.m"
          {
#line 952 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_96_96, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28);
#line 952 "hlds_out_mode.m"
            return;
          }
#line 943 "hlds_out_mode.m"
        }
#line 904 "hlds_out_mode.m"
      else
#line 904 "hlds_out_mode.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_8)) == (MR_mktag((MR_Integer) 0))))
#line 904 "hlds_out_mode.m"
          {
#line 904 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 0)));
#line 904 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 1)));

#line 909 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 906 "hlds_out_mode.m"
              {
#line 906 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_138_138;

#line 907 "hlds_out_mode.m"
                {
#line 907 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_138_138);
                }
#line 908 "hlds_out_mode.m"
                {
#line 908 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Name_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_138_138, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28);
#line 908 "hlds_out_mode.m"
                  return;
                }
#line 906 "hlds_out_mode.m"
              }
#line 909 "hlds_out_mode.m"
            else
#line 910 "hlds_out_mode.m"
              {
#line 910 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_128_128;
#line 910 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129;
#line 910 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131;
#line 910 "hlds_out_mode.m"
                MR_Integer hlds__hlds_out__hlds_out_mode__V_132_132;
#line 910 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133;
#line 910 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_135_135;

#line 911 "hlds_out_mode.m"
                {
#line 911 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_128_128);
                }
#line 912 "hlds_out_mode.m"
                {
#line 912 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Name_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_128_128, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129);
                }
#line 913 "hlds_out_mode.m"
                {
#line 913 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) "(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131);
                }
#line 914 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_132_132 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 914 "hlds_out_mode.m"
                {
#line 914 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Args_15, hlds__hlds_out__hlds_out_mode__V_132_132, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133);
                }
#line 916 "hlds_out_mode.m"
                {
#line 916 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_135_135);
                }
#line 917 "hlds_out_mode.m"
                {
#line 917 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_135_135, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28);
#line 917 "hlds_out_mode.m"
                  return;
                }
#line 910 "hlds_out_mode.m"
              }
#line 904 "hlds_out_mode.m"
          }
#line 904 "hlds_out_mode.m"
        else
#line 904 "hlds_out_mode.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 966 "hlds_out_mode.m"
            {
#line 966 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_53_53;
#line 966 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_55_55;
#line 966 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56;
#line 966 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57;
#line 966 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59;
#line 966 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61;
#line 966 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_62_62;
#line 966 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63;
#line 966 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65;
#line 966 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 1)));
#line 966 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__IsLive_147 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 966 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Real_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 966 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);

#line 967 "hlds_out_mode.m"
              {
#line 967 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_53_53);
              }
#line 968 "hlds_out_mode.m"
              {
#line 968 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) "\044any(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_53_53, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_55_55);
              }
#line 969 "hlds_out_mode.m"
              {
#line 969 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__IsLive_147, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_55_55, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56);
              }
#line 970 "hlds_out_mode.m"
              {
#line 970 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Real_148, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57);
              }
#line 971 "hlds_out_mode.m"
              {
#line 971 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Uniq_149, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59);
              }
#line 972 "hlds_out_mode.m"
              {
#line 972 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61);
              }
#line 973 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_62_62 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 973 "hlds_out_mode.m"
              {
#line 973 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__SubInstName_146, hlds__hlds_out__hlds_out_mode__V_62_62, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63);
              }
#line 975 "hlds_out_mode.m"
              {
#line 975 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65);
              }
#line 976 "hlds_out_mode.m"
              {
#line 976 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28);
#line 976 "hlds_out_mode.m"
                return;
              }
#line 966 "hlds_out_mode.m"
            }
#line 904 "hlds_out_mode.m"
          else
#line 904 "hlds_out_mode.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 954 "hlds_out_mode.m"
              {
#line 954 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Uniq_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 954 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68;
#line 954 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70;
#line 954 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_71_71;
#line 954 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72;
#line 954 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74;
#line 954 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76;
#line 954 "hlds_out_mode.m"
                MR_Integer hlds__hlds_out__hlds_out_mode__V_77_77;
#line 954 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78;
#line 954 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80;
#line 954 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 1)));
#line 954 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__IsLive_144 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 954 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Real_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 955 "hlds_out_mode.m"
                {
#line 955 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68);
                }
#line 956 "hlds_out_mode.m"
                {
#line 956 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) "\044ground(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70);
                }
#line 957 "hlds_out_mode.m"
                {
#line 957 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__IsLive_144, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_71_71);
                }
#line 958 "hlds_out_mode.m"
                {
#line 958 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Real_145, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_71_71, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72);
                }
#line 959 "hlds_out_mode.m"
                {
#line 959 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Uniq_23, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74);
                }
#line 960 "hlds_out_mode.m"
                {
#line 960 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76);
                }
#line 961 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_77_77 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 961 "hlds_out_mode.m"
                {
#line 961 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__SubInstName_143, hlds__hlds_out__hlds_out_mode__V_77_77, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78);
                }
#line 963 "hlds_out_mode.m"
                {
#line 963 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80);
                }
#line 964 "hlds_out_mode.m"
                {
#line 964 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28);
#line 964 "hlds_out_mode.m"
                  return;
                }
#line 954 "hlds_out_mode.m"
              }
#line 904 "hlds_out_mode.m"
            else
#line 904 "hlds_out_mode.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 935 "hlds_out_mode.m"
                {
#line 935 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_99_99;
#line 935 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_101_101;
#line 935 "hlds_out_mode.m"
                  MR_Integer hlds__hlds_out__hlds_out_mode__V_102_102;
#line 935 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_103_103;
#line 935 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_105_105;
#line 935 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 1)));

#line 936 "hlds_out_mode.m"
                  {
#line 936 "hlds_out_mode.m"
                    parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_99_99);
                  }
#line 937 "hlds_out_mode.m"
                  {
#line 937 "hlds_out_mode.m"
                    parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) "\044mostly_uniq_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_99_99, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_101_101);
                  }
#line 938 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_102_102 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 938 "hlds_out_mode.m"
                  {
#line 938 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__SubInstName_140, hlds__hlds_out__hlds_out_mode__V_102_102, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_101_101, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_103_103);
                  }
#line 940 "hlds_out_mode.m"
                  {
#line 940 "hlds_out_mode.m"
                    parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_103_103, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_105_105);
                  }
#line 941 "hlds_out_mode.m"
                  {
#line 941 "hlds_out_mode.m"
                    parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_105_105, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28);
#line 941 "hlds_out_mode.m"
                    return;
                  }
#line 935 "hlds_out_mode.m"
                }
#line 904 "hlds_out_mode.m"
              else
#line 904 "hlds_out_mode.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 928 "hlds_out_mode.m"
                  {
#line 928 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 1)));
#line 928 "hlds_out_mode.m"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_109_109;
#line 928 "hlds_out_mode.m"
                    MR_Integer hlds__hlds_out__hlds_out_mode__V_110_110;
#line 928 "hlds_out_mode.m"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_111_111;
#line 928 "hlds_out_mode.m"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_113_113;

#line 929 "hlds_out_mode.m"
                    {
#line 929 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) "\044shared_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_109_109);
                    }
#line 930 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_110_110 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 930 "hlds_out_mode.m"
                    {
#line 930 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__SubInstName_20, hlds__hlds_out__hlds_out_mode__V_110_110, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_109_109, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_111_111);
                    }
#line 932 "hlds_out_mode.m"
                    {
#line 932 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_111_111, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_113_113);
                    }
#line 933 "hlds_out_mode.m"
                    {
#line 933 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_113_113, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28);
#line 933 "hlds_out_mode.m"
                      return;
                    }
#line 928 "hlds_out_mode.m"
                  }
#line 904 "hlds_out_mode.m"
                else
#line 904 "hlds_out_mode.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 978 "hlds_out_mode.m"
                    {
#line 978 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Uniqueness_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 1)));
#line 978 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 2)));
#line 978 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__TypeVarSet_26;
#line 978 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42;
#line 978 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44;
#line 978 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_46_46;
#line 978 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48;
#line 978 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;

#line 979 "hlds_out_mode.m"
                      {
#line 979 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42);
                      }
#line 980 "hlds_out_mode.m"
                      {
#line 980 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) "\044typed_ground(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44);
                      }
#line 981 "hlds_out_mode.m"
                      {
#line 981 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Uniqueness_24, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_46_46);
                      }
#line 982 "hlds_out_mode.m"
                      {
#line 982 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) ", ", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_46_46, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48);
                      }
#line 983 "hlds_out_mode.m"
                      {
#line 983 "hlds_out_mode.m"
                        mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_mode__TypeVarSet_26);
                      }
#line 984 "hlds_out_mode.m"
                      {
#line 984 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__TypeVarSet_26, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Type_25, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
                      }
#line 985 "hlds_out_mode.m"
                      {
#line 985 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28);
#line 985 "hlds_out_mode.m"
                        return;
                      }
#line 978 "hlds_out_mode.m"
                    }
#line 904 "hlds_out_mode.m"
                  else
#line 987 "hlds_out_mode.m"
                    {
#line 987 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29;
#line 987 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31;
#line 987 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;
#line 987 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35;
#line 987 "hlds_out_mode.m"
                      MR_Integer hlds__hlds_out__hlds_out_mode__V_36_36;
#line 987 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37;
#line 987 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;
#line 987 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 2)));
#line 987 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Type_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_8, (MR_Integer) 1)));
#line 987 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__TypeVarSet_152;

#line 988 "hlds_out_mode.m"
                      {
#line 988 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29);
                      }
#line 989 "hlds_out_mode.m"
                      {
#line 989 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) "\044typed_inst(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31);
                      }
#line 990 "hlds_out_mode.m"
                      {
#line 990 "hlds_out_mode.m"
                        mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_mode__TypeVarSet_152);
                      }
#line 991 "hlds_out_mode.m"
                      {
#line 991 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__TypeVarSet_152, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Type_151, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
                      }
#line 992 "hlds_out_mode.m"
                      {
#line 992 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35);
                      }
#line 993 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_36_36 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 993 "hlds_out_mode.m"
                      {
#line 993 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__SubInstName_150, hlds__hlds_out__hlds_out_mode__V_36_36, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37);
                      }
#line 995 "hlds_out_mode.m"
                      {
#line 995 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
                      }
#line 996 "hlds_out_mode.m"
                      {
#line 996 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_153, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28);
#line 996 "hlds_out_mode.m"
                        return;
                      }
#line 987 "hlds_out_mode.m"
                    }
#line 904 "hlds_out_mode.m"
  }
#line 897 "hlds_out_mode.m"
}

#line 884 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
#line 884 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_1,
#line 884 "hlds_out_mode.m"
  MR_Integer * hlds__hlds_out__hlds_out_mode__InstAddr_2)
#line 884 "hlds_out_mode.m"
{
#line 886 "hlds_out_mode.m"
  {
#line 886 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 889 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__Inst_1 ;
		{
#line 889 "hlds_out_mode.m"

    InstAddr = Inst;

#line 3472 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 *hlds__hlds_out__hlds_out_mode__InstAddr_2  = InstAddr;
#line 889 "hlds_out_mode.m"
}
#line 886 "hlds_out_mode.m"
  }
#line 884 "hlds_out_mode.m"
}

#line 849 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
#line 849 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 849 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 849 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent0_2,
#line 849 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 849 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 849 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 849 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 849 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7)
#line 849 "hlds_out_mode.m"
{
#line 853 "hlds_out_mode.m"
  while (MR_TRUE)
#line 853 "hlds_out_mode.m"
    {
#line 853 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 853 "hlds_out_mode.m"
      {
#line 853 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 853 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 853 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6;
#line 853 "hlds_out_mode.m"
        else
#line 855 "hlds_out_mode.m"
          {
#line 855 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 855 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 855 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_15, (MR_Integer) 0)));
#line 855 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_15, (MR_Integer) 1)));
#line 855 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__Indent1_24 = (hlds__hlds_out__hlds_out_mode__Indent0_2 + (MR_Integer) 1);
#line 855 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__Indent2_25 = (hlds__hlds_out__hlds_out_mode__Indent1_24 + (MR_Integer) 1);
#line 855 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;

#line 864 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Args_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 860 "hlds_out_mode.m"
              {
#line 860 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43;
#line 860 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45;
#line 3547 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 861 "hlds_out_mode.m"
                {
#line 861 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43);
                }
#line 862 "hlds_out_mode.m"
                {
#line 862 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__ConsId_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45);
                }
#line 3560 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3562 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3564 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
                }
#line 860 "hlds_out_mode.m"
              }
#line 864 "hlds_out_mode.m"
            else
#line 865 "hlds_out_mode.m"
              {
#line 865 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
#line 865 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36;
#line 865 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38;
#line 865 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;
#line 865 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40;
#line 865 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Inst_60;
#line 865 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Insts_61;
#line 865 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_69;
#line 3589 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3591 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 866 "hlds_out_mode.m"
                {
#line 866 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34);
                }
#line 867 "hlds_out_mode.m"
                {
#line 867 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__ConsId_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36);
                }
#line 3604 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3606 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3608 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "(\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
                }
#line 747 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Inst_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Args_23, (MR_Integer) 0)));
#line 747 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Insts_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Args_23, (MR_Integer) 1)));
#line 748 "hlds_out_mode.m"
                {
#line 748 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Inst_60, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_69);
                }
#line 750 "hlds_out_mode.m"
                {
#line 750 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Insts_61, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_69, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
                }
#line 871 "hlds_out_mode.m"
                {
#line 871 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
                }
#line 3630 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3632 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3634 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) ")\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
                }
#line 865 "hlds_out_mode.m"
              }
#line 876 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__BoundInsts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 875 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;
#line 876 "hlds_out_mode.m"
            else
#line 877 "hlds_out_mode.m"
              {
#line 877 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48;
#line 877 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
#line 3651 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 878 "hlds_out_mode.m"
                {
#line 878 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent0_2, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48);
                }
#line 3659 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3661 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3663 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_3(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) ";\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
                }
#line 880 "hlds_out_mode.m"
                /* direct tailcall eliminated */
#line 880 "hlds_out_mode.m"
                {
#line 880 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__BoundInsts_16;
#line 880 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;

#line 880 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6;
#line 880 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 880 "hlds_out_mode.m"
                }
#line 880 "hlds_out_mode.m"
                continue;
#line 877 "hlds_out_mode.m"
              }
#line 855 "hlds_out_mode.m"
          }
#line 853 "hlds_out_mode.m"
      }
#line 853 "hlds_out_mode.m"
      break;
#line 853 "hlds_out_mode.m"
    }
#line 849 "hlds_out_mode.m"
}

#line 764 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(
#line 764 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89,
#line 764 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
#line 764 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 764 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 764 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 764 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 764 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_30,
#line 764 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31)
#line 764 "hlds_out_mode.m"
{
#line 768 "hlds_out_mode.m"
  {
#line 768 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 768 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 768 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;

#line 769 "hlds_out_mode.m"
    {
#line 769 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
    }
#line 772 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__InclAddr_11 == (MR_Integer) 1))
#line 773 "hlds_out_mode.m"
      {
#line 773 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__InstAddr_14;
#line 773 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__InstAddrStr_15;
#line 773 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 773 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_35_35;
#line 773 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37;
#line 3745 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3747 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 889 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__Inst_8 ;
		{
#line 889 "hlds_out_mode.m"

    InstAddr = Inst;

#line 3763 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstAddr_14  = InstAddr;
#line 889 "hlds_out_mode.m"
}
#line 775 "hlds_out_mode.m"
        {
#line 775 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 775 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_35_35, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstAddr_14));
#line 775 "hlds_out_mode.m"
        }
#line 775 "hlds_out_mode.m"
        {
#line 775 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_35_35));
#line 775 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "hlds_out_mode.m"
        }
#line 775 "hlds_out_mode.m"
        {
#line 775 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__InstAddrStr_15 = mercury__string__format_2_f_0((MR_String) "%x", hlds__hlds_out__hlds_out_mode__V_34_34);
        }
#line 3793 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3795 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 3797 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89), ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstAddrStr_15)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37);
        }
#line 3800 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3802 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 3804 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89), ((MR_Box) ((MR_String) ": ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
        }
#line 773 "hlds_out_mode.m"
      }
#line 772 "hlds_out_mode.m"
    else
#line 771 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 790 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Inst_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 791 "hlds_out_mode.m"
      {
#line 3817 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, (MR_Integer) 0)), (MR_Integer) 5)));

#line 3820 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 3822 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89), ((MR_Box) ((MR_String) "free\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 3824 "hlds.hlds_out.hlds_out_mode.c"
          return;
        }
#line 791 "hlds_out_mode.m"
      }
#line 790 "hlds_out_mode.m"
    else
#line 790 "hlds_out_mode.m"
      if ((hlds__hlds_out__hlds_out_mode__Inst_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 845 "hlds_out_mode.m"
        {
#line 3835 "hlds.hlds_out.hlds_out_mode.c"
          void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, (MR_Integer) 0)), (MR_Integer) 5)));

#line 3838 "hlds.hlds_out.hlds_out_mode.c"
          {
#line 3840 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_3(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89), ((MR_Box) ((MR_String) "not_reached\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 3842 "hlds.hlds_out.hlds_out_mode.c"
            return;
          }
#line 845 "hlds_out_mode.m"
        }
#line 790 "hlds_out_mode.m"
      else
#line 790 "hlds_out_mode.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 2))))
#line 780 "hlds_out_mode.m"
          {
#line 780 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Uniq_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)));
#line 780 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 780 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80;
#line 3859 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 785 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "hlds_out_mode.m"
              {
#line 787 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_any_uniqueness_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, hlds__hlds_out__hlds_out_mode__Uniq_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80);
              }
#line 785 "hlds_out_mode.m"
            else
#line 782 "hlds_out_mode.m"
              {
#line 782 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_18 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_17), (MR_Integer) 1);

#line 783 "hlds_out_mode.m"
                {
#line 783 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_any_pred_inst_info_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, hlds__hlds_out__hlds_out_mode__Uniq_16, hlds__hlds_out__hlds_out_mode__PredInstInfo_18, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80);
                }
#line 782 "hlds_out_mode.m"
              }
#line 3883 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3885 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 3887 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_4(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89), ((MR_Box) ((MR_String) "\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 3889 "hlds.hlds_out.hlds_out_mode.c"
              return;
            }
#line 780 "hlds_out_mode.m"
          }
#line 790 "hlds_out_mode.m"
        else
#line 790 "hlds_out_mode.m"
          if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 1))))
#line 794 "hlds_out_mode.m"
            {
#line 3900 "hlds.hlds_out.hlds_out_mode.c"
              void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, (MR_Integer) 0)), (MR_Integer) 5)));

#line 3903 "hlds.hlds_out.hlds_out_mode.c"
              {
#line 3905 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_5(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89), ((MR_Box) ((MR_String) "free(with some type)\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 3907 "hlds.hlds_out.hlds_out_mode.c"
                return;
              }
#line 794 "hlds_out_mode.m"
            }
#line 790 "hlds_out_mode.m"
          else
#line 790 "hlds_out_mode.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 837 "hlds_out_mode.m"
              {
#line 837 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Name_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 837 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));
#line 837 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_44_44;

#line 838 "hlds_out_mode.m"
                {
#line 838 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 838 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_44_44, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_27));
#line 838 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_44_44, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Args_28));
#line 838 "hlds_out_mode.m"
                }
#line 838 "hlds_out_mode.m"
                {
#line 838 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, hlds__hlds_out__hlds_out_mode__V_44_44, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 838 "hlds_out_mode.m"
                  return;
                }
#line 837 "hlds_out_mode.m"
              }
#line 790 "hlds_out_mode.m"
            else
#line 790 "hlds_out_mode.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 797 "hlds_out_mode.m"
                {
#line 797 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__InstResults_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));
#line 797 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 3)));
#line 797 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61;
#line 797 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63;
#line 797 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70;
#line 797 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_71_71;
#line 797 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72;
#line 797 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Uniq_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 3966 "hlds.hlds_out.hlds_out_mode.c"
                  void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3968 "hlds.hlds_out.hlds_out_mode.c"
                  void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 798 "hlds_out_mode.m"
                  {
#line 798 "hlds_out_mode.m"
                    parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, hlds__hlds_out__hlds_out_mode__Uniq_83, (MR_String) "bound", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61);
                  }
#line 3976 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3978 "hlds.hlds_out.hlds_out_mode.c"
                  {
#line 3980 "hlds.hlds_out.hlds_out_mode.c"
                    hlds__hlds_out__hlds_out_mode__func_6(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89), ((MR_Box) ((MR_String) "(\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63);
                  }
#line 802 "hlds_out_mode.m"
                  if ((hlds__hlds_out__hlds_out_mode__Lang_10 == (MR_Integer) 1))
#line 803 "hlds_out_mode.m"
                    {
#line 803 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_90_90;
#line 803 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__InstResultsTerm_22;
#line 803 "hlds_out_mode.m"
                      MR_String hlds__hlds_out__hlds_out_mode__InstResultsStr_23;
#line 803 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_64_64;
#line 803 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_65_65;
#line 803 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_67_67;
#line 803 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68;
#line 4001 "hlds.hlds_out.hlds_out_mode.c"
                      void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 4003 "hlds.hlds_out.hlds_out_mode.c"
                      void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 805 "hlds_out_mode.m"
                      {
#line 805 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_64_64 = mercury__term__context_init_0_f_0();
                      }
#line 804 "hlds_out_mode.m"
                      {
#line 804 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__InstResultsTerm_22 = hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__V_64_64, hlds__hlds_out__hlds_out_mode__InstResults_20);
                      }
#line 4016 "hlds.hlds_out.hlds_out_mode.c"
                      hlds__hlds_out__hlds_out_mode__TypeCtorInfo_90_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 807 "hlds_out_mode.m"
                      {
#line 807 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_65_65 = mercury__varset__init_0_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_90_90);
                      }
#line 806 "hlds_out_mode.m"
                      {
#line 806 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__InstResultsStr_23 = parse_tree__mercury_to_mercury__mercury_term_to_string_3_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_90_90, hlds__hlds_out__hlds_out_mode__V_65_65, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__InstResultsTerm_22);
                      }
#line 808 "hlds_out_mode.m"
                      {
#line 808 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_67_67);
                      }
#line 4033 "hlds.hlds_out.hlds_out_mode.c"
                      hlds__hlds_out__hlds_out_mode__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4035 "hlds.hlds_out.hlds_out_mode.c"
                      {
#line 4037 "hlds.hlds_out.hlds_out_mode.c"
                        hlds__hlds_out__hlds_out_mode__func_7(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89), ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstResultsStr_23)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_67_67, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68);
                      }
#line 4040 "hlds.hlds_out.hlds_out_mode.c"
                      hlds__hlds_out__hlds_out_mode__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4042 "hlds.hlds_out.hlds_out_mode.c"
                      {
#line 4044 "hlds.hlds_out.hlds_out_mode.c"
                        hlds__hlds_out__hlds_out_mode__func_8(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89), ((MR_Box) ((MR_String) ",\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70);
                      }
#line 803 "hlds_out_mode.m"
                    }
#line 802 "hlds_out_mode.m"
                  else
#line 801 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63;
#line 812 "hlds_out_mode.m"
                  {
#line 812 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, hlds__hlds_out__hlds_out_mode__BoundInsts_21, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_71_71);
                  }
#line 814 "hlds_out_mode.m"
                  {
#line 814 "hlds_out_mode.m"
                    parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_71_71, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72);
                  }
#line 4063 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4065 "hlds.hlds_out.hlds_out_mode.c"
                  {
#line 4067 "hlds.hlds_out.hlds_out_mode.c"
                    hlds__hlds_out__hlds_out_mode__func_9(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89), ((MR_Box) ((MR_String) ")\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 4069 "hlds.hlds_out.hlds_out_mode.c"
                    return;
                  }
#line 797 "hlds_out_mode.m"
                }
#line 790 "hlds_out_mode.m"
              else
#line 790 "hlds_out_mode.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 832 "hlds_out_mode.m"
                  {
#line 832 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 832 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__ConstrainedInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));
#line 832 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_47_47 = (MR_Word) hlds__hlds_out__hlds_out_mode__InstVarSet_12;
#line 832 "hlds_out_mode.m"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48;
#line 4088 "hlds.hlds_out.hlds_out_mode.c"
                    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 833 "hlds_out_mode.m"
                    {
#line 833 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__mercury_format_constrained_inst_vars_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6], hlds__hlds_out__hlds_out_mode__Vars_25, hlds__hlds_out__hlds_out_mode__ConstrainedInst_26, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_47_47)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48);
                    }
#line 4096 "hlds.hlds_out.hlds_out_mode.c"
                    hlds__hlds_out__hlds_out_mode__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4098 "hlds.hlds_out.hlds_out_mode.c"
                    {
#line 4100 "hlds.hlds_out.hlds_out_mode.c"
                      hlds__hlds_out__hlds_out_mode__func_10(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89), ((MR_Box) ((MR_String) "\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 4102 "hlds.hlds_out.hlds_out_mode.c"
                      return;
                    }
#line 832 "hlds_out_mode.m"
                  }
#line 790 "hlds_out_mode.m"
                else
#line 790 "hlds_out_mode.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 841 "hlds_out_mode.m"
                    {
#line 841 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__InstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));

#line 842 "hlds_out_mode.m"
                      {
#line 842 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, hlds__hlds_out__hlds_out_mode__InstName_29, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 842 "hlds_out_mode.m"
                        return;
                      }
#line 841 "hlds_out_mode.m"
                    }
#line 790 "hlds_out_mode.m"
                  else
#line 790 "hlds_out_mode.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 817 "hlds_out_mode.m"
                      {
#line 817 "hlds_out_mode.m"
                        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57;
#line 817 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__Uniq_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 817 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));
#line 4137 "hlds.hlds_out.hlds_out_mode.c"
                        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 822 "hlds_out_mode.m"
                        if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 823 "hlds_out_mode.m"
                          {
#line 824 "hlds_out_mode.m"
                            {
#line 824 "hlds_out_mode.m"
                              parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, hlds__hlds_out__hlds_out_mode__Uniq_86, (MR_String) "ground", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57);
                            }
#line 823 "hlds_out_mode.m"
                          }
#line 822 "hlds_out_mode.m"
                        else
#line 819 "hlds_out_mode.m"
                          {
#line 819 "hlds_out_mode.m"
                            MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_84 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_87), (MR_Integer) 1);

#line 820 "hlds_out_mode.m"
                            {
#line 820 "hlds_out_mode.m"
                              parse_tree__mercury_to_mercury__mercury_format_ground_pred_inst_info_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, hlds__hlds_out__hlds_out_mode__Uniq_86, hlds__hlds_out__hlds_out_mode__PredInstInfo_84, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57);
                            }
#line 819 "hlds_out_mode.m"
                          }
#line 4165 "hlds.hlds_out.hlds_out_mode.c"
                        hlds__hlds_out__hlds_out_mode__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4167 "hlds.hlds_out.hlds_out_mode.c"
                        {
#line 4169 "hlds.hlds_out.hlds_out_mode.c"
                          hlds__hlds_out__hlds_out_mode__func_11(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89), ((MR_Box) ((MR_String) "\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 4171 "hlds.hlds_out.hlds_out_mode.c"
                          return;
                        }
#line 817 "hlds_out_mode.m"
                      }
#line 790 "hlds_out_mode.m"
                    else
#line 828 "hlds_out_mode.m"
                      {
#line 828 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 828 "hlds_out_mode.m"
                        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52;
#line 4184 "hlds.hlds_out.hlds_out_mode.c"
                        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 829 "hlds_out_mode.m"
                        {
#line 829 "hlds_out_mode.m"
                          parse_tree__mercury_to_mercury__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, hlds__hlds_out__hlds_out_mode__InstVarSet_12, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Var_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52);
                        }
#line 4192 "hlds.hlds_out.hlds_out_mode.c"
                        hlds__hlds_out__hlds_out_mode__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4194 "hlds.hlds_out.hlds_out_mode.c"
                        {
#line 4196 "hlds.hlds_out.hlds_out_mode.c"
                          hlds__hlds_out__hlds_out_mode__func_12(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_89), ((MR_Box) ((MR_String) "\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 4198 "hlds.hlds_out.hlds_out_mode.c"
                          return;
                        }
#line 828 "hlds_out_mode.m"
                      }
#line 768 "hlds_out_mode.m"
  }
#line 764 "hlds_out_mode.m"
}

#line 741 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
#line 741 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_26,
#line 741 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 741 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_2,
#line 741 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 741 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 741 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 741 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 741 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7)
#line 741 "hlds_out_mode.m"
{
#line 745 "hlds_out_mode.m"
  while (MR_TRUE)
#line 745 "hlds_out_mode.m"
    {
#line 745 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 745 "hlds_out_mode.m"
      {
#line 745 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 745 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 745 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6;
#line 745 "hlds_out_mode.m"
        else
#line 747 "hlds_out_mode.m"
          {
#line 747 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 747 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Insts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 747 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_24;

#line 748 "hlds_out_mode.m"
            {
#line 748 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_26, hlds__hlds_out__hlds_out_mode__Inst_15, hlds__hlds_out__hlds_out_mode__Indent_2, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_24);
            }
#line 750 "hlds_out_mode.m"
            /* direct tailcall eliminated */
#line 750 "hlds_out_mode.m"
            {
#line 750 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Insts_16;
#line 750 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_24;

#line 750 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6;
#line 750 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 750 "hlds_out_mode.m"
            }
#line 750 "hlds_out_mode.m"
            continue;
#line 747 "hlds_out_mode.m"
          }
#line 745 "hlds_out_mode.m"
      }
#line 745 "hlds_out_mode.m"
      break;
#line 745 "hlds_out_mode.m"
    }
#line 741 "hlds_out_mode.m"
}

#line 676 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(
#line 676 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 676 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_8,
#line 676 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 676 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 676 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 676 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 676 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22,
#line 676 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23)
#line 676 "hlds_out_mode.m"
{
#line 681 "hlds_out_mode.m"
  {
#line 681 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 681 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_14;
#line 681 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_15;
#line 681 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_16;
#line 681 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_17;
#line 681 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstA1Addr_18;
#line 681 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstA2Addr_19;
#line 681 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstB1Addr_20;
#line 681 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstB2Addr_21;
#line 681 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_8, (MR_Integer) 0)));
#line 681 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_8, (MR_Integer) 1)));
#line 681 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26;
#line 681 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28;
#line 681 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29;
#line 681 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30;
#line 681 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 681 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36;
#line 681 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38;
#line 681 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44;
#line 4349 "hlds.hlds_out.hlds_out_mode.c"
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 682 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, (MR_Integer) 0)));
#line 682 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, (MR_Integer) 1)));
#line 682 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 0)));
#line 682 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 1)));
#line 889 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstA1_14 ;
		{
#line 889 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4373 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstA1Addr_18  = InstAddr;
#line 889 "hlds_out_mode.m"
}
#line 889 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstA2_16 ;
		{
#line 889 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4393 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstA2Addr_19  = InstAddr;
#line 889 "hlds_out_mode.m"
}
#line 889 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstB1_15 ;
		{
#line 889 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4413 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstB1Addr_20  = InstAddr;
#line 889 "hlds_out_mode.m"
}
#line 889 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstB2_17 ;
		{
#line 889 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4433 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstB2Addr_21  = InstAddr;
#line 889 "hlds_out_mode.m"
}
#line 688 "hlds_out_mode.m"
    {
#line 688 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26);
    }
#line 4445 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4447 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 4449 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "old lhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28);
    }
#line 690 "hlds_out_mode.m"
    {
#line 690 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstA1_14, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29);
    }
#line 693 "hlds_out_mode.m"
    {
#line 693 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30);
    }
#line 694 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB1Addr_20 == hlds__hlds_out__hlds_out_mode__InstA1Addr_18);
#line 697 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 696 "hlds_out_mode.m"
      {
#line 4468 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4471 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4473 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "old rhs inst: same as old lhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
        }
#line 696 "hlds_out_mode.m"
      }
#line 697 "hlds_out_mode.m"
    else
#line 698 "hlds_out_mode.m"
      {
#line 698 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
#line 4484 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4487 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4489 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "old rhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34);
        }
#line 699 "hlds_out_mode.m"
        {
#line 699 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstB1_15, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
        }
#line 698 "hlds_out_mode.m"
      }
#line 703 "hlds_out_mode.m"
    {
#line 703 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36);
    }
#line 704 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstA2Addr_19 == hlds__hlds_out__hlds_out_mode__InstA1Addr_18);
#line 707 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 706 "hlds_out_mode.m"
      {
#line 4510 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4513 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4515 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_3(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new lhs inst: unchanged\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
        }
#line 706 "hlds_out_mode.m"
      }
#line 707 "hlds_out_mode.m"
    else
#line 710 "hlds_out_mode.m"
      {
#line 707 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstA2Addr_19 == hlds__hlds_out__hlds_out_mode__InstB1Addr_20);
#line 710 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 709 "hlds_out_mode.m"
          {
#line 4530 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4533 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4535 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_4(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new lhs inst: changed to old rhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
            }
#line 709 "hlds_out_mode.m"
          }
#line 710 "hlds_out_mode.m"
        else
#line 711 "hlds_out_mode.m"
          {
#line 711 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42;
#line 4546 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4549 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4551 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_5(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new lhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42);
            }
#line 712 "hlds_out_mode.m"
            {
#line 712 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstA2_16, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
            }
#line 711 "hlds_out_mode.m"
          }
#line 710 "hlds_out_mode.m"
      }
#line 716 "hlds_out_mode.m"
    {
#line 716 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44);
    }
#line 717 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB2Addr_21 == hlds__hlds_out__hlds_out_mode__InstB1Addr_20);
#line 720 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 719 "hlds_out_mode.m"
      {
#line 4574 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4577 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4579 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_6(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new rhs inst: unchanged\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
#line 4581 "hlds.hlds_out.hlds_out_mode.c"
          return;
        }
#line 719 "hlds_out_mode.m"
      }
#line 720 "hlds_out_mode.m"
    else
#line 723 "hlds_out_mode.m"
      {
#line 720 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB2Addr_21 == hlds__hlds_out__hlds_out_mode__InstA2Addr_19);
#line 723 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 722 "hlds_out_mode.m"
          {
#line 4596 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4599 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4601 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_7(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new rhs inst: changed to new lhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
#line 4603 "hlds.hlds_out.hlds_out_mode.c"
              return;
            }
#line 722 "hlds_out_mode.m"
          }
#line 723 "hlds_out_mode.m"
        else
#line 724 "hlds_out_mode.m"
          {
#line 724 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
#line 4614 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4617 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4619 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_8(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new rhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
            }
#line 725 "hlds_out_mode.m"
            {
#line 725 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstB2_17, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
#line 725 "hlds_out_mode.m"
              return;
            }
#line 724 "hlds_out_mode.m"
          }
#line 723 "hlds_out_mode.m"
      }
#line 681 "hlds_out_mode.m"
  }
#line 676 "hlds_out_mode.m"
}

#line 648 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0(
#line 648 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37,
#line 648 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 648 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum_2,
#line 648 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
#line 648 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 648 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_5,
#line 648 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6,
#line 648 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7,
#line 648 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8)
#line 648 "hlds_out_mode.m"
{
#line 652 "hlds_out_mode.m"
  while (MR_TRUE)
#line 652 "hlds_out_mode.m"
    {
#line 652 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 652 "hlds_out_mode.m"
      {
#line 652 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 652 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 652 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7;
#line 652 "hlds_out_mode.m"
        else
#line 654 "hlds_out_mode.m"
          {
#line 654 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__UniMode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 654 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__UniModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 654 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27;
#line 654 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29;
#line 654 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30;
#line 654 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 654 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;
#line 654 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__V_34_34;
#line 4696 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 4698 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 4700 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 655 "hlds_out_mode.m"
            {
#line 655 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, hlds__hlds_out__hlds_out_mode__Indent_3, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27);
            }
#line 4708 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4710 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4712 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) ((MR_String) "argument ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29);
            }
#line 4715 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 8)));
#line 4717 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4719 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgNum_2)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30);
            }
#line 4722 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4724 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4726 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) ((MR_String) ":\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
            }
#line 659 "hlds_out_mode.m"
            {
#line 659 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, hlds__hlds_out__hlds_out_mode__UniMode_17, hlds__hlds_out__hlds_out_mode__Indent_3, hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__InclAddr_5, hlds__hlds_out__hlds_out_mode__InstVarSet_6, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
            }
#line 661 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_34_34 = (hlds__hlds_out__hlds_out_mode__ArgNum_2 + (MR_Integer) 1);
#line 661 "hlds_out_mode.m"
            /* direct tailcall eliminated */
#line 661 "hlds_out_mode.m"
            {
#line 661 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__UniModes_18;
#line 661 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum__tmp_copy_2 = hlds__hlds_out__hlds_out_mode__V_34_34;
#line 661 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;

#line 661 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_7;
#line 661 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__ArgNum_2 = hlds__hlds_out__hlds_out_mode__ArgNum__tmp_copy_2;
#line 661 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 661 "hlds_out_mode.m"
            }
#line 661 "hlds_out_mode.m"
            continue;
#line 654 "hlds_out_mode.m"
          }
#line 652 "hlds_out_mode.m"
      }
#line 652 "hlds_out_mode.m"
      break;
#line 652 "hlds_out_mode.m"
    }
#line 648 "hlds_out_mode.m"
}

#line 588 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3(
#line 588 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
#line 588 "hlds_out_mode.m"
{
#line 588 "hlds_out_mode.m"
  {
#line 588 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 588 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

#line 588 "hlds_out_mode.m"
    {
#line 588 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__588__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
#line 588 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 588 "hlds_out_mode.m"
  }
#line 588 "hlds_out_mode.m"
}

#line 580 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2(
#line 580 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
#line 580 "hlds_out_mode.m"
{
#line 580 "hlds_out_mode.m"
  {
#line 580 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 580 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

#line 580 "hlds_out_mode.m"
    {
#line 580 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__580__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
#line 580 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 580 "hlds_out_mode.m"
  }
#line 580 "hlds_out_mode.m"
}

#line 596 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1(
#line 596 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
#line 596 "hlds_out_mode.m"
{
#line 596 "hlds_out_mode.m"
  {
#line 596 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 596 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

#line 596 "hlds_out_mode.m"
    {
#line 596 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__596__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
#line 596 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 596 "hlds_out_mode.m"
  }
#line 596 "hlds_out_mode.m"
}

#line 517 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(
#line 517 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ConsId_4,
#line 517 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 517 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__Term_6)
#line 517 "hlds_out_mode.m"
{
#line 522 "hlds_out_mode.m"
  {
#line 522 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 522 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__ConsId_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "hlds_out_mode.m"
      {
#line 574 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_129;

#line 575 "hlds_out_mode.m"
        {
#line 575 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_129);
        }
#line 577 "hlds_out_mode.m"
        {
#line 577 "hlds_out_mode.m"
          MR_Word base;
#line 577 "hlds_out_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 577 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 577 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[24])));
#line 577 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 577 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_129));
#line 577 "hlds_out_mode.m"
        }
#line 574 "hlds_out_mode.m"
      }
#line 522 "hlds_out_mode.m"
    else
#line 522 "hlds_out_mode.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 2))))
#line 605 "hlds_out_mode.m"
        {
#line 605 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Context_139;

#line 606 "hlds_out_mode.m"
          {
#line 606 "hlds_out_mode.m"
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_139);
          }
#line 608 "hlds_out_mode.m"
          {
#line 608 "hlds_out_mode.m"
            MR_Word base;
#line 608 "hlds_out_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 608 "hlds_out_mode.m"
            *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 608 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[25])));
#line 608 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 608 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_139));
#line 608 "hlds_out_mode.m"
          }
#line 605 "hlds_out_mode.m"
        }
#line 522 "hlds_out_mode.m"
      else
#line 522 "hlds_out_mode.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 1))))
#line 567 "hlds_out_mode.m"
          {
#line 567 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_25 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4), (MR_Integer) 1);
#line 567 "hlds_out_mode.m"
            MR_String hlds__hlds_out__hlds_out_mode__V_78_78;
#line 567 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_82_82;
#line 567 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Context_125;
#line 567 "hlds_out_mode.m"
            MR_String hlds__hlds_out__hlds_out_mode__FunctorName_126;
#line 567 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorName_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_25, (MR_Integer) 0)));
#line 567 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__Arity_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_25, (MR_Integer) 1)));
#line 567 "hlds_out_mode.m"
            MR_String hlds__hlds_out__hlds_out_mode__V_159_159;
#line 567 "hlds_out_mode.m"
            MR_String hlds__hlds_out__hlds_out_mode__V_161_161;
#line 567 "hlds_out_mode.m"
            MR_String hlds__hlds_out__hlds_out_mode__V_162_162;

#line 569 "hlds_out_mode.m"
            {
#line 569 "hlds_out_mode.m"
              mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_125);
            }
#line 571 "hlds_out_mode.m"
            {
#line 571 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_78_78 = mdbcomp__prim_data__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorName_127);
            }
#line 4961 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4963 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__V_159_159 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__Arity_128);
            }
#line 4966 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4968 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__V_161_161 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_159_159);
            }
#line 4971 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4973 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__V_162_162 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_78_78, hlds__hlds_out__hlds_out_mode__V_161_161);
            }
#line 4976 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4978 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__FunctorName_126 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_cell_constructor for ", hlds__hlds_out__hlds_out_mode__V_162_162);
            }
#line 572 "hlds_out_mode.m"
            {
#line 572 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_82_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 572 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__V_82_82, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_126));
#line 572 "hlds_out_mode.m"
            }
#line 572 "hlds_out_mode.m"
            {
#line 572 "hlds_out_mode.m"
              MR_Word base;
#line 572 "hlds_out_mode.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 572 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 572 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_82_82));
#line 572 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 572 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_125));
#line 572 "hlds_out_mode.m"
            }
#line 567 "hlds_out_mode.m"
          }
#line 522 "hlds_out_mode.m"
        else
#line 522 "hlds_out_mode.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 562 "hlds_out_mode.m"
            {
#line 562 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_123;

#line 563 "hlds_out_mode.m"
              {
#line 563 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_123);
              }
#line 565 "hlds_out_mode.m"
              {
#line 565 "hlds_out_mode.m"
                MR_Word base;
#line 565 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 565 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 565 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[26])));
#line 565 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 565 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_123));
#line 565 "hlds_out_mode.m"
              }
#line 562 "hlds_out_mode.m"
            }
#line 522 "hlds_out_mode.m"
          else
#line 522 "hlds_out_mode.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 546 "hlds_out_mode.m"
              {
#line 546 "hlds_out_mode.m"
                MR_Char hlds__hlds_out__hlds_out_mode__Char_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 546 "hlds_out_mode.m"
                MR_String hlds__hlds_out__hlds_out_mode__V_100_100;
#line 546 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__SymName_117;

#line 547 "hlds_out_mode.m"
                {
#line 547 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_100_100 = mercury__term_io__escaped_char_1_f_0(hlds__hlds_out__hlds_out_mode__Char_17);
                }
#line 547 "hlds_out_mode.m"
                {
#line 547 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SymName_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 547 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SymName_117, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_100_100));
#line 547 "hlds_out_mode.m"
                }
#line 548 "hlds_out_mode.m"
                {
#line 548 "hlds_out_mode.m"
                  parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__SymName_117, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_mode__Term_6);
#line 548 "hlds_out_mode.m"
                  return;
                }
#line 546 "hlds_out_mode.m"
              }
#line 522 "hlds_out_mode.m"
            else
#line 522 "hlds_out_mode.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 529 "hlds_out_mode.m"
                {
#line 529 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Context_12;

#line 530 "hlds_out_mode.m"
                  {
#line 530 "hlds_out_mode.m"
                    mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_12);
                  }
#line 532 "hlds_out_mode.m"
                  {
#line 532 "hlds_out_mode.m"
                    MR_Word base;
#line 532 "hlds_out_mode.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 532 "hlds_out_mode.m"
                    *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 532 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[27])));
#line 532 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_12));
#line 532 "hlds_out_mode.m"
                  }
#line 529 "hlds_out_mode.m"
                }
#line 522 "hlds_out_mode.m"
              else
#line 522 "hlds_out_mode.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 522 "hlds_out_mode.m"
                  {
#line 522 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 522 "hlds_out_mode.m"
                    MR_Integer hlds__hlds_out__hlds_out_mode___Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
#line 522 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode___TypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 3)));

#line 523 "hlds_out_mode.m"
                    {
#line 523 "hlds_out_mode.m"
                      parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__SymName_7, hlds__hlds_out__hlds_out_mode__ArgTerms_5, hlds__hlds_out__hlds_out_mode__Term_6);
#line 523 "hlds_out_mode.m"
                      return;
                    }
#line 522 "hlds_out_mode.m"
                  }
#line 522 "hlds_out_mode.m"
                else
#line 522 "hlds_out_mode.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 615 "hlds_out_mode.m"
                    {
#line 615 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Context_143;

#line 616 "hlds_out_mode.m"
                      {
#line 616 "hlds_out_mode.m"
                        mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_143);
                      }
#line 618 "hlds_out_mode.m"
                      {
#line 618 "hlds_out_mode.m"
                        MR_Word base;
#line 618 "hlds_out_mode.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 618 "hlds_out_mode.m"
                        *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 618 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[28])));
#line 618 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 618 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_143));
#line 618 "hlds_out_mode.m"
                      }
#line 615 "hlds_out_mode.m"
                    }
#line 522 "hlds_out_mode.m"
                  else
#line 522 "hlds_out_mode.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 538 "hlds_out_mode.m"
                      {
#line 538 "hlds_out_mode.m"
                        MR_Float hlds__hlds_out__hlds_out_mode__Float_15 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 538 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_104_104;
#line 538 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__Context_115;

#line 539 "hlds_out_mode.m"
                        {
#line 539 "hlds_out_mode.m"
                          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_115);
                        }
#line 540 "hlds_out_mode.m"
                        {
#line 540 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 540 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_104_104, 1) = MR_box_float(hlds__hlds_out__hlds_out_mode__Float_15);
#line 540 "hlds_out_mode.m"
                        }
#line 540 "hlds_out_mode.m"
                        {
#line 540 "hlds_out_mode.m"
                          MR_Word base;
#line 540 "hlds_out_mode.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 540 "hlds_out_mode.m"
                          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 540 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_104_104));
#line 540 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 540 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_115));
#line 540 "hlds_out_mode.m"
                        }
#line 538 "hlds_out_mode.m"
                      }
#line 522 "hlds_out_mode.m"
                    else
#line 522 "hlds_out_mode.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 595 "hlds_out_mode.m"
                        {
#line 595 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__SubConsId_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
#line 595 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__SubArg_30;
#line 595 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__NumArg_31;
#line 595 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__V_41_41;
#line 595 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__V_47_47;
#line 595 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__V_50_50;
#line 595 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__V_51_51;
#line 595 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__Context_136;
#line 595 "hlds_out_mode.m"
                          MR_Integer hlds__hlds_out__hlds_out_mode__TCIConstNum_138 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));

#line 596 "hlds_out_mode.m"
                          {
#line 596 "hlds_out_mode.m"
                            hlds__hlds_out__hlds_out_mode__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 596 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_5[0]));
#line 596 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1));
#line 596 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 596 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
#line 596 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "hlds_out_mode.m"
                          }
#line 596 "hlds_out_mode.m"
                          {
#line 596 "hlds_out_mode.m"
                            mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_41_41, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "ground_term_const arity != 0");
                          }
#line 598 "hlds_out_mode.m"
                          {
#line 598 "hlds_out_mode.m"
                            hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(hlds__hlds_out__hlds_out_mode__SubConsId_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__SubArg_30);
                          }
#line 599 "hlds_out_mode.m"
                          {
#line 599 "hlds_out_mode.m"
                            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_136);
                          }
#line 601 "hlds_out_mode.m"
                          {
#line 601 "hlds_out_mode.m"
                            hlds__hlds_out__hlds_out_mode__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 601 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TCIConstNum_138));
#line 601 "hlds_out_mode.m"
                          }
#line 601 "hlds_out_mode.m"
                          {
#line 601 "hlds_out_mode.m"
                            hlds__hlds_out__hlds_out_mode__NumArg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 601 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_47_47));
#line 601 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 601 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_136));
#line 601 "hlds_out_mode.m"
                          }
#line 602 "hlds_out_mode.m"
                          {
#line 602 "hlds_out_mode.m"
                            hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_51_51, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubArg_30));
#line 602 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "hlds_out_mode.m"
                          }
#line 602 "hlds_out_mode.m"
                          {
#line 602 "hlds_out_mode.m"
                            hlds__hlds_out__hlds_out_mode__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_50_50, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__NumArg_31));
#line 602 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_50_50, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_51_51));
#line 602 "hlds_out_mode.m"
                          }
#line 602 "hlds_out_mode.m"
                          {
#line 602 "hlds_out_mode.m"
                            MR_Word base;
#line 602 "hlds_out_mode.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 602 "hlds_out_mode.m"
                            *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 602 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[29])));
#line 602 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_50_50));
#line 602 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_136));
#line 602 "hlds_out_mode.m"
                          }
#line 595 "hlds_out_mode.m"
                        }
#line 522 "hlds_out_mode.m"
                      else
#line 522 "hlds_out_mode.m"
                        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 550 "hlds_out_mode.m"
                          {
#line 550 "hlds_out_mode.m"
                            MR_Word hlds__hlds_out__hlds_out_mode__V_98_98;
#line 550 "hlds_out_mode.m"
                            MR_Word hlds__hlds_out__hlds_out_mode__Context_118;
#line 550 "hlds_out_mode.m"
                            MR_String hlds__hlds_out__hlds_out_mode__FunctorName_119;
#line 550 "hlds_out_mode.m"
                            MR_String hlds__hlds_out__hlds_out_mode__String_120 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));

#line 551 "hlds_out_mode.m"
                            {
#line 551 "hlds_out_mode.m"
                              mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_118);
                            }
#line 552 "hlds_out_mode.m"
                            {
#line 552 "hlds_out_mode.m"
                              hlds__hlds_out__hlds_out_mode__FunctorName_119 = mercury__string__f_43_43_2_f_0((MR_String) "ImplDefinedConst: ", hlds__hlds_out__hlds_out_mode__String_120);
                            }
#line 553 "hlds_out_mode.m"
                            {
#line 553 "hlds_out_mode.m"
                              hlds__hlds_out__hlds_out_mode__V_98_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 553 "hlds_out_mode.m"
                              MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__V_98_98, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_119));
#line 553 "hlds_out_mode.m"
                            }
#line 553 "hlds_out_mode.m"
                            {
#line 553 "hlds_out_mode.m"
                              MR_Word base;
#line 553 "hlds_out_mode.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 553 "hlds_out_mode.m"
                              *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 553 "hlds_out_mode.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_98_98));
#line 553 "hlds_out_mode.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "hlds_out_mode.m"
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_118));
#line 553 "hlds_out_mode.m"
                            }
#line 550 "hlds_out_mode.m"
                          }
#line 522 "hlds_out_mode.m"
                        else
#line 522 "hlds_out_mode.m"
                          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 534 "hlds_out_mode.m"
                            {
#line 534 "hlds_out_mode.m"
                              MR_Integer hlds__hlds_out__hlds_out_mode__Int_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 534 "hlds_out_mode.m"
                              MR_Word hlds__hlds_out__hlds_out_mode__V_106_106;
#line 534 "hlds_out_mode.m"
                              MR_Word hlds__hlds_out__hlds_out_mode__Context_114;

#line 535 "hlds_out_mode.m"
                              {
#line 535 "hlds_out_mode.m"
                                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_114);
                              }
#line 536 "hlds_out_mode.m"
                              {
#line 536 "hlds_out_mode.m"
                                hlds__hlds_out__hlds_out_mode__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 536 "hlds_out_mode.m"
                                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_106_106, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Int_14));
#line 536 "hlds_out_mode.m"
                              }
#line 536 "hlds_out_mode.m"
                              {
#line 536 "hlds_out_mode.m"
                                MR_Word base;
#line 536 "hlds_out_mode.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 536 "hlds_out_mode.m"
                                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 536 "hlds_out_mode.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_106_106));
#line 536 "hlds_out_mode.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "hlds_out_mode.m"
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_114));
#line 536 "hlds_out_mode.m"
                              }
#line 534 "hlds_out_mode.m"
                            }
#line 522 "hlds_out_mode.m"
                          else
#line 522 "hlds_out_mode.m"
                            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 542 "hlds_out_mode.m"
                              {
#line 542 "hlds_out_mode.m"
                                MR_String hlds__hlds_out__hlds_out_mode__String_16 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 542 "hlds_out_mode.m"
                                MR_Word hlds__hlds_out__hlds_out_mode__V_102_102;
#line 542 "hlds_out_mode.m"
                                MR_Word hlds__hlds_out__hlds_out_mode__Context_116;

#line 543 "hlds_out_mode.m"
                                {
#line 543 "hlds_out_mode.m"
                                  mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_116);
                                }
#line 544 "hlds_out_mode.m"
                                {
#line 544 "hlds_out_mode.m"
                                  hlds__hlds_out__hlds_out_mode__V_102_102 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 544 "hlds_out_mode.m"
                                  MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__V_102_102, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__String_16));
#line 544 "hlds_out_mode.m"
                                }
#line 544 "hlds_out_mode.m"
                                {
#line 544 "hlds_out_mode.m"
                                  MR_Word base;
#line 544 "hlds_out_mode.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 544 "hlds_out_mode.m"
                                  *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 544 "hlds_out_mode.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_102_102));
#line 544 "hlds_out_mode.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "hlds_out_mode.m"
                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_116));
#line 544 "hlds_out_mode.m"
                                }
#line 542 "hlds_out_mode.m"
                              }
#line 522 "hlds_out_mode.m"
                            else
#line 522 "hlds_out_mode.m"
                              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 610 "hlds_out_mode.m"
                                {
#line 610 "hlds_out_mode.m"
                                  MR_Word hlds__hlds_out__hlds_out_mode__Context_141;

#line 611 "hlds_out_mode.m"
                                  {
#line 611 "hlds_out_mode.m"
                                    mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_141);
                                  }
#line 613 "hlds_out_mode.m"
                                  {
#line 613 "hlds_out_mode.m"
                                    MR_Word base;
#line 613 "hlds_out_mode.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 613 "hlds_out_mode.m"
                                    *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 613 "hlds_out_mode.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[30])));
#line 613 "hlds_out_mode.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 613 "hlds_out_mode.m"
                                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_141));
#line 613 "hlds_out_mode.m"
                                  }
#line 610 "hlds_out_mode.m"
                                }
#line 522 "hlds_out_mode.m"
                              else
#line 522 "hlds_out_mode.m"
                                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 525 "hlds_out_mode.m"
                                  {
#line 527 "hlds_out_mode.m"
                                    {
#line 527 "hlds_out_mode.m"
                                      parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[31], hlds__hlds_out__hlds_out_mode__ArgTerms_5, hlds__hlds_out__hlds_out_mode__Term_6);
#line 527 "hlds_out_mode.m"
                                      return;
                                    }
#line 525 "hlds_out_mode.m"
                                  }
#line 522 "hlds_out_mode.m"
                                else
#line 522 "hlds_out_mode.m"
                                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 555 "hlds_out_mode.m"
                                    {
#line 555 "hlds_out_mode.m"
                                      MR_Word hlds__hlds_out__hlds_out_mode__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 555 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__TypeCtorName_19 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
#line 555 "hlds_out_mode.m"
                                      MR_Integer hlds__hlds_out__hlds_out_mode__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 3)));
#line 555 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__V_89_89;
#line 555 "hlds_out_mode.m"
                                      MR_Word hlds__hlds_out__hlds_out_mode__V_95_95;
#line 555 "hlds_out_mode.m"
                                      MR_Word hlds__hlds_out__hlds_out_mode__Context_121;
#line 555 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__FunctorName_122;
#line 555 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__V_151_151;
#line 555 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__V_153_153;
#line 555 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__V_154_154;
#line 555 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__V_156_156;
#line 555 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__V_157_157;

#line 556 "hlds_out_mode.m"
                                      {
#line 556 "hlds_out_mode.m"
                                        mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_121);
                                      }
#line 558 "hlds_out_mode.m"
                                      {
#line 558 "hlds_out_mode.m"
                                        hlds__hlds_out__hlds_out_mode__V_89_89 = mdbcomp__prim_data__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__ModuleName_18);
                                      }
#line 5547 "hlds.hlds_out.hlds_out_mode.c"
                                      {
#line 5549 "hlds.hlds_out.hlds_out_mode.c"
                                        hlds__hlds_out__hlds_out_mode__V_151_151 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__Arity_20);
                                      }
#line 5552 "hlds.hlds_out.hlds_out_mode.c"
                                      {
#line 5554 "hlds.hlds_out.hlds_out_mode.c"
                                        hlds__hlds_out__hlds_out_mode__V_153_153 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_151_151);
                                      }
#line 5557 "hlds.hlds_out.hlds_out_mode.c"
                                      {
#line 5559 "hlds.hlds_out.hlds_out_mode.c"
                                        hlds__hlds_out__hlds_out_mode__V_154_154 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorName_19, hlds__hlds_out__hlds_out_mode__V_153_153);
                                      }
#line 5562 "hlds.hlds_out.hlds_out_mode.c"
                                      {
#line 5564 "hlds.hlds_out.hlds_out_mode.c"
                                        hlds__hlds_out__hlds_out_mode__V_156_156 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_mode__V_154_154);
                                      }
#line 5567 "hlds.hlds_out.hlds_out_mode.c"
                                      {
#line 5569 "hlds.hlds_out.hlds_out_mode.c"
                                        hlds__hlds_out__hlds_out_mode__V_157_157 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_89_89, hlds__hlds_out__hlds_out_mode__V_156_156);
                                      }
#line 5572 "hlds.hlds_out.hlds_out_mode.c"
                                      {
#line 5574 "hlds.hlds_out.hlds_out_mode.c"
                                        hlds__hlds_out__hlds_out_mode__FunctorName_122 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo for ", hlds__hlds_out__hlds_out_mode__V_157_157);
                                      }
#line 560 "hlds_out_mode.m"
                                      {
#line 560 "hlds_out_mode.m"
                                        hlds__hlds_out__hlds_out_mode__V_95_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 560 "hlds_out_mode.m"
                                        MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__V_95_95, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_122));
#line 560 "hlds_out_mode.m"
                                      }
#line 560 "hlds_out_mode.m"
                                      {
#line 560 "hlds_out_mode.m"
                                        MR_Word base;
#line 560 "hlds_out_mode.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 560 "hlds_out_mode.m"
                                        *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 560 "hlds_out_mode.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_95_95));
#line 560 "hlds_out_mode.m"
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 560 "hlds_out_mode.m"
                                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_121));
#line 560 "hlds_out_mode.m"
                                      }
#line 555 "hlds_out_mode.m"
                                    }
#line 522 "hlds_out_mode.m"
                                  else
#line 522 "hlds_out_mode.m"
                                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 579 "hlds_out_mode.m"
                                      {
#line 579 "hlds_out_mode.m"
                                        MR_Integer hlds__hlds_out__hlds_out_mode__TIConstNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 579 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__Arg_27;
#line 579 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__V_63_63;
#line 579 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__V_68_68;
#line 579 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__V_71_71;
#line 579 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__Context_131;

#line 580 "hlds_out_mode.m"
                                        {
#line 580 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 580 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_5[0]));
#line 580 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2));
#line 580 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 580 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
#line 580 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "hlds_out_mode.m"
                                        }
#line 580 "hlds_out_mode.m"
                                        {
#line 580 "hlds_out_mode.m"
                                          mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_63_63, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "type_info_const arity != 0");
                                        }
#line 582 "hlds_out_mode.m"
                                        {
#line 582 "hlds_out_mode.m"
                                          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_131);
                                        }
#line 584 "hlds_out_mode.m"
                                        {
#line 584 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 584 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_68_68, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TIConstNum_26));
#line 584 "hlds_out_mode.m"
                                        }
#line 584 "hlds_out_mode.m"
                                        {
#line 584 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__Arg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 584 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_68_68));
#line 584 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_131));
#line 584 "hlds_out_mode.m"
                                        }
#line 585 "hlds_out_mode.m"
                                        {
#line 585 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_71_71, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Arg_27));
#line 585 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "hlds_out_mode.m"
                                        }
#line 585 "hlds_out_mode.m"
                                        {
#line 585 "hlds_out_mode.m"
                                          MR_Word base;
#line 585 "hlds_out_mode.m"
                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 585 "hlds_out_mode.m"
                                          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 585 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[32])));
#line 585 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_71_71));
#line 585 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_131));
#line 585 "hlds_out_mode.m"
                                        }
#line 579 "hlds_out_mode.m"
                                      }
#line 522 "hlds_out_mode.m"
                                    else
#line 587 "hlds_out_mode.m"
                                      {
#line 587 "hlds_out_mode.m"
                                        MR_Integer hlds__hlds_out__hlds_out_mode__TCIConstNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 587 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__V_53_53;
#line 587 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__V_58_58;
#line 587 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__V_61_61;
#line 587 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__Context_133;
#line 587 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__Arg_135;

#line 588 "hlds_out_mode.m"
                                        {
#line 588 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 588 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_5[0]));
#line 588 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3));
#line 588 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 588 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
#line 588 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 588 "hlds_out_mode.m"
                                        }
#line 588 "hlds_out_mode.m"
                                        {
#line 588 "hlds_out_mode.m"
                                          mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_53_53, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "typeclass_info_const arity != 0");
                                        }
#line 590 "hlds_out_mode.m"
                                        {
#line 590 "hlds_out_mode.m"
                                          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_133);
                                        }
#line 592 "hlds_out_mode.m"
                                        {
#line 592 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 592 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TCIConstNum_28));
#line 592 "hlds_out_mode.m"
                                        }
#line 592 "hlds_out_mode.m"
                                        {
#line 592 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__Arg_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 592 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 592 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 592 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_133));
#line 592 "hlds_out_mode.m"
                                        }
#line 593 "hlds_out_mode.m"
                                        {
#line 593 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_61_61, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Arg_135));
#line 593 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "hlds_out_mode.m"
                                        }
#line 593 "hlds_out_mode.m"
                                        {
#line 593 "hlds_out_mode.m"
                                          MR_Word base;
#line 593 "hlds_out_mode.m"
                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 593 "hlds_out_mode.m"
                                          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 593 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[33])));
#line 593 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_61_61));
#line 593 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_133));
#line 593 "hlds_out_mode.m"
                                        }
#line 587 "hlds_out_mode.m"
                                      }
#line 522 "hlds_out_mode.m"
  }
#line 517 "hlds_out_mode.m"
}

#line 504 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1(
#line 504 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 504 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 504 "hlds_out_mode.m"
{
#line 504 "hlds_out_mode.m"
  {
#line 504 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 504 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 504 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

#line 504 "hlds_out_mode.m"
    {
#line 504 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 504 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
#line 504 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 504 "hlds_out_mode.m"
  }
#line 504 "hlds_out_mode.m"
}

#line 499 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(
#line 499 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 499 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 499 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_8,
#line 499 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_9)
#line 499 "hlds_out_mode.m"
{
#line 502 "hlds_out_mode.m"
  {
#line 502 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 502 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
#line 502 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_8, (MR_Integer) 0)));
#line 502 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_8, (MR_Integer) 1)));
#line 502 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_13;
#line 502 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__FirstTerm_14;
#line 502 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_18_18;

#line 504 "hlds_out_mode.m"
    {
#line 504 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 504 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 504 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1));
#line 504 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 504 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 504 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 504 "hlds_out_mode.m"
    }
#line 504 "hlds_out_mode.m"
    {
#line 504 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__ArgTerms_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_18_18, hlds__hlds_out__hlds_out_mode__Args_12);
    }
#line 505 "hlds_out_mode.m"
    {
#line 505 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(hlds__hlds_out__hlds_out_mode__ConsId_11, hlds__hlds_out__hlds_out_mode__ArgTerms_13, &hlds__hlds_out__hlds_out_mode__FirstTerm_14);
    }
#line 509 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__BoundInsts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 508 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__Term_10 = hlds__hlds_out__hlds_out_mode__FirstTerm_14;
#line 509 "hlds_out_mode.m"
    else
#line 510 "hlds_out_mode.m"
      {
#line 510 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__HeadBoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__BoundInsts_9, (MR_Integer) 0)));
#line 510 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TailBoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__BoundInsts_9, (MR_Integer) 1)));
#line 510 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SecondTerm_17;
#line 510 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 510 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;

#line 511 "hlds_out_mode.m"
        {
#line 511 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__SecondTerm_17 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__HeadBoundInst_15, hlds__hlds_out__hlds_out_mode__TailBoundInsts_16);
        }
#line 514 "hlds_out_mode.m"
        {
#line 514 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SecondTerm_17));
#line 514 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 514 "hlds_out_mode.m"
        }
#line 513 "hlds_out_mode.m"
        {
#line 513 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FirstTerm_14));
#line 513 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_20_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_22_22));
#line 513 "hlds_out_mode.m"
        }
#line 513 "hlds_out_mode.m"
        {
#line 513 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[23], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
        }
#line 510 "hlds_out_mode.m"
      }
#line 502 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_10;
#line 502 "hlds_out_mode.m"
  }
#line 499 "hlds_out_mode.m"
}

#line 489 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(
#line 489 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_1,
#line 489 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_2,
#line 489 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3)
#line 489 "hlds_out_mode.m"
{
#line 492 "hlds_out_mode.m"
  {
#line 492 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 492 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__4_4;

#line 492 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "hlds_out_mode.m"
      {
#line 492 "hlds_out_mode.m"
        {
#line 492 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 492 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[22]));
#line 492 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 492 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_2));
#line 492 "hlds_out_mode.m"
        }
#line 492 "hlds_out_mode.m"
      }
#line 492 "hlds_out_mode.m"
    else
#line 496 "hlds_out_mode.m"
      {
#line 496 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 496 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 1)));

#line 496 "hlds_out_mode.m"
        {
#line 496 "hlds_out_mode.m"
          return hlds__hlds_out__hlds_out_mode__HeadVar__4_4 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_1, hlds__hlds_out__hlds_out_mode__Context_2, hlds__hlds_out__hlds_out_mode__BoundInst_12, hlds__hlds_out__hlds_out_mode__BoundInsts_13);
        }
#line 496 "hlds_out_mode.m"
      }
#line 492 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__4_4;
#line 492 "hlds_out_mode.m"
  }
#line 489 "hlds_out_mode.m"
}

#line 481 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(
#line 481 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 481 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__SharedName_2)
#line 481 "hlds_out_mode.m"
{
#line 483 "hlds_out_mode.m"
  {
#line 483 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 483 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__3_3;

#line 483 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 3))
#line 486 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "clobbered";
#line 483 "hlds_out_mode.m"
    else
#line 483 "hlds_out_mode.m"
      if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 4))
#line 487 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "mostly_clobbered";
#line 483 "hlds_out_mode.m"
      else
#line 483 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 2))
#line 485 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "mostly_unique";
#line 483 "hlds_out_mode.m"
        else
#line 483 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 0))
#line 483 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__SharedName_2;
#line 483 "hlds_out_mode.m"
          else
#line 484 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "unique";
#line 483 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 483 "hlds_out_mode.m"
  }
#line 481 "hlds_out_mode.m"
}

#line 468 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(
#line 468 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
#line 468 "hlds_out_mode.m"
{
#line 470 "hlds_out_mode.m"
  {
#line 470 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 470 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

#line 470 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 1))
#line 471 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "fake";
#line 470 "hlds_out_mode.m"
    else
#line 470 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "real";
#line 470 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 470 "hlds_out_mode.m"
  }
#line 468 "hlds_out_mode.m"
}

#line 463 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(
#line 463 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
#line 463 "hlds_out_mode.m"
{
#line 465 "hlds_out_mode.m"
  {
#line 465 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 465 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

#line 465 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 1))
#line 466 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "dead";
#line 465 "hlds_out_mode.m"
    else
#line 465 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "live";
#line 465 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 465 "hlds_out_mode.m"
  }
#line 463 "hlds_out_mode.m"
}

#line 406 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_3(
#line 406 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 406 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 406 "hlds_out_mode.m"
{
#line 406 "hlds_out_mode.m"
  {
#line 406 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 406 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 406 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv2_Term_8;

#line 406 "hlds_out_mode.m"
    {
#line 406 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv2_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 406 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv2_Term_8));
#line 406 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 406 "hlds_out_mode.m"
  }
#line 406 "hlds_out_mode.m"
}

#line 427 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2(
#line 427 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 427 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 427 "hlds_out_mode.m"
{
#line 427 "hlds_out_mode.m"
  {
#line 427 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 427 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 427 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 427 "hlds_out_mode.m"
    {
#line 427 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 427 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
#line 427 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 427 "hlds_out_mode.m"
  }
#line 427 "hlds_out_mode.m"
}

#line 411 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1(
#line 411 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 411 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 411 "hlds_out_mode.m"
{
#line 411 "hlds_out_mode.m"
  {
#line 411 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 411 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 411 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

#line 411 "hlds_out_mode.m"
    {
#line 411 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 411 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
#line 411 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 411 "hlds_out_mode.m"
  }
#line 411 "hlds_out_mode.m"
}

#line 399 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(
#line 399 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 399 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 399 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_7)
#line 399 "hlds_out_mode.m"
{
#line 404 "hlds_out_mode.m"
  {
#line 404 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 404 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_8;

#line 404 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 1))))
#line 409 "hlds_out_mode.m"
      {
#line 409 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
#line 409 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 409 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_94_94;
#line 409 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_96_96;
#line 409 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_97_97;
#line 409 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_98_98;

#line 411 "hlds_out_mode.m"
        {
#line 411 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 411 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_96_96, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 411 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_96_96, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1));
#line 411 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 411 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_96_96, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
#line 411 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_96_96, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 411 "hlds_out_mode.m"
        }
#line 411 "hlds_out_mode.m"
        {
#line 411 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_98_98, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_12));
#line 411 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "hlds_out_mode.m"
        }
#line 411 "hlds_out_mode.m"
        {
#line 411 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_97_97, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA_11));
#line 411 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_97_97, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_98_98));
#line 411 "hlds_out_mode.m"
        }
#line 410 "hlds_out_mode.m"
        {
#line 410 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_94_94 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_96_96, hlds__hlds_out__hlds_out_mode__V_97_97);
        }
#line 410 "hlds_out_mode.m"
        {
#line 410 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[14], hlds__hlds_out__hlds_out_mode__V_94_94, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
#line 409 "hlds_out_mode.m"
      }
#line 404 "hlds_out_mode.m"
    else
#line 404 "hlds_out_mode.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 2))))
#line 424 "hlds_out_mode.m"
        {
#line 424 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeInfo_127_127 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0];
#line 424 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Liveness_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
#line 424 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Real_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 3)));
#line 424 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_67_67;
#line 424 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_69_69;
#line 424 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_70_70;
#line 424 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__V_71_71;
#line 424 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_73_73;
#line 424 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_74_74;
#line 424 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_75_75;
#line 424 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_76_76;
#line 424 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_77_77;
#line 424 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_79_79;
#line 424 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_80_80;
#line 424 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__V_81_81;
#line 424 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstA_103 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 424 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstB_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));

#line 426 "hlds_out_mode.m"
          {
#line 426 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_71_71 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Liveness_14);
          }
#line 426 "hlds_out_mode.m"
          {
#line 426 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_70_70 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_71_71);
          }
#line 426 "hlds_out_mode.m"
          {
#line 426 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_69_69, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_70_70));
#line 426 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "hlds_out_mode.m"
          }
#line 427 "hlds_out_mode.m"
          {
#line 427 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 427 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_75_75, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 427 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_75_75, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2));
#line 427 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 427 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_75_75, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
#line 427 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_75_75, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 427 "hlds_out_mode.m"
          }
#line 428 "hlds_out_mode.m"
          {
#line 428 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_77_77, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_104));
#line 428 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "hlds_out_mode.m"
          }
#line 427 "hlds_out_mode.m"
          {
#line 427 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_76_76, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA_103));
#line 427 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_76_76, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_77_77));
#line 427 "hlds_out_mode.m"
          }
#line 428 "hlds_out_mode.m"
          {
#line 428 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_74_74 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__hlds_out__hlds_out_mode__TypeInfo_127_127, hlds__hlds_out__hlds_out_mode__V_75_75, hlds__hlds_out__hlds_out_mode__V_76_76);
          }
#line 429 "hlds_out_mode.m"
          {
#line 429 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_81_81 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_15);
          }
#line 429 "hlds_out_mode.m"
          {
#line 429 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_80_80 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_81_81);
          }
#line 428 "hlds_out_mode.m"
          {
#line 428 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_79_79, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_80_80));
#line 428 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "hlds_out_mode.m"
          }
#line 426 "hlds_out_mode.m"
          {
#line 426 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_73_73 = mercury__list__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__TypeInfo_127_127, hlds__hlds_out__hlds_out_mode__V_74_74, hlds__hlds_out__hlds_out_mode__V_79_79);
          }
#line 425 "hlds_out_mode.m"
          {
#line 425 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_67_67 = mercury__list__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__TypeInfo_127_127, hlds__hlds_out__hlds_out_mode__V_69_69, hlds__hlds_out__hlds_out_mode__V_73_73);
          }
#line 425 "hlds_out_mode.m"
          {
#line 425 "hlds_out_mode.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[15], hlds__hlds_out__hlds_out_mode__V_67_67, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
          }
#line 424 "hlds_out_mode.m"
        }
#line 404 "hlds_out_mode.m"
      else
#line 404 "hlds_out_mode.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 0))))
#line 404 "hlds_out_mode.m"
          {
#line 404 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
#line 404 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 404 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_100_100;
#line 404 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_101_101;

#line 406 "hlds_out_mode.m"
            {
#line 406 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 406 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_101_101, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 406 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_101_101, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_3));
#line 406 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_101_101, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 406 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_101_101, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
#line 406 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_101_101, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 406 "hlds_out_mode.m"
            }
#line 405 "hlds_out_mode.m"
            {
#line 405 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_100_100 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_101_101, hlds__hlds_out__hlds_out_mode__Args_10);
            }
#line 405 "hlds_out_mode.m"
            {
#line 405 "hlds_out_mode.m"
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__Name_9, hlds__hlds_out__hlds_out_mode__V_100_100, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
            }
#line 404 "hlds_out_mode.m"
          }
#line 404 "hlds_out_mode.m"
        else
#line 404 "hlds_out_mode.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 440 "hlds_out_mode.m"
            {
#line 440 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;
#line 440 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_39_39;
#line 440 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_40_40;
#line 440 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_41_41;
#line 440 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_42_42;
#line 440 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_43_43;
#line 440 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_44_44;
#line 440 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_45_45;
#line 440 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_47_47;
#line 440 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_48_48;
#line 440 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_49_49;
#line 440 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 440 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Real_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 440 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__IsLive_109 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 440 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);

#line 442 "hlds_out_mode.m"
              {
#line 442 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_39_39 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_107);
              }
#line 443 "hlds_out_mode.m"
              {
#line 443 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_42_42 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__IsLive_109);
              }
#line 443 "hlds_out_mode.m"
              {
#line 443 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_41_41 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_42_42);
              }
#line 444 "hlds_out_mode.m"
              {
#line 444 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_45_45 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_110, (MR_String) "shared");
              }
#line 444 "hlds_out_mode.m"
              {
#line 444 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_44_44 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_45_45);
              }
#line 445 "hlds_out_mode.m"
              {
#line 445 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_49_49 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_108);
              }
#line 445 "hlds_out_mode.m"
              {
#line 445 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_48_48 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_49_49);
              }
#line 444 "hlds_out_mode.m"
              {
#line 444 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_48_48));
#line 444 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "hlds_out_mode.m"
              }
#line 443 "hlds_out_mode.m"
              {
#line 443 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_43_43, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_44_44));
#line 443 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_43_43, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_47_47));
#line 443 "hlds_out_mode.m"
              }
#line 442 "hlds_out_mode.m"
              {
#line 442 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_41_41));
#line 442 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_43_43));
#line 442 "hlds_out_mode.m"
              }
#line 441 "hlds_out_mode.m"
              {
#line 441 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_39_39));
#line 441 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_40_40));
#line 441 "hlds_out_mode.m"
              }
#line 441 "hlds_out_mode.m"
              {
#line 441 "hlds_out_mode.m"
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[16], hlds__hlds_out__hlds_out_mode__V_37_37, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
              }
#line 440 "hlds_out_mode.m"
            }
#line 404 "hlds_out_mode.m"
          else
#line 404 "hlds_out_mode.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 432 "hlds_out_mode.m"
              {
#line 432 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__IsLive_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 432 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Uniq_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 432 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_52_52;
#line 432 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_54_54;
#line 432 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;
#line 432 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_56_56;
#line 432 "hlds_out_mode.m"
                MR_String hlds__hlds_out__hlds_out_mode__V_57_57;
#line 432 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_58_58;
#line 432 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_59_59;
#line 432 "hlds_out_mode.m"
                MR_String hlds__hlds_out__hlds_out_mode__V_60_60;
#line 432 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_62_62;
#line 432 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_63_63;
#line 432 "hlds_out_mode.m"
                MR_String hlds__hlds_out__hlds_out_mode__V_64_64;
#line 432 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 432 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Real_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 434 "hlds_out_mode.m"
                {
#line 434 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_54_54 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_105);
                }
#line 435 "hlds_out_mode.m"
                {
#line 435 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_57_57 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__IsLive_16);
                }
#line 435 "hlds_out_mode.m"
                {
#line 435 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_56_56 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_57_57);
                }
#line 436 "hlds_out_mode.m"
                {
#line 436 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_60_60 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_17, (MR_String) "shared");
                }
#line 436 "hlds_out_mode.m"
                {
#line 436 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_59_59 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_60_60);
                }
#line 437 "hlds_out_mode.m"
                {
#line 437 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_64_64 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_106);
                }
#line 437 "hlds_out_mode.m"
                {
#line 437 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_63_63 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_64_64);
                }
#line 436 "hlds_out_mode.m"
                {
#line 436 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_62_62, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_63_63));
#line 436 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "hlds_out_mode.m"
                }
#line 435 "hlds_out_mode.m"
                {
#line 435 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_59_59));
#line 435 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_58_58, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_62_62));
#line 435 "hlds_out_mode.m"
                }
#line 434 "hlds_out_mode.m"
                {
#line 434 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_56_56));
#line 434 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_55_55, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 434 "hlds_out_mode.m"
                }
#line 433 "hlds_out_mode.m"
                {
#line 433 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_52_52, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_54_54));
#line 433 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_52_52, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
#line 433 "hlds_out_mode.m"
                }
#line 433 "hlds_out_mode.m"
                {
#line 433 "hlds_out_mode.m"
                  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[17], hlds__hlds_out__hlds_out_mode__V_52_52, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                }
#line 432 "hlds_out_mode.m"
              }
#line 404 "hlds_out_mode.m"
            else
#line 404 "hlds_out_mode.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 419 "hlds_out_mode.m"
                {
#line 419 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__V_84_84;
#line 419 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__V_86_86;
#line 419 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 421 "hlds_out_mode.m"
                  {
#line 421 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_86_86 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_102);
                  }
#line 420 "hlds_out_mode.m"
                  {
#line 420 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_84_84, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_86_86));
#line 420 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 420 "hlds_out_mode.m"
                  }
#line 420 "hlds_out_mode.m"
                  {
#line 420 "hlds_out_mode.m"
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[18], hlds__hlds_out__hlds_out_mode__V_84_84, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                  }
#line 419 "hlds_out_mode.m"
                }
#line 404 "hlds_out_mode.m"
              else
#line 404 "hlds_out_mode.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 414 "hlds_out_mode.m"
                  {
#line 414 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 414 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_89_89;
#line 414 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_91_91;

#line 416 "hlds_out_mode.m"
                    {
#line 416 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_91_91 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_13);
                    }
#line 415 "hlds_out_mode.m"
                    {
#line 415 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_89_89, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_91_91));
#line 415 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "hlds_out_mode.m"
                    }
#line 415 "hlds_out_mode.m"
                    {
#line 415 "hlds_out_mode.m"
                      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19], hlds__hlds_out__hlds_out_mode__V_89_89, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                    }
#line 414 "hlds_out_mode.m"
                  }
#line 404 "hlds_out_mode.m"
                else
#line 404 "hlds_out_mode.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 448 "hlds_out_mode.m"
                    {
#line 448 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_135_135;
#line 448 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
#line 448 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Term0_19;
#line 448 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
#line 448 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 448 "hlds_out_mode.m"
                      MR_String hlds__hlds_out__hlds_out_mode__V_31_31;
#line 448 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_33_33;
#line 448 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 448 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Uniq_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 449 "hlds_out_mode.m"
                      {
#line 449 "hlds_out_mode.m"
                        parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_18, &hlds__hlds_out__hlds_out_mode__Term0_19);
                      }
#line 451 "hlds_out_mode.m"
                      {
#line 451 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_31_31 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_111, (MR_String) "shared");
                      }
#line 451 "hlds_out_mode.m"
                      {
#line 451 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_30_30 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_31_31);
                      }
#line 6813 "hlds.hlds_out.hlds_out_mode.c"
                      hlds__hlds_out__hlds_out_mode__TypeCtorInfo_135_135 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 452 "hlds_out_mode.m"
                      {
#line 452 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_34_34 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__hlds_out__hlds_out_mode__TypeCtorInfo_135_135, hlds__hlds_out__hlds_out_mode__Term0_19);
                      }
#line 451 "hlds_out_mode.m"
                      {
#line 451 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34));
#line 451 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 451 "hlds_out_mode.m"
                      }
#line 450 "hlds_out_mode.m"
                      {
#line 450 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_30_30));
#line 450 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_33_33));
#line 450 "hlds_out_mode.m"
                      }
#line 450 "hlds_out_mode.m"
                      {
#line 450 "hlds_out_mode.m"
                        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_135_135, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[20], hlds__hlds_out__hlds_out_mode__V_28_28, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                      }
#line 448 "hlds_out_mode.m"
                    }
#line 404 "hlds_out_mode.m"
                  else
#line 455 "hlds_out_mode.m"
                    {
#line 455 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_137_137;
#line 455 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
#line 455 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_23_23;
#line 455 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 455 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
#line 455 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
#line 455 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Type_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 455 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Term0_114;

#line 456 "hlds_out_mode.m"
                      {
#line 456 "hlds_out_mode.m"
                        parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_113, &hlds__hlds_out__hlds_out_mode__Term0_114);
                      }
#line 6873 "hlds.hlds_out.hlds_out_mode.c"
                      hlds__hlds_out__hlds_out_mode__TypeCtorInfo_137_137 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 458 "hlds_out_mode.m"
                      {
#line 458 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_23_23 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__hlds_out__hlds_out_mode__TypeCtorInfo_137_137, hlds__hlds_out__hlds_out_mode__Term0_114);
                      }
#line 459 "hlds_out_mode.m"
                      {
#line 459 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_25_25 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_112);
                      }
#line 458 "hlds_out_mode.m"
                      {
#line 458 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_25_25));
#line 458 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 458 "hlds_out_mode.m"
                      }
#line 457 "hlds_out_mode.m"
                      {
#line 457 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_21_21, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_23_23));
#line 457 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_24_24));
#line 457 "hlds_out_mode.m"
                      }
#line 457 "hlds_out_mode.m"
                      {
#line 457 "hlds_out_mode.m"
                        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_137_137, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[21], hlds__hlds_out__hlds_out_mode__V_21_21, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                      }
#line 455 "hlds_out_mode.m"
                    }
#line 404 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_8;
#line 404 "hlds_out_mode.m"
  }
#line 399 "hlds_out_mode.m"
}

#line 340 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(
#line 340 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 340 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_5)
#line 340 "hlds_out_mode.m"
{
#line 342 "hlds_out_mode.m"
  {
#line 342 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 342 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;
#line 342 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_5, (MR_Integer) 0)));
#line 342 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_5, (MR_Integer) 1)));
#line 342 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__ConsName_9;
#line 342 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_13_13;
#line 342 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_17_17;
#line 342 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_19_19;
#line 342 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_21_21;

#line 344 "hlds_out_mode.m"
    {
#line 344 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_13_13 = mdbcomp__prim_data__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__SymName_7);
    }
#line 6954 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 6956 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__V_19_19 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__Arity_8);
    }
#line 6959 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 6961 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_19_19);
    }
#line 6964 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 6966 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__ConsName_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_13_13, hlds__hlds_out__hlds_out_mode__V_21_21);
    }
#line 346 "hlds_out_mode.m"
    {
#line 346 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 346 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_17_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ConsName_9));
#line 346 "hlds_out_mode.m"
    }
#line 346 "hlds_out_mode.m"
    {
#line 346 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 346 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_17_17));
#line 346 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 346 "hlds_out_mode.m"
    }
#line 342 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 342 "hlds_out_mode.m"
  }
#line 340 "hlds_out_mode.m"
}

#line 335 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1(
#line 335 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 335 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 335 "hlds_out_mode.m"
{
#line 335 "hlds_out_mode.m"
  {
#line 335 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 335 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 335 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_6;

#line 335 "hlds_out_mode.m"
    {
#line 335 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_6 = hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 335 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_6));
#line 335 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 335 "hlds_out_mode.m"
  }
#line 335 "hlds_out_mode.m"
}

#line 256 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(
#line 256 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 256 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstResults_5)
#line 256 "hlds_out_mode.m"
{
#line 261 "hlds_out_mode.m"
  {
#line 261 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 261 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;

#line 261 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__InstResults_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 270 "hlds_out_mode.m"
      {
#line 271 "hlds_out_mode.m"
        {
#line 271 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 271 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[2]));
#line 271 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 271 "hlds_out_mode.m"
        }
#line 270 "hlds_out_mode.m"
      }
#line 261 "hlds_out_mode.m"
    else
#line 261 "hlds_out_mode.m"
      if ((hlds__hlds_out__hlds_out_mode__InstResults_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 273 "hlds_out_mode.m"
        {
#line 274 "hlds_out_mode.m"
          {
#line 274 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 274 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[3]));
#line 274 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 274 "hlds_out_mode.m"
          }
#line 273 "hlds_out_mode.m"
        }
#line 261 "hlds_out_mode.m"
      else
#line 261 "hlds_out_mode.m"
        {
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__GroundnessResult_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 0)));
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__AnyResult_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 1)));
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstNameResult_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 2)));
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeResult_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 3)));
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm1_11;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm2_12;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm3_13;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm4_14;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_23_23;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;

#line 282 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__GroundnessResult_7 == (MR_Integer) 2))
#line 288 "hlds_out_mode.m"
            {
#line 289 "hlds_out_mode.m"
              {
#line 289 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm1_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 289 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[4]));
#line 289 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 289 "hlds_out_mode.m"
              }
#line 288 "hlds_out_mode.m"
            }
#line 282 "hlds_out_mode.m"
          else
#line 282 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__GroundnessResult_7 == (MR_Integer) 1))
#line 285 "hlds_out_mode.m"
              {
#line 286 "hlds_out_mode.m"
                {
#line 286 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm1_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 286 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[5]));
#line 286 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 286 "hlds_out_mode.m"
                }
#line 285 "hlds_out_mode.m"
              }
#line 282 "hlds_out_mode.m"
            else
#line 282 "hlds_out_mode.m"
              {
#line 283 "hlds_out_mode.m"
                {
#line 283 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm1_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 283 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[6]));
#line 283 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 283 "hlds_out_mode.m"
                }
#line 282 "hlds_out_mode.m"
              }
#line 297 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__AnyResult_8 == (MR_Integer) 2))
#line 303 "hlds_out_mode.m"
            {
#line 304 "hlds_out_mode.m"
              {
#line 304 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm2_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 304 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[7]));
#line 304 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 304 "hlds_out_mode.m"
              }
#line 303 "hlds_out_mode.m"
            }
#line 297 "hlds_out_mode.m"
          else
#line 297 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__AnyResult_8 == (MR_Integer) 1))
#line 300 "hlds_out_mode.m"
              {
#line 301 "hlds_out_mode.m"
                {
#line 301 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm2_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 301 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[8]));
#line 301 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 301 "hlds_out_mode.m"
                }
#line 300 "hlds_out_mode.m"
              }
#line 297 "hlds_out_mode.m"
            else
#line 297 "hlds_out_mode.m"
              {
#line 298 "hlds_out_mode.m"
                {
#line 298 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm2_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 298 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[9]));
#line 298 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 298 "hlds_out_mode.m"
                }
#line 297 "hlds_out_mode.m"
              }
#line 312 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__InstNameResult_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 312 "hlds_out_mode.m"
            {
#line 313 "hlds_out_mode.m"
              {
#line 313 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm3_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 313 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[10]));
#line 313 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 313 "hlds_out_mode.m"
              }
#line 312 "hlds_out_mode.m"
            }
#line 312 "hlds_out_mode.m"
          else
#line 316 "hlds_out_mode.m"
            {
#line 316 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstNameSet_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstNameResult_9, (MR_Integer) 0)));
#line 316 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__NumInstNames_56;
#line 316 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__CountTerm_57;
#line 316 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_58_58;
#line 316 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_62_62;

#line 317 "hlds_out_mode.m"
              {
#line 317 "hlds_out_mode.m"
                mercury__set__count_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, hlds__hlds_out__hlds_out_mode__InstNameSet_55, &hlds__hlds_out__hlds_out_mode__NumInstNames_56);
              }
#line 320 "hlds_out_mode.m"
              {
#line 320 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 320 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__NumInstNames_56));
#line 320 "hlds_out_mode.m"
              }
#line 320 "hlds_out_mode.m"
              {
#line 320 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__CountTerm_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 320 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_57, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 320 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_57, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 320 "hlds_out_mode.m"
              }
#line 321 "hlds_out_mode.m"
              {
#line 321 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_62_62, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__CountTerm_57));
#line 321 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 321 "hlds_out_mode.m"
              }
#line 321 "hlds_out_mode.m"
              {
#line 321 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm3_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 321 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[11]));
#line 321 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_62_62));
#line 321 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 321 "hlds_out_mode.m"
              }
#line 316 "hlds_out_mode.m"
            }
#line 330 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__TypeResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 330 "hlds_out_mode.m"
            {
#line 331 "hlds_out_mode.m"
              {
#line 331 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm4_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 331 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[12]));
#line 331 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 331 "hlds_out_mode.m"
              }
#line 330 "hlds_out_mode.m"
            }
#line 330 "hlds_out_mode.m"
          else
#line 333 "hlds_out_mode.m"
            {
#line 333 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 333 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorSet_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__TypeResult_10, (MR_Integer) 0)));
#line 333 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__TypeCtors_72;
#line 333 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorTerms_73;
#line 333 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_74_74;

#line 334 "hlds_out_mode.m"
              {
#line 334 "hlds_out_mode.m"
                mercury__set__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_80, hlds__hlds_out__hlds_out_mode__TypeCtorSet_71, &hlds__hlds_out__hlds_out_mode__TypeCtors_72);
              }
#line 335 "hlds_out_mode.m"
              {
#line 335 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 335 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_74_74, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_4[0]));
#line 335 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_74_74, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1));
#line 335 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 335 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_74_74, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 335 "hlds_out_mode.m"
              }
#line 335 "hlds_out_mode.m"
              {
#line 335 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__TypeCtorTerms_73 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_80, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_74_74, hlds__hlds_out__hlds_out_mode__TypeCtors_72);
              }
#line 336 "hlds_out_mode.m"
              {
#line 336 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm4_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 336 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[11]));
#line 336 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_14, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TypeCtorTerms_73));
#line 336 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 336 "hlds_out_mode.m"
              }
#line 333 "hlds_out_mode.m"
            }
#line 268 "hlds_out_mode.m"
          {
#line 268 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm4_14));
#line 268 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "hlds_out_mode.m"
          }
#line 268 "hlds_out_mode.m"
          {
#line 268 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_25_25, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm3_13));
#line 268 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_25_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_26_26));
#line 268 "hlds_out_mode.m"
          }
#line 268 "hlds_out_mode.m"
          {
#line 268 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm2_12));
#line 268 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_25_25));
#line 268 "hlds_out_mode.m"
          }
#line 267 "hlds_out_mode.m"
          {
#line 267 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_23_23, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm1_11));
#line 267 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_23_23, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_24_24));
#line 267 "hlds_out_mode.m"
          }
#line 267 "hlds_out_mode.m"
          {
#line 267 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 267 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[13]));
#line 267 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_23_23));
#line 267 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 267 "hlds_out_mode.m"
          }
#line 261 "hlds_out_mode.m"
        }
#line 261 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 261 "hlds_out_mode.m"
  }
#line 256 "hlds_out_mode.m"
}

#line 239 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0_1(
#line 239 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 239 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 239 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
#line 239 "hlds_out_mode.m"
{
#line 239 "hlds_out_mode.m"
  {
#line 239 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3;
#line 239 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 239 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__4_30;

#line 239 "hlds_out_mode.m"
    {
#line 239 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_HeadVar__4_30 = hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__239__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
#line 239 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__4_30));
#line 239 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_3;
#line 239 "hlds_out_mode.m"
  }
#line 239 "hlds_out_mode.m"
}

#line 188 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(
#line 188 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 188 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 188 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7)
#line 188 "hlds_out_mode.m"
{
#line 193 "hlds_out_mode.m"
  {
#line 193 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 193 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_8;

#line 193 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Inst_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 203 "hlds_out_mode.m"
      {
#line 129 "hlds_out_mode.m"
        {
#line 129 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 129 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[1]));
#line 129 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 129 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 129 "hlds_out_mode.m"
        }
#line 203 "hlds_out_mode.m"
      }
#line 193 "hlds_out_mode.m"
    else
#line 193 "hlds_out_mode.m"
      if ((hlds__hlds_out__hlds_out_mode__Inst_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 252 "hlds_out_mode.m"
        {
#line 253 "hlds_out_mode.m"
          {
#line 253 "hlds_out_mode.m"
            return hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, (MR_String) "not_reached");
          }
#line 252 "hlds_out_mode.m"
        }
#line 193 "hlds_out_mode.m"
      else
#line 193 "hlds_out_mode.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) == (MR_mktag((MR_Integer) 2))))
#line 193 "hlds_out_mode.m"
          {
#line 193 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)));
#line 193 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));

#line 198 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 199 "hlds_out_mode.m"
              {
#line 199 "hlds_out_mode.m"
                MR_String hlds__hlds_out__hlds_out_mode__V_58_58;
#line 199 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_78_78;

#line 475 "hlds_out_mode.m"
                if ((hlds__hlds_out__hlds_out_mode__Uniq_9 == (MR_Integer) 3))
#line 478 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_String) "clobbered_any";
#line 475 "hlds_out_mode.m"
                else
#line 475 "hlds_out_mode.m"
                  if ((hlds__hlds_out__hlds_out_mode__Uniq_9 == (MR_Integer) 4))
#line 479 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_String) "mostly_clobbered_any";
#line 475 "hlds_out_mode.m"
                  else
#line 475 "hlds_out_mode.m"
                    if ((hlds__hlds_out__hlds_out_mode__Uniq_9 == (MR_Integer) 2))
#line 477 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_String) "mostly_unique_any";
#line 475 "hlds_out_mode.m"
                    else
#line 475 "hlds_out_mode.m"
                      if ((hlds__hlds_out__hlds_out_mode__Uniq_9 == (MR_Integer) 0))
#line 475 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_String) "any";
#line 475 "hlds_out_mode.m"
                      else
#line 476 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_String) "unique_any";
#line 130 "hlds_out_mode.m"
                {
#line 130 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 130 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_78_78, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 130 "hlds_out_mode.m"
                }
#line 129 "hlds_out_mode.m"
                {
#line 129 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 129 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_78_78));
#line 129 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 129 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 129 "hlds_out_mode.m"
                }
#line 199 "hlds_out_mode.m"
              }
#line 198 "hlds_out_mode.m"
            else
#line 195 "hlds_out_mode.m"
              {
#line 195 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_11 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_10), (MR_Integer) 1);

#line 196 "hlds_out_mode.m"
                {
#line 196 "hlds_out_mode.m"
                  return hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__PredInstInfo_11);
                }
#line 195 "hlds_out_mode.m"
              }
#line 193 "hlds_out_mode.m"
          }
#line 193 "hlds_out_mode.m"
        else
#line 193 "hlds_out_mode.m"
          if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) == (MR_mktag((MR_Integer) 1))))
#line 206 "hlds_out_mode.m"
            {
#line 206 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)));
#line 206 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Term0_13;
#line 206 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Term1_14;
#line 206 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;

#line 207 "hlds_out_mode.m"
              {
#line 207 "hlds_out_mode.m"
                parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_12, &hlds__hlds_out__hlds_out_mode__Term0_13);
              }
#line 208 "hlds_out_mode.m"
              {
#line 208 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Term1_14 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__Term0_13);
              }
#line 209 "hlds_out_mode.m"
              {
#line 209 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Term1_14));
#line 209 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 209 "hlds_out_mode.m"
              }
#line 209 "hlds_out_mode.m"
              {
#line 209 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 209 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[1]));
#line 209 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
#line 209 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 209 "hlds_out_mode.m"
              }
#line 206 "hlds_out_mode.m"
            }
#line 193 "hlds_out_mode.m"
          else
#line 193 "hlds_out_mode.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 245 "hlds_out_mode.m"
              {
#line 245 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
#line 245 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));
#line 245 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;

#line 246 "hlds_out_mode.m"
                {
#line 246 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 246 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_22));
#line 246 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Args_23));
#line 246 "hlds_out_mode.m"
                }
#line 246 "hlds_out_mode.m"
                {
#line 246 "hlds_out_mode.m"
                  return hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_26_26);
                }
#line 245 "hlds_out_mode.m"
              }
#line 193 "hlds_out_mode.m"
            else
#line 193 "hlds_out_mode.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 211 "hlds_out_mode.m"
                {
#line 211 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__InstResults_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));
#line 211 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 3)));
#line 211 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_17;
#line 211 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__V_50_50;
#line 211 "hlds_out_mode.m"
                  MR_String hlds__hlds_out__hlds_out_mode__V_51_51;
#line 211 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Uniq_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));

#line 215 "hlds_out_mode.m"
                  if ((hlds__hlds_out__hlds_out_mode__Lang_5 == (MR_Integer) 1))
#line 216 "hlds_out_mode.m"
                    {
#line 216 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_44_44;
#line 216 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_45_45;
#line 216 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_46_46;

#line 218 "hlds_out_mode.m"
                      {
#line 218 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_44_44 = hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstResults_15);
                      }
#line 219 "hlds_out_mode.m"
                      {
#line 219 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_46_46 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__BoundInsts_16);
                      }
#line 218 "hlds_out_mode.m"
                      {
#line 218 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_45_45, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_46_46));
#line 218 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "hlds_out_mode.m"
                      }
#line 217 "hlds_out_mode.m"
                      {
#line 217 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_44_44));
#line 217 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_45_45));
#line 217 "hlds_out_mode.m"
                      }
#line 216 "hlds_out_mode.m"
                    }
#line 215 "hlds_out_mode.m"
                  else
#line 213 "hlds_out_mode.m"
                    {
#line 213 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_48_48;

#line 214 "hlds_out_mode.m"
                      {
#line 214 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_48_48 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__BoundInsts_16);
                      }
#line 214 "hlds_out_mode.m"
                      {
#line 214 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_48_48));
#line 214 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "hlds_out_mode.m"
                      }
#line 213 "hlds_out_mode.m"
                    }
#line 483 "hlds_out_mode.m"
                  if ((hlds__hlds_out__hlds_out_mode__Uniq_59 == (MR_Integer) 3))
#line 486 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "clobbered";
#line 483 "hlds_out_mode.m"
                  else
#line 483 "hlds_out_mode.m"
                    if ((hlds__hlds_out__hlds_out_mode__Uniq_59 == (MR_Integer) 4))
#line 487 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "mostly_clobbered";
#line 483 "hlds_out_mode.m"
                    else
#line 483 "hlds_out_mode.m"
                      if ((hlds__hlds_out__hlds_out_mode__Uniq_59 == (MR_Integer) 2))
#line 485 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "mostly_unique";
#line 483 "hlds_out_mode.m"
                      else
#line 483 "hlds_out_mode.m"
                        if ((hlds__hlds_out__hlds_out_mode__Uniq_59 == (MR_Integer) 0))
#line 483 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "bound";
#line 483 "hlds_out_mode.m"
                        else
#line 484 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "unique";
#line 221 "hlds_out_mode.m"
                  {
#line 221 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 221 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_50_50, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_51_51));
#line 221 "hlds_out_mode.m"
                  }
#line 221 "hlds_out_mode.m"
                  {
#line 221 "hlds_out_mode.m"
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__V_50_50, hlds__hlds_out__hlds_out_mode__ArgTerms_17, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                  }
#line 211 "hlds_out_mode.m"
                }
#line 193 "hlds_out_mode.m"
              else
#line 193 "hlds_out_mode.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 238 "hlds_out_mode.m"
                  {
#line 238 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
#line 238 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__SubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));
#line 238 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 238 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_39_39;
#line 239 "hlds_out_mode.m"
                    MR_Box hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 239 "hlds_out_mode.m"
                    {
#line 239 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 239 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[1]));
#line 239 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0_1));
#line 239 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 239 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 239 "hlds_out_mode.m"
                    }
#line 239 "hlds_out_mode.m"
                    {
#line 239 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_39_39 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInst_20);
                    }
#line 239 "hlds_out_mode.m"
                    {
#line 239 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = mercury__set__fold_3_f_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[4], (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_27_27, hlds__hlds_out__hlds_out_mode__Vars_19, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_39_39)));
                    }
#line 239 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__Term_8 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv1_Term_8);
#line 238 "hlds_out_mode.m"
                  }
#line 193 "hlds_out_mode.m"
                else
#line 193 "hlds_out_mode.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 249 "hlds_out_mode.m"
                    {
#line 249 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__InstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));

#line 250 "hlds_out_mode.m"
                      {
#line 250 "hlds_out_mode.m"
                        return hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstName_24);
                      }
#line 249 "hlds_out_mode.m"
                    }
#line 193 "hlds_out_mode.m"
                  else
#line 193 "hlds_out_mode.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 225 "hlds_out_mode.m"
                      {
#line 225 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__Uniq_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
#line 225 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));

#line 230 "hlds_out_mode.m"
                        if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "hlds_out_mode.m"
                          {
#line 231 "hlds_out_mode.m"
                            MR_String hlds__hlds_out__hlds_out_mode__V_42_42;
#line 231 "hlds_out_mode.m"
                            MR_Word hlds__hlds_out__hlds_out_mode__V_96_96;

#line 483 "hlds_out_mode.m"
                            if ((hlds__hlds_out__hlds_out_mode__Uniq_62 == (MR_Integer) 3))
#line 486 "hlds_out_mode.m"
                              hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "clobbered";
#line 483 "hlds_out_mode.m"
                            else
#line 483 "hlds_out_mode.m"
                              if ((hlds__hlds_out__hlds_out_mode__Uniq_62 == (MR_Integer) 4))
#line 487 "hlds_out_mode.m"
                                hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "mostly_clobbered";
#line 483 "hlds_out_mode.m"
                              else
#line 483 "hlds_out_mode.m"
                                if ((hlds__hlds_out__hlds_out_mode__Uniq_62 == (MR_Integer) 2))
#line 485 "hlds_out_mode.m"
                                  hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "mostly_unique";
#line 483 "hlds_out_mode.m"
                                else
#line 483 "hlds_out_mode.m"
                                  if ((hlds__hlds_out__hlds_out_mode__Uniq_62 == (MR_Integer) 0))
#line 483 "hlds_out_mode.m"
                                    hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "ground";
#line 483 "hlds_out_mode.m"
                                  else
#line 484 "hlds_out_mode.m"
                                    hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "unique";
#line 130 "hlds_out_mode.m"
                            {
#line 130 "hlds_out_mode.m"
                              hlds__hlds_out__hlds_out_mode__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 130 "hlds_out_mode.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_96_96, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_42_42));
#line 130 "hlds_out_mode.m"
                            }
#line 129 "hlds_out_mode.m"
                            {
#line 129 "hlds_out_mode.m"
                              hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 129 "hlds_out_mode.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_96_96));
#line 129 "hlds_out_mode.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 129 "hlds_out_mode.m"
                              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 129 "hlds_out_mode.m"
                            }
#line 231 "hlds_out_mode.m"
                          }
#line 230 "hlds_out_mode.m"
                        else
#line 227 "hlds_out_mode.m"
                          {
#line 227 "hlds_out_mode.m"
                            MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_60 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_63), (MR_Integer) 1);

#line 228 "hlds_out_mode.m"
                            {
#line 228 "hlds_out_mode.m"
                              return hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__PredInstInfo_60);
                            }
#line 227 "hlds_out_mode.m"
                          }
#line 225 "hlds_out_mode.m"
                      }
#line 193 "hlds_out_mode.m"
                    else
#line 235 "hlds_out_mode.m"
                      {
#line 235 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
#line 235 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_40_40;
#line 235 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_41_41;

#line 236 "hlds_out_mode.m"
                        {
#line 236 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_41_41 = mercury__term__context_init_0_f_0();
                        }
#line 236 "hlds_out_mode.m"
                        {
#line 236 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Var_18));
#line 236 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_41_41));
#line 236 "hlds_out_mode.m"
                        }
#line 236 "hlds_out_mode.m"
                        {
#line 236 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__Term_8 = mercury__term__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__V_40_40);
                        }
#line 235 "hlds_out_mode.m"
                      }
#line 193 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_8;
#line 193 "hlds_out_mode.m"
  }
#line 188 "hlds_out_mode.m"
}

#line 127 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(
#line 127 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 127 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__Name_5)
#line 127 "hlds_out_mode.m"
{
#line 129 "hlds_out_mode.m"
  {
#line 129 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 129 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 129 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

#line 130 "hlds_out_mode.m"
    {
#line 130 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 130 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_6_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_5));
#line 130 "hlds_out_mode.m"
    }
#line 129 "hlds_out_mode.m"
    {
#line 129 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 129 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_6_6));
#line 129 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 129 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 129 "hlds_out_mode.m"
    }
#line 129 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 129 "hlds_out_mode.m"
  }
#line 127 "hlds_out_mode.m"
}

#line 101 "hlds_out_mode.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_f_0(
#line 101 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_5,
#line 101 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6,
#line 101 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ModuleInfo_7)
#line 101 "hlds_out_mode.m"
{
#line 1044 "hlds_out_mode.m"
  {
#line 1044 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1044 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_8;
#line 1044 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Expansions_9;
#line 1044 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;
#line 1046 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_8;

#line 1045 "hlds_out_mode.m"
    {
#line 1045 "hlds_out_mode.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &hlds__hlds_out__hlds_out_mode__Expansions_9);
    }
#line 1046 "hlds_out_mode.m"
    {
#line 1046 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstVarSet_6));
#line 1046 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModuleInfo_7));
#line 1046 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Expansions_9));
#line 1046 "hlds_out_mode.m"
    }
#line 1046 "hlds_out_mode.m"
    {
#line 1046 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_inst_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__Inst_5, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_10_10)), ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_8);
    }
#line 1046 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_8 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_8);
#line 1044 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_8;
#line 1044 "hlds_out_mode.m"
  }
#line 101 "hlds_out_mode.m"
}

#line 99 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_expanded_inst_5_p_0(
#line 99 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_6,
#line 99 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_7,
#line 99 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ModuleInfo_8)
#line 99 "hlds_out_mode.m"
{
#line 1039 "hlds_out_mode.m"
  {
#line 1039 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1039 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Expansions_10;
#line 1039 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_13_13;
#line 1041 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_12;

#line 1040 "hlds_out_mode.m"
    {
#line 1040 "hlds_out_mode.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &hlds__hlds_out__hlds_out_mode__Expansions_10);
    }
#line 1041 "hlds_out_mode.m"
    {
#line 1041 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1041 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_13_13, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstVarSet_7));
#line 1041 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_13_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModuleInfo_8));
#line 1041 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_13_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Expansions_10));
#line 1041 "hlds_out_mode.m"
    }
#line 1041 "hlds_out_mode.m"
    {
#line 1041 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_inst_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__Inst_6, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_13_13)), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_12);
    }
#line 1039 "hlds_out_mode.m"
  }
#line 99 "hlds_out_mode.m"
}

#line 90 "hlds_out_mode.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_uni_mode_list_to_string_2_f_0(
#line 90 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniModes_4,
#line 90 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5)
#line 90 "hlds_out_mode.m"
{
#line 1004 "hlds_out_mode.m"
  {
#line 1004 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1004 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_6;
#line 1005 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_6;

#line 1005 "hlds_out_mode.m"
    {
#line 1005 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__UniModes_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_6);
    }
#line 1005 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_6 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_6);
#line 1004 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_6;
#line 1004 "hlds_out_mode.m"
  }
#line 90 "hlds_out_mode.m"
}

#line 88 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_list_4_p_0(
#line 88 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniModes_5,
#line 88 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6)
#line 88 "hlds_out_mode.m"
{
#line 1002 "hlds_out_mode.m"
  {
#line 1002 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1002 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_9;

#line 1002 "hlds_out_mode.m"
    {
#line 1002 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__UniModes_5, hlds__hlds_out__hlds_out_mode__InstVarSet_6, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_9);
    }
#line 1002 "hlds_out_mode.m"
  }
#line 88 "hlds_out_mode.m"
}

#line 86 "hlds_out_mode.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_uni_mode_to_string_2_f_0(
#line 86 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_4,
#line 86 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5)
#line 86 "hlds_out_mode.m"
{
#line 1025 "hlds_out_mode.m"
  {
#line 1025 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1025 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_6;
#line 1025 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2];
#line 1025 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_28;
#line 1025 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_14;
#line 1025 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_15;
#line 1025 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_16;
#line 1025 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_17;
#line 1025 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_4, (MR_Integer) 0)));
#line 1025 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_4, (MR_Integer) 1)));
#line 1025 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 1025 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
#line 1025 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_22;
#line 1025 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_24;
#line 1025 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
#line 1033 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_22;
#line 8245 "hlds.hlds_out.hlds_out_mode.c"
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8247 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_24;
#line 1035 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv3_String_6;

#line 1032 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, (MR_Integer) 0)));
#line 1032 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, (MR_Integer) 1)));
#line 1032 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_19_19, (MR_Integer) 0)));
#line 1032 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_19_19, (MR_Integer) 1)));
#line 1033 "hlds_out_mode.m"
    {
#line 1033 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1033 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_14));
#line 1033 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_20_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_16));
#line 1033 "hlds_out_mode.m"
    }
#line 1033 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__V_21_21 = (MR_Word) hlds__hlds_out__hlds_out_mode__InstVarSet_5;
#line 8272 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_28 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6];
#line 1033 "hlds_out_mode.m"
    {
#line 1033 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_28, hlds__hlds_out__hlds_out_mode__V_20_20, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_21_21)), ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_22);
    }
#line 1033 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_22 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_22);
#line 8281 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8283 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 8285 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_22)), &hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_24);
    }
#line 8288 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_24 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_24);
#line 1035 "hlds_out_mode.m"
    {
#line 1035 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1035 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_15));
#line 1035 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_17));
#line 1035 "hlds_out_mode.m"
    }
#line 1035 "hlds_out_mode.m"
    {
#line 1035 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_28, hlds__hlds_out__hlds_out_mode__V_25_25, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_21_21)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_24)), &hlds__hlds_out__hlds_out_mode__conv3_String_6);
    }
#line 1035 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_6 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv3_String_6);
#line 1025 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_6;
#line 1025 "hlds_out_mode.m"
  }
#line 86 "hlds_out_mode.m"
}

#line 84 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_p_0(
#line 84 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_5,
#line 84 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6)
#line 84 "hlds_out_mode.m"
{
#line 1023 "hlds_out_mode.m"
  {
#line 1023 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1023 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1];
#line 1023 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_31;
#line 1023 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_17;
#line 1023 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_18;
#line 1023 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_19;
#line 1023 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_20;
#line 1023 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_5, (MR_Integer) 0)));
#line 1023 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_5, (MR_Integer) 1)));
#line 1023 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_23_23;
#line 1023 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 1023 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
#line 1033 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_25;
#line 8351 "hlds.hlds_out.hlds_out_mode.c"
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8353 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_27;
#line 1035 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv3_STATE_VARIABLE_IO_9;

#line 1032 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, (MR_Integer) 0)));
#line 1032 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, (MR_Integer) 1)));
#line 1032 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, (MR_Integer) 0)));
#line 1032 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, (MR_Integer) 1)));
#line 1033 "hlds_out_mode.m"
    {
#line 1033 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1033 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_23_23, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_17));
#line 1033 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_23_23, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_19));
#line 1033 "hlds_out_mode.m"
    }
#line 1033 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) hlds__hlds_out__hlds_out_mode__InstVarSet_6;
#line 8378 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_31 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6];
#line 1033 "hlds_out_mode.m"
    {
#line 1033 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_31, hlds__hlds_out__hlds_out_mode__V_23_23, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_24_24)), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_25);
    }
#line 8385 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8387 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 8389 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_27);
    }
#line 1035 "hlds_out_mode.m"
    {
#line 1035 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1035 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_28_28, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_18));
#line 1035 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_28_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_20));
#line 1035 "hlds_out_mode.m"
    }
#line 1035 "hlds_out_mode.m"
    {
#line 1035 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_31, hlds__hlds_out__hlds_out_mode__V_28_28, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_24_24)), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv3_STATE_VARIABLE_IO_9);
    }
#line 1023 "hlds_out_mode.m"
  }
#line 84 "hlds_out_mode.m"
}

#line 79 "hlds_out_mode.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_uni_mode_list_to_string_5_f_0(
#line 79 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_7,
#line 79 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
#line 79 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
#line 79 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
#line 79 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
#line 79 "hlds_out_mode.m"
{
#line 644 "hlds_out_mode.m"
  {
#line 644 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 644 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 645 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 645 "hlds_out_mode.m"
    {
#line 645 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Insts_7, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 645 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 644 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 644 "hlds_out_mode.m"
  }
#line 79 "hlds_out_mode.m"
}

#line 77 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_uni_mode_list_7_p_0(
#line 77 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_8,
#line 77 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 77 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 77 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 77 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
#line 77 "hlds_out_mode.m"
{
#line 639 "hlds_out_mode.m"
  {
#line 639 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 640 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 640 "hlds_out_mode.m"
    {
#line 640 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Insts_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 639 "hlds_out_mode.m"
  }
#line 77 "hlds_out_mode.m"
}

#line 74 "hlds_out_mode.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_uni_mode_to_string_5_f_0(
#line 74 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7,
#line 74 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
#line 74 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
#line 74 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
#line 74 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
#line 74 "hlds_out_mode.m"
{
#line 672 "hlds_out_mode.m"
  {
#line 672 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 672 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 673 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 673 "hlds_out_mode.m"
    {
#line 673 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Inst_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 673 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 672 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 672 "hlds_out_mode.m"
  }
#line 74 "hlds_out_mode.m"
}

#line 72 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_uni_mode_7_p_0(
#line 72 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
#line 72 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 72 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 72 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 72 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
#line 72 "hlds_out_mode.m"
{
#line 668 "hlds_out_mode.m"
  {
#line 668 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 668 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 668 "hlds_out_mode.m"
    {
#line 668 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Inst_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 668 "hlds_out_mode.m"
  }
#line 72 "hlds_out_mode.m"
}

#line 67 "hlds_out_mode.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_inst_to_string_5_f_0(
#line 67 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7,
#line 67 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
#line 67 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
#line 67 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
#line 67 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
#line 67 "hlds_out_mode.m"
{
#line 760 "hlds_out_mode.m"
  {
#line 760 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 760 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 761 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 761 "hlds_out_mode.m"
    {
#line 761 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Inst_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 761 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 760 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 760 "hlds_out_mode.m"
  }
#line 67 "hlds_out_mode.m"
}

#line 65 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_7_p_0(
#line 65 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
#line 65 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 65 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 65 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 65 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
#line 65 "hlds_out_mode.m"
{
#line 756 "hlds_out_mode.m"
  {
#line 756 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 756 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_U_15;

#line 756 "hlds_out_mode.m"
    {
#line 756 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Inst_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_U_15);
    }
#line 756 "hlds_out_mode.m"
  }
#line 65 "hlds_out_mode.m"
}

#line 57 "hlds_out_mode.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_inst_list_to_string_5_f_0(
#line 57 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_7,
#line 57 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
#line 57 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
#line 57 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
#line 57 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
#line 57 "hlds_out_mode.m"
{
#line 737 "hlds_out_mode.m"
  {
#line 737 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 737 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 738 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 738 "hlds_out_mode.m"
    {
#line 738 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Insts_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 738 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 737 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 737 "hlds_out_mode.m"
  }
#line 57 "hlds_out_mode.m"
}

#line 55 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_list_7_p_0(
#line 55 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_8,
#line 55 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 55 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 55 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 55 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
#line 55 "hlds_out_mode.m"
{
#line 733 "hlds_out_mode.m"
  {
#line 733 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 733 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 733 "hlds_out_mode.m"
    {
#line 733 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Insts_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 733 "hlds_out_mode.m"
  }
#line 55 "hlds_out_mode.m"
}

#line 44 "hlds_out_mode.m"
MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_f_0(
#line 44 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 44 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_5)
#line 44 "hlds_out_mode.m"
{
#line 396 "hlds_out_mode.m"
  {
#line 396 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 396 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 396 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

#line 397 "hlds_out_mode.m"
    {
#line 397 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_6_6 = mercury__term__context_init_0_f_0();
    }
#line 396 "hlds_out_mode.m"
    {
#line 396 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__V_6_6, hlds__hlds_out__hlds_out_mode__InstName_5);
    }
#line 396 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 396 "hlds_out_mode.m"
  }
#line 44 "hlds_out_mode.m"
}

#line 43 "hlds_out_mode.m"
MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(
#line 43 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 43 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_5)
#line 43 "hlds_out_mode.m"
{
#line 185 "hlds_out_mode.m"
  {
#line 185 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 185 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 185 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

#line 186 "hlds_out_mode.m"
    {
#line 186 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_6_6 = mercury__term__context_init_0_f_0();
    }
#line 185 "hlds_out_mode.m"
    {
#line 185 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__V_6_6, hlds__hlds_out__hlds_out_mode__Inst_5);
    }
#line 185 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 185 "hlds_out_mode.m"
  }
#line 43 "hlds_out_mode.m"
}

#line 181 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0_1(
#line 181 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 181 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 181 "hlds_out_mode.m"
{
#line 181 "hlds_out_mode.m"
  {
#line 181 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 181 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 181 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

#line 181 "hlds_out_mode.m"
    {
#line 181 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 181 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
#line 181 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 181 "hlds_out_mode.m"
  }
#line 181 "hlds_out_mode.m"
}

#line 41 "hlds_out_mode.m"
MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(
#line 41 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 41 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 41 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Mode_7)
#line 41 "hlds_out_mode.m"
{
#line 164 "hlds_out_mode.m"
  {
#line 164 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 164 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_8;

#line 164 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Mode_7)) == (MR_mktag((MR_Integer) 0))))
#line 164 "hlds_out_mode.m"
      {
#line 164 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 0)));
#line 164 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 1)));
#line 168 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_17_17;
#line 168 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode___Uniq_11;
#line 168 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_12_12;

#line 168 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstA_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstA_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 168 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 168 "hlds_out_mode.m"
          {
#line 168 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode___Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstA_9, (MR_Integer) 1)));
#line 168 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstA_9, (MR_Integer) 2)));
#line 168 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 168 "hlds_out_mode.m"
            if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 168 "hlds_out_mode.m"
              {
#line 168 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_12_12 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__V_17_17), (MR_Integer) 1);
#line 169 "hlds_out_mode.m"
                {
#line 169 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__hlds_out__hlds_out_mode__InstB_10, hlds__hlds_out__hlds_out_mode__InstA_9);
                }
#line 168 "hlds_out_mode.m"
              }
#line 168 "hlds_out_mode.m"
          }
#line 172 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 171 "hlds_out_mode.m"
          {
#line 171 "hlds_out_mode.m"
            return hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstA_9);
          }
#line 172 "hlds_out_mode.m"
        else
#line 173 "hlds_out_mode.m"
          {
#line 173 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_19_19;
#line 173 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
#line 173 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
#line 173 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_23_23;

#line 174 "hlds_out_mode.m"
            {
#line 174 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_21_21 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstA_9);
            }
#line 175 "hlds_out_mode.m"
            {
#line 175 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_23_23 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstB_10);
            }
#line 174 "hlds_out_mode.m"
            {
#line 174 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_23_23));
#line 174 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 174 "hlds_out_mode.m"
            }
#line 173 "hlds_out_mode.m"
            {
#line 173 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_19_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_21_21));
#line 173 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_22_22));
#line 173 "hlds_out_mode.m"
            }
#line 173 "hlds_out_mode.m"
            {
#line 173 "hlds_out_mode.m"
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[0], hlds__hlds_out__hlds_out_mode__V_19_19, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
            }
#line 173 "hlds_out_mode.m"
          }
#line 164 "hlds_out_mode.m"
      }
#line 164 "hlds_out_mode.m"
    else
#line 179 "hlds_out_mode.m"
      {
#line 179 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 0)));
#line 179 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 1)));
#line 179 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_15_15;
#line 179 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_16_16;

#line 181 "hlds_out_mode.m"
        {
#line 181 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 181 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 181 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0_1));
#line 181 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 181 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
#line 181 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 181 "hlds_out_mode.m"
        }
#line 180 "hlds_out_mode.m"
        {
#line 180 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_15_15 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_16_16, hlds__hlds_out__hlds_out_mode__Args_14);
        }
#line 180 "hlds_out_mode.m"
        {
#line 180 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__Name_13, hlds__hlds_out__hlds_out_mode__V_15_15, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
#line 179 "hlds_out_mode.m"
      }
#line 164 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_8;
#line 164 "hlds_out_mode.m"
  }
#line 41 "hlds_out_mode.m"
}

#line 40 "hlds_out_mode.m"
MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__mode_to_term_2_f_0(
#line 40 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 40 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Mode_5)
#line 40 "hlds_out_mode.m"
{
#line 159 "hlds_out_mode.m"
  {
#line 159 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 159 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 159 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

#line 160 "hlds_out_mode.m"
    {
#line 160 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_6_6 = mercury__term__context_init_0_f_0();
    }
#line 159 "hlds_out_mode.m"
    {
#line 159 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__V_6_6, hlds__hlds_out__hlds_out_mode__Mode_5);
    }
#line 159 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 159 "hlds_out_mode.m"
  }
#line 40 "hlds_out_mode.m"
}

#line 33 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_p_0(
#line 33 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 33 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__VarSet_2,
#line 33 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__AppendVarNums_3,
#line 33 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_4)
#line 33 "hlds_out_mode.m"
{
#line 142 "hlds_out_mode.m"
  while (MR_TRUE)
#line 142 "hlds_out_mode.m"
    {
#line 142 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 142 "hlds_out_mode.m"
      {
#line 142 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 142 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 142 "hlds_out_mode.m"
          {
#line 142 "hlds_out_mode.m"
          }
#line 142 "hlds_out_mode.m"
        else
#line 143 "hlds_out_mode.m"
          {
#line 143 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Var_13;
#line 143 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_14;
#line 143 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Rest_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 143 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_20;
#line 143 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));

#line 143 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 0)));
#line 143 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Inst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 1)));
#line 144 "hlds_out_mode.m"
            {
#line 144 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__VarSet_2, hlds__hlds_out__hlds_out_mode__AppendVarNums_3, hlds__hlds_out__hlds_out_mode__Var_13);
            }
#line 145 "hlds_out_mode.m"
            {
#line 145 "hlds_out_mode.m"
              mercury__io__write_string_3_p_0((MR_String) " -> ");
            }
#line 146 "hlds_out_mode.m"
            {
#line 146 "hlds_out_mode.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_mode__InstVarSet_20);
            }
#line 147 "hlds_out_mode.m"
            {
#line 147 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_output_inst_4_p_0(hlds__hlds_out__hlds_out_mode__Inst_14, hlds__hlds_out__hlds_out_mode__InstVarSet_20);
            }
#line 150 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Rest_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 149 "hlds_out_mode.m"
              {
#line 149 "hlds_out_mode.m"
              }
#line 150 "hlds_out_mode.m"
            else
#line 151 "hlds_out_mode.m"
              {
#line 152 "hlds_out_mode.m"
                {
#line 152 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(hlds__hlds_out__hlds_out_mode__Indent_4);
                }
#line 153 "hlds_out_mode.m"
                {
#line 153 "hlds_out_mode.m"
                  mercury__io__write_string_3_p_0((MR_String) "%            ");
                }
#line 154 "hlds_out_mode.m"
                /* direct tailcall eliminated */
#line 154 "hlds_out_mode.m"
                {
#line 154 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Rest_15;

#line 154 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 154 "hlds_out_mode.m"
                }
#line 154 "hlds_out_mode.m"
                continue;
#line 151 "hlds_out_mode.m"
              }
#line 143 "hlds_out_mode.m"
          }
#line 142 "hlds_out_mode.m"
      }
#line 142 "hlds_out_mode.m"
      break;
#line 142 "hlds_out_mode.m"
    }
#line 33 "hlds_out_mode.m"
}

#line 30 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__write_instmap_6_p_0(
#line 30 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstMap_7,
#line 30 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__VarSet_8,
#line 30 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__AppendVarNums_9,
#line 30 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_10)
#line 30 "hlds_out_mode.m"
{
#line 137 "hlds_out_mode.m"
  {
#line 137 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 135 "hlds_out_mode.m"
    {
#line 135 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(hlds__hlds_out__hlds_out_mode__InstMap_7);
    }
#line 137 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 136 "hlds_out_mode.m"
      {
#line 136 "hlds_out_mode.m"
        {
#line 136 "hlds_out_mode.m"
          mercury__io__write_string_3_p_0((MR_String) "unreachable");
#line 136 "hlds_out_mode.m"
          return;
        }
#line 136 "hlds_out_mode.m"
      }
#line 137 "hlds_out_mode.m"
    else
#line 138 "hlds_out_mode.m"
      {
#line 138 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__AssocList_12;

#line 138 "hlds_out_mode.m"
        {
#line 138 "hlds_out_mode.m"
          hlds__instmap__instmap_to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_mode__InstMap_7, &hlds__hlds_out__hlds_out_mode__AssocList_12);
        }
#line 139 "hlds_out_mode.m"
        {
#line 139 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_p_0(hlds__hlds_out__hlds_out_mode__AssocList_12, hlds__hlds_out__hlds_out_mode__VarSet_8, hlds__hlds_out__hlds_out_mode__AppendVarNums_9, hlds__hlds_out__hlds_out_mode__Indent_10);
#line 139 "hlds_out_mode.m"
          return;
        }
#line 138 "hlds_out_mode.m"
      }
#line 137 "hlds_out_mode.m"
  }
#line 30 "hlds_out_mode.m"
}

void mercury__hlds__hlds_out__hlds_out_mode__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_mode__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__type_ctor_info_expanded_inst_info_0);
	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__type_ctor_info_incl_addr_0);
}

void mercury__hlds__hlds_out__hlds_out_mode__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_out.hlds_out_mode. */
