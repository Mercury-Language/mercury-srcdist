/*
** Automatically generated from `hlds_out_mode.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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
#include "term_io.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
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
#include "mdbcomp.sym_name.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 144 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 150 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 153 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 156 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 159 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 162 "hlds.hlds_out.hlds_out_mode.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_types_expanded_inst_info_0_0[3];

#line 165 "hlds.hlds_out.hlds_out_mode.c"
static const MR_ConstString hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_names_expanded_inst_info_0_0[3];

#line 168 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0;

#line 171 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0[1];

#line 174 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_ptag_ordered_expanded_inst_info_0[1];

#line 177 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_name_ordered_expanded_inst_info_0[1];

#line 180 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_expanded_inst_info_0[1];

#line 183 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0;

#line 186 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1;

#line 189 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2];

#line 192 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2];

#line 195 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2];

#line 198 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0_10001(
#line 201 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 203 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

#line 206 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0_10001(
#line 209 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 211 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 213 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3);

#line 216 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
#line 219 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 221 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

#line 224 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
#line 227 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 229 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 231 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3);

#line 234 "hlds.hlds_out.hlds_out_mode.c"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0_10001(
#line 237 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 239 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 242 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0_10001(
#line 245 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 247 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 249 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 251 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3,
#line 253 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_4,
#line 255 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_5);

#line 423 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 423 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 423 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 429 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 429 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 429 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 414 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 414 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 414 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 414 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9);

#line 399 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 399 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 399 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 405 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 405 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 405 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 390 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 390 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 390 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 390 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9);

#line 630 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__630__1_2_p_0(
#line 630 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 630 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_57);

#line 622 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__622__1_2_p_0(
#line 622 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 622 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_67);

#line 638 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__638__1_2_p_0(
#line 638 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 638 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_45);

#line 240 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__240__1_3_f_0(
#line 240 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 240 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_28,
#line 240 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_29);

#line 1125 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0(
#line 1125 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5,
#line 1125 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1125 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1125 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__HeadVar__3_3,
#line 1125 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__HeadVar__4_4);

#line 1124 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0(
#line 1124 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

#line 1128 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0(
#line 1128 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1128 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1128 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3);

#line 1128 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0(
#line 1128 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1128 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2);

#line 1061 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0(
#line 1061 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21,
#line 1061 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1061 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1061 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3,
#line 1061 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4);

#line 953 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(
#line 953 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154,
#line 953 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_9,
#line 953 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_10,
#line 953 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_11,
#line 953 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_12,
#line 953 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_13,
#line 953 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_14,
#line 953 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_29,
#line 953 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);

#line 940 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
#line 940 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_1,
#line 940 "hlds_out_mode.m"
  MR_Integer * hlds__hlds_out__hlds_out_mode__InstAddr_2);

#line 905 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
#line 905 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 905 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 905 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent0_2,
#line 905 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 905 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 905 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 905 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 905 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7);

#line 806 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(
#line 806 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103,
#line 806 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
#line 806 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 806 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 806 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 806 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 806 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_30,
#line 806 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);

#line 783 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
#line 783 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_26,
#line 783 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 783 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_2,
#line 783 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 783 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 783 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 783 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 783 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7);

#line 718 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(
#line 718 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 718 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_8,
#line 718 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 718 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 718 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 718 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 718 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22,
#line 718 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);

#line 690 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0(
#line 690 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37,
#line 690 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 690 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum_2,
#line 690 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
#line 690 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 690 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_5,
#line 690 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6,
#line 690 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7,
#line 690 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8);

#line 630 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3(
#line 630 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

#line 622 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2(
#line 622 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

#line 638 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1(
#line 638 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

#line 559 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(
#line 559 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ConsId_4,
#line 559 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 559 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__Term_6);

#line 546 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1(
#line 546 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 546 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 541 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(
#line 541 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 541 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 541 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_8,
#line 541 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_9);

#line 531 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(
#line 531 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_1,
#line 531 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_2,
#line 531 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3);

#line 523 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(
#line 523 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 523 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__SharedName_2);

#line 510 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(
#line 510 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

#line 505 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(
#line 505 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

#line 448 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2(
#line 448 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 448 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 461 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1(
#line 461 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 461 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 441 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(
#line 441 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 441 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 441 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_7);

#line 382 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(
#line 382 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 382 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_5);

#line 369 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_type_ctor_propagated_to_term_2_f_0(
#line 369 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 369 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PropagatedResult_5);

#line 364 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0_1(
#line 364 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 364 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 354 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0(
#line 354 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 354 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ContainsTypes_5);

#line 347 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_var_to_term_2_f_0(
#line 347 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 347 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVar_5);

#line 342 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1(
#line 342 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 342 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 257 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(
#line 257 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 257 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstResults_5);

#line 240 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0_1(
#line 240 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 240 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 240 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

#line 189 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(
#line 189 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 189 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 189 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7);

#line 128 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(
#line 128 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 128 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__Name_5);

#line 182 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0_1(
#line 182 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 182 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[18][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_2[38][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_3[3][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_4[2][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_5[1][5];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[18][2] = {
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
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "typeclass_info_cell_constructor"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "tabling_info_const"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "base_typeclass_info_const"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "closure_cons"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "deep_profiling_proc_layout"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "ground_term_const"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "table_io_entry_desc"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "type_info_const"))
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
    ((MR_Box) ((MR_String) "contains_inst_names_unknown"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "contains_inst_names_known"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "contains_inst_vars_unknown"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "contains_inst_vars_known"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "results"))
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
    ((MR_Box) ((MR_String) "\044merge_inst"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "\044unify"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "\044any"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "\044ground"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "\044mostly_uniq_inst"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "\044shared_inst"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "\044typed_ground"))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "\044typed_inst"))
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_4[2][6] = {
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



#line 1069 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1077 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1085 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1093 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1101 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1109 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 1117 "hlds.hlds_out.hlds_out_mode.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_types_expanded_inst_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0
};

#line 1124 "hlds.hlds_out.hlds_out_mode.c"
static const MR_ConstString hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_names_expanded_inst_info_0_0[3] = {
  (MR_String) "eii_varset",
  (MR_String) "eii_module_info",
  (MR_String) "eii_expansions"
};

#line 1131 "hlds.hlds_out.hlds_out_mode.c"
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

#line 1146 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0[1] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0
};

#line 1151 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_ptag_ordered_expanded_inst_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0
  }
};

#line 1160 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_name_ordered_expanded_inst_info_0[1] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0
};

#line 1165 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_expanded_inst_info_0[1] = {
  (MR_Integer) 0
};

#line 1170 "hlds.hlds_out.hlds_out_mode.c"
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

#line 1187 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0 = {
  (MR_String) "do_not_incl_addr",
  (MR_Integer) 0
};

#line 1193 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1 = {
  (MR_String) "do_incl_addr",
  (MR_Integer) 1
};

#line 1199 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1
};

#line 1205 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0
};

#line 1211 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1217 "hlds.hlds_out.hlds_out_mode.c"
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

#line 1234 "hlds.hlds_out.hlds_out_mode.c"
const MR_BaseTypeclassInfo base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0_10001))
};

#line 1245 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0_10001(
#line 1248 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1250 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
#line 1252 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1254 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1256 "hlds.hlds_out.hlds_out_mode.c"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1259 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1261 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
#line 1264 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 1266 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1268 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1271 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0_10001(
#line 1274 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1276 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 1278 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3)
#line 1280 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1282 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1284 "hlds.hlds_out.hlds_out_mode.c"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1;

#line 1287 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1289 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0(&hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3));
    }
#line 1292 "hlds.hlds_out.hlds_out_mode.c"
    *hlds__hlds_out__hlds_out_mode__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1));
#line 1294 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1296 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1299 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
#line 1302 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1304 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
#line 1306 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1308 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1310 "hlds.hlds_out.hlds_out_mode.c"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1313 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1315 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
#line 1318 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 1320 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1322 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1325 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
#line 1328 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1330 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 1332 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3)
#line 1334 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1336 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1338 "hlds.hlds_out.hlds_out_mode.c"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1;

#line 1341 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1343 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0(&hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3));
    }
#line 1346 "hlds.hlds_out.hlds_out_mode.c"
    *hlds__hlds_out__hlds_out_mode__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1));
#line 1348 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1350 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1353 "hlds.hlds_out.hlds_out_mode.c"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0_10001(
#line 1356 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 1358 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 1360 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1362 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1364 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 1366 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__closure;
#line 1368 "hlds.hlds_out.hlds_out_mode.c"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__2_2;

#line 1371 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 1373 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1375 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__conv0_HeadVar__2_2 = hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 1378 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__2_2));
#line 1380 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 1382 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1384 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1387 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0_10001(
#line 1390 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 1392 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1394 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 1396 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3,
#line 1398 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_4,
#line 1400 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_5)
#line 1402 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1404 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1406 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__closure;

#line 1409 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 1411 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1413 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3), hlds__hlds_out__hlds_out_mode__wrapper_arg_4, hlds__hlds_out__hlds_out_mode__wrapper_arg_5);
    }
#line 1416 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1418 "hlds.hlds_out.hlds_out_mode.c"
}

#line 423 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 423 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 423 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 423 "hlds_out_mode.m"
{
#line 423 "hlds_out_mode.m"
  {
#line 423 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 423 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 423 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv2_Term_8;

#line 423 "hlds_out_mode.m"
    {
#line 423 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv2_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 423 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv2_Term_8));
#line 423 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 423 "hlds_out_mode.m"
  }
#line 423 "hlds_out_mode.m"
}

#line 429 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 429 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 429 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 429 "hlds_out_mode.m"
{
#line 429 "hlds_out_mode.m"
  {
#line 429 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 429 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 429 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 429 "hlds_out_mode.m"
    {
#line 429 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 429 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
#line 429 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 429 "hlds_out_mode.m"
  }
#line 429 "hlds_out_mode.m"
}

#line 414 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 414 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 414 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 414 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9)
#line 414 "hlds_out_mode.m"
{
#line 417 "hlds_out_mode.m"
  {
#line 417 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 417 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
#line 417 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 0)));
#line 417 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 1)));
#line 417 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 3)));
#line 417 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ModesTerm_15;
#line 417 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 417 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
#line 417 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;
#line 417 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_52_52;
#line 417 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;
#line 419 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 2)));

#line 425 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__PredOrFunc_11 == (MR_Integer) 1))
#line 426 "hlds_out_mode.m"
      {
#line 426 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 426 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48;
#line 426 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__ArgModes_16;
#line 426 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__RetMode_17;
#line 426 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__ArgModesTerm_18;
#line 426 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 426 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
#line 426 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 426 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;
#line 426 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 427 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__conv0_RetMode_17;

#line 427 "hlds_out_mode.m"
        {
#line 427 "hlds_out_mode.m"
          parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_mode__Modes_12, &hlds__hlds_out__hlds_out_mode__ArgModes_16, &hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
        }
#line 427 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__RetMode_17 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
#line 429 "hlds_out_mode.m"
        {
#line 429 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 429 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 429 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
#line 429 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 429 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 429 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 429 "hlds_out_mode.m"
        }
#line 429 "hlds_out_mode.m"
        {
#line 429 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_20_20 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_22_22, hlds__hlds_out__hlds_out_mode__ArgModes_16);
        }
#line 1578 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 428 "hlds_out_mode.m"
        {
#line 428 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[36], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ArgModesTerm_18);
        }
#line 432 "hlds_out_mode.m"
        {
#line 432 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_27_27 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__RetMode_17);
        }
#line 432 "hlds_out_mode.m"
        {
#line 432 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
#line 432 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 432 "hlds_out_mode.m"
        }
#line 432 "hlds_out_mode.m"
        {
#line 432 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgModesTerm_18));
#line 432 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_26_26));
#line 432 "hlds_out_mode.m"
        }
#line 431 "hlds_out_mode.m"
        {
#line 431 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[33], hlds__hlds_out__hlds_out_mode__V_24_24, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
        }
#line 426 "hlds_out_mode.m"
      }
#line 425 "hlds_out_mode.m"
    else
#line 421 "hlds_out_mode.m"
      {
#line 421 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 421 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

#line 423 "hlds_out_mode.m"
        {
#line 423 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 423 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 423 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
#line 423 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 423 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 423 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 423 "hlds_out_mode.m"
        }
#line 423 "hlds_out_mode.m"
        {
#line 423 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_30_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_32_32, hlds__hlds_out__hlds_out_mode__Modes_12);
        }
#line 422 "hlds_out_mode.m"
        {
#line 422 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[37], hlds__hlds_out__hlds_out_mode__V_30_30, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
        }
#line 421 "hlds_out_mode.m"
      }
#line 669 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 4))
#line 673 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "cc_multi";
#line 669 "hlds_out_mode.m"
    else
#line 669 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 5))
#line 674 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "cc_nondet";
#line 669 "hlds_out_mode.m"
    else
#line 669 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 0))
#line 671 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "det";
#line 669 "hlds_out_mode.m"
    else
#line 669 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 6))
#line 669 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "erroneous";
#line 669 "hlds_out_mode.m"
    else
#line 669 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 7))
#line 670 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "failure";
#line 669 "hlds_out_mode.m"
    else
#line 669 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 2))
#line 675 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "multi";
#line 669 "hlds_out_mode.m"
    else
#line 669 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 3))
#line 676 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "nondet";
#line 669 "hlds_out_mode.m"
    else
#line 672 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "semidet";
#line 131 "hlds_out_mode.m"
    {
#line 131 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 131 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_52_52));
#line 131 "hlds_out_mode.m"
    }
#line 131 "hlds_out_mode.m"
    {
#line 131 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 131 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
#line 131 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 131 "hlds_out_mode.m"
    }
#line 436 "hlds_out_mode.m"
    {
#line 436 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
#line 436 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "hlds_out_mode.m"
    }
#line 436 "hlds_out_mode.m"
    {
#line 436 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModesTerm_15));
#line 436 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
#line 436 "hlds_out_mode.m"
    }
#line 435 "hlds_out_mode.m"
    {
#line 435 "hlds_out_mode.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[35], hlds__hlds_out__hlds_out_mode__V_34_34, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
    }
#line 417 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_10;
#line 417 "hlds_out_mode.m"
  }
#line 414 "hlds_out_mode.m"
}

#line 399 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 399 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 399 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 399 "hlds_out_mode.m"
{
#line 399 "hlds_out_mode.m"
  {
#line 399 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 399 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 399 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv2_Term_8;

#line 399 "hlds_out_mode.m"
    {
#line 399 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv2_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 399 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv2_Term_8));
#line 399 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 399 "hlds_out_mode.m"
  }
#line 399 "hlds_out_mode.m"
}

#line 405 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 405 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 405 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 405 "hlds_out_mode.m"
{
#line 405 "hlds_out_mode.m"
  {
#line 405 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 405 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 405 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 405 "hlds_out_mode.m"
    {
#line 405 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 405 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
#line 405 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 405 "hlds_out_mode.m"
  }
#line 405 "hlds_out_mode.m"
}

#line 390 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 390 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 390 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 390 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9)
#line 390 "hlds_out_mode.m"
{
#line 393 "hlds_out_mode.m"
  {
#line 393 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 393 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
#line 393 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 0)));
#line 393 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 1)));
#line 393 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 3)));
#line 393 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ModesTerm_15;
#line 393 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 393 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
#line 393 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;
#line 393 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_52_52;
#line 393 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;
#line 395 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 2)));

#line 401 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__PredOrFunc_11 == (MR_Integer) 1))
#line 402 "hlds_out_mode.m"
      {
#line 402 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 402 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48;
#line 402 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__ArgModes_16;
#line 402 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__RetMode_17;
#line 402 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__ArgModesTerm_18;
#line 402 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 402 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
#line 402 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 402 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;
#line 402 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 403 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__conv0_RetMode_17;

#line 403 "hlds_out_mode.m"
        {
#line 403 "hlds_out_mode.m"
          parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_mode__Modes_12, &hlds__hlds_out__hlds_out_mode__ArgModes_16, &hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
        }
#line 403 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__RetMode_17 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
#line 405 "hlds_out_mode.m"
        {
#line 405 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 405 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 405 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
#line 405 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 405 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 405 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 405 "hlds_out_mode.m"
        }
#line 405 "hlds_out_mode.m"
        {
#line 405 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_20_20 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_22_22, hlds__hlds_out__hlds_out_mode__ArgModes_16);
        }
#line 1907 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 404 "hlds_out_mode.m"
        {
#line 404 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[32], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ArgModesTerm_18);
        }
#line 408 "hlds_out_mode.m"
        {
#line 408 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_27_27 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__RetMode_17);
        }
#line 408 "hlds_out_mode.m"
        {
#line 408 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
#line 408 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "hlds_out_mode.m"
        }
#line 408 "hlds_out_mode.m"
        {
#line 408 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgModesTerm_18));
#line 408 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_26_26));
#line 408 "hlds_out_mode.m"
        }
#line 407 "hlds_out_mode.m"
        {
#line 407 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[33], hlds__hlds_out__hlds_out_mode__V_24_24, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
        }
#line 402 "hlds_out_mode.m"
      }
#line 401 "hlds_out_mode.m"
    else
#line 397 "hlds_out_mode.m"
      {
#line 397 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 397 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

#line 399 "hlds_out_mode.m"
        {
#line 399 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 399 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 399 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
#line 399 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 399 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 399 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 399 "hlds_out_mode.m"
        }
#line 399 "hlds_out_mode.m"
        {
#line 399 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_30_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_32_32, hlds__hlds_out__hlds_out_mode__Modes_12);
        }
#line 398 "hlds_out_mode.m"
        {
#line 398 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[34], hlds__hlds_out__hlds_out_mode__V_30_30, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
        }
#line 397 "hlds_out_mode.m"
      }
#line 669 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 4))
#line 673 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "cc_multi";
#line 669 "hlds_out_mode.m"
    else
#line 669 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 5))
#line 674 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "cc_nondet";
#line 669 "hlds_out_mode.m"
    else
#line 669 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 0))
#line 671 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "det";
#line 669 "hlds_out_mode.m"
    else
#line 669 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 6))
#line 669 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "erroneous";
#line 669 "hlds_out_mode.m"
    else
#line 669 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 7))
#line 670 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "failure";
#line 669 "hlds_out_mode.m"
    else
#line 669 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 2))
#line 675 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "multi";
#line 669 "hlds_out_mode.m"
    else
#line 669 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 3))
#line 676 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "nondet";
#line 669 "hlds_out_mode.m"
    else
#line 672 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "semidet";
#line 131 "hlds_out_mode.m"
    {
#line 131 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 131 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_52_52));
#line 131 "hlds_out_mode.m"
    }
#line 131 "hlds_out_mode.m"
    {
#line 131 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 131 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
#line 131 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 131 "hlds_out_mode.m"
    }
#line 412 "hlds_out_mode.m"
    {
#line 412 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
#line 412 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "hlds_out_mode.m"
    }
#line 412 "hlds_out_mode.m"
    {
#line 412 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModesTerm_15));
#line 412 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
#line 412 "hlds_out_mode.m"
    }
#line 411 "hlds_out_mode.m"
    {
#line 411 "hlds_out_mode.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[35], hlds__hlds_out__hlds_out_mode__V_34_34, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
    }
#line 393 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_10;
#line 393 "hlds_out_mode.m"
  }
#line 390 "hlds_out_mode.m"
}

#line 630 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__630__1_2_p_0(
#line 630 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 630 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_57)
#line 630 "hlds_out_mode.m"
{
#line 630 "hlds_out_mode.m"
  {
#line 630 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 630 "hlds_out_mode.m"
    {
#line 630 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[5], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_57)));
    }
#line 630 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 630 "hlds_out_mode.m"
  }
#line 630 "hlds_out_mode.m"
}

#line 622 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__622__1_2_p_0(
#line 622 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 622 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_67)
#line 622 "hlds_out_mode.m"
{
#line 622 "hlds_out_mode.m"
  {
#line 622 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 622 "hlds_out_mode.m"
    {
#line 622 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[5], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_67)));
    }
#line 622 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 622 "hlds_out_mode.m"
  }
#line 622 "hlds_out_mode.m"
}

#line 638 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__638__1_2_p_0(
#line 638 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 638 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_45)
#line 638 "hlds_out_mode.m"
{
#line 638 "hlds_out_mode.m"
  {
#line 638 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 638 "hlds_out_mode.m"
    {
#line 638 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[5], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_45)));
    }
#line 638 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 638 "hlds_out_mode.m"
  }
#line 638 "hlds_out_mode.m"
}

#line 240 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__240__1_3_f_0(
#line 240 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 240 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_28,
#line 240 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_29)
#line 240 "hlds_out_mode.m"
{
#line 240 "hlds_out_mode.m"
  {
#line 240 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 240 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__4_30;
#line 240 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_33_33;
#line 240 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 240 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_35_35;
#line 240 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
#line 240 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;

#line 242 "hlds_out_mode.m"
    {
#line 242 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_36_36 = mercury__term__context_init_0_f_0();
    }
#line 242 "hlds_out_mode.m"
    {
#line 242 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_35_35, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_28));
#line 242 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_35_35, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
#line 242 "hlds_out_mode.m"
    }
#line 242 "hlds_out_mode.m"
    {
#line 242 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_34_34 = mercury__term__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__V_35_35);
    }
#line 242 "hlds_out_mode.m"
    {
#line 242 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__3_29));
#line 242 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "hlds_out_mode.m"
    }
#line 242 "hlds_out_mode.m"
    {
#line 242 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34));
#line 242 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
#line 242 "hlds_out_mode.m"
    }
#line 241 "hlds_out_mode.m"
    {
#line 241 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__4_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 241 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_30, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[31]));
#line 241 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_33_33));
#line 241 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_30, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 241 "hlds_out_mode.m"
    }
#line 240 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__4_30;
#line 240 "hlds_out_mode.m"
  }
#line 240 "hlds_out_mode.m"
}

#line 1125 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0(
#line 1125 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5,
#line 1125 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1125 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1125 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__HeadVar__3_3,
#line 1125 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__HeadVar__4_4)
#line 1125 "hlds_out_mode.m"
{
#line 1109 "hlds_out_mode.m"
  {
#line 1109 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1107 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1107 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1107 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));

#line 1107 "hlds_out_mode.m"
    {
#line 1107 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__1_1)), hlds__hlds_out__hlds_out_mode__V_15_15);
    }
#line 1109 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1108 "hlds_out_mode.m"
      {
#line 2279 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 2282 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 2284 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5), ((MR_Box) ((MR_String) "...")), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, hlds__hlds_out__hlds_out_mode__HeadVar__4_4);
#line 2286 "hlds.hlds_out.hlds_out_mode.c"
          return;
        }
#line 1108 "hlds_out_mode.m"
      }
#line 1109 "hlds_out_mode.m"
    else
#line 1114 "hlds_out_mode.m"
      {
#line 1109 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_11_11;
#line 1109 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_12_12;

#line 1109 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1109 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1109 "hlds_out_mode.m"
          {
#line 1109 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1109 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1113 "hlds_out_mode.m"
            {
#line 1113 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_inst_name_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__HeadVar__1_1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_2)), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, hlds__hlds_out__hlds_out_mode__HeadVar__4_4);
#line 1113 "hlds_out_mode.m"
              return;
            }
#line 1109 "hlds_out_mode.m"
          }
#line 1109 "hlds_out_mode.m"
        else
#line 1115 "hlds_out_mode.m"
          {
#line 1115 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_13;
#line 1115 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Expansions_14;
#line 1115 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1115 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 1115 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
#line 1115 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1115 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1116 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 1116 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
#line 1117 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_29_29;
#line 1117 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 1117 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_31_31;

#line 1115 "hlds_out_mode.m"
            {
#line 1115 "hlds_out_mode.m"
              check_hlds__mode_util__inst_lookup_3_p_0(hlds__hlds_out__hlds_out_mode__V_19_19, hlds__hlds_out__hlds_out_mode__HeadVar__1_1, &hlds__hlds_out__hlds_out_mode__Inst_13);
            }
#line 1116 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1116 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1116 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1116 "hlds_out_mode.m"
            {
#line 1116 "hlds_out_mode.m"
              mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__1_1)), hlds__hlds_out__hlds_out_mode__V_20_20, &hlds__hlds_out__hlds_out_mode__Expansions_14);
            }
#line 1117 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1117 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1117 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1117 "hlds_out_mode.m"
            {
#line 1117 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_29_29));
#line 1117 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_30_30));
#line 1117 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Expansions_14));
#line 1117 "hlds_out_mode.m"
            }
#line 1117 "hlds_out_mode.m"
            {
#line 1117 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_inst_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__Inst_13, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_21_21)), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, hlds__hlds_out__hlds_out_mode__HeadVar__4_4);
#line 1117 "hlds_out_mode.m"
              return;
            }
#line 1115 "hlds_out_mode.m"
          }
#line 1114 "hlds_out_mode.m"
      }
#line 1109 "hlds_out_mode.m"
  }
#line 1125 "hlds_out_mode.m"
}

#line 1124 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0(
#line 1124 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
#line 1124 "hlds_out_mode.m"
{
#line 1124 "hlds_out_mode.m"
  {
#line 1124 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1124 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1124 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1124 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 2)));

#line 1124 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 1124 "hlds_out_mode.m"
  }
#line 1124 "hlds_out_mode.m"
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
#line 2464 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 2466 "hlds.hlds_out.hlds_out_mode.c"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__HeadVar__2_1 == hlds__hlds_out__hlds_out_mode__HeadVar__2_2);

#line 2469 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 2471 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 48 "hlds_out_mode.m"
}

#line 1128 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0(
#line 1128 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1128 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1128 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3)
#line 1128 "hlds_out_mode.m"
{
#line 1128 "hlds_out_mode.m"
  {
#line 1128 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1128 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastX_12 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 1128 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastY_13 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__3_3;

#line 1128 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__CastX_12 == hlds__hlds_out__hlds_out_mode__CastY_13);
#line 1128 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 2500 "hlds.hlds_out.hlds_out_mode.c"
      *hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 1128 "hlds_out_mode.m"
    else
#line 1128 "hlds_out_mode.m"
      {
#line 1128 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1128 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1128 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1128 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 1128 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 1)));
#line 1128 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 2)));
#line 1128 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;

#line 1128 "hlds_out_mode.m"
        {
#line 1128 "hlds_out_mode.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[7], &hlds__hlds_out__hlds_out_mode__V_10_10, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_4_4)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_7_7)));
        }
#line 2526 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__V_10_10 == (MR_Integer) 0);
#line 1128 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = !(hlds__hlds_out__hlds_out_mode__succeeded);
#line 1128 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1128 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__V_10_10;
#line 1128 "hlds_out_mode.m"
        else
#line 1128 "hlds_out_mode.m"
          {
#line 1128 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_11_11;

#line 1128 "hlds_out_mode.m"
            {
#line 1128 "hlds_out_mode.m"
              hlds__hlds_module____Compare____module_info_0_0(&hlds__hlds_out__hlds_out_mode__V_11_11, hlds__hlds_out__hlds_out_mode__V_5_5, hlds__hlds_out__hlds_out_mode__V_8_8);
            }
#line 2546 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__V_11_11 == (MR_Integer) 0);
#line 1128 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__succeeded = !(hlds__hlds_out__hlds_out_mode__succeeded);
#line 1128 "hlds_out_mode.m"
            if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1128 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__V_11_11;
#line 1128 "hlds_out_mode.m"
            else
#line 1128 "hlds_out_mode.m"
              {
#line 1128 "hlds_out_mode.m"
                {
#line 1128 "hlds_out_mode.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[8], hlds__hlds_out__hlds_out_mode__HeadVar__1_1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_9_9)));
#line 1128 "hlds_out_mode.m"
                  return;
                }
#line 1128 "hlds_out_mode.m"
              }
#line 1128 "hlds_out_mode.m"
          }
#line 1128 "hlds_out_mode.m"
      }
#line 1128 "hlds_out_mode.m"
  }
#line 1128 "hlds_out_mode.m"
}

#line 1128 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0(
#line 1128 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1128 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2)
#line 1128 "hlds_out_mode.m"
{
#line 1128 "hlds_out_mode.m"
  {
#line 1128 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1128 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastX_9 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__1_1;
#line 1128 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastY_10 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

#line 1128 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__CastX_9 == hlds__hlds_out__hlds_out_mode__CastY_10);
#line 1128 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1128 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = MR_TRUE;
#line 1128 "hlds_out_mode.m"
    else
#line 1128 "hlds_out_mode.m"
      {
#line 1128 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeInfo_13_13;
#line 1128 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1128 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1128 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 2)));
#line 1128 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1128 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1128 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));

#line 2619 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 2621 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[7], ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_3_3)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_6_6)));
        }
#line 1128 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1128 "hlds_out_mode.m"
          {
#line 2628 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 2630 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__hlds_out__hlds_out_mode__V_4_4, hlds__hlds_out__hlds_out_mode__V_7_7);
            }
#line 1128 "hlds_out_mode.m"
            if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1128 "hlds_out_mode.m"
              {
#line 2637 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__TypeInfo_13_13 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[8];
#line 2639 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 2641 "hlds.hlds_out.hlds_out_mode.c"
                  return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_mode__TypeInfo_13_13, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_5_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_8_8)));
                }
#line 1128 "hlds_out_mode.m"
              }
#line 1128 "hlds_out_mode.m"
          }
#line 1128 "hlds_out_mode.m"
      }
#line 1128 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 1128 "hlds_out_mode.m"
  }
#line 1128 "hlds_out_mode.m"
}

#line 1061 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0(
#line 1061 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21,
#line 1061 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1061 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1061 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3,
#line 1061 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4)
#line 1061 "hlds_out_mode.m"
{
#line 1064 "hlds_out_mode.m"
  while (MR_TRUE)
#line 1064 "hlds_out_mode.m"
    {
#line 1064 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 1064 "hlds_out_mode.m"
      {
#line 1064 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1064 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1064 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3;
#line 1064 "hlds_out_mode.m"
        else
#line 1065 "hlds_out_mode.m"
          {
#line 1065 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_41;
#line 1065 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Mode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1065 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Modes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1065 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17;
#line 1065 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstA1_27;
#line 1065 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstB1_28;
#line 1065 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstA2_29;
#line 1065 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstB2_30;
#line 1065 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_9, (MR_Integer) 0)));
#line 1065 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_9, (MR_Integer) 1)));
#line 1065 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_33_33;
#line 1065 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 1065 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_35;
#line 1065 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_37;
#line 1065 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_38_38;
#line 2721 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1086 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstA1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_31_31, (MR_Integer) 0)));
#line 1086 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstB1_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_31_31, (MR_Integer) 1)));
#line 1086 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstA2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, (MR_Integer) 0)));
#line 1086 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstB2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, (MR_Integer) 1)));
#line 1087 "hlds_out_mode.m"
            {
#line 1087 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_33_33, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_27));
#line 1087 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_33_33, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_29));
#line 1087 "hlds_out_mode.m"
            }
#line 1087 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 2744 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_41 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6];
#line 1087 "hlds_out_mode.m"
            {
#line 1087 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_41, hlds__hlds_out__hlds_out_mode__V_33_33, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_35);
            }
#line 2751 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2753 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 2755 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) " = ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_35, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_37);
            }
#line 1089 "hlds_out_mode.m"
            {
#line 1089 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_38_38, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_28));
#line 1089 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_38_38, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_30));
#line 1089 "hlds_out_mode.m"
            }
#line 1089 "hlds_out_mode.m"
            {
#line 1089 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_41, hlds__hlds_out__hlds_out_mode__V_38_38, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17);
            }
#line 1070 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Modes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1068 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17;
#line 1070 "hlds_out_mode.m"
            else
#line 1071 "hlds_out_mode.m"
              {
#line 1071 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19;
#line 2783 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

#line 2786 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 2788 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) ", ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19);
                }
#line 1073 "hlds_out_mode.m"
                /* direct tailcall eliminated */
