/*
** Automatically generated from `xml_documentation.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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


/* :- module check_hlds.xml_documentation. */
/* :- implementation. */

/*
INIT mercury__check_hlds__xml_documentation__init
ENDINIT
*/

#include "check_hlds.xml_documentation.mih"


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
#include "term_to_xml.mih"
#include "time.mih"
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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 134 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 137 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 140 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0;

#line 143 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 146 "check_hlds.xml_documentation.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__xml_documentation__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 149 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 152 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__xml_documentation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 155 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 158 "check_hlds.xml_documentation.c"
static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_comments_0[1];

#line 161 "check_hlds.xml_documentation.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__xml_documentation__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__xml_documentation__type_ctor_info_line_type_0;

#line 164 "check_hlds.xml_documentation.c"
static const MR_NotagFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0;

#line 167 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_0;

#line 170 "check_hlds.xml_documentation.c"
static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_1[1];

#line 173 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_1;

#line 176 "check_hlds.xml_documentation.c"
static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_2[1];

#line 179 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_2;

#line 182 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_3;

#line 185 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_0[2];

#line 188 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_1[1];

#line 191 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_2[1];

#line 194 "check_hlds.xml_documentation.c"
static const MR_DuPtagLayout check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_line_type_0[3];

#line 197 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_line_type_0[4];

#line 200 "check_hlds.xml_documentation.c"
static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_line_type_0[4];

#line 203 "check_hlds.xml_documentation.c"
static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_module_info_xml_doc_0_0[3];

#line 206 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0;

#line 209 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_module_info_xml_doc_0_0[1];

#line 212 "check_hlds.xml_documentation.c"
static const MR_DuPtagLayout check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_module_info_xml_doc_0[1];

#line 215 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_module_info_xml_doc_0[1];

#line 218 "check_hlds.xml_documentation.c"
static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_module_info_xml_doc_0[1];

#line 221 "check_hlds.xml_documentation.c"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0_10001(
#line 224 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 226 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2);

