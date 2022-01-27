/*
** Automatically generated from `hlds_out_mode.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 140 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 143 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 146 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 149 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 155 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 158 "hlds.hlds_out.hlds_out_mode.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_types_expanded_inst_info_0_0[3];

#line 161 "hlds.hlds_out.hlds_out_mode.c"
static const MR_ConstString hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_names_expanded_inst_info_0_0[3];

#line 164 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0;

#line 167 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0[1];

#line 170 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_ptag_ordered_expanded_inst_info_0[1];

#line 173 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_name_ordered_expanded_inst_info_0[1];

#line 176 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_expanded_inst_info_0[1];

#line 179 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0;

#line 182 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1;

#line 185 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2];

#line 188 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2];

#line 191 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2];

#line 194 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0_10001(
#line 197 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 199 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

#line 202 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0_10001(
#line 205 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 207 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 209 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3);

#line 212 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
#line 215 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 217 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

#line 220 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
#line 223 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 225 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 227 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3);

#line 230 "hlds.hlds_out.hlds_out_mode.c"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0_10001(
#line 233 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 235 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 238 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0_10001(
#line 241 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 243 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 245 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 247 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3,
#line 249 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_4,
#line 251 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_5);

#line 382 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 382 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 382 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 388 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 388 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 388 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 373 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 373 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 373 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 373 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9);

#line 358 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 358 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 358 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 364 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 364 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 364 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 349 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 349 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 349 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 349 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9);

#line 589 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__589__1_2_p_0(
#line 589 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 589 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_57);

#line 581 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__581__1_2_p_0(
#line 581 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 581 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_67);

#line 597 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__597__1_2_p_0(
#line 597 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 597 "hlds_out_mode.m"
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

#line 1084 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0(
#line 1084 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5,
#line 1084 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1084 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1084 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__HeadVar__3_3,
#line 1084 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__HeadVar__4_4);

#line 1083 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0(
#line 1083 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

#line 1087 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0(
#line 1087 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1087 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1087 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3);

#line 1087 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0(
#line 1087 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1087 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2);

#line 1020 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0(
#line 1020 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21,
#line 1020 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1020 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1020 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3,
#line 1020 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4);

#line 912 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(
#line 912 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154,
#line 912 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_9,
#line 912 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_10,
#line 912 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_11,
#line 912 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_12,
#line 912 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_13,
#line 912 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_14,
#line 912 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_29,
#line 912 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);

#line 899 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
#line 899 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_1,
#line 899 "hlds_out_mode.m"
  MR_Integer * hlds__hlds_out__hlds_out_mode__InstAddr_2);

#line 864 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
#line 864 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 864 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 864 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent0_2,
#line 864 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 864 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 864 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 864 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 864 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7);

#line 765 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(
#line 765 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103,
#line 765 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
#line 765 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 765 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 765 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 765 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 765 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_30,
#line 765 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);

#line 742 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
#line 742 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_26,
#line 742 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 742 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_2,
#line 742 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 742 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 742 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 742 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 742 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7);

#line 677 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(
#line 677 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 677 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_8,
#line 677 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 677 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 677 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 677 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 677 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22,
#line 677 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);

#line 649 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0(
#line 649 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37,
#line 649 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 649 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum_2,
#line 649 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
#line 649 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 649 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_5,
#line 649 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6,
#line 649 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7,
#line 649 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8);

#line 589 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3(
#line 589 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

#line 581 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2(
#line 581 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

#line 597 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1(
#line 597 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

#line 518 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(
#line 518 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ConsId_4,
#line 518 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 518 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__Term_6);

#line 505 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1(
#line 505 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 505 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 500 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(
#line 500 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 500 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 500 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_8,
#line 500 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_9);

#line 490 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(
#line 490 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_1,
#line 490 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_2,
#line 490 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3);

#line 482 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(
#line 482 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 482 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__SharedName_2);

#line 469 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(
#line 469 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

#line 464 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(
#line 464 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

#line 407 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_3(
#line 407 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 407 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 428 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2(
#line 428 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 428 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 412 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1(
#line 412 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 412 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 400 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(
#line 400 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 400 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 400 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_7);

#line 341 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(
#line 341 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 341 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_5);

#line 336 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1(
#line 336 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 336 "hlds_out_mode.m"
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
    ((MR_Box) ((MR_String) "table_io_entry_desc"))
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



#line 999 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1007 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1015 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1023 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1031 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1039 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 1047 "hlds.hlds_out.hlds_out_mode.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_types_expanded_inst_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0
};

#line 1054 "hlds.hlds_out.hlds_out_mode.c"
static const MR_ConstString hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_names_expanded_inst_info_0_0[3] = {
  (MR_String) "eii_varset",
  (MR_String) "eii_module_info",
  (MR_String) "eii_expansions"
};

#line 1061 "hlds.hlds_out.hlds_out_mode.c"
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

#line 1076 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0[1] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0
};

#line 1081 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_ptag_ordered_expanded_inst_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0
  }
};

#line 1090 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_name_ordered_expanded_inst_info_0[1] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0
};

#line 1095 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_expanded_inst_info_0[1] = {
  (MR_Integer) 0
};

#line 1100 "hlds.hlds_out.hlds_out_mode.c"
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

#line 1121 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0 = {
  (MR_String) "do_not_incl_addr",
  (MR_Integer) 0
};

#line 1127 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1 = {
  (MR_String) "do_incl_addr",
  (MR_Integer) 1
};

#line 1133 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1
};

#line 1139 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0
};

#line 1145 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1151 "hlds.hlds_out.hlds_out_mode.c"
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

#line 1172 "hlds.hlds_out.hlds_out_mode.c"
const MR_BaseTypeclassInfo base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0_10001))
};

#line 1183 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0_10001(
#line 1186 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1188 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
#line 1190 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1192 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1194 "hlds.hlds_out.hlds_out_mode.c"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1197 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1199 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
#line 1202 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 1204 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1206 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1209 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0_10001(
#line 1212 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1214 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 1216 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3)
#line 1218 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1220 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1222 "hlds.hlds_out.hlds_out_mode.c"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1;

#line 1225 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1227 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0(&hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3));
    }
#line 1230 "hlds.hlds_out.hlds_out_mode.c"
    *hlds__hlds_out__hlds_out_mode__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1));
#line 1232 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1234 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1237 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
#line 1240 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1242 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
#line 1244 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1246 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1248 "hlds.hlds_out.hlds_out_mode.c"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1251 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1253 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
#line 1256 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 1258 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1260 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1263 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
#line 1266 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1268 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 1270 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3)
#line 1272 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1274 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1276 "hlds.hlds_out.hlds_out_mode.c"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1;

#line 1279 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1281 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0(&hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3));
    }
#line 1284 "hlds.hlds_out.hlds_out_mode.c"
    *hlds__hlds_out__hlds_out_mode__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1));
#line 1286 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1288 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1291 "hlds.hlds_out.hlds_out_mode.c"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0_10001(
#line 1294 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 1296 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 1298 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1300 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1302 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 1304 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__closure;
#line 1306 "hlds.hlds_out.hlds_out_mode.c"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__2_2;

#line 1309 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 1311 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1313 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__conv0_HeadVar__2_2 = hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 1316 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__2_2));
#line 1318 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 1320 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1322 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1325 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0_10001(
#line 1328 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 1330 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1332 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 1334 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3,
#line 1336 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_4,
#line 1338 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_5)
#line 1340 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1342 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1344 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__closure;

#line 1347 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 1349 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1351 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3), hlds__hlds_out__hlds_out_mode__wrapper_arg_4, hlds__hlds_out__hlds_out_mode__wrapper_arg_5);
    }
#line 1354 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1356 "hlds.hlds_out.hlds_out_mode.c"
}

#line 382 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 382 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 382 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 382 "hlds_out_mode.m"
{
#line 382 "hlds_out_mode.m"
  {
#line 382 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 382 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 382 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv2_Term_8;

#line 382 "hlds_out_mode.m"
    {
#line 382 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv2_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 382 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv2_Term_8));
#line 382 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 382 "hlds_out_mode.m"
  }
#line 382 "hlds_out_mode.m"
}

#line 388 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 388 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 388 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 388 "hlds_out_mode.m"
{
#line 388 "hlds_out_mode.m"
  {
#line 388 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 388 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 388 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 388 "hlds_out_mode.m"
    {
#line 388 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 388 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
#line 388 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 388 "hlds_out_mode.m"
  }
#line 388 "hlds_out_mode.m"
}

#line 373 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 373 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 373 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 373 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9)
#line 373 "hlds_out_mode.m"
{
#line 376 "hlds_out_mode.m"
  {
#line 376 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 376 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
#line 376 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 0)));
#line 376 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 1)));
#line 376 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 3)));
#line 376 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ModesTerm_15;
#line 376 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 376 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
#line 376 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;
#line 376 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_52_52;
#line 376 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;
#line 378 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 2)));

#line 384 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__PredOrFunc_11 == (MR_Integer) 1))
#line 385 "hlds_out_mode.m"
      {
#line 385 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 385 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48;
#line 385 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__ArgModes_16;
#line 385 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__RetMode_17;
#line 385 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__ArgModesTerm_18;
#line 385 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 385 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
#line 385 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 385 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;
#line 385 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 386 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__conv0_RetMode_17;

#line 386 "hlds_out_mode.m"
        {
#line 386 "hlds_out_mode.m"
          parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_mode__Modes_12, &hlds__hlds_out__hlds_out_mode__ArgModes_16, &hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
        }
#line 386 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__RetMode_17 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
#line 388 "hlds_out_mode.m"
        {
#line 388 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 388 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 388 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
#line 388 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 388 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 388 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 388 "hlds_out_mode.m"
        }
#line 388 "hlds_out_mode.m"
        {
#line 388 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_20_20 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_22_22, hlds__hlds_out__hlds_out_mode__ArgModes_16);
        }
#line 1516 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 387 "hlds_out_mode.m"
        {
#line 387 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[39], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ArgModesTerm_18);
        }
#line 391 "hlds_out_mode.m"
        {
#line 391 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_27_27 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__RetMode_17);
        }
#line 391 "hlds_out_mode.m"
        {
#line 391 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
#line 391 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "hlds_out_mode.m"
        }
#line 391 "hlds_out_mode.m"
        {
#line 391 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgModesTerm_18));
#line 391 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_26_26));
#line 391 "hlds_out_mode.m"
        }
#line 390 "hlds_out_mode.m"
        {
#line 390 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[36], hlds__hlds_out__hlds_out_mode__V_24_24, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
        }
#line 385 "hlds_out_mode.m"
      }
#line 384 "hlds_out_mode.m"
    else
#line 380 "hlds_out_mode.m"
      {
#line 380 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 380 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

#line 382 "hlds_out_mode.m"
        {
#line 382 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 382 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 382 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
#line 382 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 382 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 382 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 382 "hlds_out_mode.m"
        }
#line 382 "hlds_out_mode.m"
        {
#line 382 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_30_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_32_32, hlds__hlds_out__hlds_out_mode__Modes_12);
        }
#line 381 "hlds_out_mode.m"
        {
#line 381 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[40], hlds__hlds_out__hlds_out_mode__V_30_30, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
        }
#line 380 "hlds_out_mode.m"
      }
#line 628 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 4))
#line 632 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "cc_multi";
#line 628 "hlds_out_mode.m"
    else
#line 628 "hlds_out_mode.m"
      if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 5))
#line 633 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "cc_nondet";
#line 628 "hlds_out_mode.m"
      else
#line 628 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 0))
#line 630 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "det";
#line 628 "hlds_out_mode.m"
        else
#line 628 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 6))
#line 628 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "erroneous";
#line 628 "hlds_out_mode.m"
          else
#line 628 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 7))
#line 629 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "failure";
#line 628 "hlds_out_mode.m"
            else
#line 628 "hlds_out_mode.m"
              if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 2))
#line 634 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "multi";
#line 628 "hlds_out_mode.m"
              else
#line 628 "hlds_out_mode.m"
                if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 3))
#line 635 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "nondet";
#line 628 "hlds_out_mode.m"
                else
#line 631 "hlds_out_mode.m"
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
#line 395 "hlds_out_mode.m"
    {
#line 395 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
#line 395 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "hlds_out_mode.m"
    }
#line 395 "hlds_out_mode.m"
    {
#line 395 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModesTerm_15));
#line 395 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
#line 395 "hlds_out_mode.m"
    }
#line 394 "hlds_out_mode.m"
    {
#line 394 "hlds_out_mode.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[38], hlds__hlds_out__hlds_out_mode__V_34_34, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
    }
#line 376 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_10;
#line 376 "hlds_out_mode.m"
  }
#line 373 "hlds_out_mode.m"
}

#line 358 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 358 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 358 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 358 "hlds_out_mode.m"
{
#line 358 "hlds_out_mode.m"
  {
#line 358 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 358 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 358 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv2_Term_8;

#line 358 "hlds_out_mode.m"
    {
#line 358 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv2_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 358 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv2_Term_8));
#line 358 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 358 "hlds_out_mode.m"
  }
#line 358 "hlds_out_mode.m"
}

#line 364 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
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
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 364 "hlds_out_mode.m"
    {
#line 364 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 364 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
#line 364 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 364 "hlds_out_mode.m"
  }
#line 364 "hlds_out_mode.m"
}

#line 349 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 349 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 349 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 349 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9)
#line 349 "hlds_out_mode.m"
{
#line 352 "hlds_out_mode.m"
  {
#line 352 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 352 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
#line 352 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 0)));
#line 352 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 1)));
#line 352 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 3)));
#line 352 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ModesTerm_15;
#line 352 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 352 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
#line 352 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;
#line 352 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_52_52;
#line 352 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;
#line 354 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 2)));

#line 360 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__PredOrFunc_11 == (MR_Integer) 1))
#line 361 "hlds_out_mode.m"
      {
#line 361 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 361 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48;
#line 361 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__ArgModes_16;
#line 361 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__RetMode_17;
#line 361 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__ArgModesTerm_18;
#line 361 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 361 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
#line 361 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 361 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;
#line 361 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 362 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__conv0_RetMode_17;

#line 362 "hlds_out_mode.m"
        {
#line 362 "hlds_out_mode.m"
          parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_mode__Modes_12, &hlds__hlds_out__hlds_out_mode__ArgModes_16, &hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
        }
#line 362 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__RetMode_17 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
#line 364 "hlds_out_mode.m"
        {
#line 364 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 364 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 364 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
#line 364 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 364 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 364 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 364 "hlds_out_mode.m"
        }
#line 364 "hlds_out_mode.m"
        {
#line 364 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_20_20 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_22_22, hlds__hlds_out__hlds_out_mode__ArgModes_16);
        }
#line 1845 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 363 "hlds_out_mode.m"
        {
#line 363 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[35], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ArgModesTerm_18);
        }
#line 367 "hlds_out_mode.m"
        {
#line 367 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_27_27 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__RetMode_17);
        }
#line 367 "hlds_out_mode.m"
        {
#line 367 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
#line 367 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "hlds_out_mode.m"
        }
#line 367 "hlds_out_mode.m"
        {
#line 367 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgModesTerm_18));
#line 367 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_26_26));
#line 367 "hlds_out_mode.m"
        }
#line 366 "hlds_out_mode.m"
        {
#line 366 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[36], hlds__hlds_out__hlds_out_mode__V_24_24, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
        }
#line 361 "hlds_out_mode.m"
      }
#line 360 "hlds_out_mode.m"
    else
#line 356 "hlds_out_mode.m"
      {
#line 356 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 356 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

#line 358 "hlds_out_mode.m"
        {
#line 358 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 358 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 358 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
#line 358 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 358 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 358 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 358 "hlds_out_mode.m"
        }
#line 358 "hlds_out_mode.m"
        {
#line 358 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_30_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_32_32, hlds__hlds_out__hlds_out_mode__Modes_12);
        }
#line 357 "hlds_out_mode.m"
        {
#line 357 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[37], hlds__hlds_out__hlds_out_mode__V_30_30, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
        }
#line 356 "hlds_out_mode.m"
      }
#line 628 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 4))
#line 632 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "cc_multi";
#line 628 "hlds_out_mode.m"
    else
#line 628 "hlds_out_mode.m"
      if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 5))
#line 633 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "cc_nondet";
#line 628 "hlds_out_mode.m"
      else
#line 628 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 0))
#line 630 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "det";
#line 628 "hlds_out_mode.m"
        else
#line 628 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 6))
#line 628 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "erroneous";
#line 628 "hlds_out_mode.m"
          else
#line 628 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 7))
#line 629 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "failure";
#line 628 "hlds_out_mode.m"
            else
#line 628 "hlds_out_mode.m"
              if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 2))
#line 634 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "multi";
#line 628 "hlds_out_mode.m"
              else
#line 628 "hlds_out_mode.m"
                if ((hlds__hlds_out__hlds_out_mode__Det_14 == (MR_Integer) 3))
#line 635 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_String) "nondet";
#line 628 "hlds_out_mode.m"
                else
#line 631 "hlds_out_mode.m"
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
#line 371 "hlds_out_mode.m"
    {
#line 371 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
#line 371 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 371 "hlds_out_mode.m"
    }
#line 371 "hlds_out_mode.m"
    {
#line 371 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModesTerm_15));
#line 371 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
#line 371 "hlds_out_mode.m"
    }
#line 370 "hlds_out_mode.m"
    {
#line 370 "hlds_out_mode.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[38], hlds__hlds_out__hlds_out_mode__V_34_34, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
    }
#line 352 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_10;
#line 352 "hlds_out_mode.m"
  }
#line 349 "hlds_out_mode.m"
}

#line 589 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__589__1_2_p_0(
#line 589 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 589 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_57)
#line 589 "hlds_out_mode.m"
{
#line 589 "hlds_out_mode.m"
  {
#line 589 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 589 "hlds_out_mode.m"
    {
#line 589 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[5], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_57)));
    }
#line 589 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 589 "hlds_out_mode.m"
  }
#line 589 "hlds_out_mode.m"
}

#line 581 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__581__1_2_p_0(
#line 581 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 581 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_67)
#line 581 "hlds_out_mode.m"
{
#line 581 "hlds_out_mode.m"
  {
#line 581 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 581 "hlds_out_mode.m"
    {
#line 581 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[5], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_67)));
    }
#line 581 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 581 "hlds_out_mode.m"
  }
#line 581 "hlds_out_mode.m"
}

#line 597 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__597__1_2_p_0(
#line 597 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 597 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_45)
#line 597 "hlds_out_mode.m"
{
#line 597 "hlds_out_mode.m"
  {
#line 597 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 597 "hlds_out_mode.m"
    {
#line 597 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[5], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_45)));
    }
#line 597 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 597 "hlds_out_mode.m"
  }
#line 597 "hlds_out_mode.m"
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
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_30, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[34]));
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

#line 1084 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_p_0(
#line 1084 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5,
#line 1084 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1084 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1084 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__HeadVar__3_3,
#line 1084 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__HeadVar__4_4)
#line 1084 "hlds_out_mode.m"
{
#line 1068 "hlds_out_mode.m"
  {
#line 1068 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1066 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1066 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1066 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));

#line 1066 "hlds_out_mode.m"
    {
#line 1066 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__1_1)), hlds__hlds_out__hlds_out_mode__V_15_15);
    }
#line 1068 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1067 "hlds_out_mode.m"
      {
#line 2217 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 2220 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 2222 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5), ((MR_Box) ((MR_String) "...")), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, hlds__hlds_out__hlds_out_mode__HeadVar__4_4);
#line 2224 "hlds.hlds_out.hlds_out_mode.c"
          return;
        }
#line 1067 "hlds_out_mode.m"
      }
#line 1068 "hlds_out_mode.m"
    else
#line 1073 "hlds_out_mode.m"
      {
#line 1068 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_11_11;
#line 1068 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_12_12;

#line 1068 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1068 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1068 "hlds_out_mode.m"
          {
#line 1068 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1068 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1072 "hlds_out_mode.m"
            {
#line 1072 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_inst_name_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__HeadVar__1_1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_2)), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, hlds__hlds_out__hlds_out_mode__HeadVar__4_4);
#line 1072 "hlds_out_mode.m"
              return;
            }
#line 1068 "hlds_out_mode.m"
          }
#line 1068 "hlds_out_mode.m"
        else
#line 1074 "hlds_out_mode.m"
          {
#line 1074 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_13;
#line 1074 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Expansions_14;
#line 1074 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1074 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 1074 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
#line 1074 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1074 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1075 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 1075 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
#line 1076 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_29_29;
#line 1076 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 1076 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_31_31;

#line 1074 "hlds_out_mode.m"
            {
#line 1074 "hlds_out_mode.m"
              check_hlds__mode_util__inst_lookup_3_p_0(hlds__hlds_out__hlds_out_mode__V_19_19, hlds__hlds_out__hlds_out_mode__HeadVar__1_1, &hlds__hlds_out__hlds_out_mode__Inst_13);
            }
#line 1075 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1075 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1075 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1075 "hlds_out_mode.m"
            {
#line 1075 "hlds_out_mode.m"
              mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__1_1)), hlds__hlds_out__hlds_out_mode__V_20_20, &hlds__hlds_out__hlds_out_mode__Expansions_14);
            }
#line 1076 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1076 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1076 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1076 "hlds_out_mode.m"
            {
#line 1076 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1076 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_29_29));
#line 1076 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_30_30));
#line 1076 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Expansions_14));
#line 1076 "hlds_out_mode.m"
            }
#line 1076 "hlds_out_mode.m"
            {
#line 1076 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_inst_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_5, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__Inst_13, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_21_21)), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, hlds__hlds_out__hlds_out_mode__HeadVar__4_4);
#line 1076 "hlds_out_mode.m"
              return;
            }
#line 1074 "hlds_out_mode.m"
          }
#line 1073 "hlds_out_mode.m"
      }
#line 1068 "hlds_out_mode.m"
  }
#line 1084 "hlds_out_mode.m"
}

#line 1083 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0(
#line 1083 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
#line 1083 "hlds_out_mode.m"
{
#line 1083 "hlds_out_mode.m"
  {
#line 1083 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1083 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1083 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1083 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 2)));

#line 1083 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 1083 "hlds_out_mode.m"
  }
#line 1083 "hlds_out_mode.m"
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
#line 2402 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 2404 "hlds.hlds_out.hlds_out_mode.c"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__HeadVar__2_1 == hlds__hlds_out__hlds_out_mode__HeadVar__2_2);

#line 2407 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 2409 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 48 "hlds_out_mode.m"
}

#line 1087 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0(
#line 1087 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1087 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1087 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3)
#line 1087 "hlds_out_mode.m"
{
#line 1087 "hlds_out_mode.m"
  {
#line 1087 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1087 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastX_12 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 1087 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastY_13 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__3_3;

#line 1087 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__CastX_12 == hlds__hlds_out__hlds_out_mode__CastY_13);
#line 1087 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 2438 "hlds.hlds_out.hlds_out_mode.c"
      *hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 1087 "hlds_out_mode.m"
    else
#line 1087 "hlds_out_mode.m"
      {
#line 1087 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1087 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1087 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1087 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 1087 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 1)));
#line 1087 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 2)));
#line 1087 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;

#line 1087 "hlds_out_mode.m"
        {
#line 1087 "hlds_out_mode.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[7], &hlds__hlds_out__hlds_out_mode__V_10_10, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_4_4)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_7_7)));
        }
#line 2464 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__V_10_10 == (MR_Integer) 0);
#line 1087 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = !(hlds__hlds_out__hlds_out_mode__succeeded);
#line 1087 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1087 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__V_10_10;
#line 1087 "hlds_out_mode.m"
        else
#line 1087 "hlds_out_mode.m"
          {
#line 1087 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_11_11;

#line 1087 "hlds_out_mode.m"
            {
#line 1087 "hlds_out_mode.m"
              hlds__hlds_module____Compare____module_info_0_0(&hlds__hlds_out__hlds_out_mode__V_11_11, hlds__hlds_out__hlds_out_mode__V_5_5, hlds__hlds_out__hlds_out_mode__V_8_8);
            }
#line 2484 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__V_11_11 == (MR_Integer) 0);
#line 1087 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__succeeded = !(hlds__hlds_out__hlds_out_mode__succeeded);
#line 1087 "hlds_out_mode.m"
            if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1087 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__V_11_11;
#line 1087 "hlds_out_mode.m"
            else
#line 1087 "hlds_out_mode.m"
              {
#line 1087 "hlds_out_mode.m"
                {
#line 1087 "hlds_out_mode.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[8], hlds__hlds_out__hlds_out_mode__HeadVar__1_1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_9_9)));
#line 1087 "hlds_out_mode.m"
                  return;
                }
#line 1087 "hlds_out_mode.m"
              }
#line 1087 "hlds_out_mode.m"
          }
#line 1087 "hlds_out_mode.m"
      }
#line 1087 "hlds_out_mode.m"
  }
#line 1087 "hlds_out_mode.m"
}

#line 1087 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0(
#line 1087 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1087 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2)
#line 1087 "hlds_out_mode.m"
{
#line 1087 "hlds_out_mode.m"
  {
#line 1087 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1087 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastX_9 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__1_1;
#line 1087 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastY_10 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

#line 1087 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__CastX_9 == hlds__hlds_out__hlds_out_mode__CastY_10);
#line 1087 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1087 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = MR_TRUE;
#line 1087 "hlds_out_mode.m"
    else
#line 1087 "hlds_out_mode.m"
      {
#line 1087 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeInfo_13_13;
#line 1087 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1087 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1087 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 2)));
#line 1087 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1087 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1087 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));

#line 2557 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 2559 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[7], ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_3_3)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_6_6)));
        }
#line 1087 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1087 "hlds_out_mode.m"
          {
#line 2566 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 2568 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__hlds_out__hlds_out_mode__V_4_4, hlds__hlds_out__hlds_out_mode__V_7_7);
            }
#line 1087 "hlds_out_mode.m"
            if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1087 "hlds_out_mode.m"
              {
#line 2575 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__TypeInfo_13_13 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[8];
#line 2577 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 2579 "hlds.hlds_out.hlds_out_mode.c"
                  return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_mode__TypeInfo_13_13, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_5_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_8_8)));
                }
#line 1087 "hlds_out_mode.m"
              }
#line 1087 "hlds_out_mode.m"
          }
#line 1087 "hlds_out_mode.m"
      }
#line 1087 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 1087 "hlds_out_mode.m"
  }
#line 1087 "hlds_out_mode.m"
}

#line 1020 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0(
#line 1020 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21,
#line 1020 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1020 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1020 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3,
#line 1020 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4)
#line 1020 "hlds_out_mode.m"
{
#line 1023 "hlds_out_mode.m"
  while (MR_TRUE)
#line 1023 "hlds_out_mode.m"
    {
#line 1023 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 1023 "hlds_out_mode.m"
      {
#line 1023 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1023 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1023 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3;
#line 1023 "hlds_out_mode.m"
        else
#line 1024 "hlds_out_mode.m"
          {
#line 1024 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_41;
#line 1024 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Mode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1024 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Modes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1024 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17;
#line 1024 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstA1_27;
#line 1024 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstB1_28;
#line 1024 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstA2_29;
#line 1024 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstB2_30;
#line 1024 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_9, (MR_Integer) 0)));
#line 1024 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_9, (MR_Integer) 1)));
#line 1024 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_33_33;
#line 1024 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 1024 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_35;
#line 1024 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_37;
#line 1024 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_38_38;
#line 2659 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1045 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstA1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_31_31, (MR_Integer) 0)));
#line 1045 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstB1_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_31_31, (MR_Integer) 1)));
#line 1045 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstA2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, (MR_Integer) 0)));
#line 1045 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstB2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, (MR_Integer) 1)));
#line 1046 "hlds_out_mode.m"
            {
#line 1046 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_33_33, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_27));
#line 1046 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_33_33, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_29));
#line 1046 "hlds_out_mode.m"
            }
#line 1046 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 2682 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_41 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6];
#line 1046 "hlds_out_mode.m"
            {
#line 1046 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_41, hlds__hlds_out__hlds_out_mode__V_33_33, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_35);
            }
#line 2689 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2691 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 2693 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) " = ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_35, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_37);
            }
#line 1048 "hlds_out_mode.m"
            {
#line 1048 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_38_38, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_28));
#line 1048 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_38_38, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_30));
#line 1048 "hlds_out_mode.m"
            }
#line 1048 "hlds_out_mode.m"
            {
#line 1048 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_41, hlds__hlds_out__hlds_out_mode__V_38_38, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17);
            }
#line 1029 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Modes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1027 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17;
#line 1029 "hlds_out_mode.m"
            else
#line 1030 "hlds_out_mode.m"
              {
#line 1030 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19;
#line 2721 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

#line 2724 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 2726 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) ", ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19);
                }
#line 1032 "hlds_out_mode.m"
                /* direct tailcall eliminated */
