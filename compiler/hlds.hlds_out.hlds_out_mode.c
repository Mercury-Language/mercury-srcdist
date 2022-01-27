/*
** Automatically generated from `hlds_out_mode.m'
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




#line 151 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 157 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 166 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 169 "hlds.hlds_out.hlds_out_mode.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_types_expanded_inst_info_0_0[3];

#line 172 "hlds.hlds_out.hlds_out_mode.c"
static const MR_ConstString hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_names_expanded_inst_info_0_0[3];

#line 175 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0;

#line 178 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0[1];

#line 181 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_ptag_ordered_expanded_inst_info_0[1];

#line 184 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_name_ordered_expanded_inst_info_0[1];

#line 187 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_expanded_inst_info_0[1];

#line 190 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0;

#line 193 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1;

#line 196 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2];

#line 199 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2];

#line 202 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2];

#line 205 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0_10001(
#line 208 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 210 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

#line 213 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0_10001(
#line 216 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 218 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 220 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3);

#line 223 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
#line 226 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 228 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

#line 231 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
#line 234 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 236 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 238 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3);

#line 241 "hlds.hlds_out.hlds_out_mode.c"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__parse_tree_out_inst__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__parse_tree_out_inst__instvarset_1_1_f_0_10001(
#line 244 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 246 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 249 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__parse_tree_out_inst__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__parse_tree_out_inst__format_defined_inst_5_5_p_0_10001(
#line 252 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 254 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 256 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 258 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3,
#line 260 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_4,
#line 262 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_5,
#line 264 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_6);

#line 430 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 430 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 430 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 436 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 436 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 436 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 421 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 421 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 421 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 421 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9);

#line 406 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 406 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 406 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 412 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 412 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 412 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 397 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 397 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 397 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 397 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9);

#line 691 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__691__1_2_p_0(
#line 691 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 691 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_57);

#line 683 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__683__1_2_p_0(
#line 683 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 683 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_67);

#line 699 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__699__1_2_p_0(
#line 699 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 699 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_45);

#line 247 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__247__1_3_f_0(
#line 247 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 247 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__LambdaHeadVar__1_28,
#line 247 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__LambdaHeadVar__2_29);

#line 1208 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__parse_tree_out_inst__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__parse_tree_out_inst__format_defined_inst_5_5_p_0(
#line 1208 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_6,
#line 1208 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1208 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1208 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3,
#line 1208 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__HeadVar__4_4,
#line 1208 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__HeadVar__5_5);

#line 1207 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__parse_tree_out_inst__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__parse_tree_out_inst__instvarset_1_1_f_0(
#line 1207 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

#line 1211 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0(
#line 1211 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1211 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1211 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3);

#line 1211 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0(
#line 1211 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1211 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2);

#line 1142 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0(
#line 1142 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21,
#line 1142 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1142 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1142 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3,
#line 1142 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4);

#line 1026 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(
#line 1026 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168,
#line 1026 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__Suffix_10,
#line 1026 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_11,
#line 1026 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_12,
#line 1026 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_13,
#line 1026 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_14,
#line 1026 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_15,
#line 1026 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_16,
#line 1026 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_31,
#line 1026 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);

#line 1013 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
#line 1013 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_1,
#line 1013 "hlds_out_mode.m"
  MR_Integer * hlds__hlds_out__hlds_out_mode__InstAddr_2);

#line 978 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
#line 978 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 978 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 978 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent0_2,
#line 978 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 978 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 978 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 978 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 978 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7);

#line 874 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(
#line 874 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108,
#line 874 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__Suffix_9,
#line 874 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_10,
#line 874 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_11,
#line 874 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_12,
#line 874 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_13,
#line 874 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_14,
#line 874 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_32,
#line 874 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);

#line 844 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
#line 844 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_29,
#line 844 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 844 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_2,
#line 844 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 844 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 844 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 844 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 844 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7);

#line 779 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(
#line 779 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56,
#line 779 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_8,
#line 779 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 779 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 779 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 779 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 779 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22,
#line 779 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);

#line 751 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0(
#line 751 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37,
#line 751 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 751 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum_2,
#line 751 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
#line 751 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 751 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_5,
#line 751 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6,
#line 751 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7,
#line 751 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8);

#line 691 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3(
#line 691 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

#line 683 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2(
#line 683 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

#line 699 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1(
#line 699 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

#line 620 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(
#line 620 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ConsId_4,
#line 620 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 620 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__Term_6);

#line 607 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1(
#line 607 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 607 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 602 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(
#line 602 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 602 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 602 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_8,
#line 602 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_9);

#line 592 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(
#line 592 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_1,
#line 592 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_2,
#line 592 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3);

#line 584 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(
#line 584 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 584 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__SharedName_2);

#line 571 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(
#line 571 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

#line 566 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(
#line 566 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

#line 455 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2(
#line 455 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 455 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 479 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1(
#line 479 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 479 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 448 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(
#line 448 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 448 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 448 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_7);

#line 389 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(
#line 389 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 389 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_5);

#line 376 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_type_ctor_propagated_to_term_2_f_0(
#line 376 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 376 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PropagatedResult_5);

#line 371 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0_1(
#line 371 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 371 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 361 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0(
#line 361 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 361 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ContainsTypes_5);

#line 354 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_var_to_term_2_f_0(
#line 354 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 354 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVar_5);

#line 349 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1(
#line 349 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 349 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 264 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(
#line 264 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 264 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstResults_5);

#line 247 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0_1(
#line 247 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 247 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 247 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

#line 196 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(
#line 196 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 196 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 196 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7);

#line 134 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(
#line 134 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 134 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__Name_5);

#line 189 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0_1(
#line 189 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 189 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[18][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_2[38][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_3[3][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_5[2][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_6[1][5];


#line 578 "hlds_out_mode.m"
/* sealed */ struct hlds__hlds_out__hlds_out_mode__vector_common_type_4_0_s {
#line 578 "hlds_out_mode.m"
  const MR_String hlds__hlds_out__hlds_out_mode__vector_common_type_4_0__vct_4_f_0;
#line 578 "hlds_out_mode.m"
};

static /* final */ const struct hlds__hlds_out__hlds_out_mode__vector_common_type_4_0_s hlds__hlds_out__hlds_out_mode_vector_common_4[21];



static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[18][2] = {
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
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_inst__inst_info__arity1__hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0__)),
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
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_inst__inst_info__arity1__parse_tree__parse_tree_out_inst__simple_inst_info__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_inst__parse_tree__parse_tree_out_inst__type_ctor_info_simple_inst_info_0))
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
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "base_typeclass_info_const"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "closure_cons"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "deep_profiling_proc_layout"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "ground_term_const"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "table_io_entry_desc"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "tabling_info_const"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "type_info_const"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "typeclass_info_cell_constructor"))
  },
  /* row 17 */
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



#line 1109 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1117 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1125 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1133 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1141 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1149 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 1157 "hlds.hlds_out.hlds_out_mode.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_types_expanded_inst_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0
};

#line 1164 "hlds.hlds_out.hlds_out_mode.c"
static const MR_ConstString hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_names_expanded_inst_info_0_0[3] = {
  (MR_String) "eii_varset",
  (MR_String) "eii_module_info",
  (MR_String) "eii_expansions"
};

#line 1171 "hlds.hlds_out.hlds_out_mode.c"
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

#line 1186 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0[1] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0
};

#line 1191 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_ptag_ordered_expanded_inst_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0
  }
};

#line 1200 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_name_ordered_expanded_inst_info_0[1] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0
};

#line 1205 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_expanded_inst_info_0[1] = {
  (MR_Integer) 0
};

#line 1210 "hlds.hlds_out.hlds_out_mode.c"
const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__type_ctor_info_expanded_inst_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_mode",
  (MR_String) "expanded_inst_info",
  {     hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_name_ordered_expanded_inst_info_0 },
  {     hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_ptag_ordered_expanded_inst_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_expanded_inst_info_0
};

#line 1227 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0 = {
  (MR_String) "do_not_incl_addr",
  (MR_Integer) 0
};

#line 1233 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1 = {
  (MR_String) "do_incl_addr",
  (MR_Integer) 1
};

#line 1239 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1
};

#line 1245 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0
};

#line 1251 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1257 "hlds.hlds_out.hlds_out_mode.c"
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

#line 1274 "hlds.hlds_out.hlds_out_mode.c"
const MR_BaseTypeclassInfo base_typeclass_info_parse_tree__parse_tree_out_inst__inst_info__arity1__hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__parse_tree_out_inst__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__parse_tree_out_inst__instvarset_1_1_f_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__parse_tree_out_inst__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__parse_tree_out_inst__format_defined_inst_5_5_p_0_10001))
};

#line 1285 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0_10001(
#line 1288 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1290 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
#line 1292 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1294 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1296 "hlds.hlds_out.hlds_out_mode.c"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1299 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1301 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
#line 1304 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 1306 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1308 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1311 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0_10001(
#line 1314 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1316 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 1318 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3)
#line 1320 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1322 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1324 "hlds.hlds_out.hlds_out_mode.c"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1;

#line 1327 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1329 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0(&hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3));
    }
#line 1332 "hlds.hlds_out.hlds_out_mode.c"
    *hlds__hlds_out__hlds_out_mode__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1));
#line 1334 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1336 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1339 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
#line 1342 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1344 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
#line 1346 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1348 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1350 "hlds.hlds_out.hlds_out_mode.c"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1353 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1355 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
#line 1358 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 1360 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1362 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1365 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
#line 1368 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1370 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 1372 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3)
#line 1374 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1376 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1378 "hlds.hlds_out.hlds_out_mode.c"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1;

#line 1381 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1383 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0(&hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3));
    }
#line 1386 "hlds.hlds_out.hlds_out_mode.c"
    *hlds__hlds_out__hlds_out_mode__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1));
#line 1388 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1390 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1393 "hlds.hlds_out.hlds_out_mode.c"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__parse_tree_out_inst__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__parse_tree_out_inst__instvarset_1_1_f_0_10001(
#line 1396 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 1398 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 1400 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1402 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1404 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 1406 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__closure;
#line 1408 "hlds.hlds_out.hlds_out_mode.c"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__2_2;

#line 1411 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 1413 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1415 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__conv0_HeadVar__2_2 = hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__parse_tree_out_inst__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__parse_tree_out_inst__instvarset_1_1_f_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 1418 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__2_2));
#line 1420 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 1422 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1424 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1427 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__parse_tree_out_inst__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__parse_tree_out_inst__format_defined_inst_5_5_p_0_10001(
#line 1430 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 1432 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1434 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 1436 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3,
#line 1438 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_4,
#line 1440 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_5,
#line 1442 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_6)
#line 1444 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1446 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1448 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__closure;

#line 1451 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 1453 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1455 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__parse_tree_out_inst__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__parse_tree_out_inst__format_defined_inst_5_5_p_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_4), hlds__hlds_out__hlds_out_mode__wrapper_arg_5, hlds__hlds_out__hlds_out_mode__wrapper_arg_6);
    }
#line 1458 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1460 "hlds.hlds_out.hlds_out_mode.c"
}

#line 430 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 430 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 430 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 430 "hlds_out_mode.m"
{
#line 430 "hlds_out_mode.m"
  {
#line 430 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 430 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 430 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv2_Term_8;

#line 430 "hlds_out_mode.m"
    {
#line 430 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv2_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 430 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv2_Term_8));
#line 430 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 430 "hlds_out_mode.m"
  }
#line 430 "hlds_out_mode.m"
}

#line 436 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 436 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 436 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 436 "hlds_out_mode.m"
{
#line 436 "hlds_out_mode.m"
  {
#line 436 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 436 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 436 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 436 "hlds_out_mode.m"
    {
#line 436 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 436 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
#line 436 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 436 "hlds_out_mode.m"
  }
#line 436 "hlds_out_mode.m"
}

#line 421 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 421 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 421 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 421 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9)
#line 421 "hlds_out_mode.m"
{
#line 424 "hlds_out_mode.m"
  {
#line 424 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 424 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
#line 424 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 0)));
#line 424 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 1)));
#line 424 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 3)));
#line 424 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ModesTerm_15;
#line 424 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 424 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
#line 424 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;
#line 424 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_52_52;
#line 424 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;
#line 426 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 2)));

#line 432 "hlds_out_mode.m"
#line 432 "hlds_out_mode.m"
    switch (hlds__hlds_out__hlds_out_mode__PredOrFunc_11) {
#line 432 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 432 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 433 "hlds_out_mode.m"
        {
#line 433 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 433 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48;
#line 433 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__ArgModes_16;
#line 433 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__RetMode_17;
#line 433 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__ArgModesTerm_18;
#line 433 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 433 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
#line 433 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 433 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;
#line 433 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 434 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__conv0_RetMode_17;

#line 434 "hlds_out_mode.m"
          {
#line 434 "hlds_out_mode.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_mode__Modes_12, &hlds__hlds_out__hlds_out_mode__ArgModes_16, &hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
          }
#line 434 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__RetMode_17 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
#line 436 "hlds_out_mode.m"
          {
#line 436 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 436 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 436 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
#line 436 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 436 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 436 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 436 "hlds_out_mode.m"
          }
#line 436 "hlds_out_mode.m"
          {
#line 436 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_20_20 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_22_22, hlds__hlds_out__hlds_out_mode__ArgModes_16);
          }
#line 1625 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 435 "hlds_out_mode.m"
          {
#line 435 "hlds_out_mode.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[36], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ArgModesTerm_18);
          }
#line 439 "hlds_out_mode.m"
          {
#line 439 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_27_27 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__RetMode_17);
          }
#line 439 "hlds_out_mode.m"
          {
#line 439 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
#line 439 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "hlds_out_mode.m"
          }
#line 439 "hlds_out_mode.m"
          {
#line 439 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgModesTerm_18));
#line 439 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_26_26));
#line 439 "hlds_out_mode.m"
          }
#line 438 "hlds_out_mode.m"
          {
#line 438 "hlds_out_mode.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[33], hlds__hlds_out__hlds_out_mode__V_24_24, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
          }
#line 433 "hlds_out_mode.m"
        }
#line 432 "hlds_out_mode.m"
        break;
#line 432 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 428 "hlds_out_mode.m"
        {
#line 428 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 428 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

#line 430 "hlds_out_mode.m"
          {
#line 430 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 430 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 430 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
#line 430 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 430 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 430 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 430 "hlds_out_mode.m"
          }
#line 430 "hlds_out_mode.m"
          {
#line 430 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_30_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_32_32, hlds__hlds_out__hlds_out_mode__Modes_12);
          }
#line 429 "hlds_out_mode.m"
          {
#line 429 "hlds_out_mode.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[37], hlds__hlds_out__hlds_out_mode__V_30_30, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
          }
#line 428 "hlds_out_mode.m"
        }
#line 432 "hlds_out_mode.m"
        break;
#line 432 "hlds_out_mode.m"
    }
#line 730 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__V_52_52 = ((&hlds__hlds_out__hlds_out_mode_vector_common_4[13 + hlds__hlds_out__hlds_out_mode__Det_14]))->hlds__hlds_out__hlds_out_mode__vector_common_type_4_0__vct_4_f_0;
#line 137 "hlds_out_mode.m"
    {
#line 137 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 137 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_52_52));
#line 137 "hlds_out_mode.m"
    }
#line 137 "hlds_out_mode.m"
    {
#line 137 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 137 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
#line 137 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 137 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 137 "hlds_out_mode.m"
    }
#line 443 "hlds_out_mode.m"
    {
#line 443 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
#line 443 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "hlds_out_mode.m"
    }
#line 443 "hlds_out_mode.m"
    {
#line 443 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModesTerm_15));
#line 443 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
#line 443 "hlds_out_mode.m"
    }
#line 442 "hlds_out_mode.m"
    {
#line 442 "hlds_out_mode.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[35], hlds__hlds_out__hlds_out_mode__V_34_34, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
    }
#line 424 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_10;
#line 424 "hlds_out_mode.m"
  }
#line 421 "hlds_out_mode.m"
}

#line 406 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
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
      hlds__hlds_out__hlds_out_mode__conv2_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 406 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv2_Term_8));
#line 406 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 406 "hlds_out_mode.m"
  }
#line 406 "hlds_out_mode.m"
}

#line 412 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 412 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 412 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 412 "hlds_out_mode.m"
{
#line 412 "hlds_out_mode.m"
  {
#line 412 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 412 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 412 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 412 "hlds_out_mode.m"
    {
#line 412 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 412 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
#line 412 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 412 "hlds_out_mode.m"
  }
#line 412 "hlds_out_mode.m"
}

#line 397 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 397 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 397 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 397 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9)
#line 397 "hlds_out_mode.m"
{
#line 400 "hlds_out_mode.m"
  {
#line 400 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 400 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
#line 400 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 0)));
#line 400 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 1)));
#line 400 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 3)));
#line 400 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ModesTerm_15;
#line 400 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 400 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
#line 400 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;
#line 400 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_52_52;
#line 400 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;
#line 402 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 2)));

#line 408 "hlds_out_mode.m"
#line 408 "hlds_out_mode.m"
    switch (hlds__hlds_out__hlds_out_mode__PredOrFunc_11) {
#line 408 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 408 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 409 "hlds_out_mode.m"
        {
#line 409 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 409 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48;
#line 409 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__ArgModes_16;
#line 409 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__RetMode_17;
#line 409 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__ArgModesTerm_18;
#line 409 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 409 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
#line 409 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 409 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;
#line 409 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 410 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__conv0_RetMode_17;

#line 410 "hlds_out_mode.m"
          {
#line 410 "hlds_out_mode.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_mode__Modes_12, &hlds__hlds_out__hlds_out_mode__ArgModes_16, &hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
          }
#line 410 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__RetMode_17 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
#line 412 "hlds_out_mode.m"
          {
#line 412 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 412 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 412 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
#line 412 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 412 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 412 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 412 "hlds_out_mode.m"
          }
#line 412 "hlds_out_mode.m"
          {
#line 412 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_20_20 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_22_22, hlds__hlds_out__hlds_out_mode__ArgModes_16);
          }
#line 1923 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 411 "hlds_out_mode.m"
          {
#line 411 "hlds_out_mode.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[32], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ArgModesTerm_18);
          }
#line 415 "hlds_out_mode.m"
          {
#line 415 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_27_27 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__RetMode_17);
          }
#line 415 "hlds_out_mode.m"
          {
#line 415 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
#line 415 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "hlds_out_mode.m"
          }
#line 415 "hlds_out_mode.m"
          {
#line 415 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgModesTerm_18));
#line 415 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_26_26));
#line 415 "hlds_out_mode.m"
          }
#line 414 "hlds_out_mode.m"
          {
#line 414 "hlds_out_mode.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[33], hlds__hlds_out__hlds_out_mode__V_24_24, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
          }
#line 409 "hlds_out_mode.m"
        }
#line 408 "hlds_out_mode.m"
        break;
#line 408 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 404 "hlds_out_mode.m"
        {
#line 404 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 404 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

#line 406 "hlds_out_mode.m"
          {
#line 406 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 406 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 406 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
#line 406 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 406 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 406 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 406 "hlds_out_mode.m"
          }
#line 406 "hlds_out_mode.m"
          {
#line 406 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_30_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_32_32, hlds__hlds_out__hlds_out_mode__Modes_12);
          }
#line 405 "hlds_out_mode.m"
          {
#line 405 "hlds_out_mode.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[34], hlds__hlds_out__hlds_out_mode__V_30_30, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
          }
#line 404 "hlds_out_mode.m"
        }
#line 408 "hlds_out_mode.m"
        break;
#line 408 "hlds_out_mode.m"
    }
#line 730 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__V_52_52 = ((&hlds__hlds_out__hlds_out_mode_vector_common_4[5 + hlds__hlds_out__hlds_out_mode__Det_14]))->hlds__hlds_out__hlds_out_mode__vector_common_type_4_0__vct_4_f_0;
#line 137 "hlds_out_mode.m"
    {
#line 137 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 137 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_52_52));
#line 137 "hlds_out_mode.m"
    }
#line 137 "hlds_out_mode.m"
    {
#line 137 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 137 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
#line 137 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 137 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 137 "hlds_out_mode.m"
    }
#line 419 "hlds_out_mode.m"
    {
#line 419 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
#line 419 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 419 "hlds_out_mode.m"
    }
#line 419 "hlds_out_mode.m"
    {
#line 419 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModesTerm_15));
#line 419 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
#line 419 "hlds_out_mode.m"
    }
#line 418 "hlds_out_mode.m"
    {
#line 418 "hlds_out_mode.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[35], hlds__hlds_out__hlds_out_mode__V_34_34, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
    }
#line 400 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_10;
#line 400 "hlds_out_mode.m"
  }
#line 397 "hlds_out_mode.m"
}

#line 691 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__691__1_2_p_0(
#line 691 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 691 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_57)
#line 691 "hlds_out_mode.m"
{
#line 691 "hlds_out_mode.m"
  {
#line 691 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 691 "hlds_out_mode.m"
    {
#line 691 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[5], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_57)));
    }
#line 691 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 691 "hlds_out_mode.m"
  }
#line 691 "hlds_out_mode.m"
}

#line 683 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__683__1_2_p_0(
#line 683 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 683 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_67)
#line 683 "hlds_out_mode.m"
{
#line 683 "hlds_out_mode.m"
  {
#line 683 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 683 "hlds_out_mode.m"
    {
#line 683 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[5], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_67)));
    }
#line 683 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 683 "hlds_out_mode.m"
  }
#line 683 "hlds_out_mode.m"
}

#line 699 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__699__1_2_p_0(
#line 699 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 699 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_45)
#line 699 "hlds_out_mode.m"
{
#line 699 "hlds_out_mode.m"
  {
#line 699 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 699 "hlds_out_mode.m"
    {
#line 699 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[5], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_45)));
    }
#line 699 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 699 "hlds_out_mode.m"
  }
#line 699 "hlds_out_mode.m"
}

#line 247 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__247__1_3_f_0(
#line 247 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 247 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__LambdaHeadVar__1_28,
#line 247 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__LambdaHeadVar__2_29)
#line 247 "hlds_out_mode.m"
{
#line 247 "hlds_out_mode.m"
  {
#line 247 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 247 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__LambdaHeadVar__3_30;
#line 247 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_33_33;
#line 247 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 247 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_35_35;
#line 247 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
#line 247 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;

#line 249 "hlds_out_mode.m"
    {
#line 249 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_36_36 = mercury__term__context_init_0_f_0();
    }
#line 249 "hlds_out_mode.m"
    {
#line 249 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_35_35, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__LambdaHeadVar__1_28));
#line 249 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_35_35, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
#line 249 "hlds_out_mode.m"
    }
#line 249 "hlds_out_mode.m"
    {
#line 249 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_34_34 = mercury__term__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__V_35_35);
    }
#line 249 "hlds_out_mode.m"
    {
#line 249 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__LambdaHeadVar__2_29));
#line 249 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 249 "hlds_out_mode.m"
    }
#line 249 "hlds_out_mode.m"
    {
#line 249 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34));
#line 249 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
#line 249 "hlds_out_mode.m"
    }
#line 248 "hlds_out_mode.m"
    {
#line 248 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__LambdaHeadVar__3_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 248 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__LambdaHeadVar__3_30, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[31]));
#line 248 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__LambdaHeadVar__3_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_33_33));
#line 248 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__LambdaHeadVar__3_30, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 248 "hlds_out_mode.m"
    }
#line 247 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__LambdaHeadVar__3_30;
#line 247 "hlds_out_mode.m"
  }
#line 247 "hlds_out_mode.m"
}

#line 1208 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__parse_tree_out_inst__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__parse_tree_out_inst__format_defined_inst_5_5_p_0(
#line 1208 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_6,
#line 1208 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1208 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1208 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3,
#line 1208 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__HeadVar__4_4,
#line 1208 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__HeadVar__5_5)
#line 1208 "hlds_out_mode.m"
{
#line 1191 "hlds_out_mode.m"
  {
#line 1191 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1189 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1189 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1189 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));

#line 1189 "hlds_out_mode.m"
    {
#line 1189 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__3_3)), hlds__hlds_out__hlds_out_mode__V_19_19);
    }
#line 1191 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1190 "hlds_out_mode.m"
      {
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "...")), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, hlds__hlds_out__hlds_out_mode__HeadVar__5_5);
        }