#line 229 "check_hlds.xml_documentation.c"
static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0_10001(
#line 232 "check_hlds.xml_documentation.c"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
#line 234 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 236 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3);

#line 239 "check_hlds.xml_documentation.c"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0_10001(
#line 242 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 244 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2);

#line 247 "check_hlds.xml_documentation.c"
static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0_10001(
#line 250 "check_hlds.xml_documentation.c"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
#line 252 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 254 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3);

#line 257 "check_hlds.xml_documentation.c"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0_10001(
#line 260 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 262 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2);

#line 265 "check_hlds.xml_documentation.c"
static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0_10001(
#line 268 "check_hlds.xml_documentation.c"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
#line 270 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 272 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3);

#line 275 "check_hlds.xml_documentation.c"
static MR_Box MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_10001(
#line 278 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 280 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 858 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_54_95_95_91_49_93_95_48_3_f_0(
#line 858 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7);

#line 858 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0(
#line 858 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7);

#line 858 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_52_95_95_91_49_44_32_50_93_95_48_3_f_0(
#line 858 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7);

#line 858 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0(
#line 858 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7);

#line 858 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0(
#line 858 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7);

#line 569 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0_1(
#line 569 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 569 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 560 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 560 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
#line 560 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
#line 560 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16);

#line 469 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_50_93_95_48_5_p_0(
#line 469 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 469 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_8,
#line 469 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
#line 469 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15);

#line 765 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__765__1_2_f_0(
#line 765 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_6,
#line 765 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_19);

#line 763 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__763__1_1_f_0(
#line 763 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_16);

#line 310 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_4(
#line 310 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 310 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 310 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 310 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 310 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4);

#line 306 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_3(
#line 306 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 306 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 306 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 306 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 306 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4);

#line 301 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_2(
#line 301 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 301 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 301 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 301 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 301 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4);

#line 296 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_1(
#line 296 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 296 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 296 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 296 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_3);

#line 287 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0(
#line 287 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

#line 283 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0(
#line 283 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 283 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 283 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 283 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0(
#line 283 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 283 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 67 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0(
#line 67 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 67 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 67 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 67 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0(
#line 67 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 67 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 61 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0(
#line 61 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 61 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 61 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 61 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0(
#line 61 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 61 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 864 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__nyi_1_f_0(
#line 864 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_3);

#line 852 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_string_2_f_0(
#line 852 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 852 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__S_5);

#line 844 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_float_2_f_0(
#line 844 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 844 "xml_documentation.m"
  MR_Float check_hlds__xml_documentation__F_5);

#line 840 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_int_2_f_0(
#line 840 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 840 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__I_5);

#line 828 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0(
#line 828 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Prefix_5,
#line 828 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Name_6,
#line 828 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Arity_7);

#line 801 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__visibility_to_xml_1_f_0(
#line 801 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Status_3);

#line 795 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0_1(
#line 795 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 795 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 790 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(
#line 790 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 790 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 781 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_context_to_xml_1_f_0(
#line 781 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

#line 771 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__name_to_xml_1_f_0(
#line 771 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

#line 766 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_3(
#line 766 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 766 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 765 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_2(
#line 765 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 765 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 763 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_1(
#line 763 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 763 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 760 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0(
#line 760 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 760 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_6,
#line 760 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Methods_7);

#line 757 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0_1(
#line 757 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 757 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 746 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0(
#line 746 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_5,
#line 746 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Vars_6,
#line 746 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 728 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_3(
#line 728 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 728 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 726 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_2(
#line 726 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 726 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 724 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_1(
#line 724 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 724 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 708 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0(
#line 708 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_7,
#line 708 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_8,
#line 708 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3,
#line 708 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ClassDefn_11,
#line 708 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27,
#line 708 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_28);

#line 689 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__arity_to_xml_1_f_0(
#line 689 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Arity_3);

#line 660 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__cons_id_to_xml_1_f_0(
#line 660 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

#line 657 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0_1(
#line 657 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 657 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 653 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0(
#line 653 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 653 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 638 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0_1(
#line 638 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 638 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 633 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0(
#line 633 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_1,
#line 633 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 603 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_1(
#line 603 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 603 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 591 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(
#line 591 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 591 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Inst_5);

#line 587 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_2(
#line 587 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 587 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 580 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_1(
#line 580 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 580 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 575 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0(
#line 575 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 575 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Mode_5);

#line 560 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__pred_mode_documentation_5_p_0(
#line 560 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation___C_6,
#line 560 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation___ProcId_7,
#line 560 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
#line 560 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
#line 560 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16);

#line 551 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0_1(
#line 551 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 551 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 548 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0(
#line 548 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 548 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 522 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_3(
#line 522 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 522 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 522 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 522 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 522 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4);

#line 516 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_2(
#line 516 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 516 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 515 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_1(
#line 515 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 515 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 488 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0(
#line 488 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_4,
#line 488 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_5);

#line 469 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__pred_documentation_5_p_0(
#line 469 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 469 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation___PredId_7,
#line 469 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_8,
#line 469 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
#line 469 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15);

#line 461 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_3(
#line 461 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 461 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 448 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_2(
#line 448 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 448 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 440 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_1(
#line 440 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 440 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 432 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0(
#line 432 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_1,
#line 432 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 415 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_arg_to_xml_3_f_0(
#line 415 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 415 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_6,
#line 415 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__CtorArg_7);

#line 409 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_3(
#line 409 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 409 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 406 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_2(
#line 406 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 406 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 405 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_1(
#line 405 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 405 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 398 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0(
#line 398 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 398 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_6,
#line 398 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 390 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0_1(
#line 390 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 390 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 387 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0(
#line 387 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_1,
#line 387 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_2,
#line 387 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 381 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__type_param_to_xml_2_f_0(
#line 381 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 381 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVar_5);

#line 356 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0_1(
#line 356 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 356 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 342 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0(
#line 342 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 342 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 342 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TypeDefn_9,
#line 342 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25,
#line 342 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26);

#line 324 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__import_documentation_4_p_0(
#line 324 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InterfaceImportedModules_5,
#line 324 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ImportedModule_6,
#line 324 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_11,
#line 324 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_12);

#line 261 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_backwards_2_f_0(
#line 261 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_4,
#line 261 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Line_5);

#line 238 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_forwards_2_f_0(
#line 238 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_4,
#line 238 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Line_5);

#line 182 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__maybe_add_comment_3_f_0(
#line 182 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_5,
#line 182 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Context_6,
#line 182 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Xml_7);

#line 169 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__is_not_comment_char_1_p_0(
#line 169 "xml_documentation.m"
  MR_Char check_hlds__xml_documentation__C_2);

#line 148 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_2(
#line 148 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 148 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 147 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_1(
#line 147 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 147 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 119 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0(
#line 119 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__S_6,
#line 119 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 119 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__3_3);


static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_1[16][2];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_2[28][3];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_3[2][4];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_4[2][5];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_5[8][6];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_6[4][7];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_7[10][1];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_8[3][8];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_9[1][9];




static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_1[16][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_term_to_xml__xmlable__arity1__check_hlds__xml_documentation__module_info_xml_doc__arity0__)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_module_info_xml_doc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_7[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_2[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_7[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_7[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_7[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_7[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_7[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_7[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_7[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_7[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_2[28][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_3[1])),
    ((MR_Box) (check_hlds__xml_documentation__build_comments_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_3[1])),
    ((MR_Box) (check_hlds__xml_documentation__build_comments_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "hlds_foreign_type")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "hlds_abstract_type")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "hlds_solver_type")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "character")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "float")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "int")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "string")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "free")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "not_reached")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "merge_inst")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "any_inst")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "ground_inst")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "mostly_uniq_inst")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "base_typeclass_info_const")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "closure_cons")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])))
  },
  /* row 19 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_4[1])),
    ((MR_Box) (check_hlds__xml_documentation__class_methods_to_xml_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[8])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[9])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[10])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[11])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[12])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[13])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[14])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[15])))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_5[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__xml_documentation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_6[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__xml_documentation__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_7[10][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Not yet implemented!"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "cc_multi"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "cc_nondet"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "det"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "erroneous"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "failure"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "multi"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "nondet"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "semidet"))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_8[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&check_hlds__xml_documentation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
};



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



#line 1558 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1566 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1574 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0
  }
};

#line 1582 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1590 "check_hlds.xml_documentation.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__xml_documentation__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1598 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__xml_documentation__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1606 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__xml_documentation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1615 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 1623 "check_hlds.xml_documentation.c"
static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_comments_0[1] = {
  (MR_Integer) 0
};

#line 1628 "check_hlds.xml_documentation.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__xml_documentation__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__xml_documentation__type_ctor_info_line_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0
  }
};

#line 1637 "check_hlds.xml_documentation.c"
static const MR_NotagFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0 = {
  (MR_String) "comments",
  (MR_PseudoTypeInfo) &check_hlds__xml_documentation__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__xml_documentation__type_ctor_info_line_type_0,
  (MR_String) "line_types"
};

#line 1644 "check_hlds.xml_documentation.c"
const MR_TypeCtorInfo_Struct check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__xml_documentation____Unify____comments_0_0_10001)),
  ((MR_Box) (check_hlds__xml_documentation____Compare____comments_0_0_10001)),
  (MR_String) "check_hlds.xml_documentation",
  (MR_String) "comments",
  {
    &check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0
  },
  {
    &check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_comments_0
};

#line 1665 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_0 = {
  (MR_String) "blank",
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

#line 1680 "check_hlds.xml_documentation.c"
static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1685 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_1 = {
  (MR_String) "comment",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_1,
  NULL,
  NULL,
  NULL
};

#line 1700 "check_hlds.xml_documentation.c"
static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1705 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_2 = {
  (MR_String) "code_and_comment",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_2,
  NULL,
  NULL,
  NULL
};

#line 1720 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_3 = {
  (MR_String) "code",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1735 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_0[2] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_0,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_3
};

#line 1741 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_1[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_1
};

#line 1746 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_2[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_2
};

#line 1751 "check_hlds.xml_documentation.c"
static const MR_DuPtagLayout check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_line_type_0[3] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_2
  }
};

#line 1770 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_line_type_0[4] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_0,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_3,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_2,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_1
};

#line 1778 "check_hlds.xml_documentation.c"
static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_line_type_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1786 "check_hlds.xml_documentation.c"
const MR_TypeCtorInfo_Struct check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__xml_documentation____Unify____line_type_0_0_10001)),
  ((MR_Box) (check_hlds__xml_documentation____Compare____line_type_0_0_10001)),
  (MR_String) "check_hlds.xml_documentation",
  (MR_String) "line_type",
  {
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_line_type_0
  },
  {
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_line_type_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_line_type_0
};

#line 1807 "check_hlds.xml_documentation.c"
static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_module_info_xml_doc_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

#line 1814 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0 = {
  (MR_String) "module_info_xml_doc",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_module_info_xml_doc_0_0,
  NULL,
  NULL,
  NULL
};

#line 1829 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_module_info_xml_doc_0_0[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0
};

#line 1834 "check_hlds.xml_documentation.c"
static const MR_DuPtagLayout check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_module_info_xml_doc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_module_info_xml_doc_0_0
  }
};

#line 1843 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_module_info_xml_doc_0[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0
};

#line 1848 "check_hlds.xml_documentation.c"
static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_module_info_xml_doc_0[1] = {
  (MR_Integer) 0
};

#line 1853 "check_hlds.xml_documentation.c"
const MR_TypeCtorInfo_Struct check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_module_info_xml_doc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0_10001)),
  ((MR_Box) (check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0_10001)),
  (MR_String) "check_hlds.xml_documentation",
  (MR_String) "module_info_xml_doc",
  {
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_module_info_xml_doc_0
  },
  {
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_module_info_xml_doc_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_module_info_xml_doc_0
};

#line 1874 "check_hlds.xml_documentation.c"
const MR_BaseTypeclassInfo base_typeclass_info_term_to_xml__xmlable__arity1__check_hlds__xml_documentation__module_info_xml_doc__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_10001))
};

#line 1884 "check_hlds.xml_documentation.c"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0_10001(
#line 1887 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 1889 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2)
#line 1891 "check_hlds.xml_documentation.c"
{
#line 1893 "check_hlds.xml_documentation.c"
  {
#line 1895 "check_hlds.xml_documentation.c"
    MR_bool check_hlds__xml_documentation__succeeded;

#line 1898 "check_hlds.xml_documentation.c"
    {
#line 1900 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____comments_0_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2));
    }
#line 1903 "check_hlds.xml_documentation.c"
    return check_hlds__xml_documentation__succeeded;
#line 1905 "check_hlds.xml_documentation.c"
  }
#line 1907 "check_hlds.xml_documentation.c"
}

#line 1910 "check_hlds.xml_documentation.c"
static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0_10001(
#line 1913 "check_hlds.xml_documentation.c"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
#line 1915 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 1917 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3)
#line 1919 "check_hlds.xml_documentation.c"
{
#line 1921 "check_hlds.xml_documentation.c"
  {
#line 1923 "check_hlds.xml_documentation.c"
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__1_1;

#line 1926 "check_hlds.xml_documentation.c"
    {
#line 1928 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation____Compare____comments_0_0(&check_hlds__xml_documentation__conv0_HeadVar__1_1, ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3));
    }
#line 1931 "check_hlds.xml_documentation.c"
    *check_hlds__xml_documentation__wrapper_arg_1 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__1_1));
#line 1933 "check_hlds.xml_documentation.c"
  }
#line 1935 "check_hlds.xml_documentation.c"
}

#line 1938 "check_hlds.xml_documentation.c"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0_10001(
#line 1941 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 1943 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2)
#line 1945 "check_hlds.xml_documentation.c"
{
#line 1947 "check_hlds.xml_documentation.c"
  {
#line 1949 "check_hlds.xml_documentation.c"
    MR_bool check_hlds__xml_documentation__succeeded;

#line 1952 "check_hlds.xml_documentation.c"
    {
#line 1954 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____line_type_0_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2));
    }
#line 1957 "check_hlds.xml_documentation.c"
    return check_hlds__xml_documentation__succeeded;
#line 1959 "check_hlds.xml_documentation.c"
  }
#line 1961 "check_hlds.xml_documentation.c"
}

#line 1964 "check_hlds.xml_documentation.c"
static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0_10001(
#line 1967 "check_hlds.xml_documentation.c"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
#line 1969 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 1971 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3)
#line 1973 "check_hlds.xml_documentation.c"
{
#line 1975 "check_hlds.xml_documentation.c"
  {
#line 1977 "check_hlds.xml_documentation.c"
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__1_1;

#line 1980 "check_hlds.xml_documentation.c"
    {
#line 1982 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation____Compare____line_type_0_0(&check_hlds__xml_documentation__conv0_HeadVar__1_1, ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3));
    }
#line 1985 "check_hlds.xml_documentation.c"
    *check_hlds__xml_documentation__wrapper_arg_1 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__1_1));
#line 1987 "check_hlds.xml_documentation.c"
  }
#line 1989 "check_hlds.xml_documentation.c"
}

#line 1992 "check_hlds.xml_documentation.c"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0_10001(
#line 1995 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 1997 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2)
#line 1999 "check_hlds.xml_documentation.c"
{
#line 2001 "check_hlds.xml_documentation.c"
  {
#line 2003 "check_hlds.xml_documentation.c"
    MR_bool check_hlds__xml_documentation__succeeded;

#line 2006 "check_hlds.xml_documentation.c"
    {
#line 2008 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2));
    }
#line 2011 "check_hlds.xml_documentation.c"
    return check_hlds__xml_documentation__succeeded;
#line 2013 "check_hlds.xml_documentation.c"
  }
#line 2015 "check_hlds.xml_documentation.c"
}

#line 2018 "check_hlds.xml_documentation.c"
static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0_10001(
#line 2021 "check_hlds.xml_documentation.c"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
#line 2023 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 2025 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3)
#line 2027 "check_hlds.xml_documentation.c"
{
#line 2029 "check_hlds.xml_documentation.c"
  {
#line 2031 "check_hlds.xml_documentation.c"
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__1_1;

#line 2034 "check_hlds.xml_documentation.c"
    {
#line 2036 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0(&check_hlds__xml_documentation__conv0_HeadVar__1_1, ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3));
    }
#line 2039 "check_hlds.xml_documentation.c"
    *check_hlds__xml_documentation__wrapper_arg_1 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__1_1));
#line 2041 "check_hlds.xml_documentation.c"
  }
#line 2043 "check_hlds.xml_documentation.c"
}

#line 2046 "check_hlds.xml_documentation.c"
static MR_Box MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_10001(
#line 2049 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 2051 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 2053 "check_hlds.xml_documentation.c"
{
#line 2055 "check_hlds.xml_documentation.c"
  {
#line 2057 "check_hlds.xml_documentation.c"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 2059 "check_hlds.xml_documentation.c"
    MR_Box check_hlds__xml_documentation__closure;
#line 2061 "check_hlds.xml_documentation.c"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 2064 "check_hlds.xml_documentation.c"
    check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 2066 "check_hlds.xml_documentation.c"
    {
#line 2068 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 2071 "check_hlds.xml_documentation.c"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 2073 "check_hlds.xml_documentation.c"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 2075 "check_hlds.xml_documentation.c"
  }
#line 2077 "check_hlds.xml_documentation.c"
}

#line 858 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_54_95_95_91_49_93_95_48_3_f_0(
#line 858 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7)
#line 858 "xml_documentation.m"
{
#line 860 "xml_documentation.m"
  {
#line 860 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 860 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 860 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;

#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 860 "xml_documentation.m"
  }
#line 858 "xml_documentation.m"
}

#line 858 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0(
#line 858 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7)
#line 858 "xml_documentation.m"
{
#line 860 "xml_documentation.m"
  {
#line 860 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 860 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 860 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;

#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 860 "xml_documentation.m"
  }
#line 858 "xml_documentation.m"
}

#line 858 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_52_95_95_91_49_44_32_50_93_95_48_3_f_0(
#line 858 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7)
#line 858 "xml_documentation.m"
{
#line 860 "xml_documentation.m"
  {
#line 860 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 860 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 860 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;

#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 860 "xml_documentation.m"
  }
#line 858 "xml_documentation.m"
}

#line 858 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0(
#line 858 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7)
#line 858 "xml_documentation.m"
{
#line 860 "xml_documentation.m"
  {
#line 860 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 860 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 860 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;

#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 860 "xml_documentation.m"
  }
#line 858 "xml_documentation.m"
}

#line 858 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0(
#line 858 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 858 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7)
#line 858 "xml_documentation.m"
{
#line 860 "xml_documentation.m"
  {
#line 860 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 860 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 860 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;

#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 860 "xml_documentation.m"
  }
#line 858 "xml_documentation.m"
}

#line 569 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0_1(
#line 569 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 569 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 569 "xml_documentation.m"
{
#line 569 "xml_documentation.m"
  {
#line 569 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 569 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 569 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 569 "xml_documentation.m"
    {
#line 569 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_mode_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 569 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 569 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 569 "xml_documentation.m"
  }
#line 569 "xml_documentation.m"
}

#line 560 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 560 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
#line 560 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
#line 560 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16)
#line 560 "xml_documentation.m"
{
#line 563 "xml_documentation.m"
  {
#line 563 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 563 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_9;
#line 563 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__IVarSet_10;
#line 563 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Modes_11;
#line 563 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Determinism_12;
#line 563 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlModes_13;
#line 563 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlDet_14;
#line 563 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_18_18;
#line 563 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_21_21;
#line 563 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_22_22;
#line 563 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_32_32;

#line 565 "xml_documentation.m"
    {
#line 565 "xml_documentation.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__xml_documentation__ProcInfo_8, &check_hlds__xml_documentation__IVarSet_10);
    }
#line 566 "xml_documentation.m"
    {
#line 566 "xml_documentation.m"
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(check_hlds__xml_documentation__ProcInfo_8, &check_hlds__xml_documentation__Modes_11);
    }
#line 567 "xml_documentation.m"
    {
#line 567 "xml_documentation.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__xml_documentation__ProcInfo_8, &check_hlds__xml_documentation__Determinism_12);
    }
#line 569 "xml_documentation.m"
    {
#line 569 "xml_documentation.m"
      check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 569 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[7]));
#line 569 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0_1));
#line 569 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 569 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 3) = ((MR_Box) (check_hlds__xml_documentation__IVarSet_10));
#line 569 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_32_32 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_18_18, check_hlds__xml_documentation__Modes_11);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__XmlModes_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_13, 0) = ((MR_Box) ((MR_String) "modes"));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_13, 2) = ((MR_Box) (check_hlds__xml_documentation__V_32_32));
#line 860 "xml_documentation.m"
    }
#line 695 "xml_documentation.m"
    if ((check_hlds__xml_documentation__Determinism_12 == (MR_Integer) 4))
#line 700 "xml_documentation.m"
      {
#line 854 "xml_documentation.m"
        check_hlds__xml_documentation__XmlDet_14 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[20];
#line 700 "xml_documentation.m"
      }
#line 695 "xml_documentation.m"
    else
#line 695 "xml_documentation.m"
      if ((check_hlds__xml_documentation__Determinism_12 == (MR_Integer) 5))
#line 699 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__XmlDet_14 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[21];
#line 699 "xml_documentation.m"
        }
#line 695 "xml_documentation.m"
      else
#line 695 "xml_documentation.m"
        if ((check_hlds__xml_documentation__Determinism_12 == (MR_Integer) 0))
#line 695 "xml_documentation.m"
          {
#line 854 "xml_documentation.m"
            check_hlds__xml_documentation__XmlDet_14 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[22];
#line 695 "xml_documentation.m"
          }
#line 695 "xml_documentation.m"
        else
#line 695 "xml_documentation.m"
          if ((check_hlds__xml_documentation__Determinism_12 == (MR_Integer) 6))
#line 701 "xml_documentation.m"
            {
#line 854 "xml_documentation.m"
              check_hlds__xml_documentation__XmlDet_14 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[23];
#line 701 "xml_documentation.m"
            }
#line 695 "xml_documentation.m"
          else
#line 695 "xml_documentation.m"
            if ((check_hlds__xml_documentation__Determinism_12 == (MR_Integer) 7))
#line 703 "xml_documentation.m"
              {
#line 854 "xml_documentation.m"
                check_hlds__xml_documentation__XmlDet_14 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[24];
#line 703 "xml_documentation.m"
              }
#line 695 "xml_documentation.m"
            else
#line 695 "xml_documentation.m"
              if ((check_hlds__xml_documentation__Determinism_12 == (MR_Integer) 2))
#line 697 "xml_documentation.m"
                {
#line 854 "xml_documentation.m"
                  check_hlds__xml_documentation__XmlDet_14 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[25];
#line 697 "xml_documentation.m"
                }
#line 695 "xml_documentation.m"
              else
#line 695 "xml_documentation.m"
                if ((check_hlds__xml_documentation__Determinism_12 == (MR_Integer) 3))
#line 698 "xml_documentation.m"
                  {
#line 854 "xml_documentation.m"
                    check_hlds__xml_documentation__XmlDet_14 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[26];
#line 698 "xml_documentation.m"
                  }
#line 695 "xml_documentation.m"
                else
#line 696 "xml_documentation.m"
                  {
#line 854 "xml_documentation.m"
                    check_hlds__xml_documentation__XmlDet_14 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[27];
#line 696 "xml_documentation.m"
                  }
#line 571 "xml_documentation.m"
    {
#line 571 "xml_documentation.m"
      check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlDet_14));
#line 571 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 571 "xml_documentation.m"
    }
#line 571 "xml_documentation.m"
    {
#line 571 "xml_documentation.m"
      check_hlds__xml_documentation__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlModes_13));
#line 571 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 1) = ((MR_Box) (check_hlds__xml_documentation__V_22_22));
#line 571 "xml_documentation.m"
    }
#line 571 "xml_documentation.m"
    {
#line 571 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 571 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 0) = ((MR_Box) ((MR_String) "pred_mode"));
#line 571 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 571 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 571 "xml_documentation.m"
    }
#line 573 "xml_documentation.m"
    {
#line 573 "xml_documentation.m"
      MR_Word base;
#line 573 "xml_documentation.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "xml_documentation.m"
      *check_hlds__xml_documentation__STATE_VARIABLE_Xml_16 = base;
#line 573 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_9));
#line 573 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15));
#line 573 "xml_documentation.m"
    }
#line 563 "xml_documentation.m"
  }
#line 560 "xml_documentation.m"
}

#line 469 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_50_93_95_48_5_p_0(
#line 469 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 469 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_8,
#line 469 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
#line 469 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15)
#line 469 "xml_documentation.m"
{
#line 472 "xml_documentation.m"
  {
#line 472 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 472 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportStatus_10;
#line 472 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Origin_11;
#line 472 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Markers_12;
#line 478 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_16_16;
#line 479 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_13_13;
#line 480 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;

#line 473 "xml_documentation.m"
    {
#line 473 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__xml_documentation__PredInfo_8, &check_hlds__xml_documentation__ImportStatus_10);
    }
#line 474 "xml_documentation.m"
    {
#line 474 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__xml_documentation__PredInfo_8, &check_hlds__xml_documentation__Origin_11);
    }
#line 475 "xml_documentation.m"
    {
#line 475 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__xml_documentation__PredInfo_8, &check_hlds__xml_documentation__Markers_12);
    }
#line 478 "xml_documentation.m"
    {
#line 478 "xml_documentation.m"
      check_hlds__xml_documentation__V_16_16 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(check_hlds__xml_documentation__ImportStatus_10);
    }
#line 478 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_16_16 == (MR_Integer) 1);
#line 478 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 478 "xml_documentation.m"
      {
#line 479 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = ((((MR_tag((MR_Word) check_hlds__xml_documentation__Origin_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Origin_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 479 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 479 "xml_documentation.m"
          {
#line 479 "xml_documentation.m"
            check_hlds__xml_documentation__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Origin_11, (MR_Integer) 1)));
#line 480 "xml_documentation.m"
            check_hlds__xml_documentation__V_17_17 = (MR_Integer) 9;
#line 480 "xml_documentation.m"
            {
#line 480 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__xml_documentation__Markers_12, check_hlds__xml_documentation__V_17_17);
            }
#line 480 "xml_documentation.m"
            check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 479 "xml_documentation.m"
          }
#line 478 "xml_documentation.m"
      }
#line 484 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 482 "xml_documentation.m"
      {
#line 482 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Xml_9;

#line 482 "xml_documentation.m"
        {
#line 482 "xml_documentation.m"
          check_hlds__xml_documentation__Xml_9 = check_hlds__xml_documentation__predicate_documentation_2_f_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__PredInfo_8);
        }
#line 483 "xml_documentation.m"
        {
#line 483 "xml_documentation.m"
          MR_Word base;
#line 483 "xml_documentation.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "xml_documentation.m"
          *check_hlds__xml_documentation__STATE_VARIABLE_Xml_15 = base;
#line 483 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_9));
#line 483 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14));
#line 483 "xml_documentation.m"
        }
#line 482 "xml_documentation.m"
      }
#line 484 "xml_documentation.m"
    else
#line 483 "xml_documentation.m"
      *check_hlds__xml_documentation__STATE_VARIABLE_Xml_15 = check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14;
#line 472 "xml_documentation.m"
  }
#line 469 "xml_documentation.m"
}

#line 765 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__765__1_2_f_0(
#line 765 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_6,
#line 765 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_19)
#line 765 "xml_documentation.m"
{
#line 765 "xml_documentation.m"
  {
#line 765 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_20;
#line 765 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv0_HeadVar__3_20;

#line 765 "xml_documentation.m"
    {
#line 765 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_HeadVar__3_20 = mercury__map__lookup_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__xml_documentation__PredTable_6, ((MR_Box) (check_hlds__xml_documentation__HeadVar__2_19)));
    }
#line 765 "xml_documentation.m"
    check_hlds__xml_documentation__HeadVar__3_20 = ((MR_Word) check_hlds__xml_documentation__conv0_HeadVar__3_20);
#line 765 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_20;
#line 765 "xml_documentation.m"
  }
#line 765 "xml_documentation.m"
}

#line 763 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__763__1_1_f_0(
#line 763 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_16)
#line 763 "xml_documentation.m"
{
#line 763 "xml_documentation.m"
  {
#line 763 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 763 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_16, (MR_Integer) 0)));
#line 763 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_16, (MR_Integer) 1)));

#line 763 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_17;
#line 763 "xml_documentation.m"
  }
#line 763 "xml_documentation.m"
}

#line 310 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_4(
#line 310 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 310 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 310 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 310 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 310 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4)
#line 310 "xml_documentation.m"
{
#line 310 "xml_documentation.m"
  {
#line 310 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 310 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv6_STATE_VARIABLE_Xml_28;

#line 310 "xml_documentation.m"
    {
#line 310 "xml_documentation.m"
      check_hlds__xml_documentation__class_documentation_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3), &check_hlds__xml_documentation__conv6_STATE_VARIABLE_Xml_28);
    }
#line 310 "xml_documentation.m"
    *check_hlds__xml_documentation__wrapper_arg_4 = ((MR_Box) (check_hlds__xml_documentation__conv6_STATE_VARIABLE_Xml_28));
#line 310 "xml_documentation.m"
  }
#line 310 "xml_documentation.m"
}

#line 306 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_3(
#line 306 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 306 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 306 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 306 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 306 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4)
#line 306 "xml_documentation.m"
{
#line 306 "xml_documentation.m"
  {
#line 306 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 306 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv4_STATE_VARIABLE_Xml_15;

#line 306 "xml_documentation.m"
    {
#line 306 "xml_documentation.m"
      check_hlds__xml_documentation__pred_documentation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3), &check_hlds__xml_documentation__conv4_STATE_VARIABLE_Xml_15);
    }
#line 306 "xml_documentation.m"
    *check_hlds__xml_documentation__wrapper_arg_4 = ((MR_Box) (check_hlds__xml_documentation__conv4_STATE_VARIABLE_Xml_15));
#line 306 "xml_documentation.m"
  }
#line 306 "xml_documentation.m"
}

#line 301 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_2(
#line 301 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 301 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 301 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 301 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 301 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4)
#line 301 "xml_documentation.m"
{
#line 301 "xml_documentation.m"
  {
#line 301 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 301 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_STATE_VARIABLE_Xmls_26;

#line 301 "xml_documentation.m"
    {
#line 301 "xml_documentation.m"
      check_hlds__xml_documentation__type_documentation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3), &check_hlds__xml_documentation__conv2_STATE_VARIABLE_Xmls_26);
    }
#line 301 "xml_documentation.m"
    *check_hlds__xml_documentation__wrapper_arg_4 = ((MR_Box) (check_hlds__xml_documentation__conv2_STATE_VARIABLE_Xmls_26));
#line 301 "xml_documentation.m"
  }
#line 301 "xml_documentation.m"
}

#line 296 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_1(
#line 296 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 296 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 296 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 296 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_3)
#line 296 "xml_documentation.m"
{
#line 296 "xml_documentation.m"
  {
#line 296 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 296 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_STATE_VARIABLE_Xmls_12;

#line 296 "xml_documentation.m"
    {
#line 296 "xml_documentation.m"
      check_hlds__xml_documentation__import_documentation_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), &check_hlds__xml_documentation__conv0_STATE_VARIABLE_Xmls_12);
    }
#line 296 "xml_documentation.m"
    *check_hlds__xml_documentation__wrapper_arg_3 = ((MR_Box) (check_hlds__xml_documentation__conv0_STATE_VARIABLE_Xmls_12));
#line 296 "xml_documentation.m"
  }
#line 296 "xml_documentation.m"
}

#line 287 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0(
#line 287 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
#line 287 "xml_documentation.m"
{
#line 287 "xml_documentation.m"
  {
#line 287 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_6;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeCtorInfo_53_53;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeInfo_57_57;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Comments_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 287 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__ModuleComment_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 2)));
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__CommentXml_7;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__InterfaceImports_8;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportedModules0_9;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportedModules_10;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportsXml_11;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportXml_12;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeTable_13;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeXmls_14;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeXml_15;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredTable_16;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredXmls_17;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredXml_18;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ClassTable_19;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ClassXmls_20;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ClassXml_21;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Children_22;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_25_25;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_26_26;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_28_28;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_29_29;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_30_30;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_34_34;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_38_38;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_42_42;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_46_46;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_47_47;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_48_48;
#line 287 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_49_49;
#line 296 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv1_ImportsXml_11;
#line 301 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv3_TypeXmls_14;
#line 306 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv5_PredXmls_17;
#line 310 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv7_ClassXmls_20;

#line 288 "xml_documentation.m"
    {
#line 288 "xml_documentation.m"
      check_hlds__xml_documentation__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 288 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 0) = ((MR_Box) (check_hlds__xml_documentation__ModuleComment_4));
#line 288 "xml_documentation.m"
    }
#line 288 "xml_documentation.m"
    {
#line 288 "xml_documentation.m"
      check_hlds__xml_documentation__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_25_25, 0) = ((MR_Box) (check_hlds__xml_documentation__V_26_26));
#line 288 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 288 "xml_documentation.m"
    }
#line 288 "xml_documentation.m"
    {
#line 288 "xml_documentation.m"
      check_hlds__xml_documentation__CommentXml_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 288 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CommentXml_7, 0) = ((MR_Box) ((MR_String) "comment"));
#line 288 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CommentXml_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 288 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CommentXml_7, 2) = ((MR_Box) (check_hlds__xml_documentation__V_25_25));
#line 288 "xml_documentation.m"
    }
#line 290 "xml_documentation.m"
    {
#line 290 "xml_documentation.m"
      hlds__hlds_module__module_info_get_interface_module_specifiers_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__InterfaceImports_8);
    }
#line 292 "xml_documentation.m"
    {
#line 292 "xml_documentation.m"
      hlds__hlds_module__module_info_get_imported_module_specifiers_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__ImportedModules0_9);
    }
#line 2972 "check_hlds.xml_documentation.c"
    check_hlds__xml_documentation__TypeCtorInfo_53_53 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 295 "xml_documentation.m"
    {
#line 295 "xml_documentation.m"
      check_hlds__xml_documentation__V_29_29 = mdbcomp__prim_data__all_builtin_modules_0_f_0();
    }
#line 295 "xml_documentation.m"
    {
#line 295 "xml_documentation.m"
      check_hlds__xml_documentation__V_28_28 = mercury__set__set_1_f_0(check_hlds__xml_documentation__TypeCtorInfo_53_53, check_hlds__xml_documentation__V_29_29);
    }
#line 294 "xml_documentation.m"
    {
#line 294 "xml_documentation.m"
      check_hlds__xml_documentation__ImportedModules_10 = mercury__set__difference_2_f_0(check_hlds__xml_documentation__TypeCtorInfo_53_53, check_hlds__xml_documentation__ImportedModules0_9, check_hlds__xml_documentation__V_28_28);
    }
#line 296 "xml_documentation.m"
    {
#line 296 "xml_documentation.m"
      check_hlds__xml_documentation__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 296 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[3]));
#line 296 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_1));
#line 296 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 296 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 3) = ((MR_Box) (check_hlds__xml_documentation__InterfaceImports_8));
#line 296 "xml_documentation.m"
    }
#line 3003 "check_hlds.xml_documentation.c"
    check_hlds__xml_documentation__TypeInfo_57_57 = (MR_Word) &check_hlds__xml_documentation_scalar_common_1[2];
#line 296 "xml_documentation.m"
    {
#line 296 "xml_documentation.m"
      mercury__set__fold_4_p_0(check_hlds__xml_documentation__TypeCtorInfo_53_53, check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__V_30_30, check_hlds__xml_documentation__ImportedModules_10, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv1_ImportsXml_11);
    }
#line 296 "xml_documentation.m"
    check_hlds__xml_documentation__ImportsXml_11 = ((MR_Word) check_hlds__xml_documentation__conv1_ImportsXml_11);
#line 298 "xml_documentation.m"
    {
#line 298 "xml_documentation.m"
      check_hlds__xml_documentation__ImportXml_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 298 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ImportXml_12, 0) = ((MR_Box) ((MR_String) "imports"));
#line 298 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ImportXml_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ImportXml_12, 2) = ((MR_Box) (check_hlds__xml_documentation__ImportsXml_11));
#line 298 "xml_documentation.m"
    }
#line 300 "xml_documentation.m"
    {
#line 300 "xml_documentation.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__TypeTable_13);
    }
#line 301 "xml_documentation.m"
    {
#line 301 "xml_documentation.m"
      check_hlds__xml_documentation__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 301 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_8[1]));
#line 301 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_2));
#line 301 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 301 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 3) = ((MR_Box) (check_hlds__xml_documentation__Comments_3));
#line 301 "xml_documentation.m"
    }
#line 301 "xml_documentation.m"
    {
#line 301 "xml_documentation.m"
      hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0(check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__V_34_34, check_hlds__xml_documentation__TypeTable_13, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv3_TypeXmls_14);
    }
#line 301 "xml_documentation.m"
    check_hlds__xml_documentation__TypeXmls_14 = ((MR_Word) check_hlds__xml_documentation__conv3_TypeXmls_14);
#line 303 "xml_documentation.m"
    {
#line 303 "xml_documentation.m"
      check_hlds__xml_documentation__TypeXml_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 303 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__TypeXml_15, 0) = ((MR_Box) ((MR_String) "types"));
#line 303 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__TypeXml_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__TypeXml_15, 2) = ((MR_Box) (check_hlds__xml_documentation__TypeXmls_14));
#line 303 "xml_documentation.m"
    }
#line 305 "xml_documentation.m"
    {
#line 305 "xml_documentation.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__PredTable_16);
    }
#line 306 "xml_documentation.m"
    {
#line 306 "xml_documentation.m"
      check_hlds__xml_documentation__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 306 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_38_38, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_8[2]));
#line 306 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_38_38, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_3));
#line 306 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 306 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_38_38, 3) = ((MR_Box) (check_hlds__xml_documentation__Comments_3));
#line 306 "xml_documentation.m"
    }
#line 306 "xml_documentation.m"
    {
#line 306 "xml_documentation.m"
      mercury__map__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__V_38_38, check_hlds__xml_documentation__PredTable_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv5_PredXmls_17);
    }
#line 306 "xml_documentation.m"
    check_hlds__xml_documentation__PredXmls_17 = ((MR_Word) check_hlds__xml_documentation__conv5_PredXmls_17);
#line 307 "xml_documentation.m"
    {
#line 307 "xml_documentation.m"
      check_hlds__xml_documentation__PredXml_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 307 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__PredXml_18, 0) = ((MR_Box) ((MR_String) "preds"));
#line 307 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__PredXml_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__PredXml_18, 2) = ((MR_Box) (check_hlds__xml_documentation__PredXmls_17));
#line 307 "xml_documentation.m"
    }
#line 309 "xml_documentation.m"
    {
#line 309 "xml_documentation.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__ClassTable_19);
    }
#line 310 "xml_documentation.m"
    {
#line 310 "xml_documentation.m"
      check_hlds__xml_documentation__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 310 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_42_42, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_9[0]));
#line 310 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_42_42, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_4));
#line 310 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 310 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_42_42, 3) = ((MR_Box) (check_hlds__xml_documentation__Comments_3));
#line 310 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_42_42, 4) = ((MR_Box) (check_hlds__xml_documentation__PredTable_16));
#line 310 "xml_documentation.m"
    }
#line 310 "xml_documentation.m"
    {
#line 310 "xml_documentation.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__V_42_42, check_hlds__xml_documentation__ClassTable_19, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv7_ClassXmls_20);
    }
#line 310 "xml_documentation.m"
    check_hlds__xml_documentation__ClassXmls_20 = ((MR_Word) check_hlds__xml_documentation__conv7_ClassXmls_20);
#line 312 "xml_documentation.m"
    {
#line 312 "xml_documentation.m"
      check_hlds__xml_documentation__ClassXml_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 312 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassXml_21, 0) = ((MR_Box) ((MR_String) "typeclasses"));
#line 312 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassXml_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassXml_21, 2) = ((MR_Box) (check_hlds__xml_documentation__ClassXmls_20));
#line 312 "xml_documentation.m"
    }
#line 314 "xml_documentation.m"
    {
#line 314 "xml_documentation.m"
      check_hlds__xml_documentation__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_49_49, 0) = ((MR_Box) (check_hlds__xml_documentation__ClassXml_21));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "xml_documentation.m"
    }
#line 314 "xml_documentation.m"
    {
#line 314 "xml_documentation.m"
      check_hlds__xml_documentation__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 0) = ((MR_Box) (check_hlds__xml_documentation__PredXml_18));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 1) = ((MR_Box) (check_hlds__xml_documentation__V_49_49));
#line 314 "xml_documentation.m"
    }
#line 314 "xml_documentation.m"
    {
#line 314 "xml_documentation.m"
      check_hlds__xml_documentation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 0) = ((MR_Box) (check_hlds__xml_documentation__TypeXml_15));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 1) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 314 "xml_documentation.m"
    }
#line 314 "xml_documentation.m"
    {
#line 314 "xml_documentation.m"
      check_hlds__xml_documentation__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 0) = ((MR_Box) (check_hlds__xml_documentation__ImportXml_12));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 1) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 314 "xml_documentation.m"
    }
#line 314 "xml_documentation.m"
    {
#line 314 "xml_documentation.m"
      check_hlds__xml_documentation__Children_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_22, 0) = ((MR_Box) (check_hlds__xml_documentation__CommentXml_7));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_22, 1) = ((MR_Box) (check_hlds__xml_documentation__V_46_46));
#line 314 "xml_documentation.m"
    }
#line 315 "xml_documentation.m"
    {
#line 315 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 315 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "module"));
#line 315 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__Children_22));
#line 315 "xml_documentation.m"
    }
#line 287 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_6;
#line 287 "xml_documentation.m"
  }
#line 287 "xml_documentation.m"
}

#line 283 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0(
#line 283 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 283 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 283 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 283 "xml_documentation.m"
{
#line 283 "xml_documentation.m"
  {
#line 283 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 283 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_12 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;
#line 283 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_13 = (MR_Integer) check_hlds__xml_documentation__HeadVar__3_3;

#line 283 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_12 == check_hlds__xml_documentation__CastY_13);
#line 283 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 3233 "check_hlds.xml_documentation.c"
      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
#line 283 "xml_documentation.m"
    else
#line 283 "xml_documentation.m"
      {
#line 283 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 283 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 283 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));
#line 283 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 283 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
#line 283 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 2)));
#line 283 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_10_10;

#line 283 "xml_documentation.m"
        {
#line 283 "xml_documentation.m"
          check_hlds__xml_documentation____Compare____comments_0_0(&check_hlds__xml_documentation__V_10_10, check_hlds__xml_documentation__V_4_4, check_hlds__xml_documentation__V_7_7);
        }
#line 3259 "check_hlds.xml_documentation.c"
        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_10_10 == (MR_Integer) 0);
#line 283 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 283 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 283 "xml_documentation.m"
          *check_hlds__xml_documentation__HeadVar__1_1 = check_hlds__xml_documentation__V_10_10;
#line 283 "xml_documentation.m"
        else
#line 283 "xml_documentation.m"
          {
#line 283 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__V_11_11;

#line 283 "xml_documentation.m"
            {
#line 283 "xml_documentation.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__V_5_5, check_hlds__xml_documentation__V_8_8);
            }
#line 3279 "check_hlds.xml_documentation.c"
            check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_11_11 == (MR_Integer) 0);
#line 283 "xml_documentation.m"
            check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 283 "xml_documentation.m"
            if (check_hlds__xml_documentation__succeeded)
#line 283 "xml_documentation.m"
              *check_hlds__xml_documentation__HeadVar__1_1 = check_hlds__xml_documentation__V_11_11;
#line 283 "xml_documentation.m"
            else
#line 283 "xml_documentation.m"
              {
#line 283 "xml_documentation.m"
                hlds__hlds_module____Compare____module_info_0_0(check_hlds__xml_documentation__HeadVar__1_1, check_hlds__xml_documentation__V_6_6, check_hlds__xml_documentation__V_9_9);
#line 283 "xml_documentation.m"
                return;
              }
#line 283 "xml_documentation.m"
          }
#line 283 "xml_documentation.m"
      }
#line 283 "xml_documentation.m"
  }
#line 283 "xml_documentation.m"
}

#line 283 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0(
#line 283 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 283 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 283 "xml_documentation.m"
{
#line 283 "xml_documentation.m"
  {
#line 283 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 283 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_9 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
#line 283 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_10 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

#line 283 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_9 == check_hlds__xml_documentation__CastY_10);
#line 283 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 283 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 283 "xml_documentation.m"
    else
#line 283 "xml_documentation.m"
      {
#line 283 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 283 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 283 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 2)));
#line 283 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 283 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 283 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));

#line 3346 "check_hlds.xml_documentation.c"
        {
#line 3348 "check_hlds.xml_documentation.c"
          check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____comments_0_0(check_hlds__xml_documentation__V_3_3, check_hlds__xml_documentation__V_6_6);
        }
#line 283 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 283 "xml_documentation.m"
          {
#line 3355 "check_hlds.xml_documentation.c"
            check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__V_4_4, check_hlds__xml_documentation__V_7_7) == 0);
#line 283 "xml_documentation.m"
            if (check_hlds__xml_documentation__succeeded)
#line 3359 "check_hlds.xml_documentation.c"
              {
#line 3361 "check_hlds.xml_documentation.c"
                return check_hlds__xml_documentation__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__xml_documentation__V_5_5, check_hlds__xml_documentation__V_8_8);
              }
#line 283 "xml_documentation.m"
          }
#line 283 "xml_documentation.m"
      }
#line 283 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 283 "xml_documentation.m"
  }
#line 283 "xml_documentation.m"
}

#line 67 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0(
#line 67 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 67 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 67 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 67 "xml_documentation.m"
{
#line 67 "xml_documentation.m"
  {
#line 67 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 67 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_20 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;
#line 67 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_21 = (MR_Integer) check_hlds__xml_documentation__HeadVar__3_3;

#line 67 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_20 == check_hlds__xml_documentation__CastY_21);
#line 67 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 3399 "check_hlds.xml_documentation.c"
      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "xml_documentation.m"
    else
#line 67 "xml_documentation.m"
      if ((check_hlds__xml_documentation__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "xml_documentation.m"
        if ((check_hlds__xml_documentation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "xml_documentation.m"
          *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "xml_documentation.m"
        else
#line 67 "xml_documentation.m"
          if ((check_hlds__xml_documentation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 67 "xml_documentation.m"
            *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "xml_documentation.m"
          else
#line 67 "xml_documentation.m"
            if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3419 "check_hlds.xml_documentation.c"
              *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "xml_documentation.m"
            else
#line 3423 "check_hlds.xml_documentation.c"
              *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "xml_documentation.m"
      else
#line 67 "xml_documentation.m"
        if ((check_hlds__xml_documentation__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 67 "xml_documentation.m"
          if ((check_hlds__xml_documentation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "xml_documentation.m"
            *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "xml_documentation.m"
          else
#line 67 "xml_documentation.m"
            if ((check_hlds__xml_documentation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 67 "xml_documentation.m"
              *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "xml_documentation.m"
            else
#line 67 "xml_documentation.m"
              if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3443 "check_hlds.xml_documentation.c"
                *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "xml_documentation.m"
              else
#line 3447 "check_hlds.xml_documentation.c"
                *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "xml_documentation.m"
        else
#line 67 "xml_documentation.m"
          if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 67 "xml_documentation.m"
            {
#line 67 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));

#line 67 "xml_documentation.m"
              if ((check_hlds__xml_documentation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3460 "check_hlds.xml_documentation.c"
                *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "xml_documentation.m"
              else
#line 67 "xml_documentation.m"
                if ((check_hlds__xml_documentation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3466 "check_hlds.xml_documentation.c"
                  *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "xml_documentation.m"
                else
#line 67 "xml_documentation.m"
                  if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 67 "xml_documentation.m"
                    {
#line 67 "xml_documentation.m"
                      MR_String check_hlds__xml_documentation__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));

#line 67 "xml_documentation.m"
                      {
#line 67 "xml_documentation.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__xml_documentation__HeadVar__1_1, check_hlds__xml_documentation__V_24_24, check_hlds__xml_documentation__V_16_16);
#line 67 "xml_documentation.m"
                        return;
                      }
#line 67 "xml_documentation.m"
                    }
#line 67 "xml_documentation.m"
                  else
#line 3488 "check_hlds.xml_documentation.c"
                    *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "xml_documentation.m"
            }
#line 67 "xml_documentation.m"
          else
#line 67 "xml_documentation.m"
            {
#line 67 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));

#line 67 "xml_documentation.m"
              if ((check_hlds__xml_documentation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3501 "check_hlds.xml_documentation.c"
                *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "xml_documentation.m"
              else
#line 67 "xml_documentation.m"
                if ((check_hlds__xml_documentation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3507 "check_hlds.xml_documentation.c"
                  *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "xml_documentation.m"
                else
#line 67 "xml_documentation.m"
                  if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3513 "check_hlds.xml_documentation.c"
                    *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "xml_documentation.m"
                  else
#line 67 "xml_documentation.m"
                    {
#line 67 "xml_documentation.m"
                      MR_String check_hlds__xml_documentation__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));

#line 67 "xml_documentation.m"
                      {
#line 67 "xml_documentation.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__xml_documentation__HeadVar__1_1, check_hlds__xml_documentation__V_25_25, check_hlds__xml_documentation__V_8_8);
#line 67 "xml_documentation.m"
                        return;
                      }
#line 67 "xml_documentation.m"
                    }
#line 67 "xml_documentation.m"
            }
#line 67 "xml_documentation.m"
  }
#line 67 "xml_documentation.m"
}

#line 67 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0(
#line 67 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 67 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 67 "xml_documentation.m"
{
#line 67 "xml_documentation.m"
  {
#line 67 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 67 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_11 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
#line 67 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_12 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

#line 67 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_11 == check_hlds__xml_documentation__CastY_12);
#line 67 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 67 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 67 "xml_documentation.m"
    else
#line 67 "xml_documentation.m"
      if ((check_hlds__xml_documentation__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "xml_documentation.m"
        {
#line 67 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__CastX_3 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
#line 67 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__CastY_4 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

#line 67 "xml_documentation.m"
          check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastY_4 == check_hlds__xml_documentation__CastX_3);
#line 67 "xml_documentation.m"
        }
#line 67 "xml_documentation.m"
      else
#line 67 "xml_documentation.m"
        if ((check_hlds__xml_documentation__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 67 "xml_documentation.m"
          {
#line 67 "xml_documentation.m"
            MR_Integer check_hlds__xml_documentation__CastX_9 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
#line 67 "xml_documentation.m"
            MR_Integer check_hlds__xml_documentation__CastY_10 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

#line 67 "xml_documentation.m"
            check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastY_10 == check_hlds__xml_documentation__CastX_9);
#line 67 "xml_documentation.m"
          }
#line 67 "xml_documentation.m"
        else
#line 67 "xml_documentation.m"
          if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 67 "xml_documentation.m"
            {
#line 67 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 67 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_8_8;

#line 67 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 67 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 67 "xml_documentation.m"
                {
#line 67 "xml_documentation.m"
                  check_hlds__xml_documentation__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 3611 "check_hlds.xml_documentation.c"
                  check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__V_7_7, check_hlds__xml_documentation__V_8_8) == 0);
#line 67 "xml_documentation.m"
                }
#line 67 "xml_documentation.m"
            }
#line 67 "xml_documentation.m"
          else
#line 67 "xml_documentation.m"
            {
#line 67 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 67 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_6_6;

#line 67 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 67 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 67 "xml_documentation.m"
                {
#line 67 "xml_documentation.m"
                  check_hlds__xml_documentation__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 3634 "check_hlds.xml_documentation.c"
                  check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__V_5_5, check_hlds__xml_documentation__V_6_6) == 0);
#line 67 "xml_documentation.m"
                }
#line 67 "xml_documentation.m"
            }
#line 67 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 67 "xml_documentation.m"
  }
#line 67 "xml_documentation.m"
}

#line 61 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0(
#line 61 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 61 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 61 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 61 "xml_documentation.m"
{
#line 61 "xml_documentation.m"
  {
#line 61 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 61 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_6 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;
#line 61 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_7 = (MR_Integer) check_hlds__xml_documentation__HeadVar__3_3;

#line 61 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_6 == check_hlds__xml_documentation__CastY_7);
#line 61 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 3671 "check_hlds.xml_documentation.c"
      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
#line 61 "xml_documentation.m"
    else
#line 61 "xml_documentation.m"
      {
#line 61 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_4_4 = (MR_Word) check_hlds__xml_documentation__HeadVar__2_2;
#line 61 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_5_5 = (MR_Word) check_hlds__xml_documentation__HeadVar__3_3;

#line 61 "xml_documentation.m"
        {
#line 61 "xml_documentation.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__xml_documentation_scalar_common_2[1], check_hlds__xml_documentation__HeadVar__1_1, ((MR_Box) (check_hlds__xml_documentation__V_4_4)), ((MR_Box) (check_hlds__xml_documentation__V_5_5)));
#line 61 "xml_documentation.m"
          return;
        }
#line 61 "xml_documentation.m"
      }
#line 61 "xml_documentation.m"
  }
#line 61 "xml_documentation.m"
}

#line 61 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0(
#line 61 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 61 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 61 "xml_documentation.m"
{
#line 61 "xml_documentation.m"
  {
#line 61 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 61 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_5 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
#line 61 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_6 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

#line 61 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_5 == check_hlds__xml_documentation__CastY_6);
#line 61 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 61 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 61 "xml_documentation.m"
    else
#line 61 "xml_documentation.m"
      {
#line 61 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_3_3 = (MR_Word) check_hlds__xml_documentation__HeadVar__1_1;
#line 61 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_4_4 = (MR_Word) check_hlds__xml_documentation__HeadVar__2_2;

#line 3729 "check_hlds.xml_documentation.c"
        {
#line 3731 "check_hlds.xml_documentation.c"
          return check_hlds__xml_documentation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__xml_documentation_scalar_common_2[1], ((MR_Box) (check_hlds__xml_documentation__V_3_3)), ((MR_Box) (check_hlds__xml_documentation__V_4_4)));
        }
#line 61 "xml_documentation.m"
      }
#line 61 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 61 "xml_documentation.m"
  }
#line 61 "xml_documentation.m"
}

#line 864 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__nyi_1_f_0(
#line 864 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_3)
#line 864 "xml_documentation.m"
{
#line 866 "xml_documentation.m"
  {
#line 866 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 866 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;

#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_3));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])));
#line 854 "xml_documentation.m"
    }
#line 866 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 866 "xml_documentation.m"
  }
#line 864 "xml_documentation.m"
}

#line 852 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_string_2_f_0(
#line 852 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 852 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__S_5)
#line 852 "xml_documentation.m"
{
#line 854 "xml_documentation.m"
  {
#line 854 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 854 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;
#line 854 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_7_7;
#line 854 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_8_8;

#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) (check_hlds__xml_documentation__S_5));
#line 854 "xml_documentation.m"
    }
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 0) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
    }
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__xml_documentation__E_4));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_7_7));
#line 854 "xml_documentation.m"
    }
#line 854 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_3;
#line 854 "xml_documentation.m"
  }
#line 852 "xml_documentation.m"
}

#line 844 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_float_2_f_0(
#line 844 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 844 "xml_documentation.m"
  MR_Float check_hlds__xml_documentation__F_5)
#line 844 "xml_documentation.m"
{
#line 846 "xml_documentation.m"
  {
#line 846 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 846 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;
#line 846 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_7_7;
#line 846 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_8_8;
#line 846 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_9_9;

#line 846 "xml_documentation.m"
    {
#line 846 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__string__float_to_string_1_f_0(check_hlds__xml_documentation__F_5);
    }
#line 846 "xml_documentation.m"
    {
#line 846 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 846 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 846 "xml_documentation.m"
    }
#line 846 "xml_documentation.m"
    {
#line 846 "xml_documentation.m"
      check_hlds__xml_documentation__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 0) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 846 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 846 "xml_documentation.m"
    }
#line 846 "xml_documentation.m"
    {
#line 846 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 846 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__xml_documentation__E_4));
#line 846 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 846 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_7_7));
#line 846 "xml_documentation.m"
    }
#line 846 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_3;
#line 846 "xml_documentation.m"
  }
#line 844 "xml_documentation.m"
}

#line 840 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_int_2_f_0(
#line 840 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 840 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__I_5)
#line 840 "xml_documentation.m"
{
#line 842 "xml_documentation.m"
  {
#line 842 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 842 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;
#line 842 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_7_7;
#line 842 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_8_8;
#line 842 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_9_9;

#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__I_5);
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 842 "xml_documentation.m"
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 0) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "xml_documentation.m"
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__xml_documentation__E_4));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_7_7));
#line 842 "xml_documentation.m"
    }
#line 842 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_3;
#line 842 "xml_documentation.m"
  }
#line 840 "xml_documentation.m"
}

#line 828 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0(
#line 828 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Prefix_5,
#line 828 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Name_6,
#line 828 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Arity_7)
#line 828 "xml_documentation.m"
{
#line 830 "xml_documentation.m"
  {
#line 830 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 830 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__HeadVar__4_4;
#line 830 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_8_8;
#line 830 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_9_9;
#line 830 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_11_11;
#line 830 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_14_14;
#line 830 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_16_16;

#line 835 "xml_documentation.m"
    {
#line 835 "xml_documentation.m"
      check_hlds__xml_documentation__V_16_16 = mdbcomp__prim_data__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Name_6);
    }
#line 835 "xml_documentation.m"
    {
#line 835 "xml_documentation.m"
      check_hlds__xml_documentation__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_16_16);
    }
#line 835 "xml_documentation.m"
    {
#line 835 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Prefix_5, check_hlds__xml_documentation__V_14_14);
    }
#line 831 "xml_documentation.m"
    {
#line 831 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_7);
    }
#line 831 "xml_documentation.m"
    {
#line 831 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_11_11);
    }
#line 830 "xml_documentation.m"
    {
#line 830 "xml_documentation.m"
      return check_hlds__xml_documentation__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_8_8, check_hlds__xml_documentation__V_9_9);
    }
#line 830 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 830 "xml_documentation.m"
  }
#line 828 "xml_documentation.m"
}

#line 801 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__visibility_to_xml_1_f_0(
#line 801 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Status_3)
#line 801 "xml_documentation.m"
{
#line 803 "xml_documentation.m"
  {
#line 803 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 803 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
#line 803 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Visibility_4;
#line 803 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_10_10;
#line 803 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11;
#line 804 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_6_6;

#line 804 "xml_documentation.m"
    {
#line 804 "xml_documentation.m"
      check_hlds__xml_documentation__V_6_6 = hlds__hlds_pred__status_defined_in_impl_section_1_f_0(check_hlds__xml_documentation__Status_3);
    }
#line 804 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_6_6 == (MR_Integer) 1);
#line 810 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 807 "xml_documentation.m"
      {
#line 805 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 807 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 806 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_4 = (MR_String) "abstract";
#line 807 "xml_documentation.m"
        else
#line 808 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_4 = (MR_String) "implementation";
#line 807 "xml_documentation.m"
      }
#line 810 "xml_documentation.m"
    else
#line 811 "xml_documentation.m"
      check_hlds__xml_documentation__Visibility_4 = (MR_String) "interface";
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_4));
#line 854 "xml_documentation.m"
    }
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 0) = ((MR_Box) (check_hlds__xml_documentation__V_11_11));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
    }
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "visibility"));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_10_10));
#line 854 "xml_documentation.m"
    }
#line 803 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 803 "xml_documentation.m"
  }
#line 801 "xml_documentation.m"
}

#line 795 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0_1(
#line 795 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 795 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 795 "xml_documentation.m"
{
#line 795 "xml_documentation.m"
  {
#line 795 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 795 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 795 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__3_3;

#line 795 "xml_documentation.m"
    {
#line 795 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 795 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__3_3));
#line 795 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 795 "xml_documentation.m"
  }
#line 795 "xml_documentation.m"
}

#line 790 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(
#line 790 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 790 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 790 "xml_documentation.m"
{
#line 792 "xml_documentation.m"
  {
#line 792 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 792 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_7;
#line 792 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ClassName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 792 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Types_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 792 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Id_8;
#line 792 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlName_9;
#line 792 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlTypes_10;
#line 792 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_12_12;
#line 792 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_14_14;
#line 792 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_16_16;
#line 792 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;
#line 792 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_20_20;
#line 792 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_21_21;
#line 792 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_29_29;
#line 792 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_30_30;
#line 792 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_32_32;
#line 792 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_35_35;
#line 792 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_37_37;
#line 792 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_42_42;

#line 793 "xml_documentation.m"
    {
#line 793 "xml_documentation.m"
      check_hlds__xml_documentation__V_12_12 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__xml_documentation__Types_6);
    }
#line 835 "xml_documentation.m"
    {
#line 835 "xml_documentation.m"
      check_hlds__xml_documentation__V_37_37 = mdbcomp__prim_data__sym_name_to_string_1_f_0(check_hlds__xml_documentation__ClassName_5);
    }
#line 835 "xml_documentation.m"
    {
#line 835 "xml_documentation.m"
      check_hlds__xml_documentation__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_37_37);
    }
#line 835 "xml_documentation.m"
    {
#line 835 "xml_documentation.m"
      check_hlds__xml_documentation__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "constraint", check_hlds__xml_documentation__V_35_35);
    }
#line 831 "xml_documentation.m"
    {
#line 831 "xml_documentation.m"
      check_hlds__xml_documentation__V_32_32 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__V_12_12);
    }
#line 831 "xml_documentation.m"
    {
#line 831 "xml_documentation.m"
      check_hlds__xml_documentation__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_32_32);
    }
#line 830 "xml_documentation.m"
    {
#line 830 "xml_documentation.m"
      check_hlds__xml_documentation__Id_8 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_29_29, check_hlds__xml_documentation__V_30_30);
    }
#line 794 "xml_documentation.m"
    {
#line 794 "xml_documentation.m"
      check_hlds__xml_documentation__XmlName_9 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__ClassName_5);
    }
#line 795 "xml_documentation.m"
    {
#line 795 "xml_documentation.m"
      check_hlds__xml_documentation__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 795 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_14_14, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[2]));
#line 795 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_14_14, 1) = ((MR_Box) (check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0_1));
#line 795 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 795 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_14_14, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_4));
#line 795 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_42_42 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_14_14, check_hlds__xml_documentation__Types_6);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__XmlTypes_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_10, 0) = ((MR_Box) ((MR_String) "constraint_types"));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_10, 2) = ((MR_Box) (check_hlds__xml_documentation__V_42_42));
#line 860 "xml_documentation.m"
    }
#line 796 "xml_documentation.m"
    {
#line 796 "xml_documentation.m"
      check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 796 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) ((MR_String) "ref"));
#line 796 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_17_17, 1) = ((MR_Box) (check_hlds__xml_documentation__Id_8));
#line 796 "xml_documentation.m"
    }
#line 796 "xml_documentation.m"
    {
#line 796 "xml_documentation.m"
      check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 796 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 796 "xml_documentation.m"
    }
#line 796 "xml_documentation.m"
    {
#line 796 "xml_documentation.m"
      check_hlds__xml_documentation__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_10));
#line 796 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 796 "xml_documentation.m"
    }
#line 796 "xml_documentation.m"
    {
#line 796 "xml_documentation.m"
      check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_9));
#line 796 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 796 "xml_documentation.m"
    }
#line 796 "xml_documentation.m"
    {
#line 796 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 796 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 0) = ((MR_Box) ((MR_String) "constraint"));
#line 796 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 1) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 796 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 2) = ((MR_Box) (check_hlds__xml_documentation__V_20_20));
#line 796 "xml_documentation.m"
    }
#line 792 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_7;
#line 792 "xml_documentation.m"
  }
#line 790 "xml_documentation.m"
}

#line 781 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_context_to_xml_1_f_0(
#line 781 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
#line 781 "xml_documentation.m"
{
#line 783 "xml_documentation.m"
  {
#line 783 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 783 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
#line 783 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 783 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__LineNumber_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 783 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_7_7;
#line 783 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_8_8;
#line 783 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_10_10;
#line 783 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11;
#line 783 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;
#line 783 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_18_18;
#line 783 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_23_23;
#line 783 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_24_24;
#line 783 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_25_25;

#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (check_hlds__xml_documentation__FileName_3));
#line 854 "xml_documentation.m"
    }
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__V_18_18));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
    }
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) ((MR_String) "filename"));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_8_8, 2) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 854 "xml_documentation.m"
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_25_25 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__LineNumber_4);
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 0) = ((MR_Box) (check_hlds__xml_documentation__V_25_25));
#line 842 "xml_documentation.m"
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_23_23, 0) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "xml_documentation.m"
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) ((MR_String) "line"));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 2) = ((MR_Box) (check_hlds__xml_documentation__V_23_23));
#line 842 "xml_documentation.m"
    }
#line 785 "xml_documentation.m"
    {
#line 785 "xml_documentation.m"
      check_hlds__xml_documentation__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 0) = ((MR_Box) (check_hlds__xml_documentation__V_11_11));
#line 785 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "xml_documentation.m"
    }
#line 784 "xml_documentation.m"
    {
#line 784 "xml_documentation.m"
      check_hlds__xml_documentation__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 0) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 784 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 1) = ((MR_Box) (check_hlds__xml_documentation__V_10_10));
#line 784 "xml_documentation.m"
    }
#line 783 "xml_documentation.m"
    {
#line 783 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 783 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "context"));
#line 783 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 783 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_7_7));
#line 783 "xml_documentation.m"
    }
#line 783 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 783 "xml_documentation.m"
  }
#line 781 "xml_documentation.m"
}

#line 771 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__name_to_xml_1_f_0(
#line 771 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
#line 771 "xml_documentation.m"
{
#line 773 "xml_documentation.m"
  {
#line 773 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 773 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;

#line 773 "xml_documentation.m"
    if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 774 "xml_documentation.m"
      {
#line 774 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 774 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 774 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_9_9;
#line 774 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_10_10;
#line 774 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_12_12;
#line 774 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_13_13;
#line 774 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_14_14;
#line 774 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_20_20;
#line 774 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_21_21;
#line 774 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_26_26;
#line 774 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_27_27;

#line 776 "xml_documentation.m"
        {
#line 776 "xml_documentation.m"
          check_hlds__xml_documentation__V_12_12 = mdbcomp__prim_data__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Module_5);
        }
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 0) = ((MR_Box) (check_hlds__xml_documentation__V_12_12));
#line 854 "xml_documentation.m"
        }
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
        }
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_10_10, 0) = ((MR_Box) ((MR_String) "module"));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_10_10, 2) = ((MR_Box) (check_hlds__xml_documentation__V_20_20));
#line 854 "xml_documentation.m"
        }
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_27_27, 0) = ((MR_Box) (check_hlds__xml_documentation__Name_6));
#line 854 "xml_documentation.m"
        }
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 0) = ((MR_Box) (check_hlds__xml_documentation__V_27_27));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
        }
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_14_14, 0) = ((MR_Box) ((MR_String) "name"));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_14_14, 2) = ((MR_Box) (check_hlds__xml_documentation__V_26_26));
#line 854 "xml_documentation.m"
        }
#line 776 "xml_documentation.m"
        {
#line 776 "xml_documentation.m"
          check_hlds__xml_documentation__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_13_13, 0) = ((MR_Box) (check_hlds__xml_documentation__V_14_14));
#line 776 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 776 "xml_documentation.m"
        }
#line 775 "xml_documentation.m"
        {
#line 775 "xml_documentation.m"
          check_hlds__xml_documentation__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_9_9, 0) = ((MR_Box) (check_hlds__xml_documentation__V_10_10));
#line 775 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_9_9, 1) = ((MR_Box) (check_hlds__xml_documentation__V_13_13));
#line 775 "xml_documentation.m"
        }
#line 774 "xml_documentation.m"
        {
#line 774 "xml_documentation.m"
          check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 774 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "qualified"));
#line 774 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 774 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 774 "xml_documentation.m"
        }
#line 774 "xml_documentation.m"
      }
#line 773 "xml_documentation.m"
    else
#line 773 "xml_documentation.m"
      {
#line 773 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 773 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_32_32;
#line 773 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_33_33;

#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_33_33, 0) = ((MR_Box) (check_hlds__xml_documentation__Name_3));
#line 854 "xml_documentation.m"
        }
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 0) = ((MR_Box) (check_hlds__xml_documentation__V_33_33));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
        }
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "unqualified"));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_32_32));
#line 854 "xml_documentation.m"
        }
#line 773 "xml_documentation.m"
      }
#line 773 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 773 "xml_documentation.m"
  }
#line 771 "xml_documentation.m"
}

#line 766 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_3(
#line 766 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 766 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 766 "xml_documentation.m"
{
#line 766 "xml_documentation.m"
  {
#line 766 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 766 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 766 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_Xml_6;

#line 766 "xml_documentation.m"
    {
#line 766 "xml_documentation.m"
      check_hlds__xml_documentation__conv2_Xml_6 = check_hlds__xml_documentation__predicate_documentation_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 766 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_6));
#line 766 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 766 "xml_documentation.m"
  }
#line 766 "xml_documentation.m"
}

#line 765 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_2(
#line 765 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 765 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 765 "xml_documentation.m"
{
#line 765 "xml_documentation.m"
  {
#line 765 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 765 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_HeadVar__3_20;

#line 765 "xml_documentation.m"
    {
#line 765 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_HeadVar__3_20 = check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__765__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 765 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_HeadVar__3_20));
#line 765 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 765 "xml_documentation.m"
  }
#line 765 "xml_documentation.m"
}

#line 763 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_1(
#line 763 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 763 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 763 "xml_documentation.m"
{
#line 763 "xml_documentation.m"
  {
#line 763 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 763 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 763 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__2_17;

#line 763 "xml_documentation.m"
    {
#line 763 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_HeadVar__2_17 = check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__763__1_1_f_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 763 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__2_17));
#line 763 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 763 "xml_documentation.m"
  }
#line 763 "xml_documentation.m"
}

#line 760 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0(
#line 760 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 760 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_6,
#line 760 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Methods_7)
#line 760 "xml_documentation.m"
{
#line 762 "xml_documentation.m"
  {
#line 762 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 762 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_8;
#line 762 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 762 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__AllPredIds_9;
#line 762 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredIds_12;
#line 762 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredInfos_13;
#line 762 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_18_18;
#line 762 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_22_22;
#line 762 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_38_38;

#line 763 "xml_documentation.m"
    {
#line 763 "xml_documentation.m"
      check_hlds__xml_documentation__AllPredIds_9 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, check_hlds__xml_documentation__TypeCtorInfo_28_28, (MR_Word) &check_hlds__xml_documentation_scalar_common_2[19], check_hlds__xml_documentation__Methods_7);
    }
#line 764 "xml_documentation.m"
    {
#line 764 "xml_documentation.m"
      check_hlds__xml_documentation__PredIds_12 = mercury__list__sort_and_remove_dups_1_f_0(check_hlds__xml_documentation__TypeCtorInfo_28_28, check_hlds__xml_documentation__AllPredIds_9);
    }
#line 765 "xml_documentation.m"
    {
#line 765 "xml_documentation.m"
      check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 765 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[5]));
#line 765 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (check_hlds__xml_documentation__class_methods_to_xml_3_f_0_2));
#line 765 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 765 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 3) = ((MR_Box) (check_hlds__xml_documentation__PredTable_6));
#line 765 "xml_documentation.m"
    }
#line 765 "xml_documentation.m"
    {
#line 765 "xml_documentation.m"
      check_hlds__xml_documentation__PredInfos_13 = mercury__list__map_2_f_0(check_hlds__xml_documentation__TypeCtorInfo_28_28, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__xml_documentation__V_18_18, check_hlds__xml_documentation__PredIds_12);
    }
#line 766 "xml_documentation.m"
    {
#line 766 "xml_documentation.m"
      check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 766 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[6]));
#line 766 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (check_hlds__xml_documentation__class_methods_to_xml_3_f_0_3));
#line 766 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 766 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_22_22, 3) = ((MR_Box) (check_hlds__xml_documentation__C_5));
#line 766 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_38_38 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_22_22, check_hlds__xml_documentation__PredInfos_13);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_8, 0) = ((MR_Box) ((MR_String) "methods"));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_8, 2) = ((MR_Box) (check_hlds__xml_documentation__V_38_38));
#line 860 "xml_documentation.m"
    }
#line 762 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_8;
#line 762 "xml_documentation.m"
  }
#line 760 "xml_documentation.m"
}

#line 757 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0_1(
#line 757 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 757 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 757 "xml_documentation.m"
{
#line 757 "xml_documentation.m"
  {
#line 757 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 757 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 757 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 757 "xml_documentation.m"
    {
#line 757 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 757 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 757 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 757 "xml_documentation.m"
  }
#line 757 "xml_documentation.m"
}

#line 746 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0(
#line 746 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_5,
#line 746 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Vars_6,
#line 746 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 746 "xml_documentation.m"
{
#line 748 "xml_documentation.m"
  {
#line 748 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 748 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_9;
#line 748 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Domain_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 748 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Range_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
#line 748 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlDomain_10;
#line 748 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlRange_11;
#line 748 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_16_16;
#line 748 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;
#line 748 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_23_23;
#line 748 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_24_24;
#line 748 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_32_32;
#line 748 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_40_40;
#line 748 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_48_48;

#line 757 "xml_documentation.m"
    {
#line 757 "xml_documentation.m"
      check_hlds__xml_documentation__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 757 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[0]));
#line 757 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 1) = ((MR_Box) (check_hlds__xml_documentation__fundep_to_xml_3_f_0_1));
#line 757 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 757 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_5));
#line 757 "xml_documentation.m"
    }
#line 757 "xml_documentation.m"
    {
#line 757 "xml_documentation.m"
      check_hlds__xml_documentation__V_24_24 = hlds__hlds_data__restrict_list_elements_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], check_hlds__xml_documentation__Domain_7, check_hlds__xml_documentation__Vars_6);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_32_32 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_23_23, check_hlds__xml_documentation__V_24_24);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__XmlDomain_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlDomain_10, 0) = ((MR_Box) ((MR_String) "domain"));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlDomain_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlDomain_10, 2) = ((MR_Box) (check_hlds__xml_documentation__V_32_32));
#line 860 "xml_documentation.m"
    }
#line 757 "xml_documentation.m"
    {
#line 757 "xml_documentation.m"
      check_hlds__xml_documentation__V_40_40 = hlds__hlds_data__restrict_list_elements_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], check_hlds__xml_documentation__Range_8, check_hlds__xml_documentation__Vars_6);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_48_48 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_23_23, check_hlds__xml_documentation__V_40_40);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__XmlRange_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlRange_11, 0) = ((MR_Box) ((MR_String) "range"));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlRange_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlRange_11, 2) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 860 "xml_documentation.m"
    }
#line 751 "xml_documentation.m"
    {
#line 751 "xml_documentation.m"
      check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlRange_11));
#line 751 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 751 "xml_documentation.m"
    }
#line 751 "xml_documentation.m"
    {
#line 751 "xml_documentation.m"
      check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlDomain_10));
#line 751 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 751 "xml_documentation.m"
    }
#line 751 "xml_documentation.m"
    {
#line 751 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 751 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 0) = ((MR_Box) ((MR_String) "fundep"));
#line 751 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 751 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 751 "xml_documentation.m"
    }
#line 748 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_9;
#line 748 "xml_documentation.m"
  }
#line 746 "xml_documentation.m"
}

#line 728 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_3(
#line 728 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 728 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 728 "xml_documentation.m"
{
#line 728 "xml_documentation.m"
  {
#line 728 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 728 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 728 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_Xml_9;

#line 728 "xml_documentation.m"
    {
#line 728 "xml_documentation.m"
      check_hlds__xml_documentation__conv2_Xml_9 = check_hlds__xml_documentation__fundep_to_xml_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 728 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_9));
#line 728 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 728 "xml_documentation.m"
  }
#line 728 "xml_documentation.m"
}

#line 726 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_2(
#line 726 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 726 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 726 "xml_documentation.m"
{
#line 726 "xml_documentation.m"
  {
#line 726 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 726 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 726 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_Xml_7;

#line 726 "xml_documentation.m"
    {
#line 726 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_Xml_7 = check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 726 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_Xml_7));
#line 726 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 726 "xml_documentation.m"
  }
#line 726 "xml_documentation.m"
}

#line 724 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_1(
#line 724 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 724 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 724 "xml_documentation.m"
{
#line 724 "xml_documentation.m"
  {
#line 724 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 724 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 724 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 724 "xml_documentation.m"
    {
#line 724 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 724 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 724 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 724 "xml_documentation.m"
  }
#line 724 "xml_documentation.m"
}

#line 708 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0(
#line 708 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_7,
#line 708 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_8,
#line 708 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3,
#line 708 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ClassDefn_11,
#line 708 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27,
#line 708 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_28)
#line 708 "xml_documentation.m"
{
#line 712 "xml_documentation.m"
  {
#line 712 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 712 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 712 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
#line 712 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
#line 712 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__DefinedInThisModule_14;
#line 713 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
#line 713 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
#line 713 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
#line 713 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
#line 713 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
#line 713 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
#line 713 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
#line 713 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
#line 713 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));

#line 714 "xml_documentation.m"
    {
#line 714 "xml_documentation.m"
      check_hlds__xml_documentation__DefinedInThisModule_14 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(check_hlds__xml_documentation__ImportStatus_13);
    }
#line 742 "xml_documentation.m"
    if ((check_hlds__xml_documentation__DefinedInThisModule_14 == (MR_Integer) 0))
#line 743 "xml_documentation.m"
      *check_hlds__xml_documentation__STATE_VARIABLE_Xml_28 = check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27;
#line 742 "xml_documentation.m"
    else
#line 716 "xml_documentation.m"
      {
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Xml_12;
#line 716 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__Id_15;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Context_16;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__TVarset_17;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Vars_18;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlName_19;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlClassVars_20;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlSupers_21;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlFundeps_22;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlMethods_23;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlVisibility_24;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlContext_25;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Xml0_26;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_31_31;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_33_33;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_34_34;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_36_36;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_37_37;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_38_38;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_40_40;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_41_41;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_44_44;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_45_45;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_46_46;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_47_47;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_48_48;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_49_49;
#line 716 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_50_50;
#line 719 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_62_62;
#line 719 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_63_63;
#line 719 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_64_64;
#line 719 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_65_65;
#line 719 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_67_67;
#line 719 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_68_68;
#line 719 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_69_69;
#line 726 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_89_89;
#line 726 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_90_90;
#line 726 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_91_91;
#line 726 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_92_92;
#line 726 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_93_93;
#line 726 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_94_94;
#line 726 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_95_95;
#line 726 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_96_96;
#line 726 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_97_97;
#line 728 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_98_98;
#line 728 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_99_99;
#line 728 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_100_100;
#line 728 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_101_101;
#line 728 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_102_102;
#line 728 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_103_103;
#line 728 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_104_104;
#line 728 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_105_105;
#line 728 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_106_106;
#line 730 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_107_107;
#line 730 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_108_108;
#line 730 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_109_109;
#line 730 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_110_110;
#line 730 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_111_111;
#line 730 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_112_112;
#line 730 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_113_113;
#line 730 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_114_114;
#line 730 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_115_115;

#line 717 "xml_documentation.m"
        {
#line 717 "xml_documentation.m"
          check_hlds__xml_documentation__Id_15 = check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0((MR_String) "class", check_hlds__xml_documentation__Name_9, check_hlds__xml_documentation__Arity_10);
        }
#line 719 "xml_documentation.m"
        check_hlds__xml_documentation__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
#line 719 "xml_documentation.m"
        check_hlds__xml_documentation__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
#line 719 "xml_documentation.m"
        check_hlds__xml_documentation__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
#line 719 "xml_documentation.m"
        check_hlds__xml_documentation__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
#line 719 "xml_documentation.m"
        check_hlds__xml_documentation__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
#line 719 "xml_documentation.m"
        check_hlds__xml_documentation__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
#line 719 "xml_documentation.m"
        check_hlds__xml_documentation__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
#line 719 "xml_documentation.m"
        check_hlds__xml_documentation__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
#line 719 "xml_documentation.m"
        check_hlds__xml_documentation__TVarset_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
#line 719 "xml_documentation.m"
        check_hlds__xml_documentation__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
#line 723 "xml_documentation.m"
        {
#line 723 "xml_documentation.m"
          check_hlds__xml_documentation__XmlName_19 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_9);
        }
#line 724 "xml_documentation.m"
        {
#line 724 "xml_documentation.m"
          check_hlds__xml_documentation__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 724 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[0]));
#line 724 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 1) = ((MR_Box) (check_hlds__xml_documentation__class_documentation_6_p_0_1));
#line 724 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 724 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_17));
#line 724 "xml_documentation.m"
        }
#line 724 "xml_documentation.m"
        {
#line 724 "xml_documentation.m"
          check_hlds__xml_documentation__XmlClassVars_20 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0((MR_String) "class_vars", check_hlds__xml_documentation__V_31_31, check_hlds__xml_documentation__Vars_18);
        }
#line 726 "xml_documentation.m"
        {
#line 726 "xml_documentation.m"
          check_hlds__xml_documentation__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 726 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[1]));
#line 726 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 1) = ((MR_Box) (check_hlds__xml_documentation__class_documentation_6_p_0_2));
#line 726 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 726 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_17));
#line 726 "xml_documentation.m"
        }
#line 726 "xml_documentation.m"
        check_hlds__xml_documentation__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
#line 726 "xml_documentation.m"
        check_hlds__xml_documentation__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
#line 726 "xml_documentation.m"
        check_hlds__xml_documentation__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
#line 726 "xml_documentation.m"
        check_hlds__xml_documentation__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
#line 726 "xml_documentation.m"
        check_hlds__xml_documentation__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
#line 726 "xml_documentation.m"
        check_hlds__xml_documentation__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
#line 726 "xml_documentation.m"
        check_hlds__xml_documentation__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
#line 726 "xml_documentation.m"
        check_hlds__xml_documentation__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
#line 726 "xml_documentation.m"
        check_hlds__xml_documentation__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
#line 726 "xml_documentation.m"
        check_hlds__xml_documentation__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
#line 726 "xml_documentation.m"
        {
#line 726 "xml_documentation.m"
          check_hlds__xml_documentation__XmlSupers_21 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0((MR_String) "superclasses", check_hlds__xml_documentation__V_33_33, check_hlds__xml_documentation__V_34_34);
        }
#line 728 "xml_documentation.m"
        {
#line 728 "xml_documentation.m"
          check_hlds__xml_documentation__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 728 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[2]));
#line 728 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 1) = ((MR_Box) (check_hlds__xml_documentation__class_documentation_6_p_0_3));
#line 728 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 728 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_17));
#line 728 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 4) = ((MR_Box) (check_hlds__xml_documentation__Vars_18));
#line 728 "xml_documentation.m"
        }
#line 728 "xml_documentation.m"
        check_hlds__xml_documentation__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
#line 728 "xml_documentation.m"
        check_hlds__xml_documentation__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
#line 728 "xml_documentation.m"
        check_hlds__xml_documentation__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
#line 728 "xml_documentation.m"
        check_hlds__xml_documentation__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
#line 728 "xml_documentation.m"
        check_hlds__xml_documentation__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
#line 728 "xml_documentation.m"
        check_hlds__xml_documentation__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
#line 728 "xml_documentation.m"
        check_hlds__xml_documentation__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
#line 728 "xml_documentation.m"
        check_hlds__xml_documentation__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
#line 728 "xml_documentation.m"
        check_hlds__xml_documentation__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
#line 728 "xml_documentation.m"
        check_hlds__xml_documentation__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
#line 728 "xml_documentation.m"
        {
#line 728 "xml_documentation.m"
          check_hlds__xml_documentation__XmlFundeps_22 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_52_95_95_91_49_44_32_50_93_95_48_3_f_0((MR_String) "fundeps", check_hlds__xml_documentation__V_36_36, check_hlds__xml_documentation__V_37_37);
        }
#line 730 "xml_documentation.m"
        check_hlds__xml_documentation__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
#line 730 "xml_documentation.m"
        check_hlds__xml_documentation__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
#line 730 "xml_documentation.m"
        check_hlds__xml_documentation__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
#line 730 "xml_documentation.m"
        check_hlds__xml_documentation__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
#line 730 "xml_documentation.m"
        check_hlds__xml_documentation__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
#line 730 "xml_documentation.m"
        check_hlds__xml_documentation__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
#line 730 "xml_documentation.m"
        check_hlds__xml_documentation__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
#line 730 "xml_documentation.m"
        check_hlds__xml_documentation__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
#line 730 "xml_documentation.m"
        check_hlds__xml_documentation__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
#line 730 "xml_documentation.m"
        check_hlds__xml_documentation__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
#line 730 "xml_documentation.m"
        {
#line 730 "xml_documentation.m"
          check_hlds__xml_documentation__XmlMethods_23 = check_hlds__xml_documentation__class_methods_to_xml_3_f_0(check_hlds__xml_documentation__C_7, check_hlds__xml_documentation__PredTable_8, check_hlds__xml_documentation__V_38_38);
        }
#line 732 "xml_documentation.m"
        {
#line 732 "xml_documentation.m"
          check_hlds__xml_documentation__XmlVisibility_24 = check_hlds__xml_documentation__visibility_to_xml_1_f_0(check_hlds__xml_documentation__ImportStatus_13);
        }
#line 733 "xml_documentation.m"
        {
#line 733 "xml_documentation.m"
          check_hlds__xml_documentation__XmlContext_25 = check_hlds__xml_documentation__prog_context_to_xml_1_f_0(check_hlds__xml_documentation__Context_16);
        }
#line 735 "xml_documentation.m"
        {
#line 735 "xml_documentation.m"
          check_hlds__xml_documentation__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 735 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_41_41, 0) = ((MR_Box) ((MR_String) "id"));
#line 735 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_41_41, 1) = ((MR_Box) (check_hlds__xml_documentation__Id_15));
#line 735 "xml_documentation.m"
        }
#line 735 "xml_documentation.m"
        {
#line 735 "xml_documentation.m"
          check_hlds__xml_documentation__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 0) = ((MR_Box) (check_hlds__xml_documentation__V_41_41));
#line 735 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "xml_documentation.m"
        }
#line 737 "xml_documentation.m"
        {
#line 737 "xml_documentation.m"
          check_hlds__xml_documentation__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_50_50, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_25));
#line 737 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 737 "xml_documentation.m"
        }
#line 737 "xml_documentation.m"
        {
#line 737 "xml_documentation.m"
          check_hlds__xml_documentation__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_49_49, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_24));
#line 737 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_49_49, 1) = ((MR_Box) (check_hlds__xml_documentation__V_50_50));
#line 737 "xml_documentation.m"
        }
#line 737 "xml_documentation.m"
        {
#line 737 "xml_documentation.m"
          check_hlds__xml_documentation__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlMethods_23));
#line 737 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 1) = ((MR_Box) (check_hlds__xml_documentation__V_49_49));
#line 737 "xml_documentation.m"
        }
#line 736 "xml_documentation.m"
        {
#line 736 "xml_documentation.m"
          check_hlds__xml_documentation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlFundeps_22));
#line 736 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 1) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 736 "xml_documentation.m"
        }
#line 736 "xml_documentation.m"
        {
#line 736 "xml_documentation.m"
          check_hlds__xml_documentation__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlSupers_21));
#line 736 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 1) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 736 "xml_documentation.m"
        }
#line 736 "xml_documentation.m"
        {
#line 736 "xml_documentation.m"
          check_hlds__xml_documentation__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlClassVars_20));
#line 736 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 1) = ((MR_Box) (check_hlds__xml_documentation__V_46_46));
#line 736 "xml_documentation.m"
        }
#line 735 "xml_documentation.m"
        {
#line 735 "xml_documentation.m"
          check_hlds__xml_documentation__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_44_44, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_19));
#line 735 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_44_44, 1) = ((MR_Box) (check_hlds__xml_documentation__V_45_45));
#line 735 "xml_documentation.m"
        }
#line 735 "xml_documentation.m"
        {
#line 735 "xml_documentation.m"
          check_hlds__xml_documentation__Xml0_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 735 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_26, 0) = ((MR_Box) ((MR_String) "typeclass"));
#line 735 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_26, 1) = ((MR_Box) (check_hlds__xml_documentation__V_40_40));
#line 735 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_26, 2) = ((MR_Box) (check_hlds__xml_documentation__V_44_44));
#line 735 "xml_documentation.m"
        }
#line 739 "xml_documentation.m"
        {
#line 739 "xml_documentation.m"
          check_hlds__xml_documentation__Xml_12 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_7, check_hlds__xml_documentation__Context_16, check_hlds__xml_documentation__Xml0_26);
        }
#line 741 "xml_documentation.m"
        {
#line 741 "xml_documentation.m"
          MR_Word base;
#line 741 "xml_documentation.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "xml_documentation.m"
          *check_hlds__xml_documentation__STATE_VARIABLE_Xml_28 = base;
#line 741 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_12));
#line 741 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27));
#line 741 "xml_documentation.m"
        }
#line 716 "xml_documentation.m"
      }
#line 712 "xml_documentation.m"
  }
#line 708 "xml_documentation.m"
}

#line 689 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__arity_to_xml_1_f_0(
#line 689 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Arity_3)
#line 689 "xml_documentation.m"
{
#line 691 "xml_documentation.m"
  {
#line 691 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 691 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
#line 691 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_8_8;
#line 691 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;
#line 691 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_10_10;

#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_10_10 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_3);
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_9_9, 0) = ((MR_Box) (check_hlds__xml_documentation__V_10_10));
#line 842 "xml_documentation.m"
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "xml_documentation.m"
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "arity"));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 842 "xml_documentation.m"
    }
#line 691 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 691 "xml_documentation.m"
  }
#line 689 "xml_documentation.m"
}

#line 660 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__cons_id_to_xml_1_f_0(
#line 660 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
#line 660 "xml_documentation.m"
{
#line 662 "xml_documentation.m"
  {
#line 662 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 662 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;

#line 662 "xml_documentation.m"
    if ((check_hlds__xml_documentation__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 679 "xml_documentation.m"
      {
#line 679 "xml_documentation.m"
        {
#line 679 "xml_documentation.m"
          return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typeclass_info_cell_constructor");
        }
#line 679 "xml_documentation.m"
      }
#line 662 "xml_documentation.m"
    else
#line 662 "xml_documentation.m"
      if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 684 "xml_documentation.m"
        {
#line 684 "xml_documentation.m"
          {
#line 684 "xml_documentation.m"
            return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "tabling_info_const");
          }
#line 684 "xml_documentation.m"
        }
#line 662 "xml_documentation.m"
      else
#line 662 "xml_documentation.m"
        if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 677 "xml_documentation.m"
          {
#line 677 "xml_documentation.m"
            {
#line 677 "xml_documentation.m"
              return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "type_info_cell_constructor");
            }
#line 677 "xml_documentation.m"
          }
#line 662 "xml_documentation.m"
        else
#line 662 "xml_documentation.m"
          if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 675 "xml_documentation.m"
            {
#line 854 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[17];
#line 675 "xml_documentation.m"
            }
#line 662 "xml_documentation.m"
          else
#line 662 "xml_documentation.m"
            if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 670 "xml_documentation.m"
              {
#line 670 "xml_documentation.m"
                MR_Char check_hlds__xml_documentation__C_27 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 670 "xml_documentation.m"
                MR_Word check_hlds__xml_documentation__V_72_72;
#line 670 "xml_documentation.m"
                MR_Word check_hlds__xml_documentation__V_73_73;
#line 670 "xml_documentation.m"
                MR_String check_hlds__xml_documentation__V_74_74;

#line 850 "xml_documentation.m"
                {
#line 850 "xml_documentation.m"
                  check_hlds__xml_documentation__V_74_74 = mercury__string__char_to_string_1_f_0(check_hlds__xml_documentation__C_27);
                }
#line 850 "xml_documentation.m"
                {
#line 850 "xml_documentation.m"
                  check_hlds__xml_documentation__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 850 "xml_documentation.m"
                  MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_73_73, 0) = ((MR_Box) (check_hlds__xml_documentation__V_74_74));
#line 850 "xml_documentation.m"
                }
#line 850 "xml_documentation.m"
                {
#line 850 "xml_documentation.m"
                  check_hlds__xml_documentation__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "xml_documentation.m"
                  MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_72_72, 0) = ((MR_Box) (check_hlds__xml_documentation__V_73_73));
#line 850 "xml_documentation.m"
                  MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 850 "xml_documentation.m"
                }
#line 850 "xml_documentation.m"
                {
#line 850 "xml_documentation.m"
                  check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 850 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "char"));
#line 850 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 850 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_72_72));
#line 850 "xml_documentation.m"
                }
#line 670 "xml_documentation.m"
              }
#line 662 "xml_documentation.m"
            else
#line 662 "xml_documentation.m"
              if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 673 "xml_documentation.m"
                {
#line 854 "xml_documentation.m"
                  check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[18];
#line 673 "xml_documentation.m"
                }
#line 662 "xml_documentation.m"
              else
#line 662 "xml_documentation.m"
                if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 662 "xml_documentation.m"
                  {
#line 662 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 662 "xml_documentation.m"
                    MR_Integer check_hlds__xml_documentation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 2)));
#line 662 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__V_8_8;
#line 662 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__V_9_9;
#line 662 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__V_10_10;
#line 662 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__V_11_11;
#line 662 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__V_89_89;
#line 662 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__V_90_90;
#line 662 "xml_documentation.m"
                    MR_String check_hlds__xml_documentation__V_91_91;
#line 662 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 3)));

#line 663 "xml_documentation.m"
                    {
#line 663 "xml_documentation.m"
                      check_hlds__xml_documentation__V_9_9 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_3);
                    }
#line 842 "xml_documentation.m"
                    {
#line 842 "xml_documentation.m"
                      check_hlds__xml_documentation__V_91_91 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_4);
                    }
#line 842 "xml_documentation.m"
                    {
#line 842 "xml_documentation.m"
                      check_hlds__xml_documentation__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 842 "xml_documentation.m"
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_90_90, 0) = ((MR_Box) (check_hlds__xml_documentation__V_91_91));
#line 842 "xml_documentation.m"
                    }
#line 842 "xml_documentation.m"
                    {
#line 842 "xml_documentation.m"
                      check_hlds__xml_documentation__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "xml_documentation.m"
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_89_89, 0) = ((MR_Box) (check_hlds__xml_documentation__V_90_90));
#line 842 "xml_documentation.m"
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "xml_documentation.m"
                    }
#line 842 "xml_documentation.m"
                    {
#line 842 "xml_documentation.m"
                      check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 842 "xml_documentation.m"
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) ((MR_String) "arity"));
#line 842 "xml_documentation.m"
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "xml_documentation.m"
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 2) = ((MR_Box) (check_hlds__xml_documentation__V_89_89));
#line 842 "xml_documentation.m"
                    }
#line 663 "xml_documentation.m"
                    {
#line 663 "xml_documentation.m"
                      check_hlds__xml_documentation__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "xml_documentation.m"
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 0) = ((MR_Box) (check_hlds__xml_documentation__V_11_11));
#line 663 "xml_documentation.m"
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "xml_documentation.m"
                    }
#line 663 "xml_documentation.m"
                    {
#line 663 "xml_documentation.m"
                      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "xml_documentation.m"
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 663 "xml_documentation.m"
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 1) = ((MR_Box) (check_hlds__xml_documentation__V_10_10));
#line 663 "xml_documentation.m"
                    }
#line 662 "xml_documentation.m"
                    {
#line 662 "xml_documentation.m"
                      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 662 "xml_documentation.m"
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "cons"));
#line 662 "xml_documentation.m"
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 662 "xml_documentation.m"
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 662 "xml_documentation.m"
                    }
#line 662 "xml_documentation.m"
                  }
#line 662 "xml_documentation.m"
                else
#line 662 "xml_documentation.m"
                  if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 686 "xml_documentation.m"
                    {
#line 686 "xml_documentation.m"
                      {
#line 686 "xml_documentation.m"
                        return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "deep_profiling_proc_layout");
                      }
#line 686 "xml_documentation.m"
                    }
#line 662 "xml_documentation.m"
                  else
#line 662 "xml_documentation.m"
                    if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 669 "xml_documentation.m"
                      {
#line 669 "xml_documentation.m"
                        MR_Float check_hlds__xml_documentation__F_25 = MR_unbox_float((MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));

#line 669 "xml_documentation.m"
                        {
#line 669 "xml_documentation.m"
                          return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__tagged_float_2_f_0((MR_String) "float", check_hlds__xml_documentation__F_25);
                        }
#line 669 "xml_documentation.m"
                      }
#line 662 "xml_documentation.m"
                    else
#line 662 "xml_documentation.m"
                      if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 683 "xml_documentation.m"
                        {
#line 683 "xml_documentation.m"
                          {
#line 683 "xml_documentation.m"
                            return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "ground_term_const");
                          }
#line 683 "xml_documentation.m"
                        }
#line 662 "xml_documentation.m"
                      else
#line 662 "xml_documentation.m"
                        if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 672 "xml_documentation.m"
                          {
#line 672 "xml_documentation.m"
                            {
#line 672 "xml_documentation.m"
                              return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "impl_defined_const");
                            }
#line 672 "xml_documentation.m"
                          }
#line 662 "xml_documentation.m"
                        else
#line 662 "xml_documentation.m"
                          if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 668 "xml_documentation.m"
                            {
#line 668 "xml_documentation.m"
                              MR_Integer check_hlds__xml_documentation__I_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));

#line 668 "xml_documentation.m"
                              {
#line 668 "xml_documentation.m"
                                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__tagged_int_2_f_0((MR_String) "int", check_hlds__xml_documentation__I_23);
                              }
#line 668 "xml_documentation.m"
                            }
#line 662 "xml_documentation.m"
                          else
#line 662 "xml_documentation.m"
                            if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 671 "xml_documentation.m"
                              {
#line 671 "xml_documentation.m"
                                MR_String check_hlds__xml_documentation__S_29 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));

#line 671 "xml_documentation.m"
                                {
#line 671 "xml_documentation.m"
                                  return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__tagged_string_2_f_0((MR_String) "string", check_hlds__xml_documentation__S_29);
                                }
#line 671 "xml_documentation.m"
                              }
#line 662 "xml_documentation.m"
                            else
#line 662 "xml_documentation.m"
                              if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 685 "xml_documentation.m"
                                {
#line 685 "xml_documentation.m"
                                  {
#line 685 "xml_documentation.m"
                                    return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "table_io_decl");
                                  }
#line 685 "xml_documentation.m"
                                }
#line 662 "xml_documentation.m"
                              else
#line 662 "xml_documentation.m"
                                if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 666 "xml_documentation.m"
                                  {
#line 666 "xml_documentation.m"
                                    MR_Integer check_hlds__xml_documentation__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 666 "xml_documentation.m"
                                    MR_Word check_hlds__xml_documentation__V_16_16;
#line 666 "xml_documentation.m"
                                    MR_Word check_hlds__xml_documentation__V_17_17;
#line 666 "xml_documentation.m"
                                    MR_Word check_hlds__xml_documentation__V_20_20;
#line 666 "xml_documentation.m"
                                    MR_Word check_hlds__xml_documentation__V_21_21;

#line 667 "xml_documentation.m"
                                    {
#line 667 "xml_documentation.m"
                                      check_hlds__xml_documentation__V_17_17 = check_hlds__xml_documentation__name_to_xml_1_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_7[1]);
                                    }
#line 667 "xml_documentation.m"
                                    {
#line 667 "xml_documentation.m"
                                      check_hlds__xml_documentation__V_21_21 = check_hlds__xml_documentation__arity_to_xml_1_f_0(check_hlds__xml_documentation__Arity_13);
                                    }
#line 667 "xml_documentation.m"
                                    {
#line 667 "xml_documentation.m"
                                      check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "xml_documentation.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 667 "xml_documentation.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 667 "xml_documentation.m"
                                    }
#line 667 "xml_documentation.m"
                                    {
#line 667 "xml_documentation.m"
                                      check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "xml_documentation.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 667 "xml_documentation.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (check_hlds__xml_documentation__V_20_20));
#line 667 "xml_documentation.m"
                                    }
#line 666 "xml_documentation.m"
                                    {
#line 666 "xml_documentation.m"
                                      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 666 "xml_documentation.m"
                                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "cons"));
#line 666 "xml_documentation.m"
                                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "xml_documentation.m"
                                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 666 "xml_documentation.m"
                                    }
#line 666 "xml_documentation.m"
                                  }
#line 662 "xml_documentation.m"
                                else
#line 662 "xml_documentation.m"
                                  if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 674 "xml_documentation.m"
                                    {
#line 674 "xml_documentation.m"
                                      {
#line 674 "xml_documentation.m"
                                        return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "type_ctor_info_const");
                                      }
#line 674 "xml_documentation.m"
                                    }
#line 662 "xml_documentation.m"
                                  else
#line 662 "xml_documentation.m"
                                    if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 681 "xml_documentation.m"
                                      {
#line 681 "xml_documentation.m"
                                        {
#line 681 "xml_documentation.m"
                                          return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "type_info_const");
                                        }
#line 681 "xml_documentation.m"
                                      }
#line 662 "xml_documentation.m"
                                    else
#line 682 "xml_documentation.m"
                                      {
#line 682 "xml_documentation.m"
                                        {
#line 682 "xml_documentation.m"
                                          return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typeclass_info_const");
                                        }
#line 682 "xml_documentation.m"
                                      }
#line 662 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 662 "xml_documentation.m"
  }
#line 660 "xml_documentation.m"
}

#line 657 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0_1(
#line 657 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 657 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 657 "xml_documentation.m"
{
#line 657 "xml_documentation.m"
  {
#line 657 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 657 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 657 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 657 "xml_documentation.m"
    {
#line 657 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 657 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 657 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 657 "xml_documentation.m"
  }
#line 657 "xml_documentation.m"
}

#line 653 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0(
#line 653 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 653 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 653 "xml_documentation.m"
{
#line 655 "xml_documentation.m"
  {
#line 655 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 655 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_7;
#line 655 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 655 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 655 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlCons_8;
#line 655 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlInsts_9;
#line 655 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11;
#line 655 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_14_14;
#line 655 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_15_15;
#line 655 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_24_24;

#line 656 "xml_documentation.m"
    {
#line 656 "xml_documentation.m"
      check_hlds__xml_documentation__XmlCons_8 = check_hlds__xml_documentation__cons_id_to_xml_1_f_0(check_hlds__xml_documentation__ConsId_5);
    }
#line 657 "xml_documentation.m"
    {
#line 657 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 657 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[3]));
#line 657 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 1) = ((MR_Box) (check_hlds__xml_documentation__bound_inst_to_xml_2_f_0_1));
#line 657 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 657 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
#line 657 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_24_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__Insts_6);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__XmlInsts_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_9, 0) = ((MR_Box) ((MR_String) "insts"));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 860 "xml_documentation.m"
    }
#line 658 "xml_documentation.m"
    {
#line 658 "xml_documentation.m"
      check_hlds__xml_documentation__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_15_15, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlInsts_9));
#line 658 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 658 "xml_documentation.m"
    }
#line 658 "xml_documentation.m"
    {
#line 658 "xml_documentation.m"
      check_hlds__xml_documentation__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_14_14, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlCons_8));
#line 658 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_14_14, 1) = ((MR_Box) (check_hlds__xml_documentation__V_15_15));
#line 658 "xml_documentation.m"
    }
#line 658 "xml_documentation.m"
    {
#line 658 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 658 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 0) = ((MR_Box) ((MR_String) "bound_functor"));
#line 658 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 658 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 2) = ((MR_Box) (check_hlds__xml_documentation__V_14_14));
#line 658 "xml_documentation.m"
    }
#line 655 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_7;
#line 655 "xml_documentation.m"
  }
#line 653 "xml_documentation.m"
}

#line 638 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0_1(
#line 638 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 638 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 638 "xml_documentation.m"
{
#line 638 "xml_documentation.m"
  {
#line 638 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 638 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 638 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 638 "xml_documentation.m"
    {
#line 638 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 638 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 638 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 638 "xml_documentation.m"
  }
#line 638 "xml_documentation.m"
}

#line 633 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0(
#line 633 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_1,
#line 633 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 633 "xml_documentation.m"
{
#line 635 "xml_documentation.m"
  {
#line 635 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 635 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;

#line 635 "xml_documentation.m"
    if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 640 "xml_documentation.m"
      {
#line 854 "xml_documentation.m"
        check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[13];
#line 640 "xml_documentation.m"
      }
#line 635 "xml_documentation.m"
    else
#line 635 "xml_documentation.m"
      if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 641 "xml_documentation.m"
        {
#line 641 "xml_documentation.m"
          {
#line 641 "xml_documentation.m"
            return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "unify_inst");
          }
#line 641 "xml_documentation.m"
        }
#line 635 "xml_documentation.m"
      else
#line 635 "xml_documentation.m"
        if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 635 "xml_documentation.m"
          {
#line 635 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 635 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 635 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__Ref_8;
#line 635 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__XmlName_9;
#line 635 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__XmlInsts_10;
#line 635 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__V_12_12;
#line 635 "xml_documentation.m"
            MR_Integer check_hlds__xml_documentation__V_14_14;
#line 635 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__V_16_16;
#line 635 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__V_18_18;
#line 635 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__V_20_20;
#line 635 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__V_21_21;

#line 636 "xml_documentation.m"
            {
#line 636 "xml_documentation.m"
              check_hlds__xml_documentation__V_14_14 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__xml_documentation__Insts_6);
            }
#line 636 "xml_documentation.m"
            {
#line 636 "xml_documentation.m"
              check_hlds__xml_documentation__V_12_12 = check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0((MR_String) "inst", check_hlds__xml_documentation__Name_5, check_hlds__xml_documentation__V_14_14);
            }
#line 636 "xml_documentation.m"
            {
#line 636 "xml_documentation.m"
              check_hlds__xml_documentation__Ref_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 636 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_8, 0) = ((MR_Box) ((MR_String) "ref"));
#line 636 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_8, 1) = ((MR_Box) (check_hlds__xml_documentation__V_12_12));
#line 636 "xml_documentation.m"
            }
#line 637 "xml_documentation.m"
            {
#line 637 "xml_documentation.m"
              check_hlds__xml_documentation__XmlName_9 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_5);
            }
#line 638 "xml_documentation.m"
            {
#line 638 "xml_documentation.m"
              check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 638 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[3]));
#line 638 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (check_hlds__xml_documentation__inst_name_to_xml_2_f_0_1));
#line 638 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 638 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_1));
#line 638 "xml_documentation.m"
            }
#line 638 "xml_documentation.m"
            {
#line 638 "xml_documentation.m"
              check_hlds__xml_documentation__XmlInsts_10 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_54_95_95_91_49_93_95_48_3_f_0((MR_String) "inst_args", check_hlds__xml_documentation__V_16_16, check_hlds__xml_documentation__Insts_6);
            }
#line 639 "xml_documentation.m"
            {
#line 639 "xml_documentation.m"
              check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "xml_documentation.m"
              MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (check_hlds__xml_documentation__Ref_8));
#line 639 "xml_documentation.m"
              MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "xml_documentation.m"
            }
#line 639 "xml_documentation.m"
            {
#line 639 "xml_documentation.m"
              check_hlds__xml_documentation__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "xml_documentation.m"
              MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlInsts_10));
#line 639 "xml_documentation.m"
              MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "xml_documentation.m"
            }
#line 639 "xml_documentation.m"
            {
#line 639 "xml_documentation.m"
              check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "xml_documentation.m"
              MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_9));
#line 639 "xml_documentation.m"
              MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 639 "xml_documentation.m"
            }
#line 639 "xml_documentation.m"
            {
#line 639 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 639 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "user_inst"));
#line 639 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__xml_documentation__V_18_18));
#line 639 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_20_20));
#line 639 "xml_documentation.m"
            }
#line 635 "xml_documentation.m"
          }
#line 635 "xml_documentation.m"
        else
#line 635 "xml_documentation.m"
          if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 643 "xml_documentation.m"
            {
#line 854 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[14];
#line 643 "xml_documentation.m"
            }
#line 635 "xml_documentation.m"
          else
#line 635 "xml_documentation.m"
            if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 642 "xml_documentation.m"
              {
#line 854 "xml_documentation.m"
                check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[15];
#line 642 "xml_documentation.m"
              }
#line 635 "xml_documentation.m"
            else
#line 635 "xml_documentation.m"
              if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 645 "xml_documentation.m"
                {
#line 854 "xml_documentation.m"
                  check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[16];
#line 645 "xml_documentation.m"
                }
#line 635 "xml_documentation.m"
              else
#line 635 "xml_documentation.m"
                if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 644 "xml_documentation.m"
                  {
#line 644 "xml_documentation.m"
                    {
#line 644 "xml_documentation.m"
                      return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "shared_inst");
                    }
#line 644 "xml_documentation.m"
                  }
#line 635 "xml_documentation.m"
                else
#line 635 "xml_documentation.m"
                  if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 646 "xml_documentation.m"
                    {
#line 646 "xml_documentation.m"
                      {
#line 646 "xml_documentation.m"
                        return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typed_ground");
                      }
#line 646 "xml_documentation.m"
                    }
#line 635 "xml_documentation.m"
                  else
#line 647 "xml_documentation.m"
                    {
#line 647 "xml_documentation.m"
                      {
#line 647 "xml_documentation.m"
                        return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typed_inst");
                      }
#line 647 "xml_documentation.m"
                    }
#line 635 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_3;
#line 635 "xml_documentation.m"
  }
#line 633 "xml_documentation.m"
}

#line 603 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_1(
#line 603 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 603 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 603 "xml_documentation.m"
{
#line 603 "xml_documentation.m"
  {
#line 603 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 603 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 603 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_7;

#line 603 "xml_documentation.m"
    {
#line 603 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_7 = check_hlds__xml_documentation__bound_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 603 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_7));
#line 603 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 603 "xml_documentation.m"
  }
#line 603 "xml_documentation.m"
}

#line 591 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(
#line 591 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 591 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Inst_5)
#line 591 "xml_documentation.m"
{
#line 595 "xml_documentation.m"
  while (MR_TRUE)
#line 595 "xml_documentation.m"
    {
#line 595 "xml_documentation.m"
      /* tailcall optimized into a loop */