#line 1032 "hlds_out_mode.m"
                {
#line 1032 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Modes_10;
#line 1032 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0__tmp_copy_3 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19;

#line 1032 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0__tmp_copy_3;
#line 1032 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 1032 "hlds_out_mode.m"
                }
#line 1032 "hlds_out_mode.m"
                continue;
#line 1030 "hlds_out_mode.m"
              }
#line 1024 "hlds_out_mode.m"
          }
#line 1023 "hlds_out_mode.m"
      }
#line 1023 "hlds_out_mode.m"
      break;
#line 1023 "hlds_out_mode.m"
    }
#line 1020 "hlds_out_mode.m"
}

#line 912 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(
#line 912 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154,
#line 912 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_9,
#line 912 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_10,
#line 912 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_11,
#line 912 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_12,
#line 912 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_13,
#line 912 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_14,
#line 912 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_29,
#line 912 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30)
#line 912 "hlds_out_mode.m"
{
#line 917 "hlds_out_mode.m"
  {
#line 917 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 917 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31;

#line 921 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_10 == (MR_Integer) 0))
#line 920 "hlds_out_mode.m"
      {
#line 920 "hlds_out_mode.m"
        parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_29, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31);
      }
#line 921 "hlds_out_mode.m"
    else
#line 922 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_29;
#line 939 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 1))))
#line 940 "hlds_out_mode.m"
      {
#line 940 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstB_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 940 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_119_119;
#line 940 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__V_121_121;
#line 940 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_122_122;
#line 940 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126;
#line 940 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Inst_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)));
#line 940 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Insts_165;
#line 940 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_173;
#line 940 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Inst_182;
#line 747 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Insts_183;

#line 941 "hlds_out_mode.m"
        {
#line 941 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044merge_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_119_119);
        }
#line 942 "hlds_out_mode.m"
        {
#line 942 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Insts_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_165, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_21));
#line 942 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 942 "hlds_out_mode.m"
        }
#line 942 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__V_121_121 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 749 "hlds_out_mode.m"
        {
#line 749 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Inst_164, hlds__hlds_out__hlds_out_mode__V_121_121, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_119_119, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_173);
        }
#line 747 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__Inst_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_165, (MR_Integer) 0)));
#line 747 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__Insts_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_165, (MR_Integer) 1)));
#line 749 "hlds_out_mode.m"
        {
#line 749 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Inst_182, hlds__hlds_out__hlds_out_mode__V_121_121, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_173, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_122_122);
        }
#line 944 "hlds_out_mode.m"
        {
#line 944 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_122_122, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126);
        }
#line 945 "hlds_out_mode.m"
        {
#line 945 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 945 "hlds_out_mode.m"
          return;
        }
#line 940 "hlds_out_mode.m"
      }
#line 939 "hlds_out_mode.m"
    else
#line 939 "hlds_out_mode.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 2))))
#line 961 "hlds_out_mode.m"
        {
#line 961 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__IsLive_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)));
#line 961 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Real_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 3)));
#line 961 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86;
#line 961 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87;
#line 961 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_88_88;
#line 961 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_90_90;
#line 961 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_91_91;
#line 961 "hlds_out_mode.m"
          MR_Integer hlds__hlds_out__hlds_out_mode__V_92_92;
#line 961 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93;
#line 961 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_94_94;
#line 961 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97;
#line 961 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstA_142 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 961 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstB_143 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)));

#line 962 "hlds_out_mode.m"
          {
#line 962 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044unify(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86);
          }
#line 963 "hlds_out_mode.m"
          {
#line 963 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__IsLive_23, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87);
          }
#line 964 "hlds_out_mode.m"
          {
#line 964 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Real_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_88_88);
          }
#line 965 "hlds_out_mode.m"
          {
#line 965 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_88_88, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_90_90);
          }
#line 966 "hlds_out_mode.m"
          {
#line 966 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_94_94, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_143));
#line 966 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 966 "hlds_out_mode.m"
          }
#line 966 "hlds_out_mode.m"
          {
#line 966 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_91_91, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA_142));
#line 966 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_91_91, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_94_94));
#line 966 "hlds_out_mode.m"
          }
#line 966 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_92_92 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 966 "hlds_out_mode.m"
          {
#line 966 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__V_91_91, hlds__hlds_out__hlds_out_mode__V_92_92, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_90_90, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93);
          }
#line 968 "hlds_out_mode.m"
          {
#line 968 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97);
          }
#line 969 "hlds_out_mode.m"
          {
#line 969 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 969 "hlds_out_mode.m"
            return;
          }
#line 961 "hlds_out_mode.m"
        }
#line 939 "hlds_out_mode.m"
      else
#line 939 "hlds_out_mode.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 0))))
#line 925 "hlds_out_mode.m"
          {
#line 925 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)));
#line 925 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));

#line 930 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Args_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "hlds_out_mode.m"
              {
#line 927 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_138_138;

#line 928 "hlds_out_mode.m"
                {
#line 928 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Name_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_138_138);
                }
#line 929 "hlds_out_mode.m"
                {
#line 929 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_138_138, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 929 "hlds_out_mode.m"
                  return;
                }
#line 927 "hlds_out_mode.m"
              }
#line 930 "hlds_out_mode.m"
            else
#line 931 "hlds_out_mode.m"
              {
#line 931 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129;
#line 931 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131;
#line 931 "hlds_out_mode.m"
                MR_Integer hlds__hlds_out__hlds_out_mode__V_132_132;
#line 931 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133;
#line 931 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_135_135;

#line 932 "hlds_out_mode.m"
                {
#line 932 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Name_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129);
                }
#line 933 "hlds_out_mode.m"
                {
#line 933 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131);
                }
#line 934 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_132_132 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 934 "hlds_out_mode.m"
                {
#line 934 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Args_17, hlds__hlds_out__hlds_out_mode__V_132_132, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133);
                }
#line 936 "hlds_out_mode.m"
                {
#line 936 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_135_135);
                }
#line 937 "hlds_out_mode.m"
                {
#line 937 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_135_135, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 937 "hlds_out_mode.m"
                  return;
                }
#line 931 "hlds_out_mode.m"
              }
#line 925 "hlds_out_mode.m"
          }
#line 939 "hlds_out_mode.m"
        else
#line 939 "hlds_out_mode.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 982 "hlds_out_mode.m"
            {
#line 982 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56;
#line 982 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57;
#line 982 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_58_58;
#line 982 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_60_60;
#line 982 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_62_62;
#line 982 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_64_64;
#line 982 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65;
#line 982 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_67_67;
#line 982 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 982 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__IsLive_148 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 982 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Real_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 982 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);

#line 983 "hlds_out_mode.m"
              {
#line 983 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044any(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56);
              }
#line 984 "hlds_out_mode.m"
              {
#line 984 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__IsLive_148, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57);
              }
#line 985 "hlds_out_mode.m"
              {
#line 985 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Real_149, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_58_58);
              }
#line 986 "hlds_out_mode.m"
              {
#line 986 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Uniq_150, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_58_58, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_60_60);
              }
#line 987 "hlds_out_mode.m"
              {
#line 987 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_60_60, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_62_62);
              }
#line 988 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_64_64 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 988 "hlds_out_mode.m"
              {
#line 988 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__SubInstName_147, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_64_64, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_62_62, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65);
              }
#line 990 "hlds_out_mode.m"
              {
#line 990 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_67_67);
              }
#line 991 "hlds_out_mode.m"
              {
#line 991 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_67_67, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 991 "hlds_out_mode.m"
                return;
              }
#line 982 "hlds_out_mode.m"
            }
#line 939 "hlds_out_mode.m"
          else
#line 939 "hlds_out_mode.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 971 "hlds_out_mode.m"
              {
#line 971 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Uniq_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 971 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_71_71;
#line 971 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72;
#line 971 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_73_73;
#line 971 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_75_75;
#line 971 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_77_77;
#line 971 "hlds_out_mode.m"
                MR_Integer hlds__hlds_out__hlds_out_mode__V_79_79;
#line 971 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80;
#line 971 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_82_82;
#line 971 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 971 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__IsLive_145 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 971 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Real_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 972 "hlds_out_mode.m"
                {
#line 972 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044ground(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_71_71);
                }
#line 973 "hlds_out_mode.m"
                {
#line 973 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__IsLive_145, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_71_71, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72);
                }
#line 974 "hlds_out_mode.m"
                {
#line 974 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Real_146, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_73_73);
                }
#line 975 "hlds_out_mode.m"
                {
#line 975 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Uniq_25, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_73_73, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_75_75);
                }
#line 976 "hlds_out_mode.m"
                {
#line 976 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_75_75, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_77_77);
                }
#line 977 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_79_79 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 977 "hlds_out_mode.m"
                {
#line 977 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__SubInstName_144, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_79_79, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_77_77, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80);
                }
#line 979 "hlds_out_mode.m"
                {
#line 979 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_82_82);
                }
#line 980 "hlds_out_mode.m"
                {
#line 980 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_82_82, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 980 "hlds_out_mode.m"
                  return;
                }
#line 971 "hlds_out_mode.m"
              }
#line 939 "hlds_out_mode.m"
            else
#line 939 "hlds_out_mode.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 954 "hlds_out_mode.m"
                {
#line 954 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_101_101;
#line 954 "hlds_out_mode.m"
                  MR_Integer hlds__hlds_out__hlds_out_mode__V_103_103;
#line 954 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104;
#line 954 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_106_106;
#line 954 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));

#line 955 "hlds_out_mode.m"
                  {
#line 955 "hlds_out_mode.m"
                    parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044mostly_uniq_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_101_101);
                  }
#line 956 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_103_103 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 956 "hlds_out_mode.m"
                  {
#line 956 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__SubInstName_141, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_103_103, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_101_101, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104);
                  }
#line 958 "hlds_out_mode.m"
                  {
#line 958 "hlds_out_mode.m"
                    parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_106_106);
                  }