#line 1190 "hlds_out_mode.m"
      }
#line 1191 "hlds_out_mode.m"
    else
#line 1196 "hlds_out_mode.m"
      {
#line 1191 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_13_13;
#line 1191 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_14_14;

#line 1191 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0)));
#line 1191 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1191 "hlds_out_mode.m"
          {
#line 1191 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 1191 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 1)));
#line 1195 "hlds_out_mode.m"
            {
#line 1195 "hlds_out_mode.m"
              parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_6, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__HeadVar__1_1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_2)), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, hlds__hlds_out__hlds_out_mode__HeadVar__4_4, hlds__hlds_out__hlds_out_mode__HeadVar__5_5);
            }
#line 1191 "hlds_out_mode.m"
          }
#line 1191 "hlds_out_mode.m"
        else
#line 1197 "hlds_out_mode.m"
          {
#line 1197 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_15;
#line 1197 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Expansions0_16;
#line 1197 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Expansions_17;
#line 1197 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_18;
#line 1197 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1197 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1197 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1198 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_29_29;
#line 1198 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 1200 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_31_31;
#line 1200 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;
#line 1200 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_33_33;

#line 1197 "hlds_out_mode.m"
            {
#line 1197 "hlds_out_mode.m"
              check_hlds__mode_util__inst_lookup_3_p_0(hlds__hlds_out__hlds_out_mode__V_23_23, hlds__hlds_out__hlds_out_mode__HeadVar__3_3, &hlds__hlds_out__hlds_out_mode__Inst_15);
            }
#line 1198 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1198 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1198 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Expansions0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1199 "hlds_out_mode.m"
            {
#line 1199 "hlds_out_mode.m"
              mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__3_3)), hlds__hlds_out__hlds_out_mode__Expansions0_16, &hlds__hlds_out__hlds_out_mode__Expansions_17);
            }
#line 1200 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1200 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1200 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1200 "hlds_out_mode.m"
            {
#line 1200 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1200 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_18, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_31_31));
#line 1200 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_18, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_32_32));
#line 1200 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_18, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Expansions_17));
#line 1200 "hlds_out_mode.m"
            }
#line 1201 "hlds_out_mode.m"
            {
#line 1201 "hlds_out_mode.m"
              parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_6, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__HeadVar__1_1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_18)), hlds__hlds_out__hlds_out_mode__Inst_15, hlds__hlds_out__hlds_out_mode__HeadVar__4_4, hlds__hlds_out__hlds_out_mode__HeadVar__5_5);
            }
#line 1197 "hlds_out_mode.m"
          }
#line 1196 "hlds_out_mode.m"
      }
#line 1191 "hlds_out_mode.m"
  }
#line 1208 "hlds_out_mode.m"
}

#line 1207 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__parse_tree_out_inst__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__parse_tree_out_inst__instvarset_1_1_f_0(
#line 1207 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
#line 1207 "hlds_out_mode.m"
{
#line 1207 "hlds_out_mode.m"
  {
#line 1207 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1207 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1207 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1207 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 2)));

#line 1207 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 1207 "hlds_out_mode.m"
  }
#line 1207 "hlds_out_mode.m"
}

#line 49 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0(
#line 49 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 49 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 49 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3)
#line 49 "hlds_out_mode.m"
{
#line 49 "hlds_out_mode.m"
  {
#line 49 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 49 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 49 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__3_3;

#line 49 "hlds_out_mode.m"
    {
#line 49 "hlds_out_mode.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_out__hlds_out_mode__HeadVar__1_1, hlds__hlds_out__hlds_out_mode__Cast_HeadVar1_4, hlds__hlds_out__hlds_out_mode__Cast_HeadVar2_5);
    }
#line 49 "hlds_out_mode.m"
  }
#line 49 "hlds_out_mode.m"
}

#line 49 "hlds_out_mode.m"
MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0(
#line 49 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_1,
#line 49 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2)
#line 49 "hlds_out_mode.m"
{
#line 2438 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 2440 "hlds.hlds_out.hlds_out_mode.c"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__HeadVar__2_1 == hlds__hlds_out__hlds_out_mode__HeadVar__2_2);

#line 2443 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 2445 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 49 "hlds_out_mode.m"
}

#line 1211 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0(
#line 1211 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1211 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1211 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3)
#line 1211 "hlds_out_mode.m"
{
#line 1211 "hlds_out_mode.m"
  {
#line 1211 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1211 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastX_12 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 1211 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastY_13 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__3_3;

#line 1211 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__CastX_12 == hlds__hlds_out__hlds_out_mode__CastY_13);
#line 1211 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 2474 "hlds.hlds_out.hlds_out_mode.c"
      *hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 1211 "hlds_out_mode.m"
    else
#line 1211 "hlds_out_mode.m"
      {
#line 1211 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1211 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1211 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1211 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 1211 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 1)));
#line 1211 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 2)));
#line 1211 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;

#line 1211 "hlds_out_mode.m"
        {
#line 1211 "hlds_out_mode.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[7], &hlds__hlds_out__hlds_out_mode__V_10_10, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_4_4)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_7_7)));
        }
#line 2500 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__V_10_10 == (MR_Integer) 0);
#line 1211 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = !(hlds__hlds_out__hlds_out_mode__succeeded);
#line 1211 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1211 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__V_10_10;
#line 1211 "hlds_out_mode.m"
        else
#line 1211 "hlds_out_mode.m"
          {
#line 1211 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_11_11;

#line 1211 "hlds_out_mode.m"
            {
#line 1211 "hlds_out_mode.m"
              hlds__hlds_module____Compare____module_info_0_0(&hlds__hlds_out__hlds_out_mode__V_11_11, hlds__hlds_out__hlds_out_mode__V_5_5, hlds__hlds_out__hlds_out_mode__V_8_8);
            }
#line 2520 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__V_11_11 == (MR_Integer) 0);
#line 1211 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__succeeded = !(hlds__hlds_out__hlds_out_mode__succeeded);
#line 1211 "hlds_out_mode.m"
            if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1211 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__V_11_11;
#line 1211 "hlds_out_mode.m"
            else
#line 1211 "hlds_out_mode.m"
              {
#line 1211 "hlds_out_mode.m"
                {
#line 1211 "hlds_out_mode.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[8], hlds__hlds_out__hlds_out_mode__HeadVar__1_1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_9_9)));
                }
#line 1211 "hlds_out_mode.m"
              }
#line 1211 "hlds_out_mode.m"
          }
#line 1211 "hlds_out_mode.m"
      }
#line 1211 "hlds_out_mode.m"
  }
#line 1211 "hlds_out_mode.m"
}

#line 1211 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0(
#line 1211 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1211 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2)
#line 1211 "hlds_out_mode.m"
{
#line 1211 "hlds_out_mode.m"
  {
#line 1211 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1211 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastX_9 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__1_1;
#line 1211 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastY_10 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

#line 1211 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__CastX_9 == hlds__hlds_out__hlds_out_mode__CastY_10);
#line 1211 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1211 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = MR_TRUE;
#line 1211 "hlds_out_mode.m"
    else
#line 1211 "hlds_out_mode.m"
      {
#line 1211 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeInfo_13_13;
#line 1211 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1211 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1211 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 2)));
#line 1211 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1211 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1211 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));

#line 2591 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 2593 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[7], ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_3_3)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_6_6)));
        }
#line 1211 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1211 "hlds_out_mode.m"
          {
#line 2600 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 2602 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__hlds_out__hlds_out_mode__V_4_4, hlds__hlds_out__hlds_out_mode__V_7_7);
            }
#line 1211 "hlds_out_mode.m"
            if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1211 "hlds_out_mode.m"
              {
#line 2609 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__TypeInfo_13_13 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[8];
#line 2611 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 2613 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_mode__TypeInfo_13_13, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_5_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_8_8)));
                }
#line 1211 "hlds_out_mode.m"
              }
#line 1211 "hlds_out_mode.m"
          }
#line 1211 "hlds_out_mode.m"
      }
#line 1211 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 1211 "hlds_out_mode.m"
  }
#line 1211 "hlds_out_mode.m"
}

#line 1142 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0(
#line 1142 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21,
#line 1142 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1142 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1142 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3,
#line 1142 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4)
#line 1142 "hlds_out_mode.m"
{
#line 1145 "hlds_out_mode.m"
  while (MR_TRUE)
#line 1145 "hlds_out_mode.m"
    {
#line 1145 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 1145 "hlds_out_mode.m"
      {
#line 1145 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1145 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1145 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3;
#line 1145 "hlds_out_mode.m"
        else
#line 1146 "hlds_out_mode.m"
          {
#line 1146 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_42;
#line 1146 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Mode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1146 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Modes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1146 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17;
#line 1146 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstA1_27;
#line 1146 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstB1_28;
#line 1146 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstA2_29;
#line 1146 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstB2_30;
#line 1146 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstInfo_31;
#line 1146 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_9, (MR_Integer) 0)));
#line 1146 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_9, (MR_Integer) 1)));
#line 1146 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_35_35;
#line 1146 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_36;
#line 1146 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_21_38;
#line 1146 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_40_40;
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1167 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstA1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, (MR_Integer) 0)));
#line 1167 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstB1_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, (MR_Integer) 1)));
#line 1167 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstA2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_33_33, (MR_Integer) 0)));
#line 1167 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstB2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_33_33, (MR_Integer) 1)));
#line 1168 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstInfo_31 = (MR_Word) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 1169 "hlds_out_mode.m"
            {
#line 1169 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1169 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_35_35, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_27));
#line 1169 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_35_35, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_29));
#line 1169 "hlds_out_mode.m"
            }
#line 2716 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_42 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6];
#line 1169 "hlds_out_mode.m"
            {
#line 1169 "hlds_out_mode.m"
              parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_42, (MR_Integer) 1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstInfo_31)), hlds__hlds_out__hlds_out_mode__V_35_35, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_36);
            }
#line 33 "parse_tree.parse_tree_out_info.int"
            hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) " = ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_21_38);
            }
#line 1171 "hlds_out_mode.m"
            {
#line 1171 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1171 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_40_40, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_28));
#line 1171 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_40_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_30));
#line 1171 "hlds_out_mode.m"
            }
#line 1171 "hlds_out_mode.m"
            {
#line 1171 "hlds_out_mode.m"
              parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_42, (MR_Integer) 1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstInfo_31)), hlds__hlds_out__hlds_out_mode__V_40_40, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_21_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17);
            }
#line 1151 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Modes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1149 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17;
#line 1151 "hlds_out_mode.m"
            else
#line 1152 "hlds_out_mode.m"
              {
#line 1152 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19;
#line 33 "parse_tree.parse_tree_out_info.int"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
                {
#line 33 "parse_tree.parse_tree_out_info.int"
                  hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) ", ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19);
                }
#line 1154 "hlds_out_mode.m"
                /* direct tailcall eliminated */
#line 1154 "hlds_out_mode.m"
                {
#line 1154 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Modes_10;
#line 1154 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0__tmp_copy_3 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19;

#line 1154 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0__tmp_copy_3;
#line 1154 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 1154 "hlds_out_mode.m"
                }
#line 1154 "hlds_out_mode.m"
                continue;
#line 1152 "hlds_out_mode.m"
              }
#line 1146 "hlds_out_mode.m"
          }
#line 1145 "hlds_out_mode.m"
      }
#line 1145 "hlds_out_mode.m"
      break;
#line 1145 "hlds_out_mode.m"
    }
#line 1142 "hlds_out_mode.m"
}

#line 1026 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(
#line 1026 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168,
#line 1026 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__Suffix_10,
#line 1026 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_11,
#line 1026 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_12,
#line 1026 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_13,
#line 1026 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_14,
#line 1026 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_15,
#line 1026 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_16,
#line 1026 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_31,
#line 1026 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32)
#line 1026 "hlds_out_mode.m"
{
#line 1031 "hlds_out_mode.m"
  {
#line 1031 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1031 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;

#line 1035 "hlds_out_mode.m"
#line 1035 "hlds_out_mode.m"
    switch (hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_12) {
#line 1035 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1035 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 1034 "hlds_out_mode.m"
        {
#line 1034 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
        }
#line 1035 "hlds_out_mode.m"
        break;
#line 1035 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 1036 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_31;
#line 1035 "hlds_out_mode.m"
        break;
#line 1035 "hlds_out_mode.m"
    }
#line 1053 "hlds_out_mode.m"
#line 1053 "hlds_out_mode.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_11)) {
#line 1053 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1053 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 1039 "hlds_out_mode.m"
        {
#line 1039 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 0)));
#line 1039 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
#line 1039 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_153_153;

#line 1043 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__Args_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1042 "hlds_out_mode.m"
            {
#line 1042 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Name_18, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_153_153);
            }
#line 1043 "hlds_out_mode.m"
          else
#line 1044 "hlds_out_mode.m"
            {
#line 1044 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_144_144;
#line 1044 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_146_146;
#line 1044 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_147_147;
#line 1044 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_148_148;
#line 1044 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_150_150;

#line 1045 "hlds_out_mode.m"
              {
#line 1045 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Name_18, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_144_144);
              }
#line 1046 "hlds_out_mode.m"
              {
#line 1046 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_144_144, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_146_146);
              }
#line 1047 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_147_147 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
#line 1047 "hlds_out_mode.m"
              {
#line 1047 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Args_19, hlds__hlds_out__hlds_out_mode__V_147_147, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_146_146, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_148_148);
              }
#line 1049 "hlds_out_mode.m"
              {
#line 1049 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_148_148, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_150_150);
              }
#line 1050 "hlds_out_mode.m"
              {
#line 1050 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_150_150, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_153_153);
              }
#line 1044 "hlds_out_mode.m"
            }
#line 1052 "hlds_out_mode.m"
          {
#line 1052 "hlds_out_mode.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_153_153, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
          }
#line 1039 "hlds_out_mode.m"
        }
#line 1053 "hlds_out_mode.m"
        break;
#line 1053 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 1054 "hlds_out_mode.m"
        {
#line 1054 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__IsLive_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 0)));
#line 1054 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Real_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
#line 1054 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstA_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)));
#line 1054 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstB_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 3)));
#line 1054 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129;
#line 1054 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_130_130;
#line 1054 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131;
#line 1054 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133;
#line 1054 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_134_134;
#line 1054 "hlds_out_mode.m"
          MR_Integer hlds__hlds_out__hlds_out_mode__V_135_135;
#line 1054 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_136_136;
#line 1054 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_137_137;
#line 1054 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_140_140;
#line 1054 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_142_142;

#line 1055 "hlds_out_mode.m"
          {
#line 1055 "hlds_out_mode.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044unify(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129);
          }
#line 1056 "hlds_out_mode.m"
          {
#line 1056 "hlds_out_mode.m"
            parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__IsLive_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_130_130);
          }
#line 1057 "hlds_out_mode.m"
          {
#line 1057 "hlds_out_mode.m"
            parse_tree__parse_tree_out_inst__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Real_23, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_130_130, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131);
          }
#line 1058 "hlds_out_mode.m"
          {
#line 1058 "hlds_out_mode.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133);
          }
#line 1059 "hlds_out_mode.m"
          {
#line 1059 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_137_137, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_25));
#line 1059 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1059 "hlds_out_mode.m"
          }
#line 1059 "hlds_out_mode.m"
          {
#line 1059 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_134_134, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA_24));
#line 1059 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_134_134, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_137_137));
#line 1059 "hlds_out_mode.m"
          }
#line 1059 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_135_135 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
#line 1059 "hlds_out_mode.m"
          {
#line 1059 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__V_134_134, hlds__hlds_out__hlds_out_mode__V_135_135, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_136_136);
          }
#line 1061 "hlds_out_mode.m"
          {
#line 1061 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_136_136, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_140_140);
          }
#line 1062 "hlds_out_mode.m"
          {
#line 1062 "hlds_out_mode.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_140_140, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_142_142);
          }
#line 1063 "hlds_out_mode.m"
          {
#line 1063 "hlds_out_mode.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_142_142, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
          }
#line 1054 "hlds_out_mode.m"
        }
#line 1053 "hlds_out_mode.m"
        break;
#line 1053 "hlds_out_mode.m"
      case (MR_Integer) 2:
#line 1065 "hlds_out_mode.m"
        {
#line 1065 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_117_117;
#line 1065 "hlds_out_mode.m"
          MR_Integer hlds__hlds_out__hlds_out_mode__V_119_119;
#line 1065 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_120_120;
#line 1065 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_124_124;
#line 1065 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126;
#line 1065 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstB_156 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
#line 1065 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Inst_178 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 0)));
#line 1065 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Insts_179;
#line 1065 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_190;
#line 1065 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Inst_199;
#line 1065 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Insts_200;
#line 1065 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_211;

#line 1066 "hlds_out_mode.m"
          {
#line 1066 "hlds_out_mode.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044merge_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_117_117);
          }
#line 1067 "hlds_out_mode.m"
          {
#line 1067 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Insts_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_179, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_156));
#line 1067 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "hlds_out_mode.m"
          }
#line 1067 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_119_119 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
#line 858 "hlds_out_mode.m"
          {
#line 858 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__Inst_178, hlds__hlds_out__hlds_out_mode__V_119_119, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_117_117, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_190);
          }
#line 849 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Inst_199 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_179, (MR_Integer) 0)));
#line 849 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Insts_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_179, (MR_Integer) 1)));
#line 858 "hlds_out_mode.m"
          {
#line 858 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__Inst_199, hlds__hlds_out__hlds_out_mode__V_119_119, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_190, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_211);
          }
#line 860 "hlds_out_mode.m"
          {
#line 860 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Insts_200, hlds__hlds_out__hlds_out_mode__V_119_119, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_211, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_120_120);
          }
#line 1069 "hlds_out_mode.m"
          {
#line 1069 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_120_120, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_124_124);
          }
#line 1070 "hlds_out_mode.m"
          {
#line 1070 "hlds_out_mode.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_124_124, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126);
          }
#line 1071 "hlds_out_mode.m"
          {
#line 1071 "hlds_out_mode.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
          }
#line 1065 "hlds_out_mode.m"
        }
#line 1053 "hlds_out_mode.m"
        break;
#line 1053 "hlds_out_mode.m"
      case (MR_Integer) 3:
#line 1053 "hlds_out_mode.m"
#line 1053 "hlds_out_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 0)))) {
#line 1053 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1053 "hlds_out_mode.m"
          case (MR_Integer) 0:
#line 1073 "hlds_out_mode.m"
            {
#line 1073 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
#line 1073 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_27 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 1073 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100;
#line 1073 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_101_101;
#line 1073 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_102_102;
#line 1073 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104;
#line 1073 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_106_106;
#line 1073 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_109_109;
#line 1073 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_110_110;
#line 1073 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_112_112;
#line 1073 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_114_114;
#line 1073 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__IsLive_157 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1073 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Real_158 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1074 "hlds_out_mode.m"
              {
#line 1074 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044ground(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100);
              }
#line 1075 "hlds_out_mode.m"
              {
#line 1075 "hlds_out_mode.m"
                parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__IsLive_157, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_101_101);
              }
#line 1076 "hlds_out_mode.m"
              {
#line 1076 "hlds_out_mode.m"
                parse_tree__parse_tree_out_inst__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Real_158, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_101_101, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_102_102);
              }
#line 1077 "hlds_out_mode.m"
              {
#line 1077 "hlds_out_mode.m"
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Uniq_27, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_102_102, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104);
              }
#line 1078 "hlds_out_mode.m"
              {
#line 1078 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_106_106);
              }
#line 1079 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_109_109 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
#line 1079 "hlds_out_mode.m"
              {
#line 1079 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__SubInstName_26, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_109_109, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_106_106, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_110_110);
              }
#line 1081 "hlds_out_mode.m"
              {
#line 1081 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_110_110, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_112_112);
              }
#line 1082 "hlds_out_mode.m"
              {
#line 1082 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_112_112, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_114_114);
              }
#line 1083 "hlds_out_mode.m"
              {
#line 1083 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_114_114, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
#line 1073 "hlds_out_mode.m"
            }
#line 1053 "hlds_out_mode.m"
            break;
#line 1053 "hlds_out_mode.m"
          case (MR_Integer) 1:
#line 1085 "hlds_out_mode.m"
            {
#line 1085 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83;
#line 1085 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_84_84;
#line 1085 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85;
#line 1085 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87;
#line 1085 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89;
#line 1085 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_92_92;
#line 1085 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93;
#line 1085 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95;
#line 1085 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97;
#line 1085 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__IsLive_159 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1085 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Real_160 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1085 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
#line 1085 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_162 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)))) & (MR_Integer) 7);

#line 1086 "hlds_out_mode.m"
              {
#line 1086 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044any(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83);
              }
#line 1087 "hlds_out_mode.m"
              {
#line 1087 "hlds_out_mode.m"
                parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__IsLive_159, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_84_84);
              }
#line 1088 "hlds_out_mode.m"
              {
#line 1088 "hlds_out_mode.m"
                parse_tree__parse_tree_out_inst__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Real_160, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_84_84, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85);
              }
#line 1089 "hlds_out_mode.m"
              {
#line 1089 "hlds_out_mode.m"
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Uniq_162, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87);
              }
#line 1090 "hlds_out_mode.m"
              {
#line 1090 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89);
              }
#line 1091 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_92_92 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
#line 1091 "hlds_out_mode.m"
              {
#line 1091 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__SubInstName_161, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_92_92, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93);
              }
#line 1093 "hlds_out_mode.m"
              {
#line 1093 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95);
              }
#line 1094 "hlds_out_mode.m"
              {
#line 1094 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97);
              }
#line 1095 "hlds_out_mode.m"
              {
#line 1095 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
#line 1085 "hlds_out_mode.m"
            }
#line 1053 "hlds_out_mode.m"
            break;
#line 1053 "hlds_out_mode.m"
          case (MR_Integer) 2:
#line 1097 "hlds_out_mode.m"
            {
#line 1097 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72;
#line 1097 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_75_75;
#line 1097 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76;
#line 1097 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78;
#line 1097 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80;
#line 1097 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));

#line 1098 "hlds_out_mode.m"
              {
#line 1098 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044shared_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72);
              }
#line 1099 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_75_75 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
#line 1099 "hlds_out_mode.m"
              {
#line 1099 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__SubInstName_163, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_75_75, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76);
              }
#line 1101 "hlds_out_mode.m"
              {
#line 1101 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78);
              }
#line 1102 "hlds_out_mode.m"
              {
#line 1102 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80);
              }
#line 1103 "hlds_out_mode.m"
              {
#line 1103 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
#line 1097 "hlds_out_mode.m"
            }
#line 1053 "hlds_out_mode.m"
            break;
#line 1053 "hlds_out_mode.m"
          case (MR_Integer) 3:
#line 1105 "hlds_out_mode.m"
            {
#line 1105 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61;
#line 1105 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_64_64;
#line 1105 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65;
#line 1105 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_67_67;
#line 1105 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_69_69;
#line 1105 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));

#line 1106 "hlds_out_mode.m"
              {
#line 1106 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044mostly_uniq_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61);
              }
#line 1107 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_64_64 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
#line 1107 "hlds_out_mode.m"
              {
#line 1107 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__SubInstName_164, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_64_64, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65);
              }
#line 1109 "hlds_out_mode.m"
              {
#line 1109 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_67_67);
              }
#line 1110 "hlds_out_mode.m"
              {
#line 1110 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_67_67, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_69_69);
              }
#line 1111 "hlds_out_mode.m"
              {
#line 1111 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_69_69, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
#line 1105 "hlds_out_mode.m"
            }
#line 1053 "hlds_out_mode.m"
            break;
#line 1053 "hlds_out_mode.m"
          case (MR_Integer) 4:
#line 1113 "hlds_out_mode.m"
            {
#line 1113 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniqueness_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
#line 1113 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)));
#line 1113 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__TypeVarSet_30;
#line 1113 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
#line 1113 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52;
#line 1113 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_54_54;
#line 1113 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56;
#line 1113 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_58_58;

#line 1114 "hlds_out_mode.m"
              {
#line 1114 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044typed_ground(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
              }
#line 1115 "hlds_out_mode.m"
              {
#line 1115 "hlds_out_mode.m"
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Uniqueness_28, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52);
              }
#line 1116 "hlds_out_mode.m"
              {
#line 1116 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ", ", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_54_54);
              }
#line 1117 "hlds_out_mode.m"
              {
#line 1117 "hlds_out_mode.m"
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_mode__TypeVarSet_30);
              }
#line 1118 "hlds_out_mode.m"
              {
#line 1118 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__TypeVarSet_30, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Type_29, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_54_54, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56);
              }
#line 1119 "hlds_out_mode.m"
              {
#line 1119 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_58_58);
              }
#line 1120 "hlds_out_mode.m"
              {
#line 1120 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_58_58, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
#line 1113 "hlds_out_mode.m"
            }
#line 1053 "hlds_out_mode.m"
            break;
#line 1053 "hlds_out_mode.m"
          case (MR_Integer) 5:
#line 1122 "hlds_out_mode.m"
            {
#line 1122 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35;
#line 1122 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37;
#line 1122 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;
#line 1122 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_42_42;
#line 1122 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43;
#line 1122 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45;
#line 1122 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;
#line 1122 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 2)));
#line 1122 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Type_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_11, (MR_Integer) 1)));
#line 1122 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__TypeVarSet_167;

#line 1123 "hlds_out_mode.m"
              {
#line 1123 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\044typed_inst(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35);
              }
#line 1124 "hlds_out_mode.m"
              {
#line 1124 "hlds_out_mode.m"
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_mode__TypeVarSet_167);
              }
#line 1125 "hlds_out_mode.m"
              {
#line 1125 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__TypeVarSet_167, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Type_166, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37);
              }
#line 1126 "hlds_out_mode.m"
              {
#line 1126 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
              }
#line 1127 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_42_42 = (hlds__hlds_out__hlds_out_mode__Indent_13 + (MR_Integer) 1);
#line 1127 "hlds_out_mode.m"
              {
#line 1127 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__SubInstName_165, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_42_42, hlds__hlds_out__hlds_out_mode__Lang_14, hlds__hlds_out__hlds_out_mode__InclAddr_15, hlds__hlds_out__hlds_out_mode__InstVarSet_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43);
              }
#line 1129 "hlds_out_mode.m"
              {
#line 1129 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Indent_13, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45);
              }
#line 1130 "hlds_out_mode.m"
              {
#line 1130 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
              }
#line 1131 "hlds_out_mode.m"
              {
#line 1131 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_168, hlds__hlds_out__hlds_out_mode__Suffix_10, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32);
              }
#line 1122 "hlds_out_mode.m"
            }
#line 1053 "hlds_out_mode.m"
            break;
#line 1053 "hlds_out_mode.m"
        }
#line 1053 "hlds_out_mode.m"
        break;
#line 1053 "hlds_out_mode.m"
    }
#line 1031 "hlds_out_mode.m"
  }
#line 1026 "hlds_out_mode.m"
}

#line 1013 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
#line 1013 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_1,
#line 1013 "hlds_out_mode.m"
  MR_Integer * hlds__hlds_out__hlds_out_mode__InstAddr_2)
#line 1013 "hlds_out_mode.m"
{
#line 1015 "hlds_out_mode.m"
  {
#line 1015 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1018 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__Inst_1 ;
		{
#line 1018 "hlds_out_mode.m"

    InstAddr = Inst;

#line 3542 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 *hlds__hlds_out__hlds_out_mode__InstAddr_2  = InstAddr;
#line 1018 "hlds_out_mode.m"
}
#line 1015 "hlds_out_mode.m"
  }
#line 1013 "hlds_out_mode.m"
}

#line 978 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
#line 978 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 978 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 978 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent0_2,
#line 978 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 978 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 978 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 978 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 978 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7)
#line 978 "hlds_out_mode.m"
{
#line 982 "hlds_out_mode.m"
  while (MR_TRUE)
#line 982 "hlds_out_mode.m"
    {
#line 982 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 982 "hlds_out_mode.m"
      {
#line 982 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 982 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 982 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6;
#line 982 "hlds_out_mode.m"
        else
#line 984 "hlds_out_mode.m"
          {
#line 984 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 984 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 984 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_15, (MR_Integer) 0)));
#line 984 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_15, (MR_Integer) 1)));
#line 984 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__Indent1_24 = (hlds__hlds_out__hlds_out_mode__Indent0_2 + (MR_Integer) 1);
#line 984 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__Indent2_25 = (hlds__hlds_out__hlds_out_mode__Indent1_24 + (MR_Integer) 1);
#line 984 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;

#line 993 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Args_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 989 "hlds_out_mode.m"
              {
#line 989 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43;
#line 989 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45;
#line 33 "parse_tree.parse_tree_out_info.int"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 990 "hlds_out_mode.m"
                {
#line 990 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43);
                }
#line 991 "hlds_out_mode.m"
                {
#line 991 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__ConsId_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45);
                }
#line 33 "parse_tree.parse_tree_out_info.int"
                hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
                {
#line 33 "parse_tree.parse_tree_out_info.int"
                  hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
                }
#line 989 "hlds_out_mode.m"
              }
#line 993 "hlds_out_mode.m"
            else
#line 994 "hlds_out_mode.m"
              {
#line 994 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
#line 994 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36;
#line 994 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38;
#line 994 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;
#line 994 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40;
#line 994 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Inst_60;
#line 994 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Insts_61;
#line 33 "parse_tree.parse_tree_out_info.int"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 995 "hlds_out_mode.m"
                {
#line 995 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34);
                }
#line 996 "hlds_out_mode.m"
                {
#line 996 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__ConsId_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36);
                }
#line 33 "parse_tree.parse_tree_out_info.int"
                hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
                {
#line 33 "parse_tree.parse_tree_out_info.int"
                  hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "(\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
                }
#line 849 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Inst_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Args_23, (MR_Integer) 0)));
#line 849 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Insts_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Args_23, (MR_Integer) 1)));
#line 3683 "hlds.hlds_out.hlds_out_mode.c"
                if ((hlds__hlds_out__hlds_out_mode__Insts_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3685 "hlds.hlds_out.hlds_out_mode.c"
                  {
#line 858 "hlds_out_mode.m"
                    {
#line 858 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__Inst_60, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
                    }
#line 3692 "hlds.hlds_out.hlds_out_mode.c"
                  }
#line 3694 "hlds.hlds_out.hlds_out_mode.c"
                else
#line 3696 "hlds.hlds_out.hlds_out_mode.c"
                  {
#line 3698 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_72;
#line 3700 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Word hlds__hlds_out__hlds_out_mode__Inst_102;
#line 3702 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Word hlds__hlds_out__hlds_out_mode__Insts_103;
#line 3704 "hlds.hlds_out.hlds_out_mode.c"
                    MR_String hlds__hlds_out__hlds_out_mode__Suffix_109;
#line 3706 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_114;

#line 858 "hlds_out_mode.m"
                    {
#line 858 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__Inst_60, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_72);
                    }
#line 849 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__Inst_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_61, (MR_Integer) 0)));
#line 849 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__Insts_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_61, (MR_Integer) 1)));
#line 854 "hlds_out_mode.m"
                    if ((hlds__hlds_out__hlds_out_mode__Insts_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 853 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__Suffix_109 = (MR_String) "\n";
#line 854 "hlds_out_mode.m"
                    else
#line 856 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__Suffix_109 = (MR_String) ",\n";
#line 858 "hlds_out_mode.m"
                    {
#line 858 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Suffix_109, hlds__hlds_out__hlds_out_mode__Inst_102, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_72, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_114);
                    }
#line 860 "hlds_out_mode.m"
                    {
#line 860 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Insts_103, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_114, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
                    }
#line 3736 "hlds.hlds_out.hlds_out_mode.c"
                  }
#line 1000 "hlds_out_mode.m"
                {
#line 1000 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
                }
#line 33 "parse_tree.parse_tree_out_info.int"
                hlds__hlds_out__hlds_out_mode__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
                {
#line 33 "parse_tree.parse_tree_out_info.int"
                  hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) ")\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
                }
#line 994 "hlds_out_mode.m"
              }
#line 1005 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__BoundInsts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1004 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;
#line 1005 "hlds_out_mode.m"
            else
#line 1006 "hlds_out_mode.m"
              {
#line 1006 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48;
#line 1006 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
#line 33 "parse_tree.parse_tree_out_info.int"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1007 "hlds_out_mode.m"
                {
#line 1007 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent0_2, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48);
                }
#line 33 "parse_tree.parse_tree_out_info.int"
                hlds__hlds_out__hlds_out_mode__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
                {
#line 33 "parse_tree.parse_tree_out_info.int"
                  hlds__hlds_out__hlds_out_mode__func_3(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) ";\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
                }
#line 1009 "hlds_out_mode.m"
                /* direct tailcall eliminated */
#line 1009 "hlds_out_mode.m"
                {
#line 1009 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__BoundInsts_16;
#line 1009 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;

#line 1009 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6;
#line 1009 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 1009 "hlds_out_mode.m"
                }
#line 1009 "hlds_out_mode.m"
                continue;
#line 1006 "hlds_out_mode.m"
              }
#line 984 "hlds_out_mode.m"
          }
#line 982 "hlds_out_mode.m"
      }
#line 982 "hlds_out_mode.m"
      break;
#line 982 "hlds_out_mode.m"
    }
#line 978 "hlds_out_mode.m"
}

#line 874 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(
#line 874 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108,
#line 874 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__Suffix_9,
#line 874 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_10,
#line 874 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_11,
#line 874 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_12,
#line 874 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_13,
#line 874 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_14,
#line 874 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_32,
#line 874 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33)
#line 874 "hlds_out_mode.m"
{
#line 879 "hlds_out_mode.m"
  {
#line 879 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 879 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
#line 879 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41;

#line 880 "hlds_out_mode.m"
    {
#line 880 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34);
    }
#line 883 "hlds_out_mode.m"
#line 883 "hlds_out_mode.m"
    switch (hlds__hlds_out__hlds_out_mode__InclAddr_13) {
#line 883 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 883 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 884 "hlds_out_mode.m"
        {
#line 884 "hlds_out_mode.m"
          MR_Integer hlds__hlds_out__hlds_out_mode__InstAddr_16;
#line 884 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__InstAddrStr_17;
#line 884 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;

#line 885 "hlds_out_mode.m"
          {
#line 885 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(hlds__hlds_out__hlds_out_mode__Inst_10, &hlds__hlds_out__hlds_out_mode__InstAddr_16);
          }
#line 886 "hlds_out_mode.m"
          {
#line 886 "hlds_out_mode.m"
            mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19], (MR_Integer) 2, hlds__hlds_out__hlds_out_mode__InstAddr_16, &hlds__hlds_out__hlds_out_mode__InstAddrStr_17);
          }
#line 887 "hlds_out_mode.m"
          {
#line 887 "hlds_out_mode.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__InstAddrStr_17, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
          }
#line 888 "hlds_out_mode.m"
          {
#line 888 "hlds_out_mode.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, (MR_String) ": ", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41);
          }
#line 884 "hlds_out_mode.m"
        }
#line 883 "hlds_out_mode.m"
        break;
#line 883 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 882 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
#line 883 "hlds_out_mode.m"
        break;
#line 883 "hlds_out_mode.m"
    }
#line 901 "hlds_out_mode.m"
#line 901 "hlds_out_mode.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_10)) {
#line 901 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 901 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 901 "hlds_out_mode.m"
#line 901 "hlds_out_mode.m"
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_mode__Inst_10)) {
#line 901 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 901 "hlds_out_mode.m"
          case (MR_Integer) 0:
#line 902 "hlds_out_mode.m"
            {
#line 902 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_96_96;

#line 903 "hlds_out_mode.m"
              {
#line 903 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, (MR_String) "free", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_96_96);
              }
#line 904 "hlds_out_mode.m"
              {
#line 904 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_96_96, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
#line 902 "hlds_out_mode.m"
            }
#line 901 "hlds_out_mode.m"
            break;
#line 901 "hlds_out_mode.m"
          case (MR_Integer) 1:
#line 973 "hlds_out_mode.m"
            {
#line 973 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43;

#line 974 "hlds_out_mode.m"
              {
#line 974 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, (MR_String) "not_reached", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43);
              }
#line 975 "hlds_out_mode.m"
              {
#line 975 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
#line 973 "hlds_out_mode.m"
            }
#line 901 "hlds_out_mode.m"
            break;
#line 901 "hlds_out_mode.m"
        }
#line 901 "hlds_out_mode.m"
        break;
#line 901 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 906 "hlds_out_mode.m"
        {
#line 906 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93;

#line 907 "hlds_out_mode.m"
          {
#line 907 "hlds_out_mode.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, (MR_String) "free(with some type)", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93);
          }
#line 908 "hlds_out_mode.m"
          {
#line 908 "hlds_out_mode.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
          }
#line 906 "hlds_out_mode.m"
        }
#line 901 "hlds_out_mode.m"
        break;
#line 901 "hlds_out_mode.m"
      case (MR_Integer) 2:
#line 891 "hlds_out_mode.m"
        {
#line 891 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Uniq_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 0)));
#line 891 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));
#line 891 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100;

#line 896 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 898 "hlds_out_mode.m"
            {
#line 898 "hlds_out_mode.m"
              parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__Uniq_18, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100);
            }
#line 896 "hlds_out_mode.m"
          else
#line 893 "hlds_out_mode.m"
            {
#line 893 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_20 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_19), (MR_Integer) 1);

#line 894 "hlds_out_mode.m"
              {
#line 894 "hlds_out_mode.m"
                parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_6_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__Uniq_18, hlds__hlds_out__hlds_out_mode__PredInstInfo_20, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100);
              }
#line 893 "hlds_out_mode.m"
            }
#line 900 "hlds_out_mode.m"
          {
#line 900 "hlds_out_mode.m"
            parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
          }
#line 891 "hlds_out_mode.m"
        }
#line 901 "hlds_out_mode.m"
        break;
#line 901 "hlds_out_mode.m"
      case (MR_Integer) 3:
#line 901 "hlds_out_mode.m"
#line 901 "hlds_out_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 0)))) {
#line 901 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 901 "hlds_out_mode.m"
          case (MR_Integer) 0:
#line 910 "hlds_out_mode.m"
            {
#line 910 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstResults_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 2)));
#line 910 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 3)));
#line 910 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63;
#line 910 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65;
#line 910 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74;
#line 910 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_80_80;
#line 910 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87;
#line 910 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_88_88;
#line 910 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_90_90;
#line 910 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));

#line 911 "hlds_out_mode.m"
              {
#line 911 "hlds_out_mode.m"
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__Uniq_102, (MR_String) "bound", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63);
              }
#line 912 "hlds_out_mode.m"
              {
#line 912 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, (MR_String) "(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65);
              }
#line 915 "hlds_out_mode.m"
#line 915 "hlds_out_mode.m"
              switch (hlds__hlds_out__hlds_out_mode__Lang_12) {
#line 915 "hlds_out_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 915 "hlds_out_mode.m"
                case (MR_Integer) 1:
#line 916 "hlds_out_mode.m"
                  {
#line 916 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_109_109;
#line 916 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__InstResultsTerm_24;
#line 916 "hlds_out_mode.m"
                    MR_String hlds__hlds_out__hlds_out_mode__InstResultsStr_25;
#line 916 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_66_66;
#line 916 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_67_67;
#line 916 "hlds_out_mode.m"
                    MR_Integer hlds__hlds_out__hlds_out_mode__V_69_69;
#line 916 "hlds_out_mode.m"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70;
#line 916 "hlds_out_mode.m"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72;

#line 918 "hlds_out_mode.m"
                    {
#line 918 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_66_66 = mercury__term__context_init_0_f_0();
                    }
#line 918 "hlds_out_mode.m"
                    {
#line 918 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__InstResultsTerm_24 = hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__V_66_66, hlds__hlds_out__hlds_out_mode__InstResults_22);
                    }
#line 4092 "hlds.hlds_out.hlds_out_mode.c"
                    hlds__hlds_out__hlds_out_mode__TypeCtorInfo_109_109 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 919 "hlds_out_mode.m"
                    {
#line 919 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_67_67 = mercury__varset__init_0_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_109_109);
                    }
#line 919 "hlds_out_mode.m"
                    {
#line 919 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__InstResultsStr_25 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_109_109, hlds__hlds_out__hlds_out_mode__V_67_67, (MR_Integer) 2, hlds__hlds_out__hlds_out_mode__InstResultsTerm_24);
                    }
#line 921 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_69_69 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 921 "hlds_out_mode.m"
                    {
#line 921 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__V_69_69, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70);
                    }
#line 922 "hlds_out_mode.m"
                    {
#line 922 "hlds_out_mode.m"
                      parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__InstResultsStr_25, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72);
                    }
#line 923 "hlds_out_mode.m"
                    {
#line 923 "hlds_out_mode.m"
                      parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74);
                    }
#line 916 "hlds_out_mode.m"
                  }
#line 915 "hlds_out_mode.m"
                  break;
#line 915 "hlds_out_mode.m"
                case (MR_Integer) 0:
#line 914 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65;
#line 915 "hlds_out_mode.m"
                  break;
#line 915 "hlds_out_mode.m"
              }
#line 932 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_80_80 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 4135 "hlds.hlds_out.hlds_out_mode.c"
#line 4136 "hlds.hlds_out.hlds_out_mode.c"
              switch (hlds__hlds_out__hlds_out_mode__Lang_12) {
#line 4138 "hlds.hlds_out.hlds_out_mode.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 4140 "hlds.hlds_out.hlds_out_mode.c"
                case (MR_Integer) 1:
#line 4142 "hlds.hlds_out.hlds_out_mode.c"
                  {
#line 4144 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Integer hlds__hlds_out__hlds_out_mode__V_75_75 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 4146 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76;
#line 4148 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_79_79;
#line 4150 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_81_81;
#line 4152 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Integer hlds__hlds_out__hlds_out_mode__V_83_83;
#line 4154 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_84_84;

#line 929 "hlds_out_mode.m"
                    {
#line 929 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__V_75_75, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76);
                    }
#line 930 "hlds_out_mode.m"
                    {
#line 930 "hlds_out_mode.m"
                      parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, (MR_String) "[\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_79_79);
                    }
#line 932 "hlds_out_mode.m"
                    {
#line 932 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__BoundInsts_23, hlds__hlds_out__hlds_out_mode__V_80_80, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_79_79, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_81_81);
                    }
#line 938 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_83_83 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 938 "hlds_out_mode.m"
                    {
#line 938 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__V_83_83, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_81_81, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_84_84);
                    }
#line 939 "hlds_out_mode.m"
                    {
#line 939 "hlds_out_mode.m"
                      parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, (MR_String) "]\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_84_84, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87);
                    }
#line 4184 "hlds.hlds_out.hlds_out_mode.c"
                  }
#line 4186 "hlds.hlds_out.hlds_out_mode.c"
                  break;
#line 4188 "hlds.hlds_out.hlds_out_mode.c"
                case (MR_Integer) 0:
#line 932 "hlds_out_mode.m"
                  {
#line 932 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__BoundInsts_23, hlds__hlds_out__hlds_out_mode__V_80_80, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87);
                  }
#line 4195 "hlds.hlds_out.hlds_out_mode.c"
                  break;
#line 4197 "hlds.hlds_out.hlds_out_mode.c"
              }
#line 941 "hlds_out_mode.m"
              {
#line 941 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_88_88);
              }
#line 942 "hlds_out_mode.m"
              {
#line 942 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, (MR_String) ")", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_88_88, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_90_90);
              }
#line 943 "hlds_out_mode.m"
              {
#line 943 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_90_90, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
#line 910 "hlds_out_mode.m"
            }
#line 901 "hlds_out_mode.m"
            break;
#line 901 "hlds_out_mode.m"
          case (MR_Integer) 1:
#line 945 "hlds_out_mode.m"
            {
#line 945 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_60_60;
#line 945 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));
#line 945 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 2)));

#line 950 "hlds_out_mode.m"
              if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 951 "hlds_out_mode.m"
                {
#line 952 "hlds_out_mode.m"
                  {
#line 952 "hlds_out_mode.m"
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__Uniq_105, (MR_String) "ground", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_60_60);
                  }
#line 951 "hlds_out_mode.m"
                }
#line 950 "hlds_out_mode.m"
              else
#line 947 "hlds_out_mode.m"
                {
#line 947 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_103 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_106), (MR_Integer) 1);

#line 948 "hlds_out_mode.m"
                  {
#line 948 "hlds_out_mode.m"
                    parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_6_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__Uniq_105, hlds__hlds_out__hlds_out_mode__PredInstInfo_103, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_60_60);
                  }
#line 947 "hlds_out_mode.m"
                }
#line 954 "hlds_out_mode.m"
              {
#line 954 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_60_60, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
#line 945 "hlds_out_mode.m"
            }