#line 595 "xml_documentation.m"
      {
#line 595 "xml_documentation.m"
        MR_bool check_hlds__xml_documentation__succeeded;
#line 595 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Xml_6;

#line 595 "xml_documentation.m"
        if ((check_hlds__xml_documentation__Inst_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 595 "xml_documentation.m"
          {
#line 596 "xml_documentation.m"
            check_hlds__xml_documentation__Xml_6 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[11];
#line 595 "xml_documentation.m"
          }
#line 595 "xml_documentation.m"
        else
#line 595 "xml_documentation.m"
          if ((check_hlds__xml_documentation__Inst_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 613 "xml_documentation.m"
            {
#line 614 "xml_documentation.m"
              check_hlds__xml_documentation__Xml_6 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[12];
#line 613 "xml_documentation.m"
            }
#line 595 "xml_documentation.m"
          else
#line 595 "xml_documentation.m"
            if (((MR_tag((MR_Word) check_hlds__xml_documentation__Inst_5)) == (MR_mktag((MR_Integer) 2))))
#line 610 "xml_documentation.m"
              {
#line 610 "xml_documentation.m"
                MR_Word check_hlds__xml_documentation__V_35_35;
#line 610 "xml_documentation.m"
                MR_Word check_hlds__xml_documentation__V_36_36;
#line 610 "xml_documentation.m"
                MR_Word check_hlds__xml_documentation__U_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__Inst_5, (MR_Integer) 0)));
#line 610 "xml_documentation.m"
                MR_String check_hlds__xml_documentation__V_64_64;
#line 610 "xml_documentation.m"
                MR_Word check_hlds__xml_documentation__V_69_69;
#line 610 "xml_documentation.m"
                MR_Word check_hlds__xml_documentation__V_70_70;
#line 610 "xml_documentation.m"
                MR_Word check_hlds__xml_documentation__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));

#line 651 "xml_documentation.m"
                {
#line 651 "xml_documentation.m"
                  check_hlds__xml_documentation__V_64_64 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0, ((MR_Box) (check_hlds__xml_documentation__U_57)));
                }
