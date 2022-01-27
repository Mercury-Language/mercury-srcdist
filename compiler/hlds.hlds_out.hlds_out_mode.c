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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 147 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 150 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 153 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 156 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 159 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 162 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 165 "hlds.hlds_out.hlds_out_mode.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_types_expanded_inst_info_0_0[3];

#line 168 "hlds.hlds_out.hlds_out_mode.c"
static const MR_ConstString hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_names_expanded_inst_info_0_0[3];

#line 171 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0;

#line 174 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0[1];

#line 177 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_ptag_ordered_expanded_inst_info_0[1];

#line 180 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_name_ordered_expanded_inst_info_0[1];

#line 183 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_expanded_inst_info_0[1];

#line 186 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0;

#line 189 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1;

#line 192 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2];

#line 195 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2];

#line 198 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2];

#line 201 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0_10001(
#line 204 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 206 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

#line 209 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0_10001(
#line 212 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 214 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 216 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3);

#line 219 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
#line 222 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 224 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2);

#line 227 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
#line 230 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 232 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 234 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3);

#line 237 "hlds.hlds_out.hlds_out_mode.c"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0_10001(
#line 240 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 242 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 245 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_5_5_p_0_10001(
#line 248 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 250 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 252 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 254 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3,
#line 256 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_4,
#line 258 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_5,
#line 260 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_6);

#line 422 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 422 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 422 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 428 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 428 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 428 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 413 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 413 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 413 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 413 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9);

#line 398 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 398 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 398 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 404 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 404 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 404 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 389 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 389 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 389 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 389 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9);

#line 683 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__683__1_2_p_0(
#line 683 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 683 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_57);

#line 675 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__675__1_2_p_0(
#line 675 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 675 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_67);

#line 691 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__691__1_2_p_0(
#line 691 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 691 "hlds_out_mode.m"
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

#line 1180 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_5_5_p_0(
#line 1180 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_6,
#line 1180 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1180 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1180 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3,
#line 1180 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__HeadVar__4_4,
#line 1180 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__HeadVar__5_5);

#line 1179 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0(
#line 1179 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

#line 1183 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0(
#line 1183 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1183 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1183 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3);

#line 1183 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0(
#line 1183 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1183 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2);

#line 1114 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0(
#line 1114 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21,
#line 1114 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1114 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1114 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3,
#line 1114 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4);

#line 1006 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(
#line 1006 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154,
#line 1006 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_9,
#line 1006 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_10,
#line 1006 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_11,
#line 1006 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_12,
#line 1006 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_13,
#line 1006 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_14,
#line 1006 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_29,
#line 1006 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);

#line 993 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
#line 993 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_1,
#line 993 "hlds_out_mode.m"
  MR_Integer * hlds__hlds_out__hlds_out_mode__InstAddr_2);

#line 958 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
#line 958 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 958 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 958 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent0_2,
#line 958 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 958 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 958 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 958 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 958 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7);

#line 859 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(
#line 859 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106,
#line 859 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
#line 859 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 859 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 859 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 859 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 859 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_30,
#line 859 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);

#line 836 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
#line 836 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_26,
#line 836 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 836 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_2,
#line 836 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 836 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 836 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 836 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 836 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7);

#line 771 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(
#line 771 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 771 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_8,
#line 771 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 771 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 771 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 771 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 771 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22,
#line 771 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);

#line 743 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0(
#line 743 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37,
#line 743 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 743 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum_2,
#line 743 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
#line 743 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 743 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_5,
#line 743 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6,
#line 743 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7,
#line 743 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8);

#line 683 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3(
#line 683 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

#line 675 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2(
#line 675 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

#line 691 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1(
#line 691 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg);

#line 612 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(
#line 612 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ConsId_4,
#line 612 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 612 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__Term_6);

#line 599 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1(
#line 599 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 599 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 594 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(
#line 594 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 594 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 594 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_8,
#line 594 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_9);

#line 584 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(
#line 584 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_1,
#line 584 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_2,
#line 584 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3);

#line 576 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(
#line 576 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 576 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__SharedName_2);

#line 563 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(
#line 563 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

#line 558 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(
#line 558 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1);

#line 447 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2(
#line 447 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 447 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 471 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1(
#line 471 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 471 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 440 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(
#line 440 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 440 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 440 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_7);

#line 381 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(
#line 381 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 381 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_5);

#line 368 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_type_ctor_propagated_to_term_2_f_0(
#line 368 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 368 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PropagatedResult_5);

#line 363 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0_1(
#line 363 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 363 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1);

#line 353 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0(
#line 353 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 353 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ContainsTypes_5);

#line 346 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_var_to_term_2_f_0(
#line 346 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 346 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVar_5);

#line 341 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1(
#line 341 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 341 "hlds_out_mode.m"
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


static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[18][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_2[38][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_3[3][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_5[2][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_6[1][5];


#line 570 "hlds_out_mode.m"
/* sealed */ struct hlds__hlds_out__hlds_out_mode__vector_common_type_4_0_s {
#line 570 "hlds_out_mode.m"
  const MR_String hlds__hlds_out__hlds_out_mode__vector_common_type_4_0__vct_4_f_0;
#line 570 "hlds_out_mode.m"
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
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0)),
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
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0)),
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


#include "hlds.hlds_out.hlds_out_mode.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1101 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1109 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1117 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1125 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__list__pti_list_1__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1133 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1141 "hlds.hlds_out.hlds_out_mode.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_mode__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 1149 "hlds.hlds_out.hlds_out_mode.c"
static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_types_expanded_inst_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_mode__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0
};

#line 1156 "hlds.hlds_out.hlds_out_mode.c"
static const MR_ConstString hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__field_names_expanded_inst_info_0_0[3] = {
  (MR_String) "eii_varset",
  (MR_String) "eii_module_info",
  (MR_String) "eii_expansions"
};

#line 1163 "hlds.hlds_out.hlds_out_mode.c"
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

#line 1178 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0[1] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0
};

#line 1183 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuPtagLayout hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_ptag_ordered_expanded_inst_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0
  }
};

#line 1192 "hlds.hlds_out.hlds_out_mode.c"
static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_name_ordered_expanded_inst_info_0[1] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0
};

#line 1197 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_expanded_inst_info_0[1] = {
  (MR_Integer) 0
};

#line 1202 "hlds.hlds_out.hlds_out_mode.c"
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

#line 1219 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0 = {
  (MR_String) "do_not_incl_addr",
  (MR_Integer) 0
};

#line 1225 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1 = {
  (MR_String) "do_incl_addr",
  (MR_Integer) 1
};

#line 1231 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1
};

#line 1237 "hlds.hlds_out.hlds_out_mode.c"
static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0
};

#line 1243 "hlds.hlds_out.hlds_out_mode.c"
static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1249 "hlds.hlds_out.hlds_out_mode.c"
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

#line 1266 "hlds.hlds_out.hlds_out_mode.c"
const MR_BaseTypeclassInfo base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_5_5_p_0_10001))
};

#line 1277 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0_10001(
#line 1280 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1282 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
#line 1284 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1286 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1288 "hlds.hlds_out.hlds_out_mode.c"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1291 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1293 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
#line 1296 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 1298 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1300 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1303 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0_10001(
#line 1306 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1308 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 1310 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3)
#line 1312 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1314 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1316 "hlds.hlds_out.hlds_out_mode.c"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1;

#line 1319 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1321 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0(&hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3));
    }
#line 1324 "hlds.hlds_out.hlds_out_mode.c"
    *hlds__hlds_out__hlds_out_mode__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1));
#line 1326 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1328 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1331 "hlds.hlds_out.hlds_out_mode.c"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
#line 1334 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1336 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2)
#line 1338 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1340 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1342 "hlds.hlds_out.hlds_out_mode.c"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1345 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1347 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2));
    }
#line 1350 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 1352 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1354 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1357 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
#line 1360 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1362 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 1364 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3)
#line 1366 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1368 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1370 "hlds.hlds_out.hlds_out_mode.c"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1;

#line 1373 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1375 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0(&hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3));
    }
#line 1378 "hlds.hlds_out.hlds_out_mode.c"
    *hlds__hlds_out__hlds_out_mode__wrapper_arg_1 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__1_1));
#line 1380 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1382 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1385 "hlds.hlds_out.hlds_out_mode.c"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0_10001(
#line 1388 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 1390 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 1392 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1394 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1396 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 1398 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__closure;
#line 1400 "hlds.hlds_out.hlds_out_mode.c"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_HeadVar__2_2;

#line 1403 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 1405 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1407 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__conv0_HeadVar__2_2 = hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 1410 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_HeadVar__2_2));
#line 1412 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 1414 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1416 "hlds.hlds_out.hlds_out_mode.c"
}

#line 1419 "hlds.hlds_out.hlds_out_mode.c"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_5_5_p_0_10001(
#line 1422 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 1424 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1,
#line 1426 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2,
#line 1428 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_3,
#line 1430 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_4,
#line 1432 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_5,
#line 1434 "hlds.hlds_out.hlds_out_mode.c"
  MR_Box * hlds__hlds_out__hlds_out_mode__wrapper_arg_6)
#line 1436 "hlds.hlds_out.hlds_out_mode.c"
{
#line 1438 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 1440 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__closure;

#line 1443 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 1445 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 1447 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_5_5_p_0(((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_2), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_3), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_4), hlds__hlds_out__hlds_out_mode__wrapper_arg_5, hlds__hlds_out__hlds_out_mode__wrapper_arg_6);
    }
#line 1450 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 1452 "hlds.hlds_out.hlds_out_mode.c"
}

#line 422 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 422 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 422 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 422 "hlds_out_mode.m"
{
#line 422 "hlds_out_mode.m"
  {
#line 422 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 422 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 422 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv2_Term_8;

#line 422 "hlds_out_mode.m"
    {
#line 422 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv2_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 422 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv2_Term_8));
#line 422 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 422 "hlds_out_mode.m"
  }
#line 422 "hlds_out_mode.m"
}

#line 428 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
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
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 428 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
#line 428 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 428 "hlds_out_mode.m"
  }
#line 428 "hlds_out_mode.m"
}

#line 413 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 413 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 413 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 413 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9)
#line 413 "hlds_out_mode.m"
{
#line 416 "hlds_out_mode.m"
  {
#line 416 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 416 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
#line 416 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 0)));
#line 416 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 1)));
#line 416 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 3)));
#line 416 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ModesTerm_15;
#line 416 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 416 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
#line 416 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;
#line 416 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_52_52;
#line 416 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;
#line 418 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 2)));

#line 424 "hlds_out_mode.m"
#line 424 "hlds_out_mode.m"
    switch (hlds__hlds_out__hlds_out_mode__PredOrFunc_11) {
#line 424 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 424 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 425 "hlds_out_mode.m"
        {
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__ArgModes_16;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__RetMode_17;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__ArgModesTerm_18;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;
#line 425 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 426 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__conv0_RetMode_17;

#line 426 "hlds_out_mode.m"
          {
#line 426 "hlds_out_mode.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_mode__Modes_12, &hlds__hlds_out__hlds_out_mode__ArgModes_16, &hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
          }
#line 426 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__RetMode_17 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
#line 428 "hlds_out_mode.m"
          {
#line 428 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 428 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 428 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
#line 428 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 428 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 428 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 428 "hlds_out_mode.m"
          }
#line 428 "hlds_out_mode.m"
          {
#line 428 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_20_20 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_22_22, hlds__hlds_out__hlds_out_mode__ArgModes_16);
          }
#line 1617 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 427 "hlds_out_mode.m"
          {
#line 427 "hlds_out_mode.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[36], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ArgModesTerm_18);
          }
#line 431 "hlds_out_mode.m"
          {
#line 431 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_27_27 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__RetMode_17);
          }
#line 431 "hlds_out_mode.m"
          {
#line 431 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
#line 431 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 431 "hlds_out_mode.m"
          }
#line 431 "hlds_out_mode.m"
          {
#line 431 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgModesTerm_18));
#line 431 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_26_26));
#line 431 "hlds_out_mode.m"
          }
#line 430 "hlds_out_mode.m"
          {
#line 430 "hlds_out_mode.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[33], hlds__hlds_out__hlds_out_mode__V_24_24, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
          }
#line 425 "hlds_out_mode.m"
        }
#line 424 "hlds_out_mode.m"
        break;
#line 424 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 420 "hlds_out_mode.m"
        {
#line 420 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 420 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

#line 422 "hlds_out_mode.m"
          {
#line 422 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 422 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 422 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
#line 422 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 422 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 422 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 422 "hlds_out_mode.m"
          }
#line 422 "hlds_out_mode.m"
          {
#line 422 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_30_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_32_32, hlds__hlds_out__hlds_out_mode__Modes_12);
          }
#line 421 "hlds_out_mode.m"
          {
#line 421 "hlds_out_mode.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[37], hlds__hlds_out__hlds_out_mode__V_30_30, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
          }
#line 420 "hlds_out_mode.m"
        }
#line 424 "hlds_out_mode.m"
        break;
#line 424 "hlds_out_mode.m"
    }
#line 722 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__V_52_52 = ((&hlds__hlds_out__hlds_out_mode_vector_common_4[13 + hlds__hlds_out__hlds_out_mode__Det_14]))->hlds__hlds_out__hlds_out_mode__vector_common_type_4_0__vct_4_f_0;
#line 130 "hlds_out_mode.m"
    {
#line 130 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 130 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_52_52));
#line 130 "hlds_out_mode.m"
    }
#line 130 "hlds_out_mode.m"
    {
#line 130 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 130 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
#line 130 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 130 "hlds_out_mode.m"
    }
#line 435 "hlds_out_mode.m"
    {
#line 435 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
#line 435 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "hlds_out_mode.m"
    }
#line 435 "hlds_out_mode.m"
    {
#line 435 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModesTerm_15));
#line 435 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
#line 435 "hlds_out_mode.m"
    }
#line 434 "hlds_out_mode.m"
    {
#line 434 "hlds_out_mode.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[35], hlds__hlds_out__hlds_out_mode__V_34_34, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
    }
#line 416 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_10;
#line 416 "hlds_out_mode.m"
  }
#line 413 "hlds_out_mode.m"
}

#line 398 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2(
#line 398 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 398 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 398 "hlds_out_mode.m"
{
#line 398 "hlds_out_mode.m"
  {
#line 398 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 398 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 398 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv2_Term_8;

#line 398 "hlds_out_mode.m"
    {
#line 398 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv2_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 398 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv2_Term_8));
#line 398 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 398 "hlds_out_mode.m"
  }
#line 398 "hlds_out_mode.m"
}

#line 404 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1(
#line 404 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 404 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 404 "hlds_out_mode.m"
{
#line 404 "hlds_out_mode.m"
  {
#line 404 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 404 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 404 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 404 "hlds_out_mode.m"
    {
#line 404 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 404 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
#line 404 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 404 "hlds_out_mode.m"
  }
#line 404 "hlds_out_mode.m"
}

#line 389 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0(
#line 389 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 389 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 389 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_9)
#line 389 "hlds_out_mode.m"
{
#line 392 "hlds_out_mode.m"
  {
#line 392 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 392 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
#line 392 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 0)));
#line 392 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 1)));
#line 392 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 3)));
#line 392 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ModesTerm_15;
#line 392 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;
#line 392 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_36_36;
#line 392 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_37_37;
#line 392 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_52_52;
#line 392 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_55_55;
#line 394 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__PredInstInfo_9, (MR_Integer) 2)));

#line 400 "hlds_out_mode.m"
#line 400 "hlds_out_mode.m"
    switch (hlds__hlds_out__hlds_out_mode__PredOrFunc_11) {
#line 400 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 400 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 401 "hlds_out_mode.m"
        {
#line 401 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 401 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48;
#line 401 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__ArgModes_16;
#line 401 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__RetMode_17;
#line 401 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__ArgModesTerm_18;
#line 401 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 401 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
#line 401 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 401 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;
#line 401 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 402 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__conv0_RetMode_17;

#line 402 "hlds_out_mode.m"
          {
#line 402 "hlds_out_mode.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, hlds__hlds_out__hlds_out_mode__Modes_12, &hlds__hlds_out__hlds_out_mode__ArgModes_16, &hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
          }
#line 402 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__RetMode_17 = ((MR_Word) hlds__hlds_out__hlds_out_mode__conv0_RetMode_17);
#line 404 "hlds_out_mode.m"
          {
#line 404 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 404 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 404 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_1));
#line 404 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 404 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 404 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 404 "hlds_out_mode.m"
          }
#line 404 "hlds_out_mode.m"
          {
#line 404 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_20_20 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_22_22, hlds__hlds_out__hlds_out_mode__ArgModes_16);
          }
#line 1915 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 403 "hlds_out_mode.m"
          {
#line 403 "hlds_out_mode.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[32], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ArgModesTerm_18);
          }
#line 407 "hlds_out_mode.m"
          {
#line 407 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_27_27 = hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__RetMode_17);
          }
#line 407 "hlds_out_mode.m"
          {
#line 407 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
#line 407 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "hlds_out_mode.m"
          }
#line 407 "hlds_out_mode.m"
          {
#line 407 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgModesTerm_18));
#line 407 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_26_26));
#line 407 "hlds_out_mode.m"
          }
#line 406 "hlds_out_mode.m"
          {
#line 406 "hlds_out_mode.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_48_48, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[33], hlds__hlds_out__hlds_out_mode__V_24_24, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
          }
#line 401 "hlds_out_mode.m"
        }
#line 400 "hlds_out_mode.m"
        break;
#line 400 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 396 "hlds_out_mode.m"
        {
#line 396 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 396 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

#line 398 "hlds_out_mode.m"
          {
#line 398 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 398 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[2]));
#line 398 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_51_93_95_48_4_f_0_2));
#line 398 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 398 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 398 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 398 "hlds_out_mode.m"
          }
#line 398 "hlds_out_mode.m"
          {
#line 398 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_30_30 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_32_32, hlds__hlds_out__hlds_out_mode__Modes_12);
          }
#line 397 "hlds_out_mode.m"
          {
#line 397 "hlds_out_mode.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[34], hlds__hlds_out__hlds_out_mode__V_30_30, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__ModesTerm_15);
          }
#line 396 "hlds_out_mode.m"
        }
#line 400 "hlds_out_mode.m"
        break;
#line 400 "hlds_out_mode.m"
    }
#line 722 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__V_52_52 = ((&hlds__hlds_out__hlds_out_mode_vector_common_4[5 + hlds__hlds_out__hlds_out_mode__Det_14]))->hlds__hlds_out__hlds_out_mode__vector_common_type_4_0__vct_4_f_0;
#line 130 "hlds_out_mode.m"
    {
#line 130 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 130 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_55_55, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_52_52));
#line 130 "hlds_out_mode.m"
    }
#line 130 "hlds_out_mode.m"
    {
#line 130 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 130 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_55_55));
#line 130 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_37_37, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 130 "hlds_out_mode.m"
    }
#line 411 "hlds_out_mode.m"
    {
#line 411 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
#line 411 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "hlds_out_mode.m"
    }
#line 411 "hlds_out_mode.m"
    {
#line 411 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModesTerm_15));
#line 411 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_36_36));
#line 411 "hlds_out_mode.m"
    }
#line 410 "hlds_out_mode.m"
    {
#line 410 "hlds_out_mode.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[35], hlds__hlds_out__hlds_out_mode__V_34_34, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
    }
#line 392 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_10;
#line 392 "hlds_out_mode.m"
  }
#line 389 "hlds_out_mode.m"
}

#line 683 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__683__1_2_p_0(
#line 683 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 683 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_57)
#line 683 "hlds_out_mode.m"
{
#line 683 "hlds_out_mode.m"
  {
#line 683 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 683 "hlds_out_mode.m"
    {
#line 683 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[5], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_57)));
    }
#line 683 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 683 "hlds_out_mode.m"
  }
#line 683 "hlds_out_mode.m"
}

#line 675 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__675__1_2_p_0(
#line 675 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 675 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_67)
#line 675 "hlds_out_mode.m"
{
#line 675 "hlds_out_mode.m"
  {
#line 675 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 675 "hlds_out_mode.m"
    {
#line 675 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[5], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_67)));
    }
#line 675 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 675 "hlds_out_mode.m"
  }
#line 675 "hlds_out_mode.m"
}

#line 691 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__691__1_2_p_0(
#line 691 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 691 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_45)
#line 691 "hlds_out_mode.m"
{
#line 691 "hlds_out_mode.m"
  {
#line 691 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 691 "hlds_out_mode.m"
    {
#line 691 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[5], ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_45)));
    }
#line 691 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 691 "hlds_out_mode.m"
  }
#line 691 "hlds_out_mode.m"
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
#line 241 "hlds_out_mode.m"
    {
#line 241 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34));
#line 241 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_37_37));
#line 241 "hlds_out_mode.m"
    }
#line 240 "hlds_out_mode.m"
    {
#line 240 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__4_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 240 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_30, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[31]));
#line 240 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_33_33));
#line 240 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_30, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 240 "hlds_out_mode.m"
    }
#line 239 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__4_30;
#line 239 "hlds_out_mode.m"
  }
#line 239 "hlds_out_mode.m"
}

#line 1180 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_5_5_p_0(
#line 1180 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_6,
#line 1180 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1180 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1180 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3,
#line 1180 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__HeadVar__4_4,
#line 1180 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__HeadVar__5_5)
#line 1180 "hlds_out_mode.m"
{
#line 1163 "hlds_out_mode.m"
  {
#line 1163 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1161 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1161 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1161 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));

#line 1161 "hlds_out_mode.m"
    {
#line 1161 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__3_3)), hlds__hlds_out__hlds_out_mode__V_19_19);
    }
#line 1163 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1162 "hlds_out_mode.m"
      {
#line 2253 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_6, (MR_Integer) 0)), (MR_Integer) 5)));

#line 2256 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 2258 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_6), ((MR_Box) ((MR_String) "...")), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, hlds__hlds_out__hlds_out_mode__HeadVar__5_5);
#line 2260 "hlds.hlds_out.hlds_out_mode.c"
          return;
        }
#line 1162 "hlds_out_mode.m"
      }
#line 1163 "hlds_out_mode.m"
    else
#line 1168 "hlds_out_mode.m"
      {
#line 1163 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_13_13;
#line 1163 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_14_14;

#line 1163 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0)));
#line 1163 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1163 "hlds_out_mode.m"
          {
#line 1163 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 1163 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 1)));
#line 1167 "hlds_out_mode.m"
            {
#line 1167 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_inst_name_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_6, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__HeadVar__1_1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__2_2)), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, hlds__hlds_out__hlds_out_mode__HeadVar__4_4, hlds__hlds_out__hlds_out_mode__HeadVar__5_5);
#line 1167 "hlds_out_mode.m"
              return;
            }
#line 1163 "hlds_out_mode.m"
          }
#line 1163 "hlds_out_mode.m"
        else
#line 1169 "hlds_out_mode.m"
          {
#line 1169 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_15;
#line 1169 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Expansions0_16;
#line 1169 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Expansions_17;
#line 1169 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_18;
#line 1169 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1169 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1169 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1170 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_29_29;
#line 1170 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 1172 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_31_31;
#line 1172 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;
#line 1172 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_33_33;

#line 1169 "hlds_out_mode.m"
            {
#line 1169 "hlds_out_mode.m"
              check_hlds__mode_util__inst_lookup_3_p_0(hlds__hlds_out__hlds_out_mode__V_23_23, hlds__hlds_out__hlds_out_mode__HeadVar__3_3, &hlds__hlds_out__hlds_out_mode__Inst_15);
            }
#line 1170 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1170 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1170 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Expansions0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1171 "hlds_out_mode.m"
            {
#line 1171 "hlds_out_mode.m"
              mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (hlds__hlds_out__hlds_out_mode__HeadVar__3_3)), hlds__hlds_out__hlds_out_mode__Expansions0_16, &hlds__hlds_out__hlds_out_mode__Expansions_17);
            }
#line 1172 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1172 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1172 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1172 "hlds_out_mode.m"
            {
#line 1172 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1172 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_18, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_31_31));
#line 1172 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_18, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_32_32));
#line 1172 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_18, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Expansions_17));
#line 1172 "hlds_out_mode.m"
            }
#line 1173 "hlds_out_mode.m"
            {
#line 1173 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_inst_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_6, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__HeadVar__1_1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_18)), hlds__hlds_out__hlds_out_mode__Inst_15, hlds__hlds_out__hlds_out_mode__HeadVar__4_4, hlds__hlds_out__hlds_out_mode__HeadVar__5_5);
#line 1173 "hlds_out_mode.m"
              return;
            }
#line 1169 "hlds_out_mode.m"
          }
#line 1168 "hlds_out_mode.m"
      }