#line 901 "hlds_out_mode.m"
            break;
#line 901 "hlds_out_mode.m"
          case (MR_Integer) 2:
#line 956 "hlds_out_mode.m"
            {
#line 956 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));
#line 956 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_55_55;

#line 957 "hlds_out_mode.m"
              {
#line 957 "hlds_out_mode.m"
                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__InstVarSet_14, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Var_26, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_55_55);
              }
#line 958 "hlds_out_mode.m"
              {
#line 958 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_55_55, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
#line 956 "hlds_out_mode.m"
            }
#line 901 "hlds_out_mode.m"
            break;
#line 901 "hlds_out_mode.m"
          case (MR_Integer) 3:
#line 960 "hlds_out_mode.m"
            {
#line 960 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));
#line 960 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__ConstrainedInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 2)));
#line 960 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_Word) hlds__hlds_out__hlds_out_mode__InstVarSet_14;
#line 960 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52;

#line 961 "hlds_out_mode.m"
              {
#line 961 "hlds_out_mode.m"
                parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_6_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6], (MR_Integer) 1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_51_51)), hlds__hlds_out__hlds_out_mode__Vars_27, hlds__hlds_out__hlds_out_mode__ConstrainedInst_28, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52);
              }
#line 963 "hlds_out_mode.m"
              {
#line 963 "hlds_out_mode.m"
                parse_tree__parse_tree_out_info__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
#line 960 "hlds_out_mode.m"
            }
#line 901 "hlds_out_mode.m"
            break;
#line 901 "hlds_out_mode.m"
          case (MR_Integer) 4:
#line 969 "hlds_out_mode.m"
            {
#line 969 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstName_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));

#line 970 "hlds_out_mode.m"
              {
#line 970 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__InstName_31, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
#line 969 "hlds_out_mode.m"
            }
#line 901 "hlds_out_mode.m"
            break;
#line 901 "hlds_out_mode.m"
          case (MR_Integer) 5:
#line 965 "hlds_out_mode.m"
            {
#line 965 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Name_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 1)));
#line 965 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_10, (MR_Integer) 2)));
#line 965 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_47_47;

#line 966 "hlds_out_mode.m"
              {
#line 966 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 966 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_29));
#line 966 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_47_47, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Args_30));
#line 966 "hlds_out_mode.m"
              }
#line 966 "hlds_out_mode.m"
              {
#line 966 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_108, hlds__hlds_out__hlds_out_mode__Suffix_9, hlds__hlds_out__hlds_out_mode__V_47_47, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_41_41, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33);
              }
#line 965 "hlds_out_mode.m"
            }
#line 901 "hlds_out_mode.m"
            break;
#line 901 "hlds_out_mode.m"
        }
#line 901 "hlds_out_mode.m"
        break;
#line 901 "hlds_out_mode.m"
    }
#line 879 "hlds_out_mode.m"
  }
#line 874 "hlds_out_mode.m"
}

#line 844 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
#line 844 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_29,
#line 844 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 844 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_2,
#line 844 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 844 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 844 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 844 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 844 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7)
#line 844 "hlds_out_mode.m"
{
#line 848 "hlds_out_mode.m"
  while (MR_TRUE)
#line 848 "hlds_out_mode.m"
    {
#line 848 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 848 "hlds_out_mode.m"
      {
#line 848 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 848 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6;
#line 848 "hlds_out_mode.m"
        else
#line 850 "hlds_out_mode.m"
          {
#line 850 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 850 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Insts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 850 "hlds_out_mode.m"
            MR_String hlds__hlds_out__hlds_out_mode__Suffix_22;
#line 850 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27;

#line 854 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Insts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 853 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__Suffix_22 = (MR_String) "\n";
#line 854 "hlds_out_mode.m"
            else
#line 856 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__Suffix_22 = (MR_String) ",\n";
#line 858 "hlds_out_mode.m"
            {
#line 858 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_29, hlds__hlds_out__hlds_out_mode__Suffix_22, hlds__hlds_out__hlds_out_mode__Inst_15, hlds__hlds_out__hlds_out_mode__Indent_2, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27);
            }
#line 860 "hlds_out_mode.m"
            /* direct tailcall eliminated */
#line 860 "hlds_out_mode.m"
            {
#line 860 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Insts_16;
#line 860 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27;

#line 860 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6;
#line 860 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 860 "hlds_out_mode.m"
            }
#line 860 "hlds_out_mode.m"
            continue;
#line 850 "hlds_out_mode.m"
          }
#line 848 "hlds_out_mode.m"
      }
#line 848 "hlds_out_mode.m"
      break;
#line 848 "hlds_out_mode.m"
    }
#line 844 "hlds_out_mode.m"
}

#line 779 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(
#line 779 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56,
#line 779 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_8,
#line 779 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 779 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 779 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 779 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 779 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22,
#line 779 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23)
#line 779 "hlds_out_mode.m"
{
#line 784 "hlds_out_mode.m"
  {
#line 784 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 784 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_14;
#line 784 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_15;
#line 784 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_16;
#line 784 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_17;
#line 784 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstA1Addr_18;
#line 784 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstA2Addr_19;
#line 784 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstB1Addr_20;
#line 784 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstB2Addr_21;
#line 784 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_8, (MR_Integer) 0)));
#line 784 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_8, (MR_Integer) 1)));
#line 784 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26;
#line 784 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28;
#line 784 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30;
#line 784 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31;
#line 784 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;
#line 784 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38;
#line 784 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40;
#line 784 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 785 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, (MR_Integer) 0)));
#line 785 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, (MR_Integer) 1)));
#line 785 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 0)));
#line 785 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 1)));
#line 1018 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstA1_14 ;
		{
#line 1018 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4545 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstA1Addr_18  = InstAddr;
#line 1018 "hlds_out_mode.m"
}
#line 1018 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstA2_16 ;
		{
#line 1018 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4565 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstA2Addr_19  = InstAddr;
#line 1018 "hlds_out_mode.m"
}
#line 1018 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstB1_15 ;
		{
#line 1018 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4585 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstB1Addr_20  = InstAddr;
#line 1018 "hlds_out_mode.m"
}
#line 1018 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstB2_17 ;
		{
#line 1018 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4605 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstB2Addr_21  = InstAddr;
#line 1018 "hlds_out_mode.m"
}
#line 791 "hlds_out_mode.m"
    {
#line 791 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "old lhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28);
    }
#line 793 "hlds_out_mode.m"
    {
#line 793 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__InstA1_14, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30);
    }
#line 796 "hlds_out_mode.m"
    {
#line 796 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31);
    }
#line 797 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB1Addr_20 == hlds__hlds_out__hlds_out_mode__InstA1Addr_18);
#line 797 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 799 "hlds_out_mode.m"
      {
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "old rhs inst: same as old lhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
        }
#line 799 "hlds_out_mode.m"
      }
#line 797 "hlds_out_mode.m"
    else
#line 801 "hlds_out_mode.m"
      {
#line 801 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35;
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "old rhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35);
        }
#line 802 "hlds_out_mode.m"
        {
#line 802 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__InstB1_15, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
        }
#line 801 "hlds_out_mode.m"
      }
#line 806 "hlds_out_mode.m"
    {
#line 806 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
    }
#line 807 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstA2Addr_19 == hlds__hlds_out__hlds_out_mode__InstA1Addr_18);
#line 807 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 809 "hlds_out_mode.m"
      {
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          hlds__hlds_out__hlds_out_mode__func_3(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new lhs inst: unchanged\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
        }
#line 809 "hlds_out_mode.m"
      }
#line 807 "hlds_out_mode.m"
    else
#line 810 "hlds_out_mode.m"
      {
#line 810 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstA2Addr_19 == hlds__hlds_out__hlds_out_mode__InstB1Addr_20);
#line 810 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 812 "hlds_out_mode.m"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              hlds__hlds_out__hlds_out_mode__func_4(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new lhs inst: changed to old rhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
            }
#line 812 "hlds_out_mode.m"
          }
#line 810 "hlds_out_mode.m"
        else
#line 814 "hlds_out_mode.m"
          {
#line 814 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44;
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              hlds__hlds_out__hlds_out_mode__func_5(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new lhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44);
            }
#line 815 "hlds_out_mode.m"
            {
#line 815 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__InstA2_16, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
            }
#line 814 "hlds_out_mode.m"
          }
#line 810 "hlds_out_mode.m"
      }
#line 819 "hlds_out_mode.m"
    {
#line 819 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
    }
#line 820 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB2Addr_21 == hlds__hlds_out__hlds_out_mode__InstB1Addr_20);
#line 820 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 822 "hlds_out_mode.m"
      {
#line 33 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
        {
#line 33 "parse_tree.parse_tree_out_info.int"
          hlds__hlds_out__hlds_out_mode__func_6(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new rhs inst: unchanged\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
        }
#line 822 "hlds_out_mode.m"
      }
#line 820 "hlds_out_mode.m"
    else
#line 823 "hlds_out_mode.m"
      {
#line 823 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB2Addr_21 == hlds__hlds_out__hlds_out_mode__InstA2Addr_19);
#line 823 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 825 "hlds_out_mode.m"
          {
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              hlds__hlds_out__hlds_out_mode__func_7(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new rhs inst: changed to new lhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
            }
#line 825 "hlds_out_mode.m"
          }
#line 823 "hlds_out_mode.m"
        else
#line 827 "hlds_out_mode.m"
          {
#line 827 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_53_53;
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5)));

#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              hlds__hlds_out__hlds_out_mode__func_8(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56), ((MR_Box) ((MR_String) "new rhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_53_53);
            }
#line 828 "hlds_out_mode.m"
            {
#line 828 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_56, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__InstB2_17, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_53_53, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
            }
#line 827 "hlds_out_mode.m"
          }
#line 823 "hlds_out_mode.m"
      }
#line 784 "hlds_out_mode.m"
  }
#line 779 "hlds_out_mode.m"
}

#line 751 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0(
#line 751 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37,
#line 751 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 751 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum_2,
#line 751 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
#line 751 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 751 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_5,
#line 751 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6,
#line 751 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7,
#line 751 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8)
#line 751 "hlds_out_mode.m"
{
#line 755 "hlds_out_mode.m"
  while (MR_TRUE)
#line 755 "hlds_out_mode.m"
    {
#line 755 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 755 "hlds_out_mode.m"
      {
#line 755 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 755 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 755 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7;
#line 755 "hlds_out_mode.m"
        else
#line 757 "hlds_out_mode.m"
          {
#line 757 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__UniMode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 757 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__UniModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 757 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27;
#line 757 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29;
#line 757 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30;
#line 757 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 757 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;
#line 757 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__V_34_34;
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 39 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 758 "hlds_out_mode.m"
            {
#line 758 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, hlds__hlds_out__hlds_out_mode__Indent_3, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27);
            }
#line 33 "parse_tree.parse_tree_out_info.int"
            hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) ((MR_String) "argument ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29);
            }
#line 39 "parse_tree.parse_tree_out_info.int"
            hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 8)));
#line 39 "parse_tree.parse_tree_out_info.int"
            {
#line 39 "parse_tree.parse_tree_out_info.int"
              hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgNum_2)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30);
            }
#line 33 "parse_tree.parse_tree_out_info.int"
            hlds__hlds_out__hlds_out_mode__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
            {
#line 33 "parse_tree.parse_tree_out_info.int"
              hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) ((MR_String) ":\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
            }
#line 762 "hlds_out_mode.m"
            {
#line 762 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, hlds__hlds_out__hlds_out_mode__UniMode_17, hlds__hlds_out__hlds_out_mode__Indent_3, hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__InclAddr_5, hlds__hlds_out__hlds_out_mode__InstVarSet_6, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
            }
#line 764 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_34_34 = (hlds__hlds_out__hlds_out_mode__ArgNum_2 + (MR_Integer) 1);
#line 764 "hlds_out_mode.m"
            /* direct tailcall eliminated */
#line 764 "hlds_out_mode.m"
            {
#line 764 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__UniModes_18;
#line 764 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum__tmp_copy_2 = hlds__hlds_out__hlds_out_mode__V_34_34;
#line 764 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;

#line 764 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_7;
#line 764 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__ArgNum_2 = hlds__hlds_out__hlds_out_mode__ArgNum__tmp_copy_2;
#line 764 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 764 "hlds_out_mode.m"
            }
#line 764 "hlds_out_mode.m"
            continue;
#line 757 "hlds_out_mode.m"
          }
#line 755 "hlds_out_mode.m"
      }
#line 755 "hlds_out_mode.m"
      break;
#line 755 "hlds_out_mode.m"
    }
#line 751 "hlds_out_mode.m"
}

#line 691 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3(
#line 691 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
#line 691 "hlds_out_mode.m"
{
#line 691 "hlds_out_mode.m"
  {
#line 691 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 691 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

#line 691 "hlds_out_mode.m"
    {
#line 691 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__691__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
#line 691 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 691 "hlds_out_mode.m"
  }
#line 691 "hlds_out_mode.m"
}

#line 683 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2(
#line 683 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
#line 683 "hlds_out_mode.m"
{
#line 683 "hlds_out_mode.m"
  {
#line 683 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 683 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

#line 683 "hlds_out_mode.m"
    {
#line 683 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__683__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
#line 683 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 683 "hlds_out_mode.m"
  }
#line 683 "hlds_out_mode.m"
}

#line 699 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1(
#line 699 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
#line 699 "hlds_out_mode.m"
{
#line 699 "hlds_out_mode.m"
  {
#line 699 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 699 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

#line 699 "hlds_out_mode.m"
    {
#line 699 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__699__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
#line 699 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 699 "hlds_out_mode.m"
  }
#line 699 "hlds_out_mode.m"
}

#line 620 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(
#line 620 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ConsId_4,
#line 620 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 620 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__Term_6)
#line 620 "hlds_out_mode.m"
{
#line 625 "hlds_out_mode.m"
  {
#line 625 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 625 "hlds_out_mode.m"
#line 625 "hlds_out_mode.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) {
#line 625 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 625 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 677 "hlds_out_mode.m"
        {
#line 677 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Context_129;

#line 678 "hlds_out_mode.m"
          {
#line 678 "hlds_out_mode.m"
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_129);
          }
#line 680 "hlds_out_mode.m"
          {
#line 680 "hlds_out_mode.m"
            MR_Word base;
#line 680 "hlds_out_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 680 "hlds_out_mode.m"
            *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 680 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[16])));
#line 680 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 680 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_129));
#line 680 "hlds_out_mode.m"
          }
#line 677 "hlds_out_mode.m"
        }
#line 625 "hlds_out_mode.m"
        break;
#line 625 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 670 "hlds_out_mode.m"
        {
#line 670 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_25 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4), (MR_Integer) 1);
#line 670 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__V_78_78;
#line 670 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_82_82;
#line 670 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Context_125;
#line 670 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__FunctorName_126;
#line 670 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorName_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_25, (MR_Integer) 0)));
#line 670 "hlds_out_mode.m"
          MR_Integer hlds__hlds_out__hlds_out_mode__Arity_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_25, (MR_Integer) 1)));
#line 670 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__V_151_151;
#line 670 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_157_157;
#line 670 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__V_159_159;
#line 670 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__V_160_160;
#line 670 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__V_167_167;

#line 672 "hlds_out_mode.m"
          {
#line 672 "hlds_out_mode.m"
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_125);
          }
#line 674 "hlds_out_mode.m"
          {
#line 674 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_78_78 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorName_127);
          }
#line 5104 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__V_157_157 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19];
#line 674 "hlds_out_mode.m"
          {
#line 674 "hlds_out_mode.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_157_157, hlds__hlds_out__hlds_out_mode__Arity_128, &hlds__hlds_out__hlds_out_mode__V_151_151);
          }
#line 673 "hlds_out_mode.m"
          {
#line 673 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_159_159 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_151_151);
          }
#line 674 "hlds_out_mode.m"
          {
#line 674 "hlds_out_mode.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_157_157, hlds__hlds_out__hlds_out_mode__V_78_78, &hlds__hlds_out__hlds_out_mode__V_160_160);
          }
#line 673 "hlds_out_mode.m"
          {
#line 673 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_167_167 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_160_160, hlds__hlds_out__hlds_out_mode__V_159_159);
          }
#line 673 "hlds_out_mode.m"
          {
#line 673 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__FunctorName_126 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_cell_constructor for ", hlds__hlds_out__hlds_out_mode__V_167_167);
          }
#line 675 "hlds_out_mode.m"
          {
#line 675 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 675 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_82_82, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_126));
#line 675 "hlds_out_mode.m"
          }
#line 675 "hlds_out_mode.m"
          {
#line 675 "hlds_out_mode.m"
            MR_Word base;
#line 675 "hlds_out_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 675 "hlds_out_mode.m"
            *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 675 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_82_82));
#line 675 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_125));
#line 675 "hlds_out_mode.m"
          }
#line 670 "hlds_out_mode.m"
        }
#line 625 "hlds_out_mode.m"
        break;
#line 625 "hlds_out_mode.m"
      case (MR_Integer) 2:
#line 708 "hlds_out_mode.m"
        {
#line 708 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Context_139;

#line 709 "hlds_out_mode.m"
          {
#line 709 "hlds_out_mode.m"
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_139);
          }
#line 711 "hlds_out_mode.m"
          {
#line 711 "hlds_out_mode.m"
            MR_Word base;
#line 711 "hlds_out_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 711 "hlds_out_mode.m"
            *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 711 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[14])));
#line 711 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_139));
#line 711 "hlds_out_mode.m"
          }
#line 708 "hlds_out_mode.m"
        }
#line 625 "hlds_out_mode.m"
        break;
#line 625 "hlds_out_mode.m"
      case (MR_Integer) 3:
#line 625 "hlds_out_mode.m"
#line 625 "hlds_out_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) {
#line 625 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 625 "hlds_out_mode.m"
          case (MR_Integer) 0:
#line 713 "hlds_out_mode.m"
            {
#line 713 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_141;

#line 714 "hlds_out_mode.m"
              {
#line 714 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_141);
              }
#line 716 "hlds_out_mode.m"
              {
#line 716 "hlds_out_mode.m"
                MR_Word base;
#line 716 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 716 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 716 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[13])));
#line 716 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 716 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_141));
#line 716 "hlds_out_mode.m"
              }
#line 713 "hlds_out_mode.m"
            }
#line 625 "hlds_out_mode.m"
            break;
#line 625 "hlds_out_mode.m"
          case (MR_Integer) 1:
#line 718 "hlds_out_mode.m"
            {
#line 718 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_143;

#line 719 "hlds_out_mode.m"
              {
#line 719 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_143);
              }
#line 721 "hlds_out_mode.m"
              {
#line 721 "hlds_out_mode.m"
                MR_Word base;
#line 721 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 721 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 721 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[11])));
#line 721 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 721 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_143));
#line 721 "hlds_out_mode.m"
              }
#line 718 "hlds_out_mode.m"
            }
#line 625 "hlds_out_mode.m"
            break;
#line 625 "hlds_out_mode.m"
          case (MR_Integer) 2:
#line 625 "hlds_out_mode.m"
            {
#line 625 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 625 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode___Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
#line 625 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode___TypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 3)));

#line 626 "hlds_out_mode.m"
              {
#line 626 "hlds_out_mode.m"
                parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__SymName_7, hlds__hlds_out__hlds_out_mode__ArgTerms_5, hlds__hlds_out__hlds_out_mode__Term_6);
              }
#line 625 "hlds_out_mode.m"
            }
#line 625 "hlds_out_mode.m"
            break;
#line 625 "hlds_out_mode.m"
          case (MR_Integer) 3:
#line 628 "hlds_out_mode.m"
            {
#line 630 "hlds_out_mode.m"
              {
#line 630 "hlds_out_mode.m"
                parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[30], hlds__hlds_out__hlds_out_mode__ArgTerms_5, hlds__hlds_out__hlds_out_mode__Term_6);
              }
#line 628 "hlds_out_mode.m"
            }
#line 625 "hlds_out_mode.m"
            break;
#line 625 "hlds_out_mode.m"
          case (MR_Integer) 4:
#line 632 "hlds_out_mode.m"
            {
#line 632 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_12;

#line 633 "hlds_out_mode.m"
              {
#line 633 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_12);
              }
#line 635 "hlds_out_mode.m"
              {
#line 635 "hlds_out_mode.m"
                MR_Word base;
#line 635 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 635 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 635 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[10])));
#line 635 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 635 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_12));
#line 635 "hlds_out_mode.m"
              }
#line 632 "hlds_out_mode.m"
            }
#line 625 "hlds_out_mode.m"
            break;
#line 625 "hlds_out_mode.m"
          case (MR_Integer) 5:
#line 637 "hlds_out_mode.m"
            {
#line 637 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__Int_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 637 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_106_106;
#line 637 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_114;

#line 638 "hlds_out_mode.m"
              {
#line 638 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_114);
              }
#line 639 "hlds_out_mode.m"
              {
#line 639 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 639 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_106_106, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Int_14));
#line 639 "hlds_out_mode.m"
              }
#line 639 "hlds_out_mode.m"
              {
#line 639 "hlds_out_mode.m"
                MR_Word base;
#line 639 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 639 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 639 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_106_106));
#line 639 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_114));
#line 639 "hlds_out_mode.m"
              }
#line 637 "hlds_out_mode.m"
            }
#line 625 "hlds_out_mode.m"
            break;
#line 625 "hlds_out_mode.m"
          case (MR_Integer) 6:
#line 641 "hlds_out_mode.m"
            {
#line 641 "hlds_out_mode.m"
              MR_Float hlds__hlds_out__hlds_out_mode__Float_15 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 641 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_104_104;
#line 641 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_115;

#line 642 "hlds_out_mode.m"
              {
#line 642 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_115);
              }
#line 643 "hlds_out_mode.m"
              {
#line 643 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 643 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_104_104, 1) = MR_box_float(hlds__hlds_out__hlds_out_mode__Float_15);
#line 643 "hlds_out_mode.m"
              }
#line 643 "hlds_out_mode.m"
              {
#line 643 "hlds_out_mode.m"
                MR_Word base;
#line 643 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 643 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 643 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_104_104));
#line 643 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 643 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_115));
#line 643 "hlds_out_mode.m"
              }
#line 641 "hlds_out_mode.m"
            }
#line 625 "hlds_out_mode.m"
            break;
#line 625 "hlds_out_mode.m"
          case (MR_Integer) 7:
#line 649 "hlds_out_mode.m"
            {
#line 649 "hlds_out_mode.m"
              MR_Char hlds__hlds_out__hlds_out_mode__Char_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 649 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_100_100;
#line 649 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SymName_117;

#line 650 "hlds_out_mode.m"
              {
#line 650 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_100_100 = mercury__string__from_char_1_f_0(hlds__hlds_out__hlds_out_mode__Char_17);
              }
#line 650 "hlds_out_mode.m"
              {
#line 650 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SymName_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 650 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SymName_117, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_100_100));
#line 650 "hlds_out_mode.m"
              }
#line 651 "hlds_out_mode.m"
              {
#line 651 "hlds_out_mode.m"
                parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__SymName_117, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_mode__Term_6);
              }