#line 854 "xml_documentation.m"
                {
#line 854 "xml_documentation.m"
                  check_hlds__xml_documentation__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
                  MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_70_70, 0) = ((MR_Box) (check_hlds__xml_documentation__V_64_64));
#line 854 "xml_documentation.m"
                }
#line 854 "xml_documentation.m"
                {
#line 854 "xml_documentation.m"
                  check_hlds__xml_documentation__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
                  MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_69_69, 0) = ((MR_Box) (check_hlds__xml_documentation__V_70_70));
#line 854 "xml_documentation.m"
                  MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
                }
#line 854 "xml_documentation.m"
                {
#line 854 "xml_documentation.m"
                  check_hlds__xml_documentation__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 0) = ((MR_Box) ((MR_String) "uniqueness"));
#line 854 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 2) = ((MR_Box) (check_hlds__xml_documentation__V_69_69));
#line 854 "xml_documentation.m"
                }
#line 611 "xml_documentation.m"
                {
#line 611 "xml_documentation.m"
                  check_hlds__xml_documentation__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "xml_documentation.m"
                  MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_35_35, 0) = ((MR_Box) (check_hlds__xml_documentation__V_36_36));
#line 611 "xml_documentation.m"
                  MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "xml_documentation.m"
                }
#line 611 "xml_documentation.m"
                {
#line 611 "xml_documentation.m"
                  check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 611 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "any"));
#line 611 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_35_35));
#line 611 "xml_documentation.m"
                }
#line 610 "xml_documentation.m"
              }
#line 595 "xml_documentation.m"
            else
#line 595 "xml_documentation.m"
              if (((MR_tag((MR_Word) check_hlds__xml_documentation__Inst_5)) == (MR_mktag((MR_Integer) 1))))