#line 959 "hlds_out_mode.m"
                  {
#line 959 "hlds_out_mode.m"
                    parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_106_106, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 959 "hlds_out_mode.m"
                    return;
                  }
#line 954 "hlds_out_mode.m"
                }
#line 939 "hlds_out_mode.m"
              else
#line 939 "hlds_out_mode.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 947 "hlds_out_mode.m"
                  {
#line 947 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 947 "hlds_out_mode.m"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_110_110;
#line 947 "hlds_out_mode.m"
                    MR_Integer hlds__hlds_out__hlds_out_mode__V_112_112;
#line 947 "hlds_out_mode.m"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_113_113;
#line 947 "hlds_out_mode.m"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_115_115;

#line 948 "hlds_out_mode.m"
                    {
#line 948 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044shared_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_110_110);
                    }
#line 949 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_112_112 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 949 "hlds_out_mode.m"
                    {
#line 949 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__SubInstName_22, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_112_112, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_110_110, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_113_113);
                    }
#line 951 "hlds_out_mode.m"
                    {
#line 951 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_113_113, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_115_115);
                    }
#line 952 "hlds_out_mode.m"
                    {
#line 952 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_115_115, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 952 "hlds_out_mode.m"
                      return;
                    }
#line 947 "hlds_out_mode.m"
                  }
#line 939 "hlds_out_mode.m"
                else
#line 939 "hlds_out_mode.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 993 "hlds_out_mode.m"
                    {
#line 993 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Uniqueness_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 993 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)));
#line 993 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__TypeVarSet_28;
#line 993 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_46_46;
#line 993 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48;
#line 993 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
#line 993 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52;

#line 994 "hlds_out_mode.m"
                      {
#line 994 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044typed_ground(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_46_46);
                      }
#line 995 "hlds_out_mode.m"
                      {
#line 995 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Uniqueness_26, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_46_46, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48);
                      }
#line 996 "hlds_out_mode.m"
                      {
#line 996 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ", ", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
                      }
#line 997 "hlds_out_mode.m"
                      {
#line 997 "hlds_out_mode.m"
                        mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_mode__TypeVarSet_28);
                      }
#line 998 "hlds_out_mode.m"
                      {
#line 998 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__TypeVarSet_28, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Type_27, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52);
                      }
#line 999 "hlds_out_mode.m"
                      {
#line 999 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 999 "hlds_out_mode.m"
                        return;
                      }
#line 993 "hlds_out_mode.m"
                    }
#line 939 "hlds_out_mode.m"
                  else
#line 1001 "hlds_out_mode.m"
                    {
#line 1001 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;
#line 1001 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35;
#line 1001 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37;
#line 1001 "hlds_out_mode.m"
                      MR_Integer hlds__hlds_out__hlds_out_mode__V_39_39;
#line 1001 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40;
#line 1001 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42;
#line 1001 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)));
#line 1001 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Type_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 1001 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__TypeVarSet_153;

#line 1002 "hlds_out_mode.m"
                      {
#line 1002 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044typed_inst(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
                      }
#line 1003 "hlds_out_mode.m"
                      {
#line 1003 "hlds_out_mode.m"
                        mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_mode__TypeVarSet_153);
                      }
#line 1004 "hlds_out_mode.m"
                      {
#line 1004 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__TypeVarSet_153, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Type_152, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35);
                      }
#line 1005 "hlds_out_mode.m"
                      {
#line 1005 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37);
                      }
#line 1006 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_39_39 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 1006 "hlds_out_mode.m"
                      {
#line 1006 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__SubInstName_151, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_39_39, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
                      }
#line 1008 "hlds_out_mode.m"
                      {
#line 1008 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42);
                      }
#line 1009 "hlds_out_mode.m"
                      {
#line 1009 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1009 "hlds_out_mode.m"
                        return;
                      }
#line 1001 "hlds_out_mode.m"
                    }
#line 917 "hlds_out_mode.m"
  }
#line 912 "hlds_out_mode.m"
}

#line 899 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
#line 899 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_1,
#line 899 "hlds_out_mode.m"
  MR_Integer * hlds__hlds_out__hlds_out_mode__InstAddr_2)
#line 899 "hlds_out_mode.m"
{
#line 901 "hlds_out_mode.m"
  {
#line 901 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 904 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__Inst_1 ;
		{
#line 904 "hlds_out_mode.m"

    InstAddr = Inst;

#line 3435 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 *hlds__hlds_out__hlds_out_mode__InstAddr_2  = InstAddr;
#line 904 "hlds_out_mode.m"
}
#line 901 "hlds_out_mode.m"
  }
#line 899 "hlds_out_mode.m"
}

#line 864 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
#line 864 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 864 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 864 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent0_2,
#line 864 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 864 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 864 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 864 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 864 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7)
#line 864 "hlds_out_mode.m"
{
#line 868 "hlds_out_mode.m"
  while (MR_TRUE)
#line 868 "hlds_out_mode.m"
    {
#line 868 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 868 "hlds_out_mode.m"
      {
#line 868 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 868 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6;
#line 868 "hlds_out_mode.m"
        else
#line 870 "hlds_out_mode.m"
          {
#line 870 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 870 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 870 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_15, (MR_Integer) 0)));
#line 870 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_15, (MR_Integer) 1)));
#line 870 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__Indent1_24 = (hlds__hlds_out__hlds_out_mode__Indent0_2 + (MR_Integer) 1);
#line 870 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__Indent2_25 = (hlds__hlds_out__hlds_out_mode__Indent1_24 + (MR_Integer) 1);
#line 870 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;

#line 879 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Args_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 875 "hlds_out_mode.m"
              {
#line 875 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43;
#line 875 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45;
#line 3510 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 876 "hlds_out_mode.m"
                {
#line 876 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43);
                }
#line 877 "hlds_out_mode.m"
                {
#line 877 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__ConsId_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45);
                }
#line 3523 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3525 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3527 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
                }
#line 875 "hlds_out_mode.m"
              }
#line 879 "hlds_out_mode.m"
            else
#line 880 "hlds_out_mode.m"
              {
#line 880 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
#line 880 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36;
#line 880 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38;
#line 880 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;
#line 880 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40;
#line 880 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Inst_60;
#line 880 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Insts_61;
#line 880 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_69;
#line 3552 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3554 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 881 "hlds_out_mode.m"
                {
#line 881 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34);
                }
#line 882 "hlds_out_mode.m"
                {
#line 882 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__ConsId_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36);
                }
#line 3567 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3569 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3571 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "(\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
                }
#line 747 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Inst_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Args_23, (MR_Integer) 0)));
#line 747 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Insts_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Args_23, (MR_Integer) 1)));
#line 749 "hlds_out_mode.m"
                {
#line 749 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Inst_60, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_69);
                }
#line 751 "hlds_out_mode.m"
                {
#line 751 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Insts_61, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_69, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
                }
#line 886 "hlds_out_mode.m"
                {
#line 886 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
                }
#line 3593 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3595 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3597 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) ")\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
                }
#line 880 "hlds_out_mode.m"
              }
#line 891 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__BoundInsts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 890 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;
#line 891 "hlds_out_mode.m"
            else
#line 892 "hlds_out_mode.m"
              {
#line 892 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48;
#line 892 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
#line 3614 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 893 "hlds_out_mode.m"
                {
#line 893 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent0_2, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48);
                }
#line 3622 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3624 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3626 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_3(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) ";\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
                }
#line 895 "hlds_out_mode.m"
                /* direct tailcall eliminated */
#line 895 "hlds_out_mode.m"
                {
#line 895 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__BoundInsts_16;
#line 895 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;

#line 895 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6;
#line 895 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 895 "hlds_out_mode.m"
                }
#line 895 "hlds_out_mode.m"
                continue;
#line 892 "hlds_out_mode.m"
              }
#line 870 "hlds_out_mode.m"
          }
#line 868 "hlds_out_mode.m"
      }
#line 868 "hlds_out_mode.m"
      break;
#line 868 "hlds_out_mode.m"
    }
#line 864 "hlds_out_mode.m"
}

#line 765 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(
#line 765 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103,
#line 765 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
#line 765 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 765 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 765 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 765 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 765 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_30,
#line 765 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31)
#line 765 "hlds_out_mode.m"
{
#line 769 "hlds_out_mode.m"
  {
#line 769 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 769 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 769 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;

#line 770 "hlds_out_mode.m"
    {
#line 770 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
    }
#line 773 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__InclAddr_11 == (MR_Integer) 1))
#line 774 "hlds_out_mode.m"
      {
#line 774 "hlds_out_mode.m"
        MR_Integer hlds__hlds_out__hlds_out_mode__InstAddr_14;
#line 774 "hlds_out_mode.m"
        MR_String hlds__hlds_out__hlds_out_mode__InstAddrStr_15;
#line 774 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 774 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_35_35;
#line 774 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37;

#line 775 "hlds_out_mode.m"
        {
#line 775 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(hlds__hlds_out__hlds_out_mode__Inst_8, &hlds__hlds_out__hlds_out_mode__InstAddr_14);
        }
#line 776 "hlds_out_mode.m"
        {
#line 776 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 776 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_35_35, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstAddr_14));
#line 776 "hlds_out_mode.m"
        }
#line 776 "hlds_out_mode.m"
        {
#line 776 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_35_35));
#line 776 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 776 "hlds_out_mode.m"
        }
#line 776 "hlds_out_mode.m"
        {
#line 776 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__InstAddrStr_15 = mercury__string__format_2_f_0((MR_String) "%x", hlds__hlds_out__hlds_out_mode__V_34_34);
        }
#line 777 "hlds_out_mode.m"
        {
#line 777 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__InstAddrStr_15, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37);
        }
#line 778 "hlds_out_mode.m"
        {
#line 778 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) ": ", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
        }
#line 774 "hlds_out_mode.m"
      }
#line 773 "hlds_out_mode.m"
    else
#line 772 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 791 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__Inst_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 792 "hlds_out_mode.m"
      {
#line 793 "hlds_out_mode.m"
        {
#line 793 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "free\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 793 "hlds_out_mode.m"
          return;
        }
#line 792 "hlds_out_mode.m"
      }
#line 791 "hlds_out_mode.m"
    else
#line 791 "hlds_out_mode.m"
      if ((hlds__hlds_out__hlds_out_mode__Inst_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 860 "hlds_out_mode.m"
        {
#line 861 "hlds_out_mode.m"
          {
#line 861 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "not_reached\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 861 "hlds_out_mode.m"
            return;
          }
#line 860 "hlds_out_mode.m"
        }
#line 791 "hlds_out_mode.m"
      else
#line 791 "hlds_out_mode.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 2))))
#line 781 "hlds_out_mode.m"
          {
#line 781 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Uniq_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)));
#line 781 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 781 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_94_94;

#line 786 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 788 "hlds_out_mode.m"
              {
#line 788 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_any_uniqueness_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__Uniq_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_94_94);
              }
#line 786 "hlds_out_mode.m"
            else
#line 783 "hlds_out_mode.m"
              {
#line 783 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_18 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_17), (MR_Integer) 1);

#line 784 "hlds_out_mode.m"
                {
#line 784 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_any_pred_inst_info_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__Uniq_16, hlds__hlds_out__hlds_out_mode__PredInstInfo_18, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_94_94);
                }
#line 783 "hlds_out_mode.m"
              }
#line 790 "hlds_out_mode.m"
            {
#line 790 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_94_94, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 790 "hlds_out_mode.m"
              return;
            }
#line 781 "hlds_out_mode.m"
          }
#line 791 "hlds_out_mode.m"
        else
#line 791 "hlds_out_mode.m"
          if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 1))))
#line 795 "hlds_out_mode.m"
            {
#line 796 "hlds_out_mode.m"
              {
#line 796 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "free(with some type)\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 796 "hlds_out_mode.m"
                return;
              }
#line 795 "hlds_out_mode.m"
            }
#line 791 "hlds_out_mode.m"
          else