#line 1073 "hlds_out_mode.m"
                {
#line 1073 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Modes_10;
#line 1073 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0__tmp_copy_3 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19;

#line 1073 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0__tmp_copy_3;
#line 1073 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 1073 "hlds_out_mode.m"
                }
#line 1073 "hlds_out_mode.m"
                continue;
#line 1071 "hlds_out_mode.m"
              }
#line 1065 "hlds_out_mode.m"
          }
#line 1064 "hlds_out_mode.m"
      }
#line 1064 "hlds_out_mode.m"
      break;
#line 1064 "hlds_out_mode.m"
    }
#line 1061 "hlds_out_mode.m"
}

#line 953 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(
#line 953 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154,
#line 953 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_9,
#line 953 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_10,
#line 953 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_11,
#line 953 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_12,
#line 953 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_13,
#line 953 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_14,
#line 953 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_29,
#line 953 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30)
#line 953 "hlds_out_mode.m"
{
#line 958 "hlds_out_mode.m"
  {
#line 958 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 958 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31;

#line 962 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_10 == (MR_Integer) 0))
#line 961 "hlds_out_mode.m"
      {
#line 961 "hlds_out_mode.m"
        parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_29, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31);
      }
#line 962 "hlds_out_mode.m"
    else
#line 963 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_29;
#line 980 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 2))))
#line 991 "hlds_out_mode.m"
      {
#line 991 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104;
#line 991 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__V_106_106;
#line 991 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_107_107;
#line 991 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_111_111;
#line 991 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstB_142 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 991 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Inst_164 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)));
#line 991 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Insts_165;
#line 991 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_173;
#line 991 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Inst_182;
#line 788 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Insts_183;

#line 992 "hlds_out_mode.m"
        {
#line 992 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044merge_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104);
        }
#line 993 "hlds_out_mode.m"
        {
#line 993 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Insts_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_165, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_142));
#line 993 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 993 "hlds_out_mode.m"
        }
#line 993 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__V_106_106 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 790 "hlds_out_mode.m"
        {
#line 790 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Inst_164, hlds__hlds_out__hlds_out_mode__V_106_106, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_173);
        }
#line 788 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__Inst_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_165, (MR_Integer) 0)));
#line 788 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__Insts_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_165, (MR_Integer) 1)));
#line 790 "hlds_out_mode.m"
        {
#line 790 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Inst_182, hlds__hlds_out__hlds_out_mode__V_106_106, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_173, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_107_107);
        }
#line 995 "hlds_out_mode.m"
        {
#line 995 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_107_107, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_111_111);
        }
#line 996 "hlds_out_mode.m"
        {
#line 996 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_111_111, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 996 "hlds_out_mode.m"
          return;
        }
#line 991 "hlds_out_mode.m"
      }
#line 980 "hlds_out_mode.m"
    else
#line 980 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 1))))
#line 981 "hlds_out_mode.m"
      {
#line 981 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__IsLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)));
#line 981 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Real_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 981 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)));
#line 981 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstB_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 3)));
#line 981 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_115_115;
#line 981 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_116_116;
#line 981 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_117_117;
#line 981 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_119_119;
#line 981 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_120_120;
#line 981 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__V_121_121;
#line 981 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_122_122;
#line 981 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_123_123;
#line 981 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126;

#line 982 "hlds_out_mode.m"
        {
#line 982 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044unify(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_115_115);
        }
#line 983 "hlds_out_mode.m"
        {
#line 983 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__IsLive_20, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_115_115, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_116_116);
        }
#line 984 "hlds_out_mode.m"
        {
#line 984 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Real_21, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_116_116, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_117_117);
        }
#line 985 "hlds_out_mode.m"
        {
#line 985 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_117_117, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_119_119);
        }
#line 986 "hlds_out_mode.m"
        {
#line 986 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_123_123, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_23));
#line 986 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 986 "hlds_out_mode.m"
        }
#line 986 "hlds_out_mode.m"
        {
#line 986 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_120_120, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA_22));
#line 986 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_120_120, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_123_123));
#line 986 "hlds_out_mode.m"
        }
#line 986 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__V_121_121 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 986 "hlds_out_mode.m"
        {
#line 986 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__V_120_120, hlds__hlds_out__hlds_out_mode__V_121_121, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_119_119, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_122_122);
        }
#line 988 "hlds_out_mode.m"
        {
#line 988 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_122_122, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126);
        }
#line 989 "hlds_out_mode.m"
        {
#line 989 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 989 "hlds_out_mode.m"
          return;
        }
#line 981 "hlds_out_mode.m"
      }
#line 980 "hlds_out_mode.m"
    else
#line 980 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 0))))
#line 966 "hlds_out_mode.m"
      {
#line 966 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)));
#line 966 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));

#line 971 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__Args_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 968 "hlds_out_mode.m"
          {
#line 968 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_138_138;

#line 969 "hlds_out_mode.m"
            {
#line 969 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Name_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_138_138);
            }
#line 970 "hlds_out_mode.m"
            {
#line 970 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_138_138, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 970 "hlds_out_mode.m"
              return;
            }
#line 968 "hlds_out_mode.m"
          }
#line 971 "hlds_out_mode.m"
        else
#line 972 "hlds_out_mode.m"
          {
#line 972 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129;
#line 972 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131;
#line 972 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__V_132_132;
#line 972 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133;
#line 972 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_135_135;

#line 973 "hlds_out_mode.m"
            {
#line 973 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Name_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129);
            }
#line 974 "hlds_out_mode.m"
            {
#line 974 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131);
            }
#line 975 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_132_132 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 975 "hlds_out_mode.m"
            {
#line 975 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Args_17, hlds__hlds_out__hlds_out_mode__V_132_132, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133);
            }
#line 977 "hlds_out_mode.m"
            {
#line 977 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_135_135);
            }
#line 978 "hlds_out_mode.m"
            {
#line 978 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_135_135, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 978 "hlds_out_mode.m"
              return;
            }
#line 972 "hlds_out_mode.m"
          }
#line 966 "hlds_out_mode.m"
      }
#line 980 "hlds_out_mode.m"
    else
#line 980 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1009 "hlds_out_mode.m"
      {
#line 1009 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74;
#line 1009 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_75_75;
#line 1009 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76;
#line 1009 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78;
#line 1009 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80;
#line 1009 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__V_82_82;
#line 1009 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83;
#line 1009 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85;
#line 1009 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__IsLive_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1009 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Real_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1009 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 1009 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Uniq_148 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) & (MR_Integer) 7);

#line 1010 "hlds_out_mode.m"
        {
#line 1010 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044any(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74);
        }
#line 1011 "hlds_out_mode.m"
        {
#line 1011 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__IsLive_145, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_75_75);
        }
#line 1012 "hlds_out_mode.m"
        {
#line 1012 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Real_146, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_75_75, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76);
        }
#line 1013 "hlds_out_mode.m"
        {
#line 1013 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Uniq_148, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78);
        }
#line 1014 "hlds_out_mode.m"
        {
#line 1014 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80);
        }
#line 1015 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__V_82_82 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 1015 "hlds_out_mode.m"
        {
#line 1015 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__SubInstName_147, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_82_82, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83);
        }
#line 1017 "hlds_out_mode.m"
        {
#line 1017 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85);
        }
#line 1018 "hlds_out_mode.m"
        {
#line 1018 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1018 "hlds_out_mode.m"
          return;
        }
#line 1009 "hlds_out_mode.m"
      }
#line 980 "hlds_out_mode.m"
    else
#line 980 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 998 "hlds_out_mode.m"
      {
#line 998 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 998 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Uniq_25 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 998 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89;
#line 998 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_90_90;
#line 998 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_91_91;
#line 998 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93;
#line 998 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95;
#line 998 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__V_97_97;
#line 998 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_98_98;
#line 998 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100;
#line 998 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__IsLive_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 998 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Real_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 999 "hlds_out_mode.m"
        {
#line 999 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044ground(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89);
        }
#line 1000 "hlds_out_mode.m"
        {
#line 1000 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__IsLive_143, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_90_90);
        }
#line 1001 "hlds_out_mode.m"
        {
#line 1001 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Real_144, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_90_90, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_91_91);
        }
#line 1002 "hlds_out_mode.m"
        {
#line 1002 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Uniq_25, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_91_91, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93);
        }
#line 1003 "hlds_out_mode.m"
        {
#line 1003 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95);
        }
#line 1004 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__V_97_97 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 1004 "hlds_out_mode.m"
        {
#line 1004 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__SubInstName_24, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_97_97, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_98_98);
        }
#line 1006 "hlds_out_mode.m"
        {
#line 1006 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_98_98, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100);
        }
#line 1007 "hlds_out_mode.m"
        {
#line 1007 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1007 "hlds_out_mode.m"
          return;
        }
#line 998 "hlds_out_mode.m"
      }
#line 980 "hlds_out_mode.m"
    else
#line 980 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1027 "hlds_out_mode.m"
      {
#line 1027 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56;
#line 1027 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__V_58_58;
#line 1027 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59;
#line 1027 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61;
#line 1027 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));

#line 1028 "hlds_out_mode.m"
        {
#line 1028 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044mostly_uniq_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56);
        }
#line 1029 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__V_58_58 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 1029 "hlds_out_mode.m"
        {
#line 1029 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__SubInstName_150, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_58_58, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59);
        }
#line 1031 "hlds_out_mode.m"
        {
#line 1031 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61);
        }
#line 1032 "hlds_out_mode.m"
        {
#line 1032 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1032 "hlds_out_mode.m"
          return;
        }
#line 1027 "hlds_out_mode.m"
      }
#line 980 "hlds_out_mode.m"
    else
#line 980 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1020 "hlds_out_mode.m"
      {
#line 1020 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65;
#line 1020 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__V_67_67;
#line 1020 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68;
#line 1020 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70;
#line 1020 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));

#line 1021 "hlds_out_mode.m"
        {
#line 1021 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044shared_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65);
        }
#line 1022 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__V_67_67 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 1022 "hlds_out_mode.m"
        {
#line 1022 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__SubInstName_149, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_67_67, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68);
        }
#line 1024 "hlds_out_mode.m"
        {
#line 1024 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70);
        }
#line 1025 "hlds_out_mode.m"
        {
#line 1025 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1025 "hlds_out_mode.m"
          return;
        }
#line 1020 "hlds_out_mode.m"
      }
#line 980 "hlds_out_mode.m"
    else
#line 980 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1034 "hlds_out_mode.m"
      {
#line 1034 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Uniqueness_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 1034 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)));
#line 1034 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeVarSet_28;
#line 1034 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_46_46;
#line 1034 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48;
#line 1034 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
#line 1034 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52;

#line 1035 "hlds_out_mode.m"
        {
#line 1035 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044typed_ground(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_46_46);
        }
#line 1036 "hlds_out_mode.m"
        {
#line 1036 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Uniqueness_26, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_46_46, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48);
        }
#line 1037 "hlds_out_mode.m"
        {
#line 1037 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ", ", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
        }
#line 1038 "hlds_out_mode.m"
        {
#line 1038 "hlds_out_mode.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_mode__TypeVarSet_28);
        }
#line 1039 "hlds_out_mode.m"
        {
#line 1039 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__TypeVarSet_28, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Type_27, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52);
        }
#line 1040 "hlds_out_mode.m"
        {
#line 1040 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1040 "hlds_out_mode.m"
          return;
        }
#line 1034 "hlds_out_mode.m"
      }
#line 980 "hlds_out_mode.m"
    else
#line 1042 "hlds_out_mode.m"
      {
#line 1042 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;
#line 1042 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35;
#line 1042 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37;
#line 1042 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__V_39_39;
#line 1042 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40;
#line 1042 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42;
#line 1042 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)));
#line 1042 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Type_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 1042 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeVarSet_153;

#line 1043 "hlds_out_mode.m"
        {
#line 1043 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044typed_inst(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
        }
#line 1044 "hlds_out_mode.m"
        {
#line 1044 "hlds_out_mode.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_mode__TypeVarSet_153);
        }
#line 1045 "hlds_out_mode.m"
        {
#line 1045 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__TypeVarSet_153, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Type_152, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35);
        }
#line 1046 "hlds_out_mode.m"
        {
#line 1046 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37);
        }
#line 1047 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__V_39_39 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 1047 "hlds_out_mode.m"
        {
#line 1047 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__SubInstName_151, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_39_39, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
        }
#line 1049 "hlds_out_mode.m"
        {
#line 1049 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42);
        }
#line 1050 "hlds_out_mode.m"
        {
#line 1050 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1050 "hlds_out_mode.m"
          return;
        }
#line 1042 "hlds_out_mode.m"
      }
#line 958 "hlds_out_mode.m"
  }