#line 649 "hlds_out_mode.m"
            }
#line 625 "hlds_out_mode.m"
            break;
#line 625 "hlds_out_mode.m"
          case (MR_Integer) 8:
#line 645 "hlds_out_mode.m"
            {
#line 645 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__String_16 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 645 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_102_102;
#line 645 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_116;

#line 646 "hlds_out_mode.m"
              {
#line 646 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_116);
              }
#line 647 "hlds_out_mode.m"
              {
#line 647 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 647 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_102_102, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__String_16));
#line 647 "hlds_out_mode.m"
              }
#line 647 "hlds_out_mode.m"
              {
#line 647 "hlds_out_mode.m"
                MR_Word base;
#line 647 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 647 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 647 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_102_102));
#line 647 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_116));
#line 647 "hlds_out_mode.m"
              }
#line 645 "hlds_out_mode.m"
            }
#line 625 "hlds_out_mode.m"
            break;
#line 625 "hlds_out_mode.m"
          case (MR_Integer) 9:
#line 653 "hlds_out_mode.m"
            {
#line 653 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_98_98;
#line 653 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_118;
#line 653 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__FunctorName_119;
#line 653 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__String_120 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));

#line 654 "hlds_out_mode.m"
              {
#line 654 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_118);
              }
#line 655 "hlds_out_mode.m"
              {
#line 655 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__FunctorName_119 = mercury__string__f_43_43_2_f_0((MR_String) "ImplDefinedConst: ", hlds__hlds_out__hlds_out_mode__String_120);
              }
#line 656 "hlds_out_mode.m"
              {
#line 656 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 656 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_98_98, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_119));
#line 656 "hlds_out_mode.m"
              }
#line 656 "hlds_out_mode.m"
              {
#line 656 "hlds_out_mode.m"
                MR_Word base;
#line 656 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 656 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 656 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_98_98));
#line 656 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 656 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_118));
#line 656 "hlds_out_mode.m"
              }
#line 653 "hlds_out_mode.m"
            }
#line 625 "hlds_out_mode.m"
            break;
#line 625 "hlds_out_mode.m"
          case (MR_Integer) 10:
#line 658 "hlds_out_mode.m"
            {
#line 658 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 658 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__TypeCtorName_19 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
#line 658 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 3)));
#line 658 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_89_89;
#line 658 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_95_95;
#line 658 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_121;
#line 658 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__FunctorName_122;
#line 658 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_169_169;
#line 658 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_175_175;
#line 658 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_177_177;
#line 658 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_178_178;
#line 658 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_185_185;
#line 658 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_187_187;
#line 658 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_188_188;
#line 658 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_195_195;

#line 659 "hlds_out_mode.m"
              {
#line 659 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_121);
              }
#line 661 "hlds_out_mode.m"
              {
#line 661 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_89_89 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__ModuleName_18);
              }
#line 5596 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__V_175_175 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19];
#line 661 "hlds_out_mode.m"
              {
#line 661 "hlds_out_mode.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_175_175, hlds__hlds_out__hlds_out_mode__Arity_20, &hlds__hlds_out__hlds_out_mode__V_169_169);
              }
#line 660 "hlds_out_mode.m"
              {
#line 660 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_177_177 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_169_169);
              }
#line 661 "hlds_out_mode.m"
              {
#line 661 "hlds_out_mode.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_175_175, hlds__hlds_out__hlds_out_mode__TypeCtorName_19, &hlds__hlds_out__hlds_out_mode__V_178_178);
              }
#line 660 "hlds_out_mode.m"
              {
#line 660 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_185_185 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_178_178, hlds__hlds_out__hlds_out_mode__V_177_177);
              }
#line 660 "hlds_out_mode.m"
              {
#line 660 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_187_187 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_mode__V_185_185);
              }
#line 661 "hlds_out_mode.m"
              {
#line 661 "hlds_out_mode.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_175_175, hlds__hlds_out__hlds_out_mode__V_89_89, &hlds__hlds_out__hlds_out_mode__V_188_188);
              }
#line 660 "hlds_out_mode.m"
              {
#line 660 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_195_195 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_188_188, hlds__hlds_out__hlds_out_mode__V_187_187);
              }
#line 660 "hlds_out_mode.m"
              {
#line 660 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__FunctorName_122 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo for ", hlds__hlds_out__hlds_out_mode__V_195_195);
              }
#line 663 "hlds_out_mode.m"
              {
#line 663 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 663 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_95_95, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_122));
#line 663 "hlds_out_mode.m"
              }
#line 663 "hlds_out_mode.m"
              {
#line 663 "hlds_out_mode.m"
                MR_Word base;
#line 663 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 663 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 663 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_95_95));
#line 663 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_121));
#line 663 "hlds_out_mode.m"
              }
#line 658 "hlds_out_mode.m"
            }
#line 625 "hlds_out_mode.m"
            break;
#line 625 "hlds_out_mode.m"
          case (MR_Integer) 11:
#line 665 "hlds_out_mode.m"
            {
#line 665 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_123;

#line 666 "hlds_out_mode.m"
              {
#line 666 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_123);
              }
#line 668 "hlds_out_mode.m"
              {
#line 668 "hlds_out_mode.m"
                MR_Word base;
#line 668 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 668 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 668 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[9])));
#line 668 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_123));
#line 668 "hlds_out_mode.m"
              }
#line 665 "hlds_out_mode.m"
            }
#line 625 "hlds_out_mode.m"
            break;
#line 625 "hlds_out_mode.m"
          case (MR_Integer) 12:
#line 682 "hlds_out_mode.m"
            {
#line 682 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__TIConstNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 682 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Arg_27;
#line 682 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_63_63;
#line 682 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_68_68;
#line 682 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_71_71;
#line 682 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_131;

#line 683 "hlds_out_mode.m"
              {
#line 683 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 683 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_6[0]));
#line 683 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2));
#line 683 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 683 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
#line 683 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "hlds_out_mode.m"
              }
#line 683 "hlds_out_mode.m"
              {
#line 683 "hlds_out_mode.m"
                mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_63_63, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "type_info_const arity != 0");
              }
#line 685 "hlds_out_mode.m"
              {
#line 685 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_131);
              }
#line 687 "hlds_out_mode.m"
              {
#line 687 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 687 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_68_68, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TIConstNum_26));
#line 687 "hlds_out_mode.m"
              }
#line 687 "hlds_out_mode.m"
              {
#line 687 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Arg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 687 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_68_68));
#line 687 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_131));
#line 687 "hlds_out_mode.m"
              }
#line 688 "hlds_out_mode.m"
              {
#line 688 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_71_71, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Arg_27));
#line 688 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 688 "hlds_out_mode.m"
              }
#line 688 "hlds_out_mode.m"
              {
#line 688 "hlds_out_mode.m"
                MR_Word base;
#line 688 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 688 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 688 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[15])));
#line 688 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_71_71));
#line 688 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_131));
#line 688 "hlds_out_mode.m"
              }
#line 682 "hlds_out_mode.m"
            }
#line 625 "hlds_out_mode.m"
            break;
#line 625 "hlds_out_mode.m"
          case (MR_Integer) 13:
#line 690 "hlds_out_mode.m"
            {
#line 690 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__TCIConstNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 690 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_53_53;
#line 690 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_58_58;
#line 690 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_61_61;
#line 690 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_133;
#line 690 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Arg_135;

#line 691 "hlds_out_mode.m"
              {
#line 691 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 691 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_6[0]));
#line 691 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3));
#line 691 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 691 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
#line 691 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 691 "hlds_out_mode.m"
              }
#line 691 "hlds_out_mode.m"
              {
#line 691 "hlds_out_mode.m"
                mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_53_53, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "typeclass_info_const arity != 0");
              }
#line 693 "hlds_out_mode.m"
              {
#line 693 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_133);
              }
#line 695 "hlds_out_mode.m"
              {
#line 695 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 695 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TCIConstNum_28));
#line 695 "hlds_out_mode.m"
              }
#line 695 "hlds_out_mode.m"
              {
#line 695 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Arg_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 695 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 695 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 695 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_133));
#line 695 "hlds_out_mode.m"
              }
#line 696 "hlds_out_mode.m"
              {
#line 696 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_61_61, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Arg_135));
#line 696 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 696 "hlds_out_mode.m"
              }
#line 696 "hlds_out_mode.m"
              {
#line 696 "hlds_out_mode.m"
                MR_Word base;
#line 696 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 696 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 696 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[17])));
#line 696 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_61_61));
#line 696 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_133));
#line 696 "hlds_out_mode.m"
              }
#line 690 "hlds_out_mode.m"
            }
#line 625 "hlds_out_mode.m"
            break;
#line 625 "hlds_out_mode.m"
          case (MR_Integer) 14:
#line 698 "hlds_out_mode.m"
            {
#line 698 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubConsId_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
#line 698 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubArg_30;
#line 698 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__NumArg_31;
#line 698 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_41_41;
#line 698 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_47_47;
#line 698 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_50_50;
#line 698 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_51_51;
#line 698 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_136;
#line 698 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__TCIConstNum_138 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));

#line 699 "hlds_out_mode.m"
              {
#line 699 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 699 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_6[0]));
#line 699 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1));
#line 699 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 699 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
#line 699 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 699 "hlds_out_mode.m"
              }
#line 699 "hlds_out_mode.m"
              {
#line 699 "hlds_out_mode.m"
                mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_41_41, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "ground_term_const arity != 0");
              }
#line 701 "hlds_out_mode.m"
              {
#line 701 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(hlds__hlds_out__hlds_out_mode__SubConsId_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__SubArg_30);
              }
#line 702 "hlds_out_mode.m"
              {
#line 702 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_136);
              }
#line 704 "hlds_out_mode.m"
              {
#line 704 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 704 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TCIConstNum_138));
#line 704 "hlds_out_mode.m"
              }
#line 704 "hlds_out_mode.m"
              {
#line 704 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__NumArg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 704 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_47_47));
#line 704 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 704 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_136));
#line 704 "hlds_out_mode.m"
              }
#line 705 "hlds_out_mode.m"
              {
#line 705 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_51_51, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubArg_30));
#line 705 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 705 "hlds_out_mode.m"
              }
#line 705 "hlds_out_mode.m"
              {
#line 705 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_50_50, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__NumArg_31));
#line 705 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_50_50, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_51_51));
#line 705 "hlds_out_mode.m"
              }
#line 705 "hlds_out_mode.m"
              {
#line 705 "hlds_out_mode.m"
                MR_Word base;
#line 705 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 705 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 705 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[12])));
#line 705 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_50_50));
#line 705 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_136));
#line 705 "hlds_out_mode.m"
              }
#line 698 "hlds_out_mode.m"
            }
#line 625 "hlds_out_mode.m"
            break;
#line 625 "hlds_out_mode.m"
        }
#line 625 "hlds_out_mode.m"
        break;
#line 625 "hlds_out_mode.m"
    }
#line 625 "hlds_out_mode.m"
  }
#line 620 "hlds_out_mode.m"
}