#line 791 "hlds_out_mode.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 852 "hlds_out_mode.m"
              {
#line 852 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Name_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 852 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));
#line 852 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_44_44;

#line 853 "hlds_out_mode.m"
                {
#line 853 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 853 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_44_44, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_27));
#line 853 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_44_44, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Args_28));
#line 853 "hlds_out_mode.m"
                }
#line 853 "hlds_out_mode.m"
                {
#line 853 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__V_44_44, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 853 "hlds_out_mode.m"
                  return;
                }
#line 852 "hlds_out_mode.m"
              }
#line 791 "hlds_out_mode.m"
            else
#line 791 "hlds_out_mode.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 798 "hlds_out_mode.m"
                {
#line 798 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__InstResults_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));
#line 798 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 3)));
#line 798 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61;
#line 798 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63;
#line 798 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72;
#line 798 "hlds_out_mode.m"
                  MR_Integer hlds__hlds_out__hlds_out_mode__V_78_78;
#line 798 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85;
#line 798 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86;
#line 798 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Uniq_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));

#line 799 "hlds_out_mode.m"
                  {
#line 799 "hlds_out_mode.m"
                    parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__Uniq_97, (MR_String) "bound", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61);
                  }
#line 800 "hlds_out_mode.m"
                  {
#line 800 "hlds_out_mode.m"
                    parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63);
                  }
#line 803 "hlds_out_mode.m"
                  if ((hlds__hlds_out__hlds_out_mode__Lang_10 == (MR_Integer) 1))
#line 804 "hlds_out_mode.m"
                    {
#line 804 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_104_104;
#line 804 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__InstResultsTerm_22;
#line 804 "hlds_out_mode.m"
                      MR_String hlds__hlds_out__hlds_out_mode__InstResultsStr_23;
#line 804 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_64_64;
#line 804 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_65_65;
#line 804 "hlds_out_mode.m"
                      MR_Integer hlds__hlds_out__hlds_out_mode__V_67_67;
#line 804 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68;
#line 804 "hlds_out_mode.m"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70;

#line 806 "hlds_out_mode.m"
                      {
#line 806 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_64_64 = mercury__term__context_init_0_f_0();
                      }
#line 806 "hlds_out_mode.m"
                      {
#line 806 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__InstResultsTerm_22 = hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__V_64_64, hlds__hlds_out__hlds_out_mode__InstResults_20);
                      }
#line 3937 "hlds.hlds_out.hlds_out_mode.c"
                      hlds__hlds_out__hlds_out_mode__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 808 "hlds_out_mode.m"
                      {
#line 808 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_65_65 = mercury__varset__init_0_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_104_104);
                      }
#line 808 "hlds_out_mode.m"
                      {
#line 808 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__InstResultsStr_23 = parse_tree__mercury_to_mercury__mercury_term_to_string_3_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_104_104, hlds__hlds_out__hlds_out_mode__V_65_65, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__InstResultsTerm_22);
                      }
#line 809 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_67_67 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 809 "hlds_out_mode.m"
                      {
#line 809 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__V_67_67, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68);
                      }
#line 810 "hlds_out_mode.m"
                      {
#line 810 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__InstResultsStr_23, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70);
                      }
#line 811 "hlds_out_mode.m"
                      {
#line 811 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72);
                      }
#line 804 "hlds_out_mode.m"
                    }
#line 803 "hlds_out_mode.m"
                  else
#line 802 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63;
#line 820 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_78_78 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 3974 "hlds.hlds_out.hlds_out_mode.c"
                  if ((hlds__hlds_out__hlds_out_mode__Lang_10 == (MR_Integer) 1))
#line 3976 "hlds.hlds_out.hlds_out_mode.c"
                    {
#line 3978 "hlds.hlds_out.hlds_out_mode.c"
                      MR_Integer hlds__hlds_out__hlds_out_mode__V_73_73 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 3980 "hlds.hlds_out.hlds_out_mode.c"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74;
#line 3982 "hlds.hlds_out.hlds_out_mode.c"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_77_77;
#line 3984 "hlds.hlds_out.hlds_out_mode.c"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_79_79;
#line 3986 "hlds.hlds_out.hlds_out_mode.c"
                      MR_Integer hlds__hlds_out__hlds_out_mode__V_81_81;
#line 3988 "hlds.hlds_out.hlds_out_mode.c"
                      MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_82_82;

#line 817 "hlds_out_mode.m"
                      {
#line 817 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__V_73_73, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74);
                      }
#line 818 "hlds_out_mode.m"
                      {
#line 818 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "[\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_77_77);
                      }
#line 820 "hlds_out_mode.m"
                      {
#line 820 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__BoundInsts_21, hlds__hlds_out__hlds_out_mode__V_78_78, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_77_77, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_79_79);
                      }
#line 826 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_81_81 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 826 "hlds_out_mode.m"
                      {
#line 826 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__V_81_81, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_79_79, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_82_82);
                      }
#line 827 "hlds_out_mode.m"
                      {
#line 827 "hlds_out_mode.m"
                        parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "]\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_82_82, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85);
                      }
#line 4018 "hlds.hlds_out.hlds_out_mode.c"
                    }
#line 4020 "hlds.hlds_out.hlds_out_mode.c"
                  else
#line 820 "hlds_out_mode.m"
                    {
#line 820 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__BoundInsts_21, hlds__hlds_out__hlds_out_mode__V_78_78, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85);
                    }
#line 829 "hlds_out_mode.m"
                  {
#line 829 "hlds_out_mode.m"
                    parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86);
                  }
#line 830 "hlds_out_mode.m"
                  {
#line 830 "hlds_out_mode.m"
                    parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_86_86, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 830 "hlds_out_mode.m"
                    return;
                  }
#line 798 "hlds_out_mode.m"
                }
#line 791 "hlds_out_mode.m"
              else
#line 791 "hlds_out_mode.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 847 "hlds_out_mode.m"
                  {
#line 847 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 847 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__ConstrainedInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));
#line 847 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_47_47 = (MR_Word) hlds__hlds_out__hlds_out_mode__InstVarSet_12;
#line 847 "hlds_out_mode.m"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48;

#line 848 "hlds_out_mode.m"
                    {
#line 848 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__mercury_format_constrained_inst_vars_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6], hlds__hlds_out__hlds_out_mode__Vars_25, hlds__hlds_out__hlds_out_mode__ConstrainedInst_26, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_47_47)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48);
                    }
#line 850 "hlds_out_mode.m"
                    {
#line 850 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 850 "hlds_out_mode.m"
                      return;
                    }
#line 847 "hlds_out_mode.m"
                  }
#line 791 "hlds_out_mode.m"
                else
#line 791 "hlds_out_mode.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 856 "hlds_out_mode.m"
                    {
#line 856 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__InstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));

#line 857 "hlds_out_mode.m"
                      {
#line 857 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__InstName_29, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 857 "hlds_out_mode.m"
                        return;
                      }
#line 856 "hlds_out_mode.m"
                    }
#line 791 "hlds_out_mode.m"
                  else
#line 791 "hlds_out_mode.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 832 "hlds_out_mode.m"
                      {
#line 832 "hlds_out_mode.m"
                        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57;
#line 832 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__Uniq_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 832 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));

#line 837 "hlds_out_mode.m"
                        if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 838 "hlds_out_mode.m"
                          {
#line 839 "hlds_out_mode.m"
                            {
#line 839 "hlds_out_mode.m"
                              parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__Uniq_100, (MR_String) "ground", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57);
                            }
#line 838 "hlds_out_mode.m"
                          }
#line 837 "hlds_out_mode.m"
                        else
#line 834 "hlds_out_mode.m"
                          {
#line 834 "hlds_out_mode.m"
                            MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_98 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_101), (MR_Integer) 1);

#line 835 "hlds_out_mode.m"
                            {
#line 835 "hlds_out_mode.m"
                              parse_tree__mercury_to_mercury__mercury_format_ground_pred_inst_info_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__Uniq_100, hlds__hlds_out__hlds_out_mode__PredInstInfo_98, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57);
                            }
#line 834 "hlds_out_mode.m"
                          }
#line 841 "hlds_out_mode.m"
                        {
#line 841 "hlds_out_mode.m"
                          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_57_57, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 841 "hlds_out_mode.m"
                          return;
                        }
#line 832 "hlds_out_mode.m"
                      }
#line 791 "hlds_out_mode.m"
                    else
#line 843 "hlds_out_mode.m"
                      {
#line 843 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 843 "hlds_out_mode.m"
                        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52;

#line 844 "hlds_out_mode.m"
                        {
#line 844 "hlds_out_mode.m"
                          parse_tree__mercury_to_mercury__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, hlds__hlds_out__hlds_out_mode__InstVarSet_12, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Var_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52);
                        }
#line 845 "hlds_out_mode.m"
                        {
#line 845 "hlds_out_mode.m"
                          parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_103, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 845 "hlds_out_mode.m"
                          return;
                        }
#line 843 "hlds_out_mode.m"
                      }
#line 769 "hlds_out_mode.m"
  }
#line 765 "hlds_out_mode.m"
}

#line 742 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
#line 742 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_26,
#line 742 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 742 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_2,
#line 742 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 742 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 742 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 742 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 742 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7)
#line 742 "hlds_out_mode.m"
{
#line 746 "hlds_out_mode.m"
  while (MR_TRUE)
#line 746 "hlds_out_mode.m"
    {
#line 746 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 746 "hlds_out_mode.m"
      {
#line 746 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 746 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 746 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6;
#line 746 "hlds_out_mode.m"
        else
#line 748 "hlds_out_mode.m"
          {
#line 748 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 748 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Insts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 748 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_24;

#line 749 "hlds_out_mode.m"
            {
#line 749 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_26, hlds__hlds_out__hlds_out_mode__Inst_15, hlds__hlds_out__hlds_out_mode__Indent_2, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_24);
            }
#line 751 "hlds_out_mode.m"
            /* direct tailcall eliminated */
#line 751 "hlds_out_mode.m"
            {
#line 751 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Insts_16;
#line 751 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_24;

#line 751 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6;
#line 751 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 751 "hlds_out_mode.m"
            }
#line 751 "hlds_out_mode.m"
            continue;
#line 748 "hlds_out_mode.m"
          }
#line 746 "hlds_out_mode.m"
      }
#line 746 "hlds_out_mode.m"
      break;
#line 746 "hlds_out_mode.m"
    }
#line 742 "hlds_out_mode.m"
}

#line 677 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(
#line 677 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 677 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_8,
#line 677 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 677 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 677 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 677 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 677 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22,
#line 677 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23)
#line 677 "hlds_out_mode.m"
{
#line 682 "hlds_out_mode.m"
  {
#line 682 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 682 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_14;
#line 682 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_15;
#line 682 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_16;
#line 682 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_17;
#line 682 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstA1Addr_18;
#line 682 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstA2Addr_19;
#line 682 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstB1Addr_20;
#line 682 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstB2Addr_21;
#line 682 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_8, (MR_Integer) 0)));
#line 682 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_8, (MR_Integer) 1)));
#line 682 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26;
#line 682 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28;
#line 682 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29;
#line 682 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30;
#line 682 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 682 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36;
#line 682 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38;
#line 682 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44;
#line 4304 "hlds.hlds_out.hlds_out_mode.c"
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 683 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, (MR_Integer) 0)));
#line 683 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, (MR_Integer) 1)));
#line 683 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 0)));
#line 683 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 1)));
#line 904 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstA1_14 ;
		{
#line 904 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4328 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstA1Addr_18  = InstAddr;
#line 904 "hlds_out_mode.m"
}
#line 904 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstA2_16 ;
		{
#line 904 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4348 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstA2Addr_19  = InstAddr;
#line 904 "hlds_out_mode.m"
}
#line 904 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstB1_15 ;
		{
#line 904 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4368 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstB1Addr_20  = InstAddr;
#line 904 "hlds_out_mode.m"
}
#line 904 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstB2_17 ;
		{
#line 904 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4388 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstB2Addr_21  = InstAddr;
#line 904 "hlds_out_mode.m"
}
#line 689 "hlds_out_mode.m"
    {
#line 689 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26);
    }
#line 4400 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4402 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 4404 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "old lhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28);
    }
#line 691 "hlds_out_mode.m"
    {
#line 691 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstA1_14, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29);
    }
#line 694 "hlds_out_mode.m"
    {
#line 694 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30);
    }
#line 695 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB1Addr_20 == hlds__hlds_out__hlds_out_mode__InstA1Addr_18);
#line 698 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 697 "hlds_out_mode.m"
      {
#line 4423 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4426 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4428 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "old rhs inst: same as old lhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
        }
#line 697 "hlds_out_mode.m"
      }
#line 698 "hlds_out_mode.m"
    else
#line 699 "hlds_out_mode.m"
      {
#line 699 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
#line 4439 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4442 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4444 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "old rhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34);
        }
#line 700 "hlds_out_mode.m"
        {
#line 700 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstB1_15, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
        }
#line 699 "hlds_out_mode.m"
      }
#line 704 "hlds_out_mode.m"
    {
#line 704 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36);
    }
#line 705 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstA2Addr_19 == hlds__hlds_out__hlds_out_mode__InstA1Addr_18);
#line 708 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 707 "hlds_out_mode.m"
      {
#line 4465 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4468 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4470 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_3(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new lhs inst: unchanged\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
        }
#line 707 "hlds_out_mode.m"
      }
#line 708 "hlds_out_mode.m"
    else
#line 711 "hlds_out_mode.m"
      {
#line 708 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstA2Addr_19 == hlds__hlds_out__hlds_out_mode__InstB1Addr_20);
#line 711 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 710 "hlds_out_mode.m"
          {
#line 4485 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4488 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4490 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_4(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new lhs inst: changed to old rhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
            }
#line 710 "hlds_out_mode.m"
          }
#line 711 "hlds_out_mode.m"
        else
#line 712 "hlds_out_mode.m"
          {
#line 712 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42;
#line 4501 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4504 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4506 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_5(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new lhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42);
            }
#line 713 "hlds_out_mode.m"
            {
#line 713 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstA2_16, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
            }
#line 712 "hlds_out_mode.m"
          }
#line 711 "hlds_out_mode.m"
      }
#line 717 "hlds_out_mode.m"
    {
#line 717 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44);
    }
#line 718 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB2Addr_21 == hlds__hlds_out__hlds_out_mode__InstB1Addr_20);
#line 721 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 720 "hlds_out_mode.m"
      {
#line 4529 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4532 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4534 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_6(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new rhs inst: unchanged\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
#line 4536 "hlds.hlds_out.hlds_out_mode.c"
          return;
        }
#line 720 "hlds_out_mode.m"
      }
#line 721 "hlds_out_mode.m"
    else
#line 724 "hlds_out_mode.m"
      {
#line 721 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB2Addr_21 == hlds__hlds_out__hlds_out_mode__InstA2Addr_19);
#line 724 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 723 "hlds_out_mode.m"
          {
#line 4551 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4554 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4556 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_7(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new rhs inst: changed to new lhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
#line 4558 "hlds.hlds_out.hlds_out_mode.c"
              return;
            }
#line 723 "hlds_out_mode.m"
          }
#line 724 "hlds_out_mode.m"
        else
#line 725 "hlds_out_mode.m"
          {
#line 725 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
#line 4569 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4572 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4574 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_8(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new rhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
            }
#line 726 "hlds_out_mode.m"
            {
#line 726 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstB2_17, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
#line 726 "hlds_out_mode.m"
              return;
            }
#line 725 "hlds_out_mode.m"
          }
#line 724 "hlds_out_mode.m"
      }
#line 682 "hlds_out_mode.m"
  }
#line 677 "hlds_out_mode.m"
}

#line 649 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0(
#line 649 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37,
#line 649 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 649 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum_2,
#line 649 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
#line 649 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 649 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_5,
#line 649 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6,
#line 649 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7,
#line 649 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8)
#line 649 "hlds_out_mode.m"
{
#line 653 "hlds_out_mode.m"
  while (MR_TRUE)
#line 653 "hlds_out_mode.m"
    {
#line 653 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 653 "hlds_out_mode.m"
      {
#line 653 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 653 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 653 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7;
#line 653 "hlds_out_mode.m"
        else
#line 655 "hlds_out_mode.m"
          {
#line 655 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__UniMode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 655 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__UniModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 655 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27;
#line 655 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29;
#line 655 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30;
#line 655 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 655 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;
#line 655 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__V_34_34;
#line 4651 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 4653 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 4655 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 656 "hlds_out_mode.m"
            {
#line 656 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, hlds__hlds_out__hlds_out_mode__Indent_3, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27);
            }
#line 4663 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4665 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4667 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) ((MR_String) "argument ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29);
            }
#line 4670 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 8)));
#line 4672 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4674 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgNum_2)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30);
            }
#line 4677 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4679 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4681 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) ((MR_String) ":\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
            }
#line 660 "hlds_out_mode.m"
            {
#line 660 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, hlds__hlds_out__hlds_out_mode__UniMode_17, hlds__hlds_out__hlds_out_mode__Indent_3, hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__InclAddr_5, hlds__hlds_out__hlds_out_mode__InstVarSet_6, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
            }
#line 662 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_34_34 = (hlds__hlds_out__hlds_out_mode__ArgNum_2 + (MR_Integer) 1);
#line 662 "hlds_out_mode.m"
            /* direct tailcall eliminated */
#line 662 "hlds_out_mode.m"
            {
#line 662 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__UniModes_18;
#line 662 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum__tmp_copy_2 = hlds__hlds_out__hlds_out_mode__V_34_34;
#line 662 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;

#line 662 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_7;
#line 662 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__ArgNum_2 = hlds__hlds_out__hlds_out_mode__ArgNum__tmp_copy_2;
#line 662 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 662 "hlds_out_mode.m"
            }
#line 662 "hlds_out_mode.m"
            continue;
#line 655 "hlds_out_mode.m"
          }