#line 953 "hlds_out_mode.m"
}

#line 940 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
#line 940 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_1,
#line 940 "hlds_out_mode.m"
  MR_Integer * hlds__hlds_out__hlds_out_mode__InstAddr_2)
#line 940 "hlds_out_mode.m"
{
#line 942 "hlds_out_mode.m"
  {
#line 942 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 945 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__Inst_1 ;
		{
#line 945 "hlds_out_mode.m"

    InstAddr = Inst;

#line 3497 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 *hlds__hlds_out__hlds_out_mode__InstAddr_2  = InstAddr;
#line 945 "hlds_out_mode.m"
}
#line 942 "hlds_out_mode.m"
  }
#line 940 "hlds_out_mode.m"
}

#line 905 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
#line 905 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 905 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 905 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent0_2,
#line 905 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 905 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 905 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 905 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 905 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7)
#line 905 "hlds_out_mode.m"
{
#line 909 "hlds_out_mode.m"
  while (MR_TRUE)
#line 909 "hlds_out_mode.m"
    {
#line 909 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 909 "hlds_out_mode.m"
      {
#line 909 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 909 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6;
#line 909 "hlds_out_mode.m"
        else
#line 911 "hlds_out_mode.m"
          {
#line 911 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 911 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 911 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_15, (MR_Integer) 0)));
#line 911 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_15, (MR_Integer) 1)));
#line 911 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__Indent1_24 = (hlds__hlds_out__hlds_out_mode__Indent0_2 + (MR_Integer) 1);
#line 911 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__Indent2_25 = (hlds__hlds_out__hlds_out_mode__Indent1_24 + (MR_Integer) 1);
#line 911 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;

#line 920 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Args_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 916 "hlds_out_mode.m"
              {
#line 916 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43;
#line 916 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45;
#line 3572 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 917 "hlds_out_mode.m"
                {
#line 917 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43);
                }
#line 918 "hlds_out_mode.m"
                {
#line 918 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__ConsId_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45);
                }
#line 3585 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3587 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3589 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
                }
#line 916 "hlds_out_mode.m"
              }
#line 920 "hlds_out_mode.m"
            else
#line 921 "hlds_out_mode.m"
              {
#line 921 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
#line 921 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36;
#line 921 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38;
#line 921 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;
#line 921 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40;
#line 921 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Inst_60;
#line 921 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Insts_61;
#line 921 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_69;
#line 3614 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3616 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 922 "hlds_out_mode.m"
                {
#line 922 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34);
                }
#line 923 "hlds_out_mode.m"
                {
#line 923 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__ConsId_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36);
                }
#line 3629 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3631 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3633 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "(\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
                }
#line 788 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Inst_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Args_23, (MR_Integer) 0)));
#line 788 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Insts_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Args_23, (MR_Integer) 1)));
#line 790 "hlds_out_mode.m"
                {
#line 790 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Inst_60, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_69);
                }
#line 792 "hlds_out_mode.m"
                {
#line 792 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Insts_61, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_69, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
                }
#line 927 "hlds_out_mode.m"
                {
#line 927 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
                }
#line 3655 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3657 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3659 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) ")\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
                }
#line 921 "hlds_out_mode.m"
              }
#line 932 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__BoundInsts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 931 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;
#line 932 "hlds_out_mode.m"
            else
#line 933 "hlds_out_mode.m"
              {
#line 933 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48;
#line 933 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
#line 3676 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 934 "hlds_out_mode.m"
                {
#line 934 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent0_2, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48);
                }
#line 3684 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3686 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3688 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_3(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) ";\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
                }
#line 936 "hlds_out_mode.m"
                /* direct tailcall eliminated */
#line 936 "hlds_out_mode.m"
                {
#line 936 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__BoundInsts_16;
#line 936 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;

#line 936 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6;
#line 936 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 936 "hlds_out_mode.m"
                }
#line 936 "hlds_out_mode.m"
                continue;
#line 933 "hlds_out_mode.m"
              }
#line 911 "hlds_out_mode.m"
          }
#line 909 "hlds_out_mode.m"
      }
#line 909 "hlds_out_mode.m"
      break;
#line 909 "hlds_out_mode.m"
    }
#line 905 "hlds_out_mode.m"
}

#line 806 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(
#line 806 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103,
#line 806 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
#line 806 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 806 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 806 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 806 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 806 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_30,
#line 806 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31)
#line 806 "hlds_out_mode.m"
{
#line 810 "hlds_out_mode.m"
  {
#line 810 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 810 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 810 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;

#line 811 "hlds_out_mode.m"
    {
#line 811 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
    }
#line 814 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__InclAddr_11 == (MR_Integer) 1))
#line 815 "hlds_out_mode.m"
      {
#line 815 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__InstAddr_14;
#line 815 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__InstAddrStr_15;
#line 815 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37;

#line 816 "hlds_out_mode.m"
        {
#line 816 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(hlds__hlds_out__hlds_out_mode__Inst_8, &hlds__hlds_out__hlds_out_mode__InstAddr_14);
        }
#line 817 "hlds_out_mode.m"
        {
#line 817 "hlds_out_mode.m"
          mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19], (MR_Integer) 2, hlds__hlds_out__hlds_out_mode__InstAddr_14, &hlds__hlds_out__hlds_out_mode__InstAddrStr_15);
        }
#line 818 "hlds_out_mode.m"
        {
#line 818 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__InstAddrStr_15, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37);
        }
#line 819 "hlds_out_mode.m"
        {
#line 819 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) ": ", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
        }
#line 815 "hlds_out_mode.m"
      }
#line 814 "hlds_out_mode.m"
    else
#line 813 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 832 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Inst_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "hlds_out_mode.m"
      {
#line 834 "hlds_out_mode.m"
        {
#line 834 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "free\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 834 "hlds_out_mode.m"
          return;
        }
#line 833 "hlds_out_mode.m"
      }
#line 832 "hlds_out_mode.m"
    else
#line 832 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Inst_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 901 "hlds_out_mode.m"
      {
#line 902 "hlds_out_mode.m"
        {
#line 902 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "not_reached\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 902 "hlds_out_mode.m"
          return;
        }
#line 901 "hlds_out_mode.m"
      }
#line 832 "hlds_out_mode.m"
    else
#line 832 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 2))))
#line 822 "hlds_out_mode.m"
      {
#line 822 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Uniq_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)));
#line 822 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 822 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_94_94;

#line 827 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 829 "hlds_out_mode.m"
          {
#line 829 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__mercury_format_any_uniqueness_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__Uniq_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_94_94);
          }
#line 827 "hlds_out_mode.m"
        else
#line 824 "hlds_out_mode.m"
          {
#line 824 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_18 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_17), (MR_Integer) 1);

#line 825 "hlds_out_mode.m"
            {
#line 825 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_any_pred_inst_info_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__Uniq_16, hlds__hlds_out__hlds_out_mode__PredInstInfo_18, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_94_94);
            }
#line 824 "hlds_out_mode.m"
          }
#line 831 "hlds_out_mode.m"
        {
#line 831 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_94_94, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 831 "hlds_out_mode.m"
          return;
        }
#line 822 "hlds_out_mode.m"
      }
#line 832 "hlds_out_mode.m"
    else
#line 832 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 1))))
#line 836 "hlds_out_mode.m"
      {
#line 837 "hlds_out_mode.m"
        {
#line 837 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "free(with some type)\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 837 "hlds_out_mode.m"
          return;
        }
#line 836 "hlds_out_mode.m"
      }
#line 832 "hlds_out_mode.m"
    else
#line 832 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 893 "hlds_out_mode.m"
      {
#line 893 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Name_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 893 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));
#line 893 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_44_44;

#line 894 "hlds_out_mode.m"
        {
#line 894 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 894 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_44_44, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_27));
#line 894 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_44_44, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Args_28));
#line 894 "hlds_out_mode.m"
        }
#line 894 "hlds_out_mode.m"
        {
#line 894 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__V_44_44, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 894 "hlds_out_mode.m"
          return;
        }
#line 893 "hlds_out_mode.m"
      }
#line 832 "hlds_out_mode.m"
    else
#line 832 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 839 "hlds_out_mode.m"
      {
#line 839 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstResults_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));
#line 839 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 3)));
#line 839 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61;
#line 839 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63;
#line 839 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72;
#line 839 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__V_78_78;
#line 839 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85;
#line 839 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86;
#line 839 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Uniq_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));

#line 840 "hlds_out_mode.m"
        {
#line 840 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__Uniq_97, (MR_String) "bound", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61);
        }
#line 841 "hlds_out_mode.m"
        {
#line 841 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63);
        }
#line 844 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__Lang_10 == (MR_Integer) 1))
#line 845 "hlds_out_mode.m"
          {
#line 845 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_104_104;
#line 845 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstResultsTerm_22;
#line 845 "hlds_out_mode.m"
            MR_String hlds__hlds_out__hlds_out_mode__InstResultsStr_23;
#line 845 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_64_64;
#line 845 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_65_65;
#line 845 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__V_67_67;
#line 845 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68;
#line 845 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70;

#line 847 "hlds_out_mode.m"
            {
#line 847 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_64_64 = mercury__term__context_init_0_f_0();
            }
#line 847 "hlds_out_mode.m"
            {
#line 847 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__InstResultsTerm_22 = hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__V_64_64, hlds__hlds_out__hlds_out_mode__InstResults_20);
            }
#line 3977 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 849 "hlds_out_mode.m"
            {
#line 849 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_65_65 = mercury__varset__init_0_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_104_104);
            }
#line 849 "hlds_out_mode.m"
            {
#line 849 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__InstResultsStr_23 = parse_tree__mercury_to_mercury__mercury_term_to_string_3_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_104_104, hlds__hlds_out__hlds_out_mode__V_65_65, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__InstResultsTerm_22);
            }
#line 850 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_67_67 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 850 "hlds_out_mode.m"
            {
#line 850 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__V_67_67, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68);
            }
#line 851 "hlds_out_mode.m"
            {
#line 851 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__InstResultsStr_23, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70);
            }
#line 852 "hlds_out_mode.m"
            {
#line 852 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72);
            }
#line 845 "hlds_out_mode.m"
          }
#line 844 "hlds_out_mode.m"
        else
#line 843 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63;
#line 861 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__V_78_78 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 4014 "hlds.hlds_out.hlds_out_mode.c"
        if ((hlds__hlds_out__hlds_out_mode__Lang_10 == (MR_Integer) 1))
#line 4016 "hlds.hlds_out.hlds_out_mode.c"
          {
#line 4018 "hlds.hlds_out.hlds_out_mode.c"
            MR_Integer hlds__hlds_out__hlds_out_mode__V_73_73 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 4020 "hlds.hlds_out.hlds_out_mode.c"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74;
#line 4022 "hlds.hlds_out.hlds_out_mode.c"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_77_77;
#line 4024 "hlds.hlds_out.hlds_out_mode.c"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_79_79;
#line 4026 "hlds.hlds_out.hlds_out_mode.c"
            MR_Integer hlds__hlds_out__hlds_out_mode__V_81_81;
#line 4028 "hlds.hlds_out.hlds_out_mode.c"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_82_82;

#line 858 "hlds_out_mode.m"
            {
#line 858 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__V_73_73, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74);
            }
#line 859 "hlds_out_mode.m"
            {
#line 859 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "[\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_77_77);
            }
#line 861 "hlds_out_mode.m"
            {
#line 861 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__BoundInsts_21, hlds__hlds_out__hlds_out_mode__V_78_78, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_77_77, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_79_79);
            }
#line 867 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_81_81 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 867 "hlds_out_mode.m"
            {
#line 867 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__V_81_81, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_79_79, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_82_82);
            }
#line 868 "hlds_out_mode.m"
            {
#line 868 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "]\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_82_82, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85);
            }
#line 4058 "hlds.hlds_out.hlds_out_mode.c"
          }
#line 4060 "hlds.hlds_out.hlds_out_mode.c"
        else
#line 861 "hlds_out_mode.m"
          {
#line 861 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__BoundInsts_21, hlds__hlds_out__hlds_out_mode__V_78_78, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85);
          }
#line 870 "hlds_out_mode.m"
        {
#line 870 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86);
        }
#line 871 "hlds_out_mode.m"
        {
#line 871 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 871 "hlds_out_mode.m"
          return;
        }
#line 839 "hlds_out_mode.m"
      }