#line 1163 "hlds_out_mode.m"
  }
#line 1180 "hlds_out_mode.m"
}

#line 1179 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_f_0(
#line 1179 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
#line 1179 "hlds_out_mode.m"
{
#line 1179 "hlds_out_mode.m"
  {
#line 1179 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1179 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1179 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1179 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 2)));

#line 1179 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 1179 "hlds_out_mode.m"
  }
#line 1179 "hlds_out_mode.m"
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
#line 2438 "hlds.hlds_out.hlds_out_mode.c"
  {
#line 2440 "hlds.hlds_out.hlds_out_mode.c"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__HeadVar__2_1 == hlds__hlds_out__hlds_out_mode__HeadVar__2_2);

#line 2443 "hlds.hlds_out.hlds_out_mode.c"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 2445 "hlds.hlds_out.hlds_out_mode.c"
  }
#line 48 "hlds_out_mode.m"
}

#line 1183 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____expanded_inst_info_0_0(
#line 1183 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1183 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1183 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3)
#line 1183 "hlds_out_mode.m"
{
#line 1183 "hlds_out_mode.m"
  {
#line 1183 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1183 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastX_12 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 1183 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastY_13 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__3_3;

#line 1183 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__CastX_12 == hlds__hlds_out__hlds_out_mode__CastY_13);
#line 1183 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 2474 "hlds.hlds_out.hlds_out_mode.c"
      *hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 1183 "hlds_out_mode.m"
    else
#line 1183 "hlds_out_mode.m"
      {
#line 1183 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1183 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1183 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));
#line 1183 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 1183 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 1)));
#line 1183 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 2)));
#line 1183 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;

#line 1183 "hlds_out_mode.m"
        {
#line 1183 "hlds_out_mode.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[7], &hlds__hlds_out__hlds_out_mode__V_10_10, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_4_4)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_7_7)));
        }
#line 2500 "hlds.hlds_out.hlds_out_mode.c"
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__V_10_10 == (MR_Integer) 0);
#line 1183 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = !(hlds__hlds_out__hlds_out_mode__succeeded);
#line 1183 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1183 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__V_10_10;
#line 1183 "hlds_out_mode.m"
        else
#line 1183 "hlds_out_mode.m"
          {
#line 1183 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_11_11;

#line 1183 "hlds_out_mode.m"
            {
#line 1183 "hlds_out_mode.m"
              hlds__hlds_module____Compare____module_info_0_0(&hlds__hlds_out__hlds_out_mode__V_11_11, hlds__hlds_out__hlds_out_mode__V_5_5, hlds__hlds_out__hlds_out_mode__V_8_8);
            }
#line 2520 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__V_11_11 == (MR_Integer) 0);
#line 1183 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__succeeded = !(hlds__hlds_out__hlds_out_mode__succeeded);
#line 1183 "hlds_out_mode.m"
            if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1183 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__V_11_11;
#line 1183 "hlds_out_mode.m"
            else
#line 1183 "hlds_out_mode.m"
              {
#line 1183 "hlds_out_mode.m"
                {
#line 1183 "hlds_out_mode.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[8], hlds__hlds_out__hlds_out_mode__HeadVar__1_1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_6_6)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_9_9)));
#line 1183 "hlds_out_mode.m"
                  return;
                }
#line 1183 "hlds_out_mode.m"
              }
#line 1183 "hlds_out_mode.m"
          }
#line 1183 "hlds_out_mode.m"
      }
#line 1183 "hlds_out_mode.m"
  }
#line 1183 "hlds_out_mode.m"
}

#line 1183 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____expanded_inst_info_0_0(
#line 1183 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1183 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2)
#line 1183 "hlds_out_mode.m"
{
#line 1183 "hlds_out_mode.m"
  {
#line 1183 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1183 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastX_9 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__1_1;
#line 1183 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__CastY_10 = (MR_Integer) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

#line 1183 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__CastX_9 == hlds__hlds_out__hlds_out_mode__CastY_10);
#line 1183 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1183 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__succeeded = MR_TRUE;
#line 1183 "hlds_out_mode.m"
    else
#line 1183 "hlds_out_mode.m"
      {
#line 1183 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeInfo_13_13;
#line 1183 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1183 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1183 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 2)));
#line 1183 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 1183 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 1183 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__2_2, (MR_Integer) 2)));

#line 2593 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 2595 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[7], ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_3_3)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_6_6)));
        }
#line 1183 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1183 "hlds_out_mode.m"
          {
#line 2602 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 2604 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__hlds_out__hlds_out_mode__V_4_4, hlds__hlds_out__hlds_out_mode__V_7_7);
            }
#line 1183 "hlds_out_mode.m"
            if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 1183 "hlds_out_mode.m"
              {
#line 2611 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__TypeInfo_13_13 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[8];
#line 2613 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 2615 "hlds.hlds_out.hlds_out_mode.c"
                  return hlds__hlds_out__hlds_out_mode__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_out__hlds_out_mode__TypeInfo_13_13, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_5_5)), ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_8_8)));
                }
#line 1183 "hlds_out_mode.m"
              }
#line 1183 "hlds_out_mode.m"
          }
#line 1183 "hlds_out_mode.m"
      }
#line 1183 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 1183 "hlds_out_mode.m"
  }
#line 1183 "hlds_out_mode.m"
}

#line 1114 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0(
#line 1114 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21,
#line 1114 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 1114 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__2_2,
#line 1114 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3,
#line 1114 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4)
#line 1114 "hlds_out_mode.m"
{
#line 1117 "hlds_out_mode.m"
  while (MR_TRUE)
#line 1117 "hlds_out_mode.m"
    {
#line 1117 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 1117 "hlds_out_mode.m"
      {
#line 1117 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 1117 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1117 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3;
#line 1117 "hlds_out_mode.m"
        else
#line 1118 "hlds_out_mode.m"
          {
#line 1118 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_42;
#line 1118 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Mode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 1118 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Modes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 1118 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17;
#line 1118 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstA1_27;
#line 1118 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstB1_28;
#line 1118 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstA2_29;
#line 1118 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstB2_30;
#line 1118 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__InstInfo_31;
#line 1118 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_9, (MR_Integer) 0)));
#line 1118 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Mode_9, (MR_Integer) 1)));
#line 1118 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_35_35;
#line 1118 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_36;
#line 1118 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_21_38;
#line 1118 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__V_40_40;
#line 2695 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1139 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstA1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, (MR_Integer) 0)));
#line 1139 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstB1_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_32_32, (MR_Integer) 1)));
#line 1139 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstA2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_33_33, (MR_Integer) 0)));
#line 1139 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstB2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_33_33, (MR_Integer) 1)));
#line 1140 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__InstInfo_31 = (MR_Word) hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 1141 "hlds_out_mode.m"
            {
#line 1141 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1141 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_35_35, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_27));
#line 1141 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_35_35, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_29));
#line 1141 "hlds_out_mode.m"
            }
#line 2718 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_42 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6];
#line 1141 "hlds_out_mode.m"
            {
#line 1141 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_42, (MR_Integer) 1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstInfo_31)), hlds__hlds_out__hlds_out_mode__V_35_35, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_36);
            }
#line 2725 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2727 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 2729 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) " = ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_21_38);
            }
#line 1143 "hlds_out_mode.m"
            {
#line 1143 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1143 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_40_40, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_28));
#line 1143 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_40_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_30));
#line 1143 "hlds_out_mode.m"
            }
#line 1143 "hlds_out_mode.m"
            {
#line 1143 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_42, (MR_Integer) 1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstInfo_31)), hlds__hlds_out__hlds_out_mode__V_40_40, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_21_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17);
            }
#line 1123 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Modes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1121 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_4 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17;
#line 1123 "hlds_out_mode.m"
            else
#line 1124 "hlds_out_mode.m"
              {
#line 1124 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19;
#line 2757 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

#line 2760 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 2762 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) ", ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_17_17, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19);
                }
#line 1126 "hlds_out_mode.m"
                /* direct tailcall eliminated */
#line 1126 "hlds_out_mode.m"
                {
#line 1126 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Modes_10;
#line 1126 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0__tmp_copy_3 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_19;

#line 1126 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0_3 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_0__tmp_copy_3;
#line 1126 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 1126 "hlds_out_mode.m"
                }
#line 1126 "hlds_out_mode.m"
                continue;
#line 1124 "hlds_out_mode.m"
              }
#line 1118 "hlds_out_mode.m"
          }
#line 1117 "hlds_out_mode.m"
      }
#line 1117 "hlds_out_mode.m"
      break;
#line 1117 "hlds_out_mode.m"
    }
#line 1114 "hlds_out_mode.m"
}

#line 1006 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(
#line 1006 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154,
#line 1006 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_9,
#line 1006 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_10,
#line 1006 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_11,
#line 1006 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_12,
#line 1006 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_13,
#line 1006 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_14,
#line 1006 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_29,
#line 1006 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30)
#line 1006 "hlds_out_mode.m"
{
#line 1011 "hlds_out_mode.m"
  {
#line 1011 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1011 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31;

#line 1015 "hlds_out_mode.m"
#line 1015 "hlds_out_mode.m"
    switch (hlds__hlds_out__hlds_out_mode__FirstIndentPrinted_10) {
#line 1015 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1015 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 1014 "hlds_out_mode.m"
        {
#line 1014 "hlds_out_mode.m"
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_29, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31);
        }
#line 1015 "hlds_out_mode.m"
        break;
#line 1015 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 1016 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_29;
#line 1015 "hlds_out_mode.m"
        break;
#line 1015 "hlds_out_mode.m"
    }
#line 1033 "hlds_out_mode.m"
#line 1033 "hlds_out_mode.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_9)) {
#line 1033 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1033 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 1019 "hlds_out_mode.m"
        {
#line 1019 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)));
#line 1019 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));

#line 1024 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__Args_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1021 "hlds_out_mode.m"
            {
#line 1021 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_138_138;

#line 1022 "hlds_out_mode.m"
              {
#line 1022 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Name_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_138_138);
              }
#line 1023 "hlds_out_mode.m"
              {
#line 1023 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_138_138, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1023 "hlds_out_mode.m"
                return;
              }
#line 1021 "hlds_out_mode.m"
            }
#line 1024 "hlds_out_mode.m"
          else
#line 1025 "hlds_out_mode.m"
            {
#line 1025 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129;
#line 1025 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131;
#line 1025 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_132_132;
#line 1025 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133;
#line 1025 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_135_135;

#line 1026 "hlds_out_mode.m"
              {
#line 1026 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Name_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129);
              }
#line 1027 "hlds_out_mode.m"
              {
#line 1027 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_129_129, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131);
              }
#line 1028 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_132_132 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 1028 "hlds_out_mode.m"
              {
#line 1028 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Args_17, hlds__hlds_out__hlds_out_mode__V_132_132, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_131_131, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133);
              }
#line 1030 "hlds_out_mode.m"
              {
#line 1030 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_133_133, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_135_135);
              }
#line 1031 "hlds_out_mode.m"
              {
#line 1031 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_135_135, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1031 "hlds_out_mode.m"
                return;
              }
#line 1025 "hlds_out_mode.m"
            }
#line 1019 "hlds_out_mode.m"
        }
#line 1033 "hlds_out_mode.m"
        break;
#line 1033 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 1034 "hlds_out_mode.m"
        {
#line 1034 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__IsLive_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)));
#line 1034 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Real_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 1034 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)));
#line 1034 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstB_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 3)));
#line 1034 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_115_115;
#line 1034 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_116_116;
#line 1034 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_117_117;
#line 1034 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_119_119;
#line 1034 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_120_120;
#line 1034 "hlds_out_mode.m"
          MR_Integer hlds__hlds_out__hlds_out_mode__V_121_121;
#line 1034 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_122_122;
#line 1034 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_123_123;
#line 1034 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126;

#line 1035 "hlds_out_mode.m"
          {
#line 1035 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044unify(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_115_115);
          }
#line 1036 "hlds_out_mode.m"
          {
#line 1036 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__IsLive_20, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_115_115, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_116_116);
          }
#line 1037 "hlds_out_mode.m"
          {
#line 1037 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Real_21, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_116_116, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_117_117);
          }
#line 1038 "hlds_out_mode.m"
          {
#line 1038 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_117_117, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_119_119);
          }
#line 1039 "hlds_out_mode.m"
          {
#line 1039 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_123_123, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_23));
#line 1039 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "hlds_out_mode.m"
          }
#line 1039 "hlds_out_mode.m"
          {
#line 1039 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_120_120, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA_22));
#line 1039 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_120_120, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_123_123));
#line 1039 "hlds_out_mode.m"
          }
#line 1039 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_121_121 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 1039 "hlds_out_mode.m"
          {
#line 1039 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__V_120_120, hlds__hlds_out__hlds_out_mode__V_121_121, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_119_119, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_122_122);
          }
#line 1041 "hlds_out_mode.m"
          {
#line 1041 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_122_122, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126);
          }
#line 1042 "hlds_out_mode.m"
          {
#line 1042 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_126_126, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1042 "hlds_out_mode.m"
            return;
          }
#line 1034 "hlds_out_mode.m"
        }
#line 1033 "hlds_out_mode.m"
        break;
#line 1033 "hlds_out_mode.m"
      case (MR_Integer) 2:
#line 1044 "hlds_out_mode.m"
        {
#line 1044 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104;
#line 1044 "hlds_out_mode.m"
          MR_Integer hlds__hlds_out__hlds_out_mode__V_106_106;
#line 1044 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_107_107;
#line 1044 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_111_111;
#line 1044 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstB_142 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 1044 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Inst_164 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)));
#line 1044 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Insts_165;
#line 1044 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_173;
#line 1044 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Inst_182;
#line 841 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Insts_183;

#line 1045 "hlds_out_mode.m"
          {
#line 1045 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044merge_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104);
          }
#line 1046 "hlds_out_mode.m"
          {
#line 1046 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Insts_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_165, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_142));
#line 1046 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1046 "hlds_out_mode.m"
          }
#line 1046 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_106_106 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 843 "hlds_out_mode.m"
          {
#line 843 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Inst_164, hlds__hlds_out__hlds_out_mode__V_106_106, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_104_104, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_173);
          }
#line 841 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Inst_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_165, (MR_Integer) 0)));
#line 841 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Insts_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Insts_165, (MR_Integer) 1)));
#line 843 "hlds_out_mode.m"
          {
#line 843 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Inst_182, hlds__hlds_out__hlds_out_mode__V_106_106, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_173, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_107_107);
          }
#line 1048 "hlds_out_mode.m"
          {
#line 1048 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_107_107, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_111_111);
          }
#line 1049 "hlds_out_mode.m"
          {
#line 1049 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_111_111, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1049 "hlds_out_mode.m"
            return;
          }
#line 1044 "hlds_out_mode.m"
        }
#line 1033 "hlds_out_mode.m"
        break;
#line 1033 "hlds_out_mode.m"
      case (MR_Integer) 3:
#line 1033 "hlds_out_mode.m"
#line 1033 "hlds_out_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 0)))) {
#line 1033 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1033 "hlds_out_mode.m"
          case (MR_Integer) 0:
#line 1051 "hlds_out_mode.m"
            {
#line 1051 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 1051 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_25 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 1051 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89;
#line 1051 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_90_90;
#line 1051 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_91_91;
#line 1051 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93;
#line 1051 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95;
#line 1051 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_97_97;
#line 1051 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_98_98;
#line 1051 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100;
#line 1051 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__IsLive_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1051 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Real_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1052 "hlds_out_mode.m"
              {
#line 1052 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044ground(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89);
              }
#line 1053 "hlds_out_mode.m"
              {
#line 1053 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__IsLive_143, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_89_89, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_90_90);
              }
#line 1054 "hlds_out_mode.m"
              {
#line 1054 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Real_144, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_90_90, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_91_91);
              }
#line 1055 "hlds_out_mode.m"
              {
#line 1055 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Uniq_25, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_91_91, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93);
              }
#line 1056 "hlds_out_mode.m"
              {
#line 1056 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_93_93, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95);
              }
#line 1057 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_97_97 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 1057 "hlds_out_mode.m"
              {
#line 1057 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__SubInstName_24, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_97_97, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_95_95, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_98_98);
              }
#line 1059 "hlds_out_mode.m"
              {
#line 1059 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_98_98, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100);
              }
#line 1060 "hlds_out_mode.m"
              {
#line 1060 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_100_100, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1060 "hlds_out_mode.m"
                return;
              }
#line 1051 "hlds_out_mode.m"
            }
#line 1033 "hlds_out_mode.m"
            break;
#line 1033 "hlds_out_mode.m"
          case (MR_Integer) 1:
#line 1062 "hlds_out_mode.m"
            {
#line 1062 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74;
#line 1062 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_75_75;
#line 1062 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76;
#line 1062 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78;
#line 1062 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80;
#line 1062 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_82_82;
#line 1062 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83;
#line 1062 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85;
#line 1062 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__IsLive_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1062 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Real_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1062 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 1062 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_148 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)))) & (MR_Integer) 7);

#line 1063 "hlds_out_mode.m"
              {
#line 1063 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044any(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74);
              }
#line 1064 "hlds_out_mode.m"
              {
#line 1064 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_is_live_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__IsLive_145, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_75_75);
              }
#line 1065 "hlds_out_mode.m"
              {
#line 1065 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_real_comma_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Real_146, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_75_75, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76);
              }
#line 1066 "hlds_out_mode.m"
              {
#line 1066 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Uniq_148, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78);
              }
#line 1067 "hlds_out_mode.m"
              {
#line 1067 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_78_78, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80);
              }
#line 1068 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_82_82 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 1068 "hlds_out_mode.m"
              {
#line 1068 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__SubInstName_147, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_82_82, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_80_80, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83);
              }
#line 1070 "hlds_out_mode.m"
              {
#line 1070 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_83_83, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85);
              }
#line 1071 "hlds_out_mode.m"
              {
#line 1071 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_85_85, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1071 "hlds_out_mode.m"
                return;
              }
#line 1062 "hlds_out_mode.m"
            }
#line 1033 "hlds_out_mode.m"
            break;
#line 1033 "hlds_out_mode.m"
          case (MR_Integer) 2:
#line 1073 "hlds_out_mode.m"
            {
#line 1073 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65;
#line 1073 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_67_67;
#line 1073 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68;
#line 1073 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70;
#line 1073 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));

#line 1074 "hlds_out_mode.m"
              {
#line 1074 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044shared_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65);
              }
#line 1075 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_67_67 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 1075 "hlds_out_mode.m"
              {
#line 1075 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__SubInstName_149, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_67_67, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68);
              }
#line 1077 "hlds_out_mode.m"
              {
#line 1077 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_68_68, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70);
              }
#line 1078 "hlds_out_mode.m"
              {
#line 1078 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1078 "hlds_out_mode.m"
                return;
              }
#line 1073 "hlds_out_mode.m"
            }
#line 1033 "hlds_out_mode.m"
            break;
#line 1033 "hlds_out_mode.m"
          case (MR_Integer) 3:
#line 1080 "hlds_out_mode.m"
            {
#line 1080 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56;
#line 1080 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_58_58;
#line 1080 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59;
#line 1080 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61;
#line 1080 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));

#line 1081 "hlds_out_mode.m"
              {
#line 1081 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044mostly_uniq_inst(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56);
              }
#line 1082 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_58_58 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 1082 "hlds_out_mode.m"
              {
#line 1082 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__SubInstName_150, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_58_58, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_56_56, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59);
              }
#line 1084 "hlds_out_mode.m"
              {
#line 1084 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61);
              }
#line 1085 "hlds_out_mode.m"
              {
#line 1085 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_61_61, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1085 "hlds_out_mode.m"
                return;
              }
#line 1080 "hlds_out_mode.m"
            }
#line 1033 "hlds_out_mode.m"
            break;
#line 1033 "hlds_out_mode.m"
          case (MR_Integer) 4:
#line 1087 "hlds_out_mode.m"
            {
#line 1087 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniqueness_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 1087 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)));
#line 1087 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__TypeVarSet_28;
#line 1087 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_46_46;
#line 1087 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48;
#line 1087 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
#line 1087 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52;

#line 1088 "hlds_out_mode.m"
              {
#line 1088 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044typed_ground(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_46_46);
              }
#line 1089 "hlds_out_mode.m"
              {
#line 1089 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Uniqueness_26, (MR_String) "shared", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_46_46, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48);
              }
#line 1090 "hlds_out_mode.m"
              {
#line 1090 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ", ", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
              }
#line 1091 "hlds_out_mode.m"
              {
#line 1091 "hlds_out_mode.m"
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_mode__TypeVarSet_28);
              }
#line 1092 "hlds_out_mode.m"
              {
#line 1092 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__TypeVarSet_28, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Type_27, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52);
              }
#line 1093 "hlds_out_mode.m"
              {
#line 1093 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_52_52, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1093 "hlds_out_mode.m"
                return;
              }
#line 1087 "hlds_out_mode.m"
            }