#line 653 "hlds_out_mode.m"
      }
#line 653 "hlds_out_mode.m"
      break;
#line 653 "hlds_out_mode.m"
    }
#line 649 "hlds_out_mode.m"
}

#line 589 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3(
#line 589 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
#line 589 "hlds_out_mode.m"
{
#line 589 "hlds_out_mode.m"
  {
#line 589 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 589 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

#line 589 "hlds_out_mode.m"
    {
#line 589 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__589__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
#line 589 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 589 "hlds_out_mode.m"
  }
#line 589 "hlds_out_mode.m"
}

#line 581 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2(
#line 581 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
#line 581 "hlds_out_mode.m"
{
#line 581 "hlds_out_mode.m"
  {
#line 581 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 581 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

#line 581 "hlds_out_mode.m"
    {
#line 581 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__581__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
#line 581 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 581 "hlds_out_mode.m"
  }
#line 581 "hlds_out_mode.m"
}

#line 597 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1(
#line 597 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
#line 597 "hlds_out_mode.m"
{
#line 597 "hlds_out_mode.m"
  {
#line 597 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 597 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

#line 597 "hlds_out_mode.m"
    {
#line 597 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__597__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
#line 597 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 597 "hlds_out_mode.m"
  }
#line 597 "hlds_out_mode.m"
}

#line 518 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(
#line 518 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ConsId_4,
#line 518 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 518 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__Term_6)
#line 518 "hlds_out_mode.m"
{
#line 523 "hlds_out_mode.m"
  {
#line 523 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 523 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__ConsId_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 575 "hlds_out_mode.m"
      {
#line 575 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Context_129;

#line 576 "hlds_out_mode.m"
        {
#line 576 "hlds_out_mode.m"
          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_129);
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[24])));
#line 578 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_129));
#line 578 "hlds_out_mode.m"
        }
#line 575 "hlds_out_mode.m"
      }
#line 523 "hlds_out_mode.m"
    else
#line 523 "hlds_out_mode.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 2))))
#line 606 "hlds_out_mode.m"
        {
#line 606 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Context_139;

#line 607 "hlds_out_mode.m"
          {
#line 607 "hlds_out_mode.m"
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_139);
          }
#line 609 "hlds_out_mode.m"
          {
#line 609 "hlds_out_mode.m"
            MR_Word base;
#line 609 "hlds_out_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 609 "hlds_out_mode.m"
            *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 609 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[25])));
#line 609 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_139));
#line 609 "hlds_out_mode.m"
          }
#line 606 "hlds_out_mode.m"
        }
#line 523 "hlds_out_mode.m"
      else
#line 523 "hlds_out_mode.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 1))))
#line 568 "hlds_out_mode.m"
          {
#line 568 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_25 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4), (MR_Integer) 1);
#line 568 "hlds_out_mode.m"
            MR_String hlds__hlds_out__hlds_out_mode__V_78_78;
#line 568 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_82_82;
#line 568 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Context_125;
#line 568 "hlds_out_mode.m"
            MR_String hlds__hlds_out__hlds_out_mode__FunctorName_126;
#line 568 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorName_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_25, (MR_Integer) 0)));
#line 568 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__Arity_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_25, (MR_Integer) 1)));
#line 568 "hlds_out_mode.m"
            MR_String hlds__hlds_out__hlds_out_mode__V_159_159;
#line 568 "hlds_out_mode.m"
            MR_String hlds__hlds_out__hlds_out_mode__V_161_161;
#line 568 "hlds_out_mode.m"
            MR_String hlds__hlds_out__hlds_out_mode__V_162_162;

#line 570 "hlds_out_mode.m"
            {
#line 570 "hlds_out_mode.m"
              mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_125);
            }
#line 572 "hlds_out_mode.m"
            {
#line 572 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_78_78 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorName_127);
            }
#line 4916 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4918 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__V_159_159 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__Arity_128);
            }
#line 4921 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4923 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__V_161_161 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_159_159);
            }
#line 4926 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4928 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__V_162_162 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_78_78, hlds__hlds_out__hlds_out_mode__V_161_161);
            }
#line 4931 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4933 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__FunctorName_126 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_cell_constructor for ", hlds__hlds_out__hlds_out_mode__V_162_162);
            }
#line 573 "hlds_out_mode.m"
            {
#line 573 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_82_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 573 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__V_82_82, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_126));
#line 573 "hlds_out_mode.m"
            }
#line 573 "hlds_out_mode.m"
            {
#line 573 "hlds_out_mode.m"
              MR_Word base;
#line 573 "hlds_out_mode.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 573 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 573 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_82_82));
#line 573 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_125));
#line 573 "hlds_out_mode.m"
            }
#line 568 "hlds_out_mode.m"
          }
#line 523 "hlds_out_mode.m"
        else
#line 523 "hlds_out_mode.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 563 "hlds_out_mode.m"
            {
#line 563 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_123;

#line 564 "hlds_out_mode.m"
              {
#line 564 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_123);
              }
#line 566 "hlds_out_mode.m"
              {
#line 566 "hlds_out_mode.m"
                MR_Word base;
#line 566 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 566 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 566 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[26])));
#line 566 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 566 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_123));
#line 566 "hlds_out_mode.m"
              }
#line 563 "hlds_out_mode.m"
            }
#line 523 "hlds_out_mode.m"
          else
#line 523 "hlds_out_mode.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 547 "hlds_out_mode.m"
              {
#line 547 "hlds_out_mode.m"
                MR_Char hlds__hlds_out__hlds_out_mode__Char_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 547 "hlds_out_mode.m"
                MR_String hlds__hlds_out__hlds_out_mode__V_100_100;
#line 547 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__SymName_117;

#line 548 "hlds_out_mode.m"
                {
#line 548 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_100_100 = mercury__string__from_char_1_f_0(hlds__hlds_out__hlds_out_mode__Char_17);
                }
#line 548 "hlds_out_mode.m"
                {
#line 548 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SymName_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 548 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SymName_117, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_100_100));
#line 548 "hlds_out_mode.m"
                }
#line 549 "hlds_out_mode.m"
                {
#line 549 "hlds_out_mode.m"
                  parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__SymName_117, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_mode__Term_6);
#line 549 "hlds_out_mode.m"
                  return;
                }
#line 547 "hlds_out_mode.m"
              }
#line 523 "hlds_out_mode.m"
            else
#line 523 "hlds_out_mode.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 530 "hlds_out_mode.m"
                {
#line 530 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Context_12;

#line 531 "hlds_out_mode.m"
                  {
#line 531 "hlds_out_mode.m"
                    mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_12);
                  }
#line 533 "hlds_out_mode.m"
                  {
#line 533 "hlds_out_mode.m"
                    MR_Word base;
#line 533 "hlds_out_mode.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 533 "hlds_out_mode.m"
                    *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 533 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[27])));
#line 533 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_12));
#line 533 "hlds_out_mode.m"
                  }
#line 530 "hlds_out_mode.m"
                }
#line 523 "hlds_out_mode.m"
              else
#line 523 "hlds_out_mode.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 523 "hlds_out_mode.m"
                  {
#line 523 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 523 "hlds_out_mode.m"
                    MR_Integer hlds__hlds_out__hlds_out_mode___Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
#line 523 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode___TypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 3)));

#line 524 "hlds_out_mode.m"
                    {
#line 524 "hlds_out_mode.m"
                      parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__SymName_7, hlds__hlds_out__hlds_out_mode__ArgTerms_5, hlds__hlds_out__hlds_out_mode__Term_6);
#line 524 "hlds_out_mode.m"
                      return;
                    }
#line 523 "hlds_out_mode.m"
                  }
#line 523 "hlds_out_mode.m"
                else
#line 523 "hlds_out_mode.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 616 "hlds_out_mode.m"
                    {
#line 616 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Context_143;

#line 617 "hlds_out_mode.m"
                      {
#line 617 "hlds_out_mode.m"
                        mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_143);
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
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[28])));
#line 619 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_143));
#line 619 "hlds_out_mode.m"
                      }
#line 616 "hlds_out_mode.m"
                    }
#line 523 "hlds_out_mode.m"
                  else
#line 523 "hlds_out_mode.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 539 "hlds_out_mode.m"
                      {
#line 539 "hlds_out_mode.m"
                        MR_Float hlds__hlds_out__hlds_out_mode__Float_15 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 539 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_104_104;
#line 539 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__Context_115;

#line 540 "hlds_out_mode.m"
                        {
#line 540 "hlds_out_mode.m"
                          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_115);
                        }
#line 541 "hlds_out_mode.m"
                        {
#line 541 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 541 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_104_104, 1) = MR_box_float(hlds__hlds_out__hlds_out_mode__Float_15);
#line 541 "hlds_out_mode.m"
                        }
#line 541 "hlds_out_mode.m"
                        {
#line 541 "hlds_out_mode.m"
                          MR_Word base;
#line 541 "hlds_out_mode.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 541 "hlds_out_mode.m"
                          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 541 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_104_104));
#line 541 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_115));
#line 541 "hlds_out_mode.m"
                        }
#line 539 "hlds_out_mode.m"
                      }
#line 523 "hlds_out_mode.m"
                    else
#line 523 "hlds_out_mode.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 596 "hlds_out_mode.m"
                        {
#line 596 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__SubConsId_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
#line 596 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__SubArg_30;
#line 596 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__NumArg_31;
#line 596 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__V_41_41;
#line 596 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__V_47_47;
#line 596 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__V_50_50;
#line 596 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__V_51_51;
#line 596 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__Context_136;
#line 596 "hlds_out_mode.m"
                          MR_Integer hlds__hlds_out__hlds_out_mode__TCIConstNum_138 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));

#line 597 "hlds_out_mode.m"
                          {
#line 597 "hlds_out_mode.m"
                            hlds__hlds_out__hlds_out_mode__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 597 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_5[0]));
#line 597 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1));
#line 597 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 597 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
#line 597 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "hlds_out_mode.m"
                          }
#line 597 "hlds_out_mode.m"
                          {
#line 597 "hlds_out_mode.m"
                            mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_41_41, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "ground_term_const arity != 0");
                          }
#line 599 "hlds_out_mode.m"
                          {
#line 599 "hlds_out_mode.m"
                            hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(hlds__hlds_out__hlds_out_mode__SubConsId_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__SubArg_30);
                          }
#line 600 "hlds_out_mode.m"
                          {
#line 600 "hlds_out_mode.m"
                            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_136);
                          }
#line 602 "hlds_out_mode.m"
                          {
#line 602 "hlds_out_mode.m"
                            hlds__hlds_out__hlds_out_mode__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 602 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TCIConstNum_138));
#line 602 "hlds_out_mode.m"
                          }
#line 602 "hlds_out_mode.m"
                          {
#line 602 "hlds_out_mode.m"
                            hlds__hlds_out__hlds_out_mode__NumArg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 602 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_47_47));
#line 602 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_136));
#line 602 "hlds_out_mode.m"
                          }
#line 603 "hlds_out_mode.m"
                          {
#line 603 "hlds_out_mode.m"
                            hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_51_51, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubArg_30));
#line 603 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "hlds_out_mode.m"
                          }
#line 603 "hlds_out_mode.m"
                          {
#line 603 "hlds_out_mode.m"
                            hlds__hlds_out__hlds_out_mode__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_50_50, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__NumArg_31));
#line 603 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_50_50, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_51_51));
#line 603 "hlds_out_mode.m"
                          }
#line 603 "hlds_out_mode.m"
                          {
#line 603 "hlds_out_mode.m"
                            MR_Word base;
#line 603 "hlds_out_mode.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 603 "hlds_out_mode.m"
                            *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 603 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[29])));
#line 603 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_50_50));
#line 603 "hlds_out_mode.m"
                            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_136));
#line 603 "hlds_out_mode.m"
                          }
#line 596 "hlds_out_mode.m"
                        }
#line 523 "hlds_out_mode.m"
                      else
#line 523 "hlds_out_mode.m"
                        if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 551 "hlds_out_mode.m"
                          {
#line 551 "hlds_out_mode.m"
                            MR_Word hlds__hlds_out__hlds_out_mode__V_98_98;
#line 551 "hlds_out_mode.m"
                            MR_Word hlds__hlds_out__hlds_out_mode__Context_118;
#line 551 "hlds_out_mode.m"
                            MR_String hlds__hlds_out__hlds_out_mode__FunctorName_119;
#line 551 "hlds_out_mode.m"
                            MR_String hlds__hlds_out__hlds_out_mode__String_120 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));

#line 552 "hlds_out_mode.m"
                            {
#line 552 "hlds_out_mode.m"
                              mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_118);
                            }
#line 553 "hlds_out_mode.m"
                            {
#line 553 "hlds_out_mode.m"
                              hlds__hlds_out__hlds_out_mode__FunctorName_119 = mercury__string__f_43_43_2_f_0((MR_String) "ImplDefinedConst: ", hlds__hlds_out__hlds_out_mode__String_120);
                            }
#line 554 "hlds_out_mode.m"
                            {
#line 554 "hlds_out_mode.m"
                              hlds__hlds_out__hlds_out_mode__V_98_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 554 "hlds_out_mode.m"
                              MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__V_98_98, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_119));
#line 554 "hlds_out_mode.m"
                            }
#line 554 "hlds_out_mode.m"
                            {
#line 554 "hlds_out_mode.m"
                              MR_Word base;
#line 554 "hlds_out_mode.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 554 "hlds_out_mode.m"
                              *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 554 "hlds_out_mode.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_98_98));
#line 554 "hlds_out_mode.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "hlds_out_mode.m"
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_118));
#line 554 "hlds_out_mode.m"
                            }
#line 551 "hlds_out_mode.m"
                          }
#line 523 "hlds_out_mode.m"
                        else
#line 523 "hlds_out_mode.m"
                          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 535 "hlds_out_mode.m"
                            {
#line 535 "hlds_out_mode.m"
                              MR_Integer hlds__hlds_out__hlds_out_mode__Int_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 535 "hlds_out_mode.m"
                              MR_Word hlds__hlds_out__hlds_out_mode__V_106_106;
#line 535 "hlds_out_mode.m"
                              MR_Word hlds__hlds_out__hlds_out_mode__Context_114;

#line 536 "hlds_out_mode.m"
                              {
#line 536 "hlds_out_mode.m"
                                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_114);
                              }
#line 537 "hlds_out_mode.m"
                              {
#line 537 "hlds_out_mode.m"
                                hlds__hlds_out__hlds_out_mode__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 537 "hlds_out_mode.m"
                                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_106_106, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Int_14));
#line 537 "hlds_out_mode.m"
                              }
#line 537 "hlds_out_mode.m"
                              {
#line 537 "hlds_out_mode.m"
                                MR_Word base;
#line 537 "hlds_out_mode.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 537 "hlds_out_mode.m"
                                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 537 "hlds_out_mode.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_106_106));
#line 537 "hlds_out_mode.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 537 "hlds_out_mode.m"
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_114));
#line 537 "hlds_out_mode.m"
                              }
#line 535 "hlds_out_mode.m"
                            }
#line 523 "hlds_out_mode.m"
                          else
#line 523 "hlds_out_mode.m"
                            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 543 "hlds_out_mode.m"
                              {
#line 543 "hlds_out_mode.m"
                                MR_String hlds__hlds_out__hlds_out_mode__String_16 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 543 "hlds_out_mode.m"
                                MR_Word hlds__hlds_out__hlds_out_mode__V_102_102;
#line 543 "hlds_out_mode.m"
                                MR_Word hlds__hlds_out__hlds_out_mode__Context_116;

#line 544 "hlds_out_mode.m"
                                {
#line 544 "hlds_out_mode.m"
                                  mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_116);
                                }
#line 545 "hlds_out_mode.m"
                                {
#line 545 "hlds_out_mode.m"
                                  hlds__hlds_out__hlds_out_mode__V_102_102 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 545 "hlds_out_mode.m"
                                  MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__V_102_102, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__String_16));
#line 545 "hlds_out_mode.m"
                                }