#line 832 "hlds_out_mode.m"
    else
#line 832 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 888 "hlds_out_mode.m"
      {
#line 888 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 888 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__ConstrainedInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));
#line 888 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_47_47 = (MR_Word) hlds__hlds_out__hlds_out_mode__InstVarSet_12;
#line 888 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48;

#line 889 "hlds_out_mode.m"
        {
#line 889 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_constrained_inst_vars_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6], hlds__hlds_out__hlds_out_mode__Vars_25, hlds__hlds_out__hlds_out_mode__ConstrainedInst_26, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_47_47)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48);
        }
#line 891 "hlds_out_mode.m"
        {
#line 891 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 891 "hlds_out_mode.m"
          return;
        }
#line 888 "hlds_out_mode.m"
      }
#line 832 "hlds_out_mode.m"
    else
#line 832 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 897 "hlds_out_mode.m"
      {
#line 897 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));

#line 898 "hlds_out_mode.m"
        {
#line 898 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__InstName_29, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 898 "hlds_out_mode.m"
          return;
        }
#line 897 "hlds_out_mode.m"
      }
#line 832 "hlds_out_mode.m"
    else
#line 832 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 873 "hlds_out_mode.m"
      {
#line 873 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57;
#line 873 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Uniq_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 873 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));

#line 878 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 879 "hlds_out_mode.m"
          {
#line 880 "hlds_out_mode.m"
            {
#line 880 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__Uniq_100, (MR_String) "ground", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57);
            }
#line 879 "hlds_out_mode.m"
          }
#line 878 "hlds_out_mode.m"
        else
#line 875 "hlds_out_mode.m"
          {
#line 875 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_98 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_101), (MR_Integer) 1);

#line 876 "hlds_out_mode.m"
            {
#line 876 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_ground_pred_inst_info_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__Uniq_100, hlds__hlds_out__hlds_out_mode__PredInstInfo_98, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57);
            }
#line 875 "hlds_out_mode.m"
          }
#line 882 "hlds_out_mode.m"
        {
#line 882 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 882 "hlds_out_mode.m"
          return;
        }
#line 873 "hlds_out_mode.m"
      }
#line 832 "hlds_out_mode.m"
    else
#line 884 "hlds_out_mode.m"
      {
#line 884 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 884 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52;

#line 885 "hlds_out_mode.m"
        {
#line 885 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__InstVarSet_12, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Var_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52);
        }
#line 886 "hlds_out_mode.m"
        {
#line 886 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 886 "hlds_out_mode.m"
          return;
        }
#line 884 "hlds_out_mode.m"
      }
#line 810 "hlds_out_mode.m"
  }
#line 806 "hlds_out_mode.m"
}

#line 783 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
#line 783 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_26,
#line 783 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 783 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_2,
#line 783 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 783 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 783 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 783 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 783 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7)
#line 783 "hlds_out_mode.m"
{
#line 787 "hlds_out_mode.m"
  while (MR_TRUE)
#line 787 "hlds_out_mode.m"
    {
#line 787 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 787 "hlds_out_mode.m"
      {
#line 787 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 787 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6;
#line 787 "hlds_out_mode.m"
        else
#line 789 "hlds_out_mode.m"
          {
#line 789 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 789 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Insts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 789 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_24;

#line 790 "hlds_out_mode.m"
            {
#line 790 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_26, hlds__hlds_out__hlds_out_mode__Inst_15, hlds__hlds_out__hlds_out_mode__Indent_2, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_24);
            }
#line 792 "hlds_out_mode.m"
            /* direct tailcall eliminated */
#line 792 "hlds_out_mode.m"
            {
#line 792 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Insts_16;
#line 792 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_24;

#line 792 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6;
#line 792 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 792 "hlds_out_mode.m"
            }
#line 792 "hlds_out_mode.m"
            continue;
#line 789 "hlds_out_mode.m"
          }
#line 787 "hlds_out_mode.m"
      }
#line 787 "hlds_out_mode.m"
      break;
#line 787 "hlds_out_mode.m"
    }
#line 783 "hlds_out_mode.m"
}

#line 718 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(
#line 718 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 718 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_8,
#line 718 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 718 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 718 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 718 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 718 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22,
#line 718 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23)
#line 718 "hlds_out_mode.m"
{
#line 723 "hlds_out_mode.m"
  {
#line 723 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 723 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_14;
#line 723 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_15;
#line 723 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_16;
#line 723 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_17;
#line 723 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstA1Addr_18;
#line 723 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstA2Addr_19;
#line 723 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstB1Addr_20;
#line 723 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstB2Addr_21;
#line 723 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_8, (MR_Integer) 0)));
#line 723 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_8, (MR_Integer) 1)));
#line 723 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26;
#line 723 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28;
#line 723 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29;
#line 723 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30;
#line 723 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 723 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36;
#line 723 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38;
#line 723 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44;
#line 4344 "hlds.hlds_out.hlds_out_mode.c"
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 724 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, (MR_Integer) 0)));
#line 724 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, (MR_Integer) 1)));
#line 724 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 0)));
#line 724 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 1)));
#line 945 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstA1_14 ;
		{
#line 945 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4368 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstA1Addr_18  = InstAddr;
#line 945 "hlds_out_mode.m"
}
#line 945 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstA2_16 ;
		{
#line 945 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4388 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstA2Addr_19  = InstAddr;
#line 945 "hlds_out_mode.m"
}
#line 945 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstB1_15 ;
		{
#line 945 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4408 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstB1Addr_20  = InstAddr;
#line 945 "hlds_out_mode.m"
}
#line 945 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstB2_17 ;
		{
#line 945 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4428 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstB2Addr_21  = InstAddr;
#line 945 "hlds_out_mode.m"
}
#line 730 "hlds_out_mode.m"
    {
#line 730 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26);
    }
#line 4440 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4442 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 4444 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "old lhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28);
    }
#line 732 "hlds_out_mode.m"
    {
#line 732 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstA1_14, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29);
    }
#line 735 "hlds_out_mode.m"
    {
#line 735 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30);
    }
#line 736 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB1Addr_20 == hlds__hlds_out__hlds_out_mode__InstA1Addr_18);
#line 739 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 738 "hlds_out_mode.m"
      {
#line 4463 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4466 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4468 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "old rhs inst: same as old lhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
        }
#line 738 "hlds_out_mode.m"
      }
#line 739 "hlds_out_mode.m"
    else
#line 740 "hlds_out_mode.m"
      {
#line 740 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
#line 4479 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4482 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4484 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "old rhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34);
        }
#line 741 "hlds_out_mode.m"
        {
#line 741 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstB1_15, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
        }
#line 740 "hlds_out_mode.m"
      }
#line 745 "hlds_out_mode.m"
    {
#line 745 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36);
    }
#line 746 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstA2Addr_19 == hlds__hlds_out__hlds_out_mode__InstA1Addr_18);
#line 749 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 748 "hlds_out_mode.m"
      {
#line 4505 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4508 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4510 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_3(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new lhs inst: unchanged\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
        }
#line 748 "hlds_out_mode.m"
      }
#line 749 "hlds_out_mode.m"
    else
#line 752 "hlds_out_mode.m"
      {
#line 749 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstA2Addr_19 == hlds__hlds_out__hlds_out_mode__InstB1Addr_20);
#line 752 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 751 "hlds_out_mode.m"
          {
#line 4525 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4528 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4530 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_4(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new lhs inst: changed to old rhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
            }
#line 751 "hlds_out_mode.m"
          }
#line 752 "hlds_out_mode.m"
        else
#line 753 "hlds_out_mode.m"
          {
#line 753 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42;
#line 4541 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4544 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4546 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_5(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new lhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42);
            }
#line 754 "hlds_out_mode.m"
            {
#line 754 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstA2_16, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
            }
#line 753 "hlds_out_mode.m"
          }
#line 752 "hlds_out_mode.m"
      }
#line 758 "hlds_out_mode.m"
    {
#line 758 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44);
    }
#line 759 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB2Addr_21 == hlds__hlds_out__hlds_out_mode__InstB1Addr_20);
#line 762 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 761 "hlds_out_mode.m"
      {
#line 4569 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4572 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4574 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_6(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new rhs inst: unchanged\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
#line 4576 "hlds.hlds_out.hlds_out_mode.c"
          return;
        }
#line 761 "hlds_out_mode.m"
      }
#line 762 "hlds_out_mode.m"
    else
#line 765 "hlds_out_mode.m"
      {
#line 762 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB2Addr_21 == hlds__hlds_out__hlds_out_mode__InstA2Addr_19);
#line 765 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 764 "hlds_out_mode.m"
          {
#line 4591 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4594 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4596 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_7(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new rhs inst: changed to new lhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
#line 4598 "hlds.hlds_out.hlds_out_mode.c"
              return;
            }
#line 764 "hlds_out_mode.m"
          }
#line 765 "hlds_out_mode.m"
        else
#line 766 "hlds_out_mode.m"
          {
#line 766 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
#line 4609 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4612 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4614 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_8(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new rhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
            }
#line 767 "hlds_out_mode.m"
            {
#line 767 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstB2_17, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
#line 767 "hlds_out_mode.m"
              return;
            }
#line 766 "hlds_out_mode.m"
          }
#line 765 "hlds_out_mode.m"
      }
#line 723 "hlds_out_mode.m"
  }
#line 718 "hlds_out_mode.m"
}

#line 690 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0(
#line 690 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37,
#line 690 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 690 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum_2,
#line 690 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
#line 690 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 690 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_5,
#line 690 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6,
#line 690 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7,
#line 690 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8)
#line 690 "hlds_out_mode.m"
{
#line 694 "hlds_out_mode.m"
  while (MR_TRUE)
#line 694 "hlds_out_mode.m"
    {
#line 694 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 694 "hlds_out_mode.m"
      {
#line 694 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 694 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 694 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7;
#line 694 "hlds_out_mode.m"
        else
#line 696 "hlds_out_mode.m"
          {
#line 696 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__UniMode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 696 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__UniModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 696 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27;
#line 696 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29;
#line 696 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30;
#line 696 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 696 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;
#line 696 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__V_34_34;
#line 4691 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 4693 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 4695 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 697 "hlds_out_mode.m"
            {
#line 697 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, hlds__hlds_out__hlds_out_mode__Indent_3, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27);
            }
#line 4703 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4705 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4707 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) ((MR_String) "argument ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29);
            }
#line 4710 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 8)));
#line 4712 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4714 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgNum_2)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30);
            }
#line 4717 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4719 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4721 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) ((MR_String) ":\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
            }
#line 701 "hlds_out_mode.m"
            {
#line 701 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, hlds__hlds_out__hlds_out_mode__UniMode_17, hlds__hlds_out__hlds_out_mode__Indent_3, hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__InclAddr_5, hlds__hlds_out__hlds_out_mode__InstVarSet_6, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
            }
#line 703 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_34_34 = (hlds__hlds_out__hlds_out_mode__ArgNum_2 + (MR_Integer) 1);
#line 703 "hlds_out_mode.m"
            /* direct tailcall eliminated */
#line 703 "hlds_out_mode.m"
            {
#line 703 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__UniModes_18;
#line 703 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum__tmp_copy_2 = hlds__hlds_out__hlds_out_mode__V_34_34;
#line 703 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;

#line 703 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_7;
#line 703 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__ArgNum_2 = hlds__hlds_out__hlds_out_mode__ArgNum__tmp_copy_2;
#line 703 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 703 "hlds_out_mode.m"
            }
#line 703 "hlds_out_mode.m"
            continue;
#line 696 "hlds_out_mode.m"
          }
#line 694 "hlds_out_mode.m"
      }
#line 694 "hlds_out_mode.m"
      break;
#line 694 "hlds_out_mode.m"
    }
#line 690 "hlds_out_mode.m"
}