#line 607 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1(
#line 607 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 607 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 607 "hlds_out_mode.m"
{
#line 607 "hlds_out_mode.m"
  {
#line 607 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 607 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 607 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

#line 607 "hlds_out_mode.m"
    {
#line 607 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 607 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
#line 607 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 607 "hlds_out_mode.m"
  }
#line 607 "hlds_out_mode.m"
}

#line 602 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(
#line 602 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 602 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 602 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_8,
#line 602 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_9)
#line 602 "hlds_out_mode.m"
{
#line 605 "hlds_out_mode.m"
  {
#line 605 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 605 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
#line 605 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_8, (MR_Integer) 0)));
#line 605 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_8, (MR_Integer) 1)));
#line 605 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_13;
#line 605 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__FirstTerm_14;
#line 605 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_18_18;

#line 607 "hlds_out_mode.m"
    {
#line 607 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 607 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 607 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1));
#line 607 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 607 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 607 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 607 "hlds_out_mode.m"
    }
#line 607 "hlds_out_mode.m"
    {
#line 607 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__ArgTerms_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_18_18, hlds__hlds_out__hlds_out_mode__Args_12);
    }
#line 608 "hlds_out_mode.m"
    {
#line 608 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(hlds__hlds_out__hlds_out_mode__ConsId_11, hlds__hlds_out__hlds_out_mode__ArgTerms_13, &hlds__hlds_out__hlds_out_mode__FirstTerm_14);
    }
#line 612 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__BoundInsts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 611 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__Term_10 = hlds__hlds_out__hlds_out_mode__FirstTerm_14;
#line 612 "hlds_out_mode.m"
    else
#line 613 "hlds_out_mode.m"
      {
#line 613 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__HeadBoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__BoundInsts_9, (MR_Integer) 0)));
#line 613 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TailBoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__BoundInsts_9, (MR_Integer) 1)));
#line 613 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SecondTerm_17;
#line 613 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 613 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;

#line 614 "hlds_out_mode.m"
        {
#line 614 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__SecondTerm_17 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__HeadBoundInst_15, hlds__hlds_out__hlds_out_mode__TailBoundInsts_16);
        }
#line 617 "hlds_out_mode.m"
        {
#line 617 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SecondTerm_17));
#line 617 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "hlds_out_mode.m"
        }
#line 617 "hlds_out_mode.m"
        {
#line 617 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FirstTerm_14));
#line 617 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_20_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_22_22));
#line 617 "hlds_out_mode.m"
        }
#line 616 "hlds_out_mode.m"
        {
#line 616 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[29], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
        }
#line 613 "hlds_out_mode.m"
      }
#line 605 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_10;
#line 605 "hlds_out_mode.m"
  }
#line 602 "hlds_out_mode.m"
}

#line 592 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(
#line 592 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_1,
#line 592 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_2,
#line 592 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3)
#line 592 "hlds_out_mode.m"
{
#line 595 "hlds_out_mode.m"
  {
#line 595 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 595 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__4_4;

#line 595 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 595 "hlds_out_mode.m"
      {
#line 598 "hlds_out_mode.m"
        {
#line 598 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 598 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[28]));
#line 598 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_2));
#line 598 "hlds_out_mode.m"
        }
#line 595 "hlds_out_mode.m"
      }
#line 595 "hlds_out_mode.m"
    else
#line 599 "hlds_out_mode.m"
      {
#line 599 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 599 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 1)));

#line 600 "hlds_out_mode.m"
        {
#line 600 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__HeadVar__4_4 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_1, hlds__hlds_out__hlds_out_mode__Context_2, hlds__hlds_out__hlds_out_mode__BoundInst_12, hlds__hlds_out__hlds_out_mode__BoundInsts_13);
        }
#line 599 "hlds_out_mode.m"
      }
#line 595 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__4_4;
#line 595 "hlds_out_mode.m"
  }
#line 592 "hlds_out_mode.m"
}

#line 584 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(
#line 584 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 584 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__SharedName_2)
#line 584 "hlds_out_mode.m"
{
#line 586 "hlds_out_mode.m"
  {
#line 586 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 586 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__3_3;

#line 586 "hlds_out_mode.m"
#line 586 "hlds_out_mode.m"
    switch (hlds__hlds_out__hlds_out_mode__HeadVar__1_1) {
#line 586 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 586 "hlds_out_mode.m"
      case (MR_Integer) 3:
#line 589 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "clobbered";
#line 586 "hlds_out_mode.m"
        break;
#line 586 "hlds_out_mode.m"
      case (MR_Integer) 4:
#line 590 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "mostly_clobbered";
#line 586 "hlds_out_mode.m"
        break;
#line 586 "hlds_out_mode.m"
      case (MR_Integer) 2:
#line 588 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "mostly_unique";
#line 586 "hlds_out_mode.m"
        break;
#line 586 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 586 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__SharedName_2;
#line 586 "hlds_out_mode.m"
        break;
#line 586 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 587 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "unique";
#line 586 "hlds_out_mode.m"
        break;
#line 586 "hlds_out_mode.m"
    }
#line 586 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 586 "hlds_out_mode.m"
  }
#line 584 "hlds_out_mode.m"
}

#line 571 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(
#line 571 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
#line 571 "hlds_out_mode.m"
{
#line 573 "hlds_out_mode.m"
  {
#line 573 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 573 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

#line 573 "hlds_out_mode.m"
#line 573 "hlds_out_mode.m"
    switch (hlds__hlds_out__hlds_out_mode__HeadVar__1_1) {
#line 573 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 573 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 574 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "fake";
#line 573 "hlds_out_mode.m"
        break;
#line 573 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 573 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "real";
#line 573 "hlds_out_mode.m"
        break;
#line 573 "hlds_out_mode.m"
    }
#line 573 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 573 "hlds_out_mode.m"
  }
#line 571 "hlds_out_mode.m"
}

#line 566 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(
#line 566 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
#line 566 "hlds_out_mode.m"
{
#line 568 "hlds_out_mode.m"
  {
#line 568 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 568 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

#line 568 "hlds_out_mode.m"
#line 568 "hlds_out_mode.m"
    switch (hlds__hlds_out__hlds_out_mode__HeadVar__1_1) {
#line 568 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 568 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 569 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "dead";
#line 568 "hlds_out_mode.m"
        break;
#line 568 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 568 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "live";
#line 568 "hlds_out_mode.m"
        break;
#line 568 "hlds_out_mode.m"
    }
#line 568 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 568 "hlds_out_mode.m"
  }
#line 566 "hlds_out_mode.m"
}

#line 455 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2(
#line 455 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 455 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 455 "hlds_out_mode.m"
{
#line 455 "hlds_out_mode.m"
  {
#line 455 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 455 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 455 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 455 "hlds_out_mode.m"
    {
#line 455 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 455 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
#line 455 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 455 "hlds_out_mode.m"
  }
#line 455 "hlds_out_mode.m"
}

#line 479 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1(
#line 479 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 479 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 479 "hlds_out_mode.m"
{
#line 479 "hlds_out_mode.m"
  {
#line 479 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 479 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 479 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

#line 479 "hlds_out_mode.m"
    {
#line 479 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 479 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
#line 479 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 479 "hlds_out_mode.m"
  }
#line 479 "hlds_out_mode.m"
}

#line 448 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(
#line 448 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 448 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 448 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_7)
#line 448 "hlds_out_mode.m"
{
#line 453 "hlds_out_mode.m"
  while (MR_TRUE)
#line 453 "hlds_out_mode.m"
    {
#line 453 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 453 "hlds_out_mode.m"
      {
#line 453 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 453 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Term_8;

#line 453 "hlds_out_mode.m"
#line 453 "hlds_out_mode.m"
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) {
#line 453 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 453 "hlds_out_mode.m"
          case (MR_Integer) 0:
#line 453 "hlds_out_mode.m"
            {
#line 453 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
#line 453 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 453 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_117_117;
#line 453 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_118_118;

#line 455 "hlds_out_mode.m"
              {
#line 455 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 455 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_118_118, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 455 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_118_118, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2));
#line 455 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_118_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 455 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_118_118, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
#line 455 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_118_118, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 455 "hlds_out_mode.m"
              }
#line 455 "hlds_out_mode.m"
              {
#line 455 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_117_117 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_118_118, hlds__hlds_out__hlds_out_mode__Args_10);
              }
#line 454 "hlds_out_mode.m"
              {
#line 454 "hlds_out_mode.m"
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__Name_9, hlds__hlds_out__hlds_out_mode__V_117_117, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
              }
#line 453 "hlds_out_mode.m"
            }
#line 453 "hlds_out_mode.m"
            break;
#line 453 "hlds_out_mode.m"
          case (MR_Integer) 1:
#line 458 "hlds_out_mode.m"
            {
#line 458 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Liveness_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
#line 458 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Real_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 458 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
#line 458 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 3)));

#line 462 "hlds_out_mode.m"
#line 462 "hlds_out_mode.m"
              switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 462 "hlds_out_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 462 "hlds_out_mode.m"
                case (MR_Integer) 1:
#line 463 "hlds_out_mode.m"
                  {
#line 463 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_102_102;
#line 463 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_104_104;
#line 463 "hlds_out_mode.m"
                    MR_String hlds__hlds_out__hlds_out_mode__V_105_105;
#line 463 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_106_106;
#line 463 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_107_107;
#line 463 "hlds_out_mode.m"
                    MR_String hlds__hlds_out__hlds_out_mode__V_108_108;
#line 463 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_109_109;
#line 463 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_110_110;
#line 463 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_111_111;
#line 463 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_112_112;

#line 465 "hlds_out_mode.m"
                    {
#line 465 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_105_105 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Liveness_11);
                    }
#line 465 "hlds_out_mode.m"
                    {
#line 465 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_104_104 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_105_105);
                    }
#line 466 "hlds_out_mode.m"
                    {
#line 466 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_108_108 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_12);
                    }
#line 466 "hlds_out_mode.m"
                    {
#line 466 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_107_107 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_108_108);
                    }
#line 467 "hlds_out_mode.m"
                    {
#line 467 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_110_110 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstA_13);
                    }
#line 468 "hlds_out_mode.m"
                    {
#line 468 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_112_112 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstB_14);
                    }
#line 468 "hlds_out_mode.m"
                    {
#line 468 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_111_111, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_112_112));
#line 468 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 468 "hlds_out_mode.m"
                    }
#line 467 "hlds_out_mode.m"
                    {
#line 467 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_109_109, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_110_110));
#line 467 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_109_109, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_111_111));
#line 467 "hlds_out_mode.m"
                    }
#line 466 "hlds_out_mode.m"
                    {
#line 466 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_106_106, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_107_107));
#line 466 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_106_106, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_109_109));
#line 466 "hlds_out_mode.m"
                    }
#line 465 "hlds_out_mode.m"
                    {
#line 465 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_102_102, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_104_104));
#line 465 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_102_102, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_106_106));
#line 465 "hlds_out_mode.m"
                    }
#line 464 "hlds_out_mode.m"
                    {
#line 464 "hlds_out_mode.m"
                      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[27], hlds__hlds_out__hlds_out_mode__V_102_102, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                    }
#line 463 "hlds_out_mode.m"
                  }
#line 462 "hlds_out_mode.m"
                  break;
#line 462 "hlds_out_mode.m"
                case (MR_Integer) 0:
#line 460 "hlds_out_mode.m"
                  {
#line 461 "hlds_out_mode.m"
                    {
#line 461 "hlds_out_mode.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "unify_inst");
                    }
#line 460 "hlds_out_mode.m"
                  }
#line 462 "hlds_out_mode.m"
                  break;
#line 462 "hlds_out_mode.m"
              }
#line 458 "hlds_out_mode.m"
            }
#line 453 "hlds_out_mode.m"
            break;
#line 453 "hlds_out_mode.m"
          case (MR_Integer) 2:
#line 472 "hlds_out_mode.m"
            {
#line 472 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstA_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
#line 472 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstB_120 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 476 "hlds_out_mode.m"
#line 476 "hlds_out_mode.m"
              switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 476 "hlds_out_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 476 "hlds_out_mode.m"
                case (MR_Integer) 1:
#line 477 "hlds_out_mode.m"
                  {
#line 477 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_92_92;
#line 477 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_94_94;
#line 477 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_95_95;
#line 477 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_96_96;

#line 479 "hlds_out_mode.m"
                    {
#line 479 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 479 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_94_94, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 479 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_94_94, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1));
#line 479 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 479 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_94_94, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
#line 479 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_94_94, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 479 "hlds_out_mode.m"
                    }
#line 480 "hlds_out_mode.m"
                    {
#line 480 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_96_96, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_120));
#line 480 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "hlds_out_mode.m"
                    }
#line 480 "hlds_out_mode.m"
                    {
#line 480 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_95_95, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA_119));
#line 480 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_95_95, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_96_96));
#line 480 "hlds_out_mode.m"
                    }
#line 479 "hlds_out_mode.m"
                    {
#line 479 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_92_92 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_94_94, hlds__hlds_out__hlds_out_mode__V_95_95);
                    }
#line 478 "hlds_out_mode.m"
                    {
#line 478 "hlds_out_mode.m"
                      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[22], hlds__hlds_out__hlds_out_mode__V_92_92, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                    }
#line 477 "hlds_out_mode.m"
                  }
#line 476 "hlds_out_mode.m"
                  break;
#line 476 "hlds_out_mode.m"
                case (MR_Integer) 0:
#line 474 "hlds_out_mode.m"
                  {
#line 475 "hlds_out_mode.m"
                    {
#line 475 "hlds_out_mode.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "merge_inst");
                    }
#line 474 "hlds_out_mode.m"
                  }
#line 476 "hlds_out_mode.m"
                  break;
#line 476 "hlds_out_mode.m"
              }
#line 472 "hlds_out_mode.m"
            }
#line 453 "hlds_out_mode.m"
            break;
#line 453 "hlds_out_mode.m"
          case (MR_Integer) 3:
#line 453 "hlds_out_mode.m"
#line 453 "hlds_out_mode.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) {
#line 453 "hlds_out_mode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 453 "hlds_out_mode.m"
              case (MR_Integer) 0:
#line 484 "hlds_out_mode.m"
                {
#line 484 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 484 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Uniq_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 484 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__IsLive_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 484 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Real_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 488 "hlds_out_mode.m"
#line 488 "hlds_out_mode.m"
                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 488 "hlds_out_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 488 "hlds_out_mode.m"
                    case (MR_Integer) 1:
#line 489 "hlds_out_mode.m"
                      {
#line 489 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_74_74;
#line 489 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_76_76;
#line 489 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_77_77;
#line 489 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_78_78;
#line 489 "hlds_out_mode.m"
                        MR_String hlds__hlds_out__hlds_out_mode__V_79_79;
#line 489 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_81_81;
#line 489 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_82_82;
#line 489 "hlds_out_mode.m"
                        MR_String hlds__hlds_out__hlds_out_mode__V_83_83;
#line 489 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_84_84;
#line 489 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_85_85;
#line 489 "hlds_out_mode.m"
                        MR_String hlds__hlds_out__hlds_out_mode__V_86_86;

#line 491 "hlds_out_mode.m"
                        {
#line 491 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_76_76 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_15);
                        }
#line 492 "hlds_out_mode.m"
                        {
#line 492 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_79_79 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_16, (MR_String) "shared");
                        }
#line 492 "hlds_out_mode.m"
                        {
#line 492 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_78_78 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_79_79);
                        }
#line 493 "hlds_out_mode.m"
                        {
#line 493 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_83_83 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__IsLive_17);
                        }
#line 493 "hlds_out_mode.m"
                        {
#line 493 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_82_82 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_83_83);
                        }
#line 494 "hlds_out_mode.m"
                        {
#line 494 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_86_86 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_121);
                        }
#line 494 "hlds_out_mode.m"
                        {
#line 494 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_85_85 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_86_86);
                        }
#line 494 "hlds_out_mode.m"
                        {
#line 494 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_84_84, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_85_85));
#line 494 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "hlds_out_mode.m"
                        }
#line 493 "hlds_out_mode.m"
                        {
#line 493 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_81_81, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_82_82));
#line 493 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_81_81, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_84_84));
#line 493 "hlds_out_mode.m"
                        }
#line 492 "hlds_out_mode.m"
                        {
#line 492 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_77_77, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_78_78));
#line 492 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_77_77, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_81_81));
#line 492 "hlds_out_mode.m"
                        }
#line 491 "hlds_out_mode.m"
                        {
#line 491 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_74_74, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_76_76));
#line 491 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_74_74, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_77_77));
#line 491 "hlds_out_mode.m"
                        }
#line 490 "hlds_out_mode.m"
                        {
#line 490 "hlds_out_mode.m"
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[21], hlds__hlds_out__hlds_out_mode__V_74_74, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
#line 489 "hlds_out_mode.m"
                      }
#line 488 "hlds_out_mode.m"
                      break;
#line 488 "hlds_out_mode.m"
                    case (MR_Integer) 0:
#line 486 "hlds_out_mode.m"
                      {
#line 487 "hlds_out_mode.m"
                        {
#line 487 "hlds_out_mode.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "ground_inst");
                        }
#line 486 "hlds_out_mode.m"
                      }
#line 488 "hlds_out_mode.m"
                      break;
#line 488 "hlds_out_mode.m"
                  }
#line 484 "hlds_out_mode.m"
                }
#line 453 "hlds_out_mode.m"
                break;
#line 453 "hlds_out_mode.m"
              case (MR_Integer) 1:
#line 498 "hlds_out_mode.m"
                {
#line 498 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Real_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 498 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 498 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Uniq_124 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 498 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__IsLive_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 502 "hlds_out_mode.m"
#line 502 "hlds_out_mode.m"
                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 502 "hlds_out_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 502 "hlds_out_mode.m"
                    case (MR_Integer) 1:
#line 503 "hlds_out_mode.m"
                      {
#line 503 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_56_56;
#line 503 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_58_58;
#line 503 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_59_59;
#line 503 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_60_60;
#line 503 "hlds_out_mode.m"
                        MR_String hlds__hlds_out__hlds_out_mode__V_61_61;
#line 503 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_63_63;
#line 503 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_64_64;
#line 503 "hlds_out_mode.m"
                        MR_String hlds__hlds_out__hlds_out_mode__V_65_65;
#line 503 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_66_66;
#line 503 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_67_67;
#line 503 "hlds_out_mode.m"
                        MR_String hlds__hlds_out__hlds_out_mode__V_68_68;

#line 505 "hlds_out_mode.m"
                        {
#line 505 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_58_58 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_123);
                        }
#line 506 "hlds_out_mode.m"
                        {
#line 506 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_61_61 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_124, (MR_String) "shared");
                        }
#line 506 "hlds_out_mode.m"
                        {
#line 506 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_60_60 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_61_61);
                        }
#line 507 "hlds_out_mode.m"
                        {
#line 507 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_65_65 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__IsLive_125);
                        }
#line 507 "hlds_out_mode.m"
                        {
#line 507 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_64_64 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_65_65);
                        }
#line 508 "hlds_out_mode.m"
                        {
#line 508 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_68_68 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_122);
                        }
#line 508 "hlds_out_mode.m"
                        {
#line 508 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_67_67 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_68_68);
                        }
#line 508 "hlds_out_mode.m"
                        {
#line 508 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_66_66, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_67_67));
#line 508 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 508 "hlds_out_mode.m"
                        }
#line 507 "hlds_out_mode.m"
                        {
#line 507 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_63_63, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_64_64));
#line 507 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_63_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_66_66));
#line 507 "hlds_out_mode.m"
                        }
#line 506 "hlds_out_mode.m"
                        {
#line 506 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_59_59, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_60_60));
#line 506 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_59_59, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_63_63));
#line 506 "hlds_out_mode.m"
                        }
#line 505 "hlds_out_mode.m"
                        {
#line 505 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_56_56, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 505 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_56_56, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_59_59));
#line 505 "hlds_out_mode.m"
                        }
#line 504 "hlds_out_mode.m"
                        {
#line 504 "hlds_out_mode.m"
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[20], hlds__hlds_out__hlds_out_mode__V_56_56, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
#line 503 "hlds_out_mode.m"
                      }
#line 502 "hlds_out_mode.m"
                      break;
#line 502 "hlds_out_mode.m"
                    case (MR_Integer) 0:
#line 500 "hlds_out_mode.m"
                      {
#line 501 "hlds_out_mode.m"
                        {
#line 501 "hlds_out_mode.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "any_inst");
                        }
#line 500 "hlds_out_mode.m"
                      }
#line 502 "hlds_out_mode.m"
                      break;
#line 502 "hlds_out_mode.m"
                  }
#line 498 "hlds_out_mode.m"
                }
#line 453 "hlds_out_mode.m"
                break;
#line 453 "hlds_out_mode.m"
              case (MR_Integer) 2:
#line 512 "hlds_out_mode.m"
                {
#line 512 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 516 "hlds_out_mode.m"
#line 516 "hlds_out_mode.m"
                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 516 "hlds_out_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 516 "hlds_out_mode.m"
                    case (MR_Integer) 1:
#line 517 "hlds_out_mode.m"
                      {
#line 517 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_48_48;
#line 517 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_50_50;

#line 519 "hlds_out_mode.m"
                        {
#line 519 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_50_50 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_126);
                        }
#line 519 "hlds_out_mode.m"
                        {
#line 519 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_48_48, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_50_50));
#line 519 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "hlds_out_mode.m"
                        }
#line 518 "hlds_out_mode.m"
                        {
#line 518 "hlds_out_mode.m"
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[24], hlds__hlds_out__hlds_out_mode__V_48_48, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
#line 517 "hlds_out_mode.m"
                      }
#line 516 "hlds_out_mode.m"
                      break;
#line 516 "hlds_out_mode.m"
                    case (MR_Integer) 0:
#line 514 "hlds_out_mode.m"
                      {
#line 515 "hlds_out_mode.m"
                        {
#line 515 "hlds_out_mode.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "shared_inst");
                        }
#line 514 "hlds_out_mode.m"
                      }
#line 516 "hlds_out_mode.m"
                      break;
#line 516 "hlds_out_mode.m"
                  }
#line 512 "hlds_out_mode.m"
                }
#line 453 "hlds_out_mode.m"
                break;
#line 453 "hlds_out_mode.m"
              case (MR_Integer) 3:
#line 523 "hlds_out_mode.m"
                {
#line 523 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 527 "hlds_out_mode.m"
#line 527 "hlds_out_mode.m"
                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 527 "hlds_out_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 527 "hlds_out_mode.m"
                    case (MR_Integer) 1:
#line 528 "hlds_out_mode.m"
                      {
#line 528 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_40_40;
#line 528 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_42_42;

#line 531 "hlds_out_mode.m"
                        {
#line 531 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_42_42 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_127);
                        }
#line 531 "hlds_out_mode.m"
                        {
#line 531 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_42_42));
#line 531 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "hlds_out_mode.m"
                        }
#line 529 "hlds_out_mode.m"
                        {
#line 529 "hlds_out_mode.m"
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[23], hlds__hlds_out__hlds_out_mode__V_40_40, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
#line 528 "hlds_out_mode.m"
                      }
#line 527 "hlds_out_mode.m"
                      break;
#line 527 "hlds_out_mode.m"
                    case (MR_Integer) 0:
#line 525 "hlds_out_mode.m"
                      {
#line 526 "hlds_out_mode.m"
                        {
#line 526 "hlds_out_mode.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "mostly_uniq_inst");
                        }
#line 525 "hlds_out_mode.m"
                      }
#line 527 "hlds_out_mode.m"
                      break;
#line 527 "hlds_out_mode.m"
                  }
#line 523 "hlds_out_mode.m"
                }
#line 453 "hlds_out_mode.m"
                break;
#line 453 "hlds_out_mode.m"
              case (MR_Integer) 4:
#line 535 "hlds_out_mode.m"
                {
#line 535 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
#line 535 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Uniq_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 539 "hlds_out_mode.m"
#line 539 "hlds_out_mode.m"
                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 539 "hlds_out_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 539 "hlds_out_mode.m"
                    case (MR_Integer) 1:
#line 540 "hlds_out_mode.m"
                      {
#line 540 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_150_150;
#line 540 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__Term0_19;
#line 540 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
#line 540 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 540 "hlds_out_mode.m"
                        MR_String hlds__hlds_out__hlds_out_mode__V_31_31;
#line 540 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_33_33;
#line 540 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;

#line 541 "hlds_out_mode.m"
                        {
#line 541 "hlds_out_mode.m"
                          parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_18, &hlds__hlds_out__hlds_out_mode__Term0_19);
                        }
#line 543 "hlds_out_mode.m"
                        {
#line 543 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_31_31 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_128, (MR_String) "shared");
                        }
#line 543 "hlds_out_mode.m"
                        {
#line 543 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_30_30 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_31_31);
                        }
#line 7208 "hlds.hlds_out.hlds_out_mode.c"
                        hlds__hlds_out__hlds_out_mode__TypeCtorInfo_150_150 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 544 "hlds_out_mode.m"
                        {
#line 544 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_34_34 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__hlds_out__hlds_out_mode__TypeCtorInfo_150_150, hlds__hlds_out__hlds_out_mode__Term0_19);
                        }
#line 544 "hlds_out_mode.m"
                        {
#line 544 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34));
#line 544 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "hlds_out_mode.m"
                        }
#line 543 "hlds_out_mode.m"
                        {
#line 543 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_30_30));
#line 543 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_33_33));
#line 543 "hlds_out_mode.m"
                        }
#line 542 "hlds_out_mode.m"
                        {
#line 542 "hlds_out_mode.m"
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_150_150, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[25], hlds__hlds_out__hlds_out_mode__V_28_28, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
#line 540 "hlds_out_mode.m"
                      }
#line 539 "hlds_out_mode.m"
                      break;
#line 539 "hlds_out_mode.m"
                    case (MR_Integer) 0:
#line 537 "hlds_out_mode.m"
                      {
#line 538 "hlds_out_mode.m"
                        {
#line 538 "hlds_out_mode.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "typed_ground");
                        }
#line 537 "hlds_out_mode.m"
                      }
#line 539 "hlds_out_mode.m"
                      break;
#line 539 "hlds_out_mode.m"
                  }
#line 535 "hlds_out_mode.m"
                }
#line 453 "hlds_out_mode.m"
                break;
#line 453 "hlds_out_mode.m"
              case (MR_Integer) 5:
#line 548 "hlds_out_mode.m"
                {
#line 548 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
#line 548 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Type_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 556 "hlds_out_mode.m"
#line 556 "hlds_out_mode.m"
                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 556 "hlds_out_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 556 "hlds_out_mode.m"
                    case (MR_Integer) 1:
#line 557 "hlds_out_mode.m"
                      {
#line 557 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_152_152;
#line 557 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
#line 557 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_23_23;
#line 557 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 557 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
#line 557 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__Term0_129;

#line 558 "hlds_out_mode.m"
                        {
#line 558 "hlds_out_mode.m"
                          parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_132, &hlds__hlds_out__hlds_out_mode__Term0_129);
                        }
#line 7299 "hlds.hlds_out.hlds_out_mode.c"
                        hlds__hlds_out__hlds_out_mode__TypeCtorInfo_152_152 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 560 "hlds_out_mode.m"
                        {
#line 560 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_23_23 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__hlds_out__hlds_out_mode__TypeCtorInfo_152_152, hlds__hlds_out__hlds_out_mode__Term0_129);
                        }
#line 561 "hlds_out_mode.m"
                        {
#line 561 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_25_25 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_131);
                        }
#line 561 "hlds_out_mode.m"
                        {
#line 561 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_25_25));
#line 561 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 561 "hlds_out_mode.m"
                        }
#line 560 "hlds_out_mode.m"
                        {
#line 560 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_21_21, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_23_23));
#line 560 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_24_24));
#line 560 "hlds_out_mode.m"
                        }
#line 559 "hlds_out_mode.m"
                        {
#line 559 "hlds_out_mode.m"
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_152_152, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[26], hlds__hlds_out__hlds_out_mode__V_21_21, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
#line 557 "hlds_out_mode.m"
                      }
#line 556 "hlds_out_mode.m"
                      break;
#line 556 "hlds_out_mode.m"
                    case (MR_Integer) 0:
#line 555 "hlds_out_mode.m"
                      {
#line 555 "hlds_out_mode.m"
                        /* direct tailcall eliminated */
#line 555 "hlds_out_mode.m"
                        {
#line 555 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__InstName__tmp_copy_7 = hlds__hlds_out__hlds_out_mode__SubInstName_131;

#line 555 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__InstName_7 = hlds__hlds_out__hlds_out_mode__InstName__tmp_copy_7;
#line 555 "hlds_out_mode.m"
                        }
#line 555 "hlds_out_mode.m"
                        continue;
#line 555 "hlds_out_mode.m"
                      }
#line 556 "hlds_out_mode.m"
                      break;
#line 556 "hlds_out_mode.m"
                  }
#line 548 "hlds_out_mode.m"
                }
#line 453 "hlds_out_mode.m"
                break;
#line 453 "hlds_out_mode.m"
            }
#line 453 "hlds_out_mode.m"
            break;
#line 453 "hlds_out_mode.m"
        }
#line 453 "hlds_out_mode.m"
        return hlds__hlds_out__hlds_out_mode__Term_8;
#line 453 "hlds_out_mode.m"
      }
#line 453 "hlds_out_mode.m"
      break;
#line 453 "hlds_out_mode.m"
    }
#line 448 "hlds_out_mode.m"
}

#line 389 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(
#line 389 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 389 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_5)
#line 389 "hlds_out_mode.m"
{
#line 391 "hlds_out_mode.m"
  {
#line 391 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 391 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;
#line 391 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_5, (MR_Integer) 0)));
#line 391 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_5, (MR_Integer) 1)));
#line 391 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__ConsName_9;
#line 391 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_13_13;
#line 391 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_17_17;
#line 391 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_19_19;
#line 391 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
#line 391 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_27_27;
#line 391 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_28_28;

#line 393 "hlds_out_mode.m"
    {
#line 393 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_13_13 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__SymName_7);
    }
#line 7423 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__V_25_25 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19];
#line 393 "hlds_out_mode.m"
    {
#line 393 "hlds_out_mode.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_25_25, hlds__hlds_out__hlds_out_mode__Arity_8, &hlds__hlds_out__hlds_out_mode__V_19_19);
    }
#line 393 "hlds_out_mode.m"
    {
#line 393 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_19_19);
    }
#line 393 "hlds_out_mode.m"
    {
#line 393 "hlds_out_mode.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_25_25, hlds__hlds_out__hlds_out_mode__V_13_13, &hlds__hlds_out__hlds_out_mode__V_28_28);
    }
#line 393 "hlds_out_mode.m"
    {
#line 393 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__ConsName_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_28_28, hlds__hlds_out__hlds_out_mode__V_27_27);
    }
#line 395 "hlds_out_mode.m"
    {
#line 395 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 395 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_17_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ConsName_9));
#line 395 "hlds_out_mode.m"
    }
#line 395 "hlds_out_mode.m"
    {
#line 395 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 395 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_17_17));
#line 395 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 395 "hlds_out_mode.m"
    }
#line 391 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 391 "hlds_out_mode.m"
  }
#line 389 "hlds_out_mode.m"
}

#line 376 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_type_ctor_propagated_to_term_2_f_0(
#line 376 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 376 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PropagatedResult_5)
#line 376 "hlds_out_mode.m"
{
#line 381 "hlds_out_mode.m"
  {
#line 381 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 381 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;

#line 381 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__PropagatedResult_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "hlds_out_mode.m"
      {
#line 382 "hlds_out_mode.m"
        {
#line 382 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 382 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[17]));
#line 382 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 382 "hlds_out_mode.m"
        }
#line 381 "hlds_out_mode.m"
      }
#line 381 "hlds_out_mode.m"
    else
#line 384 "hlds_out_mode.m"
      {
#line 384 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__PropagatedResult_5), (MR_Integer) 1);
#line 384 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;
#line 384 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_11_11;

#line 386 "hlds_out_mode.m"
        {
#line 386 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_11_11 = hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_4, hlds__hlds_out__hlds_out_mode__TypeCtor_7);
        }
#line 386 "hlds_out_mode.m"
        {
#line 386 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_10_10, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_11_11));
#line 386 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "hlds_out_mode.m"
        }
#line 385 "hlds_out_mode.m"
        {
#line 385 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 385 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[18]));
#line 385 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_10_10));
#line 385 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 385 "hlds_out_mode.m"
        }
#line 384 "hlds_out_mode.m"
      }
#line 381 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 381 "hlds_out_mode.m"
  }
#line 376 "hlds_out_mode.m"
}

#line 371 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0_1(
#line 371 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 371 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 371 "hlds_out_mode.m"
{
#line 371 "hlds_out_mode.m"
  {
#line 371 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 371 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 371 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_6;

#line 371 "hlds_out_mode.m"
    {
#line 371 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_6 = hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 371 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_6));
#line 371 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 371 "hlds_out_mode.m"
  }
#line 371 "hlds_out_mode.m"
}

#line 361 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0(
#line 361 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 361 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ContainsTypes_5)
#line 361 "hlds_out_mode.m"
{
#line 366 "hlds_out_mode.m"
  {
#line 366 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 366 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;

#line 366 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__ContainsTypes_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "hlds_out_mode.m"
      {
#line 367 "hlds_out_mode.m"
        {
#line 367 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 367 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[15]));
#line 367 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 367 "hlds_out_mode.m"
        }
#line 366 "hlds_out_mode.m"
      }
#line 366 "hlds_out_mode.m"
    else
#line 369 "hlds_out_mode.m"
      {
#line 369 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 369 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ContainsTypes_5, (MR_Integer) 0)));
#line 369 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtors_8;
#line 369 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorTerms_9;
#line 369 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;

#line 370 "hlds_out_mode.m"
        {
#line 370 "hlds_out_mode.m"
          mercury__set__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_mode__TypeCtorSet_7, &hlds__hlds_out__hlds_out_mode__TypeCtors_8);
        }
#line 371 "hlds_out_mode.m"
        {
#line 371 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 371 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_5[1]));
#line 371 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0_1));
#line 371 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 371 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 371 "hlds_out_mode.m"
        }
#line 371 "hlds_out_mode.m"
        {
#line 371 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__TypeCtorTerms_9 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_16, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_10_10, hlds__hlds_out__hlds_out_mode__TypeCtors_8);
        }
#line 372 "hlds_out_mode.m"
        {
#line 372 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 372 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[16]));
#line 372 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TypeCtorTerms_9));
#line 372 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 372 "hlds_out_mode.m"
        }
#line 369 "hlds_out_mode.m"
      }
#line 366 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 366 "hlds_out_mode.m"
  }
#line 361 "hlds_out_mode.m"
}