#line 545 "hlds_out_mode.m"
                                {
#line 545 "hlds_out_mode.m"
                                  MR_Word base;
#line 545 "hlds_out_mode.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 545 "hlds_out_mode.m"
                                  *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 545 "hlds_out_mode.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_102_102));
#line 545 "hlds_out_mode.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "hlds_out_mode.m"
                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_116));
#line 545 "hlds_out_mode.m"
                                }
#line 543 "hlds_out_mode.m"
                              }
#line 523 "hlds_out_mode.m"
                            else
#line 523 "hlds_out_mode.m"
                              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 611 "hlds_out_mode.m"
                                {
#line 611 "hlds_out_mode.m"
                                  MR_Word hlds__hlds_out__hlds_out_mode__Context_141;

#line 612 "hlds_out_mode.m"
                                  {
#line 612 "hlds_out_mode.m"
                                    mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_141);
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
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[30])));
#line 614 "hlds_out_mode.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "hlds_out_mode.m"
                                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_141));
#line 614 "hlds_out_mode.m"
                                  }
#line 611 "hlds_out_mode.m"
                                }
#line 523 "hlds_out_mode.m"
                              else
#line 523 "hlds_out_mode.m"
                                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 526 "hlds_out_mode.m"
                                  {
#line 528 "hlds_out_mode.m"
                                    {
#line 528 "hlds_out_mode.m"
                                      parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[31], hlds__hlds_out__hlds_out_mode__ArgTerms_5, hlds__hlds_out__hlds_out_mode__Term_6);
#line 528 "hlds_out_mode.m"
                                      return;
                                    }
#line 526 "hlds_out_mode.m"
                                  }
#line 523 "hlds_out_mode.m"
                                else
#line 523 "hlds_out_mode.m"
                                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 556 "hlds_out_mode.m"
                                    {
#line 556 "hlds_out_mode.m"
                                      MR_Word hlds__hlds_out__hlds_out_mode__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 556 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__TypeCtorName_19 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
#line 556 "hlds_out_mode.m"
                                      MR_Integer hlds__hlds_out__hlds_out_mode__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 3)));
#line 556 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__V_89_89;
#line 556 "hlds_out_mode.m"
                                      MR_Word hlds__hlds_out__hlds_out_mode__V_95_95;
#line 556 "hlds_out_mode.m"
                                      MR_Word hlds__hlds_out__hlds_out_mode__Context_121;
#line 556 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__FunctorName_122;
#line 556 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__V_151_151;
#line 556 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__V_153_153;
#line 556 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__V_154_154;
#line 556 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__V_156_156;
#line 556 "hlds_out_mode.m"
                                      MR_String hlds__hlds_out__hlds_out_mode__V_157_157;

#line 557 "hlds_out_mode.m"
                                      {
#line 557 "hlds_out_mode.m"
                                        mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_121);
                                      }
#line 559 "hlds_out_mode.m"
                                      {
#line 559 "hlds_out_mode.m"
                                        hlds__hlds_out__hlds_out_mode__V_89_89 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__ModuleName_18);
                                      }
#line 5502 "hlds.hlds_out.hlds_out_mode.c"
                                      {
#line 5504 "hlds.hlds_out.hlds_out_mode.c"
                                        hlds__hlds_out__hlds_out_mode__V_151_151 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__Arity_20);
                                      }
#line 5507 "hlds.hlds_out.hlds_out_mode.c"
                                      {
#line 5509 "hlds.hlds_out.hlds_out_mode.c"
                                        hlds__hlds_out__hlds_out_mode__V_153_153 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_151_151);
                                      }
#line 5512 "hlds.hlds_out.hlds_out_mode.c"
                                      {
#line 5514 "hlds.hlds_out.hlds_out_mode.c"
                                        hlds__hlds_out__hlds_out_mode__V_154_154 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorName_19, hlds__hlds_out__hlds_out_mode__V_153_153);
                                      }
#line 5517 "hlds.hlds_out.hlds_out_mode.c"
                                      {
#line 5519 "hlds.hlds_out.hlds_out_mode.c"
                                        hlds__hlds_out__hlds_out_mode__V_156_156 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_mode__V_154_154);
                                      }
#line 5522 "hlds.hlds_out.hlds_out_mode.c"
                                      {
#line 5524 "hlds.hlds_out.hlds_out_mode.c"
                                        hlds__hlds_out__hlds_out_mode__V_157_157 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_89_89, hlds__hlds_out__hlds_out_mode__V_156_156);
                                      }
#line 5527 "hlds.hlds_out.hlds_out_mode.c"
                                      {
#line 5529 "hlds.hlds_out.hlds_out_mode.c"
                                        hlds__hlds_out__hlds_out_mode__FunctorName_122 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo for ", hlds__hlds_out__hlds_out_mode__V_157_157);
                                      }
#line 561 "hlds_out_mode.m"
                                      {
#line 561 "hlds_out_mode.m"
                                        hlds__hlds_out__hlds_out_mode__V_95_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 561 "hlds_out_mode.m"
                                        MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__V_95_95, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_122));
#line 561 "hlds_out_mode.m"
                                      }
#line 561 "hlds_out_mode.m"
                                      {
#line 561 "hlds_out_mode.m"
                                        MR_Word base;
#line 561 "hlds_out_mode.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 561 "hlds_out_mode.m"
                                        *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 561 "hlds_out_mode.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_95_95));
#line 561 "hlds_out_mode.m"
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 561 "hlds_out_mode.m"
                                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_121));
#line 561 "hlds_out_mode.m"
                                      }
#line 556 "hlds_out_mode.m"
                                    }
#line 523 "hlds_out_mode.m"
                                  else
#line 523 "hlds_out_mode.m"
                                    if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 580 "hlds_out_mode.m"
                                      {
#line 580 "hlds_out_mode.m"
                                        MR_Integer hlds__hlds_out__hlds_out_mode__TIConstNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 580 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__Arg_27;
#line 580 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__V_63_63;
#line 580 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__V_68_68;
#line 580 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__V_71_71;
#line 580 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__Context_131;

#line 581 "hlds_out_mode.m"
                                        {
#line 581 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 581 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_5[0]));
#line 581 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2));
#line 581 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 581 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
#line 581 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 581 "hlds_out_mode.m"
                                        }
#line 581 "hlds_out_mode.m"
                                        {
#line 581 "hlds_out_mode.m"
                                          mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_63_63, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "type_info_const arity != 0");
                                        }
#line 583 "hlds_out_mode.m"
                                        {
#line 583 "hlds_out_mode.m"
                                          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_131);
                                        }
#line 585 "hlds_out_mode.m"
                                        {
#line 585 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 585 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_68_68, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TIConstNum_26));
#line 585 "hlds_out_mode.m"
                                        }
#line 585 "hlds_out_mode.m"
                                        {
#line 585 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__Arg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 585 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_68_68));
#line 585 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_131));
#line 585 "hlds_out_mode.m"
                                        }
#line 586 "hlds_out_mode.m"
                                        {
#line 586 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_71_71, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Arg_27));
#line 586 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[32])));
#line 586 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_71_71));
#line 586 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_131));
#line 586 "hlds_out_mode.m"
                                        }
#line 580 "hlds_out_mode.m"
                                      }
#line 523 "hlds_out_mode.m"
                                    else
#line 588 "hlds_out_mode.m"
                                      {
#line 588 "hlds_out_mode.m"
                                        MR_Integer hlds__hlds_out__hlds_out_mode__TCIConstNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 588 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__V_53_53;
#line 588 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__V_58_58;
#line 588 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__V_61_61;
#line 588 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__Context_133;
#line 588 "hlds_out_mode.m"
                                        MR_Word hlds__hlds_out__hlds_out_mode__Arg_135;

#line 589 "hlds_out_mode.m"
                                        {
#line 589 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 589 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_5[0]));
#line 589 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3));
#line 589 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 589 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
#line 589 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "hlds_out_mode.m"
                                        }
#line 589 "hlds_out_mode.m"
                                        {
#line 589 "hlds_out_mode.m"
                                          mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_53_53, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "typeclass_info_const arity != 0");
                                        }
#line 591 "hlds_out_mode.m"
                                        {
#line 591 "hlds_out_mode.m"
                                          mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_133);
                                        }
#line 593 "hlds_out_mode.m"
                                        {
#line 593 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 593 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TCIConstNum_28));
#line 593 "hlds_out_mode.m"
                                        }
#line 593 "hlds_out_mode.m"
                                        {
#line 593 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__Arg_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 593 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 593 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_133));
#line 593 "hlds_out_mode.m"
                                        }
#line 594 "hlds_out_mode.m"
                                        {
#line 594 "hlds_out_mode.m"
                                          hlds__hlds_out__hlds_out_mode__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 594 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_61_61, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Arg_135));
#line 594 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "hlds_out_mode.m"
                                        }
#line 594 "hlds_out_mode.m"
                                        {
#line 594 "hlds_out_mode.m"
                                          MR_Word base;
#line 594 "hlds_out_mode.m"
                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 594 "hlds_out_mode.m"
                                          *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 594 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__hlds_out__hlds_out_mode_scalar_common_2[33])));
#line 594 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_61_61));
#line 594 "hlds_out_mode.m"
                                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_133));
#line 594 "hlds_out_mode.m"
                                        }
#line 588 "hlds_out_mode.m"
                                      }
#line 523 "hlds_out_mode.m"
  }
#line 518 "hlds_out_mode.m"
}

#line 505 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1(
#line 505 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 505 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 505 "hlds_out_mode.m"
{
#line 505 "hlds_out_mode.m"
  {
#line 505 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 505 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 505 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

#line 505 "hlds_out_mode.m"
    {
#line 505 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 505 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
#line 505 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 505 "hlds_out_mode.m"
  }
#line 505 "hlds_out_mode.m"
}

#line 500 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(
#line 500 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 500 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 500 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_8,
#line 500 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_9)
#line 500 "hlds_out_mode.m"
{
#line 503 "hlds_out_mode.m"
  {
#line 503 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 503 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
#line 503 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_8, (MR_Integer) 0)));
#line 503 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_8, (MR_Integer) 1)));
#line 503 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_13;
#line 503 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__FirstTerm_14;
#line 503 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_18_18;

#line 505 "hlds_out_mode.m"
    {
#line 505 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 505 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 505 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1));
#line 505 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 505 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 505 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 505 "hlds_out_mode.m"
    }
#line 505 "hlds_out_mode.m"
    {
#line 505 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__ArgTerms_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_18_18, hlds__hlds_out__hlds_out_mode__Args_12);
    }
#line 506 "hlds_out_mode.m"
    {
#line 506 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(hlds__hlds_out__hlds_out_mode__ConsId_11, hlds__hlds_out__hlds_out_mode__ArgTerms_13, &hlds__hlds_out__hlds_out_mode__FirstTerm_14);
    }
#line 510 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__BoundInsts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__Term_10 = hlds__hlds_out__hlds_out_mode__FirstTerm_14;
#line 510 "hlds_out_mode.m"
    else
#line 511 "hlds_out_mode.m"
      {
#line 511 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__HeadBoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__BoundInsts_9, (MR_Integer) 0)));
#line 511 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TailBoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__BoundInsts_9, (MR_Integer) 1)));
#line 511 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SecondTerm_17;
#line 511 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 511 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;

#line 512 "hlds_out_mode.m"
        {
#line 512 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__SecondTerm_17 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__HeadBoundInst_15, hlds__hlds_out__hlds_out_mode__TailBoundInsts_16);
        }
#line 515 "hlds_out_mode.m"
        {
#line 515 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SecondTerm_17));
#line 515 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "hlds_out_mode.m"
        }
#line 515 "hlds_out_mode.m"
        {
#line 515 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FirstTerm_14));
#line 515 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_20_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_22_22));
#line 515 "hlds_out_mode.m"
        }
#line 514 "hlds_out_mode.m"
        {
#line 514 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[23], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
        }
#line 511 "hlds_out_mode.m"
      }
#line 503 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_10;
#line 503 "hlds_out_mode.m"
  }
#line 500 "hlds_out_mode.m"
}

#line 490 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(
#line 490 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_1,
#line 490 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_2,
#line 490 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3)
#line 490 "hlds_out_mode.m"
{
#line 493 "hlds_out_mode.m"
  {
#line 493 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 493 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__4_4;

#line 493 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "hlds_out_mode.m"
      {
#line 496 "hlds_out_mode.m"
        {
#line 496 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 496 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[22]));
#line 496 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 496 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_2));
#line 496 "hlds_out_mode.m"
        }
#line 493 "hlds_out_mode.m"
      }
#line 493 "hlds_out_mode.m"
    else
#line 497 "hlds_out_mode.m"
      {
#line 497 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 497 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 1)));

#line 498 "hlds_out_mode.m"
        {
#line 498 "hlds_out_mode.m"
          return hlds__hlds_out__hlds_out_mode__HeadVar__4_4 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_1, hlds__hlds_out__hlds_out_mode__Context_2, hlds__hlds_out__hlds_out_mode__BoundInst_12, hlds__hlds_out__hlds_out_mode__BoundInsts_13);
        }
#line 497 "hlds_out_mode.m"
      }
#line 493 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__4_4;
#line 493 "hlds_out_mode.m"
  }
#line 490 "hlds_out_mode.m"
}

#line 482 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(
#line 482 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 482 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__SharedName_2)
#line 482 "hlds_out_mode.m"
{
#line 484 "hlds_out_mode.m"
  {
#line 484 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 484 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__3_3;

#line 484 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 3))
#line 487 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "clobbered";
#line 484 "hlds_out_mode.m"
    else
#line 484 "hlds_out_mode.m"
      if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 4))
#line 488 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "mostly_clobbered";
#line 484 "hlds_out_mode.m"
      else
#line 484 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 2))
#line 486 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "mostly_unique";
#line 484 "hlds_out_mode.m"
        else
#line 484 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 0))
#line 484 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__SharedName_2;
#line 484 "hlds_out_mode.m"
          else
#line 485 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "unique";
#line 484 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 484 "hlds_out_mode.m"
  }
#line 482 "hlds_out_mode.m"
}

#line 469 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(
#line 469 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
#line 469 "hlds_out_mode.m"
{
#line 471 "hlds_out_mode.m"
  {
#line 471 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 471 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

#line 471 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 1))
#line 472 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "fake";
#line 471 "hlds_out_mode.m"
    else
#line 471 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "real";
#line 471 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 471 "hlds_out_mode.m"
  }
#line 469 "hlds_out_mode.m"
}

#line 464 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(
#line 464 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
#line 464 "hlds_out_mode.m"
{
#line 466 "hlds_out_mode.m"
  {
#line 466 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 466 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

#line 466 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == (MR_Integer) 1))
#line 467 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "dead";
#line 466 "hlds_out_mode.m"
    else
#line 466 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "live";
#line 466 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 466 "hlds_out_mode.m"
  }
#line 464 "hlds_out_mode.m"
}

#line 407 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_3(
#line 407 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 407 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 407 "hlds_out_mode.m"
{
#line 407 "hlds_out_mode.m"
  {
#line 407 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 407 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 407 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv2_Term_8;

#line 407 "hlds_out_mode.m"
    {
#line 407 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv2_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 407 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv2_Term_8));
#line 407 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 407 "hlds_out_mode.m"
  }
#line 407 "hlds_out_mode.m"
}

#line 428 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2(
#line 428 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 428 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 428 "hlds_out_mode.m"
{
#line 428 "hlds_out_mode.m"
  {
#line 428 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 428 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 428 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 428 "hlds_out_mode.m"
    {
#line 428 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 428 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
#line 428 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 428 "hlds_out_mode.m"
  }
#line 428 "hlds_out_mode.m"
}

#line 412 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1(
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
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

#line 412 "hlds_out_mode.m"
    {
#line 412 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 412 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
#line 412 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 412 "hlds_out_mode.m"
  }
#line 412 "hlds_out_mode.m"
}

#line 400 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(
#line 400 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 400 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 400 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_7)
#line 400 "hlds_out_mode.m"
{
#line 405 "hlds_out_mode.m"
  {
#line 405 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 405 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_8;

#line 405 "hlds_out_mode.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 1))))
#line 410 "hlds_out_mode.m"
      {
#line 410 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
#line 410 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__InstB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 410 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_94_94;
#line 410 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_96_96;
#line 410 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_97_97;
#line 410 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_98_98;

#line 412 "hlds_out_mode.m"
        {
#line 412 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 412 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_96_96, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 412 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_96_96, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1));
#line 412 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 412 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_96_96, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
#line 412 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_96_96, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 412 "hlds_out_mode.m"
        }
#line 412 "hlds_out_mode.m"
        {
#line 412 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_98_98, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_12));
#line 412 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "hlds_out_mode.m"
        }
#line 412 "hlds_out_mode.m"
        {
#line 412 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_97_97, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA_11));
#line 412 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_97_97, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_98_98));
#line 412 "hlds_out_mode.m"
        }
#line 412 "hlds_out_mode.m"
        {
#line 412 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_94_94 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_96_96, hlds__hlds_out__hlds_out_mode__V_97_97);
        }
#line 411 "hlds_out_mode.m"
        {
#line 411 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[14], hlds__hlds_out__hlds_out_mode__V_94_94, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
        }
#line 410 "hlds_out_mode.m"
      }
#line 405 "hlds_out_mode.m"
    else
#line 405 "hlds_out_mode.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 2))))
#line 425 "hlds_out_mode.m"
        {
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeInfo_127_127 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0];
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Liveness_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Real_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 3)));
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_67_67;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_69_69;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_70_70;
#line 425 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__V_71_71;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_73_73;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_74_74;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_75_75;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_76_76;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_77_77;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_79_79;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_80_80;
#line 425 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__V_81_81;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstA_103 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstB_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));