#line 630 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3(
#line 630 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
#line 630 "hlds_out_mode.m"
{
#line 630 "hlds_out_mode.m"
  {
#line 630 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 630 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

#line 630 "hlds_out_mode.m"
    {
#line 630 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__630__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
#line 630 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 630 "hlds_out_mode.m"
  }
#line 630 "hlds_out_mode.m"
}

#line 622 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2(
#line 622 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
#line 622 "hlds_out_mode.m"
{
#line 622 "hlds_out_mode.m"
  {
#line 622 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 622 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

#line 622 "hlds_out_mode.m"
    {
#line 622 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__622__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
#line 622 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 622 "hlds_out_mode.m"
  }
#line 622 "hlds_out_mode.m"
}

#line 638 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1(
#line 638 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
#line 638 "hlds_out_mode.m"
{
#line 638 "hlds_out_mode.m"
  {
#line 638 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 638 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

#line 638 "hlds_out_mode.m"
    {
#line 638 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__638__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
#line 638 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 638 "hlds_out_mode.m"
  }
#line 638 "hlds_out_mode.m"
}

#line 559 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(
#line 559 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ConsId_4,
#line 559 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 559 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__Term_6)
#line 559 "hlds_out_mode.m"
{
#line 564 "hlds_out_mode.m"
  {
#line 564 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 564 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__ConsId_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 616 "hlds_out_mode.m"
      {
#line 616 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_129;

#line 617 "hlds_out_mode.m"
        {
#line 617 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_129);
        }
#line 619 "hlds_out_mode.m"
        {
#line 619 "hlds_out_mode.m"
          MR_Word base;
#line 619 "hlds_out_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 619 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 619 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[9])));
#line 619 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_129));
#line 619 "hlds_out_mode.m"
        }
#line 616 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 2))))
#line 647 "hlds_out_mode.m"
      {
#line 647 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_139;

#line 648 "hlds_out_mode.m"
        {
#line 648 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_139);
        }
#line 650 "hlds_out_mode.m"
        {
#line 650 "hlds_out_mode.m"
          MR_Word base;
#line 650 "hlds_out_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 650 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 650 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[10])));
#line 650 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 650 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_139));
#line 650 "hlds_out_mode.m"
        }
#line 647 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 1))))
#line 609 "hlds_out_mode.m"
      {
#line 609 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_25 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4), (MR_Integer) 1);
#line 609 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_78_78;
#line 609 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_82_82;
#line 609 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_125;
#line 609 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__FunctorName_126;
#line 609 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorName_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_25, (MR_Integer) 0)));
#line 609 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__Arity_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_25, (MR_Integer) 1)));
#line 609 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_151_151;
#line 609 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_157_157;
#line 609 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_159_159;
#line 609 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_160_160;
#line 609 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_167_167;

#line 611 "hlds_out_mode.m"
        {
#line 611 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_125);
        }
#line 613 "hlds_out_mode.m"
        {
#line 613 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_78_78 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorName_127);
        }
#line 4960 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__V_157_157 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19];
#line 613 "hlds_out_mode.m"
        {
#line 613 "hlds_out_mode.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_157_157, hlds__hlds_out__hlds_out_mode__Arity_128, &hlds__hlds_out__hlds_out_mode__V_151_151);
        }
#line 612 "hlds_out_mode.m"
        {
#line 612 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_159_159 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_151_151);
        }
#line 613 "hlds_out_mode.m"
        {
#line 613 "hlds_out_mode.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_157_157, hlds__hlds_out__hlds_out_mode__V_78_78, &hlds__hlds_out__hlds_out_mode__V_160_160);
        }
#line 612 "hlds_out_mode.m"
        {
#line 612 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_167_167 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_160_160, hlds__hlds_out__hlds_out_mode__V_159_159);
        }
#line 612 "hlds_out_mode.m"
        {
#line 612 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__FunctorName_126 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_cell_constructor for ", hlds__hlds_out__hlds_out_mode__V_167_167);
        }
#line 614 "hlds_out_mode.m"
        {
#line 614 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 614 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_82_82, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_126));
#line 614 "hlds_out_mode.m"
        }
#line 614 "hlds_out_mode.m"
        {
#line 614 "hlds_out_mode.m"
          MR_Word base;
#line 614 "hlds_out_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 614 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 614 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_82_82));
#line 614 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_125));
#line 614 "hlds_out_mode.m"
        }
#line 609 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 604 "hlds_out_mode.m"
      {
#line 604 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_123;

#line 605 "hlds_out_mode.m"
        {
#line 605 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_123);
        }
#line 607 "hlds_out_mode.m"
        {
#line 607 "hlds_out_mode.m"
          MR_Word base;
#line 607 "hlds_out_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 607 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 607 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[11])));
#line 607 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 607 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_123));
#line 607 "hlds_out_mode.m"
        }
#line 604 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 588 "hlds_out_mode.m"
      {
#line 588 "hlds_out_mode.m"
        MR_Char hlds__hlds_out__hlds_out_mode__Char_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 588 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_100_100;
#line 588 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SymName_117;

#line 589 "hlds_out_mode.m"
        {
#line 589 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_100_100 = mercury__string__from_char_1_f_0(hlds__hlds_out__hlds_out_mode__Char_17);
        }
#line 589 "hlds_out_mode.m"
        {
#line 589 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__SymName_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 589 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SymName_117, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_100_100));
#line 589 "hlds_out_mode.m"
        }
#line 590 "hlds_out_mode.m"
        {
#line 590 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__SymName_117, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_mode__Term_6);
#line 590 "hlds_out_mode.m"
          return;
        }
#line 588 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 571 "hlds_out_mode.m"
      {
#line 571 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_12;

#line 572 "hlds_out_mode.m"
        {
#line 572 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_12);
        }
#line 574 "hlds_out_mode.m"
        {
#line 574 "hlds_out_mode.m"
          MR_Word base;
#line 574 "hlds_out_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 574 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 574 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[12])));
#line 574 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 574 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_12));
#line 574 "hlds_out_mode.m"
        }
#line 571 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 564 "hlds_out_mode.m"
      {
#line 564 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 564 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode___Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
#line 564 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode___TypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 3)));

#line 565 "hlds_out_mode.m"
        {
#line 565 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__SymName_7, hlds__hlds_out__hlds_out_mode__ArgTerms_5, hlds__hlds_out__hlds_out_mode__Term_6);
#line 565 "hlds_out_mode.m"
          return;
        }
#line 564 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 657 "hlds_out_mode.m"
      {
#line 657 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_143;

#line 658 "hlds_out_mode.m"
        {
#line 658 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_143);
        }
#line 660 "hlds_out_mode.m"
        {
#line 660 "hlds_out_mode.m"
          MR_Word base;
#line 660 "hlds_out_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 660 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 660 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[13])));
#line 660 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_143));
#line 660 "hlds_out_mode.m"
        }
#line 657 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 580 "hlds_out_mode.m"
      {
#line 580 "hlds_out_mode.m"
        MR_Float hlds__hlds_out__hlds_out_mode__Float_15 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 580 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_104_104;
#line 580 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_115;

#line 581 "hlds_out_mode.m"
        {
#line 581 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_115);
        }
#line 582 "hlds_out_mode.m"
        {
#line 582 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 582 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_104_104, 1) = MR_box_float(hlds__hlds_out__hlds_out_mode__Float_15);
#line 582 "hlds_out_mode.m"
        }
#line 582 "hlds_out_mode.m"
        {
#line 582 "hlds_out_mode.m"
          MR_Word base;
#line 582 "hlds_out_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 582 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 582 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_104_104));
#line 582 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 582 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_115));
#line 582 "hlds_out_mode.m"
        }
#line 580 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 637 "hlds_out_mode.m"
      {
#line 637 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubConsId_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
#line 637 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubArg_30;
#line 637 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__NumArg_31;
#line 637 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_41_41;
#line 637 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_47_47;
#line 637 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_50_50;
#line 637 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_51_51;
#line 637 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_136;
#line 637 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__TCIConstNum_138 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));

#line 638 "hlds_out_mode.m"
        {
#line 638 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 638 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_5[0]));
#line 638 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1));
#line 638 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 638 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
#line 638 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 638 "hlds_out_mode.m"
        }
#line 638 "hlds_out_mode.m"
        {
#line 638 "hlds_out_mode.m"
          mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_41_41, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "ground_term_const arity != 0");
        }
#line 640 "hlds_out_mode.m"
        {
#line 640 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(hlds__hlds_out__hlds_out_mode__SubConsId_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__SubArg_30);
        }
#line 641 "hlds_out_mode.m"
        {
#line 641 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_136);
        }
#line 643 "hlds_out_mode.m"
        {
#line 643 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 643 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TCIConstNum_138));
#line 643 "hlds_out_mode.m"
        }
#line 643 "hlds_out_mode.m"
        {
#line 643 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__NumArg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 643 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_47_47));
#line 643 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 643 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_136));
#line 643 "hlds_out_mode.m"
        }
#line 644 "hlds_out_mode.m"
        {
#line 644 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_51_51, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubArg_30));
#line 644 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "hlds_out_mode.m"
        }
#line 644 "hlds_out_mode.m"
        {
#line 644 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_50_50, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__NumArg_31));
#line 644 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_50_50, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_51_51));
#line 644 "hlds_out_mode.m"
        }
#line 644 "hlds_out_mode.m"
        {
#line 644 "hlds_out_mode.m"
          MR_Word base;
#line 644 "hlds_out_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 644 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 644 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[14])));
#line 644 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_50_50));
#line 644 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_136));
#line 644 "hlds_out_mode.m"
        }
#line 637 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 592 "hlds_out_mode.m"
      {
#line 592 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_98_98;
#line 592 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_118;
#line 592 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__FunctorName_119;
#line 592 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__String_120 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));

#line 593 "hlds_out_mode.m"
        {
#line 593 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_118);
        }
#line 594 "hlds_out_mode.m"
        {
#line 594 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__FunctorName_119 = mercury__string__f_43_43_2_f_0((MR_String) "ImplDefinedConst: ", hlds__hlds_out__hlds_out_mode__String_120);
        }
#line 595 "hlds_out_mode.m"
        {
#line 595 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 595 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_98_98, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_119));
#line 595 "hlds_out_mode.m"
        }
#line 595 "hlds_out_mode.m"
        {
#line 595 "hlds_out_mode.m"
          MR_Word base;
#line 595 "hlds_out_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 595 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 595 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_98_98));
#line 595 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_118));
#line 595 "hlds_out_mode.m"
        }
#line 592 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 576 "hlds_out_mode.m"
      {
#line 576 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__Int_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 576 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_106_106;
#line 576 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_114;

#line 577 "hlds_out_mode.m"
        {
#line 577 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_114);
        }
#line 578 "hlds_out_mode.m"
        {
#line 578 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 578 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_106_106, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Int_14));
#line 578 "hlds_out_mode.m"
        }
#line 578 "hlds_out_mode.m"
        {
#line 578 "hlds_out_mode.m"
          MR_Word base;
#line 578 "hlds_out_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 578 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 578 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_106_106));
#line 578 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_114));
#line 578 "hlds_out_mode.m"
        }
#line 576 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 584 "hlds_out_mode.m"
      {
#line 584 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__String_16 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 584 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_102_102;
#line 584 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_116;

#line 585 "hlds_out_mode.m"
        {
#line 585 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_116);
        }
#line 586 "hlds_out_mode.m"
        {
#line 586 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 586 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_102_102, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__String_16));
#line 586 "hlds_out_mode.m"
        }
#line 586 "hlds_out_mode.m"
        {
#line 586 "hlds_out_mode.m"
          MR_Word base;
#line 586 "hlds_out_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 586 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 586 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_102_102));
#line 586 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 586 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_116));
#line 586 "hlds_out_mode.m"
        }
#line 584 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 652 "hlds_out_mode.m"
      {
#line 652 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_141;

#line 653 "hlds_out_mode.m"
        {
#line 653 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_141);
        }
#line 655 "hlds_out_mode.m"
        {
#line 655 "hlds_out_mode.m"
          MR_Word base;
#line 655 "hlds_out_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 655 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 655 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[15])));
#line 655 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_141));
#line 655 "hlds_out_mode.m"
        }
#line 652 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 567 "hlds_out_mode.m"
      {
#line 569 "hlds_out_mode.m"
        {
#line 569 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[30], hlds__hlds_out__hlds_out_mode__ArgTerms_5, hlds__hlds_out__hlds_out_mode__Term_6);
#line 569 "hlds_out_mode.m"
          return;
        }
#line 567 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 597 "hlds_out_mode.m"
      {
#line 597 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 597 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__TypeCtorName_19 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
#line 597 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 3)));
#line 597 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_89_89;
#line 597 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_95_95;
#line 597 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_121;
#line 597 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__FunctorName_122;
#line 597 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_169_169;
#line 597 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_175_175;
#line 597 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_177_177;
#line 597 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_178_178;
#line 597 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_185_185;
#line 597 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_187_187;
#line 597 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_188_188;
#line 597 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_195_195;

#line 598 "hlds_out_mode.m"
        {
#line 598 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_121);
        }
#line 600 "hlds_out_mode.m"
        {
#line 600 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_89_89 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__ModuleName_18);
        }
#line 5565 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__V_175_175 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19];
#line 600 "hlds_out_mode.m"
        {
#line 600 "hlds_out_mode.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_175_175, hlds__hlds_out__hlds_out_mode__Arity_20, &hlds__hlds_out__hlds_out_mode__V_169_169);
        }
#line 599 "hlds_out_mode.m"
        {
#line 599 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_177_177 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_169_169);
        }
#line 600 "hlds_out_mode.m"
        {
#line 600 "hlds_out_mode.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_175_175, hlds__hlds_out__hlds_out_mode__TypeCtorName_19, &hlds__hlds_out__hlds_out_mode__V_178_178);
        }
#line 599 "hlds_out_mode.m"
        {
#line 599 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_185_185 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_178_178, hlds__hlds_out__hlds_out_mode__V_177_177);
        }
#line 599 "hlds_out_mode.m"
        {
#line 599 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_187_187 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_mode__V_185_185);
        }
#line 600 "hlds_out_mode.m"
        {
#line 600 "hlds_out_mode.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_175_175, hlds__hlds_out__hlds_out_mode__V_89_89, &hlds__hlds_out__hlds_out_mode__V_188_188);
        }
#line 599 "hlds_out_mode.m"
        {
#line 599 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_195_195 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_188_188, hlds__hlds_out__hlds_out_mode__V_187_187);
        }
#line 599 "hlds_out_mode.m"
        {
#line 599 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__FunctorName_122 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo for ", hlds__hlds_out__hlds_out_mode__V_195_195);
        }
#line 602 "hlds_out_mode.m"
        {
#line 602 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 602 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_95_95, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_122));
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_95_95));
#line 602 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_121));
#line 602 "hlds_out_mode.m"
        }
#line 597 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 564 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 621 "hlds_out_mode.m"
      {
#line 621 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__TIConstNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 621 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Arg_27;
#line 621 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_63_63;
#line 621 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_68_68;
#line 621 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_71_71;
#line 621 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_131;

#line 622 "hlds_out_mode.m"
        {
#line 622 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 622 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_5[0]));
#line 622 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2));
#line 622 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 622 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
#line 622 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "hlds_out_mode.m"
        }
#line 622 "hlds_out_mode.m"
        {
#line 622 "hlds_out_mode.m"
          mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_63_63, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "type_info_const arity != 0");
        }
#line 624 "hlds_out_mode.m"
        {
#line 624 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_131);
        }
#line 626 "hlds_out_mode.m"
        {
#line 626 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 626 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_68_68, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TIConstNum_26));
#line 626 "hlds_out_mode.m"
        }
#line 626 "hlds_out_mode.m"
        {
#line 626 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Arg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 626 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_68_68));
#line 626 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 626 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_131));
#line 626 "hlds_out_mode.m"
        }
#line 627 "hlds_out_mode.m"
        {
#line 627 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_71_71, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Arg_27));
#line 627 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 627 "hlds_out_mode.m"
        }
#line 627 "hlds_out_mode.m"
        {
#line 627 "hlds_out_mode.m"
          MR_Word base;
#line 627 "hlds_out_mode.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 627 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 627 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[16])));
#line 627 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_71_71));
#line 627 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_131));
#line 627 "hlds_out_mode.m"
        }
#line 621 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
    else
#line 629 "hlds_out_mode.m"
      {
#line 629 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__TCIConstNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 629 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_53_53;
#line 629 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_58_58;
#line 629 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_61_61;
#line 629 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_133;
#line 629 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Arg_135;

#line 630 "hlds_out_mode.m"
        {
#line 630 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 630 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_5[0]));
#line 630 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3));
#line 630 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 630 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
#line 630 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "hlds_out_mode.m"
        }
#line 630 "hlds_out_mode.m"
        {
#line 630 "hlds_out_mode.m"
          mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_53_53, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "typeclass_info_const arity != 0");
        }
#line 632 "hlds_out_mode.m"
        {
#line 632 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_133);
        }
#line 634 "hlds_out_mode.m"
        {
#line 634 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 634 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TCIConstNum_28));
#line 634 "hlds_out_mode.m"
        }
#line 634 "hlds_out_mode.m"
        {
#line 634 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Arg_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 634 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 634 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 634 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_133));
#line 634 "hlds_out_mode.m"
        }
#line 635 "hlds_out_mode.m"
        {
#line 635 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_61_61, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Arg_135));
#line 635 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 635 "hlds_out_mode.m"
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[17])));
#line 635 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_61_61));
#line 635 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_133));
#line 635 "hlds_out_mode.m"
        }
#line 629 "hlds_out_mode.m"
      }
#line 564 "hlds_out_mode.m"
  }
#line 559 "hlds_out_mode.m"
}

#line 546 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1(
#line 546 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 546 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 546 "hlds_out_mode.m"
{
#line 546 "hlds_out_mode.m"
  {
#line 546 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 546 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 546 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

#line 546 "hlds_out_mode.m"
    {
#line 546 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 546 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
#line 546 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 546 "hlds_out_mode.m"
  }
#line 546 "hlds_out_mode.m"
}

#line 541 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(
#line 541 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 541 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 541 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_8,
#line 541 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_9)
#line 541 "hlds_out_mode.m"
{
#line 544 "hlds_out_mode.m"
  {
#line 544 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 544 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
#line 544 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_8, (MR_Integer) 0)));
#line 544 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_8, (MR_Integer) 1)));
#line 544 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_13;
#line 544 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__FirstTerm_14;
#line 544 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_18_18;

#line 546 "hlds_out_mode.m"
    {
#line 546 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 546 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 546 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1));
#line 546 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 546 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 546 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 546 "hlds_out_mode.m"
    }
#line 546 "hlds_out_mode.m"
    {
#line 546 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__ArgTerms_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_18_18, hlds__hlds_out__hlds_out_mode__Args_12);
    }
#line 547 "hlds_out_mode.m"
    {
#line 547 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(hlds__hlds_out__hlds_out_mode__ConsId_11, hlds__hlds_out__hlds_out_mode__ArgTerms_13, &hlds__hlds_out__hlds_out_mode__FirstTerm_14);
    }
#line 551 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__BoundInsts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__Term_10 = hlds__hlds_out__hlds_out_mode__FirstTerm_14;
#line 551 "hlds_out_mode.m"
    else
#line 552 "hlds_out_mode.m"
      {
#line 552 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__HeadBoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__BoundInsts_9, (MR_Integer) 0)));
#line 552 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TailBoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__BoundInsts_9, (MR_Integer) 1)));
#line 552 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SecondTerm_17;
#line 552 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 552 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;

#line 553 "hlds_out_mode.m"
        {
#line 553 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__SecondTerm_17 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__HeadBoundInst_15, hlds__hlds_out__hlds_out_mode__TailBoundInsts_16);
        }
#line 556 "hlds_out_mode.m"
        {
#line 556 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SecondTerm_17));
#line 556 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "hlds_out_mode.m"
        }
#line 556 "hlds_out_mode.m"
        {
#line 556 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FirstTerm_14));
#line 556 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_20_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_22_22));
#line 556 "hlds_out_mode.m"
        }
#line 555 "hlds_out_mode.m"
        {
#line 555 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[29], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
        }
#line 552 "hlds_out_mode.m"
      }
#line 544 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_10;
#line 544 "hlds_out_mode.m"
  }
#line 541 "hlds_out_mode.m"
}

#line 531 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(
#line 531 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_1,
#line 531 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_2,
#line 531 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3)
#line 531 "hlds_out_mode.m"
{
#line 534 "hlds_out_mode.m"
  {
#line 534 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 534 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__4_4;

#line 534 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 534 "hlds_out_mode.m"
      {
#line 537 "hlds_out_mode.m"
        {
#line 537 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 537 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[28]));
#line 537 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 537 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_2));
#line 537 "hlds_out_mode.m"
        }
#line 534 "hlds_out_mode.m"
      }
#line 534 "hlds_out_mode.m"
    else
#line 538 "hlds_out_mode.m"
      {
#line 538 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 538 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 1)));

#line 539 "hlds_out_mode.m"
        {
#line 539 "hlds_out_mode.m"
          return hlds__hlds_out__hlds_out_mode__HeadVar__4_4 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_1, hlds__hlds_out__hlds_out_mode__Context_2, hlds__hlds_out__hlds_out_mode__BoundInst_12, hlds__hlds_out__hlds_out_mode__BoundInsts_13);
        }
#line 538 "hlds_out_mode.m"
      }
#line 534 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__4_4;
#line 534 "hlds_out_mode.m"
  }
#line 531 "hlds_out_mode.m"
}

#line 523 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(
#line 523 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 523 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__SharedName_2)
#line 523 "hlds_out_mode.m"
{
#line 525 "hlds_out_mode.m"
  {
#line 525 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 525 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__3_3;

#line 525 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 3))
#line 528 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "clobbered";
#line 525 "hlds_out_mode.m"
    else
#line 525 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 4))
#line 529 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "mostly_clobbered";
#line 525 "hlds_out_mode.m"
    else
#line 525 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 2))
#line 527 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "mostly_unique";
#line 525 "hlds_out_mode.m"
    else
#line 525 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 0))
#line 525 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__SharedName_2;
#line 525 "hlds_out_mode.m"
    else
#line 526 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "unique";
#line 525 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 525 "hlds_out_mode.m"
  }
#line 523 "hlds_out_mode.m"
}

#line 510 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(
#line 510 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
#line 510 "hlds_out_mode.m"
{
#line 512 "hlds_out_mode.m"
  {
#line 512 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 512 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

#line 512 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 1))
#line 513 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "fake";
#line 512 "hlds_out_mode.m"
    else
#line 512 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "real";
#line 512 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 512 "hlds_out_mode.m"
  }
#line 510 "hlds_out_mode.m"
}

#line 505 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(
#line 505 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
#line 505 "hlds_out_mode.m"
{
#line 507 "hlds_out_mode.m"
  {
#line 507 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 507 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

#line 507 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 1))
#line 508 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "dead";
#line 507 "hlds_out_mode.m"
    else
#line 507 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "live";
#line 507 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 507 "hlds_out_mode.m"
  }
#line 505 "hlds_out_mode.m"
}

#line 448 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2(
#line 448 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 448 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 448 "hlds_out_mode.m"
{
#line 448 "hlds_out_mode.m"
  {
#line 448 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 448 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 448 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 448 "hlds_out_mode.m"
    {
#line 448 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 448 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
#line 448 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 448 "hlds_out_mode.m"
  }
#line 448 "hlds_out_mode.m"
}

#line 461 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1(
#line 461 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 461 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 461 "hlds_out_mode.m"
{
#line 461 "hlds_out_mode.m"
  {
#line 461 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 461 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 461 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

#line 461 "hlds_out_mode.m"
    {
#line 461 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 461 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
#line 461 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 461 "hlds_out_mode.m"
  }
#line 461 "hlds_out_mode.m"
}

#line 441 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(
#line 441 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 441 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 441 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_7)
#line 441 "hlds_out_mode.m"
{
#line 446 "hlds_out_mode.m"
  {
#line 446 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 446 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_8;

#line 446 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 2))))
#line 459 "hlds_out_mode.m"
      {
#line 459 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_77_77;
#line 459 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_79_79;
#line 459 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_80_80;
#line 459 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_81_81;
#line 459 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstA_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
#line 459 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstB_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 461 "hlds_out_mode.m"
        {
#line 461 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 461 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_79_79, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 461 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_79_79, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1));
#line 461 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 461 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_79_79, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
#line 461 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_79_79, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 461 "hlds_out_mode.m"
        }
#line 461 "hlds_out_mode.m"
        {
#line 461 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_81_81, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_99));
#line 461 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 461 "hlds_out_mode.m"
        }
#line 461 "hlds_out_mode.m"
        {
#line 461 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_80_80, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA_98));
#line 461 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_80_80, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_81_81));
#line 461 "hlds_out_mode.m"
        }
#line 461 "hlds_out_mode.m"
        {
#line 461 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_77_77 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_79_79, hlds__hlds_out__hlds_out_mode__V_80_80);
        }
#line 460 "hlds_out_mode.m"
        {
#line 460 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[20], hlds__hlds_out__hlds_out_mode__V_77_77, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
#line 459 "hlds_out_mode.m"
      }
#line 446 "hlds_out_mode.m"
    else
#line 446 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 1))))
#line 451 "hlds_out_mode.m"
      {
#line 451 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Liveness_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
#line 451 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Real_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 451 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
#line 451 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 3)));
#line 451 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_84_84;
#line 451 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_86_86;
#line 451 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_87_87;
#line 451 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_88_88;
#line 451 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_89_89;
#line 451 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_90_90;
#line 451 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_91_91;
#line 451 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_92_92;
#line 451 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_93_93;
#line 451 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_94_94;

#line 453 "hlds_out_mode.m"
        {
#line 453 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_87_87 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Liveness_11);
        }
#line 453 "hlds_out_mode.m"
        {
#line 453 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_86_86 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_87_87);
        }
#line 454 "hlds_out_mode.m"
        {
#line 454 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_90_90 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_12);
        }
#line 454 "hlds_out_mode.m"
        {
#line 454 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_89_89 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_90_90);
        }
#line 455 "hlds_out_mode.m"
        {
#line 455 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_92_92 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstA_13);
        }
#line 456 "hlds_out_mode.m"
        {
#line 456 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_94_94 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstB_14);
        }
#line 456 "hlds_out_mode.m"
        {
#line 456 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_93_93, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_94_94));
#line 456 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 456 "hlds_out_mode.m"
        }
#line 455 "hlds_out_mode.m"
        {
#line 455 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_91_91, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_92_92));
#line 455 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_91_91, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_93_93));
#line 455 "hlds_out_mode.m"
        }
#line 454 "hlds_out_mode.m"
        {
#line 454 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_88_88, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_89_89));
#line 454 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_88_88, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_91_91));
#line 454 "hlds_out_mode.m"
        }
#line 453 "hlds_out_mode.m"
        {
#line 453 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_84_84, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_86_86));
#line 453 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_84_84, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_88_88));
#line 453 "hlds_out_mode.m"
        }
#line 452 "hlds_out_mode.m"
        {
#line 452 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[21], hlds__hlds_out__hlds_out_mode__V_84_84, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
#line 451 "hlds_out_mode.m"
      }
#line 446 "hlds_out_mode.m"
    else
#line 446 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 0))))
#line 446 "hlds_out_mode.m"
      {
#line 446 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
#line 446 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 446 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_96_96;
#line 446 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_97_97;

#line 448 "hlds_out_mode.m"
        {
#line 448 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 448 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_97_97, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 448 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_97_97, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2));
#line 448 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_97_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 448 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_97_97, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
#line 448 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_97_97, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 448 "hlds_out_mode.m"
        }
#line 448 "hlds_out_mode.m"
        {
#line 448 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_96_96 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_97_97, hlds__hlds_out__hlds_out_mode__Args_10);
        }
#line 447 "hlds_out_mode.m"
        {
#line 447 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__Name_9, hlds__hlds_out__hlds_out_mode__V_96_96, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
#line 446 "hlds_out_mode.m"
      }
#line 446 "hlds_out_mode.m"
    else
#line 446 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 472 "hlds_out_mode.m"
      {
#line 472 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_47_47;
#line 472 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_49_49;
#line 472 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_50_50;
#line 472 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_51_51;
#line 472 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_52_52;
#line 472 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_54_54;
#line 472 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;
#line 472 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_56_56;
#line 472 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_57_57;
#line 472 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_58_58;
#line 472 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_59_59;
#line 472 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Real_101 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 472 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 472 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Uniq_103 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 472 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__IsLive_104 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 474 "hlds_out_mode.m"
        {
#line 474 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_49_49 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_102);
        }
#line 475 "hlds_out_mode.m"
        {
#line 475 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_52_52 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_103, (MR_String) "shared");
        }
#line 475 "hlds_out_mode.m"
        {
#line 475 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_51_51 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_52_52);
        }
#line 476 "hlds_out_mode.m"
        {
#line 476 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_56_56 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__IsLive_104);
        }
#line 476 "hlds_out_mode.m"
        {
#line 476 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_55_55 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_56_56);
        }
#line 477 "hlds_out_mode.m"
        {
#line 477 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_59_59 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_101);
        }
#line 477 "hlds_out_mode.m"
        {
#line 477 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_58_58 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_59_59);
        }
#line 477 "hlds_out_mode.m"
        {
#line 477 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_57_57, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 477 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "hlds_out_mode.m"
        }
#line 476 "hlds_out_mode.m"
        {
#line 476 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_54_54, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
#line 476 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_54_54, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_57_57));
#line 476 "hlds_out_mode.m"
        }
#line 475 "hlds_out_mode.m"
        {
#line 475 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_50_50, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_51_51));
#line 475 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_50_50, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_54_54));
#line 475 "hlds_out_mode.m"
        }
#line 474 "hlds_out_mode.m"
        {
#line 474 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_49_49));
#line 474 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_47_47, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_50_50));
#line 474 "hlds_out_mode.m"
        }
#line 473 "hlds_out_mode.m"
        {
#line 473 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[22], hlds__hlds_out__hlds_out_mode__V_47_47, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
#line 472 "hlds_out_mode.m"
      }
#line 446 "hlds_out_mode.m"
    else
#line 446 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 464 "hlds_out_mode.m"
      {
#line 464 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 464 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Uniq_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 464 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__IsLive_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 464 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_62_62;
#line 464 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_64_64;
#line 464 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_65_65;
#line 464 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_66_66;
#line 464 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_67_67;
#line 464 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_69_69;
#line 464 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_70_70;
#line 464 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_71_71;
#line 464 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_72_72;
#line 464 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_73_73;
#line 464 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_74_74;
#line 464 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Real_100 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 466 "hlds_out_mode.m"
        {
#line 466 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_64_64 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_15);
        }
#line 467 "hlds_out_mode.m"
        {
#line 467 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_67_67 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_16, (MR_String) "shared");
        }
#line 467 "hlds_out_mode.m"
        {
#line 467 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_66_66 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_67_67);
        }
#line 468 "hlds_out_mode.m"
        {
#line 468 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_71_71 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__IsLive_17);
        }
#line 468 "hlds_out_mode.m"
        {
#line 468 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_70_70 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_71_71);
        }
#line 469 "hlds_out_mode.m"
        {
#line 469 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_74_74 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_100);
        }
#line 469 "hlds_out_mode.m"
        {
#line 469 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_73_73 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_74_74);
        }
#line 469 "hlds_out_mode.m"
        {
#line 469 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_72_72, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_73_73));
#line 469 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "hlds_out_mode.m"
        }
#line 468 "hlds_out_mode.m"
        {
#line 468 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_69_69, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_70_70));
#line 468 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_69_69, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_72_72));
#line 468 "hlds_out_mode.m"
        }
#line 467 "hlds_out_mode.m"
        {
#line 467 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_65_65, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_66_66));
#line 467 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_65_65, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_69_69));
#line 467 "hlds_out_mode.m"
        }
#line 466 "hlds_out_mode.m"
        {
#line 466 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_62_62, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_64_64));
#line 466 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_62_62, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_65_65));
#line 466 "hlds_out_mode.m"
        }
#line 465 "hlds_out_mode.m"
        {
#line 465 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[23], hlds__hlds_out__hlds_out_mode__V_62_62, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
#line 464 "hlds_out_mode.m"
      }
#line 446 "hlds_out_mode.m"
    else
#line 446 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 485 "hlds_out_mode.m"
      {
#line 485 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;
#line 485 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_39_39;
#line 485 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 487 "hlds_out_mode.m"
        {
#line 487 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_39_39 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_106);
        }
#line 487 "hlds_out_mode.m"
        {
#line 487 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_39_39));
#line 487 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "hlds_out_mode.m"
        }
#line 486 "hlds_out_mode.m"
        {
#line 486 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[24], hlds__hlds_out__hlds_out_mode__V_37_37, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
#line 485 "hlds_out_mode.m"
      }
#line 446 "hlds_out_mode.m"
    else
#line 446 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 480 "hlds_out_mode.m"
      {
#line 480 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_42_42;
#line 480 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_44_44;
#line 480 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 482 "hlds_out_mode.m"
        {
#line 482 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_44_44 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_105);
        }
#line 482 "hlds_out_mode.m"
        {
#line 482 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_42_42, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_44_44));
#line 482 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 482 "hlds_out_mode.m"
        }
#line 481 "hlds_out_mode.m"
        {
#line 481 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[25], hlds__hlds_out__hlds_out_mode__V_42_42, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
#line 480 "hlds_out_mode.m"
      }
#line 446 "hlds_out_mode.m"
    else
#line 446 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 490 "hlds_out_mode.m"
      {
#line 490 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_127_127;
#line 490 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
#line 490 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Term0_19;
#line 490 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
#line 490 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 490 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_31_31;
#line 490 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_33_33;
#line 490 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 490 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Uniq_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 491 "hlds_out_mode.m"
        {
#line 491 "hlds_out_mode.m"
          parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_18, &hlds__hlds_out__hlds_out_mode__Term0_19);
        }
#line 493 "hlds_out_mode.m"
        {
#line 493 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_31_31 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_107, (MR_String) "shared");
        }
#line 493 "hlds_out_mode.m"
        {
#line 493 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_30_30 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_31_31);
        }
#line 6786 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__TypeCtorInfo_127_127 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 494 "hlds_out_mode.m"
        {
#line 494 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_34_34 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__hlds_out__hlds_out_mode__TypeCtorInfo_127_127, hlds__hlds_out__hlds_out_mode__Term0_19);
        }
#line 494 "hlds_out_mode.m"
        {
#line 494 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34));
#line 494 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "hlds_out_mode.m"
        }
#line 493 "hlds_out_mode.m"
        {
#line 493 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_30_30));
#line 493 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_33_33));
#line 493 "hlds_out_mode.m"
        }
#line 492 "hlds_out_mode.m"
        {
#line 492 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_127_127, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[26], hlds__hlds_out__hlds_out_mode__V_28_28, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
#line 490 "hlds_out_mode.m"
      }
#line 446 "hlds_out_mode.m"
    else
#line 497 "hlds_out_mode.m"
      {
#line 497 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_129_129;
#line 497 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
#line 497 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_23_23;
#line 497 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 497 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
#line 497 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
#line 497 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Type_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 497 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Term0_110;

#line 498 "hlds_out_mode.m"
        {
#line 498 "hlds_out_mode.m"
          parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_109, &hlds__hlds_out__hlds_out_mode__Term0_110);
        }
#line 6846 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__TypeCtorInfo_129_129 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 500 "hlds_out_mode.m"
        {
#line 500 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_23_23 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__hlds_out__hlds_out_mode__TypeCtorInfo_129_129, hlds__hlds_out__hlds_out_mode__Term0_110);
        }
#line 501 "hlds_out_mode.m"
        {
#line 501 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_25_25 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_108);
        }
#line 501 "hlds_out_mode.m"
        {
#line 501 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_25_25));
#line 501 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "hlds_out_mode.m"
        }
#line 500 "hlds_out_mode.m"
        {
#line 500 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_21_21, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_23_23));
#line 500 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_24_24));
#line 500 "hlds_out_mode.m"
        }
#line 499 "hlds_out_mode.m"
        {
#line 499 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_129_129, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[27], hlds__hlds_out__hlds_out_mode__V_21_21, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
#line 497 "hlds_out_mode.m"
      }
#line 446 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_8;
#line 446 "hlds_out_mode.m"
  }
#line 441 "hlds_out_mode.m"
}

#line 382 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(
#line 382 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 382 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_5)
#line 382 "hlds_out_mode.m"
{
#line 384 "hlds_out_mode.m"
  {
#line 384 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 384 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;
#line 384 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_5, (MR_Integer) 0)));
#line 384 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_5, (MR_Integer) 1)));
#line 384 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__ConsName_9;
#line 384 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_13_13;
#line 384 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_17_17;
#line 384 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_19_19;
#line 384 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
#line 384 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_27_27;
#line 384 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_28_28;

#line 386 "hlds_out_mode.m"
    {
#line 386 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_13_13 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__SymName_7);
    }
#line 6931 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__V_25_25 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19];
#line 386 "hlds_out_mode.m"
    {
#line 386 "hlds_out_mode.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_25_25, hlds__hlds_out__hlds_out_mode__Arity_8, &hlds__hlds_out__hlds_out_mode__V_19_19);
    }
#line 386 "hlds_out_mode.m"
    {
#line 386 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_19_19);
    }
#line 386 "hlds_out_mode.m"
    {
#line 386 "hlds_out_mode.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_25_25, hlds__hlds_out__hlds_out_mode__V_13_13, &hlds__hlds_out__hlds_out_mode__V_28_28);
    }
#line 386 "hlds_out_mode.m"
    {
#line 386 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__ConsName_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_28_28, hlds__hlds_out__hlds_out_mode__V_27_27);
    }
#line 388 "hlds_out_mode.m"
    {
#line 388 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 388 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_17_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ConsName_9));
#line 388 "hlds_out_mode.m"
    }
#line 388 "hlds_out_mode.m"
    {
#line 388 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 388 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_17_17));
#line 388 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 388 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 388 "hlds_out_mode.m"
    }
#line 384 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 384 "hlds_out_mode.m"
  }
#line 382 "hlds_out_mode.m"
}

#line 369 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_type_ctor_propagated_to_term_2_f_0(
#line 369 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 369 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PropagatedResult_5)
#line 369 "hlds_out_mode.m"
{
#line 374 "hlds_out_mode.m"
  {
#line 374 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 374 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;

#line 374 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__PropagatedResult_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 374 "hlds_out_mode.m"
      {
#line 375 "hlds_out_mode.m"
        {
#line 375 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 375 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[17]));
#line 375 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 375 "hlds_out_mode.m"
        }
#line 374 "hlds_out_mode.m"
      }
#line 374 "hlds_out_mode.m"
    else
#line 377 "hlds_out_mode.m"
      {
#line 377 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__PropagatedResult_5), (MR_Integer) 1);
#line 377 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;
#line 377 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_11_11;

#line 379 "hlds_out_mode.m"
        {
#line 379 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_11_11 = hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_4, hlds__hlds_out__hlds_out_mode__TypeCtor_7);
        }
#line 379 "hlds_out_mode.m"
        {
#line 379 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_10_10, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_11_11));
#line 379 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "hlds_out_mode.m"
        }
#line 378 "hlds_out_mode.m"
        {
#line 378 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 378 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[18]));
#line 378 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_10_10));
#line 378 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 378 "hlds_out_mode.m"
        }
#line 377 "hlds_out_mode.m"
      }
#line 374 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 374 "hlds_out_mode.m"
  }
#line 369 "hlds_out_mode.m"
}

#line 364 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0_1(
#line 364 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 364 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 364 "hlds_out_mode.m"
{
#line 364 "hlds_out_mode.m"
  {
#line 364 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 364 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 364 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_6;

#line 364 "hlds_out_mode.m"
    {
#line 364 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_6 = hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 364 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_6));
#line 364 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 364 "hlds_out_mode.m"
  }
#line 364 "hlds_out_mode.m"
}

#line 354 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0(
#line 354 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 354 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ContainsTypes_5)
#line 354 "hlds_out_mode.m"
{
#line 359 "hlds_out_mode.m"
  {
#line 359 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 359 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;

#line 359 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__ContainsTypes_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 359 "hlds_out_mode.m"
      {
#line 360 "hlds_out_mode.m"
        {
#line 360 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 360 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[15]));
#line 360 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 360 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 360 "hlds_out_mode.m"
        }
#line 359 "hlds_out_mode.m"
      }
#line 359 "hlds_out_mode.m"
    else
#line 362 "hlds_out_mode.m"
      {
#line 362 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 362 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ContainsTypes_5, (MR_Integer) 0)));
#line 362 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtors_8;
#line 362 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorTerms_9;
#line 362 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;

#line 363 "hlds_out_mode.m"
        {
#line 363 "hlds_out_mode.m"
          mercury__set__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_mode__TypeCtorSet_7, &hlds__hlds_out__hlds_out_mode__TypeCtors_8);
        }
#line 364 "hlds_out_mode.m"
        {
#line 364 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 364 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_4[1]));
#line 364 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0_1));
#line 364 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 364 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 364 "hlds_out_mode.m"
        }
#line 364 "hlds_out_mode.m"
        {
#line 364 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__TypeCtorTerms_9 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_16, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_10_10, hlds__hlds_out__hlds_out_mode__TypeCtors_8);
        }
#line 365 "hlds_out_mode.m"
        {
#line 365 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 365 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[16]));
#line 365 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TypeCtorTerms_9));
#line 365 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 365 "hlds_out_mode.m"
        }
#line 362 "hlds_out_mode.m"
      }
#line 359 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 359 "hlds_out_mode.m"
  }
#line 354 "hlds_out_mode.m"
}

#line 347 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_var_to_term_2_f_0(
#line 347 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 347 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVar_5)
#line 347 "hlds_out_mode.m"
{
#line 349 "hlds_out_mode.m"
  {
#line 349 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 349 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;
#line 349 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstVarNum_7;
#line 349 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__InstVarNumStr_8;
#line 349 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_9_9;
#line 349 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_10_10;

#line 350 "hlds_out_mode.m"
    {
#line 350 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__InstVarNum_7 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__hlds_out__hlds_out_mode__InstVar_5);
    }
#line 351 "hlds_out_mode.m"
    {
#line 351 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__InstVarNumStr_8 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__InstVarNum_7);
    }
#line 352 "hlds_out_mode.m"
    {
#line 352 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "inst_var_", hlds__hlds_out__hlds_out_mode__InstVarNumStr_8);
    }
#line 352 "hlds_out_mode.m"
    {
#line 352 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_9_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 352 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_9_9, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_10_10));
#line 352 "hlds_out_mode.m"
    }
#line 352 "hlds_out_mode.m"
    {
#line 352 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 352 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_9_9));
#line 352 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 352 "hlds_out_mode.m"
    }
#line 349 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 349 "hlds_out_mode.m"
  }
#line 347 "hlds_out_mode.m"
}

#line 342 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1(
#line 342 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 342 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 342 "hlds_out_mode.m"
{
#line 342 "hlds_out_mode.m"
  {
#line 342 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 342 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 342 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_6;

#line 342 "hlds_out_mode.m"
    {
#line 342 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_6 = hlds__hlds_out__hlds_out_mode__inst_var_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 342 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_6));
#line 342 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 342 "hlds_out_mode.m"
  }
#line 342 "hlds_out_mode.m"
}

#line 257 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(
#line 257 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 257 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstResults_5)
#line 257 "hlds_out_mode.m"
{
#line 262 "hlds_out_mode.m"
  {
#line 262 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 262 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;

#line 262 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__InstResults_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "hlds_out_mode.m"
      {
#line 277 "hlds_out_mode.m"
        {
#line 277 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 277 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[2]));
#line 277 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 277 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 277 "hlds_out_mode.m"
        }
#line 276 "hlds_out_mode.m"
      }
#line 262 "hlds_out_mode.m"
    else
#line 262 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__InstResults_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 279 "hlds_out_mode.m"
      {
#line 280 "hlds_out_mode.m"
        {
#line 280 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 280 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[3]));
#line 280 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 280 "hlds_out_mode.m"
        }
#line 279 "hlds_out_mode.m"
      }
#line 262 "hlds_out_mode.m"
    else
#line 262 "hlds_out_mode.m"
      {
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__GroundnessResult_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 0)));
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__AnyResult_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 1)));
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstNamesResult_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 2)));
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstVarsResult_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 3)));
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeResult_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 4)));
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__PropagatedResult_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 5)));
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubTerm1_13;
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubTerm2_14;
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubTerm3_15;
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubTerm4_16;
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubTerm5_17;
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubTerm6_18;
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_29_29;
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_31_31;
#line 262 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

#line 288 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__GroundnessResult_7 == (MR_Integer) 2))
#line 294 "hlds_out_mode.m"
          {
#line 295 "hlds_out_mode.m"
            {
#line 295 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 295 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[4]));
#line 295 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 295 "hlds_out_mode.m"
            }
#line 294 "hlds_out_mode.m"
          }
#line 288 "hlds_out_mode.m"
        else
#line 288 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__GroundnessResult_7 == (MR_Integer) 1))
#line 291 "hlds_out_mode.m"
          {
#line 292 "hlds_out_mode.m"
            {
#line 292 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 292 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[5]));
#line 292 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 292 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 292 "hlds_out_mode.m"
            }
#line 291 "hlds_out_mode.m"
          }
#line 288 "hlds_out_mode.m"
        else
#line 288 "hlds_out_mode.m"
          {
#line 289 "hlds_out_mode.m"
            {
#line 289 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 289 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[6]));
#line 289 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 289 "hlds_out_mode.m"
            }
#line 288 "hlds_out_mode.m"
          }
#line 303 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__AnyResult_8 == (MR_Integer) 2))
#line 309 "hlds_out_mode.m"
          {
#line 310 "hlds_out_mode.m"
            {
#line 310 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 310 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[7]));
#line 310 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 310 "hlds_out_mode.m"
            }
#line 309 "hlds_out_mode.m"
          }
#line 303 "hlds_out_mode.m"
        else
#line 303 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__AnyResult_8 == (MR_Integer) 1))
#line 306 "hlds_out_mode.m"
          {
#line 307 "hlds_out_mode.m"
            {
#line 307 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 307 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[8]));
#line 307 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 307 "hlds_out_mode.m"
            }
#line 306 "hlds_out_mode.m"
          }
#line 303 "hlds_out_mode.m"
        else
#line 303 "hlds_out_mode.m"
          {
#line 304 "hlds_out_mode.m"
            {
#line 304 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 304 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[9]));
#line 304 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 304 "hlds_out_mode.m"
            }
#line 303 "hlds_out_mode.m"
          }
#line 318 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__InstNamesResult_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 318 "hlds_out_mode.m"
          {
#line 319 "hlds_out_mode.m"
            {
#line 319 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 319 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[10]));
#line 319 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 319 "hlds_out_mode.m"
            }
#line 318 "hlds_out_mode.m"
          }
#line 318 "hlds_out_mode.m"
        else
#line 322 "hlds_out_mode.m"
          {
#line 322 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstNameSet_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstNamesResult_9, (MR_Integer) 0)));
#line 322 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__NumInstNames_62;
#line 322 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__CountTerm_63;
#line 322 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_64_64;
#line 322 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_68_68;

#line 325 "hlds_out_mode.m"
            {
#line 325 "hlds_out_mode.m"
              mercury__set__count_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, hlds__hlds_out__hlds_out_mode__InstNameSet_61, &hlds__hlds_out__hlds_out_mode__NumInstNames_62);
            }
#line 326 "hlds_out_mode.m"
            {
#line 326 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_64_64, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__NumInstNames_62));
#line 326 "hlds_out_mode.m"
            }
#line 326 "hlds_out_mode.m"
            {
#line 326 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__CountTerm_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 326 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_63, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_64_64));
#line 326 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_63, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 326 "hlds_out_mode.m"
            }
#line 328 "hlds_out_mode.m"
            {
#line 328 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_68_68, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__CountTerm_63));
#line 328 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 328 "hlds_out_mode.m"
            }
#line 327 "hlds_out_mode.m"
            {
#line 327 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 327 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[11]));
#line 327 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_68_68));
#line 327 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 327 "hlds_out_mode.m"
            }
#line 322 "hlds_out_mode.m"
          }
#line 336 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__InstVarsResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "hlds_out_mode.m"
          {
#line 337 "hlds_out_mode.m"
            {
#line 337 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 337 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[12]));
#line 337 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 337 "hlds_out_mode.m"
            }
#line 336 "hlds_out_mode.m"
          }
#line 336 "hlds_out_mode.m"
        else
#line 340 "hlds_out_mode.m"
          {
#line 340 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__TypeInfo_16_86 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[4];
#line 340 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstVarsResult_10, (MR_Integer) 0)));
#line 340 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstVars_78;
#line 340 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstVarTerms_79;
#line 340 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_80_80;

#line 341 "hlds_out_mode.m"
            {
#line 341 "hlds_out_mode.m"
              mercury__set__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_mode__TypeInfo_16_86, hlds__hlds_out__hlds_out_mode__InstVarSet_77, &hlds__hlds_out__hlds_out_mode__InstVars_78);
            }
#line 342 "hlds_out_mode.m"
            {
#line 342 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 342 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_4[0]));
#line 342 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1));
#line 342 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 342 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 342 "hlds_out_mode.m"
            }
#line 342 "hlds_out_mode.m"
            {
#line 342 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__InstVarTerms_79 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeInfo_16_86, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_80_80, hlds__hlds_out__hlds_out_mode__InstVars_78);
            }
#line 343 "hlds_out_mode.m"
            {
#line 343 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 343 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[13]));
#line 343 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstVarTerms_79));
#line 343 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 343 "hlds_out_mode.m"
            }
#line 340 "hlds_out_mode.m"
          }
#line 269 "hlds_out_mode.m"
        {
#line 269 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__SubTerm5_17 = hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_4, hlds__hlds_out__hlds_out_mode__TypeResult_11);
        }
#line 270 "hlds_out_mode.m"
        {
#line 270 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__SubTerm6_18 = hlds__hlds_out__hlds_out_mode__inst_result_type_ctor_propagated_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_4, hlds__hlds_out__hlds_out_mode__PropagatedResult_12);
        }
#line 273 "hlds_out_mode.m"
        {
#line 273 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm6_18));
#line 273 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 273 "hlds_out_mode.m"
        }
#line 273 "hlds_out_mode.m"
        {
#line 273 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_31_31, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm5_17));
#line 273 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_31_31, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_32_32));
#line 273 "hlds_out_mode.m"
        }
#line 273 "hlds_out_mode.m"
        {
#line 273 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_30_30, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm4_16));
#line 273 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_30_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_31_31));
#line 273 "hlds_out_mode.m"
        }
#line 273 "hlds_out_mode.m"
        {
#line 273 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_29_29, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm3_15));
#line 273 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_29_29, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_30_30));
#line 273 "hlds_out_mode.m"
        }
#line 273 "hlds_out_mode.m"
        {
#line 273 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm2_14));
#line 273 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_29_29));
#line 273 "hlds_out_mode.m"
        }
#line 273 "hlds_out_mode.m"
        {
#line 273 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_27_27, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm1_13));
#line 273 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_28_28));
#line 273 "hlds_out_mode.m"
        }
#line 272 "hlds_out_mode.m"
        {
#line 272 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 272 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[14]));
#line 272 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
#line 272 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 272 "hlds_out_mode.m"
        }
#line 262 "hlds_out_mode.m"
      }
#line 262 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 262 "hlds_out_mode.m"
  }
#line 257 "hlds_out_mode.m"
}

#line 240 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0_1(
#line 240 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 240 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 240 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
#line 240 "hlds_out_mode.m"
{
#line 240 "hlds_out_mode.m"
  {
#line 240 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3;
#line 240 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 240 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__4_30;

#line 240 "hlds_out_mode.m"
    {
#line 240 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_HeadVar__4_30 = hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__240__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
#line 240 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__4_30));
#line 240 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_3;
#line 240 "hlds_out_mode.m"
  }
#line 240 "hlds_out_mode.m"
}

#line 189 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(
#line 189 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 189 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 189 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_7)
#line 189 "hlds_out_mode.m"
{
#line 194 "hlds_out_mode.m"
  {
#line 194 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 194 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_8;

#line 194 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Inst_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 204 "hlds_out_mode.m"
      {
#line 131 "hlds_out_mode.m"
        {
#line 131 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 131 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[1]));
#line 131 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 131 "hlds_out_mode.m"
        }
#line 204 "hlds_out_mode.m"
      }
#line 194 "hlds_out_mode.m"
    else
#line 194 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Inst_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 253 "hlds_out_mode.m"
      {
#line 254 "hlds_out_mode.m"
        {
#line 254 "hlds_out_mode.m"
          return hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, (MR_String) "not_reached");
        }
#line 253 "hlds_out_mode.m"
      }
#line 194 "hlds_out_mode.m"
    else
#line 194 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) == (MR_mktag((MR_Integer) 2))))
#line 194 "hlds_out_mode.m"
      {
#line 194 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)));
#line 194 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));

#line 199 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "hlds_out_mode.m"
          {
#line 200 "hlds_out_mode.m"
            MR_String hlds__hlds_out__hlds_out_mode__V_58_58;
#line 200 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_78_78;

#line 517 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Uniq_9 == (MR_Integer) 3))
#line 520 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_String) "clobbered_any";
#line 517 "hlds_out_mode.m"
            else
#line 517 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Uniq_9 == (MR_Integer) 4))
#line 521 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_String) "mostly_clobbered_any";
#line 517 "hlds_out_mode.m"
            else
#line 517 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Uniq_9 == (MR_Integer) 2))
#line 519 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_String) "mostly_unique_any";
#line 517 "hlds_out_mode.m"
            else
#line 517 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Uniq_9 == (MR_Integer) 0))
#line 517 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_String) "any";
#line 517 "hlds_out_mode.m"
            else
#line 518 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_String) "unique_any";
#line 131 "hlds_out_mode.m"
            {
#line 131 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 131 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_78_78, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 131 "hlds_out_mode.m"
            }
#line 131 "hlds_out_mode.m"
            {
#line 131 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 131 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_78_78));
#line 131 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 131 "hlds_out_mode.m"
            }
#line 200 "hlds_out_mode.m"
          }
#line 199 "hlds_out_mode.m"
        else
#line 196 "hlds_out_mode.m"
          {
#line 196 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_11 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_10), (MR_Integer) 1);

#line 197 "hlds_out_mode.m"
            {
#line 197 "hlds_out_mode.m"
              return hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__PredInstInfo_11);
            }
#line 196 "hlds_out_mode.m"
          }
#line 194 "hlds_out_mode.m"
      }
#line 194 "hlds_out_mode.m"
    else
#line 194 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) == (MR_mktag((MR_Integer) 1))))
#line 207 "hlds_out_mode.m"
      {
#line 207 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)));
#line 207 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Term0_13;
#line 207 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Term1_14;
#line 207 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;

#line 208 "hlds_out_mode.m"
        {
#line 208 "hlds_out_mode.m"
          parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_12, &hlds__hlds_out__hlds_out_mode__Term0_13);
        }
#line 209 "hlds_out_mode.m"
        {
#line 209 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term1_14 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__Term0_13);
        }
#line 210 "hlds_out_mode.m"
        {
#line 210 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Term1_14));
#line 210 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 210 "hlds_out_mode.m"
        }
#line 210 "hlds_out_mode.m"
        {
#line 210 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 210 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[1]));
#line 210 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
#line 210 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 210 "hlds_out_mode.m"
        }
#line 207 "hlds_out_mode.m"
      }
#line 194 "hlds_out_mode.m"
    else
#line 194 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 246 "hlds_out_mode.m"
      {
#line 246 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
#line 246 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));
#line 246 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;

#line 248 "hlds_out_mode.m"
        {
#line 248 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_22));
#line 248 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Args_23));
#line 248 "hlds_out_mode.m"
        }
#line 247 "hlds_out_mode.m"
        {
#line 247 "hlds_out_mode.m"
          return hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_26_26);
        }
#line 246 "hlds_out_mode.m"
      }
#line 194 "hlds_out_mode.m"
    else
#line 194 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 212 "hlds_out_mode.m"
      {
#line 212 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstResults_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));
#line 212 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 3)));
#line 212 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_17;
#line 212 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_50_50;
#line 212 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__V_51_51;
#line 212 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Uniq_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));

#line 216 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__Lang_5 == (MR_Integer) 1))
#line 217 "hlds_out_mode.m"
          {
#line 217 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_44_44;
#line 217 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_45_45;
#line 217 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_46_46;

#line 219 "hlds_out_mode.m"
            {
#line 219 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_44_44 = hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstResults_15);
            }
#line 220 "hlds_out_mode.m"
            {
#line 220 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_46_46 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__BoundInsts_16);
            }
#line 220 "hlds_out_mode.m"
            {
#line 220 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_45_45, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_46_46));
#line 220 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "hlds_out_mode.m"
            }
#line 219 "hlds_out_mode.m"
            {
#line 219 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_44_44));
#line 219 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_45_45));
#line 219 "hlds_out_mode.m"
            }
#line 217 "hlds_out_mode.m"
          }
#line 216 "hlds_out_mode.m"
        else
#line 214 "hlds_out_mode.m"
          {
#line 214 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_48_48;

#line 215 "hlds_out_mode.m"
            {
#line 215 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_48_48 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__BoundInsts_16);
            }
#line 215 "hlds_out_mode.m"
            {
#line 215 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_48_48));
#line 215 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "hlds_out_mode.m"
            }
#line 214 "hlds_out_mode.m"
          }
#line 525 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__Uniq_59 == (MR_Integer) 3))
#line 528 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "clobbered";
#line 525 "hlds_out_mode.m"
        else
#line 525 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__Uniq_59 == (MR_Integer) 4))
#line 529 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "mostly_clobbered";
#line 525 "hlds_out_mode.m"
        else
#line 525 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__Uniq_59 == (MR_Integer) 2))
#line 527 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "mostly_unique";
#line 525 "hlds_out_mode.m"
        else
#line 525 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__Uniq_59 == (MR_Integer) 0))
#line 525 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "bound";
#line 525 "hlds_out_mode.m"
        else
#line 526 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "unique";
#line 223 "hlds_out_mode.m"
        {
#line 223 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 223 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_50_50, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_51_51));
#line 223 "hlds_out_mode.m"
        }
#line 222 "hlds_out_mode.m"
        {
#line 222 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__V_50_50, hlds__hlds_out__hlds_out_mode__ArgTerms_17, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
#line 212 "hlds_out_mode.m"
      }
#line 194 "hlds_out_mode.m"
    else
#line 194 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 239 "hlds_out_mode.m"
      {
#line 239 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
#line 239 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));
#line 239 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 239 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_39_39;
#line 240 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 240 "hlds_out_mode.m"
        {
#line 240 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 240 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[1]));
#line 240 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0_1));
#line 240 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 240 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 240 "hlds_out_mode.m"
        }
#line 244 "hlds_out_mode.m"
        {
#line 244 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_39_39 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInst_20);
        }
#line 240 "hlds_out_mode.m"
        {
#line 240 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__conv1_Term_8 = mercury__set__fold_3_f_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[4], (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_27_27, hlds__hlds_out__hlds_out_mode__Vars_19, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_39_39)));
        }
#line 240 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__Term_8 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv1_Term_8);
#line 239 "hlds_out_mode.m"
      }
#line 194 "hlds_out_mode.m"
    else
#line 194 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 250 "hlds_out_mode.m"
      {
#line 250 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));

#line 251 "hlds_out_mode.m"
        {
#line 251 "hlds_out_mode.m"
          return hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstName_24);
        }
#line 250 "hlds_out_mode.m"
      }
#line 194 "hlds_out_mode.m"
    else
#line 194 "hlds_out_mode.m"
    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 226 "hlds_out_mode.m"
      {
#line 226 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Uniq_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
#line 226 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));

#line 231 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "hlds_out_mode.m"
          {
#line 232 "hlds_out_mode.m"
            MR_String hlds__hlds_out__hlds_out_mode__V_42_42;
#line 232 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_96_96;

#line 525 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Uniq_62 == (MR_Integer) 3))
#line 528 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "clobbered";
#line 525 "hlds_out_mode.m"
            else
#line 525 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Uniq_62 == (MR_Integer) 4))
#line 529 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "mostly_clobbered";
#line 525 "hlds_out_mode.m"
            else
#line 525 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Uniq_62 == (MR_Integer) 2))
#line 527 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "mostly_unique";
#line 525 "hlds_out_mode.m"
            else
#line 525 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Uniq_62 == (MR_Integer) 0))
#line 525 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "ground";
#line 525 "hlds_out_mode.m"
            else
#line 526 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "unique";
#line 131 "hlds_out_mode.m"
            {
#line 131 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 131 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_96_96, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_42_42));
#line 131 "hlds_out_mode.m"
            }
#line 131 "hlds_out_mode.m"
            {
#line 131 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 131 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_96_96));
#line 131 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 131 "hlds_out_mode.m"
            }
#line 232 "hlds_out_mode.m"
          }
#line 231 "hlds_out_mode.m"
        else
#line 228 "hlds_out_mode.m"
          {
#line 228 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_60 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_63), (MR_Integer) 1);

#line 229 "hlds_out_mode.m"
            {
#line 229 "hlds_out_mode.m"
              return hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__PredInstInfo_60);
            }
#line 228 "hlds_out_mode.m"
          }
#line 226 "hlds_out_mode.m"
      }