#line 598 "xml_documentation.m"
                {
#line 599 "xml_documentation.m"
                  check_hlds__xml_documentation__Xml_6 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[11];
#line 598 "xml_documentation.m"
                }
#line 595 "xml_documentation.m"
              else
#line 595 "xml_documentation.m"
                if (((((MR_tag((MR_Word) check_hlds__xml_documentation__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 628 "xml_documentation.m"
                  {
#line 628 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
#line 628 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__ArgInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));
#line 628 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__V_23_23;
#line 628 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__V_24_24;

#line 630 "xml_documentation.m"
                    {
#line 630 "xml_documentation.m"
                      check_hlds__xml_documentation__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 630 "xml_documentation.m"
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_24_24, 0) = ((MR_Box) (check_hlds__xml_documentation__SymName_21));
#line 630 "xml_documentation.m"
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_24_24, 1) = ((MR_Box) (check_hlds__xml_documentation__ArgInsts_22));
#line 630 "xml_documentation.m"
                    }
#line 629 "xml_documentation.m"
                    {
#line 629 "xml_documentation.m"
                      check_hlds__xml_documentation__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "xml_documentation.m"
                      MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 629 "xml_documentation.m"
                      MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__V_23_23, 1) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 629 "xml_documentation.m"
                    }
#line 629 "xml_documentation.m"
                    /* direct tailcall eliminated */
#line 629 "xml_documentation.m"
                    {
#line 629 "xml_documentation.m"
                      MR_Word check_hlds__xml_documentation__Inst__tmp_copy_5 = check_hlds__xml_documentation__V_23_23;

#line 629 "xml_documentation.m"
                      check_hlds__xml_documentation__Inst_5 = check_hlds__xml_documentation__Inst__tmp_copy_5;
#line 629 "xml_documentation.m"
                    }
#line 629 "xml_documentation.m"
                    continue;
#line 628 "xml_documentation.m"
                  }
#line 595 "xml_documentation.m"
                else
#line 595 "xml_documentation.m"
                  if (((((MR_tag((MR_Word) check_hlds__xml_documentation__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 601 "xml_documentation.m"
                    {
#line 601 "xml_documentation.m"
                      MR_Word check_hlds__xml_documentation__U_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
#line 601 "xml_documentation.m"
                      MR_Word check_hlds__xml_documentation__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 3)));
#line 601 "xml_documentation.m"
                      MR_Word check_hlds__xml_documentation__XmlUniq_11;
#line 601 "xml_documentation.m"
                      MR_Word check_hlds__xml_documentation__XmlInsts_12;
#line 601 "xml_documentation.m"
                      MR_Word check_hlds__xml_documentation__V_44_44;
#line 601 "xml_documentation.m"
                      MR_Word check_hlds__xml_documentation__V_47_47;
#line 601 "xml_documentation.m"
                      MR_Word check_hlds__xml_documentation__V_48_48;
#line 601 "xml_documentation.m"
                      MR_String check_hlds__xml_documentation__V_74_74;
#line 601 "xml_documentation.m"
                      MR_Word check_hlds__xml_documentation__V_79_79;
#line 601 "xml_documentation.m"
                      MR_Word check_hlds__xml_documentation__V_80_80;
#line 601 "xml_documentation.m"
                      MR_Word check_hlds__xml_documentation__V_86_86;
#line 601 "xml_documentation.m"
                      MR_Word check_hlds__xml_documentation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));

#line 651 "xml_documentation.m"
                      {
#line 651 "xml_documentation.m"
                        check_hlds__xml_documentation__V_74_74 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0, ((MR_Box) (check_hlds__xml_documentation__U_8)));
                      }
#line 854 "xml_documentation.m"
                      {
#line 854 "xml_documentation.m"
                        check_hlds__xml_documentation__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
                        MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_80_80, 0) = ((MR_Box) (check_hlds__xml_documentation__V_74_74));
#line 854 "xml_documentation.m"
                      }
#line 854 "xml_documentation.m"
                      {
#line 854 "xml_documentation.m"
                        check_hlds__xml_documentation__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
                        MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_79_79, 0) = ((MR_Box) (check_hlds__xml_documentation__V_80_80));
#line 854 "xml_documentation.m"
                        MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
                      }
#line 854 "xml_documentation.m"
                      {
#line 854 "xml_documentation.m"
                        check_hlds__xml_documentation__XmlUniq_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
                        MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUniq_11, 0) = ((MR_Box) ((MR_String) "uniqueness"));
#line 854 "xml_documentation.m"
                        MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUniq_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
                        MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUniq_11, 2) = ((MR_Box) (check_hlds__xml_documentation__V_79_79));
#line 854 "xml_documentation.m"
                      }
#line 603 "xml_documentation.m"
                      {
#line 603 "xml_documentation.m"
                        check_hlds__xml_documentation__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 603 "xml_documentation.m"
                        MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_44_44, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[4]));
#line 603 "xml_documentation.m"
                        MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_44_44, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_1));
#line 603 "xml_documentation.m"
                        MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 603 "xml_documentation.m"
                        MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_44_44, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
#line 603 "xml_documentation.m"
                      }
#line 860 "xml_documentation.m"
                      {
#line 860 "xml_documentation.m"
                        check_hlds__xml_documentation__V_86_86 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_44_44, check_hlds__xml_documentation__BoundInsts_10);
                      }
#line 860 "xml_documentation.m"
                      {
#line 860 "xml_documentation.m"
                        check_hlds__xml_documentation__XmlInsts_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
                        MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_12, 0) = ((MR_Box) ((MR_String) "bound_insts"));
#line 860 "xml_documentation.m"
                        MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
                        MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_12, 2) = ((MR_Box) (check_hlds__xml_documentation__V_86_86));
#line 860 "xml_documentation.m"
                      }
#line 605 "xml_documentation.m"
                      {
#line 605 "xml_documentation.m"
                        check_hlds__xml_documentation__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "xml_documentation.m"
                        MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlInsts_12));
#line 605 "xml_documentation.m"
                        MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "xml_documentation.m"
                      }
#line 605 "xml_documentation.m"
                      {
#line 605 "xml_documentation.m"
                        check_hlds__xml_documentation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "xml_documentation.m"
                        MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlUniq_11));
#line 605 "xml_documentation.m"
                        MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 1) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 605 "xml_documentation.m"
                      }
#line 605 "xml_documentation.m"
                      {
#line 605 "xml_documentation.m"
                        check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 605 "xml_documentation.m"
                        MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "bound"));
#line 605 "xml_documentation.m"
                        MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "xml_documentation.m"
                        MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 605 "xml_documentation.m"
                      }
#line 601 "xml_documentation.m"
                    }
#line 595 "xml_documentation.m"
                  else
#line 595 "xml_documentation.m"
                    if (((((MR_tag((MR_Word) check_hlds__xml_documentation__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 620 "xml_documentation.m"
                      {
#line 620 "xml_documentation.m"
                        MR_Word check_hlds__xml_documentation__SubInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));
#line 620 "xml_documentation.m"
                        MR_Word check_hlds__xml_documentation__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));

#line 622 "xml_documentation.m"
                        /* direct tailcall eliminated */
#line 622 "xml_documentation.m"
                        {
#line 622 "xml_documentation.m"
                          MR_Word check_hlds__xml_documentation__Inst__tmp_copy_5 = check_hlds__xml_documentation__SubInst_18;

#line 622 "xml_documentation.m"
                          check_hlds__xml_documentation__Inst_5 = check_hlds__xml_documentation__Inst__tmp_copy_5;
#line 622 "xml_documentation.m"
                        }
#line 622 "xml_documentation.m"
                        continue;
#line 620 "xml_documentation.m"
                      }
#line 595 "xml_documentation.m"
                    else
#line 595 "xml_documentation.m"
                      if (((((MR_tag((MR_Word) check_hlds__xml_documentation__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 624 "xml_documentation.m"
                        {
#line 624 "xml_documentation.m"
                          MR_Word check_hlds__xml_documentation__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
#line 624 "xml_documentation.m"
                          MR_Word check_hlds__xml_documentation__XmlName_20;
#line 624 "xml_documentation.m"
                          MR_Word check_hlds__xml_documentation__V_27_27;

#line 625 "xml_documentation.m"
                          {
#line 625 "xml_documentation.m"
                            check_hlds__xml_documentation__XmlName_20 = check_hlds__xml_documentation__inst_name_to_xml_2_f_0(check_hlds__xml_documentation__InstVarSet_4, check_hlds__xml_documentation__Name_19);
                          }
#line 626 "xml_documentation.m"
                          {
#line 626 "xml_documentation.m"
                            check_hlds__xml_documentation__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "xml_documentation.m"
                            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_27_27, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_20));
#line 626 "xml_documentation.m"
                            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 626 "xml_documentation.m"
                          }
#line 626 "xml_documentation.m"
                          {
#line 626 "xml_documentation.m"
                            check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 626 "xml_documentation.m"
                            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "defined_inst"));
#line 626 "xml_documentation.m"
                            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 626 "xml_documentation.m"
                            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_27_27));
#line 626 "xml_documentation.m"
                          }
#line 624 "xml_documentation.m"
                        }
#line 595 "xml_documentation.m"
                      else
#line 595 "xml_documentation.m"
                        if (((((MR_tag((MR_Word) check_hlds__xml_documentation__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 607 "xml_documentation.m"
                          {
#line 607 "xml_documentation.m"
                            MR_Word check_hlds__xml_documentation__V_40_40;
#line 607 "xml_documentation.m"
                            MR_Word check_hlds__xml_documentation__V_41_41;
#line 607 "xml_documentation.m"
                            MR_Word check_hlds__xml_documentation__U_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
#line 607 "xml_documentation.m"
                            MR_String check_hlds__xml_documentation__V_91_91;
#line 607 "xml_documentation.m"
                            MR_Word check_hlds__xml_documentation__V_96_96;
#line 607 "xml_documentation.m"
                            MR_Word check_hlds__xml_documentation__V_97_97;
#line 607 "xml_documentation.m"
                            MR_Word check_hlds__xml_documentation__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));

#line 651 "xml_documentation.m"
                            {
#line 651 "xml_documentation.m"
                              check_hlds__xml_documentation__V_91_91 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0, ((MR_Box) (check_hlds__xml_documentation__U_56)));
                            }
#line 854 "xml_documentation.m"
                            {
#line 854 "xml_documentation.m"
                              check_hlds__xml_documentation__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
                              MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_97_97, 0) = ((MR_Box) (check_hlds__xml_documentation__V_91_91));
#line 854 "xml_documentation.m"
                            }
#line 854 "xml_documentation.m"
                            {
#line 854 "xml_documentation.m"
                              check_hlds__xml_documentation__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
                              MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_96_96, 0) = ((MR_Box) (check_hlds__xml_documentation__V_97_97));
#line 854 "xml_documentation.m"
                              MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
                            }
#line 854 "xml_documentation.m"
                            {
#line 854 "xml_documentation.m"
                              check_hlds__xml_documentation__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
                              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_41_41, 0) = ((MR_Box) ((MR_String) "uniqueness"));
#line 854 "xml_documentation.m"
                              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
                              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_41_41, 2) = ((MR_Box) (check_hlds__xml_documentation__V_96_96));
#line 854 "xml_documentation.m"
                            }
#line 608 "xml_documentation.m"
                            {
#line 608 "xml_documentation.m"
                              check_hlds__xml_documentation__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "xml_documentation.m"
                              MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 0) = ((MR_Box) (check_hlds__xml_documentation__V_41_41));
#line 608 "xml_documentation.m"
                              MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 608 "xml_documentation.m"
                            }
#line 608 "xml_documentation.m"
                            {
#line 608 "xml_documentation.m"
                              check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 608 "xml_documentation.m"
                              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "ground"));
#line 608 "xml_documentation.m"
                              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 608 "xml_documentation.m"
                              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_40_40));
#line 608 "xml_documentation.m"
                            }
#line 607 "xml_documentation.m"
                          }
#line 595 "xml_documentation.m"
                        else
#line 616 "xml_documentation.m"
                          {
#line 616 "xml_documentation.m"
                            MR_Word check_hlds__xml_documentation__InstVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
#line 616 "xml_documentation.m"
                            MR_String check_hlds__xml_documentation__InstVarName_16;

#line 617 "xml_documentation.m"
                            {
#line 617 "xml_documentation.m"
                              check_hlds__xml_documentation__InstVarName_16 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, check_hlds__xml_documentation__InstVarSet_4, check_hlds__xml_documentation__InstVar_15);
                            }
#line 618 "xml_documentation.m"
                            {
#line 618 "xml_documentation.m"
                              return check_hlds__xml_documentation__Xml_6 = check_hlds__xml_documentation__tagged_string_2_f_0((MR_String) "inst_var", check_hlds__xml_documentation__InstVarName_16);
                            }
#line 616 "xml_documentation.m"
                          }
#line 595 "xml_documentation.m"
        return check_hlds__xml_documentation__Xml_6;
#line 595 "xml_documentation.m"
      }
#line 595 "xml_documentation.m"
      break;
#line 595 "xml_documentation.m"
    }
#line 591 "xml_documentation.m"
}

#line 587 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_2(
#line 587 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 587 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 587 "xml_documentation.m"
{
#line 587 "xml_documentation.m"
  {
#line 587 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 587 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 587 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_Xml_6;

#line 587 "xml_documentation.m"
    {
#line 587 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 587 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_Xml_6));
#line 587 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 587 "xml_documentation.m"
  }
#line 587 "xml_documentation.m"
}

#line 580 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_1(
#line 580 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 580 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 580 "xml_documentation.m"
{
#line 580 "xml_documentation.m"
  {
#line 580 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 580 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 580 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 580 "xml_documentation.m"
    {
#line 580 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 580 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 580 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 580 "xml_documentation.m"
  }
#line 580 "xml_documentation.m"
}

#line 575 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0(
#line 575 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 575 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Mode_5)
#line 575 "xml_documentation.m"
{
#line 579 "xml_documentation.m"
  {
#line 579 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 579 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_6;

#line 579 "xml_documentation.m"
    if (((MR_tag((MR_Word) check_hlds__xml_documentation__Mode_5)) == (MR_mktag((MR_Integer) 0))))
#line 579 "xml_documentation.m"
      {
#line 579 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__A_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Mode_5, (MR_Integer) 0)));
#line 579 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Mode_5, (MR_Integer) 1)));
#line 579 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlFrom_9;
#line 579 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlTo_10;
#line 579 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_29_29;
#line 579 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_30_30;
#line 579 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_34_34;
#line 579 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_38_38;
#line 579 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_39_39;
#line 579 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_53_53;
#line 579 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_60_60;

#line 580 "xml_documentation.m"
        {
#line 580 "xml_documentation.m"
          check_hlds__xml_documentation__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 580 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[3]));
#line 580 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_1));
#line 580 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 580 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
#line 580 "xml_documentation.m"
        }
#line 580 "xml_documentation.m"
        {
#line 580 "xml_documentation.m"
          check_hlds__xml_documentation__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_30_30, 0) = ((MR_Box) (check_hlds__xml_documentation__A_7));
#line 580 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_53_53 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_29_29, check_hlds__xml_documentation__V_30_30);
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__XmlFrom_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlFrom_9, 0) = ((MR_Box) ((MR_String) "from"));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlFrom_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlFrom_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_53_53));
#line 860 "xml_documentation.m"
        }
#line 581 "xml_documentation.m"
        {
#line 581 "xml_documentation.m"
          check_hlds__xml_documentation__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 0) = ((MR_Box) (check_hlds__xml_documentation__B_8));
#line 581 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 581 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_60_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_29_29, check_hlds__xml_documentation__V_34_34);
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__XmlTo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTo_10, 0) = ((MR_Box) ((MR_String) "to"));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTo_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTo_10, 2) = ((MR_Box) (check_hlds__xml_documentation__V_60_60));
#line 860 "xml_documentation.m"
        }
#line 582 "xml_documentation.m"
        {
#line 582 "xml_documentation.m"
          check_hlds__xml_documentation__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_39_39, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTo_10));
#line 582 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 582 "xml_documentation.m"
        }
#line 582 "xml_documentation.m"
        {
#line 582 "xml_documentation.m"
          check_hlds__xml_documentation__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlFrom_9));
#line 582 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 1) = ((MR_Box) (check_hlds__xml_documentation__V_39_39));
#line 582 "xml_documentation.m"
        }
#line 582 "xml_documentation.m"
        {
#line 582 "xml_documentation.m"
          check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 582 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "inst_to_inst"));
#line 582 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 582 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_38_38));
#line 582 "xml_documentation.m"
        }
#line 579 "xml_documentation.m"
      }
#line 579 "xml_documentation.m"
    else
#line 584 "xml_documentation.m"
      {
#line 584 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Mode_5, (MR_Integer) 0)));
#line 584 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Mode_5, (MR_Integer) 1)));
#line 584 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Ref_13;
#line 584 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlArgs_14;
#line 584 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_16_16;
#line 584 "xml_documentation.m"
        MR_Integer check_hlds__xml_documentation__V_18_18;
#line 584 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_20_20;
#line 584 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_22_22;
#line 584 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_24_24;
#line 584 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_25_25;
#line 584 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_26_26;
#line 584 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_66_66;
#line 584 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_67_67;
#line 584 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_69_69;
#line 584 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_72_72;
#line 584 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_74_74;
#line 584 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_79_79;

#line 586 "xml_documentation.m"
        {
#line 586 "xml_documentation.m"
          check_hlds__xml_documentation__V_18_18 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__xml_documentation__Args_12);
        }
#line 835 "xml_documentation.m"
        {
#line 835 "xml_documentation.m"
          check_hlds__xml_documentation__V_74_74 = mdbcomp__prim_data__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Name_11);
        }
#line 835 "xml_documentation.m"
        {
#line 835 "xml_documentation.m"
          check_hlds__xml_documentation__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_74_74);
        }
#line 835 "xml_documentation.m"
        {
#line 835 "xml_documentation.m"
          check_hlds__xml_documentation__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "mode", check_hlds__xml_documentation__V_72_72);
        }
#line 831 "xml_documentation.m"
        {
#line 831 "xml_documentation.m"
          check_hlds__xml_documentation__V_69_69 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__V_18_18);
        }
#line 831 "xml_documentation.m"
        {
#line 831 "xml_documentation.m"
          check_hlds__xml_documentation__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_69_69);
        }
#line 830 "xml_documentation.m"
        {
#line 830 "xml_documentation.m"
          check_hlds__xml_documentation__V_16_16 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_66_66, check_hlds__xml_documentation__V_67_67);
        }
#line 585 "xml_documentation.m"
        {
#line 585 "xml_documentation.m"
          check_hlds__xml_documentation__Ref_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 585 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_13, 0) = ((MR_Box) ((MR_String) "ref"));
#line 585 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_13, 1) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 585 "xml_documentation.m"
        }
#line 587 "xml_documentation.m"
        {
#line 587 "xml_documentation.m"
          check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 587 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[3]));
#line 587 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_2));
#line 587 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 587 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
#line 587 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_79_79 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_20_20, check_hlds__xml_documentation__Args_12);
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__XmlArgs_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_14, 0) = ((MR_Box) ((MR_String) "mode_args"));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_14, 2) = ((MR_Box) (check_hlds__xml_documentation__V_79_79));
#line 860 "xml_documentation.m"
        }
#line 588 "xml_documentation.m"
        {
#line 588 "xml_documentation.m"
          check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__Ref_13));
#line 588 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 588 "xml_documentation.m"
        }
#line 588 "xml_documentation.m"
        {
#line 588 "xml_documentation.m"
          check_hlds__xml_documentation__V_25_25 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_11);
        }
#line 588 "xml_documentation.m"
        {
#line 588 "xml_documentation.m"
          check_hlds__xml_documentation__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_14));
#line 588 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 588 "xml_documentation.m"
        }
#line 588 "xml_documentation.m"
        {
#line 588 "xml_documentation.m"
          check_hlds__xml_documentation__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 0) = ((MR_Box) (check_hlds__xml_documentation__V_25_25));
#line 588 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 1) = ((MR_Box) (check_hlds__xml_documentation__V_26_26));
#line 588 "xml_documentation.m"
        }
#line 588 "xml_documentation.m"
        {
#line 588 "xml_documentation.m"
          check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 588 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "user_defined_mode"));
#line 588 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (check_hlds__xml_documentation__V_22_22));
#line 588 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 588 "xml_documentation.m"
        }
#line 584 "xml_documentation.m"
      }
#line 579 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_6;
#line 579 "xml_documentation.m"
  }
#line 575 "xml_documentation.m"
}

#line 560 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__pred_mode_documentation_5_p_0(
#line 560 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation___C_6,
#line 560 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation___ProcId_7,
#line 560 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
#line 560 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
#line 560 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16)
#line 560 "xml_documentation.m"
{
#line 563 "xml_documentation.m"
  {
#line 563 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;

#line 563 "xml_documentation.m"
    {
#line 563 "xml_documentation.m"
      check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0(check_hlds__xml_documentation__ProcInfo_8, check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15, check_hlds__xml_documentation__STATE_VARIABLE_Xml_16);
#line 563 "xml_documentation.m"
      return;
    }
#line 563 "xml_documentation.m"
  }
#line 560 "xml_documentation.m"
}

#line 551 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0_1(
#line 551 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 551 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 551 "xml_documentation.m"
{
#line 551 "xml_documentation.m"
  {
#line 551 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 551 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 551 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_7;

#line 551 "xml_documentation.m"
    {
#line 551 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_7 = check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 551 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_7));
#line 551 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 551 "xml_documentation.m"
  }
#line 551 "xml_documentation.m"
}

#line 548 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0(
#line 548 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 548 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 548 "xml_documentation.m"
{
#line 550 "xml_documentation.m"
  {
#line 550 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 550 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_7;
#line 550 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Univs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 550 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Exists_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 550 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlUnivs_8;
#line 550 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlExists_9;
#line 550 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11;
#line 550 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_16_16;
#line 550 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;
#line 550 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_28_28;
#line 550 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_35_35;

#line 551 "xml_documentation.m"
    {
#line 551 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 551 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[1]));
#line 551 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 1) = ((MR_Box) (check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0_1));
#line 551 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 551 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_4));
#line 551 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_28_28 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__Univs_5);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__XmlUnivs_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUnivs_8, 0) = ((MR_Box) ((MR_String) "pred_universal"));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUnivs_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUnivs_8, 2) = ((MR_Box) (check_hlds__xml_documentation__V_28_28));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_35_35 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__Exists_6);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__XmlExists_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlExists_9, 0) = ((MR_Box) ((MR_String) "pred_exist"));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlExists_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlExists_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_35_35));
#line 860 "xml_documentation.m"
    }
#line 555 "xml_documentation.m"
    {
#line 555 "xml_documentation.m"
      check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlExists_9));
#line 555 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "xml_documentation.m"
    }
#line 555 "xml_documentation.m"
    {
#line 555 "xml_documentation.m"
      check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlUnivs_8));
#line 555 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 555 "xml_documentation.m"
    }
#line 555 "xml_documentation.m"
    {
#line 555 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 555 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 0) = ((MR_Box) ((MR_String) "pred_constraints"));
#line 555 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 2) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 555 "xml_documentation.m"
    }
#line 550 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_7;
#line 550 "xml_documentation.m"
  }
#line 548 "xml_documentation.m"
}

#line 522 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_3(
#line 522 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 522 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 522 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 522 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 522 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4)
#line 522 "xml_documentation.m"
{
#line 522 "xml_documentation.m"
  {
#line 522 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 522 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv3_STATE_VARIABLE_Xml_16;

#line 522 "xml_documentation.m"
    {
#line 522 "xml_documentation.m"
      check_hlds__xml_documentation__pred_mode_documentation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3), &check_hlds__xml_documentation__conv3_STATE_VARIABLE_Xml_16);
    }
#line 522 "xml_documentation.m"
    *check_hlds__xml_documentation__wrapper_arg_4 = ((MR_Box) (check_hlds__xml_documentation__conv3_STATE_VARIABLE_Xml_16));
#line 522 "xml_documentation.m"
  }
#line 522 "xml_documentation.m"
}

#line 516 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_2(
#line 516 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 516 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 516 "xml_documentation.m"
{
#line 516 "xml_documentation.m"
  {
#line 516 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 516 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 516 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_Xml_6;

#line 516 "xml_documentation.m"
    {
#line 516 "xml_documentation.m"
      check_hlds__xml_documentation__conv2_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 516 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_6));
#line 516 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 516 "xml_documentation.m"
  }
#line 516 "xml_documentation.m"
}

#line 515 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_1(
#line 515 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 515 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 515 "xml_documentation.m"
{
#line 515 "xml_documentation.m"
  {
#line 515 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 515 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 515 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_HeadVar__3_3;

#line 515 "xml_documentation.m"
    {
#line 515 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 515 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_HeadVar__3_3));
#line 515 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 515 "xml_documentation.m"
  }
#line 515 "xml_documentation.m"
}

#line 488 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0(
#line 488 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_4,
#line 488 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_5)
#line 488 "xml_documentation.m"
{
#line 490 "xml_documentation.m"
  {
#line 490 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_6;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeCtorInfo_7_67;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TVarset_7;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Exists_8;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__IsPredOrFunc_9;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Module_10;
#line 490 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Name_11;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredName_12;
#line 490 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__Arity_13;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportStatus_14;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Types_15;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Constraints_16;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Context_17;
#line 490 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Tag_18;
#line 490 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Id_19;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlName_20;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlContext_21;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlTypes_22;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlExistVars_23;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlConstraints_24;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlVisibility_25;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ProcTable_26;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlProcs_27;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlModes_28;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml0_29;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_31_31;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_33_33;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_34_34;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_38_38;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_39_39;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_42_42;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_43_43;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_44_44;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_45_45;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_46_46;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_47_47;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_48_48;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Types0_65;
#line 490 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_66_66;
#line 490 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_79_79;
#line 490 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_80_80;
#line 490 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_82_82;
#line 490 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_85_85;
#line 490 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_87_87;
#line 490 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_92_92;
#line 541 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__L_70;
#line 542 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_71_71;
#line 542 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_72_72;
#line 522 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv4_XmlProcs_27;

#line 491 "xml_documentation.m"
    {
#line 491 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__TVarset_7);
    }
#line 492 "xml_documentation.m"
    {
#line 492 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Exists_8);
    }
#line 494 "xml_documentation.m"
    {
#line 494 "xml_documentation.m"
      check_hlds__xml_documentation__IsPredOrFunc_9 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
#line 495 "xml_documentation.m"
    {
#line 495 "xml_documentation.m"
      check_hlds__xml_documentation__Module_10 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
#line 496 "xml_documentation.m"
    {
#line 496 "xml_documentation.m"
      check_hlds__xml_documentation__Name_11 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
#line 497 "xml_documentation.m"
    {
#line 497 "xml_documentation.m"
      check_hlds__xml_documentation__PredName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__PredName_12, 0) = ((MR_Box) (check_hlds__xml_documentation__Module_10));
#line 497 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__PredName_12, 1) = ((MR_Box) (check_hlds__xml_documentation__Name_11));
#line 497 "xml_documentation.m"
    }
#line 498 "xml_documentation.m"
    {
#line 498 "xml_documentation.m"
      check_hlds__xml_documentation__Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
#line 499 "xml_documentation.m"
    {
#line 499 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__ImportStatus_14);
    }
#line 534 "xml_documentation.m"
    {
#line 534 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Types0_65);
    }
#line 7830 "check_hlds.xml_documentation.c"
    check_hlds__xml_documentation__TypeCtorInfo_7_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 535 "xml_documentation.m"
    {
#line 535 "xml_documentation.m"
      check_hlds__xml_documentation__V_66_66 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
#line 542 "xml_documentation.m"
    {
#line 542 "xml_documentation.m"
      check_hlds__xml_documentation__V_72_72 = mercury__list__length_1_f_0(check_hlds__xml_documentation__TypeCtorInfo_7_67, check_hlds__xml_documentation__Types0_65);
    }
#line 542 "xml_documentation.m"
    check_hlds__xml_documentation__V_71_71 = (check_hlds__xml_documentation__V_72_72 - check_hlds__xml_documentation__V_66_66);
#line 542 "xml_documentation.m"
    {
#line 542 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = mercury__list__drop_3_p_0(check_hlds__xml_documentation__TypeCtorInfo_7_67, check_hlds__xml_documentation__V_71_71, check_hlds__xml_documentation__Types0_65, &check_hlds__xml_documentation__L_70);
    }
#line 541 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 541 "xml_documentation.m"
      check_hlds__xml_documentation__Types_15 = check_hlds__xml_documentation__L_70;
#line 541 "xml_documentation.m"
    else
#line 545 "xml_documentation.m"
      {
#line 541 "xml_documentation.m"
        MR_Box check_hlds__xml_documentation__conv0_Types_15;

#line 541 "xml_documentation.m"
        {
#line 541 "xml_documentation.m"
          check_hlds__xml_documentation__conv0_Types_15 = mercury__require__func_error_1_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[7], (MR_String) "keep_last_n");
        }
#line 541 "xml_documentation.m"
        check_hlds__xml_documentation__Types_15 = ((MR_Word) check_hlds__xml_documentation__conv0_Types_15);
#line 545 "xml_documentation.m"
      }
#line 502 "xml_documentation.m"
    {
#line 502 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Constraints_16);
    }
#line 503 "xml_documentation.m"
    {
#line 503 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Context_17);
    }
#line 507 "xml_documentation.m"
    if ((check_hlds__xml_documentation__IsPredOrFunc_9 == (MR_Integer) 1))
#line 509 "xml_documentation.m"
      check_hlds__xml_documentation__Tag_18 = (MR_String) "function";
#line 507 "xml_documentation.m"
    else
#line 506 "xml_documentation.m"
      check_hlds__xml_documentation__Tag_18 = (MR_String) "predicate";
#line 835 "xml_documentation.m"
    {
#line 835 "xml_documentation.m"
      check_hlds__xml_documentation__V_87_87 = mdbcomp__prim_data__sym_name_to_string_1_f_0(check_hlds__xml_documentation__PredName_12);
    }
#line 835 "xml_documentation.m"
    {
#line 835 "xml_documentation.m"
      check_hlds__xml_documentation__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_87_87);
    }
#line 835 "xml_documentation.m"
    {
#line 835 "xml_documentation.m"
      check_hlds__xml_documentation__V_79_79 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Tag_18, check_hlds__xml_documentation__V_85_85);
    }
#line 831 "xml_documentation.m"
    {
#line 831 "xml_documentation.m"
      check_hlds__xml_documentation__V_82_82 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_13);
    }
#line 831 "xml_documentation.m"
    {
#line 831 "xml_documentation.m"
      check_hlds__xml_documentation__V_80_80 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_82_82);
    }
#line 830 "xml_documentation.m"
    {
#line 830 "xml_documentation.m"
      check_hlds__xml_documentation__Id_19 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_79_79, check_hlds__xml_documentation__V_80_80);
    }
#line 513 "xml_documentation.m"
    {
#line 513 "xml_documentation.m"
      check_hlds__xml_documentation__XmlName_20 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__PredName_12);
    }