#line 1033 "hlds_out_mode.m"
            break;
#line 1033 "hlds_out_mode.m"
          case (MR_Integer) 5:
#line 1095 "hlds_out_mode.m"
            {
#line 1095 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;
#line 1095 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35;
#line 1095 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37;
#line 1095 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_39_39;
#line 1095 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40;
#line 1095 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42;
#line 1095 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 2)));
#line 1095 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Type_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_9, (MR_Integer) 1)));
#line 1095 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__TypeVarSet_153;

#line 1096 "hlds_out_mode.m"
              {
#line 1096 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) "\044typed_inst(", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31_31, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
              }
#line 1097 "hlds_out_mode.m"
              {
#line 1097 "hlds_out_mode.m"
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_mode__TypeVarSet_153);
              }
#line 1098 "hlds_out_mode.m"
              {
#line 1098 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__TypeVarSet_153, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Type_152, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35);
              }
#line 1099 "hlds_out_mode.m"
              {
#line 1099 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_35_35, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37);
              }
#line 1100 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_39_39 = (hlds__hlds_out__hlds_out_mode__Indent_11 + (MR_Integer) 1);
#line 1100 "hlds_out_mode.m"
              {
#line 1100 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__SubInstName_151, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__V_39_39, hlds__hlds_out__hlds_out_mode__Lang_12, hlds__hlds_out__hlds_out_mode__InclAddr_13, hlds__hlds_out__hlds_out_mode__InstVarSet_14, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
              }
#line 1102 "hlds_out_mode.m"
              {
#line 1102 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, hlds__hlds_out__hlds_out_mode__Indent_11, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42);
              }
#line 1103 "hlds_out_mode.m"
              {
#line 1103 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_154, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30);
#line 1103 "hlds_out_mode.m"
                return;
              }
#line 1095 "hlds_out_mode.m"
            }
#line 1033 "hlds_out_mode.m"
            break;
#line 1033 "hlds_out_mode.m"
        }
#line 1033 "hlds_out_mode.m"
        break;
#line 1033 "hlds_out_mode.m"
    }
#line 1011 "hlds_out_mode.m"
  }
#line 1006 "hlds_out_mode.m"
}

#line 993 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
#line 993 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_1,
#line 993 "hlds_out_mode.m"
  MR_Integer * hlds__hlds_out__hlds_out_mode__InstAddr_2)
#line 993 "hlds_out_mode.m"
{
#line 995 "hlds_out_mode.m"
  {
#line 995 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 998 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__Inst_1 ;
		{
#line 998 "hlds_out_mode.m"

    InstAddr = Inst;

#line 3504 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 *hlds__hlds_out__hlds_out_mode__InstAddr_2  = InstAddr;
#line 998 "hlds_out_mode.m"
}
#line 995 "hlds_out_mode.m"
  }
#line 993 "hlds_out_mode.m"
}

#line 958 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
#line 958 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 958 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 958 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent0_2,
#line 958 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 958 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 958 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 958 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 958 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7)
#line 958 "hlds_out_mode.m"
{
#line 962 "hlds_out_mode.m"
  while (MR_TRUE)
#line 962 "hlds_out_mode.m"
    {
#line 962 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 962 "hlds_out_mode.m"
      {
#line 962 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 962 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 962 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6;
#line 962 "hlds_out_mode.m"
        else
#line 964 "hlds_out_mode.m"
          {
#line 964 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 964 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 964 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_15, (MR_Integer) 0)));
#line 964 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_15, (MR_Integer) 1)));
#line 964 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__Indent1_24 = (hlds__hlds_out__hlds_out_mode__Indent0_2 + (MR_Integer) 1);
#line 964 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__Indent2_25 = (hlds__hlds_out__hlds_out_mode__Indent1_24 + (MR_Integer) 1);
#line 964 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;

#line 973 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__Args_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 969 "hlds_out_mode.m"
              {
#line 969 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43;
#line 969 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45;
#line 3579 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 970 "hlds_out_mode.m"
                {
#line 970 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43);
                }
#line 971 "hlds_out_mode.m"
                {
#line 971 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__ConsId_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_43_43, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45);
                }
#line 3592 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3594 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3596 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_45_45, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
                }
#line 969 "hlds_out_mode.m"
              }
#line 973 "hlds_out_mode.m"
            else
#line 974 "hlds_out_mode.m"
              {
#line 974 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
#line 974 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36;
#line 974 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38;
#line 974 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;
#line 974 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40;
#line 974 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Inst_60;
#line 974 "hlds_out_mode.m"
                MR_Word hlds__hlds_out__hlds_out_mode__Insts_61;
#line 974 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_69;
#line 3621 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3623 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 975 "hlds_out_mode.m"
                {
#line 975 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34);
                }
#line 976 "hlds_out_mode.m"
                {
#line 976 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__ConsId_22, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36);
                }
#line 3636 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3638 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3640 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "(\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
                }
#line 841 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Inst_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Args_23, (MR_Integer) 0)));
#line 841 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Insts_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__Args_23, (MR_Integer) 1)));
#line 843 "hlds_out_mode.m"
                {
#line 843 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Inst_60, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_69);
                }
#line 845 "hlds_out_mode.m"
                {
#line 845 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Insts_61, hlds__hlds_out__hlds_out_mode__Indent2_25, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_69, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
                }
#line 980 "hlds_out_mode.m"
                {
#line 980 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent1_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40);
                }
#line 3662 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3664 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3666 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) ")\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_40_40, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47);
                }
#line 974 "hlds_out_mode.m"
              }
#line 985 "hlds_out_mode.m"
            if ((hlds__hlds_out__hlds_out_mode__BoundInsts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 984 "hlds_out_mode.m"
              *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47;
#line 985 "hlds_out_mode.m"
            else
#line 986 "hlds_out_mode.m"
              {
#line 986 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48;
#line 986 "hlds_out_mode.m"
                MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
#line 3683 "hlds.hlds_out.hlds_out_mode.c"
                void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 987 "hlds_out_mode.m"
                {
#line 987 "hlds_out_mode.m"
                  parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent0_2, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_47_47, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48);
                }
#line 3691 "hlds.hlds_out.hlds_out_mode.c"
                hlds__hlds_out__hlds_out_mode__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3693 "hlds.hlds_out.hlds_out_mode.c"
                {
#line 3695 "hlds.hlds_out.hlds_out_mode.c"
                  hlds__hlds_out__hlds_out_mode__func_3(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) ";\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_48_48, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
                }
#line 989 "hlds_out_mode.m"
                /* direct tailcall eliminated */
#line 989 "hlds_out_mode.m"
                {
#line 989 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__BoundInsts_16;
#line 989 "hlds_out_mode.m"
                  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;

#line 989 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6;
#line 989 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 989 "hlds_out_mode.m"
                }
#line 989 "hlds_out_mode.m"
                continue;
#line 986 "hlds_out_mode.m"
              }
#line 964 "hlds_out_mode.m"
          }
#line 962 "hlds_out_mode.m"
      }
#line 962 "hlds_out_mode.m"
      break;
#line 962 "hlds_out_mode.m"
    }
#line 958 "hlds_out_mode.m"
}

#line 859 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(
#line 859 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106,
#line 859 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_8,
#line 859 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 859 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 859 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 859 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 859 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_30,
#line 859 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31)
#line 859 "hlds_out_mode.m"
{
#line 863 "hlds_out_mode.m"
  {
#line 863 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 863 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 863 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39;

#line 864 "hlds_out_mode.m"
    {
#line 864 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
    }
#line 867 "hlds_out_mode.m"
#line 867 "hlds_out_mode.m"
    switch (hlds__hlds_out__hlds_out_mode__InclAddr_11) {
#line 867 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 867 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 868 "hlds_out_mode.m"
        {
#line 868 "hlds_out_mode.m"
          MR_Integer hlds__hlds_out__hlds_out_mode__InstAddr_14;
#line 868 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__InstAddrStr_15;
#line 868 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37;

#line 869 "hlds_out_mode.m"
          {
#line 869 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(hlds__hlds_out__hlds_out_mode__Inst_8, &hlds__hlds_out__hlds_out_mode__InstAddr_14);
          }
#line 870 "hlds_out_mode.m"
          {
#line 870 "hlds_out_mode.m"
            mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19], (MR_Integer) 2, hlds__hlds_out__hlds_out_mode__InstAddr_14, &hlds__hlds_out__hlds_out_mode__InstAddrStr_15);
          }
#line 871 "hlds_out_mode.m"
          {
#line 871 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, hlds__hlds_out__hlds_out_mode__InstAddrStr_15, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37);
          }
#line 872 "hlds_out_mode.m"
          {
#line 872 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_String) ": ", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_37_37, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39);
          }
#line 868 "hlds_out_mode.m"
        }
#line 867 "hlds_out_mode.m"
        break;
#line 867 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 866 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 867 "hlds_out_mode.m"
        break;
#line 867 "hlds_out_mode.m"
    }
#line 885 "hlds_out_mode.m"
#line 885 "hlds_out_mode.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_8)) {
#line 885 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 885 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 885 "hlds_out_mode.m"
#line 885 "hlds_out_mode.m"
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_mode__Inst_8)) {
#line 885 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 885 "hlds_out_mode.m"
          case (MR_Integer) 0:
#line 886 "hlds_out_mode.m"
            {
#line 887 "hlds_out_mode.m"
              {
#line 887 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_String) "free\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 887 "hlds_out_mode.m"
                return;
              }
#line 886 "hlds_out_mode.m"
            }
#line 885 "hlds_out_mode.m"
            break;
#line 885 "hlds_out_mode.m"
          case (MR_Integer) 1:
#line 954 "hlds_out_mode.m"
            {
#line 955 "hlds_out_mode.m"
              {
#line 955 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_String) "not_reached\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 955 "hlds_out_mode.m"
                return;
              }
#line 954 "hlds_out_mode.m"
            }
#line 885 "hlds_out_mode.m"
            break;
#line 885 "hlds_out_mode.m"
        }
#line 885 "hlds_out_mode.m"
        break;
#line 885 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 889 "hlds_out_mode.m"
        {
#line 890 "hlds_out_mode.m"
          {
#line 890 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_String) "free(with some type)\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 890 "hlds_out_mode.m"
            return;
          }
#line 889 "hlds_out_mode.m"
        }
#line 885 "hlds_out_mode.m"
        break;
#line 885 "hlds_out_mode.m"
      case (MR_Integer) 2:
#line 875 "hlds_out_mode.m"
        {
#line 875 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Uniq_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)));
#line 875 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 875 "hlds_out_mode.m"
          MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97;

#line 880 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 882 "hlds_out_mode.m"
            {
#line 882 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_any_uniqueness_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, hlds__hlds_out__hlds_out_mode__Uniq_16, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97);
            }
#line 880 "hlds_out_mode.m"
          else
#line 877 "hlds_out_mode.m"
            {
#line 877 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_18 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_17), (MR_Integer) 1);

#line 878 "hlds_out_mode.m"
              {
#line 878 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_any_pred_inst_info_6_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__Uniq_16, hlds__hlds_out__hlds_out_mode__PredInstInfo_18, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97);
              }
#line 877 "hlds_out_mode.m"
            }
#line 884 "hlds_out_mode.m"
          {
#line 884 "hlds_out_mode.m"
            parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_97_97, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 884 "hlds_out_mode.m"
            return;
          }
#line 875 "hlds_out_mode.m"
        }
#line 885 "hlds_out_mode.m"
        break;
#line 885 "hlds_out_mode.m"
      case (MR_Integer) 3:
#line 885 "hlds_out_mode.m"
#line 885 "hlds_out_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 0)))) {
#line 885 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 885 "hlds_out_mode.m"
          case (MR_Integer) 0:
#line 892 "hlds_out_mode.m"
            {
#line 892 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstResults_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));
#line 892 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 3)));
#line 892 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63;
#line 892 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65;
#line 892 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74;
#line 892 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__V_80_80;
#line 892 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87;
#line 892 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_88_88;
#line 892 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));

#line 893 "hlds_out_mode.m"
              {
#line 893 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, hlds__hlds_out__hlds_out_mode__Uniq_100, (MR_String) "bound", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63);
              }
#line 894 "hlds_out_mode.m"
              {
#line 894 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_String) "(\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_63_63, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65);
              }
#line 897 "hlds_out_mode.m"
#line 897 "hlds_out_mode.m"
              switch (hlds__hlds_out__hlds_out_mode__Lang_10) {
#line 897 "hlds_out_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 897 "hlds_out_mode.m"
                case (MR_Integer) 1:
#line 898 "hlds_out_mode.m"
                  {
#line 898 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_107_107;
#line 898 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__InstResultsTerm_22;
#line 898 "hlds_out_mode.m"
                    MR_String hlds__hlds_out__hlds_out_mode__InstResultsStr_23;
#line 898 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_66_66;
#line 898 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_67_67;
#line 898 "hlds_out_mode.m"
                    MR_Integer hlds__hlds_out__hlds_out_mode__V_69_69;
#line 898 "hlds_out_mode.m"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70;
#line 898 "hlds_out_mode.m"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72;

#line 900 "hlds_out_mode.m"
                    {
#line 900 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_66_66 = mercury__term__context_init_0_f_0();
                    }
#line 900 "hlds_out_mode.m"
                    {
#line 900 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__InstResultsTerm_22 = hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__V_66_66, hlds__hlds_out__hlds_out_mode__InstResults_20);
                    }
#line 3991 "hlds.hlds_out.hlds_out_mode.c"
                    hlds__hlds_out__hlds_out_mode__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 902 "hlds_out_mode.m"
                    {
#line 902 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_67_67 = mercury__varset__init_0_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_107_107);
                    }
#line 902 "hlds_out_mode.m"
                    {
#line 902 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__InstResultsStr_23 = parse_tree__mercury_to_mercury__mercury_term_to_string_3_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_107_107, hlds__hlds_out__hlds_out_mode__V_67_67, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__InstResultsTerm_22);
                    }
#line 903 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_69_69 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 903 "hlds_out_mode.m"
                    {
#line 903 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, hlds__hlds_out__hlds_out_mode__V_69_69, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70);
                    }
#line 904 "hlds_out_mode.m"
                    {
#line 904 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, hlds__hlds_out__hlds_out_mode__InstResultsStr_23, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_70_70, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72);
                    }
#line 905 "hlds_out_mode.m"
                    {
#line 905 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_String) ",\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_72_72, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74);
                    }
#line 898 "hlds_out_mode.m"
                  }
#line 897 "hlds_out_mode.m"
                  break;
#line 897 "hlds_out_mode.m"
                case (MR_Integer) 0:
#line 896 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_65_65;
#line 897 "hlds_out_mode.m"
                  break;
#line 897 "hlds_out_mode.m"
              }
#line 914 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_80_80 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 4034 "hlds.hlds_out.hlds_out_mode.c"
#line 4035 "hlds.hlds_out.hlds_out_mode.c"
              switch (hlds__hlds_out__hlds_out_mode__Lang_10) {
#line 4037 "hlds.hlds_out.hlds_out_mode.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 4039 "hlds.hlds_out.hlds_out_mode.c"
                case (MR_Integer) 1:
#line 4041 "hlds.hlds_out.hlds_out_mode.c"
                  {
#line 4043 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Integer hlds__hlds_out__hlds_out_mode__V_75_75 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 4045 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76;
#line 4047 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_79_79;
#line 4049 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_81_81;
#line 4051 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Integer hlds__hlds_out__hlds_out_mode__V_83_83;
#line 4053 "hlds.hlds_out.hlds_out_mode.c"
                    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_84_84;

#line 911 "hlds_out_mode.m"
                    {
#line 911 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, hlds__hlds_out__hlds_out_mode__V_75_75, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76);
                    }
#line 912 "hlds_out_mode.m"
                    {
#line 912 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_String) "[\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_76_76, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_79_79);
                    }
#line 914 "hlds_out_mode.m"
                    {
#line 914 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, hlds__hlds_out__hlds_out_mode__BoundInsts_21, hlds__hlds_out__hlds_out_mode__V_80_80, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_79_79, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_81_81);
                    }
#line 920 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_83_83 = (hlds__hlds_out__hlds_out_mode__Indent_9 + (MR_Integer) 1);
#line 920 "hlds_out_mode.m"
                    {
#line 920 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, hlds__hlds_out__hlds_out_mode__V_83_83, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_81_81, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_84_84);
                    }
#line 921 "hlds_out_mode.m"
                    {
#line 921 "hlds_out_mode.m"
                      parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_String) "]\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_84_84, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87);
                    }
#line 4083 "hlds.hlds_out.hlds_out_mode.c"
                  }
#line 4085 "hlds.hlds_out.hlds_out_mode.c"
                  break;
#line 4087 "hlds.hlds_out.hlds_out_mode.c"
                case (MR_Integer) 0:
#line 914 "hlds_out_mode.m"
                  {
#line 914 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, hlds__hlds_out__hlds_out_mode__BoundInsts_21, hlds__hlds_out__hlds_out_mode__V_80_80, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_74_74, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87);
                  }
#line 4094 "hlds.hlds_out.hlds_out_mode.c"
                  break;
#line 4096 "hlds.hlds_out.hlds_out_mode.c"
              }
#line 923 "hlds_out_mode.m"
              {
#line 923 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_87_87, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_88_88);
              }
#line 924 "hlds_out_mode.m"
              {
#line 924 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_String) ")\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_88_88, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 924 "hlds_out_mode.m"
                return;
              }
#line 892 "hlds_out_mode.m"
            }
#line 885 "hlds_out_mode.m"
            break;
#line 885 "hlds_out_mode.m"
          case (MR_Integer) 1:
#line 926 "hlds_out_mode.m"
            {
#line 926 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59;
#line 926 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Uniq_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 926 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__HOInstInfo_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));

#line 931 "hlds_out_mode.m"
              if ((hlds__hlds_out__hlds_out_mode__HOInstInfo_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "hlds_out_mode.m"
                {
#line 933 "hlds_out_mode.m"
                  {
#line 933 "hlds_out_mode.m"
                    parse_tree__mercury_to_mercury__mercury_format_uniqueness_4_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, hlds__hlds_out__hlds_out_mode__Uniq_103, (MR_String) "ground", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59);
                  }
#line 932 "hlds_out_mode.m"
                }
#line 931 "hlds_out_mode.m"
              else
#line 928 "hlds_out_mode.m"
                {
#line 928 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__PredInstInfo_101 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__HOInstInfo_104), (MR_Integer) 1);

#line 929 "hlds_out_mode.m"
                  {
#line 929 "hlds_out_mode.m"
                    parse_tree__mercury_to_mercury__mercury_format_ground_pred_inst_info_6_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__Uniq_103, hlds__hlds_out__hlds_out_mode__PredInstInfo_101, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59);
                  }
#line 928 "hlds_out_mode.m"
                }
#line 935 "hlds_out_mode.m"
              {
#line 935 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_59_59, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 935 "hlds_out_mode.m"
                return;
              }
#line 926 "hlds_out_mode.m"
            }
#line 885 "hlds_out_mode.m"
            break;
#line 885 "hlds_out_mode.m"
          case (MR_Integer) 2:
#line 937 "hlds_out_mode.m"
            {
#line 937 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 937 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_53_53;

#line 938 "hlds_out_mode.m"
              {
#line 938 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, hlds__hlds_out__hlds_out_mode__InstVarSet_12, (MR_Integer) 0, hlds__hlds_out__hlds_out_mode__Var_24, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_53_53);
              }
#line 939 "hlds_out_mode.m"
              {
#line 939 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_53_53, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 939 "hlds_out_mode.m"
                return;
              }
#line 937 "hlds_out_mode.m"
            }
#line 885 "hlds_out_mode.m"
            break;
#line 885 "hlds_out_mode.m"
          case (MR_Integer) 3:
#line 941 "hlds_out_mode.m"
            {
#line 941 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 941 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__ConstrainedInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));
#line 941 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_48_48 = (MR_Word) hlds__hlds_out__hlds_out_mode__InstVarSet_12;
#line 941 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_49_49;

#line 942 "hlds_out_mode.m"
              {
#line 942 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__mercury_format_constrained_inst_vars_6_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6], (MR_Integer) 1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_48_48)), hlds__hlds_out__hlds_out_mode__Vars_25, hlds__hlds_out__hlds_out_mode__ConstrainedInst_26, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_49_49);
              }
#line 944 "hlds_out_mode.m"
              {
#line 944 "hlds_out_mode.m"
                parse_tree__mercury_to_mercury__add_string_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, (MR_String) "\n", hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_49_49, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 944 "hlds_out_mode.m"
                return;
              }
#line 941 "hlds_out_mode.m"
            }
#line 885 "hlds_out_mode.m"
            break;
#line 885 "hlds_out_mode.m"
          case (MR_Integer) 4:
#line 950 "hlds_out_mode.m"
            {
#line 950 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));

#line 951 "hlds_out_mode.m"
              {
#line 951 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, hlds__hlds_out__hlds_out_mode__InstName_29, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 951 "hlds_out_mode.m"
                return;
              }
#line 950 "hlds_out_mode.m"
            }
#line 885 "hlds_out_mode.m"
            break;
#line 885 "hlds_out_mode.m"
          case (MR_Integer) 5:
#line 946 "hlds_out_mode.m"
            {
#line 946 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Name_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 1)));
#line 946 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_8, (MR_Integer) 2)));
#line 946 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_44_44;

#line 947 "hlds_out_mode.m"
              {
#line 947 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 947 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_44_44, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_27));
#line 947 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_44_44, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Args_28));
#line 947 "hlds_out_mode.m"
              }
#line 947 "hlds_out_mode.m"
              {
#line 947 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_8_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_106, hlds__hlds_out__hlds_out_mode__V_44_44, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_39_39, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_31);
#line 947 "hlds_out_mode.m"
                return;
              }
#line 946 "hlds_out_mode.m"
            }
#line 885 "hlds_out_mode.m"
            break;
#line 885 "hlds_out_mode.m"
        }
#line 885 "hlds_out_mode.m"
        break;
#line 885 "hlds_out_mode.m"
    }
#line 863 "hlds_out_mode.m"
  }
#line 859 "hlds_out_mode.m"
}

#line 836 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
#line 836 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_26,
#line 836 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 836 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_2,
#line 836 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_3,
#line 836 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_4,
#line 836 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_5,
#line 836 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6,
#line 836 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7)
#line 836 "hlds_out_mode.m"
{
#line 840 "hlds_out_mode.m"
  while (MR_TRUE)
#line 840 "hlds_out_mode.m"
    {
#line 840 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 840 "hlds_out_mode.m"
      {
#line 840 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 840 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 840 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6;
#line 840 "hlds_out_mode.m"
        else
#line 842 "hlds_out_mode.m"
          {
#line 842 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 842 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__Insts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 842 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_24;

#line 843 "hlds_out_mode.m"
            {
#line 843 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_26, hlds__hlds_out__hlds_out_mode__Inst_15, hlds__hlds_out__hlds_out_mode__Indent_2, hlds__hlds_out__hlds_out_mode__Lang_3, hlds__hlds_out__hlds_out_mode__InclAddr_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_24);
            }
#line 845 "hlds_out_mode.m"
            /* direct tailcall eliminated */
#line 845 "hlds_out_mode.m"
            {
#line 845 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__Insts_16;
#line 845 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_24_24;

#line 845 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_6 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_6;
#line 845 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 845 "hlds_out_mode.m"
            }
#line 845 "hlds_out_mode.m"
            continue;
#line 842 "hlds_out_mode.m"
          }
#line 840 "hlds_out_mode.m"
      }
#line 840 "hlds_out_mode.m"
      break;
#line 840 "hlds_out_mode.m"
    }
#line 836 "hlds_out_mode.m"
}

#line 771 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(
#line 771 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52,
#line 771 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__UniMode_8,
#line 771 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_9,
#line 771 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_10,
#line 771 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_11,
#line 771 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_12,
#line 771 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22,
#line 771 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23)
#line 771 "hlds_out_mode.m"
{
#line 776 "hlds_out_mode.m"
  {
#line 776 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 776 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_14;
#line 776 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_15;
#line 776 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_16;
#line 776 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_17;
#line 776 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstA1Addr_18;
#line 776 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstA2Addr_19;
#line 776 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstB1Addr_20;
#line 776 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstB2Addr_21;
#line 776 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_8, (MR_Integer) 0)));
#line 776 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_8, (MR_Integer) 1)));
#line 776 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26;
#line 776 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28;
#line 776 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29;
#line 776 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30;
#line 776 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 776 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36;
#line 776 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38;
#line 776 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44;
#line 4417 "hlds.hlds_out.hlds_out_mode.c"
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 777 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, (MR_Integer) 0)));
#line 777 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_24_24, (MR_Integer) 1)));
#line 777 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 0)));
#line 777 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, (MR_Integer) 1)));
#line 998 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstA1_14 ;
		{
#line 998 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4441 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstA1Addr_18  = InstAddr;
#line 998 "hlds_out_mode.m"
}
#line 998 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstA2_16 ;
		{
#line 998 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4461 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstA2Addr_19  = InstAddr;
#line 998 "hlds_out_mode.m"
}
#line 998 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstB1_15 ;
		{
#line 998 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4481 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstB1Addr_20  = InstAddr;
#line 998 "hlds_out_mode.m"
}
#line 998 "hlds_out_mode.m"
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  hlds__hlds_out__hlds_out_mode__InstB2_17 ;
		{
#line 998 "hlds_out_mode.m"

    InstAddr = Inst;

#line 4501 "hlds.hlds_out.hlds_out_mode.c"

		;}
#undef MR_PROC_LABEL
	 hlds__hlds_out__hlds_out_mode__InstB2Addr_21  = InstAddr;
#line 998 "hlds_out_mode.m"
}
#line 783 "hlds_out_mode.m"
    {
#line 783 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_22, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26);
    }
#line 4513 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4515 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 4517 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "old lhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_26_26, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28);
    }
#line 785 "hlds_out_mode.m"
    {
#line 785 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstA1_14, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_28_28, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29);
    }
#line 788 "hlds_out_mode.m"
    {
#line 788 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30);
    }
#line 789 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB1Addr_20 == hlds__hlds_out__hlds_out_mode__InstA1Addr_18);
#line 792 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 791 "hlds_out_mode.m"
      {
#line 4536 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4539 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4541 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "old rhs inst: same as old lhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
        }
#line 791 "hlds_out_mode.m"
      }
#line 792 "hlds_out_mode.m"
    else
#line 793 "hlds_out_mode.m"
      {
#line 793 "hlds_out_mode.m"
        MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34;
#line 4552 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4555 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4557 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "old rhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34);
        }
#line 794 "hlds_out_mode.m"
        {
#line 794 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstB1_15, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_34_34, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
        }
#line 793 "hlds_out_mode.m"
      }
#line 798 "hlds_out_mode.m"
    {
#line 798 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36);
    }
#line 799 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstA2Addr_19 == hlds__hlds_out__hlds_out_mode__InstA1Addr_18);
#line 802 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 801 "hlds_out_mode.m"
      {
#line 4578 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4581 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4583 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_3(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new lhs inst: unchanged\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
        }
#line 801 "hlds_out_mode.m"
      }
#line 802 "hlds_out_mode.m"
    else
#line 805 "hlds_out_mode.m"
      {
#line 802 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstA2Addr_19 == hlds__hlds_out__hlds_out_mode__InstB1Addr_20);
#line 805 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 804 "hlds_out_mode.m"
          {
#line 4598 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4601 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4603 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_4(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new lhs inst: changed to old rhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
            }
#line 804 "hlds_out_mode.m"
          }
#line 805 "hlds_out_mode.m"
        else
#line 806 "hlds_out_mode.m"
          {
#line 806 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42;
#line 4614 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4617 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4619 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_5(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new lhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_36_36, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42);
            }
#line 807 "hlds_out_mode.m"
            {
#line 807 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstA2_16, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_42_42, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38);
            }
#line 806 "hlds_out_mode.m"
          }
#line 805 "hlds_out_mode.m"
      }
#line 811 "hlds_out_mode.m"
    {
#line 811 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_38_38, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44);
    }
#line 812 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB2Addr_21 == hlds__hlds_out__hlds_out_mode__InstB1Addr_20);
#line 815 "hlds_out_mode.m"
    if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 814 "hlds_out_mode.m"
      {
#line 4642 "hlds.hlds_out.hlds_out_mode.c"
        void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4645 "hlds.hlds_out.hlds_out_mode.c"
        {
#line 4647 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__func_6(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new rhs inst: unchanged\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
#line 4649 "hlds.hlds_out.hlds_out_mode.c"
          return;
        }
#line 814 "hlds_out_mode.m"
      }
#line 815 "hlds_out_mode.m"
    else
#line 818 "hlds_out_mode.m"
      {
#line 815 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__succeeded = (hlds__hlds_out__hlds_out_mode__InstB2Addr_21 == hlds__hlds_out__hlds_out_mode__InstA2Addr_19);
#line 818 "hlds_out_mode.m"
        if (hlds__hlds_out__hlds_out_mode__succeeded)
#line 817 "hlds_out_mode.m"
          {
#line 4664 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4667 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4669 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_7(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new rhs inst: changed to new lhs inst\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
#line 4671 "hlds.hlds_out.hlds_out_mode.c"
              return;
            }
#line 817 "hlds_out_mode.m"
          }
#line 818 "hlds_out_mode.m"
        else
#line 819 "hlds_out_mode.m"
          {
#line 819 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50;
#line 4682 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4685 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4687 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_8(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52), ((MR_Box) ((MR_String) "new rhs inst:\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_44_44, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50);
            }
#line 820 "hlds_out_mode.m"
            {
#line 820 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_52, hlds__hlds_out__hlds_out_mode__InstB2_17, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_50_50, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_23);
#line 820 "hlds_out_mode.m"
              return;
            }
#line 819 "hlds_out_mode.m"
          }
#line 818 "hlds_out_mode.m"
      }
#line 776 "hlds_out_mode.m"
  }
#line 771 "hlds_out_mode.m"
}

#line 743 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0(
#line 743 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37,
#line 743 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 743 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum_2,
#line 743 "hlds_out_mode.m"
  MR_Integer hlds__hlds_out__hlds_out_mode__Indent_3,
#line 743 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_4,
#line 743 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InclAddr_5,
#line 743 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_6,
#line 743 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7,
#line 743 "hlds_out_mode.m"
  MR_Box * hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8)
#line 743 "hlds_out_mode.m"
{
#line 747 "hlds_out_mode.m"
  while (MR_TRUE)
#line 747 "hlds_out_mode.m"
    {
#line 747 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 747 "hlds_out_mode.m"
      {
#line 747 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 747 "hlds_out_mode.m"
        if ((hlds__hlds_out__hlds_out_mode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 747 "hlds_out_mode.m"
          *hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_8 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7;
#line 747 "hlds_out_mode.m"
        else
#line 749 "hlds_out_mode.m"
          {
#line 749 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__UniMode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 749 "hlds_out_mode.m"
            MR_Word hlds__hlds_out__hlds_out_mode__UniModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 749 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27;
#line 749 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29;
#line 749 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30;
#line 749 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32;
#line 749 "hlds_out_mode.m"
            MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;
#line 749 "hlds_out_mode.m"
            MR_Integer hlds__hlds_out__hlds_out_mode__V_34_34;
#line 4764 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 4766 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 4768 "hlds.hlds_out.hlds_out_mode.c"
            void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 750 "hlds_out_mode.m"
            {
#line 750 "hlds_out_mode.m"
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, hlds__hlds_out__hlds_out_mode__Indent_3, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27);
            }
#line 4776 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4778 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4780 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_0(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) ((MR_String) "argument ")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_27_27, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29);
            }
#line 4783 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 8)));
#line 4785 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4787 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgNum_2)), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_29_29, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30);
            }
#line 4790 "hlds.hlds_out.hlds_out_mode.c"
            hlds__hlds_out__hlds_out_mode__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4792 "hlds.hlds_out.hlds_out_mode.c"
            {
#line 4794 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__func_2(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37), ((MR_Box) ((MR_String) ":\n")), hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_30_30, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32);
            }
#line 754 "hlds_out_mode.m"
            {
#line 754 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_37, hlds__hlds_out__hlds_out_mode__UniMode_17, hlds__hlds_out__hlds_out_mode__Indent_3, hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__InclAddr_5, hlds__hlds_out__hlds_out_mode__InstVarSet_6, hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_32_32, &hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33);
            }
#line 756 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_34_34 = (hlds__hlds_out__hlds_out_mode__ArgNum_2 + (MR_Integer) 1);
#line 756 "hlds_out_mode.m"
            /* direct tailcall eliminated */
#line 756 "hlds_out_mode.m"
            {
#line 756 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1 = hlds__hlds_out__hlds_out_mode__UniModes_18;
#line 756 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__ArgNum__tmp_copy_2 = hlds__hlds_out__hlds_out_mode__V_34_34;
#line 756 "hlds_out_mode.m"
              MR_Box hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_33_33;

#line 756 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0_7 = hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_U_0__tmp_copy_7;
#line 756 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__ArgNum_2 = hlds__hlds_out__hlds_out_mode__ArgNum__tmp_copy_2;
#line 756 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__HeadVar__1_1 = hlds__hlds_out__hlds_out_mode__HeadVar__1__tmp_copy_1;
#line 756 "hlds_out_mode.m"
            }
#line 756 "hlds_out_mode.m"
            continue;
#line 749 "hlds_out_mode.m"
          }
#line 747 "hlds_out_mode.m"
      }
#line 747 "hlds_out_mode.m"
      break;
#line 747 "hlds_out_mode.m"
    }
#line 743 "hlds_out_mode.m"
}

#line 683 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3(
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
      return hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__683__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
#line 683 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 683 "hlds_out_mode.m"
  }
#line 683 "hlds_out_mode.m"
}

#line 675 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2(
#line 675 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg)
#line 675 "hlds_out_mode.m"
{
#line 675 "hlds_out_mode.m"
  {
#line 675 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 675 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;

#line 675 "hlds_out_mode.m"
    {
#line 675 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__675__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
#line 675 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 675 "hlds_out_mode.m"
  }
#line 675 "hlds_out_mode.m"
}

#line 691 "hlds_out_mode.m"
static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1(
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
      return hlds__hlds_out__hlds_out_mode__succeeded = hlds__hlds_out__hlds_out_mode__IntroducedFrom__pred__cons_id_and_args_to_term_full__691__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))));
    }
#line 691 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__succeeded;
#line 691 "hlds_out_mode.m"
  }
#line 691 "hlds_out_mode.m"
}

#line 612 "hlds_out_mode.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(
#line 612 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ConsId_4,
#line 612 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_5,
#line 612 "hlds_out_mode.m"
  MR_Word * hlds__hlds_out__hlds_out_mode__Term_6)
#line 612 "hlds_out_mode.m"
{
#line 617 "hlds_out_mode.m"
  {
#line 617 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;

#line 617 "hlds_out_mode.m"
#line 617 "hlds_out_mode.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4)) {
#line 617 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 617 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 669 "hlds_out_mode.m"
        {
#line 669 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Context_129;

#line 670 "hlds_out_mode.m"
          {
#line 670 "hlds_out_mode.m"
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_129);
          }
#line 672 "hlds_out_mode.m"
          {
#line 672 "hlds_out_mode.m"
            MR_Word base;
#line 672 "hlds_out_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 672 "hlds_out_mode.m"
            *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 672 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[16])));
#line 672 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_129));
#line 672 "hlds_out_mode.m"
          }
#line 669 "hlds_out_mode.m"
        }
#line 617 "hlds_out_mode.m"
        break;
#line 617 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 662 "hlds_out_mode.m"
        {
#line 662 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_25 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__ConsId_4), (MR_Integer) 1);
#line 662 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__V_78_78;
#line 662 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_82_82;
#line 662 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Context_125;
#line 662 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__FunctorName_126;
#line 662 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorName_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_25, (MR_Integer) 0)));
#line 662 "hlds_out_mode.m"
          MR_Integer hlds__hlds_out__hlds_out_mode__Arity_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_25, (MR_Integer) 1)));
#line 662 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__V_151_151;
#line 662 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_157_157;
#line 662 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__V_159_159;
#line 662 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__V_160_160;
#line 662 "hlds_out_mode.m"
          MR_String hlds__hlds_out__hlds_out_mode__V_167_167;

#line 664 "hlds_out_mode.m"
          {
#line 664 "hlds_out_mode.m"
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_125);
          }
#line 666 "hlds_out_mode.m"
          {
#line 666 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_78_78 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorName_127);
          }
#line 5006 "hlds.hlds_out.hlds_out_mode.c"
          hlds__hlds_out__hlds_out_mode__V_157_157 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19];
#line 666 "hlds_out_mode.m"
          {
#line 666 "hlds_out_mode.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_157_157, hlds__hlds_out__hlds_out_mode__Arity_128, &hlds__hlds_out__hlds_out_mode__V_151_151);
          }
#line 665 "hlds_out_mode.m"
          {
#line 665 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_159_159 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_151_151);
          }
#line 666 "hlds_out_mode.m"
          {
#line 666 "hlds_out_mode.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_157_157, hlds__hlds_out__hlds_out_mode__V_78_78, &hlds__hlds_out__hlds_out_mode__V_160_160);
          }
#line 665 "hlds_out_mode.m"
          {
#line 665 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_167_167 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_160_160, hlds__hlds_out__hlds_out_mode__V_159_159);
          }
#line 665 "hlds_out_mode.m"
          {
#line 665 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__FunctorName_126 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_cell_constructor for ", hlds__hlds_out__hlds_out_mode__V_167_167);
          }
#line 667 "hlds_out_mode.m"
          {
#line 667 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 667 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_82_82, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_126));
#line 667 "hlds_out_mode.m"
          }
#line 667 "hlds_out_mode.m"
          {
#line 667 "hlds_out_mode.m"
            MR_Word base;
#line 667 "hlds_out_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 667 "hlds_out_mode.m"
            *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 667 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_82_82));
#line 667 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 667 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_125));
#line 667 "hlds_out_mode.m"
          }
#line 662 "hlds_out_mode.m"
        }
#line 617 "hlds_out_mode.m"
        break;
#line 617 "hlds_out_mode.m"
      case (MR_Integer) 2:
#line 700 "hlds_out_mode.m"
        {
#line 700 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__Context_139;

#line 701 "hlds_out_mode.m"
          {
#line 701 "hlds_out_mode.m"
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_139);
          }
#line 703 "hlds_out_mode.m"
          {
#line 703 "hlds_out_mode.m"
            MR_Word base;
#line 703 "hlds_out_mode.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 703 "hlds_out_mode.m"
            *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 703 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[14])));
#line 703 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_139));
#line 703 "hlds_out_mode.m"
          }
#line 700 "hlds_out_mode.m"
        }
#line 617 "hlds_out_mode.m"
        break;
#line 617 "hlds_out_mode.m"
      case (MR_Integer) 3:
#line 617 "hlds_out_mode.m"
#line 617 "hlds_out_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 0)))) {
#line 617 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 617 "hlds_out_mode.m"
          case (MR_Integer) 0:
#line 705 "hlds_out_mode.m"
            {
#line 705 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_141;

#line 706 "hlds_out_mode.m"
              {
#line 706 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_141);
              }
#line 708 "hlds_out_mode.m"
              {
#line 708 "hlds_out_mode.m"
                MR_Word base;
#line 708 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 708 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 708 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[13])));
#line 708 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_141));
#line 708 "hlds_out_mode.m"
              }
#line 705 "hlds_out_mode.m"
            }
#line 617 "hlds_out_mode.m"
            break;
#line 617 "hlds_out_mode.m"
          case (MR_Integer) 1:
#line 710 "hlds_out_mode.m"
            {
#line 710 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_143;

#line 711 "hlds_out_mode.m"
              {
#line 711 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_143);
              }
#line 713 "hlds_out_mode.m"
              {
#line 713 "hlds_out_mode.m"
                MR_Word base;
#line 713 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 713 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 713 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[11])));
#line 713 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_143));
#line 713 "hlds_out_mode.m"
              }
#line 710 "hlds_out_mode.m"
            }
#line 617 "hlds_out_mode.m"
            break;
#line 617 "hlds_out_mode.m"
          case (MR_Integer) 2:
#line 617 "hlds_out_mode.m"
            {
#line 617 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 617 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode___Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
#line 617 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode___TypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 3)));

#line 618 "hlds_out_mode.m"
              {
#line 618 "hlds_out_mode.m"
                parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__SymName_7, hlds__hlds_out__hlds_out_mode__ArgTerms_5, hlds__hlds_out__hlds_out_mode__Term_6);
#line 618 "hlds_out_mode.m"
                return;
              }
#line 617 "hlds_out_mode.m"
            }
#line 617 "hlds_out_mode.m"
            break;