#line 194 "hlds_out_mode.m"
    else
#line 236 "hlds_out_mode.m"
      {
#line 236 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
#line 236 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_40_40;
#line 236 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_41_41;

#line 237 "hlds_out_mode.m"
        {
#line 237 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_41_41 = mercury__term__context_init_0_f_0();
        }
#line 237 "hlds_out_mode.m"
        {
#line 237 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Var_18));
#line 237 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_41_41));
#line 237 "hlds_out_mode.m"
        }
#line 237 "hlds_out_mode.m"
        {
#line 237 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_8 = mercury__term__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__V_40_40);
        }
#line 236 "hlds_out_mode.m"
      }
#line 194 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_8;
#line 194 "hlds_out_mode.m"
  }
#line 189 "hlds_out_mode.m"
}

#line 128 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(
#line 128 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 128 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__Name_5)
#line 128 "hlds_out_mode.m"
{
#line 130 "hlds_out_mode.m"
  {
#line 130 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 130 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 130 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

#line 131 "hlds_out_mode.m"
    {
#line 131 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 131 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_6_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_5));
#line 131 "hlds_out_mode.m"
    }
#line 131 "hlds_out_mode.m"
    {
#line 131 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 131 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_6_6));
#line 131 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 131 "hlds_out_mode.m"
    }
#line 130 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 130 "hlds_out_mode.m"
  }
#line 128 "hlds_out_mode.m"
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
#line 1098 "hlds_out_mode.m"
  {
#line 1098 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1098 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_8;
#line 1098 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Expansions_9;
#line 1098 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;
#line 1100 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_8;

#line 1099 "hlds_out_mode.m"
    {
#line 1099 "hlds_out_mode.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &hlds__hlds_out__hlds_out_mode__Expansions_9);
    }
#line 1101 "hlds_out_mode.m"
    {
#line 1101 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1101 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstVarSet_6));
#line 1101 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModuleInfo_7));
#line 1101 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Expansions_9));
#line 1101 "hlds_out_mode.m"
    }
#line 1100 "hlds_out_mode.m"
    {
#line 1100 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_inst_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__Inst_5, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_10_10)), ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_8);
    }
#line 1100 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_8 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_8);
#line 1098 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_8;
#line 1098 "hlds_out_mode.m"
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
#line 1093 "hlds_out_mode.m"
  {
#line 1093 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1093 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Expansions_10;
#line 1093 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_13_13;
#line 1095 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_12;

#line 1094 "hlds_out_mode.m"
    {
#line 1094 "hlds_out_mode.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &hlds__hlds_out__hlds_out_mode__Expansions_10);
    }
#line 1096 "hlds_out_mode.m"
    {
#line 1096 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_13_13, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstVarSet_7));
#line 1096 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_13_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModuleInfo_8));
#line 1096 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_13_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Expansions_10));
#line 1096 "hlds_out_mode.m"
    }
#line 1095 "hlds_out_mode.m"
    {
#line 1095 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_inst_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__Inst_6, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_13_13)), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_12);
    }
#line 1093 "hlds_out_mode.m"
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
#line 1058 "hlds_out_mode.m"
  {
#line 1058 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1058 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_6;
#line 1059 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_6;

#line 1059 "hlds_out_mode.m"
    {
#line 1059 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__UniModes_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_6);
    }
#line 1059 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_6 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_6);
#line 1058 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_6;
#line 1058 "hlds_out_mode.m"
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
#line 1056 "hlds_out_mode.m"
  {
#line 1056 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1056 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_9;

#line 1056 "hlds_out_mode.m"
    {
#line 1056 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__UniModes_5, hlds__hlds_out__hlds_out_mode__InstVarSet_6, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_9);
    }
#line 1056 "hlds_out_mode.m"
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
#line 1079 "hlds_out_mode.m"
  {
#line 1079 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1079 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_6;
#line 1079 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2];
#line 1079 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_28;
#line 1079 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_14;
#line 1079 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_15;
#line 1079 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_16;
#line 1079 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_17;
#line 1079 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_4, (MR_Integer) 0)));
#line 1079 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_4, (MR_Integer) 1)));
#line 1079 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 1079 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
#line 1079 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_22;
#line 1079 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_24;
#line 1079 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
#line 1087 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_22;
#line 8546 "hlds.hlds_out.hlds_out_mode.c"
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8548 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_24;
#line 1089 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv3_String_6;

#line 1086 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, (MR_Integer) 0)));
#line 1086 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, (MR_Integer) 1)));
#line 1086 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_19_19, (MR_Integer) 0)));
#line 1086 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_19_19, (MR_Integer) 1)));
#line 1087 "hlds_out_mode.m"
    {
#line 1087 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_14));
#line 1087 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_20_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_16));
#line 1087 "hlds_out_mode.m"
    }
#line 1087 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__V_21_21 = (MR_Word) hlds__hlds_out__hlds_out_mode__InstVarSet_5;
#line 8573 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_28 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6];
#line 1087 "hlds_out_mode.m"
    {
#line 1087 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_28, hlds__hlds_out__hlds_out_mode__V_20_20, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_21_21)), ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_22);
    }
#line 1087 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_22 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_22);
#line 8582 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8584 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 8586 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_22)), &hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_24);
    }
#line 8589 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_24 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_24);
#line 1089 "hlds_out_mode.m"
    {
#line 1089 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_15));
#line 1089 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_17));
#line 1089 "hlds_out_mode.m"
    }
#line 1089 "hlds_out_mode.m"
    {
#line 1089 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_28, hlds__hlds_out__hlds_out_mode__V_25_25, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_21_21)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_24)), &hlds__hlds_out__hlds_out_mode__conv3_String_6);
    }
#line 1089 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_6 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv3_String_6);
#line 1079 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_6;
#line 1079 "hlds_out_mode.m"
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
#line 1077 "hlds_out_mode.m"
  {
#line 1077 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1077 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1];
#line 1077 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_31;
#line 1077 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_17;
#line 1077 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_18;
#line 1077 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_19;
#line 1077 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_20;
#line 1077 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_5, (MR_Integer) 0)));
#line 1077 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_5, (MR_Integer) 1)));
#line 1077 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_23_23;
#line 1077 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 1077 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
#line 1087 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_25;
#line 8652 "hlds.hlds_out.hlds_out_mode.c"
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8654 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_27;
#line 1089 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv3_STATE_VARIABLE_IO_9;

#line 1086 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, (MR_Integer) 0)));
#line 1086 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, (MR_Integer) 1)));
#line 1086 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, (MR_Integer) 0)));
#line 1086 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, (MR_Integer) 1)));
#line 1087 "hlds_out_mode.m"
    {
#line 1087 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_23_23, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_17));
#line 1087 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_23_23, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_19));
#line 1087 "hlds_out_mode.m"
    }
#line 1087 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) hlds__hlds_out__hlds_out_mode__InstVarSet_6;
#line 8679 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_31 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6];
#line 1087 "hlds_out_mode.m"
    {
#line 1087 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_31, hlds__hlds_out__hlds_out_mode__V_23_23, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_24_24)), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_25);
    }
#line 8686 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8688 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 8690 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_27);
    }
#line 1089 "hlds_out_mode.m"
    {
#line 1089 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_28_28, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_18));
#line 1089 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_28_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_20));
#line 1089 "hlds_out_mode.m"
    }
#line 1089 "hlds_out_mode.m"
    {
#line 1089 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_31, hlds__hlds_out__hlds_out_mode__V_28_28, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_24_24)), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv3_STATE_VARIABLE_IO_9);
    }
#line 1077 "hlds_out_mode.m"
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
#line 686 "hlds_out_mode.m"
  {
#line 686 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 686 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 687 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 687 "hlds_out_mode.m"
    {
#line 687 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Insts_7, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 687 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 686 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 686 "hlds_out_mode.m"
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
#line 681 "hlds_out_mode.m"
  {
#line 681 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 682 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 682 "hlds_out_mode.m"
    {
#line 682 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Insts_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 681 "hlds_out_mode.m"
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
#line 714 "hlds_out_mode.m"
  {
#line 714 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 714 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 715 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 715 "hlds_out_mode.m"
    {
#line 715 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Inst_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 715 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 714 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 714 "hlds_out_mode.m"
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
#line 710 "hlds_out_mode.m"
  {
#line 710 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 710 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 710 "hlds_out_mode.m"
    {
#line 710 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Inst_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 710 "hlds_out_mode.m"
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
#line 802 "hlds_out_mode.m"
  {
#line 802 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 802 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 803 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 803 "hlds_out_mode.m"
    {
#line 803 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Inst_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 803 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 802 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 802 "hlds_out_mode.m"
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
#line 798 "hlds_out_mode.m"
  {
#line 798 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 798 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_U_15;

#line 798 "hlds_out_mode.m"
    {
#line 798 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Inst_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_U_15);
    }
#line 798 "hlds_out_mode.m"
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
#line 779 "hlds_out_mode.m"
  {
#line 779 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 779 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 780 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 780 "hlds_out_mode.m"
    {
#line 780 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Insts_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 780 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 779 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 779 "hlds_out_mode.m"
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
#line 775 "hlds_out_mode.m"
  {
#line 775 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 775 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 775 "hlds_out_mode.m"
    {
#line 775 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Insts_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 775 "hlds_out_mode.m"
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
#line 438 "hlds_out_mode.m"
  {
#line 438 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 438 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 438 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

#line 439 "hlds_out_mode.m"
    {
#line 439 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_6_6 = mercury__term__context_init_0_f_0();
    }
#line 439 "hlds_out_mode.m"
    {
#line 439 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__V_6_6, hlds__hlds_out__hlds_out_mode__InstName_5);
    }
#line 438 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 438 "hlds_out_mode.m"
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
#line 186 "hlds_out_mode.m"
  {
#line 186 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 186 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 186 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

#line 187 "hlds_out_mode.m"
    {
#line 187 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_6_6 = mercury__term__context_init_0_f_0();
    }
#line 187 "hlds_out_mode.m"
    {
#line 187 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__V_6_6, hlds__hlds_out__hlds_out_mode__Inst_5);
    }
#line 186 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 186 "hlds_out_mode.m"
  }
#line 43 "hlds_out_mode.m"
}

#line 182 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0_1(
#line 182 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 182 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 182 "hlds_out_mode.m"
{
#line 182 "hlds_out_mode.m"
  {
#line 182 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 182 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 182 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

#line 182 "hlds_out_mode.m"
    {
#line 182 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 182 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
#line 182 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 182 "hlds_out_mode.m"
  }
#line 182 "hlds_out_mode.m"
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
#line 165 "hlds_out_mode.m"
  {
#line 165 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 165 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_8;

#line 165 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Mode_7)) == (MR_mktag((MR_Integer) 0))))
#line 165 "hlds_out_mode.m"
      {
#line 165 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 0)));
#line 165 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 1)));
#line 169 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_17_17;
#line 169 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode___Uniq_11;
#line 169 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_12_12;

#line 169 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstA_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstA_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 169 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 169 "hlds_out_mode.m"
          {
#line 169 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode___Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstA_9, (MR_Integer) 1)));
#line 169 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstA_9, (MR_Integer) 2)));
#line 169 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 169 "hlds_out_mode.m"
            if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 169 "hlds_out_mode.m"
              {
#line 169 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_12_12 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__V_17_17), (MR_Integer) 1);
#line 170 "hlds_out_mode.m"
                {
#line 170 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__hlds_out__hlds_out_mode__InstB_10, hlds__hlds_out__hlds_out_mode__InstA_9);
                }
#line 169 "hlds_out_mode.m"
              }
#line 169 "hlds_out_mode.m"
          }
#line 173 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 172 "hlds_out_mode.m"
          {
#line 172 "hlds_out_mode.m"
            return hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstA_9);
          }
#line 173 "hlds_out_mode.m"
        else
#line 174 "hlds_out_mode.m"
          {
#line 174 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_19_19;
#line 174 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
#line 174 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
#line 174 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_23_23;

#line 175 "hlds_out_mode.m"
            {
#line 175 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_21_21 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstA_9);
            }
#line 176 "hlds_out_mode.m"
            {
#line 176 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_23_23 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstB_10);
            }
#line 176 "hlds_out_mode.m"
            {
#line 176 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_23_23));
#line 176 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 176 "hlds_out_mode.m"
            }
#line 175 "hlds_out_mode.m"
            {
#line 175 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_19_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_21_21));
#line 175 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_22_22));
#line 175 "hlds_out_mode.m"
            }
#line 174 "hlds_out_mode.m"
            {
#line 174 "hlds_out_mode.m"
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[0], hlds__hlds_out__hlds_out_mode__V_19_19, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
            }
#line 174 "hlds_out_mode.m"
          }
#line 165 "hlds_out_mode.m"
      }
#line 165 "hlds_out_mode.m"
    else
#line 180 "hlds_out_mode.m"
      {
#line 180 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 0)));
#line 180 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Mode_7, (MR_Integer) 1)));
#line 180 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_15_15;
#line 180 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_16_16;

#line 182 "hlds_out_mode.m"
        {
#line 182 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 182 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 182 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0_1));
#line 182 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 182 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
#line 182 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_16_16, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 182 "hlds_out_mode.m"
        }
#line 182 "hlds_out_mode.m"
        {
#line 182 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_15_15 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_16_16, hlds__hlds_out__hlds_out_mode__Args_14);
        }
#line 181 "hlds_out_mode.m"
        {
#line 181 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__Name_13, hlds__hlds_out__hlds_out_mode__V_15_15, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
#line 180 "hlds_out_mode.m"
      }
#line 165 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_8;
#line 165 "hlds_out_mode.m"
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
#line 160 "hlds_out_mode.m"
  {
#line 160 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 160 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 160 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

#line 161 "hlds_out_mode.m"
    {
#line 161 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_6_6 = mercury__term__context_init_0_f_0();
    }
#line 161 "hlds_out_mode.m"
    {
#line 161 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__V_6_6, hlds__hlds_out__hlds_out_mode__Mode_5);
    }
#line 160 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 160 "hlds_out_mode.m"
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
#line 143 "hlds_out_mode.m"
  while (MR_TRUE)
#line 143 "hlds_out_mode.m"
    {
#line 143 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 143 "hlds_out_mode.m"
      {
#line 143 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 143 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 143 "hlds_out_mode.m"
          {
#line 143 "hlds_out_mode.m"
          }
#line 143 "hlds_out_mode.m"
        else
#line 144 "hlds_out_mode.m"
          {
#line 144 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Var_13;
#line 144 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_14;
#line 144 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Rest_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 144 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_20;
#line 144 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));

#line 144 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 0)));
#line 144 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Inst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 1)));
#line 145 "hlds_out_mode.m"
            {
#line 145 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__VarSet_2, hlds__hlds_out__hlds_out_mode__AppendVarNums_3, hlds__hlds_out__hlds_out_mode__Var_13);
            }
#line 146 "hlds_out_mode.m"
            {
#line 146 "hlds_out_mode.m"
              mercury__io__write_string_3_p_0((MR_String) " -> ");
            }
#line 147 "hlds_out_mode.m"
            {
#line 147 "hlds_out_mode.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_mode__InstVarSet_20);
            }
#line 148 "hlds_out_mode.m"
            {
#line 148 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_output_inst_4_p_0(hlds__hlds_out__hlds_out_mode__Inst_14, hlds__hlds_out__hlds_out_mode__InstVarSet_20);
            }
#line 151 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Rest_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "hlds_out_mode.m"
              {
#line 150 "hlds_out_mode.m"
              }
#line 151 "hlds_out_mode.m"
            else
#line 152 "hlds_out_mode.m"
              {
#line 153 "hlds_out_mode.m"
                {
#line 153 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(hlds__hlds_out__hlds_out_mode__Indent_4);
                }
#line 154 "hlds_out_mode.m"
                {
#line 154 "hlds_out_mode.m"
                  mercury__io__write_string_3_p_0((MR_String) "%            ");
                }
#line 155 "hlds_out_mode.m"
                /* direct tailcall eliminated */
#line 155 "hlds_out_mode.m"
                {
#line 155 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Rest_15;

#line 155 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 155 "hlds_out_mode.m"
                }
#line 155 "hlds_out_mode.m"
                continue;
#line 152 "hlds_out_mode.m"
              }
#line 144 "hlds_out_mode.m"
          }
#line 143 "hlds_out_mode.m"
      }
#line 143 "hlds_out_mode.m"
      break;
#line 143 "hlds_out_mode.m"
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
#line 138 "hlds_out_mode.m"
  {
#line 138 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 136 "hlds_out_mode.m"
    {
#line 136 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(hlds__hlds_out__hlds_out_mode__InstMap_7);
    }
#line 138 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 137 "hlds_out_mode.m"
      {
#line 137 "hlds_out_mode.m"
        {
#line 137 "hlds_out_mode.m"
          mercury__io__write_string_3_p_0((MR_String) "unreachable");
#line 137 "hlds_out_mode.m"
          return;
        }
#line 137 "hlds_out_mode.m"
      }
#line 138 "hlds_out_mode.m"
    else
#line 139 "hlds_out_mode.m"
      {
#line 139 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__AssocList_12;

#line 139 "hlds_out_mode.m"
        {
#line 139 "hlds_out_mode.m"
          hlds__instmap__instmap_to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_mode__InstMap_7, &hlds__hlds_out__hlds_out_mode__AssocList_12);
        }
#line 140 "hlds_out_mode.m"
        {
#line 140 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_p_0(hlds__hlds_out__hlds_out_mode__AssocList_12, hlds__hlds_out__hlds_out_mode__VarSet_8, hlds__hlds_out__hlds_out_mode__AppendVarNums_9, hlds__hlds_out__hlds_out_mode__Indent_10);
#line 140 "hlds_out_mode.m"
          return;
        }
#line 139 "hlds_out_mode.m"
      }
#line 138 "hlds_out_mode.m"
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