#line 514 "xml_documentation.m"
    {
#line 514 "xml_documentation.m"
      check_hlds__xml_documentation__XmlContext_21 = check_hlds__xml_documentation__prog_context_to_xml_1_f_0(check_hlds__xml_documentation__Context_17);
    }
#line 515 "xml_documentation.m"
    {
#line 515 "xml_documentation.m"
      check_hlds__xml_documentation__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 515 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[2]));
#line 515 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 1) = ((MR_Box) (check_hlds__xml_documentation__predicate_documentation_2_f_0_1));
#line 515 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 515 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_7));
#line 515 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_92_92 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_31_31, check_hlds__xml_documentation__Types_15);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__XmlTypes_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_22, 0) = ((MR_Box) ((MR_String) "pred_types"));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_22, 2) = ((MR_Box) (check_hlds__xml_documentation__V_92_92));
#line 860 "xml_documentation.m"
    }
#line 516 "xml_documentation.m"
    {
#line 516 "xml_documentation.m"
      check_hlds__xml_documentation__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 516 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[0]));
#line 516 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 1) = ((MR_Box) (check_hlds__xml_documentation__predicate_documentation_2_f_0_2));
#line 516 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 516 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_7));
#line 516 "xml_documentation.m"
    }
#line 516 "xml_documentation.m"
    {
#line 516 "xml_documentation.m"
      check_hlds__xml_documentation__XmlExistVars_23 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0((MR_String) "pred_exist_vars", check_hlds__xml_documentation__V_33_33, check_hlds__xml_documentation__Exists_8);
    }
#line 518 "xml_documentation.m"
    {
#line 518 "xml_documentation.m"
      check_hlds__xml_documentation__XmlConstraints_24 = check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_7, check_hlds__xml_documentation__Constraints_16);
    }
#line 519 "xml_documentation.m"
    {
#line 519 "xml_documentation.m"
      check_hlds__xml_documentation__XmlVisibility_25 = check_hlds__xml_documentation__visibility_to_xml_1_f_0(check_hlds__xml_documentation__ImportStatus_14);
    }
#line 521 "xml_documentation.m"
    {
#line 521 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__ProcTable_26);
    }
#line 522 "xml_documentation.m"
    {
#line 522 "xml_documentation.m"
      check_hlds__xml_documentation__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 522 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_8[0]));
#line 522 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 1) = ((MR_Box) (check_hlds__xml_documentation__predicate_documentation_2_f_0_3));
#line 522 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 522 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 3) = ((MR_Box) (check_hlds__xml_documentation__C_4));
#line 522 "xml_documentation.m"
    }
#line 522 "xml_documentation.m"
    {
#line 522 "xml_documentation.m"
      mercury__map__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &check_hlds__xml_documentation_scalar_common_1[2], check_hlds__xml_documentation__V_34_34, check_hlds__xml_documentation__ProcTable_26, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv4_XmlProcs_27);
    }
#line 522 "xml_documentation.m"
    check_hlds__xml_documentation__XmlProcs_27 = ((MR_Word) check_hlds__xml_documentation__conv4_XmlProcs_27);
#line 523 "xml_documentation.m"
    {
#line 523 "xml_documentation.m"
      check_hlds__xml_documentation__XmlModes_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 523 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_28, 0) = ((MR_Box) ((MR_String) "pred_modes"));
#line 523 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_28, 2) = ((MR_Box) (check_hlds__xml_documentation__XmlProcs_27));
#line 523 "xml_documentation.m"
    }
#line 525 "xml_documentation.m"
    {
#line 525 "xml_documentation.m"
      check_hlds__xml_documentation__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 525 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_39_39, 0) = ((MR_Box) ((MR_String) "id"));
#line 525 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_39_39, 1) = ((MR_Box) (check_hlds__xml_documentation__Id_19));
#line 525 "xml_documentation.m"
    }
#line 525 "xml_documentation.m"
    {
#line 525 "xml_documentation.m"
      check_hlds__xml_documentation__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 0) = ((MR_Box) (check_hlds__xml_documentation__V_39_39));
#line 525 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "xml_documentation.m"
    }
#line 527 "xml_documentation.m"
    {
#line 527 "xml_documentation.m"
      check_hlds__xml_documentation__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlModes_28));
#line 527 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "xml_documentation.m"
    }
#line 527 "xml_documentation.m"
    {
#line 527 "xml_documentation.m"
      check_hlds__xml_documentation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_25));
#line 527 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 1) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 527 "xml_documentation.m"
    }
#line 527 "xml_documentation.m"
    {
#line 527 "xml_documentation.m"
      check_hlds__xml_documentation__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlConstraints_24));
#line 527 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 1) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 527 "xml_documentation.m"
    }
#line 526 "xml_documentation.m"
    {
#line 526 "xml_documentation.m"
      check_hlds__xml_documentation__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlExistVars_23));
#line 526 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 1) = ((MR_Box) (check_hlds__xml_documentation__V_46_46));
#line 526 "xml_documentation.m"
    }
#line 526 "xml_documentation.m"
    {
#line 526 "xml_documentation.m"
      check_hlds__xml_documentation__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_44_44, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_21));
#line 526 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_44_44, 1) = ((MR_Box) (check_hlds__xml_documentation__V_45_45));
#line 526 "xml_documentation.m"
    }
#line 526 "xml_documentation.m"
    {
#line 526 "xml_documentation.m"
      check_hlds__xml_documentation__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_43_43, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_22));
#line 526 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_43_43, 1) = ((MR_Box) (check_hlds__xml_documentation__V_44_44));
#line 526 "xml_documentation.m"
    }
#line 525 "xml_documentation.m"
    {
#line 525 "xml_documentation.m"
      check_hlds__xml_documentation__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_42_42, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_20));
#line 525 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_42_42, 1) = ((MR_Box) (check_hlds__xml_documentation__V_43_43));
#line 525 "xml_documentation.m"
    }
#line 525 "xml_documentation.m"
    {
#line 525 "xml_documentation.m"
      check_hlds__xml_documentation__Xml0_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 525 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_29, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_18));
#line 525 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_29, 1) = ((MR_Box) (check_hlds__xml_documentation__V_38_38));
#line 525 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_29, 2) = ((MR_Box) (check_hlds__xml_documentation__V_42_42));
#line 525 "xml_documentation.m"
    }
#line 529 "xml_documentation.m"
    {
#line 529 "xml_documentation.m"
      return check_hlds__xml_documentation__Xml_6 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_4, check_hlds__xml_documentation__Context_17, check_hlds__xml_documentation__Xml0_29);
    }
#line 490 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_6;
#line 490 "xml_documentation.m"
  }
#line 488 "xml_documentation.m"
}

#line 469 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__pred_documentation_5_p_0(
#line 469 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 469 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation___PredId_7,
#line 469 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_8,
#line 469 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
#line 469 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15)
#line 469 "xml_documentation.m"
{
#line 472 "xml_documentation.m"
  {
#line 472 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;

#line 472 "xml_documentation.m"
    {
#line 472 "xml_documentation.m"
      check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_50_93_95_48_5_p_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__PredInfo_8, check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14, check_hlds__xml_documentation__STATE_VARIABLE_Xml_15);
#line 472 "xml_documentation.m"
      return;
    }
#line 472 "xml_documentation.m"
  }
#line 469 "xml_documentation.m"
}

#line 461 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_3(
#line 461 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 461 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 461 "xml_documentation.m"
{
#line 461 "xml_documentation.m"
  {
#line 461 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 461 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 461 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_HeadVar__3_3;

#line 461 "xml_documentation.m"
    {
#line 461 "xml_documentation.m"
      check_hlds__xml_documentation__conv2_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 461 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_HeadVar__3_3));
#line 461 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 461 "xml_documentation.m"
  }
#line 461 "xml_documentation.m"
}

#line 448 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_2(
#line 448 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 448 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 448 "xml_documentation.m"
{
#line 448 "xml_documentation.m"
  {
#line 448 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 448 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 448 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_HeadVar__3_3;

#line 448 "xml_documentation.m"
    {
#line 448 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 448 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_HeadVar__3_3));
#line 448 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 448 "xml_documentation.m"
  }
#line 448 "xml_documentation.m"
}

#line 440 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_1(
#line 440 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 440 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 440 "xml_documentation.m"
{
#line 440 "xml_documentation.m"
  {
#line 440 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 440 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 440 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__3_3;

#line 440 "xml_documentation.m"
    {
#line 440 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 440 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__3_3));
#line 440 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 440 "xml_documentation.m"
  }
#line 440 "xml_documentation.m"
}

#line 432 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0(
#line 432 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_1,
#line 432 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 432 "xml_documentation.m"
{
#line 434 "xml_documentation.m"
  {
#line 434 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 434 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;

#line 434 "xml_documentation.m"
    if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 434 "xml_documentation.m"
      {
#line 434 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));

#line 434 "xml_documentation.m"
        if ((check_hlds__xml_documentation__V_98_98 == (MR_Integer) 3))
#line 445 "xml_documentation.m"
          {
#line 445 "xml_documentation.m"
            check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[7];
#line 445 "xml_documentation.m"
          }
#line 434 "xml_documentation.m"
        else
#line 434 "xml_documentation.m"
          if ((check_hlds__xml_documentation__V_98_98 == (MR_Integer) 1))
#line 443 "xml_documentation.m"
            {
#line 443 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[8];
#line 443 "xml_documentation.m"
            }
#line 434 "xml_documentation.m"
          else
#line 434 "xml_documentation.m"
            if ((check_hlds__xml_documentation__V_98_98 == (MR_Integer) 0))
#line 442 "xml_documentation.m"
              {
#line 442 "xml_documentation.m"
                check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[9];
#line 442 "xml_documentation.m"
              }
#line 434 "xml_documentation.m"
            else
#line 444 "xml_documentation.m"
              {
#line 444 "xml_documentation.m"
                check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[10];
#line 444 "xml_documentation.m"
              }
#line 434 "xml_documentation.m"
      }
#line 434 "xml_documentation.m"
    else
#line 434 "xml_documentation.m"
      if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 436 "xml_documentation.m"
        {
#line 436 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TypeName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 436 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 436 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Ref_12;
#line 436 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlName_13;
#line 436 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlArgs_14;
#line 436 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_16_16;
#line 436 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__V_18_18;
#line 436 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_20_20;
#line 436 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_22_22;
#line 436 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_24_24;
#line 436 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_25_25;
#line 436 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));

#line 438 "xml_documentation.m"
          {
#line 438 "xml_documentation.m"
            check_hlds__xml_documentation__V_18_18 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__xml_documentation__Args_9);
          }
#line 437 "xml_documentation.m"
          {
#line 437 "xml_documentation.m"
            check_hlds__xml_documentation__V_16_16 = check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0((MR_String) "type", check_hlds__xml_documentation__TypeName_8, check_hlds__xml_documentation__V_18_18);
          }
#line 437 "xml_documentation.m"
          {
#line 437 "xml_documentation.m"
            check_hlds__xml_documentation__Ref_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 437 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_12, 0) = ((MR_Box) ((MR_String) "ref"));
#line 437 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_12, 1) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 437 "xml_documentation.m"
          }
#line 439 "xml_documentation.m"
          {
#line 439 "xml_documentation.m"
            check_hlds__xml_documentation__XmlName_13 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__TypeName_8);
          }
#line 440 "xml_documentation.m"
          {
#line 440 "xml_documentation.m"
            check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 440 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[2]));
#line 440 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_1));
#line 440 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 440 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_1));
#line 440 "xml_documentation.m"
          }
#line 440 "xml_documentation.m"
          {
#line 440 "xml_documentation.m"
            check_hlds__xml_documentation__XmlArgs_14 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0((MR_String) "type_args", check_hlds__xml_documentation__V_20_20, check_hlds__xml_documentation__Args_9);
          }
#line 441 "xml_documentation.m"
          {
#line 441 "xml_documentation.m"
            check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__Ref_12));
#line 441 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "xml_documentation.m"
          }
#line 441 "xml_documentation.m"
          {
#line 441 "xml_documentation.m"
            check_hlds__xml_documentation__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_25_25, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_14));
#line 441 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "xml_documentation.m"
          }
#line 441 "xml_documentation.m"
          {
#line 441 "xml_documentation.m"
            check_hlds__xml_documentation__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_13));
#line 441 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 1) = ((MR_Box) (check_hlds__xml_documentation__V_25_25));
#line 441 "xml_documentation.m"
          }
#line 441 "xml_documentation.m"
          {
#line 441 "xml_documentation.m"
            check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 441 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "type"));
#line 441 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__xml_documentation__V_22_22));
#line 441 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 441 "xml_documentation.m"
          }
#line 436 "xml_documentation.m"
        }
#line 434 "xml_documentation.m"
      else
#line 434 "xml_documentation.m"
        if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 434 "xml_documentation.m"
          {
#line 434 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__TVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 434 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));

#line 434 "xml_documentation.m"
            {
#line 434 "xml_documentation.m"
              return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_1, check_hlds__xml_documentation__TVar_5);
            }
#line 434 "xml_documentation.m"
          }
#line 434 "xml_documentation.m"
        else
#line 434 "xml_documentation.m"
          if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 463 "xml_documentation.m"
            {
#line 463 "xml_documentation.m"
              {
#line 463 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "apply_n_type");
              }
#line 463 "xml_documentation.m"
            }
#line 434 "xml_documentation.m"
          else
#line 434 "xml_documentation.m"
            if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 447 "xml_documentation.m"
              {
#line 447 "xml_documentation.m"
                MR_Word check_hlds__xml_documentation__Types_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 447 "xml_documentation.m"
                MR_Word check_hlds__xml_documentation__MaybeResult_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));
#line 447 "xml_documentation.m"
                MR_Word check_hlds__xml_documentation__XmlTypes_53;
#line 447 "xml_documentation.m"
                MR_Word check_hlds__xml_documentation__XmlChildren_56;
#line 447 "xml_documentation.m"
                MR_Word check_hlds__xml_documentation__V_58_58;
#line 447 "xml_documentation.m"
                MR_Word check_hlds__xml_documentation__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 3)));

#line 448 "xml_documentation.m"
                {
#line 448 "xml_documentation.m"
                  check_hlds__xml_documentation__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 448 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_58_58, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[2]));
#line 448 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_58_58, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_2));
#line 448 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 448 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_58_58, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_1));
#line 448 "xml_documentation.m"
                }
#line 448 "xml_documentation.m"
                {
#line 448 "xml_documentation.m"
                  check_hlds__xml_documentation__XmlTypes_53 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0((MR_String) "higher_order_type_args", check_hlds__xml_documentation__V_58_58, check_hlds__xml_documentation__Types_48);
                }
#line 455 "xml_documentation.m"
                if ((check_hlds__xml_documentation__MaybeResult_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 456 "xml_documentation.m"
                  {
#line 457 "xml_documentation.m"
                    {
#line 457 "xml_documentation.m"
                      check_hlds__xml_documentation__XmlChildren_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "xml_documentation.m"
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_56, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_53));
#line 457 "xml_documentation.m"
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 457 "xml_documentation.m"
                    }
#line 456 "xml_documentation.m"
                  }
#line 455 "xml_documentation.m"
                else
#line 451 "xml_documentation.m"
                  {
#line 451 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__ResultType_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__MaybeResult_49, (MR_Integer) 0)));
#line 451 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__XmlReturn_55;
#line 451 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__V_62_62;
#line 451 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__V_63_63;
#line 451 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__V_65_65;

#line 453 "xml_documentation.m"
                    {
#line 453 "xml_documentation.m"
                      check_hlds__xml_documentation__V_63_63 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_1, check_hlds__xml_documentation__ResultType_54);
                    }
#line 452 "xml_documentation.m"
                    {
#line 452 "xml_documentation.m"
                      check_hlds__xml_documentation__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "xml_documentation.m"
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_62_62, 0) = ((MR_Box) (check_hlds__xml_documentation__V_63_63));
#line 452 "xml_documentation.m"
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 452 "xml_documentation.m"
                    }
#line 452 "xml_documentation.m"
                    {
#line 452 "xml_documentation.m"
                      check_hlds__xml_documentation__XmlReturn_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 452 "xml_documentation.m"
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlReturn_55, 0) = ((MR_Box) ((MR_String) "return_type"));
#line 452 "xml_documentation.m"
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlReturn_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 452 "xml_documentation.m"
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlReturn_55, 2) = ((MR_Box) (check_hlds__xml_documentation__V_62_62));
#line 452 "xml_documentation.m"
                    }
#line 454 "xml_documentation.m"
                    {
#line 454 "xml_documentation.m"
                      check_hlds__xml_documentation__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "xml_documentation.m"
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_65_65, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlReturn_55));
#line 454 "xml_documentation.m"
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 454 "xml_documentation.m"
                    }
#line 454 "xml_documentation.m"
                    {
#line 454 "xml_documentation.m"
                      check_hlds__xml_documentation__XmlChildren_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "xml_documentation.m"
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_56, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_53));
#line 454 "xml_documentation.m"
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_56, 1) = ((MR_Box) (check_hlds__xml_documentation__V_65_65));
#line 454 "xml_documentation.m"
                    }
#line 451 "xml_documentation.m"
                  }
#line 459 "xml_documentation.m"
                {
#line 459 "xml_documentation.m"
                  check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 459 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "higher_order_type"));
#line 459 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "xml_documentation.m"
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__XmlChildren_56));
#line 459 "xml_documentation.m"
                }
#line 447 "xml_documentation.m"
              }
#line 434 "xml_documentation.m"
            else
#line 434 "xml_documentation.m"
              if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 464 "xml_documentation.m"
                {
#line 464 "xml_documentation.m"
                  {
#line 464 "xml_documentation.m"
                    return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "kinded_type");
                  }
#line 464 "xml_documentation.m"
                }
#line 434 "xml_documentation.m"
              else
#line 460 "xml_documentation.m"
                {
#line 460 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__Types_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 460 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__XmlArgs_73;
#line 460 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_75_75;
#line 460 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_78_78;
#line 460 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));

#line 461 "xml_documentation.m"
                  {
#line 461 "xml_documentation.m"
                    check_hlds__xml_documentation__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 461 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_75_75, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[2]));
#line 461 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_75_75, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_3));
#line 461 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 461 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_75_75, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_1));
#line 461 "xml_documentation.m"
                  }
#line 461 "xml_documentation.m"
                  {
#line 461 "xml_documentation.m"
                    check_hlds__xml_documentation__XmlArgs_73 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0((MR_String) "tuple_types", check_hlds__xml_documentation__V_75_75, check_hlds__xml_documentation__Types_70);
                  }
#line 462 "xml_documentation.m"
                  {
#line 462 "xml_documentation.m"
                    check_hlds__xml_documentation__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_78_78, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_73));
#line 462 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "xml_documentation.m"
                  }
#line 462 "xml_documentation.m"
                  {
#line 462 "xml_documentation.m"
                    check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 462 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "tuple"));
#line 462 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_78_78));
#line 462 "xml_documentation.m"
                  }
#line 460 "xml_documentation.m"
                }
#line 434 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_3;
#line 434 "xml_documentation.m"
  }
#line 432 "xml_documentation.m"
}

#line 415 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_arg_to_xml_3_f_0(
#line 415 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 415 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_6,
#line 415 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__CtorArg_7)
#line 415 "xml_documentation.m"
{
#line 417 "xml_documentation.m"
  {
#line 417 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_8;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__MaybeFieldName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 0)));
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 1)));
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 3)));
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlType_13;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlContext_14;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlMaybeFieldName_17;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml0_18;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_21_21;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_22_22;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_37_37;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_38_38;
#line 417 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__FileName_39;
#line 417 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__LineNumber_40;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_43_43;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_44_44;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_46_46;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_47_47;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_53_53;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_54_54;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_59_59;
#line 417 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_60_60;
#line 417 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_61_61;
#line 418 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation___Width_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 2)));

#line 419 "xml_documentation.m"
    {
#line 419 "xml_documentation.m"
      check_hlds__xml_documentation__V_22_22 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_6, check_hlds__xml_documentation__Type_10);
    }
#line 419 "xml_documentation.m"
    {
#line 419 "xml_documentation.m"
      check_hlds__xml_documentation__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 0) = ((MR_Box) (check_hlds__xml_documentation__V_22_22));
#line 419 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 419 "xml_documentation.m"
    }
#line 419 "xml_documentation.m"
    {
#line 419 "xml_documentation.m"
      check_hlds__xml_documentation__XmlType_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 419 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlType_13, 0) = ((MR_Box) ((MR_String) "arg_type"));
#line 419 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlType_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 419 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlType_13, 2) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 419 "xml_documentation.m"
    }
#line 783 "xml_documentation.m"
    check_hlds__xml_documentation__FileName_39 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_12, (MR_Integer) 0)));
#line 783 "xml_documentation.m"
    check_hlds__xml_documentation__LineNumber_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_12, (MR_Integer) 1)));
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_54_54, 0) = ((MR_Box) (check_hlds__xml_documentation__FileName_39));
#line 854 "xml_documentation.m"
    }
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_53_53, 0) = ((MR_Box) (check_hlds__xml_documentation__V_54_54));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
    }
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_44_44, 0) = ((MR_Box) ((MR_String) "filename"));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_44_44, 2) = ((MR_Box) (check_hlds__xml_documentation__V_53_53));
#line 854 "xml_documentation.m"
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_61_61 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__LineNumber_40);
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_60_60, 0) = ((MR_Box) (check_hlds__xml_documentation__V_61_61));
#line 842 "xml_documentation.m"
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_59_59, 0) = ((MR_Box) (check_hlds__xml_documentation__V_60_60));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "xml_documentation.m"
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_47_47, 0) = ((MR_Box) ((MR_String) "line"));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_47_47, 2) = ((MR_Box) (check_hlds__xml_documentation__V_59_59));
#line 842 "xml_documentation.m"
    }
#line 785 "xml_documentation.m"
    {
#line 785 "xml_documentation.m"
      check_hlds__xml_documentation__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 0) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 785 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "xml_documentation.m"
    }
#line 784 "xml_documentation.m"
    {
#line 784 "xml_documentation.m"
      check_hlds__xml_documentation__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_43_43, 0) = ((MR_Box) (check_hlds__xml_documentation__V_44_44));
#line 784 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_43_43, 1) = ((MR_Box) (check_hlds__xml_documentation__V_46_46));
#line 784 "xml_documentation.m"
    }
#line 783 "xml_documentation.m"
    {
#line 783 "xml_documentation.m"
      check_hlds__xml_documentation__XmlContext_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 783 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_14, 0) = ((MR_Box) ((MR_String) "context"));
#line 783 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 783 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_14, 2) = ((MR_Box) (check_hlds__xml_documentation__V_43_43));
#line 783 "xml_documentation.m"
    }
#line 425 "xml_documentation.m"
    if ((check_hlds__xml_documentation__MaybeFieldName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "xml_documentation.m"
      check_hlds__xml_documentation__XmlMaybeFieldName_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 425 "xml_documentation.m"
    else
#line 422 "xml_documentation.m"
      {
#line 422 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__FieldName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__MaybeFieldName_9, (MR_Integer) 0)));
#line 422 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Id_16;
#line 422 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_25_25;
#line 422 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_27_27;
#line 422 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_29_29;
#line 422 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_31_31;
#line 422 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_32_32;
#line 422 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_67_67;
#line 422 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_69_69;

#line 835 "xml_documentation.m"
        {
#line 835 "xml_documentation.m"
          check_hlds__xml_documentation__V_69_69 = mdbcomp__prim_data__sym_name_to_string_1_f_0(check_hlds__xml_documentation__FieldName_15);
        }
#line 835 "xml_documentation.m"
        {
#line 835 "xml_documentation.m"
          check_hlds__xml_documentation__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_69_69);
        }
#line 835 "xml_documentation.m"
        {
#line 835 "xml_documentation.m"
          check_hlds__xml_documentation__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "field", check_hlds__xml_documentation__V_67_67);
        }
#line 423 "xml_documentation.m"
        {
#line 423 "xml_documentation.m"
          check_hlds__xml_documentation__Id_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 423 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_16, 0) = ((MR_Box) ((MR_String) "id"));
#line 423 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_16, 1) = ((MR_Box) (check_hlds__xml_documentation__V_25_25));
#line 423 "xml_documentation.m"
        }
#line 424 "xml_documentation.m"
        {
#line 424 "xml_documentation.m"
          check_hlds__xml_documentation__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_29_29, 0) = ((MR_Box) (check_hlds__xml_documentation__Id_16));
#line 424 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "xml_documentation.m"
        }
#line 424 "xml_documentation.m"
        {
#line 424 "xml_documentation.m"
          check_hlds__xml_documentation__V_32_32 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__FieldName_15);
        }
#line 424 "xml_documentation.m"
        {
#line 424 "xml_documentation.m"
          check_hlds__xml_documentation__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_31_31, 0) = ((MR_Box) (check_hlds__xml_documentation__V_32_32));
#line 424 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "xml_documentation.m"
        }
#line 424 "xml_documentation.m"
        {
#line 424 "xml_documentation.m"
          check_hlds__xml_documentation__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 424 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_27_27, 0) = ((MR_Box) ((MR_String) "field"));
#line 424 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_27_27, 1) = ((MR_Box) (check_hlds__xml_documentation__V_29_29));
#line 424 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_27_27, 2) = ((MR_Box) (check_hlds__xml_documentation__V_31_31));
#line 424 "xml_documentation.m"
        }
#line 424 "xml_documentation.m"
        {
#line 424 "xml_documentation.m"
          check_hlds__xml_documentation__XmlMaybeFieldName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlMaybeFieldName_17, 0) = ((MR_Box) (check_hlds__xml_documentation__V_27_27));
#line 424 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlMaybeFieldName_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "xml_documentation.m"
        }
#line 422 "xml_documentation.m"
      }
#line 429 "xml_documentation.m"
    {
#line 429 "xml_documentation.m"
      check_hlds__xml_documentation__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_14));
#line 429 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 1) = ((MR_Box) (check_hlds__xml_documentation__XmlMaybeFieldName_17));
#line 429 "xml_documentation.m"
    }
#line 429 "xml_documentation.m"
    {
#line 429 "xml_documentation.m"
      check_hlds__xml_documentation__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_37_37, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlType_13));
#line 429 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_37_37, 1) = ((MR_Box) (check_hlds__xml_documentation__V_38_38));
#line 429 "xml_documentation.m"
    }
#line 429 "xml_documentation.m"
    {
#line 429 "xml_documentation.m"
      check_hlds__xml_documentation__Xml0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 429 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_18, 0) = ((MR_Box) ((MR_String) "ctor_arg"));
#line 429 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 429 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_18, 2) = ((MR_Box) (check_hlds__xml_documentation__V_37_37));
#line 429 "xml_documentation.m"
    }
#line 430 "xml_documentation.m"
    {
#line 430 "xml_documentation.m"
      return check_hlds__xml_documentation__Xml_8 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_5, check_hlds__xml_documentation__Context_12, check_hlds__xml_documentation__Xml0_18);
    }
#line 417 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_8;
#line 417 "xml_documentation.m"
  }
#line 415 "xml_documentation.m"
}