#line 617 "hlds_out_mode.m"
          case (MR_Integer) 3:
#line 620 "hlds_out_mode.m"
            {
#line 622 "hlds_out_mode.m"
              {
#line 622 "hlds_out_mode.m"
                parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[30], hlds__hlds_out__hlds_out_mode__ArgTerms_5, hlds__hlds_out__hlds_out_mode__Term_6);
#line 622 "hlds_out_mode.m"
                return;
              }
#line 620 "hlds_out_mode.m"
            }
#line 617 "hlds_out_mode.m"
            break;
#line 617 "hlds_out_mode.m"
          case (MR_Integer) 4:
#line 624 "hlds_out_mode.m"
            {
#line 624 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_12;

#line 625 "hlds_out_mode.m"
              {
#line 625 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_12);
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[10])));
#line 627 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 627 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_12));
#line 627 "hlds_out_mode.m"
              }
#line 624 "hlds_out_mode.m"
            }
#line 617 "hlds_out_mode.m"
            break;
#line 617 "hlds_out_mode.m"
          case (MR_Integer) 5:
#line 629 "hlds_out_mode.m"
            {
#line 629 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__Int_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 629 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_106_106;
#line 629 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_114;

#line 630 "hlds_out_mode.m"
              {
#line 630 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_114);
              }
#line 631 "hlds_out_mode.m"
              {
#line 631 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 631 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_106_106, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Int_14));
#line 631 "hlds_out_mode.m"
              }
#line 631 "hlds_out_mode.m"
              {
#line 631 "hlds_out_mode.m"
                MR_Word base;
#line 631 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 631 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 631 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_106_106));
#line 631 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_114));
#line 631 "hlds_out_mode.m"
              }
#line 629 "hlds_out_mode.m"
            }
#line 617 "hlds_out_mode.m"
            break;
#line 617 "hlds_out_mode.m"
          case (MR_Integer) 6:
#line 633 "hlds_out_mode.m"
            {
#line 633 "hlds_out_mode.m"
              MR_Float hlds__hlds_out__hlds_out_mode__Float_15 = MR_unbox_float((MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 633 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_104_104;
#line 633 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_115;

#line 634 "hlds_out_mode.m"
              {
#line 634 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_115);
              }
#line 635 "hlds_out_mode.m"
              {
#line 635 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 635 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_104_104, 1) = MR_box_float(hlds__hlds_out__hlds_out_mode__Float_15);
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_104_104));
#line 635 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 635 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_115));
#line 635 "hlds_out_mode.m"
              }
#line 633 "hlds_out_mode.m"
            }
#line 617 "hlds_out_mode.m"
            break;
#line 617 "hlds_out_mode.m"
          case (MR_Integer) 7:
#line 641 "hlds_out_mode.m"
            {
#line 641 "hlds_out_mode.m"
              MR_Char hlds__hlds_out__hlds_out_mode__Char_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 641 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_100_100;
#line 641 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SymName_117;

#line 642 "hlds_out_mode.m"
              {
#line 642 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_100_100 = mercury__string__from_char_1_f_0(hlds__hlds_out__hlds_out_mode__Char_17);
              }
#line 642 "hlds_out_mode.m"
              {
#line 642 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SymName_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 642 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SymName_117, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_100_100));
#line 642 "hlds_out_mode.m"
              }
#line 643 "hlds_out_mode.m"
              {
#line 643 "hlds_out_mode.m"
                parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__SymName_117, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_mode__Term_6);
#line 643 "hlds_out_mode.m"
                return;
              }
#line 641 "hlds_out_mode.m"
            }
#line 617 "hlds_out_mode.m"
            break;
#line 617 "hlds_out_mode.m"
          case (MR_Integer) 8:
#line 637 "hlds_out_mode.m"
            {
#line 637 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__String_16 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 637 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_102_102;
#line 637 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_116;

#line 638 "hlds_out_mode.m"
              {
#line 638 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_116);
              }
#line 639 "hlds_out_mode.m"
              {
#line 639 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 639 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_102_102, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__String_16));
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_102_102));
#line 639 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_116));
#line 639 "hlds_out_mode.m"
              }
#line 637 "hlds_out_mode.m"
            }
#line 617 "hlds_out_mode.m"
            break;
#line 617 "hlds_out_mode.m"
          case (MR_Integer) 9:
#line 645 "hlds_out_mode.m"
            {
#line 645 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_98_98;
#line 645 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_118;
#line 645 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__FunctorName_119;
#line 645 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__String_120 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));

#line 646 "hlds_out_mode.m"
              {
#line 646 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_118);
              }
#line 647 "hlds_out_mode.m"
              {
#line 647 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__FunctorName_119 = mercury__string__f_43_43_2_f_0((MR_String) "ImplDefinedConst: ", hlds__hlds_out__hlds_out_mode__String_120);
              }
#line 648 "hlds_out_mode.m"
              {
#line 648 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 648 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_98_98, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_119));
#line 648 "hlds_out_mode.m"
              }
#line 648 "hlds_out_mode.m"
              {
#line 648 "hlds_out_mode.m"
                MR_Word base;
#line 648 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 648 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 648 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_98_98));
#line 648 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_118));
#line 648 "hlds_out_mode.m"
              }
#line 645 "hlds_out_mode.m"
            }
#line 617 "hlds_out_mode.m"
            break;
#line 617 "hlds_out_mode.m"
          case (MR_Integer) 10:
#line 650 "hlds_out_mode.m"
            {
#line 650 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 650 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__TypeCtorName_19 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
#line 650 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 3)));
#line 650 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_89_89;
#line 650 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_95_95;
#line 650 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_121;
#line 650 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__FunctorName_122;
#line 650 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_169_169;
#line 650 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_175_175;
#line 650 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_177_177;
#line 650 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_178_178;
#line 650 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_185_185;
#line 650 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_187_187;
#line 650 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_188_188;
#line 650 "hlds_out_mode.m"
              MR_String hlds__hlds_out__hlds_out_mode__V_195_195;

#line 651 "hlds_out_mode.m"
              {
#line 651 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_121);
              }
#line 653 "hlds_out_mode.m"
              {
#line 653 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_89_89 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__ModuleName_18);
              }
#line 5504 "hlds.hlds_out.hlds_out_mode.c"
              hlds__hlds_out__hlds_out_mode__V_175_175 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19];
#line 653 "hlds_out_mode.m"
              {
#line 653 "hlds_out_mode.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_175_175, hlds__hlds_out__hlds_out_mode__Arity_20, &hlds__hlds_out__hlds_out_mode__V_169_169);
              }
#line 652 "hlds_out_mode.m"
              {
#line 652 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_177_177 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_169_169);
              }
#line 653 "hlds_out_mode.m"
              {
#line 653 "hlds_out_mode.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_175_175, hlds__hlds_out__hlds_out_mode__TypeCtorName_19, &hlds__hlds_out__hlds_out_mode__V_178_178);
              }
#line 652 "hlds_out_mode.m"
              {
#line 652 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_185_185 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_178_178, hlds__hlds_out__hlds_out_mode__V_177_177);
              }
#line 652 "hlds_out_mode.m"
              {
#line 652 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_187_187 = mercury__string__f_43_43_2_f_0((MR_String) ".", hlds__hlds_out__hlds_out_mode__V_185_185);
              }
#line 653 "hlds_out_mode.m"
              {
#line 653 "hlds_out_mode.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_175_175, hlds__hlds_out__hlds_out_mode__V_89_89, &hlds__hlds_out__hlds_out_mode__V_188_188);
              }
#line 652 "hlds_out_mode.m"
              {
#line 652 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_195_195 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_188_188, hlds__hlds_out__hlds_out_mode__V_187_187);
              }
#line 652 "hlds_out_mode.m"
              {
#line 652 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__FunctorName_122 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo for ", hlds__hlds_out__hlds_out_mode__V_195_195);
              }
#line 655 "hlds_out_mode.m"
              {
#line 655 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 655 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_95_95, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FunctorName_122));
#line 655 "hlds_out_mode.m"
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_95_95));
#line 655 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_121));
#line 655 "hlds_out_mode.m"
              }
#line 650 "hlds_out_mode.m"
            }
#line 617 "hlds_out_mode.m"
            break;
#line 617 "hlds_out_mode.m"
          case (MR_Integer) 11:
#line 657 "hlds_out_mode.m"
            {
#line 657 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_123;

#line 658 "hlds_out_mode.m"
              {
#line 658 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_123);
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[9])));
#line 660 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_123));
#line 660 "hlds_out_mode.m"
              }
#line 657 "hlds_out_mode.m"
            }
#line 617 "hlds_out_mode.m"
            break;
#line 617 "hlds_out_mode.m"
          case (MR_Integer) 12:
#line 674 "hlds_out_mode.m"
            {
#line 674 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__TIConstNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 674 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Arg_27;
#line 674 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_63_63;
#line 674 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_68_68;
#line 674 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_71_71;
#line 674 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_131;

#line 675 "hlds_out_mode.m"
              {
#line 675 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 675 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_6[0]));
#line 675 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_2));
#line 675 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 675 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
#line 675 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_63_63, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "hlds_out_mode.m"
              }
#line 675 "hlds_out_mode.m"
              {
#line 675 "hlds_out_mode.m"
                mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_63_63, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "type_info_const arity != 0");
              }
#line 677 "hlds_out_mode.m"
              {
#line 677 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_131);
              }
#line 679 "hlds_out_mode.m"
              {
#line 679 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 679 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_68_68, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TIConstNum_26));
#line 679 "hlds_out_mode.m"
              }
#line 679 "hlds_out_mode.m"
              {
#line 679 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Arg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 679 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_68_68));
#line 679 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_27, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_131));
#line 679 "hlds_out_mode.m"
              }
#line 680 "hlds_out_mode.m"
              {
#line 680 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_71_71, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Arg_27));
#line 680 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 680 "hlds_out_mode.m"
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[15])));
#line 680 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_71_71));
#line 680 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_131));
#line 680 "hlds_out_mode.m"
              }
#line 674 "hlds_out_mode.m"
            }
#line 617 "hlds_out_mode.m"
            break;
#line 617 "hlds_out_mode.m"
          case (MR_Integer) 13:
#line 682 "hlds_out_mode.m"
            {
#line 682 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__TCIConstNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));
#line 682 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_53_53;
#line 682 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_58_58;
#line 682 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_61_61;
#line 682 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_133;
#line 682 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Arg_135;

#line 683 "hlds_out_mode.m"
              {
#line 683 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 683 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_6[0]));
#line 683 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_3));
#line 683 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 683 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
#line 683 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_53_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "hlds_out_mode.m"
              }
#line 683 "hlds_out_mode.m"
              {
#line 683 "hlds_out_mode.m"
                mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_53_53, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "typeclass_info_const arity != 0");
              }
#line 685 "hlds_out_mode.m"
              {
#line 685 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_133);
              }
#line 687 "hlds_out_mode.m"
              {
#line 687 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 687 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_58_58, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TCIConstNum_28));
#line 687 "hlds_out_mode.m"
              }
#line 687 "hlds_out_mode.m"
              {
#line 687 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Arg_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 687 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 687 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Arg_135, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_133));
#line 687 "hlds_out_mode.m"
              }
#line 688 "hlds_out_mode.m"
              {
#line 688 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_61_61, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Arg_135));
#line 688 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[17])));
#line 688 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_61_61));
#line 688 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_133));
#line 688 "hlds_out_mode.m"
              }
#line 682 "hlds_out_mode.m"
            }
#line 617 "hlds_out_mode.m"
            break;
#line 617 "hlds_out_mode.m"
          case (MR_Integer) 14:
#line 690 "hlds_out_mode.m"
            {
#line 690 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubConsId_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 2)));
#line 690 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__SubArg_30;
#line 690 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__NumArg_31;
#line 690 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_41_41;
#line 690 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_47_47;
#line 690 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_50_50;
#line 690 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_51_51;
#line 690 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Context_136;
#line 690 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__TCIConstNum_138 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__ConsId_4, (MR_Integer) 1)));

#line 691 "hlds_out_mode.m"
              {
#line 691 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 691 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_6[0]));
#line 691 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0_1));
#line 691 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 691 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ArgTerms_5));
#line 691 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_41_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 691 "hlds_out_mode.m"
              }
#line 691 "hlds_out_mode.m"
              {
#line 691 "hlds_out_mode.m"
                mercury__require__expect_4_p_0(hlds__hlds_out__hlds_out_mode__V_41_41, (MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "predicate \140hlds.hlds_out.hlds_out_mode.cons_id_and_args_to_term_full\'/3", (MR_String) "ground_term_const arity != 0");
              }
#line 693 "hlds_out_mode.m"
              {
#line 693 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(hlds__hlds_out__hlds_out_mode__SubConsId_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__SubArg_30);
              }
#line 694 "hlds_out_mode.m"
              {
#line 694 "hlds_out_mode.m"
                mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_mode__Context_136);
              }
#line 696 "hlds_out_mode.m"
              {
#line 696 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 696 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_47_47, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TCIConstNum_138));
#line 696 "hlds_out_mode.m"
              }
#line 696 "hlds_out_mode.m"
              {
#line 696 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__NumArg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 696 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_47_47));
#line 696 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 696 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__NumArg_31, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_136));
#line 696 "hlds_out_mode.m"
              }
#line 697 "hlds_out_mode.m"
              {
#line 697 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_51_51, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubArg_30));
#line 697 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "hlds_out_mode.m"
              }
#line 697 "hlds_out_mode.m"
              {
#line 697 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_50_50, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__NumArg_31));
#line 697 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_50_50, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_51_51));
#line 697 "hlds_out_mode.m"
              }
#line 697 "hlds_out_mode.m"
              {
#line 697 "hlds_out_mode.m"
                MR_Word base;
#line 697 "hlds_out_mode.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 697 "hlds_out_mode.m"
                *hlds__hlds_out__hlds_out_mode__Term_6 = base;
#line 697 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_out__hlds_out_mode_scalar_common_1[12])));
#line 697 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_50_50));
#line 697 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_136));
#line 697 "hlds_out_mode.m"
              }
#line 690 "hlds_out_mode.m"
            }
#line 617 "hlds_out_mode.m"
            break;
#line 617 "hlds_out_mode.m"
        }
#line 617 "hlds_out_mode.m"
        break;
#line 617 "hlds_out_mode.m"
    }
#line 617 "hlds_out_mode.m"
  }
#line 612 "hlds_out_mode.m"
}

#line 599 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1(
#line 599 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 599 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 599 "hlds_out_mode.m"
{
#line 599 "hlds_out_mode.m"
  {
#line 599 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 599 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 599 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

#line 599 "hlds_out_mode.m"
    {
#line 599 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 599 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
#line 599 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 599 "hlds_out_mode.m"
  }
#line 599 "hlds_out_mode.m"
}

#line 594 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(
#line 594 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 594 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_7,
#line 594 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_8,
#line 594 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_9)
#line 594 "hlds_out_mode.m"
{
#line 597 "hlds_out_mode.m"
  {
#line 597 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 597 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_10;
#line 597 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_8, (MR_Integer) 0)));
#line 597 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__BoundInst_8, (MR_Integer) 1)));
#line 597 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ArgTerms_13;
#line 597 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__FirstTerm_14;
#line 597 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_18_18;

#line 599 "hlds_out_mode.m"
    {
#line 599 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 599 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 599 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0_1));
#line 599 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 599 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_6));
#line 599 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_18_18, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_7));
#line 599 "hlds_out_mode.m"
    }
#line 599 "hlds_out_mode.m"
    {
#line 599 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__ArgTerms_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_18_18, hlds__hlds_out__hlds_out_mode__Args_12);
    }
#line 600 "hlds_out_mode.m"
    {
#line 600 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__cons_id_and_args_to_term_full_3_p_0(hlds__hlds_out__hlds_out_mode__ConsId_11, hlds__hlds_out__hlds_out_mode__ArgTerms_13, &hlds__hlds_out__hlds_out_mode__FirstTerm_14);
    }
#line 604 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__BoundInsts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__Term_10 = hlds__hlds_out__hlds_out_mode__FirstTerm_14;
#line 604 "hlds_out_mode.m"
    else
#line 605 "hlds_out_mode.m"
      {
#line 605 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__HeadBoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__BoundInsts_9, (MR_Integer) 0)));
#line 605 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TailBoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__BoundInsts_9, (MR_Integer) 1)));
#line 605 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__SecondTerm_17;
#line 605 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_20_20;
#line 605 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;

#line 606 "hlds_out_mode.m"
        {
#line 606 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__SecondTerm_17 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_6, hlds__hlds_out__hlds_out_mode__Context_7, hlds__hlds_out__hlds_out_mode__HeadBoundInst_15, hlds__hlds_out__hlds_out_mode__TailBoundInsts_16);
        }
#line 609 "hlds_out_mode.m"
        {
#line 609 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SecondTerm_17));
#line 609 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "hlds_out_mode.m"
        }
#line 609 "hlds_out_mode.m"
        {
#line 609 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_20_20, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__FirstTerm_14));
#line 609 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_20_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_22_22));
#line 609 "hlds_out_mode.m"
        }
#line 608 "hlds_out_mode.m"
        {
#line 608 "hlds_out_mode.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[29], hlds__hlds_out__hlds_out_mode__V_20_20, hlds__hlds_out__hlds_out_mode__Context_7, &hlds__hlds_out__hlds_out_mode__Term_10);
        }
#line 605 "hlds_out_mode.m"
      }
#line 597 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_10;
#line 597 "hlds_out_mode.m"
  }
#line 594 "hlds_out_mode.m"
}

#line 584 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__bound_insts_to_term_3_f_0(
#line 584 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_1,
#line 584 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_2,
#line 584 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3)
#line 584 "hlds_out_mode.m"
{
#line 587 "hlds_out_mode.m"
  {
#line 587 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 587 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__4_4;

#line 587 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "hlds_out_mode.m"
      {
#line 590 "hlds_out_mode.m"
        {
#line 590 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 590 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[28]));
#line 590 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 590 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__4_4, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_2));
#line 590 "hlds_out_mode.m"
        }
#line 587 "hlds_out_mode.m"
      }
#line 587 "hlds_out_mode.m"
    else
#line 591 "hlds_out_mode.m"
      {
#line 591 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 591 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, (MR_Integer) 1)));

#line 592 "hlds_out_mode.m"
        {
#line 592 "hlds_out_mode.m"
          return hlds__hlds_out__hlds_out_mode__HeadVar__4_4 = hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_4_f_0(hlds__hlds_out__hlds_out_mode__Lang_1, hlds__hlds_out__hlds_out_mode__Context_2, hlds__hlds_out__hlds_out_mode__BoundInst_12, hlds__hlds_out__hlds_out_mode__BoundInsts_13);
        }
#line 591 "hlds_out_mode.m"
      }
#line 587 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__4_4;
#line 587 "hlds_out_mode.m"
  }
#line 584 "hlds_out_mode.m"
}

#line 576 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(
#line 576 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1,
#line 576 "hlds_out_mode.m"
  MR_String hlds__hlds_out__hlds_out_mode__SharedName_2)
#line 576 "hlds_out_mode.m"
{
#line 578 "hlds_out_mode.m"
  {
#line 578 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 578 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__3_3;

#line 578 "hlds_out_mode.m"
#line 578 "hlds_out_mode.m"
    switch (hlds__hlds_out__hlds_out_mode__HeadVar__1_1) {
#line 578 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 578 "hlds_out_mode.m"
      case (MR_Integer) 3:
#line 581 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "clobbered";
#line 578 "hlds_out_mode.m"
        break;
#line 578 "hlds_out_mode.m"
      case (MR_Integer) 4:
#line 582 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "mostly_clobbered";
#line 578 "hlds_out_mode.m"
        break;
#line 578 "hlds_out_mode.m"
      case (MR_Integer) 2:
#line 580 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "mostly_unique";
#line 578 "hlds_out_mode.m"
        break;
#line 578 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 578 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__SharedName_2;
#line 578 "hlds_out_mode.m"
        break;
#line 578 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 579 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_String) "unique";
#line 578 "hlds_out_mode.m"
        break;
#line 578 "hlds_out_mode.m"
    }
#line 578 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 578 "hlds_out_mode.m"
  }
#line 576 "hlds_out_mode.m"
}

#line 563 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(
#line 563 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
#line 563 "hlds_out_mode.m"
{
#line 565 "hlds_out_mode.m"
  {
#line 565 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 565 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

#line 565 "hlds_out_mode.m"
#line 565 "hlds_out_mode.m"
    switch (hlds__hlds_out__hlds_out_mode__HeadVar__1_1) {
#line 565 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 565 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 566 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "fake";
#line 565 "hlds_out_mode.m"
        break;
#line 565 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 565 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "real";
#line 565 "hlds_out_mode.m"
        break;
#line 565 "hlds_out_mode.m"
    }
#line 565 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 565 "hlds_out_mode.m"
  }
#line 563 "hlds_out_mode.m"
}