#line 354 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_var_to_term_2_f_0(
#line 354 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 354 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVar_5)
#line 354 "hlds_out_mode.m"
{
#line 356 "hlds_out_mode.m"
  {
#line 356 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 356 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;
#line 356 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstVarNum_7;
#line 356 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__InstVarNumStr_8;
#line 356 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_9_9;
#line 356 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_10_10;

#line 357 "hlds_out_mode.m"
    {
#line 357 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__InstVarNum_7 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__hlds_out__hlds_out_mode__InstVar_5);
    }
#line 358 "hlds_out_mode.m"
    {
#line 358 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__InstVarNumStr_8 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__InstVarNum_7);
    }
#line 359 "hlds_out_mode.m"
    {
#line 359 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "inst_var_", hlds__hlds_out__hlds_out_mode__InstVarNumStr_8);
    }
#line 359 "hlds_out_mode.m"
    {
#line 359 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_9_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 359 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_9_9, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_10_10));
#line 359 "hlds_out_mode.m"
    }
#line 359 "hlds_out_mode.m"
    {
#line 359 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 359 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_9_9));
#line 359 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 359 "hlds_out_mode.m"
    }
#line 356 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 356 "hlds_out_mode.m"
  }
#line 354 "hlds_out_mode.m"
}

#line 349 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1(
#line 349 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 349 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 349 "hlds_out_mode.m"
{
#line 349 "hlds_out_mode.m"
  {
#line 349 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 349 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 349 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_6;

#line 349 "hlds_out_mode.m"
    {
#line 349 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_6 = hlds__hlds_out__hlds_out_mode__inst_var_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 349 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_6));
#line 349 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 349 "hlds_out_mode.m"
  }
#line 349 "hlds_out_mode.m"
}

#line 264 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(
#line 264 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 264 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstResults_5)
#line 264 "hlds_out_mode.m"
{
#line 269 "hlds_out_mode.m"
  {
#line 269 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 269 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;

#line 269 "hlds_out_mode.m"
#line 269 "hlds_out_mode.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstResults_5)) {
#line 269 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 269 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 269 "hlds_out_mode.m"
#line 269 "hlds_out_mode.m"
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_mode__InstResults_5)) {
#line 269 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 269 "hlds_out_mode.m"
          case (MR_Integer) 0:
#line 283 "hlds_out_mode.m"
            {
#line 284 "hlds_out_mode.m"
              {
#line 284 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 284 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[2]));
#line 284 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 284 "hlds_out_mode.m"
              }
#line 283 "hlds_out_mode.m"
            }
#line 269 "hlds_out_mode.m"
            break;
#line 269 "hlds_out_mode.m"
          case (MR_Integer) 1:
#line 286 "hlds_out_mode.m"
            {
#line 287 "hlds_out_mode.m"
              {
#line 287 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 287 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[14]));
#line 287 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 287 "hlds_out_mode.m"
              }
#line 286 "hlds_out_mode.m"
            }
#line 269 "hlds_out_mode.m"
            break;
#line 269 "hlds_out_mode.m"
        }
#line 269 "hlds_out_mode.m"
        break;
#line 269 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 269 "hlds_out_mode.m"
        {
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__GroundnessResult_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 0)));
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__AnyResult_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 1)));
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstNamesResult_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 2)));
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstVarsResult_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 3)));
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeResult_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 4)));
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__PropagatedResult_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 5)));
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm1_13;
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm2_14;
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm3_15;
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm4_16;
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm5_17;
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm6_18;
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_29_29;
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_31_31;
#line 269 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

#line 295 "hlds_out_mode.m"
#line 295 "hlds_out_mode.m"
          switch (hlds__hlds_out__hlds_out_mode__GroundnessResult_7) {
#line 295 "hlds_out_mode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 295 "hlds_out_mode.m"
            case (MR_Integer) 2:
#line 301 "hlds_out_mode.m"
              {
#line 302 "hlds_out_mode.m"
                {
#line 302 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 302 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[3]));
#line 302 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 302 "hlds_out_mode.m"
                }
#line 301 "hlds_out_mode.m"
              }
#line 295 "hlds_out_mode.m"
              break;
#line 295 "hlds_out_mode.m"
            case (MR_Integer) 1:
#line 298 "hlds_out_mode.m"
              {
#line 299 "hlds_out_mode.m"
                {
#line 299 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 299 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[4]));
#line 299 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 299 "hlds_out_mode.m"
                }
#line 298 "hlds_out_mode.m"
              }
#line 295 "hlds_out_mode.m"
              break;
#line 295 "hlds_out_mode.m"
            case (MR_Integer) 0:
#line 295 "hlds_out_mode.m"
              {
#line 296 "hlds_out_mode.m"
                {
#line 296 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 296 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[5]));
#line 296 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 296 "hlds_out_mode.m"
                }
#line 295 "hlds_out_mode.m"
              }
#line 295 "hlds_out_mode.m"
              break;
#line 295 "hlds_out_mode.m"
          }
#line 310 "hlds_out_mode.m"
#line 310 "hlds_out_mode.m"
          switch (hlds__hlds_out__hlds_out_mode__AnyResult_8) {
#line 310 "hlds_out_mode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 310 "hlds_out_mode.m"
            case (MR_Integer) 2:
#line 316 "hlds_out_mode.m"
              {
#line 317 "hlds_out_mode.m"
                {
#line 317 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 317 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[6]));
#line 317 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 317 "hlds_out_mode.m"
                }
#line 316 "hlds_out_mode.m"
              }
#line 310 "hlds_out_mode.m"
              break;
#line 310 "hlds_out_mode.m"
            case (MR_Integer) 1:
#line 313 "hlds_out_mode.m"
              {
#line 314 "hlds_out_mode.m"
                {
#line 314 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 314 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[7]));
#line 314 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 314 "hlds_out_mode.m"
                }
#line 313 "hlds_out_mode.m"
              }
#line 310 "hlds_out_mode.m"
              break;
#line 310 "hlds_out_mode.m"
            case (MR_Integer) 0:
#line 310 "hlds_out_mode.m"
              {
#line 311 "hlds_out_mode.m"
                {
#line 311 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 311 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[8]));
#line 311 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 311 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 311 "hlds_out_mode.m"
                }
#line 310 "hlds_out_mode.m"
              }
#line 310 "hlds_out_mode.m"
              break;
#line 310 "hlds_out_mode.m"
          }
#line 325 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__InstNamesResult_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "hlds_out_mode.m"
            {
#line 326 "hlds_out_mode.m"
              {
#line 326 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 326 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[9]));
#line 326 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 326 "hlds_out_mode.m"
              }
#line 325 "hlds_out_mode.m"
            }
#line 325 "hlds_out_mode.m"
          else
#line 329 "hlds_out_mode.m"
            {
#line 329 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstNameSet_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstNamesResult_9, (MR_Integer) 0)));
#line 329 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__NumInstNames_62;
#line 329 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__CountTerm_63;
#line 329 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_64_64;
#line 329 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_68_68;

#line 332 "hlds_out_mode.m"
              {
#line 332 "hlds_out_mode.m"
                mercury__set__count_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, hlds__hlds_out__hlds_out_mode__InstNameSet_61, &hlds__hlds_out__hlds_out_mode__NumInstNames_62);
              }
#line 333 "hlds_out_mode.m"
              {
#line 333 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 333 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_64_64, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__NumInstNames_62));
#line 333 "hlds_out_mode.m"
              }
#line 333 "hlds_out_mode.m"
              {
#line 333 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__CountTerm_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 333 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_63, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_64_64));
#line 333 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_63, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 333 "hlds_out_mode.m"
              }
#line 335 "hlds_out_mode.m"
              {
#line 335 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_68_68, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__CountTerm_63));
#line 335 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 335 "hlds_out_mode.m"
              }
#line 334 "hlds_out_mode.m"
              {
#line 334 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 334 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[10]));
#line 334 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_68_68));
#line 334 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 334 "hlds_out_mode.m"
              }
#line 329 "hlds_out_mode.m"
            }
#line 343 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__InstVarsResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 343 "hlds_out_mode.m"
            {
#line 344 "hlds_out_mode.m"
              {
#line 344 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 344 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[11]));
#line 344 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 344 "hlds_out_mode.m"
              }
#line 343 "hlds_out_mode.m"
            }
#line 343 "hlds_out_mode.m"
          else
#line 347 "hlds_out_mode.m"
            {
#line 347 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__TypeInfo_16_86 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[4];
#line 347 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstVarsResult_10, (MR_Integer) 0)));
#line 347 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstVars_78;
#line 347 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstVarTerms_79;
#line 347 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_80_80;

#line 348 "hlds_out_mode.m"
              {
#line 348 "hlds_out_mode.m"
                mercury__set__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_mode__TypeInfo_16_86, hlds__hlds_out__hlds_out_mode__InstVarSet_77, &hlds__hlds_out__hlds_out_mode__InstVars_78);
              }
#line 349 "hlds_out_mode.m"
              {
#line 349 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 349 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_5[0]));
#line 349 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1));
#line 349 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 349 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 349 "hlds_out_mode.m"
              }
#line 349 "hlds_out_mode.m"
              {
#line 349 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__InstVarTerms_79 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeInfo_16_86, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_80_80, hlds__hlds_out__hlds_out_mode__InstVars_78);
              }
#line 350 "hlds_out_mode.m"
              {
#line 350 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 350 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[12]));
#line 350 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstVarTerms_79));
#line 350 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 350 "hlds_out_mode.m"
              }
#line 347 "hlds_out_mode.m"
            }
#line 276 "hlds_out_mode.m"
          {
#line 276 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__SubTerm5_17 = hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_4, hlds__hlds_out__hlds_out_mode__TypeResult_11);
          }
#line 277 "hlds_out_mode.m"
          {
#line 277 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__SubTerm6_18 = hlds__hlds_out__hlds_out_mode__inst_result_type_ctor_propagated_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_4, hlds__hlds_out__hlds_out_mode__PropagatedResult_12);
          }
#line 280 "hlds_out_mode.m"
          {
#line 280 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm6_18));
#line 280 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "hlds_out_mode.m"
          }
#line 280 "hlds_out_mode.m"
          {
#line 280 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_31_31, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm5_17));
#line 280 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_31_31, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_32_32));
#line 280 "hlds_out_mode.m"
          }
#line 280 "hlds_out_mode.m"
          {
#line 280 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_30_30, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm4_16));
#line 280 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_30_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_31_31));
#line 280 "hlds_out_mode.m"
          }
#line 280 "hlds_out_mode.m"
          {
#line 280 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_29_29, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm3_15));
#line 280 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_29_29, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_30_30));
#line 280 "hlds_out_mode.m"
          }
#line 280 "hlds_out_mode.m"
          {
#line 280 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm2_14));
#line 280 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_29_29));
#line 280 "hlds_out_mode.m"
          }
#line 280 "hlds_out_mode.m"
          {
#line 280 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_27_27, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm1_13));
#line 280 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_28_28));
#line 280 "hlds_out_mode.m"
          }
#line 279 "hlds_out_mode.m"
          {
#line 279 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 279 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[13]));
#line 279 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
#line 279 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 279 "hlds_out_mode.m"
          }
#line 269 "hlds_out_mode.m"
        }
#line 269 "hlds_out_mode.m"
        break;
#line 269 "hlds_out_mode.m"
    }
#line 269 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 269 "hlds_out_mode.m"
  }
#line 264 "hlds_out_mode.m"
}

#line 247 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0_1(
#line 247 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 247 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 247 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
#line 247 "hlds_out_mode.m"
{
#line 247 "hlds_out_mode.m"
  {
#line 247 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3;
#line 247 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 247 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_LambdaHeadVar__3_30;

#line 247 "hlds_out_mode.m"
    {
#line 247 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_LambdaHeadVar__3_30 = hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__247__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
#line 247 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_LambdaHeadVar__3_30));
#line 247 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_3;
#line 247 "hlds_out_mode.m"
  }
#line 247 "hlds_out_mode.m"
}

#line 196 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(
#line 196 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 196 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 196 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7)
#line 196 "hlds_out_mode.m"
{
#line 201 "hlds_out_mode.m"
  {
#line 201 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 201 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_8;

#line 201 "hlds_out_mode.m"
#line 201 "hlds_out_mode.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) {
#line 201 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 201 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 201 "hlds_out_mode.m"
#line 201 "hlds_out_mode.m"
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_mode__Inst_7)) {
#line 201 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 201 "hlds_out_mode.m"
          case (MR_Integer) 0:
#line 211 "hlds_out_mode.m"
            {
#line 137 "hlds_out_mode.m"
              {
#line 137 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 137 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[1]));
#line 137 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 137 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 137 "hlds_out_mode.m"
              }
#line 211 "hlds_out_mode.m"
            }
#line 201 "hlds_out_mode.m"
            break;
#line 201 "hlds_out_mode.m"
          case (MR_Integer) 1:
#line 260 "hlds_out_mode.m"
            {
#line 261 "hlds_out_mode.m"
              {
#line 261 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, (MR_String) "not_reached");
              }
#line 260 "hlds_out_mode.m"
            }
#line 201 "hlds_out_mode.m"
            break;
#line 201 "hlds_out_mode.m"
        }
#line 201 "hlds_out_mode.m"
        break;
#line 201 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 214 "hlds_out_mode.m"
        {
#line 214 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)));
#line 214 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Term0_13;
#line 214 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Term1_14;
#line 214 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;

#line 215 "hlds_out_mode.m"
          {
#line 215 "hlds_out_mode.m"
            parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_12, &hlds__hlds_out__hlds_out_mode__Term0_13);
          }
#line 216 "hlds_out_mode.m"
          {
#line 216 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Term1_14 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__Term0_13);
          }
#line 217 "hlds_out_mode.m"
          {
#line 217 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Term1_14));
#line 217 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 217 "hlds_out_mode.m"
          }
#line 217 "hlds_out_mode.m"
          {
#line 217 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 217 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[1]));
#line 217 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
#line 217 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 217 "hlds_out_mode.m"
          }
#line 214 "hlds_out_mode.m"
        }
#line 201 "hlds_out_mode.m"
        break;
#line 201 "hlds_out_mode.m"
      case (MR_Integer) 2:
#line 201 "hlds_out_mode.m"
        {
#line 201 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)));
#line 201 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));

#line 206 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 207 "hlds_out_mode.m"
            {
#line 207 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_58_58 = ((&hlds__hlds_out__hlds_out_mode_vector_common_4[0 + hlds__hlds_out__hlds_out_mode__Uniq_9]))->hlds__hlds_out__hlds_out_mode__vector_common_type_4_0__vct_4_f_0;
#line 207 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_78_78;

#line 137 "hlds_out_mode.m"
              {
#line 137 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 137 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_78_78, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 137 "hlds_out_mode.m"
              }
#line 137 "hlds_out_mode.m"
              {
#line 137 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 137 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_78_78));
#line 137 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 137 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 137 "hlds_out_mode.m"
              }
#line 207 "hlds_out_mode.m"
            }
#line 206 "hlds_out_mode.m"
          else
#line 203 "hlds_out_mode.m"
            {
#line 203 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_11 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_10), (MR_Integer) 1);

#line 204 "hlds_out_mode.m"
              {
#line 204 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__PredInstInfo_11);
              }
#line 203 "hlds_out_mode.m"
            }
#line 201 "hlds_out_mode.m"
        }
#line 201 "hlds_out_mode.m"
        break;
#line 201 "hlds_out_mode.m"
      case (MR_Integer) 3:
#line 201 "hlds_out_mode.m"
#line 201 "hlds_out_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)))) {
#line 201 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 201 "hlds_out_mode.m"
          case (MR_Integer) 0:
#line 219 "hlds_out_mode.m"
            {
#line 219 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstResults_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));
#line 219 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 3)));
#line 219 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_17;
#line 219 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_50_50;
#line 219 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_51_51;
#line 219 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));

#line 223 "hlds_out_mode.m"
#line 223 "hlds_out_mode.m"
              switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 223 "hlds_out_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 223 "hlds_out_mode.m"
                case (MR_Integer) 1:
#line 224 "hlds_out_mode.m"
                  {
#line 224 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_44_44;
#line 224 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_45_45;
#line 224 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_46_46;

#line 226 "hlds_out_mode.m"
                    {
#line 226 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_44_44 = hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstResults_15);
                    }
#line 227 "hlds_out_mode.m"
                    {
#line 227 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_46_46 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__BoundInsts_16);
                    }
#line 227 "hlds_out_mode.m"
                    {
#line 227 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_45_45, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_46_46));
#line 227 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "hlds_out_mode.m"
                    }
#line 226 "hlds_out_mode.m"
                    {
#line 226 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_44_44));
#line 226 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_45_45));
#line 226 "hlds_out_mode.m"
                    }
#line 224 "hlds_out_mode.m"
                  }
#line 223 "hlds_out_mode.m"
                  break;
#line 223 "hlds_out_mode.m"
                case (MR_Integer) 0:
#line 221 "hlds_out_mode.m"
                  {
#line 221 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_48_48;

#line 222 "hlds_out_mode.m"
                    {
#line 222 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_48_48 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__BoundInsts_16);
                    }
#line 222 "hlds_out_mode.m"
                    {
#line 222 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_48_48));
#line 222 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 222 "hlds_out_mode.m"
                    }
#line 221 "hlds_out_mode.m"
                  }
#line 223 "hlds_out_mode.m"
                  break;
#line 223 "hlds_out_mode.m"
              }
#line 586 "hlds_out_mode.m"
#line 586 "hlds_out_mode.m"
              switch (hlds__hlds_out__hlds_out_mode__Uniq_59) {
#line 586 "hlds_out_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 586 "hlds_out_mode.m"
                case (MR_Integer) 3:
#line 589 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "clobbered";
#line 586 "hlds_out_mode.m"
                  break;
#line 586 "hlds_out_mode.m"
                case (MR_Integer) 4:
#line 590 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "mostly_clobbered";
#line 586 "hlds_out_mode.m"
                  break;
#line 586 "hlds_out_mode.m"
                case (MR_Integer) 2:
#line 588 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "mostly_unique";
#line 586 "hlds_out_mode.m"
                  break;
#line 586 "hlds_out_mode.m"
                case (MR_Integer) 0:
#line 586 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "bound";
#line 586 "hlds_out_mode.m"
                  break;
#line 586 "hlds_out_mode.m"
                case (MR_Integer) 1:
#line 587 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "unique";
#line 586 "hlds_out_mode.m"
                  break;
#line 586 "hlds_out_mode.m"
              }
#line 230 "hlds_out_mode.m"
              {
#line 230 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 230 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_50_50, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_51_51));
#line 230 "hlds_out_mode.m"
              }
#line 229 "hlds_out_mode.m"
              {
#line 229 "hlds_out_mode.m"
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__V_50_50, hlds__hlds_out__hlds_out_mode__ArgTerms_17, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
              }
#line 219 "hlds_out_mode.m"
            }
#line 201 "hlds_out_mode.m"
            break;
#line 201 "hlds_out_mode.m"
          case (MR_Integer) 1:
#line 233 "hlds_out_mode.m"
            {
#line 233 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
#line 233 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));

#line 238 "hlds_out_mode.m"
              if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "hlds_out_mode.m"
                {
#line 239 "hlds_out_mode.m"
                  MR_String hlds__hlds_out__hlds_out_mode__V_42_42;
#line 239 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__V_96_96;

#line 586 "hlds_out_mode.m"
#line 586 "hlds_out_mode.m"
                  switch (hlds__hlds_out__hlds_out_mode__Uniq_62) {
#line 586 "hlds_out_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 586 "hlds_out_mode.m"
                    case (MR_Integer) 3:
#line 589 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "clobbered";
#line 586 "hlds_out_mode.m"
                      break;
#line 586 "hlds_out_mode.m"
                    case (MR_Integer) 4:
#line 590 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "mostly_clobbered";
#line 586 "hlds_out_mode.m"
                      break;
#line 586 "hlds_out_mode.m"
                    case (MR_Integer) 2:
#line 588 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "mostly_unique";
#line 586 "hlds_out_mode.m"
                      break;
#line 586 "hlds_out_mode.m"
                    case (MR_Integer) 0:
#line 586 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "ground";
#line 586 "hlds_out_mode.m"
                      break;
#line 586 "hlds_out_mode.m"
                    case (MR_Integer) 1:
#line 587 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "unique";
#line 586 "hlds_out_mode.m"
                      break;
#line 586 "hlds_out_mode.m"
                  }
#line 137 "hlds_out_mode.m"
                  {
#line 137 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 137 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_96_96, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_42_42));
#line 137 "hlds_out_mode.m"
                  }
#line 137 "hlds_out_mode.m"
                  {
#line 137 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 137 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_96_96));
#line 137 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 137 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 137 "hlds_out_mode.m"
                  }
#line 239 "hlds_out_mode.m"
                }
#line 238 "hlds_out_mode.m"
              else
#line 235 "hlds_out_mode.m"
                {
#line 235 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_60 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_63), (MR_Integer) 1);

#line 236 "hlds_out_mode.m"
                  {
#line 236 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__PredInstInfo_60);
                  }
#line 235 "hlds_out_mode.m"
                }
#line 233 "hlds_out_mode.m"
            }
#line 201 "hlds_out_mode.m"
            break;
#line 201 "hlds_out_mode.m"
          case (MR_Integer) 2:
#line 243 "hlds_out_mode.m"
            {
#line 243 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
#line 243 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_40_40;
#line 243 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_41_41;

#line 244 "hlds_out_mode.m"
              {
#line 244 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_41_41 = mercury__term__context_init_0_f_0();
              }
#line 244 "hlds_out_mode.m"
              {
#line 244 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Var_18));
#line 244 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_41_41));
#line 244 "hlds_out_mode.m"
              }
#line 244 "hlds_out_mode.m"
              {
#line 244 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Term_8 = mercury__term__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__V_40_40);
              }
#line 243 "hlds_out_mode.m"
            }
#line 201 "hlds_out_mode.m"
            break;
#line 201 "hlds_out_mode.m"
          case (MR_Integer) 3:
#line 246 "hlds_out_mode.m"
            {
#line 246 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
#line 246 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));
#line 246 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 246 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_39_39;
#line 247 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 247 "hlds_out_mode.m"
              {
#line 247 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 247 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[1]));
#line 247 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0_1));
#line 247 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 247 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 247 "hlds_out_mode.m"
              }
#line 251 "hlds_out_mode.m"
              {
#line 251 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_39_39 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInst_20);
              }
#line 247 "hlds_out_mode.m"
              {
#line 247 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__conv1_Term_8 = mercury__set__fold_3_f_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[4], (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_27_27, hlds__hlds_out__hlds_out_mode__Vars_19, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_39_39)));
              }
#line 247 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__Term_8 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv1_Term_8);
#line 246 "hlds_out_mode.m"
            }
#line 201 "hlds_out_mode.m"
            break;
#line 201 "hlds_out_mode.m"
          case (MR_Integer) 4:
#line 257 "hlds_out_mode.m"
            {
#line 257 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));

#line 258 "hlds_out_mode.m"
              {
#line 258 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstName_24);
              }
#line 257 "hlds_out_mode.m"
            }
#line 201 "hlds_out_mode.m"
            break;
#line 201 "hlds_out_mode.m"
          case (MR_Integer) 5:
#line 253 "hlds_out_mode.m"
            {
#line 253 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
#line 253 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));
#line 253 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;

#line 255 "hlds_out_mode.m"
              {
#line 255 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 255 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_22));
#line 255 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Args_23));
#line 255 "hlds_out_mode.m"
              }
#line 254 "hlds_out_mode.m"
              {
#line 254 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_26_26);
              }
#line 253 "hlds_out_mode.m"
            }
#line 201 "hlds_out_mode.m"
            break;
#line 201 "hlds_out_mode.m"
        }
#line 201 "hlds_out_mode.m"
        break;
#line 201 "hlds_out_mode.m"
    }
#line 201 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_8;
#line 201 "hlds_out_mode.m"
  }
#line 196 "hlds_out_mode.m"
}

#line 134 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(
#line 134 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 134 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__Name_5)
#line 134 "hlds_out_mode.m"
{
#line 136 "hlds_out_mode.m"
  {
#line 136 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 136 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 136 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

#line 137 "hlds_out_mode.m"
    {
#line 137 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 137 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_6_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_5));
#line 137 "hlds_out_mode.m"
    }
#line 137 "hlds_out_mode.m"
    {
#line 137 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 137 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_6_6));
#line 137 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 137 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 137 "hlds_out_mode.m"
    }
#line 136 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 136 "hlds_out_mode.m"
  }
#line 134 "hlds_out_mode.m"
}

#line 104 "hlds_out_mode.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_4_f_0(
#line 104 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 104 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ModuleInfo_7,
#line 104 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_8,
#line 104 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_9)
#line 104 "hlds_out_mode.m"
{
#line 1180 "hlds_out_mode.m"
  {
#line 1180 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1180 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_10;
#line 1180 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Expansions_11;
#line 1180 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_12;
#line 1183 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_10;

#line 1181 "hlds_out_mode.m"
    {
#line 1181 "hlds_out_mode.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &hlds__hlds_out__hlds_out_mode__Expansions_11);
    }
#line 1182 "hlds_out_mode.m"
    {
#line 1182 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1182 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_12, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstVarSet_8));
#line 1182 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_12, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModuleInfo_7));
#line 1182 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_12, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Expansions_11));
#line 1182 "hlds_out_mode.m"
    }
#line 1183 "hlds_out_mode.m"
    {
#line 1183 "hlds_out_mode.m"
      parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__Lang_6, ((MR_Box) (hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_12)), hlds__hlds_out__hlds_out_mode__Inst_9, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_10);
    }
#line 1183 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_10 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_10);
#line 1180 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_10;
#line 1180 "hlds_out_mode.m"
  }
#line 104 "hlds_out_mode.m"
}

#line 102 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_expanded_inst_6_p_0(
#line 102 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_7,
#line 102 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ModuleInfo_8,
#line 102 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_9,
#line 102 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_10)
#line 102 "hlds_out_mode.m"
{
#line 1175 "hlds_out_mode.m"
  {
#line 1175 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1175 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Expansions_12;
#line 1175 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_13;
#line 1178 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 1176 "hlds_out_mode.m"
    {
#line 1176 "hlds_out_mode.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &hlds__hlds_out__hlds_out_mode__Expansions_12);
    }
#line 1177 "hlds_out_mode.m"
    {
#line 1177 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_13, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstVarSet_9));
#line 1177 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModuleInfo_8));
#line 1177 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Expansions_12));
#line 1177 "hlds_out_mode.m"
    }
#line 1178 "hlds_out_mode.m"
    {
#line 1178 "hlds_out_mode.m"
      parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__Lang_7, ((MR_Box) (hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_13)), hlds__hlds_out__hlds_out_mode__Inst_10, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 1175 "hlds_out_mode.m"
  }
#line 102 "hlds_out_mode.m"
}

#line 91 "hlds_out_mode.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_uni_mode_list_to_string_2_f_0(
#line 91 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniModes_4,
#line 91 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5)
#line 91 "hlds_out_mode.m"
{
#line 1139 "hlds_out_mode.m"
  {
#line 1139 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1139 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_6;
#line 1140 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_6;

#line 1140 "hlds_out_mode.m"
    {
#line 1140 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__UniModes_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_6);
    }
#line 1140 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_6 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_6);
#line 1139 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_6;
#line 1139 "hlds_out_mode.m"
  }
#line 91 "hlds_out_mode.m"
}

#line 89 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_list_4_p_0(
#line 89 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniModes_5,
#line 89 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6)
#line 89 "hlds_out_mode.m"
{
#line 1137 "hlds_out_mode.m"
  {
#line 1137 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1137 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_9;

#line 1137 "hlds_out_mode.m"
    {
#line 1137 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__UniModes_5, hlds__hlds_out__hlds_out_mode__InstVarSet_6, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_9);
    }
#line 1137 "hlds_out_mode.m"
  }
#line 89 "hlds_out_mode.m"
}

#line 87 "hlds_out_mode.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_uni_mode_to_string_2_f_0(
#line 87 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_4,
#line 87 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5)
#line 87 "hlds_out_mode.m"
{
#line 1160 "hlds_out_mode.m"
  {
#line 1160 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1160 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_6;
#line 1160 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2];
#line 1160 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_29;
#line 1160 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_14;
#line 1160 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_15;
#line 1160 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_16;
#line 1160 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_17;
#line 1160 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstInfo_18;
#line 1160 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_4, (MR_Integer) 0)));
#line 1160 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_4, (MR_Integer) 1)));
#line 1160 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
#line 1160 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_23;
#line 1160 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_21_25;
#line 1160 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 1169 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_19_23;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_21_25;
#line 1171 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv3_String_6;

#line 1167 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_19_19, (MR_Integer) 0)));
#line 1167 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_19_19, (MR_Integer) 1)));
#line 1167 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_20_20, (MR_Integer) 0)));
#line 1167 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_20_20, (MR_Integer) 1)));
#line 1168 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstInfo_18 = (MR_Word) hlds__hlds_out__hlds_out_mode__InstVarSet_5;
#line 1169 "hlds_out_mode.m"
    {
#line 1169 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1169 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_14));
#line 1169 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_16));
#line 1169 "hlds_out_mode.m"
    }
#line 9153 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_29 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6];
#line 1169 "hlds_out_mode.m"
    {
#line 1169 "hlds_out_mode.m"
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_29, (MR_Integer) 1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstInfo_18)), hlds__hlds_out__hlds_out_mode__V_22_22, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_19_23);
    }
#line 1169 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_23 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_19_23);
#line 33 "parse_tree.parse_tree_out_info.int"
    hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_23)), &hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_21_25);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_21_25 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_21_25);
#line 1171 "hlds_out_mode.m"
    {
#line 1171 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1171 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_15));
#line 1171 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_17));
#line 1171 "hlds_out_mode.m"
    }
#line 1171 "hlds_out_mode.m"
    {
#line 1171 "hlds_out_mode.m"
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_29, (MR_Integer) 1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstInfo_18)), hlds__hlds_out__hlds_out_mode__V_27_27, ((MR_Box) (hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_21_25)), &hlds__hlds_out__hlds_out_mode__conv3_String_6);
    }
#line 1171 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_6 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv3_String_6);
#line 1160 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_6;
#line 1160 "hlds_out_mode.m"
  }
#line 87 "hlds_out_mode.m"
}

#line 85 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_p_0(
#line 85 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_5,
#line 85 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6)
#line 85 "hlds_out_mode.m"
{
#line 1158 "hlds_out_mode.m"
  {
#line 1158 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1158 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1];
#line 1158 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_32;
#line 1158 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_17;
#line 1158 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_18;
#line 1158 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_19;
#line 1158 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_20;
#line 1158 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstInfo_21;
#line 1158 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_5, (MR_Integer) 0)));
#line 1158 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_5, (MR_Integer) 1)));
#line 1158 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
#line 1158 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 1169 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_19_26;
#line 33 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 33 "parse_tree.parse_tree_out_info.int"
    MR_Box hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_21_28;
#line 1171 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv3_STATE_VARIABLE_IO_9;

#line 1167 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, (MR_Integer) 0)));
#line 1167 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, (MR_Integer) 1)));
#line 1167 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_23_23, (MR_Integer) 0)));
#line 1167 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_23_23, (MR_Integer) 1)));
#line 1168 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstInfo_21 = (MR_Word) hlds__hlds_out__hlds_out_mode__InstVarSet_6;
#line 1169 "hlds_out_mode.m"
    {
#line 1169 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1169 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_17));
#line 1169 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_19));
#line 1169 "hlds_out_mode.m"
    }
#line 9259 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_32 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6];
#line 1169 "hlds_out_mode.m"
    {
#line 1169 "hlds_out_mode.m"
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_32, (MR_Integer) 1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstInfo_21)), hlds__hlds_out__hlds_out_mode__V_25_25, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_19_26);
    }
#line 33 "parse_tree.parse_tree_out_info.int"
    hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 33 "parse_tree.parse_tree_out_info.int"
    {
#line 33 "parse_tree.parse_tree_out_info.int"
      hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_21_28);
    }
#line 1171 "hlds_out_mode.m"
    {
#line 1171 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1171 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_30_30, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_18));
#line 1171 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_30_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_20));
#line 1171 "hlds_out_mode.m"
    }
#line 1171 "hlds_out_mode.m"
    {
#line 1171 "hlds_out_mode.m"
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_32, (MR_Integer) 1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstInfo_21)), hlds__hlds_out__hlds_out_mode__V_30_30, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv3_STATE_VARIABLE_IO_9);
    }
#line 1158 "hlds_out_mode.m"
  }
#line 85 "hlds_out_mode.m"
}

#line 80 "hlds_out_mode.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_uni_mode_list_to_string_5_f_0(
#line 80 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_7,
#line 80 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
#line 80 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
#line 80 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
#line 80 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
#line 80 "hlds_out_mode.m"
{
#line 747 "hlds_out_mode.m"
  {
#line 747 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 747 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 748 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 748 "hlds_out_mode.m"
    {
#line 748 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Insts_7, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 748 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 747 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 747 "hlds_out_mode.m"
  }
#line 80 "hlds_out_mode.m"
}

#line 78 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_uni_mode_list_7_p_0(
#line 78 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_8,
#line 78 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 78 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 78 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 78 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
#line 78 "hlds_out_mode.m"
{
#line 742 "hlds_out_mode.m"
  {
#line 742 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 743 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 743 "hlds_out_mode.m"
    {
#line 743 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Insts_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 742 "hlds_out_mode.m"
  }
#line 78 "hlds_out_mode.m"
}

#line 75 "hlds_out_mode.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_uni_mode_to_string_5_f_0(
#line 75 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7,
#line 75 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
#line 75 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
#line 75 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
#line 75 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
#line 75 "hlds_out_mode.m"
{
#line 775 "hlds_out_mode.m"
  {
#line 775 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 775 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 776 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 776 "hlds_out_mode.m"
    {
#line 776 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Inst_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 776 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 775 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 775 "hlds_out_mode.m"
  }
#line 75 "hlds_out_mode.m"
}

#line 73 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_uni_mode_7_p_0(
#line 73 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
#line 73 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 73 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 73 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 73 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
#line 73 "hlds_out_mode.m"
{
#line 771 "hlds_out_mode.m"
  {
#line 771 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 771 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 771 "hlds_out_mode.m"
    {
#line 771 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Inst_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 771 "hlds_out_mode.m"
  }
#line 73 "hlds_out_mode.m"
}

#line 68 "hlds_out_mode.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_inst_to_string_5_f_0(
#line 68 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7,
#line 68 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
#line 68 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
#line 68 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
#line 68 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
#line 68 "hlds_out_mode.m"
{
#line 870 "hlds_out_mode.m"
  {
#line 870 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 870 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 871 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 871 "hlds_out_mode.m"
    {
#line 871 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], (MR_String) "\n", hlds__hlds_out__hlds_out_mode__Inst_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 871 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 870 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 870 "hlds_out_mode.m"
  }
#line 68 "hlds_out_mode.m"
}

#line 66 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_7_p_0(
#line 66 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
#line 66 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 66 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 66 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 66 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
#line 66 "hlds_out_mode.m"
{
#line 865 "hlds_out_mode.m"
  {
#line 865 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 866 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_U_15;

#line 866 "hlds_out_mode.m"
    {
#line 866 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], (MR_String) "\n", hlds__hlds_out__hlds_out_mode__Inst_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_U_15);
    }
#line 865 "hlds_out_mode.m"
  }
#line 66 "hlds_out_mode.m"
}

#line 58 "hlds_out_mode.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_inst_list_to_string_5_f_0(
#line 58 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_7,
#line 58 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_8,
#line 58 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_9,
#line 58 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_10,
#line 58 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_11)
#line 58 "hlds_out_mode.m"
{
#line 840 "hlds_out_mode.m"
  {
#line 840 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 840 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 841 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 841 "hlds_out_mode.m"
    {
#line 841 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Insts_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 841 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 840 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 840 "hlds_out_mode.m"
  }
#line 58 "hlds_out_mode.m"
}

#line 56 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_list_7_p_0(
#line 56 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Insts_8,
#line 56 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 56 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 56 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 56 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12)
#line 56 "hlds_out_mode.m"
{
#line 836 "hlds_out_mode.m"
  {
#line 836 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 836 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 836 "hlds_out_mode.m"
    {
#line 836 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Insts_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 836 "hlds_out_mode.m"
  }
#line 56 "hlds_out_mode.m"
}

#line 45 "hlds_out_mode.m"
MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_f_0(
#line 45 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 45 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_5)
#line 45 "hlds_out_mode.m"
{
#line 445 "hlds_out_mode.m"
  {
#line 445 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 445 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 445 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

#line 446 "hlds_out_mode.m"
    {
#line 446 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_6_6 = mercury__term__context_init_0_f_0();
    }
#line 446 "hlds_out_mode.m"
    {
#line 446 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__V_6_6, hlds__hlds_out__hlds_out_mode__InstName_5);
    }
#line 445 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 445 "hlds_out_mode.m"
  }
#line 45 "hlds_out_mode.m"
}

#line 44 "hlds_out_mode.m"
MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(
#line 44 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 44 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_5)
#line 44 "hlds_out_mode.m"
{
#line 193 "hlds_out_mode.m"
  {
#line 193 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 193 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 193 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

#line 194 "hlds_out_mode.m"
    {
#line 194 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_6_6 = mercury__term__context_init_0_f_0();
    }
#line 194 "hlds_out_mode.m"
    {
#line 194 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__V_6_6, hlds__hlds_out__hlds_out_mode__Inst_5);
    }
#line 193 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 193 "hlds_out_mode.m"
  }
#line 44 "hlds_out_mode.m"
}

#line 189 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0_1(
#line 189 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 189 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 189 "hlds_out_mode.m"
{
#line 189 "hlds_out_mode.m"
  {
#line 189 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 189 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 189 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

#line 189 "hlds_out_mode.m"
    {
#line 189 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 189 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
#line 189 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 189 "hlds_out_mode.m"
  }
#line 189 "hlds_out_mode.m"
}

#line 42 "hlds_out_mode.m"
MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(
#line 42 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 42 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 42 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Mode_7)
#line 42 "hlds_out_mode.m"
{
#line 172 "hlds_out_mode.m"
  {
#line 172 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 172 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_8;

#line 172 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Mode_7)) == (MR_mktag((MR_Integer) 0))))
#line 172 "hlds_out_mode.m"
      {
#line 172 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 0)));
#line 172 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 1)));
#line 176 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_17_17;
#line 176 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode___Uniq_11;
#line 176 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_12_12;

#line 176 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstA_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstA_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 176 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 176 "hlds_out_mode.m"
          {
#line 176 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode___Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstA_9, (MR_Integer) 1)));
#line 176 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstA_9, (MR_Integer) 2)));
#line 176 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 176 "hlds_out_mode.m"
            if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 176 "hlds_out_mode.m"
              {
#line 176 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_12_12 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__V_17_17), (MR_Integer) 1);
#line 177 "hlds_out_mode.m"
                {
#line 177 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__hlds_out__hlds_out_mode__InstB_10, hlds__hlds_out__hlds_out_mode__InstA_9);
                }
#line 176 "hlds_out_mode.m"
              }
#line 176 "hlds_out_mode.m"
          }
#line 173 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 179 "hlds_out_mode.m"
          {
#line 179 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstA_9);
          }
#line 173 "hlds_out_mode.m"
        else
#line 181 "hlds_out_mode.m"
          {
#line 181 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_19_19;
#line 181 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
#line 181 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
#line 181 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_23_23;

#line 182 "hlds_out_mode.m"
            {
#line 182 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_21_21 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstA_9);
            }
#line 183 "hlds_out_mode.m"
            {
#line 183 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_23_23 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstB_10);
            }
#line 183 "hlds_out_mode.m"
            {
#line 183 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_23_23));
#line 183 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "hlds_out_mode.m"
            }
#line 182 "hlds_out_mode.m"
            {
#line 182 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_19_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_21_21));
#line 182 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_22_22));
#line 182 "hlds_out_mode.m"
            }
#line 181 "hlds_out_mode.m"
            {
#line 181 "hlds_out_mode.m"
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[0], hlds__hlds_out__hlds_out_mode__V_19_19, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
            }
#line 181 "hlds_out_mode.m"
          }
#line 172 "hlds_out_mode.m"
      }
#line 172 "hlds_out_mode.m"
    else
#line 187 "hlds_out_mode.m"
      {
#line 187 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 0)));
#line 187 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 1)));
#line 187 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_15_15;
#line 187 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_16_16;

#line 189 "hlds_out_mode.m"
        {
#line 189 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 189 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 189 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0_1));
#line 189 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 189 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
#line 189 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 189 "hlds_out_mode.m"
        }
#line 189 "hlds_out_mode.m"
        {
#line 189 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_15_15 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_16_16, hlds__hlds_out__hlds_out_mode__Args_14);
        }
#line 188 "hlds_out_mode.m"
        {
#line 188 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__Name_13, hlds__hlds_out__hlds_out_mode__V_15_15, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
#line 187 "hlds_out_mode.m"
      }
#line 172 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_8;
#line 172 "hlds_out_mode.m"
  }
#line 42 "hlds_out_mode.m"
}

#line 41 "hlds_out_mode.m"
MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__mode_to_term_2_f_0(
#line 41 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 41 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Mode_5)
#line 41 "hlds_out_mode.m"
{
#line 167 "hlds_out_mode.m"
  {
#line 167 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 167 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 167 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

#line 168 "hlds_out_mode.m"
    {
#line 168 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_6_6 = mercury__term__context_init_0_f_0();
    }
#line 168 "hlds_out_mode.m"
    {
#line 168 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__V_6_6, hlds__hlds_out__hlds_out_mode__Mode_5);
    }
#line 167 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 167 "hlds_out_mode.m"
  }
#line 41 "hlds_out_mode.m"
}

#line 34 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_p_0(
#line 34 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__VarSet_1,
#line 34 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__AppendVarNums_2,
#line 34 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
#line 34 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__4_4)
#line 34 "hlds_out_mode.m"
{
#line 149 "hlds_out_mode.m"
  while (MR_TRUE)
#line 149 "hlds_out_mode.m"
    {
#line 149 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 149 "hlds_out_mode.m"
      {
#line 149 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 149 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 149 "hlds_out_mode.m"
          {
#line 149 "hlds_out_mode.m"
          }
#line 149 "hlds_out_mode.m"
        else
#line 151 "hlds_out_mode.m"
          {
#line 151 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Var_16;
#line 151 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_17;
#line 151 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__VarsInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, (MR_Integer) 1)));
#line 151 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_20;
#line 151 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, (MR_Integer) 0)));

#line 150 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 0)));
#line 150 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Inst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 1)));
#line 152 "hlds_out_mode.m"
            {
#line 152 "hlds_out_mode.m"
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__VarSet_1, hlds__hlds_out__hlds_out_mode__AppendVarNums_2, hlds__hlds_out__hlds_out_mode__Var_16);
            }
#line 153 "hlds_out_mode.m"
            {
#line 153 "hlds_out_mode.m"
              mercury__io__write_string_3_p_0((MR_String) " -> ");
            }
#line 154 "hlds_out_mode.m"
            {
#line 154 "hlds_out_mode.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_mode__InstVarSet_20);
            }
#line 155 "hlds_out_mode.m"
            {
#line 155 "hlds_out_mode.m"
              parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_20, hlds__hlds_out__hlds_out_mode__Inst_17);
            }
#line 158 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__VarsInsts_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 157 "hlds_out_mode.m"
              {
#line 157 "hlds_out_mode.m"
              }
#line 158 "hlds_out_mode.m"
            else
#line 159 "hlds_out_mode.m"
              {
#line 160 "hlds_out_mode.m"
                {
#line 160 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(hlds__hlds_out__hlds_out_mode__Indent_3);
                }
#line 161 "hlds_out_mode.m"
                {
#line 161 "hlds_out_mode.m"
                  mercury__io__write_string_3_p_0((MR_String) "%            ");
                }
#line 162 "hlds_out_mode.m"
                /* direct tailcall eliminated */
#line 162 "hlds_out_mode.m"
                {
#line 162 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__4__tmp_copy_4 = hlds__hlds_out__hlds_out_mode__VarsInsts_18;

#line 162 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__HeadVar__4_4 = hlds__hlds_out__hlds_out_mode__HeadVar__4__tmp_copy_4;
#line 162 "hlds_out_mode.m"
                }
#line 162 "hlds_out_mode.m"
                continue;
#line 159 "hlds_out_mode.m"
              }
#line 151 "hlds_out_mode.m"
          }
#line 149 "hlds_out_mode.m"
      }
#line 149 "hlds_out_mode.m"
      break;
#line 149 "hlds_out_mode.m"
    }
#line 34 "hlds_out_mode.m"
}

#line 31 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__write_instmap_6_p_0(
#line 31 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__VarSet_7,
#line 31 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__AppendVarNums_8,
#line 31 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 31 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstMap_10)
#line 31 "hlds_out_mode.m"
{
#line 142 "hlds_out_mode.m"
  {
#line 142 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 142 "hlds_out_mode.m"
    {
#line 142 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(hlds__hlds_out__hlds_out_mode__InstMap_10);
    }
#line 142 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 143 "hlds_out_mode.m"
      {
#line 143 "hlds_out_mode.m"
        {
#line 143 "hlds_out_mode.m"
          mercury__io__write_string_3_p_0((MR_String) "unreachable");
        }
#line 143 "hlds_out_mode.m"
      }
#line 142 "hlds_out_mode.m"
    else
#line 145 "hlds_out_mode.m"
      {
#line 145 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__AssocList_12;

#line 145 "hlds_out_mode.m"
        {
#line 145 "hlds_out_mode.m"
          hlds__instmap__instmap_to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_mode__InstMap_10, &hlds__hlds_out__hlds_out_mode__AssocList_12);
        }
#line 146 "hlds_out_mode.m"
        {
#line 146 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_p_0(hlds__hlds_out__hlds_out_mode__VarSet_7, hlds__hlds_out__hlds_out_mode__AppendVarNums_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__AssocList_12);
        }
#line 145 "hlds_out_mode.m"
      }
#line 142 "hlds_out_mode.m"
  }
#line 31 "hlds_out_mode.m"
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