#line 409 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_3(
#line 409 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 409 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 409 "xml_documentation.m"
{
#line 409 "xml_documentation.m"
  {
#line 409 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 409 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 409 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_Xml_7;

#line 409 "xml_documentation.m"
    {
#line 409 "xml_documentation.m"
      check_hlds__xml_documentation__conv2_Xml_7 = check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 409 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_7));
#line 409 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 409 "xml_documentation.m"
  }
#line 409 "xml_documentation.m"
}

#line 406 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_2(
#line 406 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 406 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 406 "xml_documentation.m"
{
#line 406 "xml_documentation.m"
  {
#line 406 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 406 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 406 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_Xml_6;

#line 406 "xml_documentation.m"
    {
#line 406 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 406 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_Xml_6));
#line 406 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 406 "xml_documentation.m"
  }
#line 406 "xml_documentation.m"
}

#line 405 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_1(
#line 405 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 405 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 405 "xml_documentation.m"
{
#line 405 "xml_documentation.m"
  {
#line 405 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 405 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 405 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_8;

#line 405 "xml_documentation.m"
    {
#line 405 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_8 = check_hlds__xml_documentation__constructor_arg_to_xml_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 405 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_8));
#line 405 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 405 "xml_documentation.m"
  }
#line 405 "xml_documentation.m"
}

#line 398 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0(
#line 398 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 398 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_6,
#line 398 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 398 "xml_documentation.m"
{
#line 401 "xml_documentation.m"
  {
#line 401 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_12;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Exists_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Constraints_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 2)));
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 3)));
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 4)));
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Id_13;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlName_14;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlContext_15;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlArgs_16;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlExistVars_17;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlConstraints_18;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml0_19;
#line 401 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_21_21;
#line 401 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_23_23;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_25_25;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_27_27;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_29_29;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_31_31;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_33_33;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_34_34;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_35_35;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_36_36;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_37_37;
#line 401 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_51_51;
#line 401 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_52_52;
#line 401 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_54_54;
#line 401 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_57_57;
#line 401 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_59_59;
#line 401 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__FileName_60;
#line 401 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__LineNumber_61;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_64_64;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_65_65;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_67_67;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_68_68;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_74_74;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_75_75;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_80_80;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_81_81;
#line 401 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_82_82;
#line 401 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_88_88;

#line 402 "xml_documentation.m"
    {
#line 402 "xml_documentation.m"
      check_hlds__xml_documentation__V_23_23 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__xml_documentation__Args_10);
    }
#line 835 "xml_documentation.m"
    {
#line 835 "xml_documentation.m"
      check_hlds__xml_documentation__V_59_59 = mdbcomp__prim_data__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Name_9);
    }
#line 835 "xml_documentation.m"
    {
#line 835 "xml_documentation.m"
      check_hlds__xml_documentation__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_59_59);
    }
#line 835 "xml_documentation.m"
    {
#line 835 "xml_documentation.m"
      check_hlds__xml_documentation__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "ctor", check_hlds__xml_documentation__V_57_57);
    }
#line 831 "xml_documentation.m"
    {
#line 831 "xml_documentation.m"
      check_hlds__xml_documentation__V_54_54 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__V_23_23);
    }
#line 831 "xml_documentation.m"
    {
#line 831 "xml_documentation.m"
      check_hlds__xml_documentation__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_54_54);
    }
#line 830 "xml_documentation.m"
    {
#line 830 "xml_documentation.m"
      check_hlds__xml_documentation__V_21_21 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_51_51, check_hlds__xml_documentation__V_52_52);
    }
#line 402 "xml_documentation.m"
    {
#line 402 "xml_documentation.m"
      check_hlds__xml_documentation__Id_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 402 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_13, 0) = ((MR_Box) ((MR_String) "id"));
#line 402 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_13, 1) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 402 "xml_documentation.m"
    }
#line 403 "xml_documentation.m"
    {
#line 403 "xml_documentation.m"
      check_hlds__xml_documentation__XmlName_14 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_9);
    }
#line 783 "xml_documentation.m"
    check_hlds__xml_documentation__FileName_60 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_11, (MR_Integer) 0)));
#line 783 "xml_documentation.m"
    check_hlds__xml_documentation__LineNumber_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_11, (MR_Integer) 1)));
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_75_75, 0) = ((MR_Box) (check_hlds__xml_documentation__FileName_60));
#line 854 "xml_documentation.m"
    }
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_74_74, 0) = ((MR_Box) (check_hlds__xml_documentation__V_75_75));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
    }
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_65_65, 0) = ((MR_Box) ((MR_String) "filename"));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_65_65, 2) = ((MR_Box) (check_hlds__xml_documentation__V_74_74));
#line 854 "xml_documentation.m"
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_82_82 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__LineNumber_61);
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_81_81, 0) = ((MR_Box) (check_hlds__xml_documentation__V_82_82));
#line 842 "xml_documentation.m"
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_80_80, 0) = ((MR_Box) (check_hlds__xml_documentation__V_81_81));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "xml_documentation.m"
    }
#line 842 "xml_documentation.m"
    {
#line 842 "xml_documentation.m"
      check_hlds__xml_documentation__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_68_68, 0) = ((MR_Box) ((MR_String) "line"));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_68_68, 2) = ((MR_Box) (check_hlds__xml_documentation__V_80_80));
#line 842 "xml_documentation.m"
    }
#line 785 "xml_documentation.m"
    {
#line 785 "xml_documentation.m"
      check_hlds__xml_documentation__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_67_67, 0) = ((MR_Box) (check_hlds__xml_documentation__V_68_68));
#line 785 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "xml_documentation.m"
    }
#line 784 "xml_documentation.m"
    {
#line 784 "xml_documentation.m"
      check_hlds__xml_documentation__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_64_64, 0) = ((MR_Box) (check_hlds__xml_documentation__V_65_65));
#line 784 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_64_64, 1) = ((MR_Box) (check_hlds__xml_documentation__V_67_67));
#line 784 "xml_documentation.m"
    }
#line 783 "xml_documentation.m"
    {
#line 783 "xml_documentation.m"
      check_hlds__xml_documentation__XmlContext_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 783 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_15, 0) = ((MR_Box) ((MR_String) "context"));
#line 783 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 783 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_15, 2) = ((MR_Box) (check_hlds__xml_documentation__V_64_64));
#line 783 "xml_documentation.m"
    }
#line 405 "xml_documentation.m"
    {
#line 405 "xml_documentation.m"
      check_hlds__xml_documentation__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 405 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_25_25, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[1]));
#line 405 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_25_25, 1) = ((MR_Box) (check_hlds__xml_documentation__constructor_to_xml_3_f_0_1));
#line 405 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 405 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_25_25, 3) = ((MR_Box) (check_hlds__xml_documentation__C_5));
#line 405 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_25_25, 4) = ((MR_Box) (check_hlds__xml_documentation__TVarset_6));
#line 405 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_88_88 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_25_25, check_hlds__xml_documentation__Args_10);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__XmlArgs_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_16, 0) = ((MR_Box) ((MR_String) "ctor_args"));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_16, 2) = ((MR_Box) (check_hlds__xml_documentation__V_88_88));
#line 860 "xml_documentation.m"
    }
#line 406 "xml_documentation.m"
    {
#line 406 "xml_documentation.m"
      check_hlds__xml_documentation__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 406 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_27_27, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[0]));
#line 406 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_27_27, 1) = ((MR_Box) (check_hlds__xml_documentation__constructor_to_xml_3_f_0_2));
#line 406 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 406 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_27_27, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_6));
#line 406 "xml_documentation.m"
    }
#line 406 "xml_documentation.m"
    {
#line 406 "xml_documentation.m"
      check_hlds__xml_documentation__XmlExistVars_17 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0((MR_String) "ctor_exist_vars", check_hlds__xml_documentation__V_27_27, check_hlds__xml_documentation__Exists_7);
    }
#line 409 "xml_documentation.m"
    {
#line 409 "xml_documentation.m"
      check_hlds__xml_documentation__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 409 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[1]));
#line 409 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 1) = ((MR_Box) (check_hlds__xml_documentation__constructor_to_xml_3_f_0_3));
#line 409 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 409 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_6));
#line 409 "xml_documentation.m"
    }
#line 408 "xml_documentation.m"
    {
#line 408 "xml_documentation.m"
      check_hlds__xml_documentation__XmlConstraints_18 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0((MR_String) "ctor_constraints", check_hlds__xml_documentation__V_29_29, check_hlds__xml_documentation__Constraints_8);
    }
#line 411 "xml_documentation.m"
    {
#line 411 "xml_documentation.m"
      check_hlds__xml_documentation__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_31_31, 0) = ((MR_Box) (check_hlds__xml_documentation__Id_13));
#line 411 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "xml_documentation.m"
    }
#line 412 "xml_documentation.m"
    {
#line 412 "xml_documentation.m"
      check_hlds__xml_documentation__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_37_37, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlConstraints_18));
#line 412 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "xml_documentation.m"
    }
#line 412 "xml_documentation.m"
    {
#line 412 "xml_documentation.m"
      check_hlds__xml_documentation__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_36_36, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlExistVars_17));
#line 412 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_36_36, 1) = ((MR_Box) (check_hlds__xml_documentation__V_37_37));
#line 412 "xml_documentation.m"
    }
#line 412 "xml_documentation.m"
    {
#line 412 "xml_documentation.m"
      check_hlds__xml_documentation__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_35_35, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_16));
#line 412 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_35_35, 1) = ((MR_Box) (check_hlds__xml_documentation__V_36_36));
#line 412 "xml_documentation.m"
    }
#line 412 "xml_documentation.m"
    {
#line 412 "xml_documentation.m"
      check_hlds__xml_documentation__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_15));
#line 412 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 1) = ((MR_Box) (check_hlds__xml_documentation__V_35_35));
#line 412 "xml_documentation.m"
    }
#line 411 "xml_documentation.m"
    {
#line 411 "xml_documentation.m"
      check_hlds__xml_documentation__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_33_33, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_14));
#line 411 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_33_33, 1) = ((MR_Box) (check_hlds__xml_documentation__V_34_34));
#line 411 "xml_documentation.m"
    }
#line 411 "xml_documentation.m"
    {
#line 411 "xml_documentation.m"
      check_hlds__xml_documentation__Xml0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 411 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_19, 0) = ((MR_Box) ((MR_String) "constructor"));
#line 411 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_19, 1) = ((MR_Box) (check_hlds__xml_documentation__V_31_31));
#line 411 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_19, 2) = ((MR_Box) (check_hlds__xml_documentation__V_33_33));
#line 411 "xml_documentation.m"
    }
#line 413 "xml_documentation.m"
    {
#line 413 "xml_documentation.m"
      return check_hlds__xml_documentation__Xml_12 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_5, check_hlds__xml_documentation__Context_11, check_hlds__xml_documentation__Xml0_19);
    }
#line 401 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_12;
#line 401 "xml_documentation.m"
  }
#line 398 "xml_documentation.m"
}

#line 390 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0_1(
#line 390 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 390 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 390 "xml_documentation.m"
{
#line 390 "xml_documentation.m"
  {
#line 390 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 390 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 390 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_12;

#line 390 "xml_documentation.m"
    {
#line 390 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_12 = check_hlds__xml_documentation__constructor_to_xml_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 390 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_12));
#line 390 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 390 "xml_documentation.m"
  }
#line 390 "xml_documentation.m"
}

#line 387 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0(
#line 387 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_1,
#line 387 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_2,
#line 387 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 387 "xml_documentation.m"
{
#line 389 "xml_documentation.m"
  {
#line 389 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 389 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;

#line 389 "xml_documentation.m"
    if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 389 "xml_documentation.m"
      {
#line 389 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Ctors_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 389 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_16_16;
#line 389 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_18_18;
#line 389 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_64_64;
#line 389 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
#line 389 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 2)));
#line 389 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 3)));
#line 389 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 4)));
#line 389 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 5)));
#line 389 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 389 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 389 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 7)));

#line 390 "xml_documentation.m"
        {
#line 390 "xml_documentation.m"
          check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 390 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
#line 390 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (check_hlds__xml_documentation__type_body_to_xml_3_f_0_1));
#line 390 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 390 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 3) = ((MR_Box) (check_hlds__xml_documentation__C_1));
#line 390 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 4) = ((MR_Box) (check_hlds__xml_documentation__TVarset_2));
#line 390 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_64_64 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_18_18, check_hlds__xml_documentation__Ctors_7);
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) ((MR_String) "constructors"));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 2) = ((MR_Box) (check_hlds__xml_documentation__V_64_64));
#line 860 "xml_documentation.m"
        }
#line 389 "xml_documentation.m"
        {
#line 389 "xml_documentation.m"
          check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 389 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "xml_documentation.m"
        }
#line 389 "xml_documentation.m"
      }
#line 389 "xml_documentation.m"
    else
#line 389 "xml_documentation.m"
      if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 391 "xml_documentation.m"
        {
#line 391 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 391 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_23_23;
#line 391 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_26_26;
#line 391 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_27_27;

#line 392 "xml_documentation.m"
          {
#line 392 "xml_documentation.m"
            check_hlds__xml_documentation__V_27_27 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_2, check_hlds__xml_documentation__Type_22);
          }
#line 392 "xml_documentation.m"
          {
#line 392 "xml_documentation.m"
            check_hlds__xml_documentation__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 0) = ((MR_Box) (check_hlds__xml_documentation__V_27_27));
#line 392 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "xml_documentation.m"
          }
#line 392 "xml_documentation.m"
          {
#line 392 "xml_documentation.m"
            check_hlds__xml_documentation__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 392 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 0) = ((MR_Box) ((MR_String) "equivalent_type"));
#line 392 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 2) = ((MR_Box) (check_hlds__xml_documentation__V_26_26));
#line 392 "xml_documentation.m"
          }
#line 391 "xml_documentation.m"
          {
#line 391 "xml_documentation.m"
            check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__V_23_23));
#line 391 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "xml_documentation.m"
          }
#line 391 "xml_documentation.m"
        }
#line 389 "xml_documentation.m"
      else
#line 389 "xml_documentation.m"
        if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 394 "xml_documentation.m"
          {
#line 394 "xml_documentation.m"
            check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[4]);
#line 394 "xml_documentation.m"
          }
#line 389 "xml_documentation.m"
        else
#line 389 "xml_documentation.m"
          if (((((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 396 "xml_documentation.m"
            {
#line 396 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5]);
#line 396 "xml_documentation.m"
            }
#line 389 "xml_documentation.m"
          else
#line 395 "xml_documentation.m"
            {
#line 395 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[6]);
#line 395 "xml_documentation.m"
            }
#line 389 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 389 "xml_documentation.m"
  }
#line 387 "xml_documentation.m"
}

#line 381 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__type_param_to_xml_2_f_0(
#line 381 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 381 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVar_5)
#line 381 "xml_documentation.m"
{
#line 383 "xml_documentation.m"
  {
#line 383 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 383 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_6;
#line 383 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__TVarName_7;
#line 383 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_13_13;
#line 383 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_14_14;

#line 384 "xml_documentation.m"
    {
#line 384 "xml_documentation.m"
      check_hlds__xml_documentation__TVarName_7 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__xml_documentation__TVarset_4, check_hlds__xml_documentation__TVar_5);
    }
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_14_14, 0) = ((MR_Box) (check_hlds__xml_documentation__TVarName_7));
#line 854 "xml_documentation.m"
    }
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_13_13, 0) = ((MR_Box) (check_hlds__xml_documentation__V_14_14));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
    }
#line 854 "xml_documentation.m"
    {
#line 854 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "type_variable"));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_13_13));
#line 854 "xml_documentation.m"
    }
#line 383 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_6;
#line 383 "xml_documentation.m"
  }
#line 381 "xml_documentation.m"
}

#line 356 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0_1(
#line 356 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 356 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 356 "xml_documentation.m"
{
#line 356 "xml_documentation.m"
  {
#line 356 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 356 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 356 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 356 "xml_documentation.m"
    {
#line 356 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 356 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 356 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 356 "xml_documentation.m"
  }
#line 356 "xml_documentation.m"
}

#line 342 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0(
#line 342 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 342 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 342 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TypeDefn_9,
#line 342 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25,
#line 342 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26)
#line 342 "xml_documentation.m"
{
#line 345 "xml_documentation.m"
  {
#line 345 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 345 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 345 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__TypeArity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 345 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportStatus_11;
#line 345 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__DefinedInThisModule_12;

#line 346 "xml_documentation.m"
    {
#line 346 "xml_documentation.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__ImportStatus_11);
    }
#line 347 "xml_documentation.m"
    {
#line 347 "xml_documentation.m"
      check_hlds__xml_documentation__DefinedInThisModule_12 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(check_hlds__xml_documentation__ImportStatus_11);
    }
#line 369 "xml_documentation.m"
    if ((check_hlds__xml_documentation__DefinedInThisModule_12 == (MR_Integer) 0))
#line 370 "xml_documentation.m"
      *check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26 = check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25;
#line 369 "xml_documentation.m"
    else
#line 349 "xml_documentation.m"
      {
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__TypeBody_13;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__TVarset_14;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Context_15;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__TParams_16;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlName_17;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlTypeParams_18;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlVisibility_19;
#line 349 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__Tag_20;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Id_21;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Children_22;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Xml0_23;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Xml_24;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_28_28;
#line 349 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_30_30;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_32_32;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_33_33;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_34_34;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_35_35;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_36_36;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_37_37;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_47_47;
#line 349 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__Visibility_51;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_57_57;
#line 349 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_58_58;
#line 349 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_77_77;
#line 349 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_78_78;
#line 349 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_80_80;
#line 349 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_83_83;
#line 349 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_85_85;
#line 804 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_53_53;

#line 350 "xml_documentation.m"
        {
#line 350 "xml_documentation.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__TypeBody_13);
        }
#line 351 "xml_documentation.m"
        {
#line 351 "xml_documentation.m"
          hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__TVarset_14);
        }
#line 352 "xml_documentation.m"
        {
#line 352 "xml_documentation.m"
          hlds__hlds_data__get_type_defn_context_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__Context_15);
        }
#line 353 "xml_documentation.m"
        {
#line 353 "xml_documentation.m"
          hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__TParams_16);
        }
#line 355 "xml_documentation.m"
        {
#line 355 "xml_documentation.m"
          check_hlds__xml_documentation__XmlName_17 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__TypeName_7);
        }
#line 356 "xml_documentation.m"
        {
#line 356 "xml_documentation.m"
          check_hlds__xml_documentation__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 356 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[0]));
#line 356 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 1) = ((MR_Box) (check_hlds__xml_documentation__type_documentation_5_p_0_1));
#line 356 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 356 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_14));
#line 356 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_47_47 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_28_28, check_hlds__xml_documentation__TParams_16);
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__XmlTypeParams_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypeParams_18, 0) = ((MR_Box) ((MR_String) "type_params"));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypeParams_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypeParams_18, 2) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 860 "xml_documentation.m"
        }
#line 804 "xml_documentation.m"
        {
#line 804 "xml_documentation.m"
          check_hlds__xml_documentation__V_53_53 = hlds__hlds_pred__status_defined_in_impl_section_1_f_0(check_hlds__xml_documentation__ImportStatus_11);
        }
#line 804 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_53_53 == (MR_Integer) 1);
#line 810 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 807 "xml_documentation.m"
          {
#line 805 "xml_documentation.m"
            check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__ImportStatus_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 807 "xml_documentation.m"
            if (check_hlds__xml_documentation__succeeded)
#line 806 "xml_documentation.m"
              check_hlds__xml_documentation__Visibility_51 = (MR_String) "abstract";
#line 807 "xml_documentation.m"
            else
#line 808 "xml_documentation.m"
              check_hlds__xml_documentation__Visibility_51 = (MR_String) "implementation";
#line 807 "xml_documentation.m"
          }
#line 810 "xml_documentation.m"
        else
#line 811 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_51 = (MR_String) "interface";
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_58_58, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_51));
#line 854 "xml_documentation.m"
        }
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_57_57, 0) = ((MR_Box) (check_hlds__xml_documentation__V_58_58));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
        }
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__XmlVisibility_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_19, 0) = ((MR_Box) ((MR_String) "visibility"));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_19, 2) = ((MR_Box) (check_hlds__xml_documentation__V_57_57));
#line 854 "xml_documentation.m"
        }
#line 375 "xml_documentation.m"
        if (((MR_tag((MR_Word) check_hlds__xml_documentation__TypeBody_13)) == (MR_mktag((MR_Integer) 1))))
#line 375 "xml_documentation.m"
          check_hlds__xml_documentation__Tag_20 = (MR_String) "du_type";
#line 375 "xml_documentation.m"
        else
#line 375 "xml_documentation.m"
          if (((MR_tag((MR_Word) check_hlds__xml_documentation__TypeBody_13)) == (MR_mktag((MR_Integer) 2))))
#line 376 "xml_documentation.m"
            check_hlds__xml_documentation__Tag_20 = (MR_String) "eqv_type";
#line 375 "xml_documentation.m"
          else
#line 375 "xml_documentation.m"
            if (((MR_tag((MR_Word) check_hlds__xml_documentation__TypeBody_13)) == (MR_mktag((MR_Integer) 0))))
#line 377 "xml_documentation.m"
              check_hlds__xml_documentation__Tag_20 = (MR_String) "foreign_type";
#line 375 "xml_documentation.m"
            else
#line 375 "xml_documentation.m"
              if (((((MR_tag((MR_Word) check_hlds__xml_documentation__TypeBody_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__TypeBody_13, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 379 "xml_documentation.m"
                check_hlds__xml_documentation__Tag_20 = (MR_String) "abstract_type";
#line 375 "xml_documentation.m"
              else
#line 378 "xml_documentation.m"
                check_hlds__xml_documentation__Tag_20 = (MR_String) "solver_type";
#line 835 "xml_documentation.m"
        {
#line 835 "xml_documentation.m"
          check_hlds__xml_documentation__V_85_85 = mdbcomp__prim_data__sym_name_to_string_1_f_0(check_hlds__xml_documentation__TypeName_7);
        }
#line 835 "xml_documentation.m"
        {
#line 835 "xml_documentation.m"
          check_hlds__xml_documentation__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_85_85);
        }
#line 835 "xml_documentation.m"
        {
#line 835 "xml_documentation.m"
          check_hlds__xml_documentation__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) "type", check_hlds__xml_documentation__V_83_83);
        }
#line 831 "xml_documentation.m"
        {
#line 831 "xml_documentation.m"
          check_hlds__xml_documentation__V_80_80 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__TypeArity_8);
        }
#line 831 "xml_documentation.m"
        {
#line 831 "xml_documentation.m"
          check_hlds__xml_documentation__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_80_80);
        }
#line 830 "xml_documentation.m"
        {
#line 830 "xml_documentation.m"
          check_hlds__xml_documentation__V_30_30 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_77_77, check_hlds__xml_documentation__V_78_78);
        }
#line 361 "xml_documentation.m"
        {
#line 361 "xml_documentation.m"
          check_hlds__xml_documentation__Id_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 361 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_21, 0) = ((MR_Box) ((MR_String) "id"));
#line 361 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_21, 1) = ((MR_Box) (check_hlds__xml_documentation__V_30_30));
#line 361 "xml_documentation.m"
        }
#line 363 "xml_documentation.m"
        {
#line 363 "xml_documentation.m"
          check_hlds__xml_documentation__V_35_35 = check_hlds__xml_documentation__prog_context_to_xml_1_f_0(check_hlds__xml_documentation__Context_15);
        }
#line 363 "xml_documentation.m"
        {
#line 363 "xml_documentation.m"
          check_hlds__xml_documentation__V_36_36 = check_hlds__xml_documentation__type_body_to_xml_3_f_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__TVarset_14, check_hlds__xml_documentation__TypeBody_13);
        }
#line 362 "xml_documentation.m"
        {
#line 362 "xml_documentation.m"
          check_hlds__xml_documentation__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 0) = ((MR_Box) (check_hlds__xml_documentation__V_35_35));
#line 362 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 1) = ((MR_Box) (check_hlds__xml_documentation__V_36_36));
#line 362 "xml_documentation.m"
        }
#line 362 "xml_documentation.m"
        {
#line 362 "xml_documentation.m"
          check_hlds__xml_documentation__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_33_33, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_19));
#line 362 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_33_33, 1) = ((MR_Box) (check_hlds__xml_documentation__V_34_34));
#line 362 "xml_documentation.m"
        }
#line 362 "xml_documentation.m"
        {
#line 362 "xml_documentation.m"
          check_hlds__xml_documentation__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypeParams_18));
#line 362 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 1) = ((MR_Box) (check_hlds__xml_documentation__V_33_33));
#line 362 "xml_documentation.m"
        }
#line 362 "xml_documentation.m"
        {
#line 362 "xml_documentation.m"
          check_hlds__xml_documentation__Children_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_22, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_17));
#line 362 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_22, 1) = ((MR_Box) (check_hlds__xml_documentation__V_32_32));
#line 362 "xml_documentation.m"
        }
#line 365 "xml_documentation.m"
        {
#line 365 "xml_documentation.m"
          check_hlds__xml_documentation__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_37_37, 0) = ((MR_Box) (check_hlds__xml_documentation__Id_21));
#line 365 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "xml_documentation.m"
        }
#line 365 "xml_documentation.m"
        {
#line 365 "xml_documentation.m"
          check_hlds__xml_documentation__Xml0_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 365 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_23, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_20));
#line 365 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_23, 1) = ((MR_Box) (check_hlds__xml_documentation__V_37_37));
#line 365 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_23, 2) = ((MR_Box) (check_hlds__xml_documentation__Children_22));
#line 365 "xml_documentation.m"
        }
#line 366 "xml_documentation.m"
        {
#line 366 "xml_documentation.m"
          check_hlds__xml_documentation__Xml_24 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__Context_15, check_hlds__xml_documentation__Xml0_23);
        }
#line 368 "xml_documentation.m"
        {
#line 368 "xml_documentation.m"
          MR_Word base;
#line 368 "xml_documentation.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "xml_documentation.m"
          *check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26 = base;
#line 368 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_24));
#line 368 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25));
#line 368 "xml_documentation.m"
        }
#line 349 "xml_documentation.m"
      }
#line 345 "xml_documentation.m"
  }
#line 342 "xml_documentation.m"
}

#line 324 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__import_documentation_4_p_0(
#line 324 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InterfaceImportedModules_5,
#line 324 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ImportedModule_6,
#line 324 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_11,
#line 324 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_12)
#line 324 "xml_documentation.m"
{
#line 327 "xml_documentation.m"
  {
#line 327 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 327 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlName_8;
#line 327 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlVisibility_9;
#line 327 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_10;
#line 327 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;
#line 327 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_18_18;

#line 328 "xml_documentation.m"
    {
#line 328 "xml_documentation.m"
      check_hlds__xml_documentation__XmlName_8 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__ImportedModule_6);
    }
#line 329 "xml_documentation.m"
    {
#line 329 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, ((MR_Box) (check_hlds__xml_documentation__ImportedModule_6)), check_hlds__xml_documentation__InterfaceImportedModules_5);
    }
#line 331 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 330 "xml_documentation.m"
      {
#line 330 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__Visibility_23;
#line 330 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_29_29;
#line 330 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_30_30;
#line 804 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_25_25;

#line 804 "xml_documentation.m"
        {
#line 804 "xml_documentation.m"
          check_hlds__xml_documentation__V_25_25 = hlds__hlds_pred__status_defined_in_impl_section_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
        }
#line 804 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_25_25 == (MR_Integer) 1);
#line 810 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 808 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_23 = (MR_String) "implementation";
#line 810 "xml_documentation.m"
        else
#line 811 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_23 = (MR_String) "interface";
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_30_30, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_23));
#line 854 "xml_documentation.m"
        }
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_29_29, 0) = ((MR_Box) (check_hlds__xml_documentation__V_30_30));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
        }
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__XmlVisibility_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_9, 0) = ((MR_Box) ((MR_String) "visibility"));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_29_29));
#line 854 "xml_documentation.m"
        }
#line 330 "xml_documentation.m"
      }
#line 331 "xml_documentation.m"
    else
#line 332 "xml_documentation.m"
      {
#line 332 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__Visibility_33;
#line 332 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_39_39;
#line 332 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_40_40;
#line 804 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_35_35;

#line 804 "xml_documentation.m"
        {
#line 804 "xml_documentation.m"
          check_hlds__xml_documentation__V_35_35 = hlds__hlds_pred__status_defined_in_impl_section_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)));
        }
#line 804 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_35_35 == (MR_Integer) 1);
#line 810 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 808 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_33 = (MR_String) "implementation";
#line 810 "xml_documentation.m"
        else
#line 811 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_33 = (MR_String) "interface";
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_33));
#line 854 "xml_documentation.m"
        }
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_39_39, 0) = ((MR_Box) (check_hlds__xml_documentation__V_40_40));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
        }
#line 854 "xml_documentation.m"
        {
#line 854 "xml_documentation.m"
          check_hlds__xml_documentation__XmlVisibility_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_9, 0) = ((MR_Box) ((MR_String) "visibility"));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_39_39));
#line 854 "xml_documentation.m"
        }
#line 332 "xml_documentation.m"
      }
#line 334 "xml_documentation.m"
    {
#line 334 "xml_documentation.m"
      check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_9));