#line 558 "hlds_out_mode.m"
static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(
#line 558 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__1_1)
#line 558 "hlds_out_mode.m"
{
#line 560 "hlds_out_mode.m"
  {
#line 560 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 560 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__HeadVar__2_2;

#line 560 "hlds_out_mode.m"
#line 560 "hlds_out_mode.m"
    switch (hlds__hlds_out__hlds_out_mode__HeadVar__1_1) {
#line 560 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 560 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 561 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "dead";
#line 560 "hlds_out_mode.m"
        break;
#line 560 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 560 "hlds_out_mode.m"
        hlds__hlds_out__hlds_out_mode__HeadVar__2_2 = (MR_String) "live";
#line 560 "hlds_out_mode.m"
        break;
#line 560 "hlds_out_mode.m"
    }
#line 560 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__2_2;
#line 560 "hlds_out_mode.m"
  }
#line 558 "hlds_out_mode.m"
}

#line 447 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2(
#line 447 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 447 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 447 "hlds_out_mode.m"
{
#line 447 "hlds_out_mode.m"
  {
#line 447 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 447 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 447 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv1_Term_8;

#line 447 "hlds_out_mode.m"
    {
#line 447 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv1_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 447 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv1_Term_8));
#line 447 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 447 "hlds_out_mode.m"
  }
#line 447 "hlds_out_mode.m"
}

#line 471 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1(
#line 471 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 471 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 471 "hlds_out_mode.m"
{
#line 471 "hlds_out_mode.m"
  {
#line 471 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 471 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 471 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_8;

#line 471 "hlds_out_mode.m"
    {
#line 471 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 471 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_8));
#line 471 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 471 "hlds_out_mode.m"
  }
#line 471 "hlds_out_mode.m"
}

#line 440 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(
#line 440 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_5,
#line 440 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_6,
#line 440 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstName_7)
#line 440 "hlds_out_mode.m"
{
#line 445 "hlds_out_mode.m"
  while (MR_TRUE)
#line 445 "hlds_out_mode.m"
    {
#line 445 "hlds_out_mode.m"
      /* tailcall optimized into a loop */
#line 445 "hlds_out_mode.m"
      {
#line 445 "hlds_out_mode.m"
        MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 445 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__Term_8;

#line 445 "hlds_out_mode.m"
#line 445 "hlds_out_mode.m"
        switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstName_7)) {
#line 445 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 445 "hlds_out_mode.m"
          case (MR_Integer) 0:
#line 445 "hlds_out_mode.m"
            {
#line 445 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
#line 445 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 445 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_117_117;
#line 445 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_118_118;

#line 447 "hlds_out_mode.m"
              {
#line 447 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 447 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_118_118, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 447 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_118_118, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_2));
#line 447 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_118_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 447 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_118_118, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
#line 447 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_118_118, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 447 "hlds_out_mode.m"
              }
#line 447 "hlds_out_mode.m"
              {
#line 447 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_117_117 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_118_118, hlds__hlds_out__hlds_out_mode__Args_10);
              }
#line 446 "hlds_out_mode.m"
              {
#line 446 "hlds_out_mode.m"
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__Name_9, hlds__hlds_out__hlds_out_mode__V_117_117, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
              }
#line 445 "hlds_out_mode.m"
            }
#line 445 "hlds_out_mode.m"
            break;
#line 445 "hlds_out_mode.m"
          case (MR_Integer) 1:
#line 450 "hlds_out_mode.m"
            {
#line 450 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Liveness_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
#line 450 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Real_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 450 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
#line 450 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 3)));

#line 454 "hlds_out_mode.m"
#line 454 "hlds_out_mode.m"
              switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 454 "hlds_out_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 454 "hlds_out_mode.m"
                case (MR_Integer) 1:
#line 455 "hlds_out_mode.m"
                  {
#line 455 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_102_102;
#line 455 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_104_104;
#line 455 "hlds_out_mode.m"
                    MR_String hlds__hlds_out__hlds_out_mode__V_105_105;
#line 455 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_106_106;
#line 455 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_107_107;
#line 455 "hlds_out_mode.m"
                    MR_String hlds__hlds_out__hlds_out_mode__V_108_108;
#line 455 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_109_109;
#line 455 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_110_110;
#line 455 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_111_111;
#line 455 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_112_112;

#line 457 "hlds_out_mode.m"
                    {
#line 457 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_105_105 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Liveness_11);
                    }
#line 457 "hlds_out_mode.m"
                    {
#line 457 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_104_104 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_105_105);
                    }
#line 458 "hlds_out_mode.m"
                    {
#line 458 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_108_108 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_12);
                    }
#line 458 "hlds_out_mode.m"
                    {
#line 458 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_107_107 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_108_108);
                    }
#line 459 "hlds_out_mode.m"
                    {
#line 459 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_110_110 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstA_13);
                    }
#line 460 "hlds_out_mode.m"
                    {
#line 460 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_112_112 = hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__InstB_14);
                    }
#line 460 "hlds_out_mode.m"
                    {
#line 460 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_111_111, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_112_112));
#line 460 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 460 "hlds_out_mode.m"
                    }
#line 459 "hlds_out_mode.m"
                    {
#line 459 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_109_109, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_110_110));
#line 459 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_109_109, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_111_111));
#line 459 "hlds_out_mode.m"
                    }
#line 458 "hlds_out_mode.m"
                    {
#line 458 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_106_106, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_107_107));
#line 458 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_106_106, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_109_109));
#line 458 "hlds_out_mode.m"
                    }
#line 457 "hlds_out_mode.m"
                    {
#line 457 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_102_102, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_104_104));
#line 457 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_102_102, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_106_106));
#line 457 "hlds_out_mode.m"
                    }
#line 456 "hlds_out_mode.m"
                    {
#line 456 "hlds_out_mode.m"
                      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[27], hlds__hlds_out__hlds_out_mode__V_102_102, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                    }
#line 455 "hlds_out_mode.m"
                  }
#line 454 "hlds_out_mode.m"
                  break;
#line 454 "hlds_out_mode.m"
                case (MR_Integer) 0:
#line 452 "hlds_out_mode.m"
                  {
#line 453 "hlds_out_mode.m"
                    {
#line 453 "hlds_out_mode.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "unify_inst");
                    }
#line 452 "hlds_out_mode.m"
                  }
#line 454 "hlds_out_mode.m"
                  break;
#line 454 "hlds_out_mode.m"
              }
#line 450 "hlds_out_mode.m"
            }
#line 445 "hlds_out_mode.m"
            break;
#line 445 "hlds_out_mode.m"
          case (MR_Integer) 2:
#line 464 "hlds_out_mode.m"
            {
#line 464 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstA_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)));
#line 464 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstB_120 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 468 "hlds_out_mode.m"
#line 468 "hlds_out_mode.m"
              switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 468 "hlds_out_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 468 "hlds_out_mode.m"
                case (MR_Integer) 1:
#line 469 "hlds_out_mode.m"
                  {
#line 469 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_92_92;
#line 469 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_94_94;
#line 469 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_95_95;
#line 469 "hlds_out_mode.m"
                    MR_Word hlds__hlds_out__hlds_out_mode__V_96_96;

#line 471 "hlds_out_mode.m"
                    {
#line 471 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 471 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_94_94, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0]));
#line 471 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_94_94, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0_1));
#line 471 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 471 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_94_94, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Lang_5));
#line 471 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_94_94, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 471 "hlds_out_mode.m"
                    }
#line 472 "hlds_out_mode.m"
                    {
#line 472 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_96_96, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB_120));
#line 472 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 472 "hlds_out_mode.m"
                    }
#line 472 "hlds_out_mode.m"
                    {
#line 472 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_95_95, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA_119));
#line 472 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_95_95, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_96_96));
#line 472 "hlds_out_mode.m"
                    }
#line 471 "hlds_out_mode.m"
                    {
#line 471 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_92_92 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_94_94, hlds__hlds_out__hlds_out_mode__V_95_95);
                    }
#line 470 "hlds_out_mode.m"
                    {
#line 470 "hlds_out_mode.m"
                      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[22], hlds__hlds_out__hlds_out_mode__V_92_92, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                    }
#line 469 "hlds_out_mode.m"
                  }
#line 468 "hlds_out_mode.m"
                  break;
#line 468 "hlds_out_mode.m"
                case (MR_Integer) 0:
#line 466 "hlds_out_mode.m"
                  {
#line 467 "hlds_out_mode.m"
                    {
#line 467 "hlds_out_mode.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "merge_inst");
                    }
#line 466 "hlds_out_mode.m"
                  }
#line 468 "hlds_out_mode.m"
                  break;
#line 468 "hlds_out_mode.m"
              }
#line 464 "hlds_out_mode.m"
            }
#line 445 "hlds_out_mode.m"
            break;
#line 445 "hlds_out_mode.m"
          case (MR_Integer) 3:
#line 445 "hlds_out_mode.m"
#line 445 "hlds_out_mode.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 0)))) {
#line 445 "hlds_out_mode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 445 "hlds_out_mode.m"
              case (MR_Integer) 0:
#line 476 "hlds_out_mode.m"
                {
#line 476 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 476 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Uniq_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 476 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__IsLive_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 476 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Real_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 480 "hlds_out_mode.m"
#line 480 "hlds_out_mode.m"
                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 480 "hlds_out_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 480 "hlds_out_mode.m"
                    case (MR_Integer) 1:
#line 481 "hlds_out_mode.m"
                      {
#line 481 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_74_74;
#line 481 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_76_76;
#line 481 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_77_77;
#line 481 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_78_78;
#line 481 "hlds_out_mode.m"
                        MR_String hlds__hlds_out__hlds_out_mode__V_79_79;
#line 481 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_81_81;
#line 481 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_82_82;
#line 481 "hlds_out_mode.m"
                        MR_String hlds__hlds_out__hlds_out_mode__V_83_83;
#line 481 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_84_84;
#line 481 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_85_85;
#line 481 "hlds_out_mode.m"
                        MR_String hlds__hlds_out__hlds_out_mode__V_86_86;

#line 483 "hlds_out_mode.m"
                        {
#line 483 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_76_76 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_15);
                        }
#line 484 "hlds_out_mode.m"
                        {
#line 484 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_79_79 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_16, (MR_String) "shared");
                        }
#line 484 "hlds_out_mode.m"
                        {
#line 484 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_78_78 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_79_79);
                        }
#line 485 "hlds_out_mode.m"
                        {
#line 485 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_83_83 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__IsLive_17);
                        }
#line 485 "hlds_out_mode.m"
                        {
#line 485 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_82_82 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_83_83);
                        }
#line 486 "hlds_out_mode.m"
                        {
#line 486 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_86_86 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_121);
                        }
#line 486 "hlds_out_mode.m"
                        {
#line 486 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_85_85 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_86_86);
                        }
#line 486 "hlds_out_mode.m"
                        {
#line 486 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_84_84, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_85_85));
#line 486 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 486 "hlds_out_mode.m"
                        }
#line 485 "hlds_out_mode.m"
                        {
#line 485 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_81_81, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_82_82));
#line 485 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_81_81, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_84_84));
#line 485 "hlds_out_mode.m"
                        }
#line 484 "hlds_out_mode.m"
                        {
#line 484 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_77_77, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_78_78));
#line 484 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_77_77, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_81_81));
#line 484 "hlds_out_mode.m"
                        }
#line 483 "hlds_out_mode.m"
                        {
#line 483 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_74_74, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_76_76));
#line 483 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_74_74, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_77_77));
#line 483 "hlds_out_mode.m"
                        }
#line 482 "hlds_out_mode.m"
                        {
#line 482 "hlds_out_mode.m"
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[21], hlds__hlds_out__hlds_out_mode__V_74_74, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
#line 481 "hlds_out_mode.m"
                      }
#line 480 "hlds_out_mode.m"
                      break;
#line 480 "hlds_out_mode.m"
                    case (MR_Integer) 0:
#line 478 "hlds_out_mode.m"
                      {
#line 479 "hlds_out_mode.m"
                        {
#line 479 "hlds_out_mode.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "ground_inst");
                        }
#line 478 "hlds_out_mode.m"
                      }
#line 480 "hlds_out_mode.m"
                      break;
#line 480 "hlds_out_mode.m"
                  }
#line 476 "hlds_out_mode.m"
                }
#line 445 "hlds_out_mode.m"
                break;
#line 445 "hlds_out_mode.m"
              case (MR_Integer) 1:
#line 490 "hlds_out_mode.m"
                {
#line 490 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Real_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 490 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));
#line 490 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Uniq_124 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 490 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__IsLive_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 494 "hlds_out_mode.m"
#line 494 "hlds_out_mode.m"
                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 494 "hlds_out_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 494 "hlds_out_mode.m"
                    case (MR_Integer) 1:
#line 495 "hlds_out_mode.m"
                      {
#line 495 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_56_56;
#line 495 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_58_58;
#line 495 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_59_59;
#line 495 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_60_60;
#line 495 "hlds_out_mode.m"
                        MR_String hlds__hlds_out__hlds_out_mode__V_61_61;
#line 495 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_63_63;
#line 495 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_64_64;
#line 495 "hlds_out_mode.m"
                        MR_String hlds__hlds_out__hlds_out_mode__V_65_65;
#line 495 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_66_66;
#line 495 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_67_67;
#line 495 "hlds_out_mode.m"
                        MR_String hlds__hlds_out__hlds_out_mode__V_68_68;

#line 497 "hlds_out_mode.m"
                        {
#line 497 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_58_58 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_123);
                        }
#line 498 "hlds_out_mode.m"
                        {
#line 498 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_61_61 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_124, (MR_String) "shared");
                        }
#line 498 "hlds_out_mode.m"
                        {
#line 498 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_60_60 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_61_61);
                        }
#line 499 "hlds_out_mode.m"
                        {
#line 499 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_65_65 = hlds__hlds_out__hlds_out_mode__is_live_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__IsLive_125);
                        }
#line 499 "hlds_out_mode.m"
                        {
#line 499 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_64_64 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_65_65);
                        }
#line 500 "hlds_out_mode.m"
                        {
#line 500 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_68_68 = hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_f_0(hlds__hlds_out__hlds_out_mode__Real_122);
                        }
#line 500 "hlds_out_mode.m"
                        {
#line 500 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_67_67 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_68_68);
                        }
#line 500 "hlds_out_mode.m"
                        {
#line 500 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_66_66, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_67_67));
#line 500 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 500 "hlds_out_mode.m"
                        }
#line 499 "hlds_out_mode.m"
                        {
#line 499 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_63_63, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_64_64));
#line 499 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_63_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_66_66));
#line 499 "hlds_out_mode.m"
                        }
#line 498 "hlds_out_mode.m"
                        {
#line 498 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_59_59, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_60_60));
#line 498 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_59_59, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_63_63));
#line 498 "hlds_out_mode.m"
                        }
#line 497 "hlds_out_mode.m"
                        {
#line 497 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_56_56, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 497 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_56_56, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_59_59));
#line 497 "hlds_out_mode.m"
                        }
#line 496 "hlds_out_mode.m"
                        {
#line 496 "hlds_out_mode.m"
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[20], hlds__hlds_out__hlds_out_mode__V_56_56, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
#line 495 "hlds_out_mode.m"
                      }
#line 494 "hlds_out_mode.m"
                      break;
#line 494 "hlds_out_mode.m"
                    case (MR_Integer) 0:
#line 492 "hlds_out_mode.m"
                      {
#line 493 "hlds_out_mode.m"
                        {
#line 493 "hlds_out_mode.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "any_inst");
                        }
#line 492 "hlds_out_mode.m"
                      }
#line 494 "hlds_out_mode.m"
                      break;
#line 494 "hlds_out_mode.m"
                  }
#line 490 "hlds_out_mode.m"
                }
#line 445 "hlds_out_mode.m"
                break;
#line 445 "hlds_out_mode.m"
              case (MR_Integer) 2:
#line 504 "hlds_out_mode.m"
                {
#line 504 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 508 "hlds_out_mode.m"
#line 508 "hlds_out_mode.m"
                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 508 "hlds_out_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 508 "hlds_out_mode.m"
                    case (MR_Integer) 1:
#line 509 "hlds_out_mode.m"
                      {
#line 509 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_48_48;
#line 509 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_50_50;

#line 511 "hlds_out_mode.m"
                        {
#line 511 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_50_50 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_126);
                        }
#line 511 "hlds_out_mode.m"
                        {
#line 511 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_48_48, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_50_50));
#line 511 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "hlds_out_mode.m"
                        }
#line 510 "hlds_out_mode.m"
                        {
#line 510 "hlds_out_mode.m"
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[24], hlds__hlds_out__hlds_out_mode__V_48_48, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
#line 509 "hlds_out_mode.m"
                      }
#line 508 "hlds_out_mode.m"
                      break;
#line 508 "hlds_out_mode.m"
                    case (MR_Integer) 0:
#line 506 "hlds_out_mode.m"
                      {
#line 507 "hlds_out_mode.m"
                        {
#line 507 "hlds_out_mode.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "shared_inst");
                        }
#line 506 "hlds_out_mode.m"
                      }
#line 508 "hlds_out_mode.m"
                      break;
#line 508 "hlds_out_mode.m"
                  }
#line 504 "hlds_out_mode.m"
                }
#line 445 "hlds_out_mode.m"
                break;
#line 445 "hlds_out_mode.m"
              case (MR_Integer) 3:
#line 515 "hlds_out_mode.m"
                {
#line 515 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 519 "hlds_out_mode.m"
#line 519 "hlds_out_mode.m"
                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 519 "hlds_out_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 519 "hlds_out_mode.m"
                    case (MR_Integer) 1:
#line 520 "hlds_out_mode.m"
                      {
#line 520 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_40_40;
#line 520 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_42_42;

#line 523 "hlds_out_mode.m"
                        {
#line 523 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_42_42 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_127);
                        }
#line 523 "hlds_out_mode.m"
                        {
#line 523 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_42_42));
#line 523 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "hlds_out_mode.m"
                        }
#line 521 "hlds_out_mode.m"
                        {
#line 521 "hlds_out_mode.m"
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[23], hlds__hlds_out__hlds_out_mode__V_40_40, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
#line 520 "hlds_out_mode.m"
                      }
#line 519 "hlds_out_mode.m"
                      break;
#line 519 "hlds_out_mode.m"
                    case (MR_Integer) 0:
#line 517 "hlds_out_mode.m"
                      {
#line 518 "hlds_out_mode.m"
                        {
#line 518 "hlds_out_mode.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "mostly_uniq_inst");
                        }
#line 517 "hlds_out_mode.m"
                      }
#line 519 "hlds_out_mode.m"
                      break;
#line 519 "hlds_out_mode.m"
                  }
#line 515 "hlds_out_mode.m"
                }
#line 445 "hlds_out_mode.m"
                break;
#line 445 "hlds_out_mode.m"
              case (MR_Integer) 4:
#line 527 "hlds_out_mode.m"
                {
#line 527 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
#line 527 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Uniq_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 531 "hlds_out_mode.m"
#line 531 "hlds_out_mode.m"
                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 531 "hlds_out_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 531 "hlds_out_mode.m"
                    case (MR_Integer) 1:
#line 532 "hlds_out_mode.m"
                      {
#line 532 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_150_150;
#line 532 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__Term0_19;
#line 532 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
#line 532 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 532 "hlds_out_mode.m"
                        MR_String hlds__hlds_out__hlds_out_mode__V_31_31;
#line 532 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_33_33;
#line 532 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_34_34;

#line 533 "hlds_out_mode.m"
                        {
#line 533 "hlds_out_mode.m"
                          parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_18, &hlds__hlds_out__hlds_out_mode__Term0_19);
                        }
#line 535 "hlds_out_mode.m"
                        {
#line 535 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_31_31 = hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_f_0(hlds__hlds_out__hlds_out_mode__Uniq_128, (MR_String) "shared");
                        }
#line 535 "hlds_out_mode.m"
                        {
#line 535 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_30_30 = hlds__hlds_out__hlds_out_mode__make_atom_2_f_0(hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_31_31);
                        }
#line 7116 "hlds.hlds_out.hlds_out_mode.c"
                        hlds__hlds_out__hlds_out_mode__TypeCtorInfo_150_150 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 536 "hlds_out_mode.m"
                        {
#line 536 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_34_34 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__hlds_out__hlds_out_mode__TypeCtorInfo_150_150, hlds__hlds_out__hlds_out_mode__Term0_19);
                        }
#line 536 "hlds_out_mode.m"
                        {
#line 536 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_34_34));
#line 536 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "hlds_out_mode.m"
                        }
#line 535 "hlds_out_mode.m"
                        {
#line 535 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_30_30));
#line 535 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_33_33));
#line 535 "hlds_out_mode.m"
                        }
#line 534 "hlds_out_mode.m"
                        {
#line 534 "hlds_out_mode.m"
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_150_150, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[25], hlds__hlds_out__hlds_out_mode__V_28_28, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
#line 532 "hlds_out_mode.m"
                      }
#line 531 "hlds_out_mode.m"
                      break;
#line 531 "hlds_out_mode.m"
                    case (MR_Integer) 0:
#line 529 "hlds_out_mode.m"
                      {
#line 530 "hlds_out_mode.m"
                        {
#line 530 "hlds_out_mode.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_mode", (MR_String) "function \140hlds.hlds_out.hlds_out_mode.inst_name_to_term_with_context\'/3", (MR_String) "typed_ground");
                        }
#line 529 "hlds_out_mode.m"
                      }
#line 531 "hlds_out_mode.m"
                      break;
#line 531 "hlds_out_mode.m"
                  }
#line 527 "hlds_out_mode.m"
                }
#line 445 "hlds_out_mode.m"
                break;
#line 445 "hlds_out_mode.m"
              case (MR_Integer) 5:
#line 540 "hlds_out_mode.m"
                {
#line 540 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__SubInstName_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 2)));
#line 540 "hlds_out_mode.m"
                  MR_Word hlds__hlds_out__hlds_out_mode__Type_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__InstName_7, (MR_Integer) 1)));

#line 548 "hlds_out_mode.m"
#line 548 "hlds_out_mode.m"
                  switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 548 "hlds_out_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 548 "hlds_out_mode.m"
                    case (MR_Integer) 1:
#line 549 "hlds_out_mode.m"
                      {
#line 549 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_152_152;
#line 549 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_21_21;
#line 549 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_23_23;
#line 549 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_24_24;
#line 549 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
#line 549 "hlds_out_mode.m"
                        MR_Word hlds__hlds_out__hlds_out_mode__Term0_129;

#line 550 "hlds_out_mode.m"
                        {
#line 550 "hlds_out_mode.m"
                          parse_tree__prog_io_util__unparse_type_2_p_0(hlds__hlds_out__hlds_out_mode__Type_132, &hlds__hlds_out__hlds_out_mode__Term0_129);
                        }
#line 7207 "hlds.hlds_out.hlds_out_mode.c"
                        hlds__hlds_out__hlds_out_mode__TypeCtorInfo_152_152 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 552 "hlds_out_mode.m"
                        {
#line 552 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_23_23 = mercury__term__coerce_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, hlds__hlds_out__hlds_out_mode__TypeCtorInfo_152_152, hlds__hlds_out__hlds_out_mode__Term0_129);
                        }
#line 553 "hlds_out_mode.m"
                        {
#line 553 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_25_25 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__SubInstName_131);
                        }
#line 553 "hlds_out_mode.m"
                        {
#line 553 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_25_25));
#line 553 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "hlds_out_mode.m"
                        }
#line 552 "hlds_out_mode.m"
                        {
#line 552 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_21_21, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_23_23));
#line 552 "hlds_out_mode.m"
                          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_21_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_24_24));
#line 552 "hlds_out_mode.m"
                        }
#line 551 "hlds_out_mode.m"
                        {
#line 551 "hlds_out_mode.m"
                          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_152_152, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[26], hlds__hlds_out__hlds_out_mode__V_21_21, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
                        }
#line 549 "hlds_out_mode.m"
                      }
#line 548 "hlds_out_mode.m"
                      break;
#line 548 "hlds_out_mode.m"
                    case (MR_Integer) 0:
#line 547 "hlds_out_mode.m"
                      {
#line 547 "hlds_out_mode.m"
                        /* direct tailcall eliminated */
#line 547 "hlds_out_mode.m"
                        {
#line 547 "hlds_out_mode.m"
                          MR_Word hlds__hlds_out__hlds_out_mode__InstName__tmp_copy_7 = hlds__hlds_out__hlds_out_mode__SubInstName_131;

#line 547 "hlds_out_mode.m"
                          hlds__hlds_out__hlds_out_mode__InstName_7 = hlds__hlds_out__hlds_out_mode__InstName__tmp_copy_7;
#line 547 "hlds_out_mode.m"
                        }
#line 547 "hlds_out_mode.m"
                        continue;
#line 547 "hlds_out_mode.m"
                      }
#line 548 "hlds_out_mode.m"
                      break;
#line 548 "hlds_out_mode.m"
                  }
#line 540 "hlds_out_mode.m"
                }
#line 445 "hlds_out_mode.m"
                break;
#line 445 "hlds_out_mode.m"
            }
#line 445 "hlds_out_mode.m"
            break;
#line 445 "hlds_out_mode.m"
        }
#line 445 "hlds_out_mode.m"
        return hlds__hlds_out__hlds_out_mode__Term_8;
#line 445 "hlds_out_mode.m"
      }
#line 445 "hlds_out_mode.m"
      break;
#line 445 "hlds_out_mode.m"
    }
#line 440 "hlds_out_mode.m"
}

#line 381 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(
#line 381 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 381 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_5)
#line 381 "hlds_out_mode.m"
{
#line 383 "hlds_out_mode.m"
  {
#line 383 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 383 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;
#line 383 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_5, (MR_Integer) 0)));
#line 383 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeCtor_5, (MR_Integer) 1)));
#line 383 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__ConsName_9;
#line 383 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_13_13;
#line 383 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_17_17;
#line 383 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_19_19;
#line 383 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
#line 383 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_27_27;
#line 383 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_28_28;

#line 385 "hlds_out_mode.m"
    {
#line 385 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_13_13 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__SymName_7);
    }
#line 7331 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__V_25_25 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_2[19];
#line 385 "hlds_out_mode.m"
    {
#line 385 "hlds_out_mode.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_25_25, hlds__hlds_out__hlds_out_mode__Arity_8, &hlds__hlds_out__hlds_out_mode__V_19_19);
    }
#line 385 "hlds_out_mode.m"
    {
#line 385 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_mode__V_19_19);
    }
#line 385 "hlds_out_mode.m"
    {
#line 385 "hlds_out_mode.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_mode__V_25_25, hlds__hlds_out__hlds_out_mode__V_13_13, &hlds__hlds_out__hlds_out_mode__V_28_28);
    }
#line 385 "hlds_out_mode.m"
    {
#line 385 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__ConsName_9 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_mode__V_28_28, hlds__hlds_out__hlds_out_mode__V_27_27);
    }
#line 387 "hlds_out_mode.m"
    {
#line 387 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 387 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_17_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ConsName_9));
#line 387 "hlds_out_mode.m"
    }
#line 387 "hlds_out_mode.m"
    {
#line 387 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 387 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_17_17));
#line 387 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 387 "hlds_out_mode.m"
    }
#line 383 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 383 "hlds_out_mode.m"
  }
#line 381 "hlds_out_mode.m"
}

#line 368 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_type_ctor_propagated_to_term_2_f_0(
#line 368 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 368 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__PropagatedResult_5)
#line 368 "hlds_out_mode.m"
{
#line 373 "hlds_out_mode.m"
  {
#line 373 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 373 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;

#line 373 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__PropagatedResult_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 373 "hlds_out_mode.m"
      {
#line 374 "hlds_out_mode.m"
        {
#line 374 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 374 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[17]));
#line 374 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 374 "hlds_out_mode.m"
        }
#line 373 "hlds_out_mode.m"
      }
#line 373 "hlds_out_mode.m"
    else
#line 376 "hlds_out_mode.m"
      {
#line 376 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtor_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_mode__PropagatedResult_5), (MR_Integer) 1);
#line 376 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;
#line 376 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_11_11;

#line 378 "hlds_out_mode.m"
        {
#line 378 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_11_11 = hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_4, hlds__hlds_out__hlds_out_mode__TypeCtor_7);
        }
#line 378 "hlds_out_mode.m"
        {
#line 378 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_10_10, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_11_11));
#line 378 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "hlds_out_mode.m"
        }
#line 377 "hlds_out_mode.m"
        {
#line 377 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 377 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[18]));
#line 377 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_10_10));
#line 377 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 377 "hlds_out_mode.m"
        }
#line 376 "hlds_out_mode.m"
      }
#line 373 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 373 "hlds_out_mode.m"
  }
#line 368 "hlds_out_mode.m"
}

#line 363 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0_1(
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
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_6;

#line 363 "hlds_out_mode.m"
    {
#line 363 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_6 = hlds__hlds_out__hlds_out_mode__type_ctor_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 363 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_6));
#line 363 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 363 "hlds_out_mode.m"
  }
#line 363 "hlds_out_mode.m"
}

#line 353 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0(
#line 353 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 353 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ContainsTypes_5)
#line 353 "hlds_out_mode.m"
{
#line 358 "hlds_out_mode.m"
  {
#line 358 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 358 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;

#line 358 "hlds_out_mode.m"
    if ((hlds__hlds_out__hlds_out_mode__ContainsTypes_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "hlds_out_mode.m"
      {
#line 359 "hlds_out_mode.m"
        {
#line 359 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 359 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[15]));
#line 359 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 359 "hlds_out_mode.m"
        }
#line 358 "hlds_out_mode.m"
      }
#line 358 "hlds_out_mode.m"
    else
#line 361 "hlds_out_mode.m"
      {
#line 361 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 361 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ContainsTypes_5, (MR_Integer) 0)));
#line 361 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtors_8;
#line 361 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__TypeCtorTerms_9;
#line 361 "hlds_out_mode.m"
        MR_Word hlds__hlds_out__hlds_out_mode__V_10_10;

#line 362 "hlds_out_mode.m"
        {
#line 362 "hlds_out_mode.m"
          mercury__set__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_16, hlds__hlds_out__hlds_out_mode__TypeCtorSet_7, &hlds__hlds_out__hlds_out_mode__TypeCtors_8);
        }
#line 363 "hlds_out_mode.m"
        {
#line 363 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 363 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_5[1]));
#line 363 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0_1));
#line 363 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 363 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_10_10, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 363 "hlds_out_mode.m"
        }
#line 363 "hlds_out_mode.m"
        {
#line 363 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__TypeCtorTerms_9 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeCtorInfo_16_16, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_10_10, hlds__hlds_out__hlds_out_mode__TypeCtors_8);
        }
#line 364 "hlds_out_mode.m"
        {
#line 364 "hlds_out_mode.m"
          hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 364 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[16]));
#line 364 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__TypeCtorTerms_9));
#line 364 "hlds_out_mode.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 364 "hlds_out_mode.m"
        }
#line 361 "hlds_out_mode.m"
      }
#line 358 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 358 "hlds_out_mode.m"
  }
#line 353 "hlds_out_mode.m"
}

#line 346 "hlds_out_mode.m"
static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_var_to_term_2_f_0(
#line 346 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Context_4,
#line 346 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVar_5)
#line 346 "hlds_out_mode.m"
{
#line 348 "hlds_out_mode.m"
  {
#line 348 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 348 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Term_6;
#line 348 "hlds_out_mode.m"
    MR_Integer hlds__hlds_out__hlds_out_mode__InstVarNum_7;
#line 348 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__InstVarNumStr_8;
#line 348 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_9_9;
#line 348 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__V_10_10;

#line 349 "hlds_out_mode.m"
    {
#line 349 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__InstVarNum_7 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__hlds_out__hlds_out_mode__InstVar_5);
    }
#line 350 "hlds_out_mode.m"
    {
#line 350 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__InstVarNumStr_8 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_mode__InstVarNum_7);
    }
#line 351 "hlds_out_mode.m"
    {
#line 351 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "inst_var_", hlds__hlds_out__hlds_out_mode__InstVarNumStr_8);
    }
#line 351 "hlds_out_mode.m"
    {
#line 351 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_9_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 351 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__V_9_9, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_10_10));
#line 351 "hlds_out_mode.m"
    }
#line 351 "hlds_out_mode.m"
    {
#line 351 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 351 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_9_9));
#line 351 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 351 "hlds_out_mode.m"
    }
#line 348 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__Term_6;
#line 348 "hlds_out_mode.m"
  }
#line 346 "hlds_out_mode.m"
}

#line 341 "hlds_out_mode.m"
static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1(
#line 341 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__closure_arg,
#line 341 "hlds_out_mode.m"
  MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_1)
#line 341 "hlds_out_mode.m"
{
#line 341 "hlds_out_mode.m"
  {
#line 341 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 341 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__closure = hlds__hlds_out__hlds_out_mode__closure_arg;
#line 341 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__conv0_Term_6;

#line 341 "hlds_out_mode.m"
    {
#line 341 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__conv0_Term_6 = hlds__hlds_out__hlds_out_mode__inst_var_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_mode__wrapper_arg_1));
    }
#line 341 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__wrapper_arg_2 = ((MR_Box) (hlds__hlds_out__hlds_out_mode__conv0_Term_6));
#line 341 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__wrapper_arg_2;
#line 341 "hlds_out_mode.m"
  }
#line 341 "hlds_out_mode.m"
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
#line 261 "hlds_out_mode.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__InstResults_5)) {
#line 261 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 261 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 261 "hlds_out_mode.m"
#line 261 "hlds_out_mode.m"
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_mode__InstResults_5)) {
#line 261 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 261 "hlds_out_mode.m"
          case (MR_Integer) 0:
#line 275 "hlds_out_mode.m"
            {
#line 276 "hlds_out_mode.m"
              {
#line 276 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 276 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[2]));
#line 276 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 276 "hlds_out_mode.m"
              }
#line 275 "hlds_out_mode.m"
            }
#line 261 "hlds_out_mode.m"
            break;
#line 261 "hlds_out_mode.m"
          case (MR_Integer) 1:
#line 278 "hlds_out_mode.m"
            {
#line 279 "hlds_out_mode.m"
              {
#line 279 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 279 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[14]));
#line 279 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 279 "hlds_out_mode.m"
              }
#line 278 "hlds_out_mode.m"
            }
#line 261 "hlds_out_mode.m"
            break;
#line 261 "hlds_out_mode.m"
        }
#line 261 "hlds_out_mode.m"
        break;
#line 261 "hlds_out_mode.m"
      case (MR_Integer) 1:
#line 261 "hlds_out_mode.m"
        {
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__GroundnessResult_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 0)));
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__AnyResult_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 1)));
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstNamesResult_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 2)));
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__InstVarsResult_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 3)));
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__TypeResult_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 4)));
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__PropagatedResult_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstResults_5, (MR_Integer) 5)));
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm1_13;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm2_14;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm3_15;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm4_16;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm5_17;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__SubTerm6_18;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_28_28;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_29_29;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_31_31;
#line 261 "hlds_out_mode.m"
          MR_Word hlds__hlds_out__hlds_out_mode__V_32_32;

#line 287 "hlds_out_mode.m"
#line 287 "hlds_out_mode.m"
          switch (hlds__hlds_out__hlds_out_mode__GroundnessResult_7) {
#line 287 "hlds_out_mode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 287 "hlds_out_mode.m"
            case (MR_Integer) 2:
#line 293 "hlds_out_mode.m"
              {
#line 294 "hlds_out_mode.m"
                {
#line 294 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 294 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[3]));
#line 294 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 294 "hlds_out_mode.m"
                }
#line 293 "hlds_out_mode.m"
              }
#line 287 "hlds_out_mode.m"
              break;
#line 287 "hlds_out_mode.m"
            case (MR_Integer) 1:
#line 290 "hlds_out_mode.m"
              {
#line 291 "hlds_out_mode.m"
                {
#line 291 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 291 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[4]));
#line 291 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 291 "hlds_out_mode.m"
                }
#line 290 "hlds_out_mode.m"
              }
#line 287 "hlds_out_mode.m"
              break;
#line 287 "hlds_out_mode.m"
            case (MR_Integer) 0:
#line 287 "hlds_out_mode.m"
              {
#line 288 "hlds_out_mode.m"
                {
#line 288 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 288 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[5]));
#line 288 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 288 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm1_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 288 "hlds_out_mode.m"
                }
#line 287 "hlds_out_mode.m"
              }
#line 287 "hlds_out_mode.m"
              break;
#line 287 "hlds_out_mode.m"
          }
#line 302 "hlds_out_mode.m"
#line 302 "hlds_out_mode.m"
          switch (hlds__hlds_out__hlds_out_mode__AnyResult_8) {
#line 302 "hlds_out_mode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 302 "hlds_out_mode.m"
            case (MR_Integer) 2:
#line 308 "hlds_out_mode.m"
              {
#line 309 "hlds_out_mode.m"
                {
#line 309 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 309 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[6]));
#line 309 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 309 "hlds_out_mode.m"
                }
#line 308 "hlds_out_mode.m"
              }
#line 302 "hlds_out_mode.m"
              break;
#line 302 "hlds_out_mode.m"
            case (MR_Integer) 1:
#line 305 "hlds_out_mode.m"
              {
#line 306 "hlds_out_mode.m"
                {
#line 306 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 306 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[7]));
#line 306 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 306 "hlds_out_mode.m"
                }
#line 305 "hlds_out_mode.m"
              }
#line 302 "hlds_out_mode.m"
              break;
#line 302 "hlds_out_mode.m"
            case (MR_Integer) 0:
#line 302 "hlds_out_mode.m"
              {
#line 303 "hlds_out_mode.m"
                {
#line 303 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__SubTerm2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 303 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[8]));
#line 303 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "hlds_out_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm2_14, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 303 "hlds_out_mode.m"
                }
#line 302 "hlds_out_mode.m"
              }
#line 302 "hlds_out_mode.m"
              break;
#line 302 "hlds_out_mode.m"
          }
#line 317 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__InstNamesResult_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "hlds_out_mode.m"
            {
#line 318 "hlds_out_mode.m"
              {
#line 318 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 318 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[9]));
#line 318 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 318 "hlds_out_mode.m"
              }
#line 317 "hlds_out_mode.m"
            }
#line 317 "hlds_out_mode.m"
          else
#line 321 "hlds_out_mode.m"
            {
#line 321 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstNameSet_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstNamesResult_9, (MR_Integer) 0)));
#line 321 "hlds_out_mode.m"
              MR_Integer hlds__hlds_out__hlds_out_mode__NumInstNames_62;
#line 321 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__CountTerm_63;
#line 321 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_64_64;
#line 321 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_68_68;

#line 324 "hlds_out_mode.m"
              {
#line 324 "hlds_out_mode.m"
                mercury__set__count_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, hlds__hlds_out__hlds_out_mode__InstNameSet_61, &hlds__hlds_out__hlds_out_mode__NumInstNames_62);
              }
#line 325 "hlds_out_mode.m"
              {
#line 325 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_64_64, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__NumInstNames_62));
#line 325 "hlds_out_mode.m"
              }
#line 325 "hlds_out_mode.m"
              {
#line 325 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__CountTerm_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 325 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_63, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_64_64));
#line 325 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__CountTerm_63, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 325 "hlds_out_mode.m"
              }
#line 327 "hlds_out_mode.m"
              {
#line 327 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_68_68, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__CountTerm_63));
#line 327 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 327 "hlds_out_mode.m"
              }
#line 326 "hlds_out_mode.m"
              {
#line 326 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 326 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[10]));
#line 326 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_68_68));
#line 326 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm3_15, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 326 "hlds_out_mode.m"
              }
#line 321 "hlds_out_mode.m"
            }
#line 335 "hlds_out_mode.m"
          if ((hlds__hlds_out__hlds_out_mode__InstVarsResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "hlds_out_mode.m"
            {
#line 336 "hlds_out_mode.m"
              {
#line 336 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 336 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[11]));
#line 336 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 336 "hlds_out_mode.m"
              }
#line 335 "hlds_out_mode.m"
            }
#line 335 "hlds_out_mode.m"
          else
#line 339 "hlds_out_mode.m"
            {
#line 339 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__TypeInfo_16_86 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[4];
#line 339 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__InstVarsResult_10, (MR_Integer) 0)));
#line 339 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstVars_78;
#line 339 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__InstVarTerms_79;
#line 339 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_80_80;

#line 340 "hlds_out_mode.m"
              {
#line 340 "hlds_out_mode.m"
                mercury__set__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_mode__TypeInfo_16_86, hlds__hlds_out__hlds_out_mode__InstVarSet_77, &hlds__hlds_out__hlds_out_mode__InstVars_78);
              }
#line 341 "hlds_out_mode.m"
              {
#line 341 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 341 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_5[0]));
#line 341 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__inst_test_results_to_term_2_f_0_1));
#line 341 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 341 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_80_80, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 341 "hlds_out_mode.m"
              }
#line 341 "hlds_out_mode.m"
              {
#line 341 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__InstVarTerms_79 = mercury__list__map_2_f_0(hlds__hlds_out__hlds_out_mode__TypeInfo_16_86, (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[0], hlds__hlds_out__hlds_out_mode__V_80_80, hlds__hlds_out__hlds_out_mode__InstVars_78);
              }
#line 342 "hlds_out_mode.m"
              {
#line 342 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__SubTerm4_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 342 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[12]));
#line 342 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstVarTerms_79));
#line 342 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__SubTerm4_16, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 342 "hlds_out_mode.m"
              }
#line 339 "hlds_out_mode.m"
            }
#line 268 "hlds_out_mode.m"
          {
#line 268 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__SubTerm5_17 = hlds__hlds_out__hlds_out_mode__inst_result_contains_types_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_4, hlds__hlds_out__hlds_out_mode__TypeResult_11);
          }
#line 269 "hlds_out_mode.m"
          {
#line 269 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__SubTerm6_18 = hlds__hlds_out__hlds_out_mode__inst_result_type_ctor_propagated_to_term_2_f_0(hlds__hlds_out__hlds_out_mode__Context_4, hlds__hlds_out__hlds_out_mode__PropagatedResult_12);
          }
#line 272 "hlds_out_mode.m"
          {
#line 272 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_32_32, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm6_18));
#line 272 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "hlds_out_mode.m"
          }
#line 272 "hlds_out_mode.m"
          {
#line 272 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_31_31, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm5_17));
#line 272 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_31_31, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_32_32));
#line 272 "hlds_out_mode.m"
          }
#line 272 "hlds_out_mode.m"
          {
#line 272 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_30_30, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm4_16));
#line 272 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_30_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_31_31));
#line 272 "hlds_out_mode.m"
          }
#line 272 "hlds_out_mode.m"
          {
#line 272 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_29_29, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm3_15));
#line 272 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_29_29, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_30_30));
#line 272 "hlds_out_mode.m"
          }
#line 272 "hlds_out_mode.m"
          {
#line 272 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm2_14));
#line 272 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_28_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_29_29));
#line 272 "hlds_out_mode.m"
          }
#line 272 "hlds_out_mode.m"
          {
#line 272 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_27_27, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__SubTerm1_13));
#line 272 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_28_28));
#line 272 "hlds_out_mode.m"
          }
#line 271 "hlds_out_mode.m"
          {
#line 271 "hlds_out_mode.m"
            hlds__hlds_out__hlds_out_mode__Term_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 271 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[13]));
#line 271 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_27_27));
#line 271 "hlds_out_mode.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_6, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 271 "hlds_out_mode.m"
          }
#line 261 "hlds_out_mode.m"
        }
#line 261 "hlds_out_mode.m"
        break;
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
#line 193 "hlds_out_mode.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_mode__Inst_7)) {
#line 193 "hlds_out_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 193 "hlds_out_mode.m"
      case (MR_Integer) 0:
#line 193 "hlds_out_mode.m"
#line 193 "hlds_out_mode.m"
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_mode__Inst_7)) {
#line 193 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 193 "hlds_out_mode.m"
          case (MR_Integer) 0:
#line 203 "hlds_out_mode.m"
            {
#line 130 "hlds_out_mode.m"
              {
#line 130 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 130 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[1]));
#line 130 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 130 "hlds_out_mode.m"
              }
#line 203 "hlds_out_mode.m"
            }
#line 193 "hlds_out_mode.m"
            break;
#line 193 "hlds_out_mode.m"
          case (MR_Integer) 1:
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
            break;
#line 193 "hlds_out_mode.m"
        }
#line 193 "hlds_out_mode.m"
        break;
#line 193 "hlds_out_mode.m"
      case (MR_Integer) 1:
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
        break;
#line 193 "hlds_out_mode.m"
      case (MR_Integer) 2:
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
              MR_String hlds__hlds_out__hlds_out_mode__V_58_58 = ((&hlds__hlds_out__hlds_out_mode_vector_common_4[0 + hlds__hlds_out__hlds_out_mode__Uniq_9]))->hlds__hlds_out__hlds_out_mode__vector_common_type_4_0__vct_4_f_0;
#line 199 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_78_78;

#line 130 "hlds_out_mode.m"
              {
#line 130 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 130 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_78_78, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_58_58));
#line 130 "hlds_out_mode.m"
              }
#line 130 "hlds_out_mode.m"
              {
#line 130 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 130 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_78_78));
#line 130 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 130 "hlds_out_mode.m"
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
        break;
#line 193 "hlds_out_mode.m"
      case (MR_Integer) 3:
#line 193 "hlds_out_mode.m"
#line 193 "hlds_out_mode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 0)))) {
#line 193 "hlds_out_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 193 "hlds_out_mode.m"
          case (MR_Integer) 0:
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
#line 215 "hlds_out_mode.m"
              switch (hlds__hlds_out__hlds_out_mode__Lang_5) {
#line 215 "hlds_out_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 215 "hlds_out_mode.m"
                case (MR_Integer) 1:
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
#line 219 "hlds_out_mode.m"
                    {
#line 219 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_45_45, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_46_46));
#line 219 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 219 "hlds_out_mode.m"
                    }
#line 218 "hlds_out_mode.m"
                    {
#line 218 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__ArgTerms_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_44_44));
#line 218 "hlds_out_mode.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__ArgTerms_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_45_45));
#line 218 "hlds_out_mode.m"
                    }
#line 216 "hlds_out_mode.m"
                  }
#line 215 "hlds_out_mode.m"
                  break;
#line 215 "hlds_out_mode.m"
                case (MR_Integer) 0:
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
#line 215 "hlds_out_mode.m"
                  break;
#line 215 "hlds_out_mode.m"
              }
#line 578 "hlds_out_mode.m"
#line 578 "hlds_out_mode.m"
              switch (hlds__hlds_out__hlds_out_mode__Uniq_59) {
#line 578 "hlds_out_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 578 "hlds_out_mode.m"
                case (MR_Integer) 3:
#line 581 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "clobbered";
#line 578 "hlds_out_mode.m"
                  break;
#line 578 "hlds_out_mode.m"
                case (MR_Integer) 4:
#line 582 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "mostly_clobbered";
#line 578 "hlds_out_mode.m"
                  break;
#line 578 "hlds_out_mode.m"
                case (MR_Integer) 2:
#line 580 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "mostly_unique";
#line 578 "hlds_out_mode.m"
                  break;
#line 578 "hlds_out_mode.m"
                case (MR_Integer) 0:
#line 578 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "bound";
#line 578 "hlds_out_mode.m"
                  break;
#line 578 "hlds_out_mode.m"
                case (MR_Integer) 1:
#line 579 "hlds_out_mode.m"
                  hlds__hlds_out__hlds_out_mode__V_51_51 = (MR_String) "unique";
#line 578 "hlds_out_mode.m"
                  break;
#line 578 "hlds_out_mode.m"
              }
#line 222 "hlds_out_mode.m"
              {
#line 222 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 222 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_50_50, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_51_51));
#line 222 "hlds_out_mode.m"
              }
#line 221 "hlds_out_mode.m"
              {
#line 221 "hlds_out_mode.m"
                parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_mode__V_50_50, hlds__hlds_out__hlds_out_mode__ArgTerms_17, hlds__hlds_out__hlds_out_mode__Context_6, &hlds__hlds_out__hlds_out_mode__Term_8);
              }
#line 211 "hlds_out_mode.m"
            }
#line 193 "hlds_out_mode.m"
            break;
#line 193 "hlds_out_mode.m"
          case (MR_Integer) 1:
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

#line 578 "hlds_out_mode.m"
#line 578 "hlds_out_mode.m"
                  switch (hlds__hlds_out__hlds_out_mode__Uniq_62) {
#line 578 "hlds_out_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 578 "hlds_out_mode.m"
                    case (MR_Integer) 3:
#line 581 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "clobbered";
#line 578 "hlds_out_mode.m"
                      break;
#line 578 "hlds_out_mode.m"
                    case (MR_Integer) 4:
#line 582 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "mostly_clobbered";
#line 578 "hlds_out_mode.m"
                      break;
#line 578 "hlds_out_mode.m"
                    case (MR_Integer) 2:
#line 580 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "mostly_unique";
#line 578 "hlds_out_mode.m"
                      break;
#line 578 "hlds_out_mode.m"
                    case (MR_Integer) 0:
#line 578 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "ground";
#line 578 "hlds_out_mode.m"
                      break;
#line 578 "hlds_out_mode.m"
                    case (MR_Integer) 1:
#line 579 "hlds_out_mode.m"
                      hlds__hlds_out__hlds_out_mode__V_42_42 = (MR_String) "unique";
#line 578 "hlds_out_mode.m"
                      break;
#line 578 "hlds_out_mode.m"
                  }
#line 130 "hlds_out_mode.m"
                  {
#line 130 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 130 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_96_96, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_42_42));
#line 130 "hlds_out_mode.m"
                  }
#line 130 "hlds_out_mode.m"
                  {
#line 130 "hlds_out_mode.m"
                    hlds__hlds_out__hlds_out_mode__Term_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 130 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_96_96));
#line 130 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "hlds_out_mode.m"
                    MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__Term_8, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_6));
#line 130 "hlds_out_mode.m"
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
            break;
#line 193 "hlds_out_mode.m"
          case (MR_Integer) 2:
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
            break;
#line 193 "hlds_out_mode.m"
          case (MR_Integer) 3:
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
#line 243 "hlds_out_mode.m"
              {
#line 243 "hlds_out_mode.m"
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
            break;
#line 193 "hlds_out_mode.m"
          case (MR_Integer) 4:
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
            break;
#line 193 "hlds_out_mode.m"
          case (MR_Integer) 5:
#line 245 "hlds_out_mode.m"
            {
#line 245 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 1)));
#line 245 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_mode__Inst_7, (MR_Integer) 2)));
#line 245 "hlds_out_mode.m"
              MR_Word hlds__hlds_out__hlds_out_mode__V_26_26;

#line 247 "hlds_out_mode.m"
              {
#line 247 "hlds_out_mode.m"
                hlds__hlds_out__hlds_out_mode__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 247 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_26_26, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Name_22));
#line 247 "hlds_out_mode.m"
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_26_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Args_23));
#line 247 "hlds_out_mode.m"
              }
#line 246 "hlds_out_mode.m"
              {
#line 246 "hlds_out_mode.m"
                return hlds__hlds_out__hlds_out_mode__Term_8 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_5, hlds__hlds_out__hlds_out_mode__Context_6, hlds__hlds_out__hlds_out_mode__V_26_26);
              }
#line 245 "hlds_out_mode.m"
            }
#line 193 "hlds_out_mode.m"
            break;
#line 193 "hlds_out_mode.m"
        }
#line 193 "hlds_out_mode.m"
        break;
#line 193 "hlds_out_mode.m"
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
#line 130 "hlds_out_mode.m"
    {
#line 130 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 130 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_6_6));
#line 130 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__HeadVar__3_3, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Context_4));
#line 130 "hlds_out_mode.m"
    }
#line 129 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 129 "hlds_out_mode.m"
  }
#line 127 "hlds_out_mode.m"
}

#line 101 "hlds_out_mode.m"
MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_4_f_0(
#line 101 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_6,
#line 101 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ModuleInfo_7,
#line 101 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_8,
#line 101 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_9)
#line 101 "hlds_out_mode.m"
{
#line 1152 "hlds_out_mode.m"
  {
#line 1152 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1152 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_10;
#line 1152 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Expansions_11;
#line 1152 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_12;
#line 1155 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_10;

#line 1153 "hlds_out_mode.m"
    {
#line 1153 "hlds_out_mode.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &hlds__hlds_out__hlds_out_mode__Expansions_11);
    }
#line 1154 "hlds_out_mode.m"
    {
#line 1154 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1154 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_12, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstVarSet_8));
#line 1154 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_12, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModuleInfo_7));
#line 1154 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_12, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Expansions_11));
#line 1154 "hlds_out_mode.m"
    }
#line 1155 "hlds_out_mode.m"
    {
#line 1155 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_inst_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__Lang_6, ((MR_Box) (hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_12)), hlds__hlds_out__hlds_out_mode__Inst_9, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_10);
    }
#line 1155 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_10 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_10);
#line 1152 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_10;
#line 1152 "hlds_out_mode.m"
  }
#line 101 "hlds_out_mode.m"
}

#line 99 "hlds_out_mode.m"
void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_expanded_inst_6_p_0(
#line 99 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Lang_7,
#line 99 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__ModuleInfo_8,
#line 99 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__InstVarSet_9,
#line 99 "hlds_out_mode.m"
  MR_Word hlds__hlds_out__hlds_out_mode__Inst_10)
#line 99 "hlds_out_mode.m"
{
#line 1147 "hlds_out_mode.m"
  {
#line 1147 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1147 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__Expansions_12;
#line 1147 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_13;
#line 1150 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 1148 "hlds_out_mode.m"
    {
#line 1148 "hlds_out_mode.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &hlds__hlds_out__hlds_out_mode__Expansions_12);
    }
#line 1149 "hlds_out_mode.m"
    {
#line 1149 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1149 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_13, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstVarSet_9));
#line 1149 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__ModuleInfo_8));
#line 1149 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_13, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__Expansions_12));
#line 1149 "hlds_out_mode.m"
    }
#line 1150 "hlds_out_mode.m"
    {
#line 1150 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_inst_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[3], hlds__hlds_out__hlds_out_mode__Lang_7, ((MR_Box) (hlds__hlds_out__hlds_out_mode__ExpandedInstInfo_13)), hlds__hlds_out__hlds_out_mode__Inst_10, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 1147 "hlds_out_mode.m"
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
#line 1111 "hlds_out_mode.m"
  {
#line 1111 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1111 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_6;
#line 1112 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_6;

#line 1112 "hlds_out_mode.m"
    {
#line 1112 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__UniModes_4, hlds__hlds_out__hlds_out_mode__InstVarSet_5, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_6);
    }
#line 1112 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_6 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_6);
#line 1111 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_6;
#line 1111 "hlds_out_mode.m"
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
#line 1109 "hlds_out_mode.m"
  {
#line 1109 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1109 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_9;

#line 1109 "hlds_out_mode.m"
    {
#line 1109 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__UniModes_5, hlds__hlds_out__hlds_out_mode__InstVarSet_6, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_9);
    }
#line 1109 "hlds_out_mode.m"
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
#line 1132 "hlds_out_mode.m"
  {
#line 1132 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1132 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_6;
#line 1132 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2];
#line 1132 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_29;
#line 1132 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_14;
#line 1132 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_15;
#line 1132 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_16;
#line 1132 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_17;
#line 1132 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstInfo_18;
#line 1132 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_4, (MR_Integer) 0)));
#line 1132 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_4, (MR_Integer) 1)));
#line 1132 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_22_22;
#line 1132 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_23;
#line 1132 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_21_25;
#line 1132 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_27_27;
#line 1141 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_19_23;
#line 9034 "hlds.hlds_out.hlds_out_mode.c"
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9036 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_21_25;
#line 1143 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv3_String_6;

#line 1139 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_19_19, (MR_Integer) 0)));
#line 1139 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_19_19, (MR_Integer) 1)));
#line 1139 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_20_20, (MR_Integer) 0)));
#line 1139 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_20_20, (MR_Integer) 1)));
#line 1140 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstInfo_18 = (MR_Word) hlds__hlds_out__hlds_out_mode__InstVarSet_5;
#line 1141 "hlds_out_mode.m"
    {
#line 1141 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1141 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_14));
#line 1141 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_16));
#line 1141 "hlds_out_mode.m"
    }
#line 9061 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_29 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6];
#line 1141 "hlds_out_mode.m"
    {
#line 1141 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_29, (MR_Integer) 1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstInfo_18)), hlds__hlds_out__hlds_out_mode__V_22_22, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_19_23);
    }
#line 1141 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_23 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_19_23);
#line 9070 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9072 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 9074 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_19_23)), &hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_21_25);
    }
#line 9077 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_21_25 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_21_25);
#line 1143 "hlds_out_mode.m"
    {
#line 1143 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1143 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_15));
#line 1143 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_27_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_17));
#line 1143 "hlds_out_mode.m"
    }
#line 1143 "hlds_out_mode.m"
    {
#line 1143 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_8, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_29, (MR_Integer) 1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstInfo_18)), hlds__hlds_out__hlds_out_mode__V_27_27, ((MR_Box) (hlds__hlds_out__hlds_out_mode__STATE_VARIABLE_IO_21_25)), &hlds__hlds_out__hlds_out_mode__conv3_String_6);
    }
#line 1143 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_6 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv3_String_6);
#line 1132 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_6;
#line 1132 "hlds_out_mode.m"
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
#line 1130 "hlds_out_mode.m"
  {
#line 1130 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 1130 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1];
#line 1130 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_32;
#line 1130 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA1_17;
#line 1130 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB1_18;
#line 1130 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstA2_19;
#line 1130 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstB2_20;
#line 1130 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__InstInfo_21;
#line 1130 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_5, (MR_Integer) 0)));
#line 1130 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__UniMode_5, (MR_Integer) 1)));
#line 1130 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_25_25;
#line 1130 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_30_30;
#line 1141 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_19_26;
#line 9140 "hlds.hlds_out.hlds_out_mode.c"
    void MR_CALL (* hlds__hlds_out__hlds_out_mode__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9142 "hlds.hlds_out.hlds_out_mode.c"
    MR_Box hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_21_28;
#line 1143 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv3_STATE_VARIABLE_IO_9;

#line 1139 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, (MR_Integer) 0)));
#line 1139 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_22_22, (MR_Integer) 1)));
#line 1139 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstA2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_23_23, (MR_Integer) 0)));
#line 1139 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstB2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_23_23, (MR_Integer) 1)));
#line 1140 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__InstInfo_21 = (MR_Word) hlds__hlds_out__hlds_out_mode__InstVarSet_6;
#line 1141 "hlds_out_mode.m"
    {
#line 1141 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1141 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA1_17));
#line 1141 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_25_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstA2_19));
#line 1141 "hlds_out_mode.m"
    }
#line 9167 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_32 = (MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[6];
#line 1141 "hlds_out_mode.m"
    {
#line 1141 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_32, (MR_Integer) 1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstInfo_21)), hlds__hlds_out__hlds_out_mode__V_25_25, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_19_26);
    }
#line 9174 "hlds.hlds_out.hlds_out_mode.c"
    hlds__hlds_out__hlds_out_mode__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9176 "hlds.hlds_out.hlds_out_mode.c"
    {
#line 9178 "hlds.hlds_out.hlds_out_mode.c"
      hlds__hlds_out__hlds_out_mode__func_1(((MR_Box) hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv2_STATE_VARIABLE_IO_21_28);
    }
#line 1143 "hlds_out_mode.m"
    {
#line 1143 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1143 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_30_30, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB1_18));
#line 1143 "hlds_out_mode.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_mode__V_30_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstB2_20));
#line 1143 "hlds_out_mode.m"
    }
#line 1143 "hlds_out_mode.m"
    {
#line 1143 "hlds_out_mode.m"
      parse_tree__mercury_to_mercury__mercury_format_mode_5_p_0(hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_output_11, hlds__hlds_out__hlds_out_mode__TypeClassInfo_for_inst_info_32, (MR_Integer) 1, ((MR_Box) (hlds__hlds_out__hlds_out_mode__InstInfo_21)), hlds__hlds_out__hlds_out_mode__V_30_30, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv3_STATE_VARIABLE_IO_9);
    }
#line 1130 "hlds_out_mode.m"
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
#line 739 "hlds_out_mode.m"
  {
#line 739 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 739 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 740 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 740 "hlds_out_mode.m"
    {
#line 740 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Insts_7, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 740 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 739 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 739 "hlds_out_mode.m"
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
#line 734 "hlds_out_mode.m"
  {
#line 734 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 735 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 735 "hlds_out_mode.m"
    {
#line 735 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_list_8_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Insts_8, (MR_Integer) 1, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 734 "hlds_out_mode.m"
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
#line 767 "hlds_out_mode.m"
  {
#line 767 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 767 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 768 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 768 "hlds_out_mode.m"
    {
#line 768 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Inst_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 768 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 767 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 767 "hlds_out_mode.m"
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
#line 763 "hlds_out_mode.m"
  {
#line 763 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 763 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 763 "hlds_out_mode.m"
    {
#line 763 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_uni_mode_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Inst_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 763 "hlds_out_mode.m"
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
#line 855 "hlds_out_mode.m"
  {
#line 855 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 855 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 856 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 856 "hlds_out_mode.m"
    {
#line 856 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Inst_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 856 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 855 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 855 "hlds_out_mode.m"
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
#line 851 "hlds_out_mode.m"
  {
#line 851 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 851 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_U_15;

#line 851 "hlds_out_mode.m"
    {
#line 851 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Inst_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_U_15);
    }
#line 851 "hlds_out_mode.m"
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
#line 832 "hlds_out_mode.m"
  {
#line 832 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 832 "hlds_out_mode.m"
    MR_String hlds__hlds_out__hlds_out_mode__String_12;
#line 833 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_String_12;

#line 833 "hlds_out_mode.m"
    {
#line 833 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[2], hlds__hlds_out__hlds_out_mode__Insts_7, hlds__hlds_out__hlds_out_mode__Indent_8, hlds__hlds_out__hlds_out_mode__Lang_9, hlds__hlds_out__hlds_out_mode__InclAddr_10, hlds__hlds_out__hlds_out_mode__InstVarSet_11, ((MR_Box) ((MR_String) "")), &hlds__hlds_out__hlds_out_mode__conv0_String_12);
    }
#line 833 "hlds_out_mode.m"
    hlds__hlds_out__hlds_out_mode__String_12 = ((MR_String) hlds__hlds_out__hlds_out_mode__conv0_String_12);
#line 832 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__String_12;
#line 832 "hlds_out_mode.m"
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
#line 828 "hlds_out_mode.m"
  {
#line 828 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 828 "hlds_out_mode.m"
    MR_Box hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15;

#line 828 "hlds_out_mode.m"
    {
#line 828 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) &hlds__hlds_out__hlds_out_mode_scalar_common_1[1], hlds__hlds_out__hlds_out_mode__Insts_8, hlds__hlds_out__hlds_out_mode__Indent_9, hlds__hlds_out__hlds_out_mode__Lang_10, hlds__hlds_out__hlds_out_mode__InclAddr_11, hlds__hlds_out__hlds_out_mode__InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_mode__conv0_STATE_VARIABLE_IO_15);
    }
#line 828 "hlds_out_mode.m"
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
#line 437 "hlds_out_mode.m"
  {
#line 437 "hlds_out_mode.m"
    MR_bool hlds__hlds_out__hlds_out_mode__succeeded;
#line 437 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 437 "hlds_out_mode.m"
    MR_Word hlds__hlds_out__hlds_out_mode__V_6_6;

#line 438 "hlds_out_mode.m"
    {
#line 438 "hlds_out_mode.m"
      hlds__hlds_out__hlds_out_mode__V_6_6 = mercury__term__context_init_0_f_0();
    }
#line 438 "hlds_out_mode.m"
    {
#line 438 "hlds_out_mode.m"
      return hlds__hlds_out__hlds_out_mode__HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_with_context_3_f_0(hlds__hlds_out__hlds_out_mode__Lang_4, hlds__hlds_out__hlds_out_mode__V_6_6, hlds__hlds_out__hlds_out_mode__InstName_5);
    }
#line 437 "hlds_out_mode.m"
    return hlds__hlds_out__hlds_out_mode__HeadVar__3_3;
#line 437 "hlds_out_mode.m"
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
#line 186 "hlds_out_mode.m"
    {
#line 186 "hlds_out_mode.m"
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
#line 175 "hlds_out_mode.m"
            {
#line 175 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_23_23));
#line 175 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "hlds_out_mode.m"
            }
#line 174 "hlds_out_mode.m"
            {
#line 174 "hlds_out_mode.m"
              hlds__hlds_out__hlds_out_mode__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_19_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_21_21));
#line 174 "hlds_out_mode.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_mode__V_19_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_mode__V_22_22));
#line 174 "hlds_out_mode.m"
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
#line 181 "hlds_out_mode.m"
        {
#line 181 "hlds_out_mode.m"
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
#line 160 "hlds_out_mode.m"
    {
#line 160 "hlds_out_mode.m"
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
              parse_tree__mercury_to_mercury__mercury_output_inst_5_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_mode__InstVarSet_20, hlds__hlds_out__hlds_out_mode__Inst_14);
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