#line 427 "hlds_out_mode.m"
          {
#line 427 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_71_71 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Liveness_14);
          }
#line 427 "hlds_out_mode.m"
          {
#line 427 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_70_70 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_71_71);
          }
#line 427 "hlds_out_mode.m"
          {
#line 427 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_69_69, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_70_70));
#line 427 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "hlds_out_mode.m"
          }
#line 428 "hlds_out_mode.m"
          {
#line 428 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 428 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_75_75, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 428 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_75_75, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2));
#line 428 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 428 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_75_75, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
#line 428 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_75_75, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 428 "hlds_out_mode.m"
          }
#line 429 "hlds_out_mode.m"
          {
#line 429 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_77_77, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_104));
#line 429 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 429 "hlds_out_mode.m"
          }
#line 429 "hlds_out_mode.m"
          {
#line 429 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_76_76, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA_103));
#line 429 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_76_76, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_77_77));
#line 429 "hlds_out_mode.m"
          }
#line 428 "hlds_out_mode.m"
          {
#line 428 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_74_74 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__hlds_out__hlds_out_mode__TypeInfo_127_127, hlds__hlds_out__hlds_out_mode__V_75_75, hlds__hlds_out__hlds_out_mode__V_76_76);
          }
#line 430 "hlds_out_mode.m"
          {
#line 430 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_81_81 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_15);
          }
#line 430 "hlds_out_mode.m"
          {
#line 430 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_80_80 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_81_81);
          }
#line 430 "hlds_out_mode.m"
          {
#line 430 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_79_79, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_80_80));
#line 430 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 430 "hlds_out_mode.m"
          }
#line 429 "hlds_out_mode.m"
          {
#line 429 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_73_73 = mercury__list__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__TypeInfo_127_127, hlds__hlds_out__hlds_out_mode__V_74_74, hlds__hlds_out__hlds_out_mode__V_79_79);
          }
#line 427 "hlds_out_mode.m"
          {
#line 427 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_67_67 = mercury__list__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__TypeInfo_127_127, hlds__hlds_out__hlds_out_mode__V_69_69, hlds__hlds_out__hlds_out_mode__V_73_73);
          }
#line 426 "hlds_out_mode.m"
          {
#line 426 "hlds_out_mode.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[15], hlds__hlds_out__hlds_out_mode__V_67_67, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
          }
#line 425 "hlds_out_mode.m"
        }
#line 405 "hlds_out_mode.m"
      else
#line 405 "hlds_out_mode.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 0))))
#line 405 "hlds_out_mode.m"
          {
#line 405 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
#line 405 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 405 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_100_100;
#line 405 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_101_101;

#line 407 "hlds_out_mode.m"
            {
#line 407 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 407 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_101_101, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 407 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_101_101, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_3));
#line 407 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_101_101, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 407 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_101_101, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
#line 407 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_101_101, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 407 "hlds_out_mode.m"
            }
#line 407 "hlds_out_mode.m"
            {
#line 407 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_100_100 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_101_101, hlds__hlds_out__hlds_out_mode__Args_10);
            }
#line 406 "hlds_out_mode.m"
            {
#line 406 "hlds_out_mode.m"
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__Name_9, hlds__hlds_out__hlds_out_mode__V_100_100, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
            }
#line 405 "hlds_out_mode.m"
          }
#line 405 "hlds_out_mode.m"
        else
#line 405 "hlds_out_mode.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 441 "hlds_out_mode.m"
            {
#line 441 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;
#line 441 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_39_39;
#line 441 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_40_40;
#line 441 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_41_41;
#line 441 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_42_42;
#line 441 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_43_43;
#line 441 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_44_44;
#line 441 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_45_45;
#line 441 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_47_47;
#line 441 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_48_48;
#line 441 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_49_49;
#line 441 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 441 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Real_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 441 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__IsLive_109 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 441 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);

#line 443 "hlds_out_mode.m"
              {
#line 443 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_39_39 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_107);
              }
#line 444 "hlds_out_mode.m"
              {
#line 444 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_42_42 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__IsLive_109);
              }
#line 444 "hlds_out_mode.m"
              {
#line 444 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_41_41 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_42_42);
              }
#line 445 "hlds_out_mode.m"
              {
#line 445 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_45_45 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_110, (MR_String) "shared");
              }
#line 445 "hlds_out_mode.m"
              {
#line 445 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_44_44 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_45_45);
              }
#line 446 "hlds_out_mode.m"
              {
#line 446 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_49_49 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_108);
              }
#line 446 "hlds_out_mode.m"
              {
#line 446 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_48_48 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_49_49);
              }
#line 446 "hlds_out_mode.m"
              {
#line 446 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_48_48));
#line 446 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "hlds_out_mode.m"
              }
#line 445 "hlds_out_mode.m"
              {
#line 445 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_43_43, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_44_44));
#line 445 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_43_43, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_47_47));
#line 445 "hlds_out_mode.m"
              }
#line 444 "hlds_out_mode.m"
              {
#line 444 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_41_41));
#line 444 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_43_43));
#line 444 "hlds_out_mode.m"
              }
#line 443 "hlds_out_mode.m"
              {
#line 443 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_39_39));
#line 443 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_40_40));
#line 443 "hlds_out_mode.m"
              }
#line 442 "hlds_out_mode.m"
              {
#line 442 "hlds_out_mode.m"
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[16], hlds__hlds_out__hlds_out_mode__V_37_37, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
              }
#line 441 "hlds_out_mode.m"
            }
#line 405 "hlds_out_mode.m"
          else
#line 405 "hlds_out_mode.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 433 "hlds_out_mode.m"
              {
#line 433 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__IsLive_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 433 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Uniq_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 433 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_52_52;
#line 433 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_54_54;
#line 433 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;
#line 433 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_56_56;
#line 433 "hlds_out_mode.m"
                MR_String hlds__hlds_out__hlds_out_mode__V_57_57;
#line 433 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_58_58;
#line 433 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_59_59;
#line 433 "hlds_out_mode.m"
                MR_String hlds__hlds_out__hlds_out_mode__V_60_60;
#line 433 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_62_62;
#line 433 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__V_63_63;
#line 433 "hlds_out_mode.m"
                MR_String hlds__hlds_out__hlds_out_mode__V_64_64;
#line 433 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 433 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Real_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 435 "hlds_out_mode.m"
                {
#line 435 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_54_54 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_105);
                }
#line 436 "hlds_out_mode.m"
                {
#line 436 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_57_57 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__IsLive_16);
                }
#line 436 "hlds_out_mode.m"
                {
#line 436 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_56_56 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_57_57);
                }
#line 437 "hlds_out_mode.m"
                {
#line 437 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_60_60 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_17, (MR_String) "shared");
                }
#line 437 "hlds_out_mode.m"
                {
#line 437 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_59_59 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_60_60);
                }
#line 438 "hlds_out_mode.m"
                {
#line 438 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_64_64 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_106);
                }
#line 438 "hlds_out_mode.m"
                {
#line 438 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_63_63 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_64_64);
                }
#line 438 "hlds_out_mode.m"
                {
#line 438 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_62_62, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_63_63));
#line 438 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 438 "hlds_out_mode.m"
                }
#line 437 "hlds_out_mode.m"
                {
#line 437 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_59_59));
#line 437 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_58_58, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_62_62));
#line 437 "hlds_out_mode.m"
                }
#line 436 "hlds_out_mode.m"
                {
#line 436 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_56_56));
#line 436 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_55_55, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 436 "hlds_out_mode.m"
                }
#line 435 "hlds_out_mode.m"
                {
#line 435 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_52_52, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_54_54));
#line 435 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_52_52, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
#line 435 "hlds_out_mode.m"
                }
#line 434 "hlds_out_mode.m"
                {
#line 434 "hlds_out_mode.m"
                  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[17], hlds__hlds_out__hlds_out_mode__V_52_52, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                }
#line 433 "hlds_out_mode.m"
              }
#line 405 "hlds_out_mode.m"
            else
#line 405 "hlds_out_mode.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 420 "hlds_out_mode.m"
                {
#line 420 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__V_84_84;
#line 420 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__V_86_86;
#line 420 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 422 "hlds_out_mode.m"
                  {
#line 422 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_86_86 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_102);
                  }
#line 422 "hlds_out_mode.m"
                  {
#line 422 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_84_84, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_86_86));
#line 422 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 422 "hlds_out_mode.m"
                  }
#line 421 "hlds_out_mode.m"
                  {
#line 421 "hlds_out_mode.m"
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[18], hlds__hlds_out__hlds_out_mode__V_84_84, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                  }
#line 420 "hlds_out_mode.m"
                }
#line 405 "hlds_out_mode.m"
              else
#line 405 "hlds_out_mode.m"
                if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 415 "hlds_out_mode.m"
                  {
#line 415 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 415 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_89_89;
#line 415 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_91_91;

#line 417 "hlds_out_mode.m"
                    {
#line 417 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_91_91 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_13);
                    }
#line 417 "hlds_out_mode.m"
                    {
#line 417 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_89_89, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_91_91));
#line 417 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "hlds_out_mode.m"
                    }
#line 416 "hlds_out_mode.m"
                    {
#line 416 "hlds_out_mode.m"
                      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19], hlds__hlds_out__hlds_out_mode__V_89_89, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                    }
#line 415 "hlds_out_mode.m"
                  }
#line 405 "hlds_out_mode.m"
                else
#line 405 "hlds_out_mode.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 449 "hlds_out_mode.m"
                    {
#line 449 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_135_135;
#line 449 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
#line 449 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Term0_19;
#line 449 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
#line 449 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 449 "hlds_out_mode.m"
                      MR_String hlds__hlds_out__hlds_out_mode__V_31_31;
#line 449 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_33_33;
#line 449 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 449 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Uniq_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 450 "hlds_out_mode.m"
                      {
#line 450 "hlds_out_mode.m"
                        parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_18, &hlds__hlds_out__hlds_out_mode__Term0_19);
                      }
#line 452 "hlds_out_mode.m"
                      {
#line 452 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_31_31 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_111, (MR_String) "shared");
                      }
#line 452 "hlds_out_mode.m"
                      {
#line 452 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_30_30 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_31_31);
                      }
#line 6768 "hlds.hlds_out.hlds_out_mode.c"
                      hlds__hlds_out__hlds_out_mode__TypeCtorInfo_135_135 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 453 "hlds_out_mode.m"
                      {
#line 453 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_34_34 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__hlds_out__hlds_out_mode__TypeCtorInfo_135_135, hlds__hlds_out__hlds_out_mode__Term0_19);
                      }
#line 453 "hlds_out_mode.m"
                      {
#line 453 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34));
#line 453 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "hlds_out_mode.m"
                      }
#line 452 "hlds_out_mode.m"
                      {
#line 452 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_30_30));
#line 452 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_33_33));
#line 452 "hlds_out_mode.m"
                      }
#line 451 "hlds_out_mode.m"
                      {
#line 451 "hlds_out_mode.m"
                        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_135_135, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[20], hlds__hlds_out__hlds_out_mode__V_28_28, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                      }
#line 449 "hlds_out_mode.m"
                    }
#line 405 "hlds_out_mode.m"
                  else
#line 456 "hlds_out_mode.m"
                    {
#line 456 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_137_137;
#line 456 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
#line 456 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_23_23;
#line 456 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 456 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
#line 456 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
#line 456 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Type_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 456 "hlds_out_mode.m"
                      MR_Word hlds__hlds_out__hlds_out_mode__Term0_114;

#line 457 "hlds_out_mode.m"
                      {
#line 457 "hlds_out_mode.m"
                        parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_113, &hlds__hlds_out__hlds_out_mode__Term0_114);
                      }
#line 6828 "hlds.hlds_out.hlds_out_mode.c"
                      hlds__hlds_out__hlds_out_mode__TypeCtorInfo_137_137 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 459 "hlds_out_mode.m"
                      {
#line 459 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_23_23 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__hlds_out__hlds_out_mode__TypeCtorInfo_137_137, hlds__hlds_out__hlds_out_mode__Term0_114);
                      }
#line 460 "hlds_out_mode.m"
                      {
#line 460 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_25_25 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_112);
                      }
#line 460 "hlds_out_mode.m"
                      {
#line 460 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_25_25));
#line 460 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 460 "hlds_out_mode.m"
                      }
#line 459 "hlds_out_mode.m"
                      {
#line 459 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_21_21, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_23_23));
#line 459 "hlds_out_mode.m"
                        MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_24_24));
#line 459 "hlds_out_mode.m"
                      }
#line 458 "hlds_out_mode.m"
                      {
#line 458 "hlds_out_mode.m"
                        parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_137_137, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[21], hlds__hlds_out__hlds_out_mode__V_21_21, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                      }
#line 456 "hlds_out_mode.m"
                    }
#line 405 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_8;
#line 405 "hlds_out_mode.m"
  }
#line 400 "hlds_out_mode.m"
}

#line 341 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(
#line 341 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 341 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_5)
#line 341 "hlds_out_mode.m"
{
#line 343 "hlds_out_mode.m"
  {
#line 343 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 343 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;
#line 343 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_5, (MR_Integer) 0)));
#line 343 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_5, (MR_Integer) 1)));
#line 343 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__ConsName_9;
#line 343 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_13_13;
#line 343 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_17_17;
#line 343 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_19_19;
#line 343 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_21_21;

#line 345 "hlds_out_mode.m"
    {
#line 345 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_13_13 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__SymName_7);
    }
#line 6909 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 6911 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__V_19_19 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__Arity_8);
    }
#line 6914 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 6916 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_19_19);
    }
#line 6919 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 6921 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__ConsName_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_13_13, hlds__hlds_out__hlds_out_mode__V_21_21);
    }
#line 347 "hlds_out_mode.m"
    {
#line 347 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 347 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_17_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ConsName_9));
#line 347 "hlds_out_mode.m"
    }
#line 347 "hlds_out_mode.m"
    {
#line 347 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 347 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_17_17));
#line 347 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 347 "hlds_out_mode.m"
    }
#line 343 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 343 "hlds_out_mode.m"
  }
#line 341 "hlds_out_mode.m"
}