#line 334 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 334 "xml_documentation.m"
    }
#line 334 "xml_documentation.m"
    {
#line 334 "xml_documentation.m"
      check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_8));
#line 334 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 1) = ((MR_Box) (check_hlds__xml_documentation__V_18_18));
#line 334 "xml_documentation.m"
    }
#line 334 "xml_documentation.m"
    {
#line 334 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 334 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_10, 0) = ((MR_Box) ((MR_String) "import"));
#line 334 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 334 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_10, 2) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 334 "xml_documentation.m"
    }
#line 335 "xml_documentation.m"
    {
#line 335 "xml_documentation.m"
      MR_Word base;
#line 335 "xml_documentation.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "xml_documentation.m"
      *check_hlds__xml_documentation__STATE_VARIABLE_Xmls_12 = base;
#line 335 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_10));
#line 335 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_11));
#line 335 "xml_documentation.m"
    }
#line 327 "xml_documentation.m"
  }
#line 324 "xml_documentation.m"
}

#line 261 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_backwards_2_f_0(
#line 261 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_4,
#line 261 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Line_5)
#line 261 "xml_documentation.m"
{
#line 276 "xml_documentation.m"
  {
#line 276 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 276 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Comment_6;
#line 276 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__LineType_7;
#line 264 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11 = (MR_Word) check_hlds__xml_documentation__Comments_4;
#line 264 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv0_LineType_7;

#line 264 "xml_documentation.m"
    {
#line 264 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__Line_5, &check_hlds__xml_documentation__conv0_LineType_7);
    }
#line 264 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 264 "xml_documentation.m"
      {
#line 264 "xml_documentation.m"
        check_hlds__xml_documentation__LineType_7 = ((MR_Word) check_hlds__xml_documentation__conv0_LineType_7);
#line 264 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 264 "xml_documentation.m"
      }
#line 276 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 269 "xml_documentation.m"
      if (((MR_tag((MR_Word) check_hlds__xml_documentation__LineType_7)) == (MR_mktag((MR_Integer) 1))))
#line 266 "xml_documentation.m"
        {
#line 266 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__CurrentComment_8 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__LineType_7, (MR_Integer) 0)));
#line 266 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__CommentAbove_9;
#line 266 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__V_12_12 = (check_hlds__xml_documentation__Line_5 - (MR_Integer) 1);

#line 267 "xml_documentation.m"
          {
#line 267 "xml_documentation.m"
            check_hlds__xml_documentation__CommentAbove_9 = check_hlds__xml_documentation__get_comment_backwards_2_f_0(check_hlds__xml_documentation__Comments_4, check_hlds__xml_documentation__V_12_12);
          }
#line 268 "xml_documentation.m"
          {
#line 268 "xml_documentation.m"
            return check_hlds__xml_documentation__Comment_6 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__CommentAbove_9, check_hlds__xml_documentation__CurrentComment_8);
          }
#line 266 "xml_documentation.m"
        }
#line 269 "xml_documentation.m"
      else
#line 274 "xml_documentation.m"
        check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 276 "xml_documentation.m"
    else
#line 277 "xml_documentation.m"
      check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 276 "xml_documentation.m"
    return check_hlds__xml_documentation__Comment_6;
#line 276 "xml_documentation.m"
  }
#line 261 "xml_documentation.m"
}

#line 238 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_forwards_2_f_0(
#line 238 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_4,
#line 238 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Line_5)
#line 238 "xml_documentation.m"
{
#line 253 "xml_documentation.m"
  {
#line 253 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 253 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Comment_6;
#line 253 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__LineType_7;
#line 241 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11 = (MR_Word) check_hlds__xml_documentation__Comments_4;
#line 241 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv0_LineType_7;

#line 241 "xml_documentation.m"
    {
#line 241 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__Line_5, &check_hlds__xml_documentation__conv0_LineType_7);
    }
#line 241 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 241 "xml_documentation.m"
      {
#line 241 "xml_documentation.m"
        check_hlds__xml_documentation__LineType_7 = ((MR_Word) check_hlds__xml_documentation__conv0_LineType_7);
#line 241 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 241 "xml_documentation.m"
      }
#line 253 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 246 "xml_documentation.m"
      if (((MR_tag((MR_Word) check_hlds__xml_documentation__LineType_7)) == (MR_mktag((MR_Integer) 1))))
#line 243 "xml_documentation.m"
        {
#line 243 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__CurrentComment_8 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__LineType_7, (MR_Integer) 0)));
#line 243 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__CommentBelow_9;
#line 243 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__V_12_12 = (check_hlds__xml_documentation__Line_5 + (MR_Integer) 1);

#line 244 "xml_documentation.m"
          {
#line 244 "xml_documentation.m"
            check_hlds__xml_documentation__CommentBelow_9 = check_hlds__xml_documentation__get_comment_forwards_2_f_0(check_hlds__xml_documentation__Comments_4, check_hlds__xml_documentation__V_12_12);
          }
#line 245 "xml_documentation.m"
          {
#line 245 "xml_documentation.m"
            return check_hlds__xml_documentation__Comment_6 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__CurrentComment_8, check_hlds__xml_documentation__CommentBelow_9);
          }
#line 243 "xml_documentation.m"
        }
#line 246 "xml_documentation.m"
      else
#line 251 "xml_documentation.m"
        check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 253 "xml_documentation.m"
    else
#line 254 "xml_documentation.m"
      check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 253 "xml_documentation.m"
    return check_hlds__xml_documentation__Comment_6;
#line 253 "xml_documentation.m"
  }
#line 238 "xml_documentation.m"
}

#line 182 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__maybe_add_comment_3_f_0(
#line 182 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_5,
#line 182 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Context_6,
#line 182 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Xml_7)
#line 182 "xml_documentation.m"
{
#line 184 "xml_documentation.m"
  {
#line 184 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__Xml_7)) == (MR_mktag((MR_Integer) 0)));
#line 184 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 184 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__N_8;
#line 184 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__As_9;
#line 184 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Cs_10;

#line 185 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 185 "xml_documentation.m"
      {
#line 185 "xml_documentation.m"
        check_hlds__xml_documentation__N_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, (MR_Integer) 0)));
#line 185 "xml_documentation.m"
        check_hlds__xml_documentation__As_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, (MR_Integer) 1)));
#line 185 "xml_documentation.m"
        check_hlds__xml_documentation__Cs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, (MR_Integer) 2)));
#line 184 "xml_documentation.m"
        {
#line 184 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__Comment_11;
#line 186 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__Line_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_6, (MR_Integer) 1)));
#line 199 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_6, (MR_Integer) 0)));
#line 199 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__C_26;
#line 219 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__Comment0_31;
#line 219 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__RestComment_32;
#line 219 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_33_33 = (MR_Word) check_hlds__xml_documentation__Comments_5;
#line 219 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_34_34;
#line 219 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__V_35_35;
#line 219 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__V_36_36;
#line 220 "xml_documentation.m"
          MR_Box check_hlds__xml_documentation__conv0_V_34_34;

#line 220 "xml_documentation.m"
          {
#line 220 "xml_documentation.m"
            check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__V_33_33, check_hlds__xml_documentation__Line_25, &check_hlds__xml_documentation__conv0_V_34_34);
          }
#line 220 "xml_documentation.m"
          if (check_hlds__xml_documentation__succeeded)
#line 220 "xml_documentation.m"
            {
#line 220 "xml_documentation.m"
              check_hlds__xml_documentation__V_34_34 = ((MR_Word) check_hlds__xml_documentation__conv0_V_34_34);
#line 220 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 220 "xml_documentation.m"
            }
#line 219 "xml_documentation.m"
          if (check_hlds__xml_documentation__succeeded)
#line 219 "xml_documentation.m"
            {
#line 220 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__V_34_34)) == (MR_mktag((MR_Integer) 2)));
#line 220 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 220 "xml_documentation.m"
                {
#line 220 "xml_documentation.m"
                  check_hlds__xml_documentation__Comment0_31 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__V_34_34, (MR_Integer) 0)));
#line 221 "xml_documentation.m"
                  check_hlds__xml_documentation__V_36_36 = (MR_Integer) 1;
#line 221 "xml_documentation.m"
                  check_hlds__xml_documentation__V_35_35 = (check_hlds__xml_documentation__Line_25 + check_hlds__xml_documentation__V_36_36);
#line 221 "xml_documentation.m"
                  {
#line 221 "xml_documentation.m"
                    check_hlds__xml_documentation__RestComment_32 = check_hlds__xml_documentation__get_comment_forwards_2_f_0(check_hlds__xml_documentation__Comments_5, check_hlds__xml_documentation__V_35_35);
                  }
#line 222 "xml_documentation.m"
                  {
#line 222 "xml_documentation.m"
                    check_hlds__xml_documentation__C_26 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Comment0_31, check_hlds__xml_documentation__RestComment_32);
                  }
#line 222 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 220 "xml_documentation.m"
                }
#line 219 "xml_documentation.m"
            }
#line 199 "xml_documentation.m"
          if (check_hlds__xml_documentation__succeeded)
#line 199 "xml_documentation.m"
            {
#line 199 "xml_documentation.m"
              check_hlds__xml_documentation__Comment_11 = check_hlds__xml_documentation__C_26;
#line 186 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__Comment_11, (MR_String) "") == 0);
#line 186 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 199 "xml_documentation.m"
            }
#line 199 "xml_documentation.m"
          else
#line 199 "xml_documentation.m"
            {
#line 199 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__C_27;
#line 230 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_43_43 = (MR_Word) check_hlds__xml_documentation__Comments_5;
#line 230 "xml_documentation.m"
              MR_Integer check_hlds__xml_documentation__V_44_44 = (check_hlds__xml_documentation__Line_25 - (MR_Integer) 1);
#line 230 "xml_documentation.m"
              MR_Integer check_hlds__xml_documentation__V_47_47;
#line 230 "xml_documentation.m"
              MR_Integer check_hlds__xml_documentation__V_48_48;
#line 230 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_51_51;
#line 231 "xml_documentation.m"
              MR_Box check_hlds__xml_documentation__conv1_V_51_51;
#line 231 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_55_55;

#line 231 "xml_documentation.m"
              {
#line 231 "xml_documentation.m"
                check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__V_43_43, check_hlds__xml_documentation__V_44_44, &check_hlds__xml_documentation__conv1_V_51_51);
              }
#line 231 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 231 "xml_documentation.m"
                {
#line 231 "xml_documentation.m"
                  check_hlds__xml_documentation__V_51_51 = ((MR_Word) check_hlds__xml_documentation__conv1_V_51_51);
#line 231 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 231 "xml_documentation.m"
                }
#line 230 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 230 "xml_documentation.m"
                {
#line 231 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 231 "xml_documentation.m"
                  if (check_hlds__xml_documentation__succeeded)
#line 231 "xml_documentation.m"
                    {
#line 231 "xml_documentation.m"
                      check_hlds__xml_documentation__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_51_51, (MR_Integer) 0)));
#line 232 "xml_documentation.m"
                      check_hlds__xml_documentation__V_48_48 = (MR_Integer) 1;
#line 232 "xml_documentation.m"
                      check_hlds__xml_documentation__V_47_47 = (check_hlds__xml_documentation__Line_25 - check_hlds__xml_documentation__V_48_48);
#line 232 "xml_documentation.m"
                      {
#line 232 "xml_documentation.m"
                        check_hlds__xml_documentation__C_27 = check_hlds__xml_documentation__get_comment_backwards_2_f_0(check_hlds__xml_documentation__Comments_5, check_hlds__xml_documentation__V_47_47);
                      }
#line 232 "xml_documentation.m"
                      check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 231 "xml_documentation.m"
                    }
#line 230 "xml_documentation.m"
                }
#line 199 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 199 "xml_documentation.m"
                {
#line 199 "xml_documentation.m"
                  check_hlds__xml_documentation__Comment_11 = check_hlds__xml_documentation__C_27;
#line 186 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__Comment_11, (MR_String) "") == 0);
#line 186 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 199 "xml_documentation.m"
                }
#line 199 "xml_documentation.m"
              else
#line 199 "xml_documentation.m"
                {
#line 186 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = (strcmp((MR_String) "", (MR_String) "") == 0);
#line 186 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 199 "xml_documentation.m"
                  if (check_hlds__xml_documentation__succeeded)
#line 199 "xml_documentation.m"
                    {
#line 199 "xml_documentation.m"
                      check_hlds__xml_documentation__Comment_11 = (MR_String) "";
#line 199 "xml_documentation.m"
                      check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 199 "xml_documentation.m"
                    }
#line 199 "xml_documentation.m"
                }
#line 199 "xml_documentation.m"
            }
#line 184 "xml_documentation.m"
          if (check_hlds__xml_documentation__succeeded)
#line 187 "xml_documentation.m"
            {
#line 187 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_12_12;
#line 187 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_13_13;
#line 187 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_16_16;
#line 187 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_17_17;

#line 187 "xml_documentation.m"
              {
#line 187 "xml_documentation.m"
                check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 187 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__Comment_11));
#line 187 "xml_documentation.m"
              }
#line 187 "xml_documentation.m"
              {
#line 187 "xml_documentation.m"
                check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 187 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "xml_documentation.m"
              }
#line 187 "xml_documentation.m"
              {
#line 187 "xml_documentation.m"
                check_hlds__xml_documentation__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 187 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_13_13, 0) = ((MR_Box) ((MR_String) "comment"));
#line 187 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_13_13, 2) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 187 "xml_documentation.m"
              }
#line 187 "xml_documentation.m"
              {
#line 187 "xml_documentation.m"
                check_hlds__xml_documentation__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_12_12, 0) = ((MR_Box) (check_hlds__xml_documentation__V_13_13));
#line 187 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_12_12, 1) = ((MR_Box) (check_hlds__xml_documentation__Cs_10));
#line 187 "xml_documentation.m"
              }
#line 184 "xml_documentation.m"
              {
#line 184 "xml_documentation.m"
                check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 184 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__N_8));
#line 184 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (check_hlds__xml_documentation__As_9));
#line 184 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_12_12));
#line 184 "xml_documentation.m"
              }
#line 187 "xml_documentation.m"
            }
#line 184 "xml_documentation.m"
          else
#line 184 "xml_documentation.m"
            check_hlds__xml_documentation__HeadVar__4_4 = check_hlds__xml_documentation__Xml_7;
#line 184 "xml_documentation.m"
        }
#line 185 "xml_documentation.m"
      }
#line 185 "xml_documentation.m"
    else
#line 192 "xml_documentation.m"
      {
#line 184 "xml_documentation.m"
        MR_Box check_hlds__xml_documentation__conv2_HeadVar__4_4;

#line 184 "xml_documentation.m"
        {
#line 184 "xml_documentation.m"
          check_hlds__xml_documentation__conv2_HeadVar__4_4 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, (MR_String) "check_hlds.xml_documentation", (MR_String) "function \140check_hlds.xml_documentation.maybe_add_comment\'/3", (MR_String) "not an element");
        }
#line 184 "xml_documentation.m"
        check_hlds__xml_documentation__HeadVar__4_4 = ((MR_Word) check_hlds__xml_documentation__conv2_HeadVar__4_4);
#line 192 "xml_documentation.m"
      }
#line 184 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 184 "xml_documentation.m"
  }
#line 182 "xml_documentation.m"
}

#line 169 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__is_not_comment_char_1_p_0(
#line 169 "xml_documentation.m"
  MR_Char check_hlds__xml_documentation__C_2)
#line 169 "xml_documentation.m"
{
#line 172 "xml_documentation.m"
  {
#line 172 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__C_2 == (MR_Char) 37);

#line 172 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 172 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 172 "xml_documentation.m"
  }
#line 169 "xml_documentation.m"
}

#line 148 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_2(
#line 148 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 148 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 148 "xml_documentation.m"
{
#line 148 "xml_documentation.m"
  {
#line 148 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 148 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;

#line 148 "xml_documentation.m"
    {
#line 148 "xml_documentation.m"
      return check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation__is_not_comment_char_1_p_0(((MR_Char) (MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 148 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 148 "xml_documentation.m"
  }
#line 148 "xml_documentation.m"
}

#line 147 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_1(
#line 147 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 147 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 147 "xml_documentation.m"
{
#line 147 "xml_documentation.m"
  {
#line 147 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 147 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;

#line 147 "xml_documentation.m"
    {
#line 147 "xml_documentation.m"
      return check_hlds__xml_documentation__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 147 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 147 "xml_documentation.m"
  }
#line 147 "xml_documentation.m"
}

#line 119 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0(
#line 119 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__S_6,
#line 119 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 119 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__3_3)
#line 119 "xml_documentation.m"
{
#line 122 "xml_documentation.m"
  {
#line 122 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 122 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__LineNumber_9;
#line 122 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__LineResult_10;
#line 122 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__STATE_VARIABLE_C_0_13 = (MR_Word) check_hlds__xml_documentation__HeadVar__2_2;
#line 122 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__STATE_VARIABLE_C_14;

#line 123 "xml_documentation.m"
    {
#line 123 "xml_documentation.m"
      mercury__io__get_line_number_4_p_0(check_hlds__xml_documentation__S_6, &check_hlds__xml_documentation__LineNumber_9);
    }
#line 124 "xml_documentation.m"
    {
#line 124 "xml_documentation.m"
      mercury__io__read_line_4_p_0(check_hlds__xml_documentation__S_6, &check_hlds__xml_documentation__LineResult_10);
    }
#line 129 "xml_documentation.m"
    if ((check_hlds__xml_documentation__LineResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "xml_documentation.m"
      check_hlds__xml_documentation__STATE_VARIABLE_C_14 = check_hlds__xml_documentation__STATE_VARIABLE_C_0_13;
#line 129 "xml_documentation.m"
    else
#line 129 "xml_documentation.m"
      if (((MR_tag((MR_Word) check_hlds__xml_documentation__LineResult_10)) == (MR_mktag((MR_Integer) 2))))
#line 132 "xml_documentation.m"
        {
#line 132 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__E_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__LineResult_10, (MR_Integer) 0)));
#line 132 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_21_21;

#line 134 "xml_documentation.m"
          {
#line 134 "xml_documentation.m"
            check_hlds__xml_documentation__V_21_21 = mercury__io__error_message_1_f_0(check_hlds__xml_documentation__E_12);
          }
#line 134 "xml_documentation.m"
          {
#line 134 "xml_documentation.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.xml_documentation", (MR_String) "predicate \140check_hlds.xml_documentation.build_comments\'/5", check_hlds__xml_documentation__V_21_21);
#line 134 "xml_documentation.m"
            return;
          }
#line 132 "xml_documentation.m"
        }
#line 129 "xml_documentation.m"
      else
#line 126 "xml_documentation.m"
        {
#line 126 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TypeCtorInfo_20_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 126 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Line_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__LineResult_10, (MR_Integer) 0)));
#line 126 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_22_22;
#line 126 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__STATE_VARIABLE_C_23_23;
#line 126 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_24_24;
#line 126 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_25_25;
#line 126 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Rest_33;
#line 126 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Decl_34;
#line 126 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Comment_35;
#line 147 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation___WhiteSpace_32;

#line 147 "xml_documentation.m"
          {
#line 147 "xml_documentation.m"
            mercury__list__takewhile_4_p_0(check_hlds__xml_documentation__TypeCtorInfo_20_47, (MR_Word) &check_hlds__xml_documentation_scalar_common_2[2], check_hlds__xml_documentation__Line_11, &check_hlds__xml_documentation___WhiteSpace_32, &check_hlds__xml_documentation__Rest_33);
          }
#line 148 "xml_documentation.m"
          {
#line 148 "xml_documentation.m"
            mercury__list__takewhile_4_p_0(check_hlds__xml_documentation__TypeCtorInfo_20_47, (MR_Word) &check_hlds__xml_documentation_scalar_common_2[3], check_hlds__xml_documentation__Rest_33, &check_hlds__xml_documentation__Decl_34, &check_hlds__xml_documentation__Comment_35);
          }
#line 152 "xml_documentation.m"
          if ((check_hlds__xml_documentation__Rest_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 151 "xml_documentation.m"
            check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 152 "xml_documentation.m"
          else
#line 157 "xml_documentation.m"
            if ((check_hlds__xml_documentation__Comment_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "xml_documentation.m"
              check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 157 "xml_documentation.m"
            else
#line 162 "xml_documentation.m"
              if ((check_hlds__xml_documentation__Decl_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 160 "xml_documentation.m"
                {
#line 160 "xml_documentation.m"
                  MR_String check_hlds__xml_documentation__V_45_45;

#line 161 "xml_documentation.m"
                  {
#line 161 "xml_documentation.m"
                    check_hlds__xml_documentation__V_45_45 = mercury__string__from_char_list_1_f_0(check_hlds__xml_documentation__Comment_35);
                  }
#line 161 "xml_documentation.m"
                  {
#line 161 "xml_documentation.m"
                    check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 161 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__V_45_45));
#line 161 "xml_documentation.m"
                  }
#line 160 "xml_documentation.m"
                }
#line 162 "xml_documentation.m"
              else
#line 163 "xml_documentation.m"
                {
#line 163 "xml_documentation.m"
                  MR_String check_hlds__xml_documentation__V_44_44;

#line 164 "xml_documentation.m"
                  {
#line 164 "xml_documentation.m"
                    check_hlds__xml_documentation__V_44_44 = mercury__string__from_char_list_1_f_0(check_hlds__xml_documentation__Comment_35);
                  }
#line 164 "xml_documentation.m"
                  {
#line 164 "xml_documentation.m"
                    check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 164 "xml_documentation.m"
                    MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__V_44_44));
#line 164 "xml_documentation.m"
                  }
#line 163 "xml_documentation.m"
                }
#line 127 "xml_documentation.m"
          {
#line 127 "xml_documentation.m"
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__LineNumber_9, ((MR_Box) (check_hlds__xml_documentation__V_22_22)), check_hlds__xml_documentation__STATE_VARIABLE_C_0_13, &check_hlds__xml_documentation__STATE_VARIABLE_C_23_23);
          }
#line 128 "xml_documentation.m"
          check_hlds__xml_documentation__V_24_24 = (MR_Word) check_hlds__xml_documentation__STATE_VARIABLE_C_23_23;
#line 128 "xml_documentation.m"
          {
#line 128 "xml_documentation.m"
            check_hlds__xml_documentation__build_comments_5_p_0(check_hlds__xml_documentation__S_6, check_hlds__xml_documentation__V_24_24, &check_hlds__xml_documentation__V_25_25);
          }
#line 128 "xml_documentation.m"
          check_hlds__xml_documentation__STATE_VARIABLE_C_14 = (MR_Word) check_hlds__xml_documentation__V_25_25;
#line 126 "xml_documentation.m"
        }
#line 122 "xml_documentation.m"
    *check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) check_hlds__xml_documentation__STATE_VARIABLE_C_14;
#line 122 "xml_documentation.m"
  }
#line 119 "xml_documentation.m"
}

#line 29 "xml_documentation.m"
void MR_CALL 
check_hlds__xml_documentation__xml_documentation_3_p_0(
#line 29 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ModuleInfo_4)
#line 29 "xml_documentation.m"
{
#line 82 "xml_documentation.m"
  {
#line 82 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 82 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Globals_6;
#line 82 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ModuleName_7;
#line 82 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__FileName_8;
#line 82 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__SrcFileName_9;
#line 82 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__SrcResult_10;

#line 83 "xml_documentation.m"
    {
#line 83 "xml_documentation.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__xml_documentation__ModuleInfo_4, &check_hlds__xml_documentation__Globals_6);
    }
#line 84 "xml_documentation.m"
    {
#line 84 "xml_documentation.m"
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__xml_documentation__ModuleInfo_4, &check_hlds__xml_documentation__ModuleName_7);
    }
#line 85 "xml_documentation.m"
    {
#line 85 "xml_documentation.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(check_hlds__xml_documentation__Globals_6, check_hlds__xml_documentation__ModuleName_7, (MR_String) ".xml", (MR_Integer) 0, &check_hlds__xml_documentation__FileName_8);
    }
#line 88 "xml_documentation.m"
    {
#line 88 "xml_documentation.m"
      parse_tree__source_file_map__lookup_module_source_file_4_p_0(check_hlds__xml_documentation__ModuleName_7, &check_hlds__xml_documentation__SrcFileName_9);
    }
#line 89 "xml_documentation.m"
    {
#line 89 "xml_documentation.m"
      mercury__io__open_input_4_p_0(check_hlds__xml_documentation__SrcFileName_9, &check_hlds__xml_documentation__SrcResult_10);
    }
#line 108 "xml_documentation.m"
    if (((MR_tag((MR_Word) check_hlds__xml_documentation__SrcResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 109 "xml_documentation.m"
      {
#line 109 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__SrcErr_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__SrcResult_10, (MR_Integer) 0)));

#line 110 "xml_documentation.m"
        {
#line 110 "xml_documentation.m"
          parse_tree__error_util__unable_to_open_file_4_p_0(check_hlds__xml_documentation__SrcFileName_9, check_hlds__xml_documentation__SrcErr_18);
#line 110 "xml_documentation.m"
          return;
        }
#line 109 "xml_documentation.m"
      }
#line 108 "xml_documentation.m"
    else
#line 91 "xml_documentation.m"
      {
#line 91 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__SrcStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__SrcResult_10, (MR_Integer) 0)));
#line 91 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Comments_12;
#line 91 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__ModuleComment_13;
#line 91 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__OpenResult_14;
#line 91 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_27_27;
#line 91 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_29_29;

#line 92 "xml_documentation.m"
        {
#line 92 "xml_documentation.m"
          check_hlds__xml_documentation__V_29_29 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0);
        }
#line 92 "xml_documentation.m"
        check_hlds__xml_documentation__V_27_27 = (MR_Word) check_hlds__xml_documentation__V_29_29;
#line 92 "xml_documentation.m"
        {
#line 92 "xml_documentation.m"
          check_hlds__xml_documentation__build_comments_5_p_0(check_hlds__xml_documentation__SrcStream_11, check_hlds__xml_documentation__V_27_27, &check_hlds__xml_documentation__Comments_12);
        }
#line 96 "xml_documentation.m"
        {
#line 96 "xml_documentation.m"
          check_hlds__xml_documentation__ModuleComment_13 = check_hlds__xml_documentation__get_comment_forwards_2_f_0(check_hlds__xml_documentation__Comments_12, (MR_Integer) 1);
        }
#line 98 "xml_documentation.m"
        {
#line 98 "xml_documentation.m"
          mercury__io__open_output_4_p_0(check_hlds__xml_documentation__FileName_8, &check_hlds__xml_documentation__OpenResult_14);
        }
#line 104 "xml_documentation.m"
        if (((MR_tag((MR_Word) check_hlds__xml_documentation__OpenResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 105 "xml_documentation.m"
          {
#line 105 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__Err_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__OpenResult_14, (MR_Integer) 0)));

#line 106 "xml_documentation.m"
            {
#line 106 "xml_documentation.m"
              parse_tree__error_util__unable_to_open_file_4_p_0(check_hlds__xml_documentation__FileName_8, check_hlds__xml_documentation__Err_17);
#line 106 "xml_documentation.m"
              return;
            }
#line 105 "xml_documentation.m"
          }
#line 104 "xml_documentation.m"
        else
#line 100 "xml_documentation.m"
          {
#line 100 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__Stream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__OpenResult_14, (MR_Integer) 0)));
#line 100 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__MIXmlDoc_16;
#line 103 "xml_documentation.m"
            MR_Box check_hlds__xml_documentation__conv0_STATE_VARIABLE_IO_20;

#line 101 "xml_documentation.m"
            {
#line 101 "xml_documentation.m"
              check_hlds__xml_documentation__MIXmlDoc_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 101 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__MIXmlDoc_16, 0) = ((MR_Box) (check_hlds__xml_documentation__Comments_12));
#line 101 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__MIXmlDoc_16, 1) = ((MR_Box) (check_hlds__xml_documentation__ModuleComment_13));
#line 101 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__MIXmlDoc_16, 2) = ((MR_Box) (check_hlds__xml_documentation__ModuleInfo_4));
#line 101 "xml_documentation.m"
            }
#line 103 "xml_documentation.m"
            {
#line 103 "xml_documentation.m"
              mercury__term_to_xml__write_xml_doc_4_p_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[0], (MR_Word) &check_hlds__xml_documentation_scalar_common_4[0], ((MR_Box) (check_hlds__xml_documentation__Stream_15)), ((MR_Box) (check_hlds__xml_documentation__MIXmlDoc_16)), ((MR_Box) ((MR_Integer) 0)), &check_hlds__xml_documentation__conv0_STATE_VARIABLE_IO_20);
            }
#line 100 "xml_documentation.m"
          }
#line 91 "xml_documentation.m"
      }
#line 82 "xml_documentation.m"
  }
#line 29 "xml_documentation.m"
}

void mercury__check_hlds__xml_documentation__init(void)
{
}

void mercury__check_hlds__xml_documentation__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0);
	MR_register_type_ctor_info(&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0);
	MR_register_type_ctor_info(&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_module_info_xml_doc_0);
}

void mercury__check_hlds__xml_documentation__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.xml_documentation. */