#line 336 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1(
#line 336 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 336 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 336 "hlds_out_mode.m"
{
#line 336 "hlds_out_mode.m"
  {
#line 336 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 336 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 336 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_6;

#line 336 "hlds_out_mode.m"
    {
#line 336 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_6 = hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 336 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_6));
#line 336 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 336 "hlds_out_mode.m"
  }
#line 336 "hlds_out_mode.m"
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
#line 271 "hlds_out_mode.m"
      {
#line 272 "hlds_out_mode.m"
        {
#line 272 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 272 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[2]));
#line 272 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 272 "hlds_out_mode.m"
        }
#line 271 "hlds_out_mode.m"
      }
#line 262 "hlds_out_mode.m"
    else
#line 262 "hlds_out_mode.m"
      if ((hlds__hlds_out__hlds_out_mode__InstResults_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 274 "hlds_out_mode.m"
        {
#line 275 "hlds_out_mode.m"
          {
#line 275 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 275 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[3]));
#line 275 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 275 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 275 "hlds_out_mode.m"
          }
#line 274 "hlds_out_mode.m"
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
          MR_Word hlds__hlds_out__hlds_out_mode__InstNameResult_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 2)));
#line 262 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeResult_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 3)));
#line 262 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm1_11;
#line 262 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm2_12;
#line 262 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm3_13;
#line 262 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm4_14;
#line 262 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_23_23;
#line 262 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 262 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
#line 262 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;

#line 283 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__GroundnessResult_7 == (MR_Integer) 2))
#line 289 "hlds_out_mode.m"
            {
#line 290 "hlds_out_mode.m"
              {
#line 290 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm1_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 290 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[4]));
#line 290 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 290 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 290 "hlds_out_mode.m"
              }
#line 289 "hlds_out_mode.m"
            }
#line 283 "hlds_out_mode.m"
          else
#line 283 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__GroundnessResult_7 == (MR_Integer) 1))
#line 286 "hlds_out_mode.m"
              {
#line 287 "hlds_out_mode.m"
                {
#line 287 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm1_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 287 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[5]));
#line 287 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 287 "hlds_out_mode.m"
                }
#line 286 "hlds_out_mode.m"
              }
#line 283 "hlds_out_mode.m"
            else
#line 283 "hlds_out_mode.m"
              {
#line 284 "hlds_out_mode.m"
                {
#line 284 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm1_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 284 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[6]));
#line 284 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_11, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 284 "hlds_out_mode.m"
                }
#line 283 "hlds_out_mode.m"
              }
#line 298 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__AnyResult_8 == (MR_Integer) 2))
#line 304 "hlds_out_mode.m"
            {
#line 305 "hlds_out_mode.m"
              {
#line 305 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm2_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 305 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[7]));
#line 305 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 305 "hlds_out_mode.m"
              }
#line 304 "hlds_out_mode.m"
            }
#line 298 "hlds_out_mode.m"
          else
#line 298 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__AnyResult_8 == (MR_Integer) 1))
#line 301 "hlds_out_mode.m"
              {
#line 302 "hlds_out_mode.m"
                {
#line 302 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm2_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 302 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[8]));
#line 302 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 302 "hlds_out_mode.m"
                }
#line 301 "hlds_out_mode.m"
              }
#line 298 "hlds_out_mode.m"
            else
#line 298 "hlds_out_mode.m"
              {
#line 299 "hlds_out_mode.m"
                {
#line 299 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm2_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 299 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[9]));
#line 299 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_12, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 299 "hlds_out_mode.m"
                }
#line 298 "hlds_out_mode.m"
              }
#line 313 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__InstNameResult_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 313 "hlds_out_mode.m"
            {
#line 314 "hlds_out_mode.m"
              {
#line 314 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm3_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 314 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[10]));
#line 314 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 314 "hlds_out_mode.m"
              }
#line 313 "hlds_out_mode.m"
            }
#line 313 "hlds_out_mode.m"
          else
#line 317 "hlds_out_mode.m"
            {
#line 317 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstNameSet_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstNameResult_9, (MR_Integer) 0)));
#line 317 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__NumInstNames_56;
#line 317 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__CountTerm_57;
#line 317 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_58_58;
#line 317 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_62_62;

#line 318 "hlds_out_mode.m"
              {
#line 318 "hlds_out_mode.m"
                mercury__set__count_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, hlds__hlds_out__hlds_out_mode__InstNameSet_55, &hlds__hlds_out__hlds_out_mode__NumInstNames_56);
              }
#line 321 "hlds_out_mode.m"
              {
#line 321 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 321 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__NumInstNames_56));
#line 321 "hlds_out_mode.m"
              }
#line 321 "hlds_out_mode.m"
              {
#line 321 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__CountTerm_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 321 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_57, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 321 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 321 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_57, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 321 "hlds_out_mode.m"
              }
#line 323 "hlds_out_mode.m"
              {
#line 323 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_62_62, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__CountTerm_57));
#line 323 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "hlds_out_mode.m"
              }
#line 322 "hlds_out_mode.m"
              {
#line 322 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm3_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 322 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[11]));
#line 322 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_62_62));
#line 322 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 322 "hlds_out_mode.m"
              }
#line 317 "hlds_out_mode.m"
            }
#line 331 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__TypeResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "hlds_out_mode.m"
            {
#line 332 "hlds_out_mode.m"
              {
#line 332 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm4_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 332 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[12]));
#line 332 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 332 "hlds_out_mode.m"
              }
#line 331 "hlds_out_mode.m"
            }
#line 331 "hlds_out_mode.m"
          else
#line 334 "hlds_out_mode.m"
            {
#line 334 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 334 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorSet_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__TypeResult_10, (MR_Integer) 0)));
#line 334 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__TypeCtors_72;
#line 334 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorTerms_73;
#line 334 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_74_74;

#line 335 "hlds_out_mode.m"
              {
#line 335 "hlds_out_mode.m"
                mercury__set__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_80, hlds__hlds_out__hlds_out_mode__TypeCtorSet_71, &hlds__hlds_out__hlds_out_mode__TypeCtors_72);
              }
#line 336 "hlds_out_mode.m"
              {
#line 336 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 336 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_74_74, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_4[0]));
#line 336 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_74_74, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1));
#line 336 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 336 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_74_74, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 336 "hlds_out_mode.m"
              }
#line 336 "hlds_out_mode.m"
              {
#line 336 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__TypeCtorTerms_73 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_80, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_74_74, hlds__hlds_out__hlds_out_mode__TypeCtors_72);
              }
#line 337 "hlds_out_mode.m"
              {
#line 337 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm4_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 337 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[11]));
#line 337 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_14, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TypeCtorTerms_73));
#line 337 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 337 "hlds_out_mode.m"
              }
#line 334 "hlds_out_mode.m"
            }
#line 269 "hlds_out_mode.m"
          {
#line 269 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm4_14));
#line 269 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "hlds_out_mode.m"
          }
#line 269 "hlds_out_mode.m"
          {
#line 269 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_25_25, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm3_13));
#line 269 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_25_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_26_26));
#line 269 "hlds_out_mode.m"
          }
#line 269 "hlds_out_mode.m"
          {
#line 269 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm2_12));
#line 269 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_25_25));
#line 269 "hlds_out_mode.m"
          }
#line 269 "hlds_out_mode.m"
          {
#line 269 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_23_23, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm1_11));
#line 269 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_23_23, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_24_24));
#line 269 "hlds_out_mode.m"
          }
#line 268 "hlds_out_mode.m"
          {
#line 268 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 268 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[13]));
#line 268 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_23_23));
#line 268 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 268 "hlds_out_mode.m"
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

#line 476 "hlds_out_mode.m"
                if ((hlds__hlds_out__hlds_out_mode__Uniq_9 == (MR_Integer) 3))
#line 479 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_String) "clobbered_any";
#line 476 "hlds_out_mode.m"
                else
#line 476 "hlds_out_mode.m"
                  if ((hlds__hlds_out__hlds_out_mode__Uniq_9 == (MR_Integer) 4))
#line 480 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_String) "mostly_clobbered_any";
#line 476 "hlds_out_mode.m"
                  else
#line 476 "hlds_out_mode.m"
                    if ((hlds__hlds_out__hlds_out_mode__Uniq_9 == (MR_Integer) 2))
#line 478 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_String) "mostly_unique_any";
#line 476 "hlds_out_mode.m"
                    else
#line 476 "hlds_out_mode.m"
                      if ((hlds__hlds_out__hlds_out_mode__Uniq_9 == (MR_Integer) 0))
#line 476 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_String) "any";
#line 476 "hlds_out_mode.m"
                      else
#line 477 "hlds_out_mode.m"
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
#line 484 "hlds_out_mode.m"
                  if ((hlds__hlds_out__hlds_out_mode__Uniq_59 == (MR_Integer) 3))
#line 487 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "clobbered";
#line 484 "hlds_out_mode.m"
                  else
#line 484 "hlds_out_mode.m"
                    if ((hlds__hlds_out__hlds_out_mode__Uniq_59 == (MR_Integer) 4))
#line 488 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "mostly_clobbered";
#line 484 "hlds_out_mode.m"
                    else
#line 484 "hlds_out_mode.m"
                      if ((hlds__hlds_out__hlds_out_mode__Uniq_59 == (MR_Integer) 2))
#line 486 "hlds_out_mode.m"
                        hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "mostly_unique";
#line 484 "hlds_out_mode.m"
                      else
#line 484 "hlds_out_mode.m"
                        if ((hlds__hlds_out__hlds_out_mode__Uniq_59 == (MR_Integer) 0))
#line 484 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "bound";
#line 484 "hlds_out_mode.m"
                        else
#line 485 "hlds_out_mode.m"
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

#line 484 "hlds_out_mode.m"
                            if ((hlds__hlds_out__hlds_out_mode__Uniq_62 == (MR_Integer) 3))
#line 487 "hlds_out_mode.m"
                              hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "clobbered";
#line 484 "hlds_out_mode.m"
                            else
#line 484 "hlds_out_mode.m"
                              if ((hlds__hlds_out__hlds_out_mode__Uniq_62 == (MR_Integer) 4))
#line 488 "hlds_out_mode.m"
                                hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "mostly_clobbered";
#line 484 "hlds_out_mode.m"
                              else
#line 484 "hlds_out_mode.m"
                                if ((hlds__hlds_out__hlds_out_mode__Uniq_62 == (MR_Integer) 2))
#line 486 "hlds_out_mode.m"
                                  hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "mostly_unique";
#line 484 "hlds_out_mode.m"
                                else
#line 484 "hlds_out_mode.m"
                                  if ((hlds__hlds_out__hlds_out_mode__Uniq_62 == (MR_Integer) 0))
#line 484 "hlds_out_mode.m"
                                    hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "ground";
#line 484 "hlds_out_mode.m"
                                  else
#line 485 "hlds_out_mode.m"
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
#line 1057 "hlds_out_mode.m"
  {
#line 1057 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1057 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_8;
#line 1057 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Expansions_9;
#line 1057 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;
#line 1059 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_8;

#line 1058 "hlds_out_mode.m"
    {
#line 1058 "hlds_out_mode.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &hlds__hlds_out__hlds_out_mode__Expansions_9);
    }
#line 1060 "hlds_out_mode.m"
    {
#line 1060 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstVarSet_6));
#line 1060 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModuleInfo_7));
#line 1060 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Expansions_9));
#line 1060 "hlds_out_mode.m"
    }
#line 1059 "hlds_out_mode.m"
    {
#line 1059 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_inst_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__Inst_5, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_10_10)), ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_8);
    }
#line 1059 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_8 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_8);
#line 1057 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_8;
#line 1057 "hlds_out_mode.m"
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
#line 1052 "hlds_out_mode.m"
  {
#line 1052 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1052 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Expansions_10;
#line 1052 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_13_13;
#line 1054 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_12;

#line 1053 "hlds_out_mode.m"
    {
#line 1053 "hlds_out_mode.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &hlds__hlds_out__hlds_out_mode__Expansions_10);
    }
#line 1055 "hlds_out_mode.m"
    {
#line 1055 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1055 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_13_13, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstVarSet_7));
#line 1055 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_13_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModuleInfo_8));
#line 1055 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_13_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Expansions_10));
#line 1055 "hlds_out_mode.m"
    }
#line 1054 "hlds_out_mode.m"
    {
#line 1054 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_inst_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__Inst_6, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_13_13)), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_12);
    }
#line 1052 "hlds_out_mode.m"
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
#line 1017 "hlds_out_mode.m"
  {
#line 1017 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1017 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_6;
#line 1018 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_6;

#line 1018 "hlds_out_mode.m"
    {
#line 1018 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__UniModes_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_6);
    }
#line 1018 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_6 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_6);
#line 1017 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_6;
#line 1017 "hlds_out_mode.m"
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
#line 1015 "hlds_out_mode.m"
  {
#line 1015 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1015 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_9;

#line 1015 "hlds_out_mode.m"
    {
#line 1015 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__UniModes_5, hlds__hlds_out__hlds_out_mode__InstVarSet_6, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_9);
    }
#line 1015 "hlds_out_mode.m"
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
#line 1038 "hlds_out_mode.m"
  {
#line 1038 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1038 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_6;
#line 1038 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2];
#line 1038 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_28;
#line 1038 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_14;
#line 1038 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_15;
#line 1038 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_16;
#line 1038 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_17;
#line 1038 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_4, (MR_Integer) 0)));
#line 1038 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_4, (MR_Integer) 1)));
#line 1038 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 1038 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
#line 1038 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_22;
#line 1038 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_24;
#line 1038 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
#line 1046 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_22;
#line 8200 "hlds.hlds_out.hlds_out_mode.c"
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8202 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_24;
#line 1048 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv3_String_6;

#line 1045 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, (MR_Integer) 0)));
#line 1045 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, (MR_Integer) 1)));
#line 1045 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_19_19, (MR_Integer) 0)));
#line 1045 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_19_19, (MR_Integer) 1)));
#line 1046 "hlds_out_mode.m"
    {
#line 1046 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_14));
#line 1046 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_20_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_16));
#line 1046 "hlds_out_mode.m"
    }
#line 1046 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__V_21_21 = (MR_Word) hlds__hlds_out__hlds_out_mode__InstVarSet_5;
#line 8227 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_28 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6];
#line 1046 "hlds_out_mode.m"
    {
#line 1046 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_28, hlds__hlds_out__hlds_out_mode__V_20_20, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_21_21)), ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_22);
    }
#line 1046 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_22 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_22);
#line 8236 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8238 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 8240 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_18_22)), &hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_24);
    }
#line 8243 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_24 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_24);
#line 1048 "hlds_out_mode.m"
    {
#line 1048 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_15));
#line 1048 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_17));
#line 1048 "hlds_out_mode.m"
    }
#line 1048 "hlds_out_mode.m"
    {
#line 1048 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_28, hlds__hlds_out__hlds_out_mode__V_25_25, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_21_21)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_20_24)), &hlds__hlds_out__hlds_out_mode__conv3_String_6);
    }
#line 1048 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_6 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv3_String_6);
#line 1038 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_6;
#line 1038 "hlds_out_mode.m"
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
#line 1036 "hlds_out_mode.m"
  {
#line 1036 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1036 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1];
#line 1036 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_31;
#line 1036 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_17;
#line 1036 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_18;
#line 1036 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_19;
#line 1036 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_20;
#line 1036 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_5, (MR_Integer) 0)));
#line 1036 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_5, (MR_Integer) 1)));
#line 1036 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_23_23;
#line 1036 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 1036 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
#line 1046 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_25;
#line 8306 "hlds.hlds_out.hlds_out_mode.c"
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 8308 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_27;
#line 1048 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv3_STATE_VARIABLE_IO_9;

#line 1045 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, (MR_Integer) 0)));
#line 1045 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_21_21, (MR_Integer) 1)));
#line 1045 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, (MR_Integer) 0)));
#line 1045 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, (MR_Integer) 1)));
#line 1046 "hlds_out_mode.m"
    {
#line 1046 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_23_23, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_17));
#line 1046 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_23_23, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_19));
#line 1046 "hlds_out_mode.m"
    }
#line 1046 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) hlds__hlds_out__hlds_out_mode__InstVarSet_6;
#line 8333 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_31 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6];
#line 1046 "hlds_out_mode.m"
    {
#line 1046 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_31, hlds__hlds_out__hlds_out_mode__V_23_23, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_24_24)), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_18_25);
    }
#line 8340 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8342 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 8344 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_20_27);
    }
#line 1048 "hlds_out_mode.m"
    {
#line 1048 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_28_28, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_18));
#line 1048 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_28_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_20));
#line 1048 "hlds_out_mode.m"
    }
#line 1048 "hlds_out_mode.m"
    {
#line 1048 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_31, hlds__hlds_out__hlds_out_mode__V_28_28, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_24_24)), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv3_STATE_VARIABLE_IO_9);
    }
#line 1036 "hlds_out_mode.m"
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
#line 645 "hlds_out_mode.m"
  {
#line 645 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 645 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 646 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 646 "hlds_out_mode.m"
    {
#line 646 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Insts_7, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 646 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 645 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 645 "hlds_out_mode.m"
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
#line 640 "hlds_out_mode.m"
  {
#line 640 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 641 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 641 "hlds_out_mode.m"
    {
#line 641 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Insts_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 640 "hlds_out_mode.m"
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
#line 673 "hlds_out_mode.m"
  {
#line 673 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 673 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 674 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 674 "hlds_out_mode.m"
    {
#line 674 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Inst_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 674 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 673 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 673 "hlds_out_mode.m"
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
#line 669 "hlds_out_mode.m"
  {
#line 669 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 669 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 669 "hlds_out_mode.m"
    {
#line 669 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Inst_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 669 "hlds_out_mode.m"
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
#line 761 "hlds_out_mode.m"
  {
#line 761 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 761 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 762 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 762 "hlds_out_mode.m"
    {
#line 762 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Inst_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 762 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 761 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 761 "hlds_out_mode.m"
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
#line 757 "hlds_out_mode.m"
  {
#line 757 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 757 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_U_15;

#line 757 "hlds_out_mode.m"
    {
#line 757 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Inst_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_U_15);
    }
#line 757 "hlds_out_mode.m"
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
#line 738 "hlds_out_mode.m"
  {
#line 738 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 738 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 739 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 739 "hlds_out_mode.m"
    {
#line 739 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Insts_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 739 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 738 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 738 "hlds_out_mode.m"
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
#line 734 "hlds_out_mode.m"
  {
#line 734 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 734 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 734 "hlds_out_mode.m"
    {
#line 734 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Insts_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 734 "hlds_out_mode.m"
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
#line 397 "hlds_out_mode.m"
  {
#line 397 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 397 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 397 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

#line 398 "hlds_out_mode.m"
    {
#line 398 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_6_6 = mercury__term__context_init_0_f_0();
    }
#line 398 "hlds_out_mode.m"
    {
#line 398 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__V_6_6, hlds__hlds_out__hlds_out_mode__InstName_5);
    }
#line 397 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 397 "hlds_out_mode.m"
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
