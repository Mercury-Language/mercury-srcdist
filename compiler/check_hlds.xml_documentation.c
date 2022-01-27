/*
** Automatically generated from `xml_documentation.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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
#include "term_to_xml.mih"
#include "time.mih"
#include "tree234.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 143 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 146 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 149 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0;

#line 152 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 155 "check_hlds.xml_documentation.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__xml_documentation__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 158 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 161 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__xml_documentation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 164 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 167 "check_hlds.xml_documentation.c"
static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_comments_0[1];

#line 170 "check_hlds.xml_documentation.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__xml_documentation__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__xml_documentation__type_ctor_info_line_type_0;

#line 173 "check_hlds.xml_documentation.c"
static const MR_NotagFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0;

#line 176 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_0;

#line 179 "check_hlds.xml_documentation.c"
static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_1[1];

#line 182 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_1;

#line 185 "check_hlds.xml_documentation.c"
static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_2[1];

#line 188 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_2;

#line 191 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_3;

#line 194 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_0[2];

#line 197 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_1[1];

#line 200 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_2[1];

#line 203 "check_hlds.xml_documentation.c"
static const MR_DuPtagLayout check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_line_type_0[3];

#line 206 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_line_type_0[4];

#line 209 "check_hlds.xml_documentation.c"
static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_line_type_0[4];

#line 212 "check_hlds.xml_documentation.c"
static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_module_info_xml_doc_0_0[3];

#line 215 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0;

#line 218 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_module_info_xml_doc_0_0[1];

#line 221 "check_hlds.xml_documentation.c"
static const MR_DuPtagLayout check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_module_info_xml_doc_0[1];

#line 224 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_module_info_xml_doc_0[1];

#line 227 "check_hlds.xml_documentation.c"
static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_module_info_xml_doc_0[1];

#line 230 "check_hlds.xml_documentation.c"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0_10001(
#line 233 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 235 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2);

#line 238 "check_hlds.xml_documentation.c"
static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0_10001(
#line 241 "check_hlds.xml_documentation.c"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
#line 243 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 245 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3);

#line 248 "check_hlds.xml_documentation.c"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0_10001(
#line 251 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 253 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2);

#line 256 "check_hlds.xml_documentation.c"
static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0_10001(
#line 259 "check_hlds.xml_documentation.c"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
#line 261 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 263 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3);

#line 266 "check_hlds.xml_documentation.c"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0_10001(
#line 269 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 271 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2);

#line 274 "check_hlds.xml_documentation.c"
static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0_10001(
#line 277 "check_hlds.xml_documentation.c"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
#line 279 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 281 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3);

#line 284 "check_hlds.xml_documentation.c"
static MR_Box MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_10001(
#line 287 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 289 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 943 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_54_95_95_91_49_93_95_48_3_f_0(
#line 943 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7);

#line 943 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0(
#line 943 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7);

#line 943 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_52_95_95_91_49_44_32_50_93_95_48_3_f_0(
#line 943 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7);

#line 943 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0(
#line 943 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7);

#line 943 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0(
#line 943 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7);

#line 585 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0_1(
#line 585 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 585 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 576 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 576 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
#line 576 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
#line 576 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16);

#line 485 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_50_93_95_48_5_p_0(
#line 485 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 485 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_8,
#line 485 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
#line 485 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15);

#line 782 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__782__1_2_f_0(
#line 782 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_6,
#line 782 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_19);

#line 780 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__780__1_1_f_0(
#line 780 "xml_documentation.m"
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
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 296 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4);

#line 291 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0(
#line 291 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

#line 287 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0(
#line 287 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 287 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 287 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 287 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0(
#line 287 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 287 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 71 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0(
#line 71 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 71 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 71 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 71 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0(
#line 71 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 71 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 65 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0(
#line 65 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 65 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 65 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 65 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0(
#line 65 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 65 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 949 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__nyi_1_f_0(
#line 949 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_3);

#line 937 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_string_2_f_0(
#line 937 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 937 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__S_5);

#line 929 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_float_2_f_0(
#line 929 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 929 "xml_documentation.m"
  MR_Float check_hlds__xml_documentation__F_5);

#line 925 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_int_2_f_0(
#line 925 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 925 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__I_5);

#line 913 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0(
#line 913 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Prefix_5,
#line 913 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Name_6,
#line 913 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Arity_7);

#line 886 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__pred_visibility_to_xml_1_f_0(
#line 886 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Status_3);

#line 860 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__typeclass_visibility_to_xml_1_f_0(
#line 860 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Status_3);

#line 814 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0_1(
#line 814 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 814 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 807 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(
#line 807 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 807 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Constraint_5);

#line 798 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_context_to_xml_1_f_0(
#line 798 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

#line 788 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__name_to_xml_1_f_0(
#line 788 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

#line 783 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_3(
#line 783 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 783 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 782 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_2(
#line 782 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 782 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 780 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_1(
#line 780 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 780 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 777 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0(
#line 777 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 777 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_6,
#line 777 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Methods_7);

#line 774 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0_1(
#line 774 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 774 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 763 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0(
#line 763 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_5,
#line 763 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Vars_6,
#line 763 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 746 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_3(
#line 746 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 746 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 744 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_2(
#line 744 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 744 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 742 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_1(
#line 742 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 742 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 724 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0(
#line 724 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_7,
#line 724 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_8,
#line 724 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3,
#line 724 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ClassDefn_11,
#line 724 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27,
#line 724 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_28);

#line 705 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__arity_to_xml_1_f_0(
#line 705 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Arity_3);

#line 676 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__cons_id_to_xml_1_f_0(
#line 676 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

#line 673 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0_1(
#line 673 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 673 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 669 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0(
#line 669 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 669 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 654 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0_1(
#line 654 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 654 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 649 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0(
#line 649 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_1,
#line 649 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 619 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_1(
#line 619 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 619 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 607 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(
#line 607 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 607 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Inst_5);

#line 603 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_2(
#line 603 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 603 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 596 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_1(
#line 596 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 596 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 591 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0(
#line 591 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 591 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Mode_5);

#line 576 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__pred_mode_documentation_5_p_0(
#line 576 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation___C_6,
#line 576 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation___ProcId_7,
#line 576 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
#line 576 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
#line 576 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16);

#line 568 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0_1(
#line 568 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 568 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 564 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0(
#line 564 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 564 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 538 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_3(
#line 538 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 538 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 538 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 538 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 538 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4);

#line 532 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_2(
#line 532 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 532 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 531 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_1(
#line 531 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 531 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 504 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0(
#line 504 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_4,
#line 504 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_5);

#line 485 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__pred_documentation_5_p_0(
#line 485 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 485 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation___PredId_7,
#line 485 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_8,
#line 485 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
#line 485 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15);

#line 477 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_3(
#line 477 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 477 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 464 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_2(
#line 464 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 464 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 456 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_1(
#line 456 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 456 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 448 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0(
#line 448 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_1,
#line 448 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 431 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_arg_to_xml_3_f_0(
#line 431 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 431 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_6,
#line 431 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__CtorArg_7);

#line 425 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_3(
#line 425 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 425 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 422 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_2(
#line 422 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 422 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 421 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_1(
#line 421 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 421 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 414 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0(
#line 414 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 414 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_6,
#line 414 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Ctor_7);

#line 406 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0_1(
#line 406 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 406 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 403 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0(
#line 403 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_1,
#line 403 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_2,
#line 403 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 397 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__type_param_to_xml_2_f_0(
#line 397 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 397 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVar_5);

#line 372 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0_1(
#line 372 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 372 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 358 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0(
#line 358 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 358 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 358 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TypeDefn_9,
#line 358 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25,
#line 358 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26);

#line 324 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__maybe_add_import_documentation_5_p_0(
#line 324 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__BuiltinModuleNames_6,
#line 324 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ModuleName_7,
#line 324 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__AvailEntry_8,
#line 324 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_17,
#line 324 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_18);

#line 265 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_backwards_2_f_0(
#line 265 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_4,
#line 265 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Line_5);

#line 242 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_forwards_2_f_0(
#line 242 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_4,
#line 242 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Line_5);

#line 186 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__maybe_add_comment_3_f_0(
#line 186 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_5,
#line 186 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Context_6,
#line 186 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Xml_7);

#line 173 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__is_not_comment_char_1_p_0(
#line 173 "xml_documentation.m"
  MR_Char check_hlds__xml_documentation__C_2);

#line 152 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_2(
#line 152 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 152 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 151 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_1(
#line 151 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 151 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 123 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0(
#line 123 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__S_6,
#line 123 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 123 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__3_3);


static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_1[18][2];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_2[30][3];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_3[2][4];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_4[2][5];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_5[12][1];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_6[8][6];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_7[3][7];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_9[4][8];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_10[1][9];


#line 450 "xml_documentation.m"
/* sealed */ struct check_hlds__xml_documentation__vector_common_type_8_0_s {
#line 450 "xml_documentation.m"
  const MR_Word check_hlds__xml_documentation__vector_common_type_8_0__vct_8_f_0;
#line 450 "xml_documentation.m"
};

static /* final */ const struct check_hlds__xml_documentation__vector_common_type_8_0_s check_hlds__xml_documentation_vector_common_8[12];



static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_1[18][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_2[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_2[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_2[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_2[30][3] = {
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
    ((MR_Box) ((MR_String) "visibility")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "visibility")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "hlds_abstract_type")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "hlds_foreign_type")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "hlds_solver_type")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "character")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "float")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "int")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "string")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "free")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "not_reached")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "any_inst")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "ground_inst")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "merge_inst")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "mostly_uniq_inst")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "base_typeclass_info_const")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "closure_cons")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 21 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_4[1])),
    ((MR_Box) (check_hlds__xml_documentation__class_methods_to_xml_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[16])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[17])))
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

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_5[12][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "implementation"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "interface"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "Not yet implemented!"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "cc_multi"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "cc_nondet"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "det"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "erroneous"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "failure"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "multi"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "nondet"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "semidet"))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_6[8][6] = {
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

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_7[3][7] = {
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
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_9[4][8] = {
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
    ((MR_Box) (&check_hlds__xml_documentation__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
  /* row 2 */
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
  /* row 3 */
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

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_10[1][9] = {
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


static /* final */ const struct check_hlds__xml_documentation__vector_common_type_8_0_s check_hlds__xml_documentation_vector_common_8[12] = {
  /* row 0 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[11] },
  /* row 1 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[10] },
  /* row 2 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[12] },
  /* row 3 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[9] },
  /* row 4 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[24] },
  /* row 5 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[29] },
  /* row 6 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[27] },
  /* row 7 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[28] },
  /* row 8 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[22] },
  /* row 9 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[23] },
  /* row 10 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[25] },
  /* row 11 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[26] },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1624 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1632 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1640 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0
  }
};

#line 1648 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1656 "check_hlds.xml_documentation.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__xml_documentation__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1664 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__xml_documentation__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1672 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__xml_documentation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1681 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1689 "check_hlds.xml_documentation.c"
static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_comments_0[1] = {
  (MR_Integer) 0
};

#line 1694 "check_hlds.xml_documentation.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__xml_documentation__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__xml_documentation__type_ctor_info_line_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0
  }
};

#line 1703 "check_hlds.xml_documentation.c"
static const MR_NotagFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0 = {
  (MR_String) "comments",
  (MR_PseudoTypeInfo) &check_hlds__xml_documentation__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__xml_documentation__type_ctor_info_line_type_0,
  (MR_String) "line_types"
};

#line 1710 "check_hlds.xml_documentation.c"
const MR_TypeCtorInfo_Struct check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__xml_documentation____Unify____comments_0_0_10001)),
  ((MR_Box) (check_hlds__xml_documentation____Compare____comments_0_0_10001)),
  (MR_String) "check_hlds.xml_documentation",
  (MR_String) "comments",
  {     &check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0 },
  {     &check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_comments_0
};

#line 1727 "check_hlds.xml_documentation.c"
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

#line 1742 "check_hlds.xml_documentation.c"
static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1747 "check_hlds.xml_documentation.c"
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

#line 1762 "check_hlds.xml_documentation.c"
static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1767 "check_hlds.xml_documentation.c"
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

#line 1782 "check_hlds.xml_documentation.c"
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

#line 1797 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_0[2] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_0,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_3
};

#line 1803 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_1[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_1
};

#line 1808 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_2[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_2
};

#line 1813 "check_hlds.xml_documentation.c"
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

#line 1832 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_line_type_0[4] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_0,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_3,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_2,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_1
};

#line 1840 "check_hlds.xml_documentation.c"
static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_line_type_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1848 "check_hlds.xml_documentation.c"
const MR_TypeCtorInfo_Struct check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__xml_documentation____Unify____line_type_0_0_10001)),
  ((MR_Box) (check_hlds__xml_documentation____Compare____line_type_0_0_10001)),
  (MR_String) "check_hlds.xml_documentation",
  (MR_String) "line_type",
  {     check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_line_type_0 },
  {     check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_line_type_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_line_type_0
};

#line 1865 "check_hlds.xml_documentation.c"
static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_module_info_xml_doc_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

#line 1872 "check_hlds.xml_documentation.c"
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

#line 1887 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_module_info_xml_doc_0_0[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0
};

#line 1892 "check_hlds.xml_documentation.c"
static const MR_DuPtagLayout check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_module_info_xml_doc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_module_info_xml_doc_0_0
  }
};

#line 1901 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_module_info_xml_doc_0[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0
};

#line 1906 "check_hlds.xml_documentation.c"
static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_module_info_xml_doc_0[1] = {
  (MR_Integer) 0
};

#line 1911 "check_hlds.xml_documentation.c"
const MR_TypeCtorInfo_Struct check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_module_info_xml_doc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0_10001)),
  ((MR_Box) (check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0_10001)),
  (MR_String) "check_hlds.xml_documentation",
  (MR_String) "module_info_xml_doc",
  {     check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_module_info_xml_doc_0 },
  {     check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_module_info_xml_doc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_module_info_xml_doc_0
};

#line 1928 "check_hlds.xml_documentation.c"
const MR_BaseTypeclassInfo base_typeclass_info_term_to_xml__xmlable__arity1__check_hlds__xml_documentation__module_info_xml_doc__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_10001))
};

#line 1938 "check_hlds.xml_documentation.c"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0_10001(
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
      check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____comments_0_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2));
    }
#line 1957 "check_hlds.xml_documentation.c"
    return check_hlds__xml_documentation__succeeded;
#line 1959 "check_hlds.xml_documentation.c"
  }
#line 1961 "check_hlds.xml_documentation.c"
}

#line 1964 "check_hlds.xml_documentation.c"
static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0_10001(
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
      check_hlds__xml_documentation____Compare____comments_0_0(&check_hlds__xml_documentation__conv0_HeadVar__1_1, ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3));
    }
#line 1985 "check_hlds.xml_documentation.c"
    *check_hlds__xml_documentation__wrapper_arg_1 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__1_1));
#line 1987 "check_hlds.xml_documentation.c"
  }
#line 1989 "check_hlds.xml_documentation.c"
}

#line 1992 "check_hlds.xml_documentation.c"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0_10001(
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
      check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____line_type_0_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2));
    }
#line 2011 "check_hlds.xml_documentation.c"
    return check_hlds__xml_documentation__succeeded;
#line 2013 "check_hlds.xml_documentation.c"
  }
#line 2015 "check_hlds.xml_documentation.c"
}

#line 2018 "check_hlds.xml_documentation.c"
static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0_10001(
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
      check_hlds__xml_documentation____Compare____line_type_0_0(&check_hlds__xml_documentation__conv0_HeadVar__1_1, ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3));
    }
#line 2039 "check_hlds.xml_documentation.c"
    *check_hlds__xml_documentation__wrapper_arg_1 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__1_1));
#line 2041 "check_hlds.xml_documentation.c"
  }
#line 2043 "check_hlds.xml_documentation.c"
}

#line 2046 "check_hlds.xml_documentation.c"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0_10001(
#line 2049 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 2051 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2)
#line 2053 "check_hlds.xml_documentation.c"
{
#line 2055 "check_hlds.xml_documentation.c"
  {
#line 2057 "check_hlds.xml_documentation.c"
    MR_bool check_hlds__xml_documentation__succeeded;

#line 2060 "check_hlds.xml_documentation.c"
    {
#line 2062 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2));
    }
#line 2065 "check_hlds.xml_documentation.c"
    return check_hlds__xml_documentation__succeeded;
#line 2067 "check_hlds.xml_documentation.c"
  }
#line 2069 "check_hlds.xml_documentation.c"
}

#line 2072 "check_hlds.xml_documentation.c"
static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0_10001(
#line 2075 "check_hlds.xml_documentation.c"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
#line 2077 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 2079 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3)
#line 2081 "check_hlds.xml_documentation.c"
{
#line 2083 "check_hlds.xml_documentation.c"
  {
#line 2085 "check_hlds.xml_documentation.c"
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__1_1;

#line 2088 "check_hlds.xml_documentation.c"
    {
#line 2090 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0(&check_hlds__xml_documentation__conv0_HeadVar__1_1, ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3));
    }
#line 2093 "check_hlds.xml_documentation.c"
    *check_hlds__xml_documentation__wrapper_arg_1 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__1_1));
#line 2095 "check_hlds.xml_documentation.c"
  }
#line 2097 "check_hlds.xml_documentation.c"
}

#line 2100 "check_hlds.xml_documentation.c"
static MR_Box MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_10001(
#line 2103 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 2105 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 2107 "check_hlds.xml_documentation.c"
{
#line 2109 "check_hlds.xml_documentation.c"
  {
#line 2111 "check_hlds.xml_documentation.c"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 2113 "check_hlds.xml_documentation.c"
    MR_Box check_hlds__xml_documentation__closure;
#line 2115 "check_hlds.xml_documentation.c"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 2118 "check_hlds.xml_documentation.c"
    check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 2120 "check_hlds.xml_documentation.c"
    {
#line 2122 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 2125 "check_hlds.xml_documentation.c"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 2127 "check_hlds.xml_documentation.c"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 2129 "check_hlds.xml_documentation.c"
  }
#line 2131 "check_hlds.xml_documentation.c"
}

#line 943 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_54_95_95_91_49_93_95_48_3_f_0(
#line 943 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7)
#line 943 "xml_documentation.m"
{
#line 945 "xml_documentation.m"
  {
#line 945 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 945 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 945 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;

#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 945 "xml_documentation.m"
    }
#line 945 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 945 "xml_documentation.m"
  }
#line 943 "xml_documentation.m"
}

#line 943 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0(
#line 943 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7)
#line 943 "xml_documentation.m"
{
#line 945 "xml_documentation.m"
  {
#line 945 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 945 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 945 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;

#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 945 "xml_documentation.m"
    }
#line 945 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 945 "xml_documentation.m"
  }
#line 943 "xml_documentation.m"
}

#line 943 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_52_95_95_91_49_44_32_50_93_95_48_3_f_0(
#line 943 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7)
#line 943 "xml_documentation.m"
{
#line 945 "xml_documentation.m"
  {
#line 945 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 945 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 945 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;

#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 945 "xml_documentation.m"
    }
#line 945 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 945 "xml_documentation.m"
  }
#line 943 "xml_documentation.m"
}

#line 943 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0(
#line 943 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7)
#line 943 "xml_documentation.m"
{
#line 945 "xml_documentation.m"
  {
#line 945 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 945 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 945 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;

#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 945 "xml_documentation.m"
    }
#line 945 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 945 "xml_documentation.m"
  }
#line 943 "xml_documentation.m"
}

#line 943 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0(
#line 943 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 943 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7)
#line 943 "xml_documentation.m"
{
#line 945 "xml_documentation.m"
  {
#line 945 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 945 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 945 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;

#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 945 "xml_documentation.m"
    }
#line 945 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 945 "xml_documentation.m"
  }
#line 943 "xml_documentation.m"
}

#line 585 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0_1(
#line 585 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 585 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 585 "xml_documentation.m"
{
#line 585 "xml_documentation.m"
  {
#line 585 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 585 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 585 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 585 "xml_documentation.m"
    {
#line 585 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_mode_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 585 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 585 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 585 "xml_documentation.m"
  }
#line 585 "xml_documentation.m"
}

#line 576 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 576 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
#line 576 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
#line 576 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16)
#line 576 "xml_documentation.m"
{
#line 579 "xml_documentation.m"
  {
#line 579 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 579 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_9;
#line 579 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__IVarSet_10;
#line 579 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Modes_11;
#line 579 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Determinism_12;
#line 579 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlModes_13;
#line 579 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlDet_14;
#line 579 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_18_18;
#line 579 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_21_21;
#line 579 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_22_22;
#line 579 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_32_32;

#line 581 "xml_documentation.m"
    {
#line 581 "xml_documentation.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__xml_documentation__ProcInfo_8, &check_hlds__xml_documentation__IVarSet_10);
    }
#line 582 "xml_documentation.m"
    {
#line 582 "xml_documentation.m"
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(check_hlds__xml_documentation__ProcInfo_8, &check_hlds__xml_documentation__Modes_11);
    }
#line 583 "xml_documentation.m"
    {
#line 583 "xml_documentation.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__xml_documentation__ProcInfo_8, &check_hlds__xml_documentation__Determinism_12);
    }
#line 585 "xml_documentation.m"
    {
#line 585 "xml_documentation.m"
      check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 585 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[7]));
#line 585 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0_1));
#line 585 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 585 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 3) = ((MR_Box) (check_hlds__xml_documentation__IVarSet_10));
#line 585 "xml_documentation.m"
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__V_32_32 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_18_18, check_hlds__xml_documentation__Modes_11);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__XmlModes_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_13, 0) = ((MR_Box) ((MR_String) "modes"));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_13, 2) = ((MR_Box) (check_hlds__xml_documentation__V_32_32));
#line 945 "xml_documentation.m"
    }
#line 711 "xml_documentation.m"
    check_hlds__xml_documentation__XmlDet_14 = ((&check_hlds__xml_documentation_vector_common_8[4 + check_hlds__xml_documentation__Determinism_12]))->check_hlds__xml_documentation__vector_common_type_8_0__vct_8_f_0;
#line 587 "xml_documentation.m"
    {
#line 587 "xml_documentation.m"
      check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlDet_14));
#line 587 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 587 "xml_documentation.m"
    }
#line 587 "xml_documentation.m"
    {
#line 587 "xml_documentation.m"
      check_hlds__xml_documentation__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlModes_13));
#line 587 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 1) = ((MR_Box) (check_hlds__xml_documentation__V_22_22));
#line 587 "xml_documentation.m"
    }
#line 587 "xml_documentation.m"
    {
#line 587 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 587 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 0) = ((MR_Box) ((MR_String) "pred_mode"));
#line 587 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 587 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 587 "xml_documentation.m"
    }
#line 589 "xml_documentation.m"
    {
#line 589 "xml_documentation.m"
      MR_Word base;
#line 589 "xml_documentation.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "xml_documentation.m"
      *check_hlds__xml_documentation__STATE_VARIABLE_Xml_16 = base;
#line 589 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_9));
#line 589 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15));
#line 589 "xml_documentation.m"
    }
#line 579 "xml_documentation.m"
  }
#line 576 "xml_documentation.m"
}

#line 485 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_50_93_95_48_5_p_0(
#line 485 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 485 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_8,
#line 485 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
#line 485 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15)
#line 485 "xml_documentation.m"
{
#line 488 "xml_documentation.m"
  {
#line 488 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 488 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredStatus_10;
#line 488 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Origin_11;
#line 488 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Markers_12;
#line 494 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_16_16;
#line 495 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_13_13;
#line 496 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;

#line 489 "xml_documentation.m"
    {
#line 489 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__xml_documentation__PredInfo_8, &check_hlds__xml_documentation__PredStatus_10);
    }
#line 490 "xml_documentation.m"
    {
#line 490 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__xml_documentation__PredInfo_8, &check_hlds__xml_documentation__Origin_11);
    }
#line 491 "xml_documentation.m"
    {
#line 491 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__xml_documentation__PredInfo_8, &check_hlds__xml_documentation__Markers_12);
    }
#line 494 "xml_documentation.m"
    {
#line 494 "xml_documentation.m"
      check_hlds__xml_documentation__V_16_16 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__xml_documentation__PredStatus_10);
    }
#line 494 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_16_16 == (MR_Integer) 1);
#line 494 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 494 "xml_documentation.m"
      {
#line 495 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = ((((MR_tag((MR_Word) check_hlds__xml_documentation__Origin_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Origin_11, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 495 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 495 "xml_documentation.m"
          {
#line 495 "xml_documentation.m"
            check_hlds__xml_documentation__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Origin_11, (MR_Integer) 1)));
#line 496 "xml_documentation.m"
            check_hlds__xml_documentation__V_17_17 = (MR_Integer) 9;
#line 496 "xml_documentation.m"
            {
#line 496 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__xml_documentation__Markers_12, check_hlds__xml_documentation__V_17_17);
            }
#line 496 "xml_documentation.m"
            check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 495 "xml_documentation.m"
          }
#line 494 "xml_documentation.m"
      }
#line 500 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 498 "xml_documentation.m"
      {
#line 498 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Xml_9;

#line 498 "xml_documentation.m"
        {
#line 498 "xml_documentation.m"
          check_hlds__xml_documentation__Xml_9 = check_hlds__xml_documentation__predicate_documentation_2_f_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__PredInfo_8);
        }
#line 499 "xml_documentation.m"
        {
#line 499 "xml_documentation.m"
          MR_Word base;
#line 499 "xml_documentation.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "xml_documentation.m"
          *check_hlds__xml_documentation__STATE_VARIABLE_Xml_15 = base;
#line 499 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_9));
#line 499 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14));
#line 499 "xml_documentation.m"
        }
#line 498 "xml_documentation.m"
      }
#line 500 "xml_documentation.m"
    else
#line 500 "xml_documentation.m"
      *check_hlds__xml_documentation__STATE_VARIABLE_Xml_15 = check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14;
#line 488 "xml_documentation.m"
  }
#line 485 "xml_documentation.m"
}

#line 782 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__782__1_2_f_0(
#line 782 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_6,
#line 782 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_19)
#line 782 "xml_documentation.m"
{
#line 782 "xml_documentation.m"
  {
#line 782 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 782 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_20;
#line 782 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv0_HeadVar__3_20;

#line 782 "xml_documentation.m"
    {
#line 782 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_HeadVar__3_20 = mercury__map__lookup_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__xml_documentation__PredTable_6, ((MR_Box) (check_hlds__xml_documentation__HeadVar__2_19)));
    }
#line 782 "xml_documentation.m"
    check_hlds__xml_documentation__HeadVar__3_20 = ((MR_Word) check_hlds__xml_documentation__conv0_HeadVar__3_20);
#line 782 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_20;
#line 782 "xml_documentation.m"
  }
#line 782 "xml_documentation.m"
}

#line 780 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__780__1_1_f_0(
#line 780 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_16)
#line 780 "xml_documentation.m"
{
#line 780 "xml_documentation.m"
  {
#line 780 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 780 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_16, (MR_Integer) 0)));
#line 780 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_16, (MR_Integer) 1)));

#line 780 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_17;
#line 780 "xml_documentation.m"
  }
#line 780 "xml_documentation.m"
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
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 296 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4)
#line 296 "xml_documentation.m"
{
#line 296 "xml_documentation.m"
  {
#line 296 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 296 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_STATE_VARIABLE_Xmls_18;

#line 296 "xml_documentation.m"
    {
#line 296 "xml_documentation.m"
      check_hlds__xml_documentation__maybe_add_import_documentation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3), &check_hlds__xml_documentation__conv0_STATE_VARIABLE_Xmls_18);
    }
#line 296 "xml_documentation.m"
    *check_hlds__xml_documentation__wrapper_arg_4 = ((MR_Box) (check_hlds__xml_documentation__conv0_STATE_VARIABLE_Xmls_18));
#line 296 "xml_documentation.m"
  }
#line 296 "xml_documentation.m"
}

#line 291 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0(
#line 291 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
#line 291 "xml_documentation.m"
{
#line 291 "xml_documentation.m"
  {
#line 291 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_6;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeCtorInfo_51_51;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeInfo_57_57;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Comments_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 291 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__ModuleComment_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 2)));
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__CommentXml_7;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__AvailModuleMap_8;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__BuiltinModuleNames_9;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportsXml_10;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportXml_11;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeTable_12;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeXmls_13;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeXml_14;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredTable_15;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredXmls_16;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredXml_17;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ClassTable_18;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ClassXmls_19;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ClassXml_20;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Children_21;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_24_24;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_25_25;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_27_27;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_28_28;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_32_32;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_36_36;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_40_40;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_44_44;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_45_45;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_46_46;
#line 291 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_47_47;
#line 296 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv1_ImportsXml_10;
#line 301 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv3_TypeXmls_13;
#line 306 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv5_PredXmls_16;
#line 310 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv7_ClassXmls_19;

#line 292 "xml_documentation.m"
    {
#line 292 "xml_documentation.m"
      check_hlds__xml_documentation__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 292 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_25_25, 0) = ((MR_Box) (check_hlds__xml_documentation__ModuleComment_4));
#line 292 "xml_documentation.m"
    }
#line 292 "xml_documentation.m"
    {
#line 292 "xml_documentation.m"
      check_hlds__xml_documentation__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 0) = ((MR_Box) (check_hlds__xml_documentation__V_25_25));
#line 292 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 292 "xml_documentation.m"
    }
#line 292 "xml_documentation.m"
    {
#line 292 "xml_documentation.m"
      check_hlds__xml_documentation__CommentXml_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 292 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CommentXml_7, 0) = ((MR_Box) ((MR_String) "comment"));
#line 292 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CommentXml_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 292 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CommentXml_7, 2) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 292 "xml_documentation.m"
    }
#line 294 "xml_documentation.m"
    {
#line 294 "xml_documentation.m"
      hlds__hlds_module__module_info_get_avail_module_map_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__AvailModuleMap_8);
    }
#line 2945 "check_hlds.xml_documentation.c"
    check_hlds__xml_documentation__TypeCtorInfo_51_51 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 295 "xml_documentation.m"
    {
#line 295 "xml_documentation.m"
      check_hlds__xml_documentation__V_27_27 = mdbcomp__builtin_modules__all_builtin_modules_0_f_0();
    }
#line 295 "xml_documentation.m"
    {
#line 295 "xml_documentation.m"
      check_hlds__xml_documentation__BuiltinModuleNames_9 = mercury__set__list_to_set_1_f_0(check_hlds__xml_documentation__TypeCtorInfo_51_51, check_hlds__xml_documentation__V_27_27);
    }
#line 296 "xml_documentation.m"
    {
#line 296 "xml_documentation.m"
      check_hlds__xml_documentation__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 296 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_9[1]));
#line 296 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_1));
#line 296 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 296 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 3) = ((MR_Box) (check_hlds__xml_documentation__BuiltinModuleNames_9));
#line 296 "xml_documentation.m"
    }
#line 2971 "check_hlds.xml_documentation.c"
    check_hlds__xml_documentation__TypeInfo_57_57 = (MR_Word) &check_hlds__xml_documentation_scalar_common_1[2];
#line 296 "xml_documentation.m"
    {
#line 296 "xml_documentation.m"
      mercury__map__foldl_4_p_0(check_hlds__xml_documentation__TypeCtorInfo_51_51, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0, check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__V_28_28, check_hlds__xml_documentation__AvailModuleMap_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv1_ImportsXml_10);
    }
#line 296 "xml_documentation.m"
    check_hlds__xml_documentation__ImportsXml_10 = ((MR_Word) check_hlds__xml_documentation__conv1_ImportsXml_10);
#line 298 "xml_documentation.m"
    {
#line 298 "xml_documentation.m"
      check_hlds__xml_documentation__ImportXml_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 298 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ImportXml_11, 0) = ((MR_Box) ((MR_String) "imports"));
#line 298 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ImportXml_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ImportXml_11, 2) = ((MR_Box) (check_hlds__xml_documentation__ImportsXml_10));
#line 298 "xml_documentation.m"
    }
#line 300 "xml_documentation.m"
    {
#line 300 "xml_documentation.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__TypeTable_12);
    }
#line 301 "xml_documentation.m"
    {
#line 301 "xml_documentation.m"
      check_hlds__xml_documentation__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 301 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_32_32, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_9[2]));
#line 301 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_32_32, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_2));
#line 301 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 301 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_32_32, 3) = ((MR_Box) (check_hlds__xml_documentation__Comments_3));
#line 301 "xml_documentation.m"
    }
#line 301 "xml_documentation.m"
    {
#line 301 "xml_documentation.m"
      hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0(check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__V_32_32, check_hlds__xml_documentation__TypeTable_12, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv3_TypeXmls_13);
    }
#line 301 "xml_documentation.m"
    check_hlds__xml_documentation__TypeXmls_13 = ((MR_Word) check_hlds__xml_documentation__conv3_TypeXmls_13);
#line 303 "xml_documentation.m"
    {
#line 303 "xml_documentation.m"
      check_hlds__xml_documentation__TypeXml_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 303 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__TypeXml_14, 0) = ((MR_Box) ((MR_String) "types"));
#line 303 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__TypeXml_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__TypeXml_14, 2) = ((MR_Box) (check_hlds__xml_documentation__TypeXmls_13));
#line 303 "xml_documentation.m"
    }
#line 305 "xml_documentation.m"
    {
#line 305 "xml_documentation.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__PredTable_15);
    }
#line 306 "xml_documentation.m"
    {
#line 306 "xml_documentation.m"
      check_hlds__xml_documentation__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 306 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_9[3]));
#line 306 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_3));
#line 306 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 306 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 3) = ((MR_Box) (check_hlds__xml_documentation__Comments_3));
#line 306 "xml_documentation.m"
    }
#line 306 "xml_documentation.m"
    {
#line 306 "xml_documentation.m"
      mercury__map__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__V_36_36, check_hlds__xml_documentation__PredTable_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv5_PredXmls_16);
    }
#line 306 "xml_documentation.m"
    check_hlds__xml_documentation__PredXmls_16 = ((MR_Word) check_hlds__xml_documentation__conv5_PredXmls_16);
#line 307 "xml_documentation.m"
    {
#line 307 "xml_documentation.m"
      check_hlds__xml_documentation__PredXml_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 307 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__PredXml_17, 0) = ((MR_Box) ((MR_String) "preds"));
#line 307 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__PredXml_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__PredXml_17, 2) = ((MR_Box) (check_hlds__xml_documentation__PredXmls_16));
#line 307 "xml_documentation.m"
    }
#line 309 "xml_documentation.m"
    {
#line 309 "xml_documentation.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__ClassTable_18);
    }
#line 310 "xml_documentation.m"
    {
#line 310 "xml_documentation.m"
      check_hlds__xml_documentation__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 310 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_40_40, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_10[0]));
#line 310 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_40_40, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_4));
#line 310 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 310 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_40_40, 3) = ((MR_Box) (check_hlds__xml_documentation__Comments_3));
#line 310 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_40_40, 4) = ((MR_Box) (check_hlds__xml_documentation__PredTable_15));
#line 310 "xml_documentation.m"
    }
#line 310 "xml_documentation.m"
    {
#line 310 "xml_documentation.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__V_40_40, check_hlds__xml_documentation__ClassTable_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv7_ClassXmls_19);
    }
#line 310 "xml_documentation.m"
    check_hlds__xml_documentation__ClassXmls_19 = ((MR_Word) check_hlds__xml_documentation__conv7_ClassXmls_19);
#line 312 "xml_documentation.m"
    {
#line 312 "xml_documentation.m"
      check_hlds__xml_documentation__ClassXml_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 312 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassXml_20, 0) = ((MR_Box) ((MR_String) "typeclasses"));
#line 312 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassXml_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassXml_20, 2) = ((MR_Box) (check_hlds__xml_documentation__ClassXmls_19));
#line 312 "xml_documentation.m"
    }
#line 314 "xml_documentation.m"
    {
#line 314 "xml_documentation.m"
      check_hlds__xml_documentation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 0) = ((MR_Box) (check_hlds__xml_documentation__ClassXml_20));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "xml_documentation.m"
    }
#line 314 "xml_documentation.m"
    {
#line 314 "xml_documentation.m"
      check_hlds__xml_documentation__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 0) = ((MR_Box) (check_hlds__xml_documentation__PredXml_17));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 1) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 314 "xml_documentation.m"
    }
#line 314 "xml_documentation.m"
    {
#line 314 "xml_documentation.m"
      check_hlds__xml_documentation__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 0) = ((MR_Box) (check_hlds__xml_documentation__TypeXml_14));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 1) = ((MR_Box) (check_hlds__xml_documentation__V_46_46));
#line 314 "xml_documentation.m"
    }
#line 314 "xml_documentation.m"
    {
#line 314 "xml_documentation.m"
      check_hlds__xml_documentation__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_44_44, 0) = ((MR_Box) (check_hlds__xml_documentation__ImportXml_11));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_44_44, 1) = ((MR_Box) (check_hlds__xml_documentation__V_45_45));
#line 314 "xml_documentation.m"
    }
#line 314 "xml_documentation.m"
    {
#line 314 "xml_documentation.m"
      check_hlds__xml_documentation__Children_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_21, 0) = ((MR_Box) (check_hlds__xml_documentation__CommentXml_7));
#line 314 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_21, 1) = ((MR_Box) (check_hlds__xml_documentation__V_44_44));
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
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__Children_21));
#line 315 "xml_documentation.m"
    }
#line 291 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_6;
#line 291 "xml_documentation.m"
  }
#line 291 "xml_documentation.m"
}

#line 287 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0(
#line 287 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 287 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 287 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 287 "xml_documentation.m"
{
#line 287 "xml_documentation.m"
  {
#line 287 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 287 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_12 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;
#line 287 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_13 = (MR_Integer) check_hlds__xml_documentation__HeadVar__3_3;

#line 287 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_12 == check_hlds__xml_documentation__CastY_13);
#line 287 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 3201 "check_hlds.xml_documentation.c"
      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
#line 287 "xml_documentation.m"
    else
#line 287 "xml_documentation.m"
      {
#line 287 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 287 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));
#line 287 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 287 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 2)));
#line 287 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_10_10;

#line 287 "xml_documentation.m"
        {
#line 287 "xml_documentation.m"
          check_hlds__xml_documentation____Compare____comments_0_0(&check_hlds__xml_documentation__V_10_10, check_hlds__xml_documentation__V_4_4, check_hlds__xml_documentation__V_7_7);
        }
#line 3227 "check_hlds.xml_documentation.c"
        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_10_10 == (MR_Integer) 0);
#line 287 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 287 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 287 "xml_documentation.m"
          *check_hlds__xml_documentation__HeadVar__1_1 = check_hlds__xml_documentation__V_10_10;
#line 287 "xml_documentation.m"
        else
#line 287 "xml_documentation.m"
          {
#line 287 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__V_11_11;

#line 287 "xml_documentation.m"
            {
#line 287 "xml_documentation.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__V_5_5, check_hlds__xml_documentation__V_8_8);
            }
#line 3247 "check_hlds.xml_documentation.c"
            check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_11_11 == (MR_Integer) 0);
#line 287 "xml_documentation.m"
            check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 287 "xml_documentation.m"
            if (check_hlds__xml_documentation__succeeded)
#line 287 "xml_documentation.m"
              *check_hlds__xml_documentation__HeadVar__1_1 = check_hlds__xml_documentation__V_11_11;
#line 287 "xml_documentation.m"
            else
#line 287 "xml_documentation.m"
              {
#line 287 "xml_documentation.m"
                hlds__hlds_module____Compare____module_info_0_0(check_hlds__xml_documentation__HeadVar__1_1, check_hlds__xml_documentation__V_6_6, check_hlds__xml_documentation__V_9_9);
#line 287 "xml_documentation.m"
                return;
              }
#line 287 "xml_documentation.m"
          }
#line 287 "xml_documentation.m"
      }
#line 287 "xml_documentation.m"
  }
#line 287 "xml_documentation.m"
}

#line 287 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0(
#line 287 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 287 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 287 "xml_documentation.m"
{
#line 287 "xml_documentation.m"
  {
#line 287 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 287 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_9 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
#line 287 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_10 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

#line 287 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_9 == check_hlds__xml_documentation__CastY_10);
#line 287 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 287 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 287 "xml_documentation.m"
    else
#line 287 "xml_documentation.m"
      {
#line 287 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 287 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 2)));
#line 287 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 287 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));

#line 3314 "check_hlds.xml_documentation.c"
        {
#line 3316 "check_hlds.xml_documentation.c"
          check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____comments_0_0(check_hlds__xml_documentation__V_3_3, check_hlds__xml_documentation__V_6_6);
        }
#line 287 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 287 "xml_documentation.m"
          {
#line 3323 "check_hlds.xml_documentation.c"
            check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__V_4_4, check_hlds__xml_documentation__V_7_7) == 0);
#line 287 "xml_documentation.m"
            if (check_hlds__xml_documentation__succeeded)
#line 3327 "check_hlds.xml_documentation.c"
              {
#line 3329 "check_hlds.xml_documentation.c"
                return check_hlds__xml_documentation__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__xml_documentation__V_5_5, check_hlds__xml_documentation__V_8_8);
              }
#line 287 "xml_documentation.m"
          }
#line 287 "xml_documentation.m"
      }
#line 287 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 287 "xml_documentation.m"
  }
#line 287 "xml_documentation.m"
}

#line 71 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0(
#line 71 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 71 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 71 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 71 "xml_documentation.m"
{
#line 71 "xml_documentation.m"
  {
#line 71 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 71 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_20 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;
#line 71 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_21 = (MR_Integer) check_hlds__xml_documentation__HeadVar__3_3;

#line 71 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_20 == check_hlds__xml_documentation__CastY_21);
#line 71 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 3367 "check_hlds.xml_documentation.c"
      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
#line 71 "xml_documentation.m"
    else
#line 71 "xml_documentation.m"
#line 71 "xml_documentation.m"
      switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) {
#line 71 "xml_documentation.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 71 "xml_documentation.m"
        case (MR_Integer) 0:
#line 71 "xml_documentation.m"
#line 71 "xml_documentation.m"
          switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__2_2)) {
#line 71 "xml_documentation.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 71 "xml_documentation.m"
            case (MR_Integer) 0:
#line 71 "xml_documentation.m"
#line 71 "xml_documentation.m"
              switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) {
#line 71 "xml_documentation.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 71 "xml_documentation.m"
                case (MR_Integer) 0:
#line 71 "xml_documentation.m"
#line 71 "xml_documentation.m"
                  switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__3_3)) {
#line 71 "xml_documentation.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 71 "xml_documentation.m"
                    case (MR_Integer) 0:
#line 71 "xml_documentation.m"
                      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
#line 71 "xml_documentation.m"
                      break;
#line 71 "xml_documentation.m"
                    case (MR_Integer) 1:
#line 71 "xml_documentation.m"
                      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 71 "xml_documentation.m"
                      break;
#line 71 "xml_documentation.m"
                  }
#line 71 "xml_documentation.m"
                  break;
#line 71 "xml_documentation.m"
                case (MR_Integer) 1:
#line 3415 "check_hlds.xml_documentation.c"
                  *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 71 "xml_documentation.m"
                  break;
#line 71 "xml_documentation.m"
                case (MR_Integer) 2:
#line 3421 "check_hlds.xml_documentation.c"
                  *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 71 "xml_documentation.m"
                  break;
#line 71 "xml_documentation.m"
              }
#line 71 "xml_documentation.m"
              break;
#line 71 "xml_documentation.m"
            case (MR_Integer) 1:
#line 71 "xml_documentation.m"
#line 71 "xml_documentation.m"
              switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) {
#line 71 "xml_documentation.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 71 "xml_documentation.m"
                case (MR_Integer) 0:
#line 71 "xml_documentation.m"
#line 71 "xml_documentation.m"
                  switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__3_3)) {
#line 71 "xml_documentation.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 71 "xml_documentation.m"
                    case (MR_Integer) 0:
#line 71 "xml_documentation.m"
                      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 71 "xml_documentation.m"
                      break;
#line 71 "xml_documentation.m"
                    case (MR_Integer) 1:
#line 71 "xml_documentation.m"
                      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
#line 71 "xml_documentation.m"
                      break;
#line 71 "xml_documentation.m"
                  }
#line 71 "xml_documentation.m"
                  break;
#line 71 "xml_documentation.m"
                case (MR_Integer) 1:
#line 3461 "check_hlds.xml_documentation.c"
                  *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 71 "xml_documentation.m"
                  break;
#line 71 "xml_documentation.m"
                case (MR_Integer) 2:
#line 3467 "check_hlds.xml_documentation.c"
                  *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 71 "xml_documentation.m"
                  break;
#line 71 "xml_documentation.m"
              }
#line 71 "xml_documentation.m"
              break;
#line 71 "xml_documentation.m"
          }
#line 71 "xml_documentation.m"
          break;
#line 71 "xml_documentation.m"
        case (MR_Integer) 1:
#line 71 "xml_documentation.m"
          {
#line 71 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));

#line 71 "xml_documentation.m"
#line 71 "xml_documentation.m"
            switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) {
#line 71 "xml_documentation.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 71 "xml_documentation.m"
              case (MR_Integer) 0:
#line 71 "xml_documentation.m"
#line 71 "xml_documentation.m"
                switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__3_3)) {
#line 71 "xml_documentation.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 71 "xml_documentation.m"
                  case (MR_Integer) 0:
#line 3500 "check_hlds.xml_documentation.c"
                    *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 71 "xml_documentation.m"
                    break;
#line 71 "xml_documentation.m"
                  case (MR_Integer) 1:
#line 3506 "check_hlds.xml_documentation.c"
                    *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 71 "xml_documentation.m"
                    break;
#line 71 "xml_documentation.m"
                }
#line 71 "xml_documentation.m"
                break;
#line 71 "xml_documentation.m"
              case (MR_Integer) 1:
#line 71 "xml_documentation.m"
                {
#line 71 "xml_documentation.m"
                  MR_String check_hlds__xml_documentation__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));

#line 71 "xml_documentation.m"
                  {
#line 71 "xml_documentation.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__xml_documentation__HeadVar__1_1, check_hlds__xml_documentation__V_25_25, check_hlds__xml_documentation__V_8_8);
#line 71 "xml_documentation.m"
                    return;
                  }
#line 71 "xml_documentation.m"
                }
#line 71 "xml_documentation.m"
                break;
#line 71 "xml_documentation.m"
              case (MR_Integer) 2:
#line 3534 "check_hlds.xml_documentation.c"
                *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 71 "xml_documentation.m"
                break;
#line 71 "xml_documentation.m"
            }
#line 71 "xml_documentation.m"
          }
#line 71 "xml_documentation.m"
          break;
#line 71 "xml_documentation.m"
        case (MR_Integer) 2:
#line 71 "xml_documentation.m"
          {
#line 71 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));

#line 71 "xml_documentation.m"
#line 71 "xml_documentation.m"
            switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) {
#line 71 "xml_documentation.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 71 "xml_documentation.m"
              case (MR_Integer) 0:
#line 71 "xml_documentation.m"
#line 71 "xml_documentation.m"
                switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__3_3)) {
#line 71 "xml_documentation.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 71 "xml_documentation.m"
                  case (MR_Integer) 0:
#line 3565 "check_hlds.xml_documentation.c"
                    *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 71 "xml_documentation.m"
                    break;
#line 71 "xml_documentation.m"
                  case (MR_Integer) 1:
#line 3571 "check_hlds.xml_documentation.c"
                    *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 71 "xml_documentation.m"
                    break;
#line 71 "xml_documentation.m"
                }
#line 71 "xml_documentation.m"
                break;
#line 71 "xml_documentation.m"
              case (MR_Integer) 1:
#line 3581 "check_hlds.xml_documentation.c"
                *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 71 "xml_documentation.m"
                break;
#line 71 "xml_documentation.m"
              case (MR_Integer) 2:
#line 71 "xml_documentation.m"
                {
#line 71 "xml_documentation.m"
                  MR_String check_hlds__xml_documentation__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));

#line 71 "xml_documentation.m"
                  {
#line 71 "xml_documentation.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__xml_documentation__HeadVar__1_1, check_hlds__xml_documentation__V_24_24, check_hlds__xml_documentation__V_16_16);
#line 71 "xml_documentation.m"
                    return;
                  }
#line 71 "xml_documentation.m"
                }
#line 71 "xml_documentation.m"
                break;
#line 71 "xml_documentation.m"
            }
#line 71 "xml_documentation.m"
          }
#line 71 "xml_documentation.m"
          break;
#line 71 "xml_documentation.m"
      }
#line 71 "xml_documentation.m"
  }
#line 71 "xml_documentation.m"
}

#line 71 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0(
#line 71 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 71 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 71 "xml_documentation.m"
{
#line 71 "xml_documentation.m"
  {
#line 71 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 71 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_11 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
#line 71 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_12 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

#line 71 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_11 == check_hlds__xml_documentation__CastY_12);
#line 71 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 71 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 71 "xml_documentation.m"
    else
#line 71 "xml_documentation.m"
#line 71 "xml_documentation.m"
      switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) {
#line 71 "xml_documentation.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 71 "xml_documentation.m"
        case (MR_Integer) 0:
#line 71 "xml_documentation.m"
#line 71 "xml_documentation.m"
          switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__1_1)) {
#line 71 "xml_documentation.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 71 "xml_documentation.m"
            case (MR_Integer) 0:
#line 71 "xml_documentation.m"
              {
#line 71 "xml_documentation.m"
                MR_Integer check_hlds__xml_documentation__CastX_3 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
#line 71 "xml_documentation.m"
                MR_Integer check_hlds__xml_documentation__CastY_4 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

#line 71 "xml_documentation.m"
                check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastY_4 == check_hlds__xml_documentation__CastX_3);
#line 71 "xml_documentation.m"
              }
#line 71 "xml_documentation.m"
              break;
#line 71 "xml_documentation.m"
            case (MR_Integer) 1:
#line 71 "xml_documentation.m"
              {
#line 71 "xml_documentation.m"
                MR_Integer check_hlds__xml_documentation__CastX_9 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
#line 71 "xml_documentation.m"
                MR_Integer check_hlds__xml_documentation__CastY_10 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

#line 71 "xml_documentation.m"
                check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastY_10 == check_hlds__xml_documentation__CastX_9);
#line 71 "xml_documentation.m"
              }
#line 71 "xml_documentation.m"
              break;
#line 71 "xml_documentation.m"
          }
#line 71 "xml_documentation.m"
          break;
#line 71 "xml_documentation.m"
        case (MR_Integer) 1:
#line 71 "xml_documentation.m"
          {
#line 71 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 71 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__V_6_6;

#line 71 "xml_documentation.m"
            check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 71 "xml_documentation.m"
            if (check_hlds__xml_documentation__succeeded)
#line 71 "xml_documentation.m"
              {
#line 71 "xml_documentation.m"
                check_hlds__xml_documentation__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 3705 "check_hlds.xml_documentation.c"
                check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__V_5_5, check_hlds__xml_documentation__V_6_6) == 0);
#line 71 "xml_documentation.m"
              }
#line 71 "xml_documentation.m"
          }
#line 71 "xml_documentation.m"
          break;
#line 71 "xml_documentation.m"
        case (MR_Integer) 2:
#line 71 "xml_documentation.m"
          {
#line 71 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 71 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__V_8_8;

#line 71 "xml_documentation.m"
            check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 71 "xml_documentation.m"
            if (check_hlds__xml_documentation__succeeded)
#line 71 "xml_documentation.m"
              {
#line 71 "xml_documentation.m"
                check_hlds__xml_documentation__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 3730 "check_hlds.xml_documentation.c"
                check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__V_7_7, check_hlds__xml_documentation__V_8_8) == 0);
#line 71 "xml_documentation.m"
              }
#line 71 "xml_documentation.m"
          }
#line 71 "xml_documentation.m"
          break;
#line 71 "xml_documentation.m"
      }
#line 71 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 71 "xml_documentation.m"
  }
#line 71 "xml_documentation.m"
}

#line 65 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0(
#line 65 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 65 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 65 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 65 "xml_documentation.m"
{
#line 65 "xml_documentation.m"
  {
#line 65 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 65 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_6 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;
#line 65 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_7 = (MR_Integer) check_hlds__xml_documentation__HeadVar__3_3;

#line 65 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_6 == check_hlds__xml_documentation__CastY_7);
#line 65 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 3771 "check_hlds.xml_documentation.c"
      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
#line 65 "xml_documentation.m"
    else
#line 65 "xml_documentation.m"
      {
#line 65 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_4_4 = (MR_Word) check_hlds__xml_documentation__HeadVar__2_2;
#line 65 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_5_5 = (MR_Word) check_hlds__xml_documentation__HeadVar__3_3;

#line 65 "xml_documentation.m"
        {
#line 65 "xml_documentation.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__xml_documentation_scalar_common_2[1], check_hlds__xml_documentation__HeadVar__1_1, ((MR_Box) (check_hlds__xml_documentation__V_4_4)), ((MR_Box) (check_hlds__xml_documentation__V_5_5)));
#line 65 "xml_documentation.m"
          return;
        }
#line 65 "xml_documentation.m"
      }
#line 65 "xml_documentation.m"
  }
#line 65 "xml_documentation.m"
}

#line 65 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0(
#line 65 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 65 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 65 "xml_documentation.m"
{
#line 65 "xml_documentation.m"
  {
#line 65 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 65 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_5 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
#line 65 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_6 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

#line 65 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_5 == check_hlds__xml_documentation__CastY_6);
#line 65 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 65 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 65 "xml_documentation.m"
    else
#line 65 "xml_documentation.m"
      {
#line 65 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_3_3 = (MR_Word) check_hlds__xml_documentation__HeadVar__1_1;
#line 65 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_4_4 = (MR_Word) check_hlds__xml_documentation__HeadVar__2_2;

#line 3829 "check_hlds.xml_documentation.c"
        {
#line 3831 "check_hlds.xml_documentation.c"
          return check_hlds__xml_documentation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__xml_documentation_scalar_common_2[1], ((MR_Box) (check_hlds__xml_documentation__V_3_3)), ((MR_Box) (check_hlds__xml_documentation__V_4_4)));
        }
#line 65 "xml_documentation.m"
      }
#line 65 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 65 "xml_documentation.m"
  }
#line 65 "xml_documentation.m"
}

#line 949 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__nyi_1_f_0(
#line 949 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_3)
#line 949 "xml_documentation.m"
{
#line 951 "xml_documentation.m"
  {
#line 951 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 951 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;

#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_3));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])));
#line 939 "xml_documentation.m"
    }
#line 951 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 951 "xml_documentation.m"
  }
#line 949 "xml_documentation.m"
}

#line 937 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_string_2_f_0(
#line 937 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 937 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__S_5)
#line 937 "xml_documentation.m"
{
#line 939 "xml_documentation.m"
  {
#line 939 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 939 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;
#line 939 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_7_7;
#line 939 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_8_8;

#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) (check_hlds__xml_documentation__S_5));
#line 939 "xml_documentation.m"
    }
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 0) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
    }
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__xml_documentation__E_4));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_7_7));
#line 939 "xml_documentation.m"
    }
#line 939 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_3;
#line 939 "xml_documentation.m"
  }
#line 937 "xml_documentation.m"
}

#line 929 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_float_2_f_0(
#line 929 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 929 "xml_documentation.m"
  MR_Float check_hlds__xml_documentation__F_5)
#line 929 "xml_documentation.m"
{
#line 931 "xml_documentation.m"
  {
#line 931 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 931 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;
#line 931 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_7_7;
#line 931 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_8_8;
#line 931 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_9_9;

#line 931 "xml_documentation.m"
    {
#line 931 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__string__float_to_string_1_f_0(check_hlds__xml_documentation__F_5);
    }
#line 931 "xml_documentation.m"
    {
#line 931 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 931 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 931 "xml_documentation.m"
    }
#line 931 "xml_documentation.m"
    {
#line 931 "xml_documentation.m"
      check_hlds__xml_documentation__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 0) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 931 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 931 "xml_documentation.m"
    }
#line 931 "xml_documentation.m"
    {
#line 931 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 931 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__xml_documentation__E_4));
#line 931 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 931 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_7_7));
#line 931 "xml_documentation.m"
    }
#line 931 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_3;
#line 931 "xml_documentation.m"
  }
#line 929 "xml_documentation.m"
}

#line 925 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_int_2_f_0(
#line 925 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 925 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__I_5)
#line 925 "xml_documentation.m"
{
#line 927 "xml_documentation.m"
  {
#line 927 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 927 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;
#line 927 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_7_7;
#line 927 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_8_8;
#line 927 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_9_9;

#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__I_5);
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 927 "xml_documentation.m"
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 0) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "xml_documentation.m"
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__xml_documentation__E_4));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_7_7));
#line 927 "xml_documentation.m"
    }
#line 927 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_3;
#line 927 "xml_documentation.m"
  }
#line 925 "xml_documentation.m"
}

#line 913 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0(
#line 913 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Prefix_5,
#line 913 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Name_6,
#line 913 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Arity_7)
#line 913 "xml_documentation.m"
{
#line 915 "xml_documentation.m"
  {
#line 915 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 915 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__HeadVar__4_4;
#line 915 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_8_8;
#line 915 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_9_9;
#line 915 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_11_11;
#line 915 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_14_14;
#line 915 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_16_16;

#line 920 "xml_documentation.m"
    {
#line 920 "xml_documentation.m"
      check_hlds__xml_documentation__V_16_16 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Name_6);
    }
#line 920 "xml_documentation.m"
    {
#line 920 "xml_documentation.m"
      check_hlds__xml_documentation__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_16_16);
    }
#line 920 "xml_documentation.m"
    {
#line 920 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Prefix_5, check_hlds__xml_documentation__V_14_14);
    }
#line 916 "xml_documentation.m"
    {
#line 916 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_7);
    }
#line 916 "xml_documentation.m"
    {
#line 916 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_11_11);
    }
#line 916 "xml_documentation.m"
    {
#line 916 "xml_documentation.m"
      return check_hlds__xml_documentation__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_8_8, check_hlds__xml_documentation__V_9_9);
    }
#line 915 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 915 "xml_documentation.m"
  }
#line 913 "xml_documentation.m"
}

#line 886 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__pred_visibility_to_xml_1_f_0(
#line 886 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Status_3)
#line 886 "xml_documentation.m"
{
#line 888 "xml_documentation.m"
  {
#line 888 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 888 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
#line 888 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Visibility_4;
#line 888 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11;
#line 888 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_12_12;
#line 889 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_6_6;

#line 889 "xml_documentation.m"
    {
#line 889 "xml_documentation.m"
      check_hlds__xml_documentation__V_6_6 = hlds__status__pred_status_defined_in_impl_section_1_f_0(check_hlds__xml_documentation__Status_3);
    }
#line 889 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_6_6 == (MR_Integer) 1);
#line 895 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 892 "xml_documentation.m"
      {
#line 890 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_7_7 = (MR_Word) check_hlds__xml_documentation__Status_3;

#line 890 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 892 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 891 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_4 = (MR_String) "abstract";
#line 892 "xml_documentation.m"
        else
#line 893 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_4 = (MR_String) "implementation";
#line 892 "xml_documentation.m"
      }
#line 895 "xml_documentation.m"
    else
#line 896 "xml_documentation.m"
      check_hlds__xml_documentation__Visibility_4 = (MR_String) "interface";
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_12_12, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_4));
#line 939 "xml_documentation.m"
    }
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) (check_hlds__xml_documentation__V_12_12));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
    }
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "visibility"));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_11_11));
#line 939 "xml_documentation.m"
    }
#line 888 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 888 "xml_documentation.m"
  }
#line 886 "xml_documentation.m"
}

#line 860 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__typeclass_visibility_to_xml_1_f_0(
#line 860 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Status_3)
#line 860 "xml_documentation.m"
{
#line 862 "xml_documentation.m"
  {
#line 862 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 862 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
#line 862 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Visibility_4;
#line 862 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11;
#line 862 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_12_12;
#line 863 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_6_6;

#line 863 "xml_documentation.m"
    {
#line 863 "xml_documentation.m"
      check_hlds__xml_documentation__V_6_6 = hlds__status__typeclass_status_defined_in_impl_section_1_f_0(check_hlds__xml_documentation__Status_3);
    }
#line 863 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_6_6 == (MR_Integer) 1);
#line 869 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 866 "xml_documentation.m"
      {
#line 864 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_7_7 = (MR_Word) check_hlds__xml_documentation__Status_3;

#line 864 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 866 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 865 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_4 = (MR_String) "abstract";
#line 866 "xml_documentation.m"
        else
#line 867 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_4 = (MR_String) "implementation";
#line 866 "xml_documentation.m"
      }
#line 869 "xml_documentation.m"
    else
#line 870 "xml_documentation.m"
      check_hlds__xml_documentation__Visibility_4 = (MR_String) "interface";
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_12_12, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_4));
#line 939 "xml_documentation.m"
    }
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) (check_hlds__xml_documentation__V_12_12));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
    }
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "visibility"));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_11_11));
#line 939 "xml_documentation.m"
    }
#line 862 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 862 "xml_documentation.m"
  }
#line 860 "xml_documentation.m"
}

#line 814 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0_1(
#line 814 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 814 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 814 "xml_documentation.m"
{
#line 814 "xml_documentation.m"
  {
#line 814 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 814 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 814 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__3_3;

#line 814 "xml_documentation.m"
    {
#line 814 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 814 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__3_3));
#line 814 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 814 "xml_documentation.m"
  }
#line 814 "xml_documentation.m"
}

#line 807 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(
#line 807 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 807 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Constraint_5)
#line 807 "xml_documentation.m"
{
#line 809 "xml_documentation.m"
  {
#line 809 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 809 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_6;
#line 809 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Constraint_5, (MR_Integer) 0)));
#line 809 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Constraint_5, (MR_Integer) 1)));
#line 809 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Id_9;
#line 809 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlName_10;
#line 809 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlTypes_11;
#line 809 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_13_13;
#line 809 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_15_15;
#line 809 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;
#line 809 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_18_18;
#line 809 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_21_21;
#line 809 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_22_22;
#line 809 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_30_30;
#line 809 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_31_31;
#line 809 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_33_33;
#line 809 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_36_36;
#line 809 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_38_38;
#line 809 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_43_43;

#line 812 "xml_documentation.m"
    {
#line 812 "xml_documentation.m"
      check_hlds__xml_documentation__V_13_13 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__xml_documentation__ArgTypes_8);
    }
#line 920 "xml_documentation.m"
    {
#line 920 "xml_documentation.m"
      check_hlds__xml_documentation__V_38_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__ClassName_7);
    }
#line 920 "xml_documentation.m"
    {
#line 920 "xml_documentation.m"
      check_hlds__xml_documentation__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_38_38);
    }
#line 920 "xml_documentation.m"
    {
#line 920 "xml_documentation.m"
      check_hlds__xml_documentation__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "constraint", check_hlds__xml_documentation__V_36_36);
    }
#line 916 "xml_documentation.m"
    {
#line 916 "xml_documentation.m"
      check_hlds__xml_documentation__V_33_33 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__V_13_13);
    }
#line 916 "xml_documentation.m"
    {
#line 916 "xml_documentation.m"
      check_hlds__xml_documentation__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_33_33);
    }
#line 916 "xml_documentation.m"
    {
#line 916 "xml_documentation.m"
      check_hlds__xml_documentation__Id_9 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_30_30, check_hlds__xml_documentation__V_31_31);
    }
#line 813 "xml_documentation.m"
    {
#line 813 "xml_documentation.m"
      check_hlds__xml_documentation__XmlName_10 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__ClassName_7);
    }
#line 814 "xml_documentation.m"
    {
#line 814 "xml_documentation.m"
      check_hlds__xml_documentation__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 814 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_15_15, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[2]));
#line 814 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_15_15, 1) = ((MR_Box) (check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0_1));
#line 814 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 814 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_15_15, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_4));
#line 814 "xml_documentation.m"
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__V_43_43 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_15_15, check_hlds__xml_documentation__ArgTypes_8);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__XmlTypes_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_11, 0) = ((MR_Box) ((MR_String) "constraint_types"));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_11, 2) = ((MR_Box) (check_hlds__xml_documentation__V_43_43));
#line 945 "xml_documentation.m"
    }
#line 816 "xml_documentation.m"
    {
#line 816 "xml_documentation.m"
      check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 816 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) ((MR_String) "ref"));
#line 816 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (check_hlds__xml_documentation__Id_9));
#line 816 "xml_documentation.m"
    }
#line 816 "xml_documentation.m"
    {
#line 816 "xml_documentation.m"
      check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__V_18_18));
#line 816 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 816 "xml_documentation.m"
    }
#line 816 "xml_documentation.m"
    {
#line 816 "xml_documentation.m"
      check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_11));
#line 816 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 816 "xml_documentation.m"
    }
#line 816 "xml_documentation.m"
    {
#line 816 "xml_documentation.m"
      check_hlds__xml_documentation__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_10));
#line 816 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 1) = ((MR_Box) (check_hlds__xml_documentation__V_22_22));
#line 816 "xml_documentation.m"
    }
#line 816 "xml_documentation.m"
    {
#line 816 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 816 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "constraint"));
#line 816 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 816 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 816 "xml_documentation.m"
    }
#line 809 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_6;
#line 809 "xml_documentation.m"
  }
#line 807 "xml_documentation.m"
}

#line 798 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_context_to_xml_1_f_0(
#line 798 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
#line 798 "xml_documentation.m"
{
#line 800 "xml_documentation.m"
  {
#line 800 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 800 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
#line 800 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 800 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__LineNumber_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 800 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_7_7;
#line 800 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_8_8;
#line 800 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_10_10;
#line 800 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11;
#line 800 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;
#line 800 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_18_18;
#line 800 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_23_23;
#line 800 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_24_24;
#line 800 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_25_25;

#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (check_hlds__xml_documentation__FileName_3));
#line 939 "xml_documentation.m"
    }
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__V_18_18));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
    }
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) ((MR_String) "filename"));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_8_8, 2) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 939 "xml_documentation.m"
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_25_25 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__LineNumber_4);
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 0) = ((MR_Box) (check_hlds__xml_documentation__V_25_25));
#line 927 "xml_documentation.m"
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_23_23, 0) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "xml_documentation.m"
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) ((MR_String) "line"));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 2) = ((MR_Box) (check_hlds__xml_documentation__V_23_23));
#line 927 "xml_documentation.m"
    }
#line 803 "xml_documentation.m"
    {
#line 803 "xml_documentation.m"
      check_hlds__xml_documentation__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 0) = ((MR_Box) (check_hlds__xml_documentation__V_11_11));
#line 803 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "xml_documentation.m"
    }
#line 802 "xml_documentation.m"
    {
#line 802 "xml_documentation.m"
      check_hlds__xml_documentation__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 0) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 1) = ((MR_Box) (check_hlds__xml_documentation__V_10_10));
#line 802 "xml_documentation.m"
    }
#line 801 "xml_documentation.m"
    {
#line 801 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 801 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "context"));
#line 801 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_7_7));
#line 801 "xml_documentation.m"
    }
#line 800 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 800 "xml_documentation.m"
  }
#line 798 "xml_documentation.m"
}

#line 788 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__name_to_xml_1_f_0(
#line 788 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
#line 788 "xml_documentation.m"
{
#line 790 "xml_documentation.m"
  {
#line 790 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 790 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;

#line 790 "xml_documentation.m"
    if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 791 "xml_documentation.m"
      {
#line 791 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 791 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 791 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_9_9;
#line 791 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_10_10;
#line 791 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_12_12;
#line 791 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_13_13;
#line 791 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_14_14;
#line 791 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_20_20;
#line 791 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_21_21;
#line 791 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_26_26;
#line 791 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_27_27;

#line 793 "xml_documentation.m"
        {
#line 793 "xml_documentation.m"
          check_hlds__xml_documentation__V_12_12 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Module_5);
        }
#line 939 "xml_documentation.m"
        {
#line 939 "xml_documentation.m"
          check_hlds__xml_documentation__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 0) = ((MR_Box) (check_hlds__xml_documentation__V_12_12));
#line 939 "xml_documentation.m"
        }
#line 939 "xml_documentation.m"
        {
#line 939 "xml_documentation.m"
          check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
        }
#line 939 "xml_documentation.m"
        {
#line 939 "xml_documentation.m"
          check_hlds__xml_documentation__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_10_10, 0) = ((MR_Box) ((MR_String) "module"));
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_10_10, 2) = ((MR_Box) (check_hlds__xml_documentation__V_20_20));
#line 939 "xml_documentation.m"
        }
#line 939 "xml_documentation.m"
        {
#line 939 "xml_documentation.m"
          check_hlds__xml_documentation__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_27_27, 0) = ((MR_Box) (check_hlds__xml_documentation__Name_6));
#line 939 "xml_documentation.m"
        }
#line 939 "xml_documentation.m"
        {
#line 939 "xml_documentation.m"
          check_hlds__xml_documentation__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 0) = ((MR_Box) (check_hlds__xml_documentation__V_27_27));
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
        }
#line 939 "xml_documentation.m"
        {
#line 939 "xml_documentation.m"
          check_hlds__xml_documentation__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_14_14, 0) = ((MR_Box) ((MR_String) "name"));
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_14_14, 2) = ((MR_Box) (check_hlds__xml_documentation__V_26_26));
#line 939 "xml_documentation.m"
        }
#line 794 "xml_documentation.m"
        {
#line 794 "xml_documentation.m"
          check_hlds__xml_documentation__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_13_13, 0) = ((MR_Box) (check_hlds__xml_documentation__V_14_14));
#line 794 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 794 "xml_documentation.m"
        }
#line 793 "xml_documentation.m"
        {
#line 793 "xml_documentation.m"
          check_hlds__xml_documentation__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_9_9, 0) = ((MR_Box) (check_hlds__xml_documentation__V_10_10));
#line 793 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_9_9, 1) = ((MR_Box) (check_hlds__xml_documentation__V_13_13));
#line 793 "xml_documentation.m"
        }
#line 792 "xml_documentation.m"
        {
#line 792 "xml_documentation.m"
          check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 792 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "qualified"));
#line 792 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 792 "xml_documentation.m"
        }
#line 791 "xml_documentation.m"
      }
#line 790 "xml_documentation.m"
    else
#line 790 "xml_documentation.m"
      {
#line 790 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 790 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_32_32;
#line 790 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_33_33;

#line 939 "xml_documentation.m"
        {
#line 939 "xml_documentation.m"
          check_hlds__xml_documentation__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_33_33, 0) = ((MR_Box) (check_hlds__xml_documentation__Name_3));
#line 939 "xml_documentation.m"
        }
#line 939 "xml_documentation.m"
        {
#line 939 "xml_documentation.m"
          check_hlds__xml_documentation__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 0) = ((MR_Box) (check_hlds__xml_documentation__V_33_33));
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
        }
#line 939 "xml_documentation.m"
        {
#line 939 "xml_documentation.m"
          check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "unqualified"));
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_32_32));
#line 939 "xml_documentation.m"
        }
#line 790 "xml_documentation.m"
      }
#line 790 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 790 "xml_documentation.m"
  }
#line 788 "xml_documentation.m"
}

#line 783 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_3(
#line 783 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 783 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 783 "xml_documentation.m"
{
#line 783 "xml_documentation.m"
  {
#line 783 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 783 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 783 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_Xml_6;

#line 783 "xml_documentation.m"
    {
#line 783 "xml_documentation.m"
      check_hlds__xml_documentation__conv2_Xml_6 = check_hlds__xml_documentation__predicate_documentation_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 783 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_6));
#line 783 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 783 "xml_documentation.m"
  }
#line 783 "xml_documentation.m"
}

#line 782 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_2(
#line 782 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 782 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 782 "xml_documentation.m"
{
#line 782 "xml_documentation.m"
  {
#line 782 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 782 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 782 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_HeadVar__3_20;

#line 782 "xml_documentation.m"
    {
#line 782 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_HeadVar__3_20 = check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__782__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 782 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_HeadVar__3_20));
#line 782 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 782 "xml_documentation.m"
  }
#line 782 "xml_documentation.m"
}

#line 780 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_1(
#line 780 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 780 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 780 "xml_documentation.m"
{
#line 780 "xml_documentation.m"
  {
#line 780 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 780 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 780 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__2_17;

#line 780 "xml_documentation.m"
    {
#line 780 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_HeadVar__2_17 = check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__780__1_1_f_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 780 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__2_17));
#line 780 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 780 "xml_documentation.m"
  }
#line 780 "xml_documentation.m"
}

#line 777 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0(
#line 777 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 777 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_6,
#line 777 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Methods_7)
#line 777 "xml_documentation.m"
{
#line 779 "xml_documentation.m"
  {
#line 779 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 779 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_8;
#line 779 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 779 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__AllPredIds_9;
#line 779 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredIds_12;
#line 779 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredInfos_13;
#line 779 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_18_18;
#line 779 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_22_22;
#line 779 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_38_38;

#line 780 "xml_documentation.m"
    {
#line 780 "xml_documentation.m"
      check_hlds__xml_documentation__AllPredIds_9 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, check_hlds__xml_documentation__TypeCtorInfo_28_28, (MR_Word) &check_hlds__xml_documentation_scalar_common_2[21], check_hlds__xml_documentation__Methods_7);
    }
#line 781 "xml_documentation.m"
    {
#line 781 "xml_documentation.m"
      check_hlds__xml_documentation__PredIds_12 = mercury__list__sort_and_remove_dups_1_f_0(check_hlds__xml_documentation__TypeCtorInfo_28_28, check_hlds__xml_documentation__AllPredIds_9);
    }
#line 782 "xml_documentation.m"
    {
#line 782 "xml_documentation.m"
      check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 782 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[5]));
#line 782 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (check_hlds__xml_documentation__class_methods_to_xml_3_f_0_2));
#line 782 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 782 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 3) = ((MR_Box) (check_hlds__xml_documentation__PredTable_6));
#line 782 "xml_documentation.m"
    }
#line 782 "xml_documentation.m"
    {
#line 782 "xml_documentation.m"
      check_hlds__xml_documentation__PredInfos_13 = mercury__list__map_2_f_0(check_hlds__xml_documentation__TypeCtorInfo_28_28, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__xml_documentation__V_18_18, check_hlds__xml_documentation__PredIds_12);
    }
#line 783 "xml_documentation.m"
    {
#line 783 "xml_documentation.m"
      check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 783 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[6]));
#line 783 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (check_hlds__xml_documentation__class_methods_to_xml_3_f_0_3));
#line 783 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 783 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_22_22, 3) = ((MR_Box) (check_hlds__xml_documentation__C_5));
#line 783 "xml_documentation.m"
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__V_38_38 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_22_22, check_hlds__xml_documentation__PredInfos_13);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_8, 0) = ((MR_Box) ((MR_String) "methods"));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_8, 2) = ((MR_Box) (check_hlds__xml_documentation__V_38_38));
#line 945 "xml_documentation.m"
    }
#line 779 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_8;
#line 779 "xml_documentation.m"
  }
#line 777 "xml_documentation.m"
}

#line 774 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0_1(
#line 774 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 774 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 774 "xml_documentation.m"
{
#line 774 "xml_documentation.m"
  {
#line 774 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 774 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 774 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 774 "xml_documentation.m"
    {
#line 774 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 774 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 774 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 774 "xml_documentation.m"
  }
#line 774 "xml_documentation.m"
}

#line 763 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0(
#line 763 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_5,
#line 763 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Vars_6,
#line 763 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 763 "xml_documentation.m"
{
#line 765 "xml_documentation.m"
  {
#line 765 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_9;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Domain_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Range_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlDomain_10;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlRange_11;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_16_16;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_23_23;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_24_24;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_32_32;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_40_40;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_48_48;

#line 774 "xml_documentation.m"
    {
#line 774 "xml_documentation.m"
      check_hlds__xml_documentation__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 774 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
#line 774 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 1) = ((MR_Box) (check_hlds__xml_documentation__fundep_to_xml_3_f_0_1));
#line 774 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 774 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_5));
#line 774 "xml_documentation.m"
    }
#line 775 "xml_documentation.m"
    {
#line 775 "xml_documentation.m"
      check_hlds__xml_documentation__V_24_24 = hlds__hlds_data__restrict_list_elements_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], check_hlds__xml_documentation__Domain_7, check_hlds__xml_documentation__Vars_6);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__V_32_32 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_23_23, check_hlds__xml_documentation__V_24_24);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__XmlDomain_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlDomain_10, 0) = ((MR_Box) ((MR_String) "domain"));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlDomain_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlDomain_10, 2) = ((MR_Box) (check_hlds__xml_documentation__V_32_32));
#line 945 "xml_documentation.m"
    }
#line 775 "xml_documentation.m"
    {
#line 775 "xml_documentation.m"
      check_hlds__xml_documentation__V_40_40 = hlds__hlds_data__restrict_list_elements_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], check_hlds__xml_documentation__Range_8, check_hlds__xml_documentation__Vars_6);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__V_48_48 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_23_23, check_hlds__xml_documentation__V_40_40);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__XmlRange_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlRange_11, 0) = ((MR_Box) ((MR_String) "range"));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlRange_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlRange_11, 2) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 945 "xml_documentation.m"
    }
#line 768 "xml_documentation.m"
    {
#line 768 "xml_documentation.m"
      check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlRange_11));
#line 768 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 768 "xml_documentation.m"
    }
#line 768 "xml_documentation.m"
    {
#line 768 "xml_documentation.m"
      check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlDomain_10));
#line 768 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 768 "xml_documentation.m"
    }
#line 768 "xml_documentation.m"
    {
#line 768 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 768 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 0) = ((MR_Box) ((MR_String) "fundep"));
#line 768 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 768 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 768 "xml_documentation.m"
    }
#line 765 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_9;
#line 765 "xml_documentation.m"
  }
#line 763 "xml_documentation.m"
}

#line 746 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_3(
#line 746 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 746 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 746 "xml_documentation.m"
{
#line 746 "xml_documentation.m"
  {
#line 746 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 746 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 746 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_Xml_9;

#line 746 "xml_documentation.m"
    {
#line 746 "xml_documentation.m"
      check_hlds__xml_documentation__conv2_Xml_9 = check_hlds__xml_documentation__fundep_to_xml_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 746 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_9));
#line 746 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 746 "xml_documentation.m"
  }
#line 746 "xml_documentation.m"
}

#line 744 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_2(
#line 744 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 744 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 744 "xml_documentation.m"
{
#line 744 "xml_documentation.m"
  {
#line 744 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 744 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 744 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_Xml_6;

#line 744 "xml_documentation.m"
    {
#line 744 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_Xml_6 = check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 744 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_Xml_6));
#line 744 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 744 "xml_documentation.m"
  }
#line 744 "xml_documentation.m"
}

#line 742 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_1(
#line 742 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 742 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 742 "xml_documentation.m"
{
#line 742 "xml_documentation.m"
  {
#line 742 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 742 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 742 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 742 "xml_documentation.m"
    {
#line 742 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 742 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 742 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 742 "xml_documentation.m"
  }
#line 742 "xml_documentation.m"
}

#line 724 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0(
#line 724 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_7,
#line 724 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_8,
#line 724 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3,
#line 724 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ClassDefn_11,
#line 724 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27,
#line 724 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_28)
#line 724 "xml_documentation.m"
{
#line 728 "xml_documentation.m"
  {
#line 728 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 728 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 728 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
#line 728 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeClassStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
#line 728 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__DefinedInThisModule_14;
#line 729 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
#line 729 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
#line 729 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
#line 729 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
#line 729 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
#line 729 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
#line 729 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
#line 729 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
#line 729 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));

#line 730 "xml_documentation.m"
    {
#line 730 "xml_documentation.m"
      check_hlds__xml_documentation__DefinedInThisModule_14 = hlds__status__typeclass_status_defined_in_this_module_1_f_0(check_hlds__xml_documentation__TypeClassStatus_13);
    }
#line 759 "xml_documentation.m"
#line 759 "xml_documentation.m"
    switch (check_hlds__xml_documentation__DefinedInThisModule_14) {
#line 759 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 759 "xml_documentation.m"
      case (MR_Integer) 0:
#line 760 "xml_documentation.m"
        *check_hlds__xml_documentation__STATE_VARIABLE_Xml_28 = check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27;
#line 759 "xml_documentation.m"
        break;
#line 759 "xml_documentation.m"
      case (MR_Integer) 1:
#line 733 "xml_documentation.m"
        {
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Xml_12;
#line 733 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__Id_15;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Context_16;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TVarset_17;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Vars_18;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlName_19;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlClassVars_20;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlSupers_21;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlFundeps_22;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlMethods_23;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlVisibility_24;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlContext_25;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Xml0_26;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_31_31;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_33_33;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_34_34;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_36_36;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_37_37;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_38_38;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_40_40;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_41_41;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_44_44;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_45_45;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_46_46;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_47_47;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_48_48;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_49_49;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_50_50;
#line 736 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_62_62;
#line 736 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_63_63;
#line 736 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_64_64;
#line 736 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_65_65;
#line 736 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_67_67;
#line 736 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_68_68;
#line 736 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_69_69;
#line 743 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_89_89;
#line 743 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_90_90;
#line 743 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_91_91;
#line 743 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_92_92;
#line 743 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_93_93;
#line 743 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_94_94;
#line 743 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_95_95;
#line 743 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_96_96;
#line 743 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_97_97;
#line 745 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_98_98;
#line 745 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_99_99;
#line 745 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_100_100;
#line 745 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_101_101;
#line 745 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_102_102;
#line 745 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_103_103;
#line 745 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_104_104;
#line 745 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_105_105;
#line 745 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_106_106;
#line 747 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_107_107;
#line 747 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_108_108;
#line 747 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_109_109;
#line 747 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_110_110;
#line 747 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_111_111;
#line 747 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_112_112;
#line 747 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_113_113;
#line 747 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_114_114;
#line 747 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_115_115;

#line 734 "xml_documentation.m"
          {
#line 734 "xml_documentation.m"
            check_hlds__xml_documentation__Id_15 = check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0((MR_String) "class", check_hlds__xml_documentation__Name_9, check_hlds__xml_documentation__Arity_10);
          }
#line 736 "xml_documentation.m"
          check_hlds__xml_documentation__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
#line 736 "xml_documentation.m"
          check_hlds__xml_documentation__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
#line 736 "xml_documentation.m"
          check_hlds__xml_documentation__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
#line 736 "xml_documentation.m"
          check_hlds__xml_documentation__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
#line 736 "xml_documentation.m"
          check_hlds__xml_documentation__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
#line 736 "xml_documentation.m"
          check_hlds__xml_documentation__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
#line 736 "xml_documentation.m"
          check_hlds__xml_documentation__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
#line 736 "xml_documentation.m"
          check_hlds__xml_documentation__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
#line 736 "xml_documentation.m"
          check_hlds__xml_documentation__TVarset_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
#line 736 "xml_documentation.m"
          check_hlds__xml_documentation__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
#line 740 "xml_documentation.m"
          {
#line 740 "xml_documentation.m"
            check_hlds__xml_documentation__XmlName_19 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_9);
          }
#line 742 "xml_documentation.m"
          {
#line 742 "xml_documentation.m"
            check_hlds__xml_documentation__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 742 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
#line 742 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 1) = ((MR_Box) (check_hlds__xml_documentation__class_documentation_6_p_0_1));
#line 742 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 742 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_17));
#line 742 "xml_documentation.m"
          }
#line 741 "xml_documentation.m"
          {
#line 741 "xml_documentation.m"
            check_hlds__xml_documentation__XmlClassVars_20 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0((MR_String) "class_vars", check_hlds__xml_documentation__V_31_31, check_hlds__xml_documentation__Vars_18);
          }
#line 744 "xml_documentation.m"
          {
#line 744 "xml_documentation.m"
            check_hlds__xml_documentation__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 744 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[1]));
#line 744 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 1) = ((MR_Box) (check_hlds__xml_documentation__class_documentation_6_p_0_2));
#line 744 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 744 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_17));
#line 744 "xml_documentation.m"
          }
#line 743 "xml_documentation.m"
          check_hlds__xml_documentation__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
#line 743 "xml_documentation.m"
          check_hlds__xml_documentation__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
#line 743 "xml_documentation.m"
          check_hlds__xml_documentation__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
#line 743 "xml_documentation.m"
          check_hlds__xml_documentation__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
#line 743 "xml_documentation.m"
          check_hlds__xml_documentation__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
#line 743 "xml_documentation.m"
          check_hlds__xml_documentation__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
#line 743 "xml_documentation.m"
          check_hlds__xml_documentation__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
#line 743 "xml_documentation.m"
          check_hlds__xml_documentation__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
#line 743 "xml_documentation.m"
          check_hlds__xml_documentation__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
#line 743 "xml_documentation.m"
          check_hlds__xml_documentation__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
#line 743 "xml_documentation.m"
          {
#line 743 "xml_documentation.m"
            check_hlds__xml_documentation__XmlSupers_21 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0((MR_String) "superclasses", check_hlds__xml_documentation__V_33_33, check_hlds__xml_documentation__V_34_34);
          }
#line 746 "xml_documentation.m"
          {
#line 746 "xml_documentation.m"
            check_hlds__xml_documentation__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 746 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_7[2]));
#line 746 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 1) = ((MR_Box) (check_hlds__xml_documentation__class_documentation_6_p_0_3));
#line 746 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 746 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_17));
#line 746 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 4) = ((MR_Box) (check_hlds__xml_documentation__Vars_18));
#line 746 "xml_documentation.m"
          }
#line 745 "xml_documentation.m"
          check_hlds__xml_documentation__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
#line 745 "xml_documentation.m"
          check_hlds__xml_documentation__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
#line 745 "xml_documentation.m"
          check_hlds__xml_documentation__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
#line 745 "xml_documentation.m"
          check_hlds__xml_documentation__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
#line 745 "xml_documentation.m"
          check_hlds__xml_documentation__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
#line 745 "xml_documentation.m"
          check_hlds__xml_documentation__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
#line 745 "xml_documentation.m"
          check_hlds__xml_documentation__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
#line 745 "xml_documentation.m"
          check_hlds__xml_documentation__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
#line 745 "xml_documentation.m"
          check_hlds__xml_documentation__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
#line 745 "xml_documentation.m"
          check_hlds__xml_documentation__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
#line 745 "xml_documentation.m"
          {
#line 745 "xml_documentation.m"
            check_hlds__xml_documentation__XmlFundeps_22 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_52_95_95_91_49_44_32_50_93_95_48_3_f_0((MR_String) "fundeps", check_hlds__xml_documentation__V_36_36, check_hlds__xml_documentation__V_37_37);
          }
#line 747 "xml_documentation.m"
          check_hlds__xml_documentation__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
#line 747 "xml_documentation.m"
          check_hlds__xml_documentation__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
#line 747 "xml_documentation.m"
          check_hlds__xml_documentation__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
#line 747 "xml_documentation.m"
          check_hlds__xml_documentation__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
#line 747 "xml_documentation.m"
          check_hlds__xml_documentation__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
#line 747 "xml_documentation.m"
          check_hlds__xml_documentation__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
#line 747 "xml_documentation.m"
          check_hlds__xml_documentation__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
#line 747 "xml_documentation.m"
          check_hlds__xml_documentation__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
#line 747 "xml_documentation.m"
          check_hlds__xml_documentation__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
#line 747 "xml_documentation.m"
          check_hlds__xml_documentation__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
#line 747 "xml_documentation.m"
          {
#line 747 "xml_documentation.m"
            check_hlds__xml_documentation__XmlMethods_23 = check_hlds__xml_documentation__class_methods_to_xml_3_f_0(check_hlds__xml_documentation__C_7, check_hlds__xml_documentation__PredTable_8, check_hlds__xml_documentation__V_38_38);
          }
#line 749 "xml_documentation.m"
          {
#line 749 "xml_documentation.m"
            check_hlds__xml_documentation__XmlVisibility_24 = check_hlds__xml_documentation__typeclass_visibility_to_xml_1_f_0(check_hlds__xml_documentation__TypeClassStatus_13);
          }
#line 750 "xml_documentation.m"
          {
#line 750 "xml_documentation.m"
            check_hlds__xml_documentation__XmlContext_25 = check_hlds__xml_documentation__prog_context_to_xml_1_f_0(check_hlds__xml_documentation__Context_16);
          }
#line 752 "xml_documentation.m"
          {
#line 752 "xml_documentation.m"
            check_hlds__xml_documentation__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 752 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_41_41, 0) = ((MR_Box) ((MR_String) "id"));
#line 752 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_41_41, 1) = ((MR_Box) (check_hlds__xml_documentation__Id_15));
#line 752 "xml_documentation.m"
          }
#line 752 "xml_documentation.m"
          {
#line 752 "xml_documentation.m"
            check_hlds__xml_documentation__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 0) = ((MR_Box) (check_hlds__xml_documentation__V_41_41));
#line 752 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 752 "xml_documentation.m"
          }
#line 754 "xml_documentation.m"
          {
#line 754 "xml_documentation.m"
            check_hlds__xml_documentation__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_50_50, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_25));
#line 754 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 754 "xml_documentation.m"
          }
#line 754 "xml_documentation.m"
          {
#line 754 "xml_documentation.m"
            check_hlds__xml_documentation__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_49_49, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_24));
#line 754 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_49_49, 1) = ((MR_Box) (check_hlds__xml_documentation__V_50_50));
#line 754 "xml_documentation.m"
          }
#line 754 "xml_documentation.m"
          {
#line 754 "xml_documentation.m"
            check_hlds__xml_documentation__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlMethods_23));
#line 754 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 1) = ((MR_Box) (check_hlds__xml_documentation__V_49_49));
#line 754 "xml_documentation.m"
          }
#line 754 "xml_documentation.m"
          {
#line 754 "xml_documentation.m"
            check_hlds__xml_documentation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlFundeps_22));
#line 754 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 1) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 754 "xml_documentation.m"
          }
#line 753 "xml_documentation.m"
          {
#line 753 "xml_documentation.m"
            check_hlds__xml_documentation__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlSupers_21));
#line 753 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 1) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 753 "xml_documentation.m"
          }
#line 753 "xml_documentation.m"
          {
#line 753 "xml_documentation.m"
            check_hlds__xml_documentation__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlClassVars_20));
#line 753 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 1) = ((MR_Box) (check_hlds__xml_documentation__V_46_46));
#line 753 "xml_documentation.m"
          }
#line 753 "xml_documentation.m"
          {
#line 753 "xml_documentation.m"
            check_hlds__xml_documentation__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_44_44, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_19));
#line 753 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_44_44, 1) = ((MR_Box) (check_hlds__xml_documentation__V_45_45));
#line 753 "xml_documentation.m"
          }
#line 752 "xml_documentation.m"
          {
#line 752 "xml_documentation.m"
            check_hlds__xml_documentation__Xml0_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 752 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_26, 0) = ((MR_Box) ((MR_String) "typeclass"));
#line 752 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_26, 1) = ((MR_Box) (check_hlds__xml_documentation__V_40_40));
#line 752 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_26, 2) = ((MR_Box) (check_hlds__xml_documentation__V_44_44));
#line 752 "xml_documentation.m"
          }
#line 756 "xml_documentation.m"
          {
#line 756 "xml_documentation.m"
            check_hlds__xml_documentation__Xml_12 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_7, check_hlds__xml_documentation__Context_16, check_hlds__xml_documentation__Xml0_26);
          }
#line 758 "xml_documentation.m"
          {
#line 758 "xml_documentation.m"
            MR_Word base;
#line 758 "xml_documentation.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "xml_documentation.m"
            *check_hlds__xml_documentation__STATE_VARIABLE_Xml_28 = base;
#line 758 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_12));
#line 758 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27));
#line 758 "xml_documentation.m"
          }
#line 733 "xml_documentation.m"
        }
#line 759 "xml_documentation.m"
        break;
#line 759 "xml_documentation.m"
    }
#line 728 "xml_documentation.m"
  }
#line 724 "xml_documentation.m"
}

#line 705 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__arity_to_xml_1_f_0(
#line 705 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Arity_3)
#line 705 "xml_documentation.m"
{
#line 707 "xml_documentation.m"
  {
#line 707 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 707 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
#line 707 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_8_8;
#line 707 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;
#line 707 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_10_10;

#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_10_10 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_3);
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_9_9, 0) = ((MR_Box) (check_hlds__xml_documentation__V_10_10));
#line 927 "xml_documentation.m"
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "xml_documentation.m"
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "arity"));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 927 "xml_documentation.m"
    }
#line 707 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 707 "xml_documentation.m"
  }
#line 705 "xml_documentation.m"
}

#line 676 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__cons_id_to_xml_1_f_0(
#line 676 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
#line 676 "xml_documentation.m"
{
#line 678 "xml_documentation.m"
  {
#line 678 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 678 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;

#line 678 "xml_documentation.m"
#line 678 "xml_documentation.m"
    switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) {
#line 678 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 678 "xml_documentation.m"
      case (MR_Integer) 0:
#line 695 "xml_documentation.m"
        {
#line 696 "xml_documentation.m"
          {
#line 696 "xml_documentation.m"
            return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typeclass_info_cell_constructor");
          }
#line 695 "xml_documentation.m"
        }
#line 678 "xml_documentation.m"
        break;
#line 678 "xml_documentation.m"
      case (MR_Integer) 1:
#line 693 "xml_documentation.m"
        {
#line 694 "xml_documentation.m"
          {
#line 694 "xml_documentation.m"
            return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "type_info_cell_constructor");
          }
#line 693 "xml_documentation.m"
        }
#line 678 "xml_documentation.m"
        break;
#line 678 "xml_documentation.m"
      case (MR_Integer) 2:
#line 700 "xml_documentation.m"
        {
#line 700 "xml_documentation.m"
          {
#line 700 "xml_documentation.m"
            return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "tabling_info_const");
          }
#line 700 "xml_documentation.m"
        }
#line 678 "xml_documentation.m"
        break;
#line 678 "xml_documentation.m"
      case (MR_Integer) 3:
#line 678 "xml_documentation.m"
#line 678 "xml_documentation.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) {
#line 678 "xml_documentation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 678 "xml_documentation.m"
          case (MR_Integer) 0:
#line 701 "xml_documentation.m"
            {
#line 701 "xml_documentation.m"
              {
#line 701 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "table_io_entry_desc");
              }
#line 701 "xml_documentation.m"
            }
#line 678 "xml_documentation.m"
            break;
#line 678 "xml_documentation.m"
          case (MR_Integer) 1:
#line 702 "xml_documentation.m"
            {
#line 703 "xml_documentation.m"
              {
#line 703 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "deep_profiling_proc_layout");
              }
#line 702 "xml_documentation.m"
            }
#line 678 "xml_documentation.m"
            break;
#line 678 "xml_documentation.m"
          case (MR_Integer) 2:
#line 678 "xml_documentation.m"
            {
#line 678 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 678 "xml_documentation.m"
              MR_Integer check_hlds__xml_documentation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 2)));
#line 678 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_8_8;
#line 678 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_9_9;
#line 678 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_10_10;
#line 678 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_11_11;
#line 678 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_89_89;
#line 678 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_90_90;
#line 678 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_91_91;
#line 678 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 3)));

#line 679 "xml_documentation.m"
              {
#line 679 "xml_documentation.m"
                check_hlds__xml_documentation__V_9_9 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_3);
              }
#line 927 "xml_documentation.m"
              {
#line 927 "xml_documentation.m"
                check_hlds__xml_documentation__V_91_91 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_4);
              }
#line 927 "xml_documentation.m"
              {
#line 927 "xml_documentation.m"
                check_hlds__xml_documentation__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_90_90, 0) = ((MR_Box) (check_hlds__xml_documentation__V_91_91));
#line 927 "xml_documentation.m"
              }
#line 927 "xml_documentation.m"
              {
#line 927 "xml_documentation.m"
                check_hlds__xml_documentation__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_89_89, 0) = ((MR_Box) (check_hlds__xml_documentation__V_90_90));
#line 927 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "xml_documentation.m"
              }
#line 927 "xml_documentation.m"
              {
#line 927 "xml_documentation.m"
                check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 927 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) ((MR_String) "arity"));
#line 927 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 2) = ((MR_Box) (check_hlds__xml_documentation__V_89_89));
#line 927 "xml_documentation.m"
              }
#line 679 "xml_documentation.m"
              {
#line 679 "xml_documentation.m"
                check_hlds__xml_documentation__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 0) = ((MR_Box) (check_hlds__xml_documentation__V_11_11));
#line 679 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "xml_documentation.m"
              }
#line 679 "xml_documentation.m"
              {
#line 679 "xml_documentation.m"
                check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 679 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 1) = ((MR_Box) (check_hlds__xml_documentation__V_10_10));
#line 679 "xml_documentation.m"
              }
#line 679 "xml_documentation.m"
              {
#line 679 "xml_documentation.m"
                check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 679 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "cons"));
#line 679 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 679 "xml_documentation.m"
              }
#line 678 "xml_documentation.m"
            }
#line 678 "xml_documentation.m"
            break;
#line 678 "xml_documentation.m"
          case (MR_Integer) 3:
#line 682 "xml_documentation.m"
            {
#line 682 "xml_documentation.m"
              MR_Integer check_hlds__xml_documentation__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 682 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_16_16;
#line 682 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_17_17;
#line 682 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_20_20;
#line 682 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_21_21;

#line 683 "xml_documentation.m"
              {
#line 683 "xml_documentation.m"
                check_hlds__xml_documentation__V_17_17 = check_hlds__xml_documentation__name_to_xml_1_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_5[3]);
              }
#line 683 "xml_documentation.m"
              {
#line 683 "xml_documentation.m"
                check_hlds__xml_documentation__V_21_21 = check_hlds__xml_documentation__arity_to_xml_1_f_0(check_hlds__xml_documentation__Arity_13);
              }
#line 683 "xml_documentation.m"
              {
#line 683 "xml_documentation.m"
                check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 683 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "xml_documentation.m"
              }
#line 683 "xml_documentation.m"
              {
#line 683 "xml_documentation.m"
                check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 683 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (check_hlds__xml_documentation__V_20_20));
#line 683 "xml_documentation.m"
              }
#line 683 "xml_documentation.m"
              {
#line 683 "xml_documentation.m"
                check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 683 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "cons"));
#line 683 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 683 "xml_documentation.m"
              }
#line 682 "xml_documentation.m"
            }
#line 678 "xml_documentation.m"
            break;
#line 678 "xml_documentation.m"
          case (MR_Integer) 4:
#line 689 "xml_documentation.m"
            {
#line 939 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[20];
#line 689 "xml_documentation.m"
            }
#line 678 "xml_documentation.m"
            break;
#line 678 "xml_documentation.m"
          case (MR_Integer) 5:
#line 684 "xml_documentation.m"
            {
#line 684 "xml_documentation.m"
              MR_Integer check_hlds__xml_documentation__I_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));

#line 684 "xml_documentation.m"
              {
#line 684 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__tagged_int_2_f_0((MR_String) "int", check_hlds__xml_documentation__I_23);
              }
#line 684 "xml_documentation.m"
            }
#line 678 "xml_documentation.m"
            break;
#line 678 "xml_documentation.m"
          case (MR_Integer) 6:
#line 685 "xml_documentation.m"
            {
#line 685 "xml_documentation.m"
              MR_Float check_hlds__xml_documentation__F_25 = MR_unbox_float((MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));

#line 685 "xml_documentation.m"
              {
#line 685 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__tagged_float_2_f_0((MR_String) "float", check_hlds__xml_documentation__F_25);
              }
#line 685 "xml_documentation.m"
            }
#line 678 "xml_documentation.m"
            break;
#line 678 "xml_documentation.m"
          case (MR_Integer) 7:
#line 686 "xml_documentation.m"
            {
#line 686 "xml_documentation.m"
              MR_Char check_hlds__xml_documentation__C_27 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 686 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_72_72;
#line 686 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_73_73;
#line 686 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_74_74;

#line 935 "xml_documentation.m"
              {
#line 935 "xml_documentation.m"
                check_hlds__xml_documentation__V_74_74 = mercury__string__char_to_string_1_f_0(check_hlds__xml_documentation__C_27);
              }
#line 935 "xml_documentation.m"
              {
#line 935 "xml_documentation.m"
                check_hlds__xml_documentation__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 935 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_73_73, 0) = ((MR_Box) (check_hlds__xml_documentation__V_74_74));
#line 935 "xml_documentation.m"
              }
#line 935 "xml_documentation.m"
              {
#line 935 "xml_documentation.m"
                check_hlds__xml_documentation__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_72_72, 0) = ((MR_Box) (check_hlds__xml_documentation__V_73_73));
#line 935 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "xml_documentation.m"
              }
#line 935 "xml_documentation.m"
              {
#line 935 "xml_documentation.m"
                check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 935 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "char"));
#line 935 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_72_72));
#line 935 "xml_documentation.m"
              }
#line 686 "xml_documentation.m"
            }
#line 678 "xml_documentation.m"
            break;
#line 678 "xml_documentation.m"
          case (MR_Integer) 8:
#line 687 "xml_documentation.m"
            {
#line 687 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__S_29 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));

#line 687 "xml_documentation.m"
              {
#line 687 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__tagged_string_2_f_0((MR_String) "string", check_hlds__xml_documentation__S_29);
              }
#line 687 "xml_documentation.m"
            }
#line 678 "xml_documentation.m"
            break;
#line 678 "xml_documentation.m"
          case (MR_Integer) 9:
#line 688 "xml_documentation.m"
            {
#line 688 "xml_documentation.m"
              {
#line 688 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "impl_defined_const");
              }
#line 688 "xml_documentation.m"
            }
#line 678 "xml_documentation.m"
            break;
#line 678 "xml_documentation.m"
          case (MR_Integer) 10:
#line 690 "xml_documentation.m"
            {
#line 690 "xml_documentation.m"
              {
#line 690 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "type_ctor_info_const");
              }
#line 690 "xml_documentation.m"
            }
#line 678 "xml_documentation.m"
            break;
#line 678 "xml_documentation.m"
          case (MR_Integer) 11:
#line 691 "xml_documentation.m"
            {
#line 939 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[19];
#line 691 "xml_documentation.m"
            }
#line 678 "xml_documentation.m"
            break;
#line 678 "xml_documentation.m"
          case (MR_Integer) 12:
#line 697 "xml_documentation.m"
            {
#line 697 "xml_documentation.m"
              {
#line 697 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "type_info_const");
              }
#line 697 "xml_documentation.m"
            }
#line 678 "xml_documentation.m"
            break;
#line 678 "xml_documentation.m"
          case (MR_Integer) 13:
#line 698 "xml_documentation.m"
            {
#line 698 "xml_documentation.m"
              {
#line 698 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typeclass_info_const");
              }
#line 698 "xml_documentation.m"
            }
#line 678 "xml_documentation.m"
            break;
#line 678 "xml_documentation.m"
          case (MR_Integer) 14:
#line 699 "xml_documentation.m"
            {
#line 699 "xml_documentation.m"
              {
#line 699 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "ground_term_const");
              }
#line 699 "xml_documentation.m"
            }
#line 678 "xml_documentation.m"
            break;
#line 678 "xml_documentation.m"
        }
#line 678 "xml_documentation.m"
        break;
#line 678 "xml_documentation.m"
    }
#line 678 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 678 "xml_documentation.m"
  }
#line 676 "xml_documentation.m"
}

#line 673 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0_1(
#line 673 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 673 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 673 "xml_documentation.m"
{
#line 673 "xml_documentation.m"
  {
#line 673 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 673 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 673 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 673 "xml_documentation.m"
    {
#line 673 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 673 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 673 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 673 "xml_documentation.m"
  }
#line 673 "xml_documentation.m"
}

#line 669 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0(
#line 669 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 669 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 669 "xml_documentation.m"
{
#line 671 "xml_documentation.m"
  {
#line 671 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 671 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_7;
#line 671 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 671 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 671 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlCons_8;
#line 671 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlInsts_9;
#line 671 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11;
#line 671 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_14_14;
#line 671 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_15_15;
#line 671 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_24_24;

#line 672 "xml_documentation.m"
    {
#line 672 "xml_documentation.m"
      check_hlds__xml_documentation__XmlCons_8 = check_hlds__xml_documentation__cons_id_to_xml_1_f_0(check_hlds__xml_documentation__ConsId_5);
    }
#line 673 "xml_documentation.m"
    {
#line 673 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 673 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[3]));
#line 673 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 1) = ((MR_Box) (check_hlds__xml_documentation__bound_inst_to_xml_2_f_0_1));
#line 673 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 673 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
#line 673 "xml_documentation.m"
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__V_24_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__Insts_6);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__XmlInsts_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_9, 0) = ((MR_Box) ((MR_String) "insts"));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 945 "xml_documentation.m"
    }
#line 674 "xml_documentation.m"
    {
#line 674 "xml_documentation.m"
      check_hlds__xml_documentation__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_15_15, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlInsts_9));
#line 674 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "xml_documentation.m"
    }
#line 674 "xml_documentation.m"
    {
#line 674 "xml_documentation.m"
      check_hlds__xml_documentation__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_14_14, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlCons_8));
#line 674 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_14_14, 1) = ((MR_Box) (check_hlds__xml_documentation__V_15_15));
#line 674 "xml_documentation.m"
    }
#line 674 "xml_documentation.m"
    {
#line 674 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 674 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 0) = ((MR_Box) ((MR_String) "bound_functor"));
#line 674 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 2) = ((MR_Box) (check_hlds__xml_documentation__V_14_14));
#line 674 "xml_documentation.m"
    }
#line 671 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_7;
#line 671 "xml_documentation.m"
  }
#line 669 "xml_documentation.m"
}

#line 654 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0_1(
#line 654 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 654 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 654 "xml_documentation.m"
{
#line 654 "xml_documentation.m"
  {
#line 654 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 654 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 654 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 654 "xml_documentation.m"
    {
#line 654 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 654 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 654 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 654 "xml_documentation.m"
  }
#line 654 "xml_documentation.m"
}

#line 649 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0(
#line 649 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_1,
#line 649 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 649 "xml_documentation.m"
{
#line 651 "xml_documentation.m"
  {
#line 651 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 651 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;

#line 651 "xml_documentation.m"
#line 651 "xml_documentation.m"
    switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) {
#line 651 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 651 "xml_documentation.m"
      case (MR_Integer) 0:
#line 651 "xml_documentation.m"
        {
#line 651 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 651 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 651 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Ref_8;
#line 651 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlName_9;
#line 651 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlInsts_10;
#line 651 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_12_12;
#line 651 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__V_14_14;
#line 651 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_16_16;
#line 651 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_18_18;
#line 651 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_20_20;
#line 651 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_21_21;

#line 652 "xml_documentation.m"
          {
#line 652 "xml_documentation.m"
            check_hlds__xml_documentation__V_14_14 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__xml_documentation__Insts_6);
          }
#line 652 "xml_documentation.m"
          {
#line 652 "xml_documentation.m"
            check_hlds__xml_documentation__V_12_12 = check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0((MR_String) "inst", check_hlds__xml_documentation__Name_5, check_hlds__xml_documentation__V_14_14);
          }
#line 652 "xml_documentation.m"
          {
#line 652 "xml_documentation.m"
            check_hlds__xml_documentation__Ref_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 652 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_8, 0) = ((MR_Box) ((MR_String) "ref"));
#line 652 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_8, 1) = ((MR_Box) (check_hlds__xml_documentation__V_12_12));
#line 652 "xml_documentation.m"
          }
#line 653 "xml_documentation.m"
          {
#line 653 "xml_documentation.m"
            check_hlds__xml_documentation__XmlName_9 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_5);
          }
#line 654 "xml_documentation.m"
          {
#line 654 "xml_documentation.m"
            check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 654 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[3]));
#line 654 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (check_hlds__xml_documentation__inst_name_to_xml_2_f_0_1));
#line 654 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 654 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_1));
#line 654 "xml_documentation.m"
          }
#line 654 "xml_documentation.m"
          {
#line 654 "xml_documentation.m"
            check_hlds__xml_documentation__XmlInsts_10 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_54_95_95_91_49_93_95_48_3_f_0((MR_String) "inst_args", check_hlds__xml_documentation__V_16_16, check_hlds__xml_documentation__Insts_6);
          }
#line 655 "xml_documentation.m"
          {
#line 655 "xml_documentation.m"
            check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (check_hlds__xml_documentation__Ref_8));
#line 655 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "xml_documentation.m"
          }
#line 655 "xml_documentation.m"
          {
#line 655 "xml_documentation.m"
            check_hlds__xml_documentation__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlInsts_10));
#line 655 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "xml_documentation.m"
          }
#line 655 "xml_documentation.m"
          {
#line 655 "xml_documentation.m"
            check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_9));
#line 655 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 655 "xml_documentation.m"
          }
#line 655 "xml_documentation.m"
          {
#line 655 "xml_documentation.m"
            check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 655 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "user_inst"));
#line 655 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__xml_documentation__V_18_18));
#line 655 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_20_20));
#line 655 "xml_documentation.m"
          }
#line 651 "xml_documentation.m"
        }
#line 651 "xml_documentation.m"
        break;
#line 651 "xml_documentation.m"
      case (MR_Integer) 1:
#line 656 "xml_documentation.m"
        {
#line 656 "xml_documentation.m"
          {
#line 656 "xml_documentation.m"
            return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "unify_inst");
          }
#line 656 "xml_documentation.m"
        }
#line 651 "xml_documentation.m"
        break;
#line 651 "xml_documentation.m"
      case (MR_Integer) 2:
#line 657 "xml_documentation.m"
        {
#line 939 "xml_documentation.m"
          check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[17];
#line 657 "xml_documentation.m"
        }
#line 651 "xml_documentation.m"
        break;
#line 651 "xml_documentation.m"
      case (MR_Integer) 3:
#line 651 "xml_documentation.m"
#line 651 "xml_documentation.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)))) {
#line 651 "xml_documentation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 651 "xml_documentation.m"
          case (MR_Integer) 0:
#line 658 "xml_documentation.m"
            {
#line 939 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[16];
#line 658 "xml_documentation.m"
            }
#line 651 "xml_documentation.m"
            break;
#line 651 "xml_documentation.m"
          case (MR_Integer) 1:
#line 659 "xml_documentation.m"
            {
#line 939 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[15];
#line 659 "xml_documentation.m"
            }
#line 651 "xml_documentation.m"
            break;
#line 651 "xml_documentation.m"
          case (MR_Integer) 2:
#line 660 "xml_documentation.m"
            {
#line 660 "xml_documentation.m"
              {
#line 660 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "shared_inst");
              }
#line 660 "xml_documentation.m"
            }
#line 651 "xml_documentation.m"
            break;
#line 651 "xml_documentation.m"
          case (MR_Integer) 3:
#line 661 "xml_documentation.m"
            {
#line 939 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[18];
#line 661 "xml_documentation.m"
            }
#line 651 "xml_documentation.m"
            break;
#line 651 "xml_documentation.m"
          case (MR_Integer) 4:
#line 662 "xml_documentation.m"
            {
#line 662 "xml_documentation.m"
              {
#line 662 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typed_ground");
              }
#line 662 "xml_documentation.m"
            }
#line 651 "xml_documentation.m"
            break;
#line 651 "xml_documentation.m"
          case (MR_Integer) 5:
#line 663 "xml_documentation.m"
            {
#line 663 "xml_documentation.m"
              {
#line 663 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typed_inst");
              }
#line 663 "xml_documentation.m"
            }
#line 651 "xml_documentation.m"
            break;
#line 651 "xml_documentation.m"
        }
#line 651 "xml_documentation.m"
        break;
#line 651 "xml_documentation.m"
    }
#line 651 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_3;
#line 651 "xml_documentation.m"
  }
#line 649 "xml_documentation.m"
}

#line 619 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_1(
#line 619 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 619 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 619 "xml_documentation.m"
{
#line 619 "xml_documentation.m"
  {
#line 619 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 619 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 619 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_7;

#line 619 "xml_documentation.m"
    {
#line 619 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_7 = check_hlds__xml_documentation__bound_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 619 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_7));
#line 619 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 619 "xml_documentation.m"
  }
#line 619 "xml_documentation.m"
}

#line 607 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(
#line 607 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 607 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Inst_5)
#line 607 "xml_documentation.m"
{
#line 611 "xml_documentation.m"
  while (MR_TRUE)
#line 611 "xml_documentation.m"
    {
#line 611 "xml_documentation.m"
      /* tailcall optimized into a loop */
#line 611 "xml_documentation.m"
      {
#line 611 "xml_documentation.m"
        MR_bool check_hlds__xml_documentation__succeeded;
#line 611 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Xml_6;

#line 611 "xml_documentation.m"
#line 611 "xml_documentation.m"
        switch (MR_tag((MR_Word) check_hlds__xml_documentation__Inst_5)) {
#line 611 "xml_documentation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 611 "xml_documentation.m"
          case (MR_Integer) 0:
#line 611 "xml_documentation.m"
#line 611 "xml_documentation.m"
            switch (MR_unmkbody(check_hlds__xml_documentation__Inst_5)) {
#line 611 "xml_documentation.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 611 "xml_documentation.m"
              case (MR_Integer) 0:
#line 611 "xml_documentation.m"
                {
#line 612 "xml_documentation.m"
                  check_hlds__xml_documentation__Xml_6 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[13];
#line 611 "xml_documentation.m"
                }
#line 611 "xml_documentation.m"
                break;
#line 611 "xml_documentation.m"
              case (MR_Integer) 1:
#line 629 "xml_documentation.m"
                {
#line 630 "xml_documentation.m"
                  check_hlds__xml_documentation__Xml_6 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[14];
#line 629 "xml_documentation.m"
                }
#line 611 "xml_documentation.m"
                break;
#line 611 "xml_documentation.m"
            }
#line 611 "xml_documentation.m"
            break;
#line 611 "xml_documentation.m"
          case (MR_Integer) 1:
#line 614 "xml_documentation.m"
            {
#line 615 "xml_documentation.m"
              check_hlds__xml_documentation__Xml_6 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[13];
#line 614 "xml_documentation.m"
            }
#line 611 "xml_documentation.m"
            break;
#line 611 "xml_documentation.m"
          case (MR_Integer) 2:
#line 626 "xml_documentation.m"
            {
#line 626 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_35_35;
#line 626 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_36_36;
#line 626 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__U_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__Inst_5, (MR_Integer) 0)));
#line 626 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_64_64;
#line 626 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_69_69;
#line 626 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_70_70;
#line 626 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));

#line 667 "xml_documentation.m"
              {
#line 667 "xml_documentation.m"
                check_hlds__xml_documentation__V_64_64 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0, ((MR_Box) (check_hlds__xml_documentation__U_57)));
              }
#line 939 "xml_documentation.m"
              {
#line 939 "xml_documentation.m"
                check_hlds__xml_documentation__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_70_70, 0) = ((MR_Box) (check_hlds__xml_documentation__V_64_64));
#line 939 "xml_documentation.m"
              }
#line 939 "xml_documentation.m"
              {
#line 939 "xml_documentation.m"
                check_hlds__xml_documentation__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_69_69, 0) = ((MR_Box) (check_hlds__xml_documentation__V_70_70));
#line 939 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
              }
#line 939 "xml_documentation.m"
              {
#line 939 "xml_documentation.m"
                check_hlds__xml_documentation__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 0) = ((MR_Box) ((MR_String) "uniqueness"));
#line 939 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 2) = ((MR_Box) (check_hlds__xml_documentation__V_69_69));
#line 939 "xml_documentation.m"
              }
#line 627 "xml_documentation.m"
              {
#line 627 "xml_documentation.m"
                check_hlds__xml_documentation__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_35_35, 0) = ((MR_Box) (check_hlds__xml_documentation__V_36_36));
#line 627 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 627 "xml_documentation.m"
              }
#line 627 "xml_documentation.m"
              {
#line 627 "xml_documentation.m"
                check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 627 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "any"));
#line 627 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 627 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_35_35));
#line 627 "xml_documentation.m"
              }
#line 626 "xml_documentation.m"
            }
#line 611 "xml_documentation.m"
            break;
#line 611 "xml_documentation.m"
          case (MR_Integer) 3:
#line 611 "xml_documentation.m"
#line 611 "xml_documentation.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 0)))) {
#line 611 "xml_documentation.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 611 "xml_documentation.m"
              case (MR_Integer) 0:
#line 617 "xml_documentation.m"
                {
#line 617 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__U_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
#line 617 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 3)));
#line 617 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__XmlUniq_11;
#line 617 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__XmlInsts_12;
#line 617 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_44_44;
#line 617 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_47_47;
#line 617 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_48_48;
#line 617 "xml_documentation.m"
                  MR_String check_hlds__xml_documentation__V_74_74;
#line 617 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_79_79;
#line 617 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_80_80;
#line 617 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_86_86;
#line 617 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));

#line 667 "xml_documentation.m"
                  {
#line 667 "xml_documentation.m"
                    check_hlds__xml_documentation__V_74_74 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0, ((MR_Box) (check_hlds__xml_documentation__U_8)));
                  }
#line 939 "xml_documentation.m"
                  {
#line 939 "xml_documentation.m"
                    check_hlds__xml_documentation__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_80_80, 0) = ((MR_Box) (check_hlds__xml_documentation__V_74_74));
#line 939 "xml_documentation.m"
                  }
#line 939 "xml_documentation.m"
                  {
#line 939 "xml_documentation.m"
                    check_hlds__xml_documentation__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_79_79, 0) = ((MR_Box) (check_hlds__xml_documentation__V_80_80));
#line 939 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
                  }
#line 939 "xml_documentation.m"
                  {
#line 939 "xml_documentation.m"
                    check_hlds__xml_documentation__XmlUniq_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUniq_11, 0) = ((MR_Box) ((MR_String) "uniqueness"));
#line 939 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUniq_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUniq_11, 2) = ((MR_Box) (check_hlds__xml_documentation__V_79_79));
#line 939 "xml_documentation.m"
                  }
#line 619 "xml_documentation.m"
                  {
#line 619 "xml_documentation.m"
                    check_hlds__xml_documentation__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 619 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_44_44, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[4]));
#line 619 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_44_44, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_1));
#line 619 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 619 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_44_44, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
#line 619 "xml_documentation.m"
                  }
#line 945 "xml_documentation.m"
                  {
#line 945 "xml_documentation.m"
                    check_hlds__xml_documentation__V_86_86 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_44_44, check_hlds__xml_documentation__BoundInsts_10);
                  }
#line 945 "xml_documentation.m"
                  {
#line 945 "xml_documentation.m"
                    check_hlds__xml_documentation__XmlInsts_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_12, 0) = ((MR_Box) ((MR_String) "bound_insts"));
#line 945 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_12, 2) = ((MR_Box) (check_hlds__xml_documentation__V_86_86));
#line 945 "xml_documentation.m"
                  }
#line 621 "xml_documentation.m"
                  {
#line 621 "xml_documentation.m"
                    check_hlds__xml_documentation__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlInsts_12));
#line 621 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "xml_documentation.m"
                  }
#line 621 "xml_documentation.m"
                  {
#line 621 "xml_documentation.m"
                    check_hlds__xml_documentation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlUniq_11));
#line 621 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 1) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 621 "xml_documentation.m"
                  }
#line 621 "xml_documentation.m"
                  {
#line 621 "xml_documentation.m"
                    check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "bound"));
#line 621 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 621 "xml_documentation.m"
                  }
#line 617 "xml_documentation.m"
                }
#line 611 "xml_documentation.m"
                break;
#line 611 "xml_documentation.m"
              case (MR_Integer) 1:
#line 623 "xml_documentation.m"
                {
#line 623 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_40_40;
#line 623 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_41_41;
#line 623 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__U_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
#line 623 "xml_documentation.m"
                  MR_String check_hlds__xml_documentation__V_91_91;
#line 623 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_96_96;
#line 623 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_97_97;
#line 623 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));

#line 667 "xml_documentation.m"
                  {
#line 667 "xml_documentation.m"
                    check_hlds__xml_documentation__V_91_91 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0, ((MR_Box) (check_hlds__xml_documentation__U_56)));
                  }
#line 939 "xml_documentation.m"
                  {
#line 939 "xml_documentation.m"
                    check_hlds__xml_documentation__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_97_97, 0) = ((MR_Box) (check_hlds__xml_documentation__V_91_91));
#line 939 "xml_documentation.m"
                  }
#line 939 "xml_documentation.m"
                  {
#line 939 "xml_documentation.m"
                    check_hlds__xml_documentation__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_96_96, 0) = ((MR_Box) (check_hlds__xml_documentation__V_97_97));
#line 939 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
                  }
#line 939 "xml_documentation.m"
                  {
#line 939 "xml_documentation.m"
                    check_hlds__xml_documentation__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_41_41, 0) = ((MR_Box) ((MR_String) "uniqueness"));
#line 939 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_41_41, 2) = ((MR_Box) (check_hlds__xml_documentation__V_96_96));
#line 939 "xml_documentation.m"
                  }
#line 624 "xml_documentation.m"
                  {
#line 624 "xml_documentation.m"
                    check_hlds__xml_documentation__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 0) = ((MR_Box) (check_hlds__xml_documentation__V_41_41));
#line 624 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 624 "xml_documentation.m"
                  }
#line 624 "xml_documentation.m"
                  {
#line 624 "xml_documentation.m"
                    check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 624 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "ground"));
#line 624 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 624 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_40_40));
#line 624 "xml_documentation.m"
                  }
#line 623 "xml_documentation.m"
                }
#line 611 "xml_documentation.m"
                break;
#line 611 "xml_documentation.m"
              case (MR_Integer) 2:
#line 632 "xml_documentation.m"
                {
#line 632 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__InstVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
#line 632 "xml_documentation.m"
                  MR_String check_hlds__xml_documentation__InstVarName_16;

#line 633 "xml_documentation.m"
                  {
#line 633 "xml_documentation.m"
                    check_hlds__xml_documentation__InstVarName_16 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, check_hlds__xml_documentation__InstVarSet_4, check_hlds__xml_documentation__InstVar_15);
                  }
#line 634 "xml_documentation.m"
                  {
#line 634 "xml_documentation.m"
                    return check_hlds__xml_documentation__Xml_6 = check_hlds__xml_documentation__tagged_string_2_f_0((MR_String) "inst_var", check_hlds__xml_documentation__InstVarName_16);
                  }
#line 632 "xml_documentation.m"
                }
#line 611 "xml_documentation.m"
                break;
#line 611 "xml_documentation.m"
              case (MR_Integer) 3:
#line 636 "xml_documentation.m"
                {
#line 636 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__SubInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));
#line 636 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));

#line 638 "xml_documentation.m"
                  /* direct tailcall eliminated */
#line 638 "xml_documentation.m"
                  {
#line 638 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__Inst__tmp_copy_5 = check_hlds__xml_documentation__SubInst_18;

#line 638 "xml_documentation.m"
                    check_hlds__xml_documentation__Inst_5 = check_hlds__xml_documentation__Inst__tmp_copy_5;
#line 638 "xml_documentation.m"
                  }
#line 638 "xml_documentation.m"
                  continue;
#line 636 "xml_documentation.m"
                }
#line 611 "xml_documentation.m"
                break;
#line 611 "xml_documentation.m"
              case (MR_Integer) 4:
#line 640 "xml_documentation.m"
                {
#line 640 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
#line 640 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__XmlName_20;
#line 640 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_27_27;

#line 641 "xml_documentation.m"
                  {
#line 641 "xml_documentation.m"
                    check_hlds__xml_documentation__XmlName_20 = check_hlds__xml_documentation__inst_name_to_xml_2_f_0(check_hlds__xml_documentation__InstVarSet_4, check_hlds__xml_documentation__Name_19);
                  }
#line 642 "xml_documentation.m"
                  {
#line 642 "xml_documentation.m"
                    check_hlds__xml_documentation__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_27_27, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_20));
#line 642 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "xml_documentation.m"
                  }
#line 642 "xml_documentation.m"
                  {
#line 642 "xml_documentation.m"
                    check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 642 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "defined_inst"));
#line 642 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_27_27));
#line 642 "xml_documentation.m"
                  }
#line 640 "xml_documentation.m"
                }
#line 611 "xml_documentation.m"
                break;
#line 611 "xml_documentation.m"
              case (MR_Integer) 5:
#line 644 "xml_documentation.m"
                {
#line 644 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
#line 644 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__ArgInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));
#line 644 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_23_23;
#line 644 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_24_24;

#line 646 "xml_documentation.m"
                  {
#line 646 "xml_documentation.m"
                    check_hlds__xml_documentation__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 646 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_24_24, 0) = ((MR_Box) (check_hlds__xml_documentation__SymName_21));
#line 646 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_24_24, 1) = ((MR_Box) (check_hlds__xml_documentation__ArgInsts_22));
#line 646 "xml_documentation.m"
                  }
#line 646 "xml_documentation.m"
                  {
#line 646 "xml_documentation.m"
                    check_hlds__xml_documentation__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "xml_documentation.m"
                    MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 646 "xml_documentation.m"
                    MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__V_23_23, 1) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 646 "xml_documentation.m"
                  }
#line 645 "xml_documentation.m"
                  /* direct tailcall eliminated */
#line 645 "xml_documentation.m"
                  {
#line 645 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__Inst__tmp_copy_5 = check_hlds__xml_documentation__V_23_23;

#line 645 "xml_documentation.m"
                    check_hlds__xml_documentation__Inst_5 = check_hlds__xml_documentation__Inst__tmp_copy_5;
#line 645 "xml_documentation.m"
                  }
#line 645 "xml_documentation.m"
                  continue;
#line 644 "xml_documentation.m"
                }
#line 611 "xml_documentation.m"
                break;
#line 611 "xml_documentation.m"
            }
#line 611 "xml_documentation.m"
            break;
#line 611 "xml_documentation.m"
        }
#line 611 "xml_documentation.m"
        return check_hlds__xml_documentation__Xml_6;
#line 611 "xml_documentation.m"
      }
#line 611 "xml_documentation.m"
      break;
#line 611 "xml_documentation.m"
    }
#line 607 "xml_documentation.m"
}

#line 603 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_2(
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
    MR_Word check_hlds__xml_documentation__conv1_Xml_6;

#line 603 "xml_documentation.m"
    {
#line 603 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 603 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_Xml_6));
#line 603 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 603 "xml_documentation.m"
  }
#line 603 "xml_documentation.m"
}

#line 596 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_1(
#line 596 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 596 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 596 "xml_documentation.m"
{
#line 596 "xml_documentation.m"
  {
#line 596 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 596 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 596 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 596 "xml_documentation.m"
    {
#line 596 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 596 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 596 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 596 "xml_documentation.m"
  }
#line 596 "xml_documentation.m"
}

#line 591 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0(
#line 591 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 591 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Mode_5)
#line 591 "xml_documentation.m"
{
#line 595 "xml_documentation.m"
  {
#line 595 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 595 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_6;

#line 595 "xml_documentation.m"
    if (((MR_tag((MR_Word) check_hlds__xml_documentation__Mode_5)) == (MR_mktag((MR_Integer) 0))))
#line 595 "xml_documentation.m"
      {
#line 595 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__A_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Mode_5, (MR_Integer) 0)));
#line 595 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Mode_5, (MR_Integer) 1)));
#line 595 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlFrom_9;
#line 595 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlTo_10;
#line 595 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_29_29;
#line 595 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_30_30;
#line 595 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_34_34;
#line 595 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_38_38;
#line 595 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_39_39;
#line 595 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_53_53;
#line 595 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_60_60;

#line 596 "xml_documentation.m"
        {
#line 596 "xml_documentation.m"
          check_hlds__xml_documentation__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 596 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[3]));
#line 596 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_1));
#line 596 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 596 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
#line 596 "xml_documentation.m"
        }
#line 596 "xml_documentation.m"
        {
#line 596 "xml_documentation.m"
          check_hlds__xml_documentation__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_30_30, 0) = ((MR_Box) (check_hlds__xml_documentation__A_7));
#line 596 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "xml_documentation.m"
        }
#line 945 "xml_documentation.m"
        {
#line 945 "xml_documentation.m"
          check_hlds__xml_documentation__V_53_53 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_29_29, check_hlds__xml_documentation__V_30_30);
        }
#line 945 "xml_documentation.m"
        {
#line 945 "xml_documentation.m"
          check_hlds__xml_documentation__XmlFrom_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlFrom_9, 0) = ((MR_Box) ((MR_String) "from"));
#line 945 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlFrom_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlFrom_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_53_53));
#line 945 "xml_documentation.m"
        }
#line 597 "xml_documentation.m"
        {
#line 597 "xml_documentation.m"
          check_hlds__xml_documentation__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 0) = ((MR_Box) (check_hlds__xml_documentation__B_8));
#line 597 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "xml_documentation.m"
        }
#line 945 "xml_documentation.m"
        {
#line 945 "xml_documentation.m"
          check_hlds__xml_documentation__V_60_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_29_29, check_hlds__xml_documentation__V_34_34);
        }
#line 945 "xml_documentation.m"
        {
#line 945 "xml_documentation.m"
          check_hlds__xml_documentation__XmlTo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTo_10, 0) = ((MR_Box) ((MR_String) "to"));
#line 945 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTo_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTo_10, 2) = ((MR_Box) (check_hlds__xml_documentation__V_60_60));
#line 945 "xml_documentation.m"
        }
#line 598 "xml_documentation.m"
        {
#line 598 "xml_documentation.m"
          check_hlds__xml_documentation__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_39_39, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTo_10));
#line 598 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "xml_documentation.m"
        }
#line 598 "xml_documentation.m"
        {
#line 598 "xml_documentation.m"
          check_hlds__xml_documentation__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlFrom_9));
#line 598 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 1) = ((MR_Box) (check_hlds__xml_documentation__V_39_39));
#line 598 "xml_documentation.m"
        }
#line 598 "xml_documentation.m"
        {
#line 598 "xml_documentation.m"
          check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 598 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "inst_to_inst"));
#line 598 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_38_38));
#line 598 "xml_documentation.m"
        }
#line 595 "xml_documentation.m"
      }
#line 595 "xml_documentation.m"
    else
#line 600 "xml_documentation.m"
      {
#line 600 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Mode_5, (MR_Integer) 0)));
#line 600 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Mode_5, (MR_Integer) 1)));
#line 600 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Ref_13;
#line 600 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlArgs_14;
#line 600 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_16_16;
#line 600 "xml_documentation.m"
        MR_Integer check_hlds__xml_documentation__V_18_18;
#line 600 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_20_20;
#line 600 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_22_22;
#line 600 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_24_24;
#line 600 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_25_25;
#line 600 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_26_26;
#line 600 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_66_66;
#line 600 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_67_67;
#line 600 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_69_69;
#line 600 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_72_72;
#line 600 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_74_74;
#line 600 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_79_79;

#line 602 "xml_documentation.m"
        {
#line 602 "xml_documentation.m"
          check_hlds__xml_documentation__V_18_18 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__xml_documentation__Args_12);
        }
#line 920 "xml_documentation.m"
        {
#line 920 "xml_documentation.m"
          check_hlds__xml_documentation__V_74_74 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Name_11);
        }
#line 920 "xml_documentation.m"
        {
#line 920 "xml_documentation.m"
          check_hlds__xml_documentation__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_74_74);
        }
#line 920 "xml_documentation.m"
        {
#line 920 "xml_documentation.m"
          check_hlds__xml_documentation__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "mode", check_hlds__xml_documentation__V_72_72);
        }
#line 916 "xml_documentation.m"
        {
#line 916 "xml_documentation.m"
          check_hlds__xml_documentation__V_69_69 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__V_18_18);
        }
#line 916 "xml_documentation.m"
        {
#line 916 "xml_documentation.m"
          check_hlds__xml_documentation__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_69_69);
        }
#line 916 "xml_documentation.m"
        {
#line 916 "xml_documentation.m"
          check_hlds__xml_documentation__V_16_16 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_66_66, check_hlds__xml_documentation__V_67_67);
        }
#line 601 "xml_documentation.m"
        {
#line 601 "xml_documentation.m"
          check_hlds__xml_documentation__Ref_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 601 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_13, 0) = ((MR_Box) ((MR_String) "ref"));
#line 601 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_13, 1) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 601 "xml_documentation.m"
        }
#line 603 "xml_documentation.m"
        {
#line 603 "xml_documentation.m"
          check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 603 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[3]));
#line 603 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_2));
#line 603 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 603 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
#line 603 "xml_documentation.m"
        }
#line 945 "xml_documentation.m"
        {
#line 945 "xml_documentation.m"
          check_hlds__xml_documentation__V_79_79 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_20_20, check_hlds__xml_documentation__Args_12);
        }
#line 945 "xml_documentation.m"
        {
#line 945 "xml_documentation.m"
          check_hlds__xml_documentation__XmlArgs_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_14, 0) = ((MR_Box) ((MR_String) "mode_args"));
#line 945 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_14, 2) = ((MR_Box) (check_hlds__xml_documentation__V_79_79));
#line 945 "xml_documentation.m"
        }
#line 604 "xml_documentation.m"
        {
#line 604 "xml_documentation.m"
          check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__Ref_13));
#line 604 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 604 "xml_documentation.m"
        }
#line 604 "xml_documentation.m"
        {
#line 604 "xml_documentation.m"
          check_hlds__xml_documentation__V_25_25 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_11);
        }
#line 604 "xml_documentation.m"
        {
#line 604 "xml_documentation.m"
          check_hlds__xml_documentation__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_14));
#line 604 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 604 "xml_documentation.m"
        }
#line 604 "xml_documentation.m"
        {
#line 604 "xml_documentation.m"
          check_hlds__xml_documentation__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 0) = ((MR_Box) (check_hlds__xml_documentation__V_25_25));
#line 604 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 1) = ((MR_Box) (check_hlds__xml_documentation__V_26_26));
#line 604 "xml_documentation.m"
        }
#line 604 "xml_documentation.m"
        {
#line 604 "xml_documentation.m"
          check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 604 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "user_defined_mode"));
#line 604 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (check_hlds__xml_documentation__V_22_22));
#line 604 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 604 "xml_documentation.m"
        }
#line 600 "xml_documentation.m"
      }
#line 595 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_6;
#line 595 "xml_documentation.m"
  }
#line 591 "xml_documentation.m"
}

#line 576 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__pred_mode_documentation_5_p_0(
#line 576 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation___C_6,
#line 576 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation___ProcId_7,
#line 576 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
#line 576 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
#line 576 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16)
#line 576 "xml_documentation.m"
{
#line 579 "xml_documentation.m"
  {
#line 579 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;

#line 579 "xml_documentation.m"
    {
#line 579 "xml_documentation.m"
      check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0(check_hlds__xml_documentation__ProcInfo_8, check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15, check_hlds__xml_documentation__STATE_VARIABLE_Xml_16);
#line 579 "xml_documentation.m"
      return;
    }
#line 579 "xml_documentation.m"
  }
#line 576 "xml_documentation.m"
}

#line 568 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0_1(
#line 568 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 568 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 568 "xml_documentation.m"
{
#line 568 "xml_documentation.m"
  {
#line 568 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 568 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 568 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 568 "xml_documentation.m"
    {
#line 568 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 568 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 568 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 568 "xml_documentation.m"
  }
#line 568 "xml_documentation.m"
}

#line 564 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0(
#line 564 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 564 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 564 "xml_documentation.m"
{
#line 566 "xml_documentation.m"
  {
#line 566 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_7;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Univs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Exists_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlUnivs_8;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlExists_9;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_16_16;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_28_28;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_35_35;

#line 568 "xml_documentation.m"
    {
#line 568 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 568 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[1]));
#line 568 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 1) = ((MR_Box) (check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0_1));
#line 568 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 568 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_4));
#line 568 "xml_documentation.m"
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__V_28_28 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__Univs_5);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__XmlUnivs_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUnivs_8, 0) = ((MR_Box) ((MR_String) "pred_universal"));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUnivs_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUnivs_8, 2) = ((MR_Box) (check_hlds__xml_documentation__V_28_28));
#line 945 "xml_documentation.m"
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__V_35_35 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__Exists_6);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__XmlExists_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlExists_9, 0) = ((MR_Box) ((MR_String) "pred_exist"));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlExists_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlExists_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_35_35));
#line 945 "xml_documentation.m"
    }
#line 571 "xml_documentation.m"
    {
#line 571 "xml_documentation.m"
      check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlExists_9));
#line 571 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 571 "xml_documentation.m"
    }
#line 571 "xml_documentation.m"
    {
#line 571 "xml_documentation.m"
      check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlUnivs_8));
#line 571 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 571 "xml_documentation.m"
    }
#line 571 "xml_documentation.m"
    {
#line 571 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 571 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 0) = ((MR_Box) ((MR_String) "pred_constraints"));
#line 571 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 571 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 2) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 571 "xml_documentation.m"
    }
#line 566 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_7;
#line 566 "xml_documentation.m"
  }
#line 564 "xml_documentation.m"
}

#line 538 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_3(
#line 538 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 538 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 538 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 538 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 538 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4)
#line 538 "xml_documentation.m"
{
#line 538 "xml_documentation.m"
  {
#line 538 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 538 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv3_STATE_VARIABLE_Xml_16;

#line 538 "xml_documentation.m"
    {
#line 538 "xml_documentation.m"
      check_hlds__xml_documentation__pred_mode_documentation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3), &check_hlds__xml_documentation__conv3_STATE_VARIABLE_Xml_16);
    }
#line 538 "xml_documentation.m"
    *check_hlds__xml_documentation__wrapper_arg_4 = ((MR_Box) (check_hlds__xml_documentation__conv3_STATE_VARIABLE_Xml_16));
#line 538 "xml_documentation.m"
  }
#line 538 "xml_documentation.m"
}

#line 532 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_2(
#line 532 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 532 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 532 "xml_documentation.m"
{
#line 532 "xml_documentation.m"
  {
#line 532 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 532 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 532 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_Xml_6;

#line 532 "xml_documentation.m"
    {
#line 532 "xml_documentation.m"
      check_hlds__xml_documentation__conv2_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 532 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_6));
#line 532 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 532 "xml_documentation.m"
  }
#line 532 "xml_documentation.m"
}

#line 531 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_1(
#line 531 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 531 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 531 "xml_documentation.m"
{
#line 531 "xml_documentation.m"
  {
#line 531 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 531 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 531 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_HeadVar__3_3;

#line 531 "xml_documentation.m"
    {
#line 531 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 531 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_HeadVar__3_3));
#line 531 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 531 "xml_documentation.m"
  }
#line 531 "xml_documentation.m"
}

#line 504 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0(
#line 504 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_4,
#line 504 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_5)
#line 504 "xml_documentation.m"
{
#line 506 "xml_documentation.m"
  {
#line 506 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_6;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeCtorInfo_7_67;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TVarset_7;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Exists_8;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__IsPredOrFunc_9;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Module_10;
#line 506 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Name_11;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredName_12;
#line 506 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__Arity_13;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredStatus_14;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Types_15;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Constraints_16;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Context_17;
#line 506 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Tag_18;
#line 506 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Id_19;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlName_20;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlContext_21;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlTypes_22;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlExistVars_23;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlConstraints_24;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlVisibility_25;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ProcTable_26;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlProcs_27;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlModes_28;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml0_29;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_31_31;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_33_33;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_34_34;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_38_38;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_39_39;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_42_42;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_43_43;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_44_44;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_45_45;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_46_46;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_47_47;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_48_48;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Types0_65;
#line 506 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_66_66;
#line 506 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_79_79;
#line 506 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_80_80;
#line 506 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_82_82;
#line 506 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_85_85;
#line 506 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_87_87;
#line 506 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_92_92;
#line 557 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__L_70;
#line 558 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_71_71;
#line 558 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_72_72;
#line 538 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv4_XmlProcs_27;

#line 507 "xml_documentation.m"
    {
#line 507 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__TVarset_7);
    }
#line 508 "xml_documentation.m"
    {
#line 508 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Exists_8);
    }
#line 510 "xml_documentation.m"
    {
#line 510 "xml_documentation.m"
      check_hlds__xml_documentation__IsPredOrFunc_9 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
#line 511 "xml_documentation.m"
    {
#line 511 "xml_documentation.m"
      check_hlds__xml_documentation__Module_10 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
#line 512 "xml_documentation.m"
    {
#line 512 "xml_documentation.m"
      check_hlds__xml_documentation__Name_11 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
#line 513 "xml_documentation.m"
    {
#line 513 "xml_documentation.m"
      check_hlds__xml_documentation__PredName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__PredName_12, 0) = ((MR_Box) (check_hlds__xml_documentation__Module_10));
#line 513 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__PredName_12, 1) = ((MR_Box) (check_hlds__xml_documentation__Name_11));
#line 513 "xml_documentation.m"
    }
#line 514 "xml_documentation.m"
    {
#line 514 "xml_documentation.m"
      check_hlds__xml_documentation__Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
#line 515 "xml_documentation.m"
    {
#line 515 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__PredStatus_14);
    }
#line 550 "xml_documentation.m"
    {
#line 550 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Types0_65);
    }
#line 8110 "check_hlds.xml_documentation.c"
    check_hlds__xml_documentation__TypeCtorInfo_7_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 551 "xml_documentation.m"
    {
#line 551 "xml_documentation.m"
      check_hlds__xml_documentation__V_66_66 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
#line 558 "xml_documentation.m"
    {
#line 558 "xml_documentation.m"
      check_hlds__xml_documentation__V_72_72 = mercury__list__length_1_f_0(check_hlds__xml_documentation__TypeCtorInfo_7_67, check_hlds__xml_documentation__Types0_65);
    }
#line 558 "xml_documentation.m"
    check_hlds__xml_documentation__V_71_71 = (check_hlds__xml_documentation__V_72_72 - check_hlds__xml_documentation__V_66_66);
#line 558 "xml_documentation.m"
    {
#line 558 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = mercury__list__drop_3_p_0(check_hlds__xml_documentation__TypeCtorInfo_7_67, check_hlds__xml_documentation__V_71_71, check_hlds__xml_documentation__Types0_65, &check_hlds__xml_documentation__L_70);
    }
#line 557 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 559 "xml_documentation.m"
      check_hlds__xml_documentation__Types_15 = check_hlds__xml_documentation__L_70;
#line 557 "xml_documentation.m"
    else
#line 561 "xml_documentation.m"
      {
#line 561 "xml_documentation.m"
        MR_Box check_hlds__xml_documentation__conv0_Types_15;

#line 561 "xml_documentation.m"
        {
#line 561 "xml_documentation.m"
          check_hlds__xml_documentation__conv0_Types_15 = mercury__require__func_error_1_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[9], (MR_String) "keep_last_n");
        }
#line 561 "xml_documentation.m"
        check_hlds__xml_documentation__Types_15 = ((MR_Word) check_hlds__xml_documentation__conv0_Types_15);
#line 561 "xml_documentation.m"
      }
#line 518 "xml_documentation.m"
    {
#line 518 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Constraints_16);
    }
#line 519 "xml_documentation.m"
    {
#line 519 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Context_17);
    }
#line 523 "xml_documentation.m"
#line 523 "xml_documentation.m"
    switch (check_hlds__xml_documentation__IsPredOrFunc_9) {
#line 523 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 523 "xml_documentation.m"
      case (MR_Integer) 1:
#line 525 "xml_documentation.m"
        check_hlds__xml_documentation__Tag_18 = (MR_String) "function";
#line 523 "xml_documentation.m"
        break;
#line 523 "xml_documentation.m"
      case (MR_Integer) 0:
#line 522 "xml_documentation.m"
        check_hlds__xml_documentation__Tag_18 = (MR_String) "predicate";
#line 523 "xml_documentation.m"
        break;
#line 523 "xml_documentation.m"
    }
#line 920 "xml_documentation.m"
    {
#line 920 "xml_documentation.m"
      check_hlds__xml_documentation__V_87_87 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__PredName_12);
    }
#line 920 "xml_documentation.m"
    {
#line 920 "xml_documentation.m"
      check_hlds__xml_documentation__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_87_87);
    }
#line 920 "xml_documentation.m"
    {
#line 920 "xml_documentation.m"
      check_hlds__xml_documentation__V_79_79 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Tag_18, check_hlds__xml_documentation__V_85_85);
    }
#line 916 "xml_documentation.m"
    {
#line 916 "xml_documentation.m"
      check_hlds__xml_documentation__V_82_82 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_13);
    }
#line 916 "xml_documentation.m"
    {
#line 916 "xml_documentation.m"
      check_hlds__xml_documentation__V_80_80 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_82_82);
    }
#line 916 "xml_documentation.m"
    {
#line 916 "xml_documentation.m"
      check_hlds__xml_documentation__Id_19 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_79_79, check_hlds__xml_documentation__V_80_80);
    }
#line 529 "xml_documentation.m"
    {
#line 529 "xml_documentation.m"
      check_hlds__xml_documentation__XmlName_20 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__PredName_12);
    }
#line 530 "xml_documentation.m"
    {
#line 530 "xml_documentation.m"
      check_hlds__xml_documentation__XmlContext_21 = check_hlds__xml_documentation__prog_context_to_xml_1_f_0(check_hlds__xml_documentation__Context_17);
    }
#line 531 "xml_documentation.m"
    {
#line 531 "xml_documentation.m"
      check_hlds__xml_documentation__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 531 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[2]));
#line 531 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 1) = ((MR_Box) (check_hlds__xml_documentation__predicate_documentation_2_f_0_1));
#line 531 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 531 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_7));
#line 531 "xml_documentation.m"
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__V_92_92 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_31_31, check_hlds__xml_documentation__Types_15);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__XmlTypes_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_22, 0) = ((MR_Box) ((MR_String) "pred_types"));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_22, 2) = ((MR_Box) (check_hlds__xml_documentation__V_92_92));
#line 945 "xml_documentation.m"
    }
#line 532 "xml_documentation.m"
    {
#line 532 "xml_documentation.m"
      check_hlds__xml_documentation__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 532 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
#line 532 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 1) = ((MR_Box) (check_hlds__xml_documentation__predicate_documentation_2_f_0_2));
#line 532 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 532 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_7));
#line 532 "xml_documentation.m"
    }
#line 532 "xml_documentation.m"
    {
#line 532 "xml_documentation.m"
      check_hlds__xml_documentation__XmlExistVars_23 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0((MR_String) "pred_exist_vars", check_hlds__xml_documentation__V_33_33, check_hlds__xml_documentation__Exists_8);
    }
#line 534 "xml_documentation.m"
    {
#line 534 "xml_documentation.m"
      check_hlds__xml_documentation__XmlConstraints_24 = check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_7, check_hlds__xml_documentation__Constraints_16);
    }
#line 535 "xml_documentation.m"
    {
#line 535 "xml_documentation.m"
      check_hlds__xml_documentation__XmlVisibility_25 = check_hlds__xml_documentation__pred_visibility_to_xml_1_f_0(check_hlds__xml_documentation__PredStatus_14);
    }
#line 537 "xml_documentation.m"
    {
#line 537 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__ProcTable_26);
    }
#line 538 "xml_documentation.m"
    {
#line 538 "xml_documentation.m"
      check_hlds__xml_documentation__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 538 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_9[0]));
#line 538 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 1) = ((MR_Box) (check_hlds__xml_documentation__predicate_documentation_2_f_0_3));
#line 538 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 538 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 3) = ((MR_Box) (check_hlds__xml_documentation__C_4));
#line 538 "xml_documentation.m"
    }
#line 538 "xml_documentation.m"
    {
#line 538 "xml_documentation.m"
      mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &check_hlds__xml_documentation_scalar_common_1[2], check_hlds__xml_documentation__V_34_34, check_hlds__xml_documentation__ProcTable_26, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv4_XmlProcs_27);
    }
#line 538 "xml_documentation.m"
    check_hlds__xml_documentation__XmlProcs_27 = ((MR_Word) check_hlds__xml_documentation__conv4_XmlProcs_27);
#line 539 "xml_documentation.m"
    {
#line 539 "xml_documentation.m"
      check_hlds__xml_documentation__XmlModes_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 539 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_28, 0) = ((MR_Box) ((MR_String) "pred_modes"));
#line 539 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 539 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_28, 2) = ((MR_Box) (check_hlds__xml_documentation__XmlProcs_27));
#line 539 "xml_documentation.m"
    }
#line 541 "xml_documentation.m"
    {
#line 541 "xml_documentation.m"
      check_hlds__xml_documentation__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 541 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_39_39, 0) = ((MR_Box) ((MR_String) "id"));
#line 541 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_39_39, 1) = ((MR_Box) (check_hlds__xml_documentation__Id_19));
#line 541 "xml_documentation.m"
    }
#line 541 "xml_documentation.m"
    {
#line 541 "xml_documentation.m"
      check_hlds__xml_documentation__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 0) = ((MR_Box) (check_hlds__xml_documentation__V_39_39));
#line 541 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "xml_documentation.m"
    }
#line 543 "xml_documentation.m"
    {
#line 543 "xml_documentation.m"
      check_hlds__xml_documentation__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlModes_28));
#line 543 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "xml_documentation.m"
    }
#line 543 "xml_documentation.m"
    {
#line 543 "xml_documentation.m"
      check_hlds__xml_documentation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_25));
#line 543 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 1) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 543 "xml_documentation.m"
    }
#line 543 "xml_documentation.m"
    {
#line 543 "xml_documentation.m"
      check_hlds__xml_documentation__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlConstraints_24));
#line 543 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 1) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 543 "xml_documentation.m"
    }
#line 543 "xml_documentation.m"
    {
#line 543 "xml_documentation.m"
      check_hlds__xml_documentation__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlExistVars_23));
#line 543 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 1) = ((MR_Box) (check_hlds__xml_documentation__V_46_46));
#line 543 "xml_documentation.m"
    }
#line 542 "xml_documentation.m"
    {
#line 542 "xml_documentation.m"
      check_hlds__xml_documentation__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_44_44, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_21));
#line 542 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_44_44, 1) = ((MR_Box) (check_hlds__xml_documentation__V_45_45));
#line 542 "xml_documentation.m"
    }
#line 542 "xml_documentation.m"
    {
#line 542 "xml_documentation.m"
      check_hlds__xml_documentation__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_43_43, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_22));
#line 542 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_43_43, 1) = ((MR_Box) (check_hlds__xml_documentation__V_44_44));
#line 542 "xml_documentation.m"
    }
#line 542 "xml_documentation.m"
    {
#line 542 "xml_documentation.m"
      check_hlds__xml_documentation__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_42_42, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_20));
#line 542 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_42_42, 1) = ((MR_Box) (check_hlds__xml_documentation__V_43_43));
#line 542 "xml_documentation.m"
    }
#line 541 "xml_documentation.m"
    {
#line 541 "xml_documentation.m"
      check_hlds__xml_documentation__Xml0_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 541 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_29, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_18));
#line 541 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_29, 1) = ((MR_Box) (check_hlds__xml_documentation__V_38_38));
#line 541 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_29, 2) = ((MR_Box) (check_hlds__xml_documentation__V_42_42));
#line 541 "xml_documentation.m"
    }
#line 545 "xml_documentation.m"
    {
#line 545 "xml_documentation.m"
      return check_hlds__xml_documentation__Xml_6 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_4, check_hlds__xml_documentation__Context_17, check_hlds__xml_documentation__Xml0_29);
    }
#line 506 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_6;
#line 506 "xml_documentation.m"
  }
#line 504 "xml_documentation.m"
}

#line 485 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__pred_documentation_5_p_0(
#line 485 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 485 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation___PredId_7,
#line 485 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_8,
#line 485 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
#line 485 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15)
#line 485 "xml_documentation.m"
{
#line 488 "xml_documentation.m"
  {
#line 488 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;

#line 488 "xml_documentation.m"
    {
#line 488 "xml_documentation.m"
      check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_50_93_95_48_5_p_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__PredInfo_8, check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14, check_hlds__xml_documentation__STATE_VARIABLE_Xml_15);
#line 488 "xml_documentation.m"
      return;
    }
#line 488 "xml_documentation.m"
  }
#line 485 "xml_documentation.m"
}

#line 477 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_3(
#line 477 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 477 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 477 "xml_documentation.m"
{
#line 477 "xml_documentation.m"
  {
#line 477 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 477 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 477 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_HeadVar__3_3;

#line 477 "xml_documentation.m"
    {
#line 477 "xml_documentation.m"
      check_hlds__xml_documentation__conv2_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 477 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_HeadVar__3_3));
#line 477 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 477 "xml_documentation.m"
  }
#line 477 "xml_documentation.m"
}

#line 464 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_2(
#line 464 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 464 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 464 "xml_documentation.m"
{
#line 464 "xml_documentation.m"
  {
#line 464 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 464 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 464 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_HeadVar__3_3;

#line 464 "xml_documentation.m"
    {
#line 464 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 464 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_HeadVar__3_3));
#line 464 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 464 "xml_documentation.m"
  }
#line 464 "xml_documentation.m"
}

#line 456 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_1(
#line 456 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 456 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 456 "xml_documentation.m"
{
#line 456 "xml_documentation.m"
  {
#line 456 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 456 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 456 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__3_3;

#line 456 "xml_documentation.m"
    {
#line 456 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 456 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__3_3));
#line 456 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 456 "xml_documentation.m"
  }
#line 456 "xml_documentation.m"
}

#line 448 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0(
#line 448 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_1,
#line 448 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 448 "xml_documentation.m"
{
#line 450 "xml_documentation.m"
  {
#line 450 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 450 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;

#line 450 "xml_documentation.m"
#line 450 "xml_documentation.m"
    switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) {
#line 450 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 450 "xml_documentation.m"
      case (MR_Integer) 0:
#line 450 "xml_documentation.m"
        {
#line 450 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 450 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));

#line 451 "xml_documentation.m"
          {
#line 451 "xml_documentation.m"
            return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_1, check_hlds__xml_documentation__TVar_5);
          }
#line 450 "xml_documentation.m"
        }
#line 450 "xml_documentation.m"
        break;
#line 450 "xml_documentation.m"
      case (MR_Integer) 1:
#line 452 "xml_documentation.m"
        {
#line 452 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TypeName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 452 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 452 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Ref_12;
#line 452 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlName_13;
#line 452 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlArgs_14;
#line 452 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_16_16;
#line 452 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__V_18_18;
#line 452 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_20_20;
#line 452 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_22_22;
#line 452 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_24_24;
#line 452 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_25_25;
#line 452 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));

#line 454 "xml_documentation.m"
          {
#line 454 "xml_documentation.m"
            check_hlds__xml_documentation__V_18_18 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__xml_documentation__Args_9);
          }
#line 454 "xml_documentation.m"
          {
#line 454 "xml_documentation.m"
            check_hlds__xml_documentation__V_16_16 = check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0((MR_String) "type", check_hlds__xml_documentation__TypeName_8, check_hlds__xml_documentation__V_18_18);
          }
#line 453 "xml_documentation.m"
          {
#line 453 "xml_documentation.m"
            check_hlds__xml_documentation__Ref_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 453 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_12, 0) = ((MR_Box) ((MR_String) "ref"));
#line 453 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_12, 1) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 453 "xml_documentation.m"
          }
#line 455 "xml_documentation.m"
          {
#line 455 "xml_documentation.m"
            check_hlds__xml_documentation__XmlName_13 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__TypeName_8);
          }
#line 456 "xml_documentation.m"
          {
#line 456 "xml_documentation.m"
            check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 456 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[2]));
#line 456 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_1));
#line 456 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 456 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_1));
#line 456 "xml_documentation.m"
          }
#line 456 "xml_documentation.m"
          {
#line 456 "xml_documentation.m"
            check_hlds__xml_documentation__XmlArgs_14 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0((MR_String) "type_args", check_hlds__xml_documentation__V_20_20, check_hlds__xml_documentation__Args_9);
          }
#line 457 "xml_documentation.m"
          {
#line 457 "xml_documentation.m"
            check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__Ref_12));
#line 457 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 457 "xml_documentation.m"
          }
#line 457 "xml_documentation.m"
          {
#line 457 "xml_documentation.m"
            check_hlds__xml_documentation__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_25_25, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_14));
#line 457 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 457 "xml_documentation.m"
          }
#line 457 "xml_documentation.m"
          {
#line 457 "xml_documentation.m"
            check_hlds__xml_documentation__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_13));
#line 457 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 1) = ((MR_Box) (check_hlds__xml_documentation__V_25_25));
#line 457 "xml_documentation.m"
          }
#line 457 "xml_documentation.m"
          {
#line 457 "xml_documentation.m"
            check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 457 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "type"));
#line 457 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__xml_documentation__V_22_22));
#line 457 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 457 "xml_documentation.m"
          }
#line 452 "xml_documentation.m"
        }
#line 450 "xml_documentation.m"
        break;
#line 450 "xml_documentation.m"
      case (MR_Integer) 2:
#line 450 "xml_documentation.m"
        {
#line 450 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));

#line 450 "xml_documentation.m"
          check_hlds__xml_documentation__HeadVar__3_3 = ((&check_hlds__xml_documentation_vector_common_8[0 + check_hlds__xml_documentation__V_98_98]))->check_hlds__xml_documentation__vector_common_type_8_0__vct_8_f_0;
#line 450 "xml_documentation.m"
        }
#line 450 "xml_documentation.m"
        break;
#line 450 "xml_documentation.m"
      case (MR_Integer) 3:
#line 450 "xml_documentation.m"
#line 450 "xml_documentation.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)))) {
#line 450 "xml_documentation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 450 "xml_documentation.m"
          case (MR_Integer) 0:
#line 476 "xml_documentation.m"
            {
#line 476 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__Types_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 476 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__XmlArgs_73;
#line 476 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_75_75;
#line 476 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_78_78;
#line 476 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));

#line 477 "xml_documentation.m"
              {
#line 477 "xml_documentation.m"
                check_hlds__xml_documentation__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 477 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_75_75, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[2]));
#line 477 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_75_75, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_3));
#line 477 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 477 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_75_75, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_1));
#line 477 "xml_documentation.m"
              }
#line 477 "xml_documentation.m"
              {
#line 477 "xml_documentation.m"
                check_hlds__xml_documentation__XmlArgs_73 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0((MR_String) "tuple_types", check_hlds__xml_documentation__V_75_75, check_hlds__xml_documentation__Types_70);
              }
#line 478 "xml_documentation.m"
              {
#line 478 "xml_documentation.m"
                check_hlds__xml_documentation__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_78_78, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_73));
#line 478 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "xml_documentation.m"
              }
#line 478 "xml_documentation.m"
              {
#line 478 "xml_documentation.m"
                check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 478 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "tuple"));
#line 478 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_78_78));
#line 478 "xml_documentation.m"
              }
#line 476 "xml_documentation.m"
            }
#line 450 "xml_documentation.m"
            break;
#line 450 "xml_documentation.m"
          case (MR_Integer) 1:
#line 463 "xml_documentation.m"
            {
#line 463 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__Types_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 463 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__MaybeResult_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));
#line 463 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__XmlTypes_53;
#line 463 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__XmlChildren_56;
#line 463 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_58_58;
#line 463 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 3)));

#line 464 "xml_documentation.m"
              {
#line 464 "xml_documentation.m"
                check_hlds__xml_documentation__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 464 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_58_58, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[2]));
#line 464 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_58_58, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_2));
#line 464 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 464 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_58_58, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_1));
#line 464 "xml_documentation.m"
              }
#line 464 "xml_documentation.m"
              {
#line 464 "xml_documentation.m"
                check_hlds__xml_documentation__XmlTypes_53 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0((MR_String) "higher_order_type_args", check_hlds__xml_documentation__V_58_58, check_hlds__xml_documentation__Types_48);
              }
#line 471 "xml_documentation.m"
              if ((check_hlds__xml_documentation__MaybeResult_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 472 "xml_documentation.m"
                {
#line 473 "xml_documentation.m"
                  {
#line 473 "xml_documentation.m"
                    check_hlds__xml_documentation__XmlChildren_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_56, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_53));
#line 473 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "xml_documentation.m"
                  }
#line 472 "xml_documentation.m"
                }
#line 471 "xml_documentation.m"
              else
#line 467 "xml_documentation.m"
                {
#line 467 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__ResultType_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__MaybeResult_49, (MR_Integer) 0)));
#line 467 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__XmlReturn_55;
#line 467 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_62_62;
#line 467 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_63_63;
#line 467 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_65_65;

#line 469 "xml_documentation.m"
                  {
#line 469 "xml_documentation.m"
                    check_hlds__xml_documentation__V_63_63 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_1, check_hlds__xml_documentation__ResultType_54);
                  }
#line 469 "xml_documentation.m"
                  {
#line 469 "xml_documentation.m"
                    check_hlds__xml_documentation__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_62_62, 0) = ((MR_Box) (check_hlds__xml_documentation__V_63_63));
#line 469 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "xml_documentation.m"
                  }
#line 468 "xml_documentation.m"
                  {
#line 468 "xml_documentation.m"
                    check_hlds__xml_documentation__XmlReturn_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 468 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlReturn_55, 0) = ((MR_Box) ((MR_String) "return_type"));
#line 468 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlReturn_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 468 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlReturn_55, 2) = ((MR_Box) (check_hlds__xml_documentation__V_62_62));
#line 468 "xml_documentation.m"
                  }
#line 470 "xml_documentation.m"
                  {
#line 470 "xml_documentation.m"
                    check_hlds__xml_documentation__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_65_65, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlReturn_55));
#line 470 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "xml_documentation.m"
                  }
#line 470 "xml_documentation.m"
                  {
#line 470 "xml_documentation.m"
                    check_hlds__xml_documentation__XmlChildren_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_56, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_53));
#line 470 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_56, 1) = ((MR_Box) (check_hlds__xml_documentation__V_65_65));
#line 470 "xml_documentation.m"
                  }
#line 467 "xml_documentation.m"
                }
#line 475 "xml_documentation.m"
              {
#line 475 "xml_documentation.m"
                check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 475 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "higher_order_type"));
#line 475 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__XmlChildren_56));
#line 475 "xml_documentation.m"
              }
#line 463 "xml_documentation.m"
            }
#line 450 "xml_documentation.m"
            break;
#line 450 "xml_documentation.m"
          case (MR_Integer) 2:
#line 479 "xml_documentation.m"
            {
#line 479 "xml_documentation.m"
              {
#line 479 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "apply_n_type");
              }
#line 479 "xml_documentation.m"
            }
#line 450 "xml_documentation.m"
            break;
#line 450 "xml_documentation.m"
          case (MR_Integer) 3:
#line 480 "xml_documentation.m"
            {
#line 480 "xml_documentation.m"
              {
#line 480 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "kinded_type");
              }
#line 480 "xml_documentation.m"
            }
#line 450 "xml_documentation.m"
            break;
#line 450 "xml_documentation.m"
        }
#line 450 "xml_documentation.m"
        break;
#line 450 "xml_documentation.m"
    }
#line 450 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_3;
#line 450 "xml_documentation.m"
  }
#line 448 "xml_documentation.m"
}

#line 431 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_arg_to_xml_3_f_0(
#line 431 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 431 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_6,
#line 431 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__CtorArg_7)
#line 431 "xml_documentation.m"
{
#line 433 "xml_documentation.m"
  {
#line 433 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_8;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__MaybeCtorFieldName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 0)));
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 1)));
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 3)));
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlType_13;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlContext_14;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlMaybeFieldName_18;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml0_19;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_22_22;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_23_23;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_39_39;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_40_40;
#line 433 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__FileName_41;
#line 433 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__LineNumber_42;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_45_45;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_46_46;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_48_48;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_49_49;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_55_55;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_56_56;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_61_61;
#line 433 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_62_62;
#line 433 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_63_63;
#line 434 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation___Width_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 2)));

#line 435 "xml_documentation.m"
    {
#line 435 "xml_documentation.m"
      check_hlds__xml_documentation__V_23_23 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_6, check_hlds__xml_documentation__Type_10);
    }
#line 435 "xml_documentation.m"
    {
#line 435 "xml_documentation.m"
      check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__V_23_23));
#line 435 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "xml_documentation.m"
    }
#line 435 "xml_documentation.m"
    {
#line 435 "xml_documentation.m"
      check_hlds__xml_documentation__XmlType_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 435 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlType_13, 0) = ((MR_Box) ((MR_String) "arg_type"));
#line 435 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlType_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlType_13, 2) = ((MR_Box) (check_hlds__xml_documentation__V_22_22));
#line 435 "xml_documentation.m"
    }
#line 800 "xml_documentation.m"
    check_hlds__xml_documentation__FileName_41 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_12, (MR_Integer) 0)));
#line 800 "xml_documentation.m"
    check_hlds__xml_documentation__LineNumber_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_12, (MR_Integer) 1)));
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_56_56, 0) = ((MR_Box) (check_hlds__xml_documentation__FileName_41));
#line 939 "xml_documentation.m"
    }
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_55_55, 0) = ((MR_Box) (check_hlds__xml_documentation__V_56_56));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
    }
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_46_46, 0) = ((MR_Box) ((MR_String) "filename"));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_46_46, 2) = ((MR_Box) (check_hlds__xml_documentation__V_55_55));
#line 939 "xml_documentation.m"
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_63_63 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__LineNumber_42);
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_62_62, 0) = ((MR_Box) (check_hlds__xml_documentation__V_63_63));
#line 927 "xml_documentation.m"
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_61_61, 0) = ((MR_Box) (check_hlds__xml_documentation__V_62_62));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "xml_documentation.m"
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_49_49, 0) = ((MR_Box) ((MR_String) "line"));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_49_49, 2) = ((MR_Box) (check_hlds__xml_documentation__V_61_61));
#line 927 "xml_documentation.m"
    }
#line 803 "xml_documentation.m"
    {
#line 803 "xml_documentation.m"
      check_hlds__xml_documentation__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 0) = ((MR_Box) (check_hlds__xml_documentation__V_49_49));
#line 803 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "xml_documentation.m"
    }
#line 802 "xml_documentation.m"
    {
#line 802 "xml_documentation.m"
      check_hlds__xml_documentation__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 0) = ((MR_Box) (check_hlds__xml_documentation__V_46_46));
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 1) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 802 "xml_documentation.m"
    }
#line 801 "xml_documentation.m"
    {
#line 801 "xml_documentation.m"
      check_hlds__xml_documentation__XmlContext_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 801 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_14, 0) = ((MR_Box) ((MR_String) "context"));
#line 801 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_14, 2) = ((MR_Box) (check_hlds__xml_documentation__V_45_45));
#line 801 "xml_documentation.m"
    }
#line 441 "xml_documentation.m"
    if ((check_hlds__xml_documentation__MaybeCtorFieldName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 443 "xml_documentation.m"
      check_hlds__xml_documentation__XmlMaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 441 "xml_documentation.m"
    else
#line 438 "xml_documentation.m"
      {
#line 438 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__FieldName_15;
#line 438 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Id_17;
#line 438 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__MaybeCtorFieldName_9, (MR_Integer) 0)));
#line 438 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_27_27;
#line 438 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_29_29;
#line 438 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_31_31;
#line 438 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_33_33;
#line 438 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_34_34;
#line 438 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_69_69;
#line 438 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_71_71;
#line 438 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation___FieldNameCtxt_16;

#line 438 "xml_documentation.m"
        check_hlds__xml_documentation__FieldName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_25_25, (MR_Integer) 0)));
#line 438 "xml_documentation.m"
        check_hlds__xml_documentation___FieldNameCtxt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_25_25, (MR_Integer) 1)));
#line 920 "xml_documentation.m"
        {
#line 920 "xml_documentation.m"
          check_hlds__xml_documentation__V_71_71 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__FieldName_15);
        }
#line 920 "xml_documentation.m"
        {
#line 920 "xml_documentation.m"
          check_hlds__xml_documentation__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_71_71);
        }
#line 920 "xml_documentation.m"
        {
#line 920 "xml_documentation.m"
          check_hlds__xml_documentation__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "field", check_hlds__xml_documentation__V_69_69);
        }
#line 439 "xml_documentation.m"
        {
#line 439 "xml_documentation.m"
          check_hlds__xml_documentation__Id_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_17, 0) = ((MR_Box) ((MR_String) "id"));
#line 439 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_17, 1) = ((MR_Box) (check_hlds__xml_documentation__V_27_27));
#line 439 "xml_documentation.m"
        }
#line 440 "xml_documentation.m"
        {
#line 440 "xml_documentation.m"
          check_hlds__xml_documentation__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_31_31, 0) = ((MR_Box) (check_hlds__xml_documentation__Id_17));
#line 440 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "xml_documentation.m"
        }
#line 440 "xml_documentation.m"
        {
#line 440 "xml_documentation.m"
          check_hlds__xml_documentation__V_34_34 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__FieldName_15);
        }
#line 440 "xml_documentation.m"
        {
#line 440 "xml_documentation.m"
          check_hlds__xml_documentation__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_33_33, 0) = ((MR_Box) (check_hlds__xml_documentation__V_34_34));
#line 440 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "xml_documentation.m"
        }
#line 440 "xml_documentation.m"
        {
#line 440 "xml_documentation.m"
          check_hlds__xml_documentation__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 440 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 0) = ((MR_Box) ((MR_String) "field"));
#line 440 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 1) = ((MR_Box) (check_hlds__xml_documentation__V_31_31));
#line 440 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 2) = ((MR_Box) (check_hlds__xml_documentation__V_33_33));
#line 440 "xml_documentation.m"
        }
#line 440 "xml_documentation.m"
        {
#line 440 "xml_documentation.m"
          check_hlds__xml_documentation__XmlMaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlMaybeFieldName_18, 0) = ((MR_Box) (check_hlds__xml_documentation__V_29_29));
#line 440 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlMaybeFieldName_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "xml_documentation.m"
        }
#line 438 "xml_documentation.m"
      }
#line 445 "xml_documentation.m"
    {
#line 445 "xml_documentation.m"
      check_hlds__xml_documentation__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_14));
#line 445 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 1) = ((MR_Box) (check_hlds__xml_documentation__XmlMaybeFieldName_18));
#line 445 "xml_documentation.m"
    }
#line 445 "xml_documentation.m"
    {
#line 445 "xml_documentation.m"
      check_hlds__xml_documentation__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_39_39, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlType_13));
#line 445 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_39_39, 1) = ((MR_Box) (check_hlds__xml_documentation__V_40_40));
#line 445 "xml_documentation.m"
    }
#line 445 "xml_documentation.m"
    {
#line 445 "xml_documentation.m"
      check_hlds__xml_documentation__Xml0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 445 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_19, 0) = ((MR_Box) ((MR_String) "ctor_arg"));
#line 445 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_19, 2) = ((MR_Box) (check_hlds__xml_documentation__V_39_39));
#line 445 "xml_documentation.m"
    }
#line 446 "xml_documentation.m"
    {
#line 446 "xml_documentation.m"
      return check_hlds__xml_documentation__Xml_8 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_5, check_hlds__xml_documentation__Context_12, check_hlds__xml_documentation__Xml0_19);
    }
#line 433 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_8;
#line 433 "xml_documentation.m"
  }
#line 431 "xml_documentation.m"
}

#line 425 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_3(
#line 425 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 425 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 425 "xml_documentation.m"
{
#line 425 "xml_documentation.m"
  {
#line 425 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 425 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 425 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_Xml_6;

#line 425 "xml_documentation.m"
    {
#line 425 "xml_documentation.m"
      check_hlds__xml_documentation__conv2_Xml_6 = check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 425 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_6));
#line 425 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 425 "xml_documentation.m"
  }
#line 425 "xml_documentation.m"
}

#line 422 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_2(
#line 422 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 422 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 422 "xml_documentation.m"
{
#line 422 "xml_documentation.m"
  {
#line 422 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 422 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 422 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_Xml_6;

#line 422 "xml_documentation.m"
    {
#line 422 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 422 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_Xml_6));
#line 422 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 422 "xml_documentation.m"
  }
#line 422 "xml_documentation.m"
}

#line 421 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_1(
#line 421 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 421 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 421 "xml_documentation.m"
{
#line 421 "xml_documentation.m"
  {
#line 421 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 421 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 421 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_8;

#line 421 "xml_documentation.m"
    {
#line 421 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_8 = check_hlds__xml_documentation__constructor_arg_to_xml_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 421 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_8));
#line 421 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 421 "xml_documentation.m"
  }
#line 421 "xml_documentation.m"
}

#line 414 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0(
#line 414 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 414 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_6,
#line 414 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Ctor_7)
#line 414 "xml_documentation.m"
{
#line 416 "xml_documentation.m"
  {
#line 416 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_8;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Exists_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 0)));
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 1)));
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 2)));
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 3)));
#line 416 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 4)));
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 5)));
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Id_15;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlName_16;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlContext_17;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlArgs_18;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlExistVars_19;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlConstraints_20;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml0_21;
#line 416 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_23_23;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_26_26;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_28_28;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_30_30;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_32_32;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_34_34;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_35_35;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_36_36;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_37_37;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_38_38;
#line 416 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_52_52;
#line 416 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_53_53;
#line 416 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_55_55;
#line 416 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_58_58;
#line 416 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_60_60;
#line 416 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__FileName_61;
#line 416 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__LineNumber_62;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_65_65;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_66_66;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_68_68;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_69_69;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_75_75;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_76_76;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_81_81;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_82_82;
#line 416 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_83_83;
#line 416 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_89_89;

#line 920 "xml_documentation.m"
    {
#line 920 "xml_documentation.m"
      check_hlds__xml_documentation__V_60_60 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Name_11);
    }
#line 920 "xml_documentation.m"
    {
#line 920 "xml_documentation.m"
      check_hlds__xml_documentation__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_60_60);
    }
#line 920 "xml_documentation.m"
    {
#line 920 "xml_documentation.m"
      check_hlds__xml_documentation__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "ctor", check_hlds__xml_documentation__V_58_58);
    }
#line 916 "xml_documentation.m"
    {
#line 916 "xml_documentation.m"
      check_hlds__xml_documentation__V_55_55 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_13);
    }
#line 916 "xml_documentation.m"
    {
#line 916 "xml_documentation.m"
      check_hlds__xml_documentation__V_53_53 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_55_55);
    }
#line 916 "xml_documentation.m"
    {
#line 916 "xml_documentation.m"
      check_hlds__xml_documentation__V_23_23 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_52_52, check_hlds__xml_documentation__V_53_53);
    }
#line 418 "xml_documentation.m"
    {
#line 418 "xml_documentation.m"
      check_hlds__xml_documentation__Id_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 418 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_15, 0) = ((MR_Box) ((MR_String) "id"));
#line 418 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_15, 1) = ((MR_Box) (check_hlds__xml_documentation__V_23_23));
#line 418 "xml_documentation.m"
    }
#line 419 "xml_documentation.m"
    {
#line 419 "xml_documentation.m"
      check_hlds__xml_documentation__XmlName_16 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_11);
    }
#line 800 "xml_documentation.m"
    check_hlds__xml_documentation__FileName_61 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_14, (MR_Integer) 0)));
#line 800 "xml_documentation.m"
    check_hlds__xml_documentation__LineNumber_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_14, (MR_Integer) 1)));
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_76_76, 0) = ((MR_Box) (check_hlds__xml_documentation__FileName_61));
#line 939 "xml_documentation.m"
    }
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_75_75, 0) = ((MR_Box) (check_hlds__xml_documentation__V_76_76));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
    }
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_66_66, 0) = ((MR_Box) ((MR_String) "filename"));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_66_66, 2) = ((MR_Box) (check_hlds__xml_documentation__V_75_75));
#line 939 "xml_documentation.m"
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_83_83 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__LineNumber_62);
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_82_82, 0) = ((MR_Box) (check_hlds__xml_documentation__V_83_83));
#line 927 "xml_documentation.m"
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_81_81, 0) = ((MR_Box) (check_hlds__xml_documentation__V_82_82));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "xml_documentation.m"
    }
#line 927 "xml_documentation.m"
    {
#line 927 "xml_documentation.m"
      check_hlds__xml_documentation__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_69_69, 0) = ((MR_Box) ((MR_String) "line"));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_69_69, 2) = ((MR_Box) (check_hlds__xml_documentation__V_81_81));
#line 927 "xml_documentation.m"
    }
#line 803 "xml_documentation.m"
    {
#line 803 "xml_documentation.m"
      check_hlds__xml_documentation__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_68_68, 0) = ((MR_Box) (check_hlds__xml_documentation__V_69_69));
#line 803 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "xml_documentation.m"
    }
#line 802 "xml_documentation.m"
    {
#line 802 "xml_documentation.m"
      check_hlds__xml_documentation__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_65_65, 0) = ((MR_Box) (check_hlds__xml_documentation__V_66_66));
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_65_65, 1) = ((MR_Box) (check_hlds__xml_documentation__V_68_68));
#line 802 "xml_documentation.m"
    }
#line 801 "xml_documentation.m"
    {
#line 801 "xml_documentation.m"
      check_hlds__xml_documentation__XmlContext_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 801 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_17, 0) = ((MR_Box) ((MR_String) "context"));
#line 801 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_17, 2) = ((MR_Box) (check_hlds__xml_documentation__V_65_65));
#line 801 "xml_documentation.m"
    }
#line 421 "xml_documentation.m"
    {
#line 421 "xml_documentation.m"
      check_hlds__xml_documentation__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 421 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_26_26, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_7[1]));
#line 421 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_26_26, 1) = ((MR_Box) (check_hlds__xml_documentation__constructor_to_xml_3_f_0_1));
#line 421 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 421 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_26_26, 3) = ((MR_Box) (check_hlds__xml_documentation__C_5));
#line 421 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_26_26, 4) = ((MR_Box) (check_hlds__xml_documentation__TVarset_6));
#line 421 "xml_documentation.m"
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__V_89_89 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_26_26, check_hlds__xml_documentation__Args_12);
    }
#line 945 "xml_documentation.m"
    {
#line 945 "xml_documentation.m"
      check_hlds__xml_documentation__XmlArgs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_18, 0) = ((MR_Box) ((MR_String) "ctor_args"));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_18, 2) = ((MR_Box) (check_hlds__xml_documentation__V_89_89));
#line 945 "xml_documentation.m"
    }
#line 422 "xml_documentation.m"
    {
#line 422 "xml_documentation.m"
      check_hlds__xml_documentation__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 422 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
#line 422 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 1) = ((MR_Box) (check_hlds__xml_documentation__constructor_to_xml_3_f_0_2));
#line 422 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 422 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_6));
#line 422 "xml_documentation.m"
    }
#line 422 "xml_documentation.m"
    {
#line 422 "xml_documentation.m"
      check_hlds__xml_documentation__XmlExistVars_19 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0((MR_String) "ctor_exist_vars", check_hlds__xml_documentation__V_28_28, check_hlds__xml_documentation__Exists_9);
    }
#line 425 "xml_documentation.m"
    {
#line 425 "xml_documentation.m"
      check_hlds__xml_documentation__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 425 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[1]));
#line 425 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 1) = ((MR_Box) (check_hlds__xml_documentation__constructor_to_xml_3_f_0_3));
#line 425 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 425 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_6));
#line 425 "xml_documentation.m"
    }
#line 425 "xml_documentation.m"
    {
#line 425 "xml_documentation.m"
      check_hlds__xml_documentation__XmlConstraints_20 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0((MR_String) "ctor_constraints", check_hlds__xml_documentation__V_30_30, check_hlds__xml_documentation__Constraints_10);
    }
#line 427 "xml_documentation.m"
    {
#line 427 "xml_documentation.m"
      check_hlds__xml_documentation__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 0) = ((MR_Box) (check_hlds__xml_documentation__Id_15));
#line 427 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "xml_documentation.m"
    }
#line 428 "xml_documentation.m"
    {
#line 428 "xml_documentation.m"
      check_hlds__xml_documentation__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlConstraints_20));
#line 428 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "xml_documentation.m"
    }
#line 428 "xml_documentation.m"
    {
#line 428 "xml_documentation.m"
      check_hlds__xml_documentation__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_37_37, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlExistVars_19));
#line 428 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_37_37, 1) = ((MR_Box) (check_hlds__xml_documentation__V_38_38));
#line 428 "xml_documentation.m"
    }
#line 428 "xml_documentation.m"
    {
#line 428 "xml_documentation.m"
      check_hlds__xml_documentation__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_36_36, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_18));
#line 428 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_36_36, 1) = ((MR_Box) (check_hlds__xml_documentation__V_37_37));
#line 428 "xml_documentation.m"
    }
#line 428 "xml_documentation.m"
    {
#line 428 "xml_documentation.m"
      check_hlds__xml_documentation__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_35_35, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_17));
#line 428 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_35_35, 1) = ((MR_Box) (check_hlds__xml_documentation__V_36_36));
#line 428 "xml_documentation.m"
    }
#line 428 "xml_documentation.m"
    {
#line 428 "xml_documentation.m"
      check_hlds__xml_documentation__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_16));
#line 428 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 1) = ((MR_Box) (check_hlds__xml_documentation__V_35_35));
#line 428 "xml_documentation.m"
    }
#line 427 "xml_documentation.m"
    {
#line 427 "xml_documentation.m"
      check_hlds__xml_documentation__Xml0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 427 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_21, 0) = ((MR_Box) ((MR_String) "constructor"));
#line 427 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_21, 1) = ((MR_Box) (check_hlds__xml_documentation__V_32_32));
#line 427 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_21, 2) = ((MR_Box) (check_hlds__xml_documentation__V_34_34));
#line 427 "xml_documentation.m"
    }
#line 429 "xml_documentation.m"
    {
#line 429 "xml_documentation.m"
      return check_hlds__xml_documentation__Xml_8 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_5, check_hlds__xml_documentation__Context_14, check_hlds__xml_documentation__Xml0_21);
    }
#line 416 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_8;
#line 416 "xml_documentation.m"
  }
#line 414 "xml_documentation.m"
}

#line 406 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0_1(
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
    MR_Word check_hlds__xml_documentation__conv0_Xml_8;

#line 406 "xml_documentation.m"
    {
#line 406 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_8 = check_hlds__xml_documentation__constructor_to_xml_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 406 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_8));
#line 406 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 406 "xml_documentation.m"
  }
#line 406 "xml_documentation.m"
}

#line 403 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0(
#line 403 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_1,
#line 403 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_2,
#line 403 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 403 "xml_documentation.m"
{
#line 405 "xml_documentation.m"
  {
#line 405 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 405 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;

#line 405 "xml_documentation.m"
#line 405 "xml_documentation.m"
    switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) {
#line 405 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 405 "xml_documentation.m"
      case (MR_Integer) 0:
#line 410 "xml_documentation.m"
        {
#line 410 "xml_documentation.m"
          check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[7]);
#line 410 "xml_documentation.m"
        }
#line 405 "xml_documentation.m"
        break;
#line 405 "xml_documentation.m"
      case (MR_Integer) 1:
#line 405 "xml_documentation.m"
        {
#line 405 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Ctors_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 405 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_16_16;
#line 405 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_18_18;
#line 405 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_64_64;
#line 405 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
#line 405 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 2)));
#line 405 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 3)));
#line 405 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 4)));
#line 405 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 5)));
#line 405 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 405 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 405 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 7)));

#line 406 "xml_documentation.m"
          {
#line 406 "xml_documentation.m"
            check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 406 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_7[0]));
#line 406 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (check_hlds__xml_documentation__type_body_to_xml_3_f_0_1));
#line 406 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 406 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 3) = ((MR_Box) (check_hlds__xml_documentation__C_1));
#line 406 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 4) = ((MR_Box) (check_hlds__xml_documentation__TVarset_2));
#line 406 "xml_documentation.m"
          }
#line 945 "xml_documentation.m"
          {
#line 945 "xml_documentation.m"
            check_hlds__xml_documentation__V_64_64 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_18_18, check_hlds__xml_documentation__Ctors_7);
          }
#line 945 "xml_documentation.m"
          {
#line 945 "xml_documentation.m"
            check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) ((MR_String) "constructors"));
#line 945 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 2) = ((MR_Box) (check_hlds__xml_documentation__V_64_64));
#line 945 "xml_documentation.m"
          }
#line 406 "xml_documentation.m"
          {
#line 406 "xml_documentation.m"
            check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 406 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 406 "xml_documentation.m"
          }
#line 405 "xml_documentation.m"
        }
#line 405 "xml_documentation.m"
        break;
#line 405 "xml_documentation.m"
      case (MR_Integer) 2:
#line 407 "xml_documentation.m"
        {
#line 407 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 407 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_23_23;
#line 407 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_26_26;
#line 407 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_27_27;

#line 408 "xml_documentation.m"
          {
#line 408 "xml_documentation.m"
            check_hlds__xml_documentation__V_27_27 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_2, check_hlds__xml_documentation__Type_22);
          }
#line 408 "xml_documentation.m"
          {
#line 408 "xml_documentation.m"
            check_hlds__xml_documentation__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 0) = ((MR_Box) (check_hlds__xml_documentation__V_27_27));
#line 408 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "xml_documentation.m"
          }
#line 408 "xml_documentation.m"
          {
#line 408 "xml_documentation.m"
            check_hlds__xml_documentation__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 408 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 0) = ((MR_Box) ((MR_String) "equivalent_type"));
#line 408 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 2) = ((MR_Box) (check_hlds__xml_documentation__V_26_26));
#line 408 "xml_documentation.m"
          }
#line 408 "xml_documentation.m"
          {
#line 408 "xml_documentation.m"
            check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__V_23_23));
#line 408 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "xml_documentation.m"
          }
#line 407 "xml_documentation.m"
        }
#line 405 "xml_documentation.m"
        break;
#line 405 "xml_documentation.m"
      case (MR_Integer) 3:
#line 405 "xml_documentation.m"
#line 405 "xml_documentation.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)))) {
#line 405 "xml_documentation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 405 "xml_documentation.m"
          case (MR_Integer) 0:
#line 411 "xml_documentation.m"
            {
#line 411 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[8]);
#line 411 "xml_documentation.m"
            }
#line 405 "xml_documentation.m"
            break;
#line 405 "xml_documentation.m"
          case (MR_Integer) 1:
#line 412 "xml_documentation.m"
            {
#line 412 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[6]);
#line 412 "xml_documentation.m"
            }
#line 405 "xml_documentation.m"
            break;
#line 405 "xml_documentation.m"
        }
#line 405 "xml_documentation.m"
        break;
#line 405 "xml_documentation.m"
    }
#line 405 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 405 "xml_documentation.m"
  }
#line 403 "xml_documentation.m"
}

#line 397 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__type_param_to_xml_2_f_0(
#line 397 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 397 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVar_5)
#line 397 "xml_documentation.m"
{
#line 399 "xml_documentation.m"
  {
#line 399 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 399 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_6;
#line 399 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__TVarName_7;
#line 399 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_13_13;
#line 399 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_14_14;

#line 400 "xml_documentation.m"
    {
#line 400 "xml_documentation.m"
      check_hlds__xml_documentation__TVarName_7 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__xml_documentation__TVarset_4, check_hlds__xml_documentation__TVar_5);
    }
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_14_14, 0) = ((MR_Box) (check_hlds__xml_documentation__TVarName_7));
#line 939 "xml_documentation.m"
    }
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_13_13, 0) = ((MR_Box) (check_hlds__xml_documentation__V_14_14));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
    }
#line 939 "xml_documentation.m"
    {
#line 939 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "type_variable"));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_13_13));
#line 939 "xml_documentation.m"
    }
#line 399 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_6;
#line 399 "xml_documentation.m"
  }
#line 397 "xml_documentation.m"
}

#line 372 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0_1(
#line 372 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 372 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 372 "xml_documentation.m"
{
#line 372 "xml_documentation.m"
  {
#line 372 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 372 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 372 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 372 "xml_documentation.m"
    {
#line 372 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 372 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 372 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 372 "xml_documentation.m"
  }
#line 372 "xml_documentation.m"
}

#line 358 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0(
#line 358 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 358 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 358 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TypeDefn_9,
#line 358 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25,
#line 358 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26)
#line 358 "xml_documentation.m"
{
#line 361 "xml_documentation.m"
  {
#line 361 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 361 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 361 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__TypeArity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 361 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeStatus_11;
#line 361 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__DefinedInThisModule_12;

#line 362 "xml_documentation.m"
    {
#line 362 "xml_documentation.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__TypeStatus_11);
    }
#line 363 "xml_documentation.m"
    {
#line 363 "xml_documentation.m"
      check_hlds__xml_documentation__DefinedInThisModule_12 = hlds__status__type_status_defined_in_this_module_1_f_0(check_hlds__xml_documentation__TypeStatus_11);
    }
#line 385 "xml_documentation.m"
#line 385 "xml_documentation.m"
    switch (check_hlds__xml_documentation__DefinedInThisModule_12) {
#line 385 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 385 "xml_documentation.m"
      case (MR_Integer) 0:
#line 386 "xml_documentation.m"
        *check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26 = check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25;
#line 385 "xml_documentation.m"
        break;
#line 385 "xml_documentation.m"
      case (MR_Integer) 1:
#line 365 "xml_documentation.m"
        {
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TypeBody_13;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TVarset_14;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Context_15;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TParams_16;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlName_17;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlTypeParams_18;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlVisibility_19;
#line 365 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__Tag_20;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Id_21;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Children_22;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Xml0_23;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Xml_24;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_28_28;
#line 365 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_30_30;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_32_32;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_33_33;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_34_34;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_35_35;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_36_36;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_37_37;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_47_47;
#line 365 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__Visibility_51;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_58_58;
#line 365 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_59_59;
#line 365 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_78_78;
#line 365 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_79_79;
#line 365 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_81_81;
#line 365 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_84_84;
#line 365 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_86_86;
#line 824 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_53_53;

#line 366 "xml_documentation.m"
          {
#line 366 "xml_documentation.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__TypeBody_13);
          }
#line 367 "xml_documentation.m"
          {
#line 367 "xml_documentation.m"
            hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__TVarset_14);
          }
#line 368 "xml_documentation.m"
          {
#line 368 "xml_documentation.m"
            hlds__hlds_data__get_type_defn_context_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__Context_15);
          }
#line 369 "xml_documentation.m"
          {
#line 369 "xml_documentation.m"
            hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__TParams_16);
          }
#line 371 "xml_documentation.m"
          {
#line 371 "xml_documentation.m"
            check_hlds__xml_documentation__XmlName_17 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__TypeName_7);
          }
#line 372 "xml_documentation.m"
          {
#line 372 "xml_documentation.m"
            check_hlds__xml_documentation__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 372 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
#line 372 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 1) = ((MR_Box) (check_hlds__xml_documentation__type_documentation_5_p_0_1));
#line 372 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 372 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_14));
#line 372 "xml_documentation.m"
          }
#line 945 "xml_documentation.m"
          {
#line 945 "xml_documentation.m"
            check_hlds__xml_documentation__V_47_47 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_28_28, check_hlds__xml_documentation__TParams_16);
          }
#line 945 "xml_documentation.m"
          {
#line 945 "xml_documentation.m"
            check_hlds__xml_documentation__XmlTypeParams_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypeParams_18, 0) = ((MR_Box) ((MR_String) "type_params"));
#line 945 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypeParams_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypeParams_18, 2) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 945 "xml_documentation.m"
          }
#line 824 "xml_documentation.m"
          {
#line 824 "xml_documentation.m"
            check_hlds__xml_documentation__V_53_53 = hlds__status__type_status_defined_in_impl_section_1_f_0(check_hlds__xml_documentation__TypeStatus_11);
          }
#line 824 "xml_documentation.m"
          check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_53_53 == (MR_Integer) 1);
#line 830 "xml_documentation.m"
          if (check_hlds__xml_documentation__succeeded)
#line 827 "xml_documentation.m"
            {
#line 825 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_54_54 = (MR_Word) check_hlds__xml_documentation__TypeStatus_11;

#line 825 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 827 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 826 "xml_documentation.m"
                check_hlds__xml_documentation__Visibility_51 = (MR_String) "abstract";
#line 827 "xml_documentation.m"
              else
#line 828 "xml_documentation.m"
                check_hlds__xml_documentation__Visibility_51 = (MR_String) "implementation";
#line 827 "xml_documentation.m"
            }
#line 830 "xml_documentation.m"
          else
#line 831 "xml_documentation.m"
            check_hlds__xml_documentation__Visibility_51 = (MR_String) "interface";
#line 939 "xml_documentation.m"
          {
#line 939 "xml_documentation.m"
            check_hlds__xml_documentation__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_59_59, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_51));
#line 939 "xml_documentation.m"
          }
#line 939 "xml_documentation.m"
          {
#line 939 "xml_documentation.m"
            check_hlds__xml_documentation__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_58_58, 0) = ((MR_Box) (check_hlds__xml_documentation__V_59_59));
#line 939 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
          }
#line 939 "xml_documentation.m"
          {
#line 939 "xml_documentation.m"
            check_hlds__xml_documentation__XmlVisibility_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_19, 0) = ((MR_Box) ((MR_String) "visibility"));
#line 939 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_19, 2) = ((MR_Box) (check_hlds__xml_documentation__V_58_58));
#line 939 "xml_documentation.m"
          }
#line 391 "xml_documentation.m"
#line 391 "xml_documentation.m"
          switch (MR_tag((MR_Word) check_hlds__xml_documentation__TypeBody_13)) {
#line 391 "xml_documentation.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 391 "xml_documentation.m"
            case (MR_Integer) 0:
#line 393 "xml_documentation.m"
              check_hlds__xml_documentation__Tag_20 = (MR_String) "foreign_type";
#line 391 "xml_documentation.m"
              break;
#line 391 "xml_documentation.m"
            case (MR_Integer) 1:
#line 391 "xml_documentation.m"
              check_hlds__xml_documentation__Tag_20 = (MR_String) "du_type";
#line 391 "xml_documentation.m"
              break;
#line 391 "xml_documentation.m"
            case (MR_Integer) 2:
#line 392 "xml_documentation.m"
              check_hlds__xml_documentation__Tag_20 = (MR_String) "eqv_type";
#line 391 "xml_documentation.m"
              break;
#line 391 "xml_documentation.m"
            case (MR_Integer) 3:
#line 391 "xml_documentation.m"
#line 391 "xml_documentation.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__TypeBody_13, (MR_Integer) 0)))) {
#line 391 "xml_documentation.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 391 "xml_documentation.m"
                case (MR_Integer) 0:
#line 394 "xml_documentation.m"
                  check_hlds__xml_documentation__Tag_20 = (MR_String) "solver_type";
#line 391 "xml_documentation.m"
                  break;
#line 391 "xml_documentation.m"
                case (MR_Integer) 1:
#line 395 "xml_documentation.m"
                  check_hlds__xml_documentation__Tag_20 = (MR_String) "abstract_type";
#line 391 "xml_documentation.m"
                  break;
#line 391 "xml_documentation.m"
              }
#line 391 "xml_documentation.m"
              break;
#line 391 "xml_documentation.m"
          }
#line 920 "xml_documentation.m"
          {
#line 920 "xml_documentation.m"
            check_hlds__xml_documentation__V_86_86 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__TypeName_7);
          }
#line 920 "xml_documentation.m"
          {
#line 920 "xml_documentation.m"
            check_hlds__xml_documentation__V_84_84 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_86_86);
          }
#line 920 "xml_documentation.m"
          {
#line 920 "xml_documentation.m"
            check_hlds__xml_documentation__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) "type", check_hlds__xml_documentation__V_84_84);
          }
#line 916 "xml_documentation.m"
          {
#line 916 "xml_documentation.m"
            check_hlds__xml_documentation__V_81_81 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__TypeArity_8);
          }
#line 916 "xml_documentation.m"
          {
#line 916 "xml_documentation.m"
            check_hlds__xml_documentation__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_81_81);
          }
#line 916 "xml_documentation.m"
          {
#line 916 "xml_documentation.m"
            check_hlds__xml_documentation__V_30_30 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_78_78, check_hlds__xml_documentation__V_79_79);
          }
#line 377 "xml_documentation.m"
          {
#line 377 "xml_documentation.m"
            check_hlds__xml_documentation__Id_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 377 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_21, 0) = ((MR_Box) ((MR_String) "id"));
#line 377 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_21, 1) = ((MR_Box) (check_hlds__xml_documentation__V_30_30));
#line 377 "xml_documentation.m"
          }
#line 379 "xml_documentation.m"
          {
#line 379 "xml_documentation.m"
            check_hlds__xml_documentation__V_35_35 = check_hlds__xml_documentation__prog_context_to_xml_1_f_0(check_hlds__xml_documentation__Context_15);
          }
#line 380 "xml_documentation.m"
          {
#line 380 "xml_documentation.m"
            check_hlds__xml_documentation__V_36_36 = check_hlds__xml_documentation__type_body_to_xml_3_f_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__TVarset_14, check_hlds__xml_documentation__TypeBody_13);
          }
#line 379 "xml_documentation.m"
          {
#line 379 "xml_documentation.m"
            check_hlds__xml_documentation__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 0) = ((MR_Box) (check_hlds__xml_documentation__V_35_35));
#line 379 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 1) = ((MR_Box) (check_hlds__xml_documentation__V_36_36));
#line 379 "xml_documentation.m"
          }
#line 378 "xml_documentation.m"
          {
#line 378 "xml_documentation.m"
            check_hlds__xml_documentation__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_33_33, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_19));
#line 378 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_33_33, 1) = ((MR_Box) (check_hlds__xml_documentation__V_34_34));
#line 378 "xml_documentation.m"
          }
#line 378 "xml_documentation.m"
          {
#line 378 "xml_documentation.m"
            check_hlds__xml_documentation__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypeParams_18));
#line 378 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 1) = ((MR_Box) (check_hlds__xml_documentation__V_33_33));
#line 378 "xml_documentation.m"
          }
#line 378 "xml_documentation.m"
          {
#line 378 "xml_documentation.m"
            check_hlds__xml_documentation__Children_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_22, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_17));
#line 378 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_22, 1) = ((MR_Box) (check_hlds__xml_documentation__V_32_32));
#line 378 "xml_documentation.m"
          }
#line 381 "xml_documentation.m"
          {
#line 381 "xml_documentation.m"
            check_hlds__xml_documentation__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_37_37, 0) = ((MR_Box) (check_hlds__xml_documentation__Id_21));
#line 381 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "xml_documentation.m"
          }
#line 381 "xml_documentation.m"
          {
#line 381 "xml_documentation.m"
            check_hlds__xml_documentation__Xml0_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 381 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_23, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_20));
#line 381 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_23, 1) = ((MR_Box) (check_hlds__xml_documentation__V_37_37));
#line 381 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_23, 2) = ((MR_Box) (check_hlds__xml_documentation__Children_22));
#line 381 "xml_documentation.m"
          }
#line 382 "xml_documentation.m"
          {
#line 382 "xml_documentation.m"
            check_hlds__xml_documentation__Xml_24 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__Context_15, check_hlds__xml_documentation__Xml0_23);
          }
#line 384 "xml_documentation.m"
          {
#line 384 "xml_documentation.m"
            MR_Word base;
#line 384 "xml_documentation.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "xml_documentation.m"
            *check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26 = base;
#line 384 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_24));
#line 384 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25));
#line 384 "xml_documentation.m"
          }
#line 365 "xml_documentation.m"
        }
#line 385 "xml_documentation.m"
        break;
#line 385 "xml_documentation.m"
    }
#line 361 "xml_documentation.m"
  }
#line 358 "xml_documentation.m"
}

#line 324 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__maybe_add_import_documentation_5_p_0(
#line 324 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__BuiltinModuleNames_6,
#line 324 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ModuleName_7,
#line 324 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__AvailEntry_8,
#line 324 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_17,
#line 324 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_18)
#line 324 "xml_documentation.m"
{
#line 332 "xml_documentation.m"
  {
#line 332 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;

#line 330 "xml_documentation.m"
    {
#line 330 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (check_hlds__xml_documentation__ModuleName_7)), check_hlds__xml_documentation__BuiltinModuleNames_6);
    }
#line 332 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 332 "xml_documentation.m"
      *check_hlds__xml_documentation__STATE_VARIABLE_Xmls_18 = check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_17;
#line 332 "xml_documentation.m"
    else
#line 333 "xml_documentation.m"
      {
#line 333 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlName_10;
#line 333 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Section_11;
#line 333 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__ImportOrUse_12;
#line 333 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlVisibility_14;
#line 333 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__ImportOrUseWord_15;
#line 333 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Xml_16;
#line 333 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_24_24;
#line 333 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_25_25;
#line 334 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation___Avails_13;

#line 333 "xml_documentation.m"
        {
#line 333 "xml_documentation.m"
          check_hlds__xml_documentation__XmlName_10 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__ModuleName_7);
        }
#line 334 "xml_documentation.m"
        check_hlds__xml_documentation__Section_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__AvailEntry_8, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 334 "xml_documentation.m"
        check_hlds__xml_documentation__ImportOrUse_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__AvailEntry_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 334 "xml_documentation.m"
        check_hlds__xml_documentation___Avails_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__AvailEntry_8, (MR_Integer) 1)));
#line 338 "xml_documentation.m"
#line 338 "xml_documentation.m"
        switch (check_hlds__xml_documentation__Section_11) {
#line 338 "xml_documentation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 338 "xml_documentation.m"
          case (MR_Integer) 1:
#line 339 "xml_documentation.m"
            {
#line 939 "xml_documentation.m"
              check_hlds__xml_documentation__XmlVisibility_14 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[4];
#line 339 "xml_documentation.m"
            }
#line 338 "xml_documentation.m"
            break;
#line 338 "xml_documentation.m"
          case (MR_Integer) 0:
#line 336 "xml_documentation.m"
            {
#line 939 "xml_documentation.m"
              check_hlds__xml_documentation__XmlVisibility_14 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[5];
#line 336 "xml_documentation.m"
            }
#line 338 "xml_documentation.m"
            break;
#line 338 "xml_documentation.m"
        }
#line 345 "xml_documentation.m"
#line 345 "xml_documentation.m"
        switch (check_hlds__xml_documentation__ImportOrUse_12) {
#line 345 "xml_documentation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 345 "xml_documentation.m"
          case (MR_Integer) 0:
#line 344 "xml_documentation.m"
            check_hlds__xml_documentation__ImportOrUseWord_15 = (MR_String) "import";
#line 345 "xml_documentation.m"
            break;
#line 345 "xml_documentation.m"
          case (MR_Integer) 1:
#line 347 "xml_documentation.m"
            check_hlds__xml_documentation__ImportOrUseWord_15 = (MR_String) "use";
#line 345 "xml_documentation.m"
            break;
#line 345 "xml_documentation.m"
        }
#line 349 "xml_documentation.m"
        {
#line 349 "xml_documentation.m"
          check_hlds__xml_documentation__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_25_25, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_14));
#line 349 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "xml_documentation.m"
        }
#line 349 "xml_documentation.m"
        {
#line 349 "xml_documentation.m"
          check_hlds__xml_documentation__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_10));
#line 349 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 1) = ((MR_Box) (check_hlds__xml_documentation__V_25_25));
#line 349 "xml_documentation.m"
        }
#line 349 "xml_documentation.m"
        {
#line 349 "xml_documentation.m"
          check_hlds__xml_documentation__Xml_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 349 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_16, 0) = ((MR_Box) (check_hlds__xml_documentation__ImportOrUseWord_15));
#line 349 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_16, 2) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 349 "xml_documentation.m"
        }
#line 350 "xml_documentation.m"
        {
#line 350 "xml_documentation.m"
          MR_Word base;
#line 350 "xml_documentation.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "xml_documentation.m"
          *check_hlds__xml_documentation__STATE_VARIABLE_Xmls_18 = base;
#line 350 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_16));
#line 350 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_17));
#line 350 "xml_documentation.m"
        }
#line 333 "xml_documentation.m"
      }
#line 332 "xml_documentation.m"
  }
#line 324 "xml_documentation.m"
}

#line 265 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_backwards_2_f_0(
#line 265 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_4,
#line 265 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Line_5)
#line 265 "xml_documentation.m"
{
#line 280 "xml_documentation.m"
  {
#line 280 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 280 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Comment_6;
#line 280 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__LineType_7;
#line 268 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11 = (MR_Word) check_hlds__xml_documentation__Comments_4;
#line 268 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv0_LineType_7;

#line 268 "xml_documentation.m"
    {
#line 268 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__Line_5, &check_hlds__xml_documentation__conv0_LineType_7);
    }
#line 268 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 268 "xml_documentation.m"
      {
#line 268 "xml_documentation.m"
        check_hlds__xml_documentation__LineType_7 = ((MR_Word) check_hlds__xml_documentation__conv0_LineType_7);
#line 268 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 268 "xml_documentation.m"
      }
#line 280 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 273 "xml_documentation.m"
#line 273 "xml_documentation.m"
      switch (MR_tag((MR_Word) check_hlds__xml_documentation__LineType_7)) {
#line 273 "xml_documentation.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 273 "xml_documentation.m"
        case (MR_Integer) 0:
#line 278 "xml_documentation.m"
          check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 273 "xml_documentation.m"
          break;
#line 273 "xml_documentation.m"
        case (MR_Integer) 1:
#line 270 "xml_documentation.m"
          {
#line 270 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__CurrentComment_8 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__LineType_7, (MR_Integer) 0)));
#line 270 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__CommentAbove_9;
#line 270 "xml_documentation.m"
            MR_Integer check_hlds__xml_documentation__V_12_12 = (check_hlds__xml_documentation__Line_5 - (MR_Integer) 1);

#line 271 "xml_documentation.m"
            {
#line 271 "xml_documentation.m"
              check_hlds__xml_documentation__CommentAbove_9 = check_hlds__xml_documentation__get_comment_backwards_2_f_0(check_hlds__xml_documentation__Comments_4, check_hlds__xml_documentation__V_12_12);
            }
#line 272 "xml_documentation.m"
            {
#line 272 "xml_documentation.m"
              return check_hlds__xml_documentation__Comment_6 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__CommentAbove_9, check_hlds__xml_documentation__CurrentComment_8);
            }
#line 270 "xml_documentation.m"
          }
#line 273 "xml_documentation.m"
          break;
#line 273 "xml_documentation.m"
        case (MR_Integer) 2:
#line 278 "xml_documentation.m"
          check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 273 "xml_documentation.m"
          break;
#line 273 "xml_documentation.m"
      }
#line 280 "xml_documentation.m"
    else
#line 281 "xml_documentation.m"
      check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 280 "xml_documentation.m"
    return check_hlds__xml_documentation__Comment_6;
#line 280 "xml_documentation.m"
  }
#line 265 "xml_documentation.m"
}

#line 242 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_forwards_2_f_0(
#line 242 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_4,
#line 242 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Line_5)
#line 242 "xml_documentation.m"
{
#line 257 "xml_documentation.m"
  {
#line 257 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 257 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Comment_6;
#line 257 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__LineType_7;
#line 245 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11 = (MR_Word) check_hlds__xml_documentation__Comments_4;
#line 245 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv0_LineType_7;

#line 245 "xml_documentation.m"
    {
#line 245 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__Line_5, &check_hlds__xml_documentation__conv0_LineType_7);
    }
#line 245 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 245 "xml_documentation.m"
      {
#line 245 "xml_documentation.m"
        check_hlds__xml_documentation__LineType_7 = ((MR_Word) check_hlds__xml_documentation__conv0_LineType_7);
#line 245 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 245 "xml_documentation.m"
      }
#line 257 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 250 "xml_documentation.m"
#line 250 "xml_documentation.m"
      switch (MR_tag((MR_Word) check_hlds__xml_documentation__LineType_7)) {
#line 250 "xml_documentation.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 250 "xml_documentation.m"
        case (MR_Integer) 0:
#line 255 "xml_documentation.m"
          check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 250 "xml_documentation.m"
          break;
#line 250 "xml_documentation.m"
        case (MR_Integer) 1:
#line 247 "xml_documentation.m"
          {
#line 247 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__CurrentComment_8 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__LineType_7, (MR_Integer) 0)));
#line 247 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__CommentBelow_9;
#line 247 "xml_documentation.m"
            MR_Integer check_hlds__xml_documentation__V_12_12 = (check_hlds__xml_documentation__Line_5 + (MR_Integer) 1);

#line 248 "xml_documentation.m"
            {
#line 248 "xml_documentation.m"
              check_hlds__xml_documentation__CommentBelow_9 = check_hlds__xml_documentation__get_comment_forwards_2_f_0(check_hlds__xml_documentation__Comments_4, check_hlds__xml_documentation__V_12_12);
            }
#line 249 "xml_documentation.m"
            {
#line 249 "xml_documentation.m"
              return check_hlds__xml_documentation__Comment_6 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__CurrentComment_8, check_hlds__xml_documentation__CommentBelow_9);
            }
#line 247 "xml_documentation.m"
          }
#line 250 "xml_documentation.m"
          break;
#line 250 "xml_documentation.m"
        case (MR_Integer) 2:
#line 255 "xml_documentation.m"
          check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 250 "xml_documentation.m"
          break;
#line 250 "xml_documentation.m"
      }
#line 257 "xml_documentation.m"
    else
#line 258 "xml_documentation.m"
      check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 257 "xml_documentation.m"
    return check_hlds__xml_documentation__Comment_6;
#line 257 "xml_documentation.m"
  }
#line 242 "xml_documentation.m"
}

#line 186 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__maybe_add_comment_3_f_0(
#line 186 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_5,
#line 186 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Context_6,
#line 186 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Xml_7)
#line 186 "xml_documentation.m"
{
#line 188 "xml_documentation.m"
  {
#line 188 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__Xml_7)) == (MR_mktag((MR_Integer) 0)));
#line 188 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 188 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__N_8;
#line 188 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__As_9;
#line 188 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Cs_10;

#line 189 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 189 "xml_documentation.m"
      {
#line 189 "xml_documentation.m"
        check_hlds__xml_documentation__N_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, (MR_Integer) 0)));
#line 189 "xml_documentation.m"
        check_hlds__xml_documentation__As_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, (MR_Integer) 1)));
#line 189 "xml_documentation.m"
        check_hlds__xml_documentation__Cs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, (MR_Integer) 2)));
#line 192 "xml_documentation.m"
        {
#line 192 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__Comment_11;
#line 190 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__Line_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_6, (MR_Integer) 1)));
#line 203 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_6, (MR_Integer) 0)));
#line 203 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__C_26;
#line 223 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__Comment0_31;
#line 223 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__RestComment_32;
#line 223 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_33_33 = (MR_Word) check_hlds__xml_documentation__Comments_5;
#line 223 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_34_34;
#line 223 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__V_35_35;
#line 223 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__V_36_36;
#line 224 "xml_documentation.m"
          MR_Box check_hlds__xml_documentation__conv0_V_34_34;

#line 224 "xml_documentation.m"
          {
#line 224 "xml_documentation.m"
            check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__V_33_33, check_hlds__xml_documentation__Line_25, &check_hlds__xml_documentation__conv0_V_34_34);
          }
#line 224 "xml_documentation.m"
          if (check_hlds__xml_documentation__succeeded)
#line 224 "xml_documentation.m"
            {
#line 224 "xml_documentation.m"
              check_hlds__xml_documentation__V_34_34 = ((MR_Word) check_hlds__xml_documentation__conv0_V_34_34);
#line 224 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 224 "xml_documentation.m"
            }
#line 223 "xml_documentation.m"
          if (check_hlds__xml_documentation__succeeded)
#line 223 "xml_documentation.m"
            {
#line 224 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__V_34_34)) == (MR_mktag((MR_Integer) 2)));
#line 224 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 224 "xml_documentation.m"
                {
#line 224 "xml_documentation.m"
                  check_hlds__xml_documentation__Comment0_31 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__V_34_34, (MR_Integer) 0)));
#line 225 "xml_documentation.m"
                  check_hlds__xml_documentation__V_36_36 = (MR_Integer) 1;
#line 225 "xml_documentation.m"
                  check_hlds__xml_documentation__V_35_35 = (check_hlds__xml_documentation__Line_25 + check_hlds__xml_documentation__V_36_36);
#line 225 "xml_documentation.m"
                  {
#line 225 "xml_documentation.m"
                    check_hlds__xml_documentation__RestComment_32 = check_hlds__xml_documentation__get_comment_forwards_2_f_0(check_hlds__xml_documentation__Comments_5, check_hlds__xml_documentation__V_35_35);
                  }
#line 226 "xml_documentation.m"
                  {
#line 226 "xml_documentation.m"
                    check_hlds__xml_documentation__C_26 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Comment0_31, check_hlds__xml_documentation__RestComment_32);
                  }
#line 226 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 224 "xml_documentation.m"
                }
#line 223 "xml_documentation.m"
            }
#line 203 "xml_documentation.m"
          if (check_hlds__xml_documentation__succeeded)
#line 208 "xml_documentation.m"
            {
#line 208 "xml_documentation.m"
              check_hlds__xml_documentation__Comment_11 = check_hlds__xml_documentation__C_26;
#line 190 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__Comment_11, (MR_String) "") == 0);
#line 190 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 208 "xml_documentation.m"
            }
#line 203 "xml_documentation.m"
          else
#line 211 "xml_documentation.m"
            {
#line 211 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__C_27;
#line 234 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_43_43 = (MR_Word) check_hlds__xml_documentation__Comments_5;
#line 234 "xml_documentation.m"
              MR_Integer check_hlds__xml_documentation__V_44_44 = (check_hlds__xml_documentation__Line_25 - (MR_Integer) 1);
#line 234 "xml_documentation.m"
              MR_Integer check_hlds__xml_documentation__V_47_47;
#line 234 "xml_documentation.m"
              MR_Integer check_hlds__xml_documentation__V_48_48;
#line 234 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_51_51;
#line 235 "xml_documentation.m"
              MR_Box check_hlds__xml_documentation__conv1_V_51_51;
#line 235 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_55_55;

#line 235 "xml_documentation.m"
              {
#line 235 "xml_documentation.m"
                check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__V_43_43, check_hlds__xml_documentation__V_44_44, &check_hlds__xml_documentation__conv1_V_51_51);
              }
#line 235 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 235 "xml_documentation.m"
                {
#line 235 "xml_documentation.m"
                  check_hlds__xml_documentation__V_51_51 = ((MR_Word) check_hlds__xml_documentation__conv1_V_51_51);
#line 235 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 235 "xml_documentation.m"
                }
#line 234 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 234 "xml_documentation.m"
                {
#line 235 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 235 "xml_documentation.m"
                  if (check_hlds__xml_documentation__succeeded)
#line 235 "xml_documentation.m"
                    {
#line 235 "xml_documentation.m"
                      check_hlds__xml_documentation__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_51_51, (MR_Integer) 0)));
#line 236 "xml_documentation.m"
                      check_hlds__xml_documentation__V_48_48 = (MR_Integer) 1;
#line 236 "xml_documentation.m"
                      check_hlds__xml_documentation__V_47_47 = (check_hlds__xml_documentation__Line_25 - check_hlds__xml_documentation__V_48_48);
#line 236 "xml_documentation.m"
                      {
#line 236 "xml_documentation.m"
                        check_hlds__xml_documentation__C_27 = check_hlds__xml_documentation__get_comment_backwards_2_f_0(check_hlds__xml_documentation__Comments_5, check_hlds__xml_documentation__V_47_47);
                      }
#line 236 "xml_documentation.m"
                      check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 235 "xml_documentation.m"
                    }
#line 234 "xml_documentation.m"
                }
#line 211 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 210 "xml_documentation.m"
                {
#line 210 "xml_documentation.m"
                  check_hlds__xml_documentation__Comment_11 = check_hlds__xml_documentation__C_27;
#line 190 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__Comment_11, (MR_String) "") == 0);
#line 190 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 210 "xml_documentation.m"
                }
#line 211 "xml_documentation.m"
              else
#line 212 "xml_documentation.m"
                {
#line 190 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = (strcmp((MR_String) "", (MR_String) "") == 0);
#line 190 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 212 "xml_documentation.m"
                  if (check_hlds__xml_documentation__succeeded)
#line 212 "xml_documentation.m"
                    {
#line 212 "xml_documentation.m"
                      check_hlds__xml_documentation__Comment_11 = (MR_String) "";
#line 212 "xml_documentation.m"
                      check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 212 "xml_documentation.m"
                    }
#line 212 "xml_documentation.m"
                }
#line 211 "xml_documentation.m"
            }
#line 192 "xml_documentation.m"
          if (check_hlds__xml_documentation__succeeded)
#line 191 "xml_documentation.m"
            {
#line 191 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_12_12;
#line 191 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_13_13;
#line 191 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_16_16;
#line 191 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_17_17;

#line 191 "xml_documentation.m"
              {
#line 191 "xml_documentation.m"
                check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 191 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__Comment_11));
#line 191 "xml_documentation.m"
              }
#line 191 "xml_documentation.m"
              {
#line 191 "xml_documentation.m"
                check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 191 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "xml_documentation.m"
              }
#line 191 "xml_documentation.m"
              {
#line 191 "xml_documentation.m"
                check_hlds__xml_documentation__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 191 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_13_13, 0) = ((MR_Box) ((MR_String) "comment"));
#line 191 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_13_13, 2) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 191 "xml_documentation.m"
              }
#line 191 "xml_documentation.m"
              {
#line 191 "xml_documentation.m"
                check_hlds__xml_documentation__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_12_12, 0) = ((MR_Box) (check_hlds__xml_documentation__V_13_13));
#line 191 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_12_12, 1) = ((MR_Box) (check_hlds__xml_documentation__Cs_10));
#line 191 "xml_documentation.m"
              }
#line 191 "xml_documentation.m"
              {
#line 191 "xml_documentation.m"
                check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 191 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__N_8));
#line 191 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (check_hlds__xml_documentation__As_9));
#line 191 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_12_12));
#line 191 "xml_documentation.m"
              }
#line 191 "xml_documentation.m"
            }
#line 192 "xml_documentation.m"
          else
#line 193 "xml_documentation.m"
            check_hlds__xml_documentation__HeadVar__4_4 = check_hlds__xml_documentation__Xml_7;
#line 192 "xml_documentation.m"
        }
#line 189 "xml_documentation.m"
      }
#line 189 "xml_documentation.m"
    else
#line 196 "xml_documentation.m"
      {
#line 196 "xml_documentation.m"
        MR_Box check_hlds__xml_documentation__conv2_HeadVar__4_4;

#line 196 "xml_documentation.m"
        {
#line 196 "xml_documentation.m"
          check_hlds__xml_documentation__conv2_HeadVar__4_4 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, (MR_String) "check_hlds.xml_documentation", (MR_String) "function \140check_hlds.xml_documentation.maybe_add_comment\'/3", (MR_String) "not an element");
        }
#line 196 "xml_documentation.m"
        check_hlds__xml_documentation__HeadVar__4_4 = ((MR_Word) check_hlds__xml_documentation__conv2_HeadVar__4_4);
#line 196 "xml_documentation.m"
      }
#line 188 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 188 "xml_documentation.m"
  }
#line 186 "xml_documentation.m"
}

#line 173 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__is_not_comment_char_1_p_0(
#line 173 "xml_documentation.m"
  MR_Char check_hlds__xml_documentation__C_2)
#line 173 "xml_documentation.m"
{
#line 176 "xml_documentation.m"
  {
#line 176 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__C_2 == (MR_Char) 37);

#line 176 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 176 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 176 "xml_documentation.m"
  }
#line 173 "xml_documentation.m"
}

#line 152 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_2(
#line 152 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 152 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 152 "xml_documentation.m"
{
#line 152 "xml_documentation.m"
  {
#line 152 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 152 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;

#line 152 "xml_documentation.m"
    {
#line 152 "xml_documentation.m"
      return check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation__is_not_comment_char_1_p_0(((MR_Char) (MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 152 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 152 "xml_documentation.m"
  }
#line 152 "xml_documentation.m"
}

#line 151 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_1(
#line 151 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 151 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 151 "xml_documentation.m"
{
#line 151 "xml_documentation.m"
  {
#line 151 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 151 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;

#line 151 "xml_documentation.m"
    {
#line 151 "xml_documentation.m"
      return check_hlds__xml_documentation__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 151 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 151 "xml_documentation.m"
  }
#line 151 "xml_documentation.m"
}

#line 123 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0(
#line 123 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__S_6,
#line 123 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 123 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__3_3)
#line 123 "xml_documentation.m"
{
#line 126 "xml_documentation.m"
  {
#line 126 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 126 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__LineNumber_9;
#line 126 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__LineResult_10;
#line 126 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__STATE_VARIABLE_C_0_13 = (MR_Word) check_hlds__xml_documentation__HeadVar__2_2;
#line 126 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__STATE_VARIABLE_C_14;

#line 127 "xml_documentation.m"
    {
#line 127 "xml_documentation.m"
      mercury__io__get_line_number_4_p_0(check_hlds__xml_documentation__S_6, &check_hlds__xml_documentation__LineNumber_9);
    }
#line 128 "xml_documentation.m"
    {
#line 128 "xml_documentation.m"
      mercury__io__read_line_4_p_0(check_hlds__xml_documentation__S_6, &check_hlds__xml_documentation__LineResult_10);
    }
#line 133 "xml_documentation.m"
#line 133 "xml_documentation.m"
    switch (MR_tag((MR_Word) check_hlds__xml_documentation__LineResult_10)) {
#line 133 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 133 "xml_documentation.m"
      case (MR_Integer) 0:
#line 134 "xml_documentation.m"
        check_hlds__xml_documentation__STATE_VARIABLE_C_14 = check_hlds__xml_documentation__STATE_VARIABLE_C_0_13;
#line 133 "xml_documentation.m"
        break;
#line 133 "xml_documentation.m"
      case (MR_Integer) 1:
#line 130 "xml_documentation.m"
        {
#line 130 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TypeCtorInfo_20_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 130 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Line_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__LineResult_10, (MR_Integer) 0)));
#line 130 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_22_22;
#line 130 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__STATE_VARIABLE_C_23_23;
#line 130 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_24_24;
#line 130 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_25_25;
#line 130 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Rest_33;
#line 130 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Decl_34;
#line 130 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Comment_35;
#line 151 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation___WhiteSpace_32;

#line 151 "xml_documentation.m"
          {
#line 151 "xml_documentation.m"
            mercury__list__takewhile_4_p_0(check_hlds__xml_documentation__TypeCtorInfo_20_47, (MR_Word) &check_hlds__xml_documentation_scalar_common_2[2], check_hlds__xml_documentation__Line_11, &check_hlds__xml_documentation___WhiteSpace_32, &check_hlds__xml_documentation__Rest_33);
          }
#line 152 "xml_documentation.m"
          {
#line 152 "xml_documentation.m"
            mercury__list__takewhile_4_p_0(check_hlds__xml_documentation__TypeCtorInfo_20_47, (MR_Word) &check_hlds__xml_documentation_scalar_common_2[3], check_hlds__xml_documentation__Rest_33, &check_hlds__xml_documentation__Decl_34, &check_hlds__xml_documentation__Comment_35);
          }
#line 156 "xml_documentation.m"
          if ((check_hlds__xml_documentation__Rest_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "xml_documentation.m"
            check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 156 "xml_documentation.m"
          else
#line 161 "xml_documentation.m"
          if ((check_hlds__xml_documentation__Comment_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 160 "xml_documentation.m"
            check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 161 "xml_documentation.m"
          else
#line 166 "xml_documentation.m"
          if ((check_hlds__xml_documentation__Decl_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "xml_documentation.m"
            {
#line 164 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_45_45;

#line 165 "xml_documentation.m"
              {
#line 165 "xml_documentation.m"
                check_hlds__xml_documentation__V_45_45 = mercury__string__from_char_list_1_f_0(check_hlds__xml_documentation__Comment_35);
              }
#line 165 "xml_documentation.m"
              {
#line 165 "xml_documentation.m"
                check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 165 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__V_45_45));
#line 165 "xml_documentation.m"
              }
#line 164 "xml_documentation.m"
            }
#line 166 "xml_documentation.m"
          else
#line 167 "xml_documentation.m"
            {
#line 167 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_44_44;

#line 168 "xml_documentation.m"
              {
#line 168 "xml_documentation.m"
                check_hlds__xml_documentation__V_44_44 = mercury__string__from_char_list_1_f_0(check_hlds__xml_documentation__Comment_35);
              }
#line 168 "xml_documentation.m"
              {
#line 168 "xml_documentation.m"
                check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 168 "xml_documentation.m"
                MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__V_44_44));
#line 168 "xml_documentation.m"
              }
#line 167 "xml_documentation.m"
            }
#line 131 "xml_documentation.m"
          {
#line 131 "xml_documentation.m"
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__LineNumber_9, ((MR_Box) (check_hlds__xml_documentation__V_22_22)), check_hlds__xml_documentation__STATE_VARIABLE_C_0_13, &check_hlds__xml_documentation__STATE_VARIABLE_C_23_23);
          }
#line 132 "xml_documentation.m"
          check_hlds__xml_documentation__V_24_24 = (MR_Word) check_hlds__xml_documentation__STATE_VARIABLE_C_23_23;
#line 132 "xml_documentation.m"
          {
#line 132 "xml_documentation.m"
            check_hlds__xml_documentation__build_comments_5_p_0(check_hlds__xml_documentation__S_6, check_hlds__xml_documentation__V_24_24, &check_hlds__xml_documentation__V_25_25);
          }
#line 132 "xml_documentation.m"
          check_hlds__xml_documentation__STATE_VARIABLE_C_14 = (MR_Word) check_hlds__xml_documentation__V_25_25;
#line 130 "xml_documentation.m"
        }
#line 133 "xml_documentation.m"
        break;
#line 133 "xml_documentation.m"
      case (MR_Integer) 2:
#line 136 "xml_documentation.m"
        {
#line 136 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__E_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__LineResult_10, (MR_Integer) 0)));
#line 136 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_21_21;

#line 138 "xml_documentation.m"
          {
#line 138 "xml_documentation.m"
            check_hlds__xml_documentation__V_21_21 = mercury__io__error_message_1_f_0(check_hlds__xml_documentation__E_12);
          }
#line 138 "xml_documentation.m"
          {
#line 138 "xml_documentation.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.xml_documentation", (MR_String) "predicate \140check_hlds.xml_documentation.build_comments\'/5", check_hlds__xml_documentation__V_21_21);
#line 138 "xml_documentation.m"
            return;
          }
#line 136 "xml_documentation.m"
        }
#line 133 "xml_documentation.m"
        break;
#line 133 "xml_documentation.m"
    }
#line 126 "xml_documentation.m"
    *check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) check_hlds__xml_documentation__STATE_VARIABLE_C_14;
#line 126 "xml_documentation.m"
  }
#line 123 "xml_documentation.m"
}

#line 29 "xml_documentation.m"
void MR_CALL 
check_hlds__xml_documentation__xml_documentation_3_p_0(
#line 29 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ModuleInfo_4)
#line 29 "xml_documentation.m"
{
#line 86 "xml_documentation.m"
  {
#line 86 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 86 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Globals_6;
#line 86 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ModuleName_7;
#line 86 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__FileName_8;
#line 86 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__SrcFileName_9;
#line 86 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__SrcResult_10;

#line 87 "xml_documentation.m"
    {
#line 87 "xml_documentation.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__xml_documentation__ModuleInfo_4, &check_hlds__xml_documentation__Globals_6);
    }
#line 88 "xml_documentation.m"
    {
#line 88 "xml_documentation.m"
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__xml_documentation__ModuleInfo_4, &check_hlds__xml_documentation__ModuleName_7);
    }
#line 89 "xml_documentation.m"
    {
#line 89 "xml_documentation.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(check_hlds__xml_documentation__Globals_6, check_hlds__xml_documentation__ModuleName_7, (MR_String) ".xml", (MR_Integer) 0, &check_hlds__xml_documentation__FileName_8);
    }
#line 92 "xml_documentation.m"
    {
#line 92 "xml_documentation.m"
      parse_tree__source_file_map__lookup_module_source_file_4_p_0(check_hlds__xml_documentation__ModuleName_7, &check_hlds__xml_documentation__SrcFileName_9);
    }
#line 93 "xml_documentation.m"
    {
#line 93 "xml_documentation.m"
      mercury__io__open_input_4_p_0(check_hlds__xml_documentation__SrcFileName_9, &check_hlds__xml_documentation__SrcResult_10);
    }
#line 112 "xml_documentation.m"
    if (((MR_tag((MR_Word) check_hlds__xml_documentation__SrcResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 113 "xml_documentation.m"
      {
#line 113 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__SrcErr_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__SrcResult_10, (MR_Integer) 0)));

#line 114 "xml_documentation.m"
        {
#line 114 "xml_documentation.m"
          parse_tree__error_util__unable_to_open_file_4_p_0(check_hlds__xml_documentation__SrcFileName_9, check_hlds__xml_documentation__SrcErr_18);
#line 114 "xml_documentation.m"
          return;
        }
#line 113 "xml_documentation.m"
      }
#line 112 "xml_documentation.m"
    else
#line 95 "xml_documentation.m"
      {
#line 95 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__SrcStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__SrcResult_10, (MR_Integer) 0)));
#line 95 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Comments_12;
#line 95 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__ModuleComment_13;
#line 95 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__OpenResult_14;
#line 95 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_27_27;
#line 95 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_29_29;

#line 96 "xml_documentation.m"
        {
#line 96 "xml_documentation.m"
          check_hlds__xml_documentation__V_29_29 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0);
        }
#line 96 "xml_documentation.m"
        check_hlds__xml_documentation__V_27_27 = (MR_Word) check_hlds__xml_documentation__V_29_29;
#line 96 "xml_documentation.m"
        {
#line 96 "xml_documentation.m"
          check_hlds__xml_documentation__build_comments_5_p_0(check_hlds__xml_documentation__SrcStream_11, check_hlds__xml_documentation__V_27_27, &check_hlds__xml_documentation__Comments_12);
        }
#line 100 "xml_documentation.m"
        {
#line 100 "xml_documentation.m"
          check_hlds__xml_documentation__ModuleComment_13 = check_hlds__xml_documentation__get_comment_forwards_2_f_0(check_hlds__xml_documentation__Comments_12, (MR_Integer) 1);
        }
#line 102 "xml_documentation.m"
        {
#line 102 "xml_documentation.m"
          mercury__io__open_output_4_p_0(check_hlds__xml_documentation__FileName_8, &check_hlds__xml_documentation__OpenResult_14);
        }
#line 108 "xml_documentation.m"
        if (((MR_tag((MR_Word) check_hlds__xml_documentation__OpenResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 109 "xml_documentation.m"
          {
#line 109 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__Err_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__OpenResult_14, (MR_Integer) 0)));

#line 110 "xml_documentation.m"
            {
#line 110 "xml_documentation.m"
              parse_tree__error_util__unable_to_open_file_4_p_0(check_hlds__xml_documentation__FileName_8, check_hlds__xml_documentation__Err_17);
#line 110 "xml_documentation.m"
              return;
            }
#line 109 "xml_documentation.m"
          }
#line 108 "xml_documentation.m"
        else
#line 104 "xml_documentation.m"
          {
#line 104 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__Stream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__OpenResult_14, (MR_Integer) 0)));
#line 104 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__MIXmlDoc_16;
#line 107 "xml_documentation.m"
            MR_Box check_hlds__xml_documentation__conv0_STATE_VARIABLE_IO_20;

#line 105 "xml_documentation.m"
            {
#line 105 "xml_documentation.m"
              check_hlds__xml_documentation__MIXmlDoc_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 105 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__MIXmlDoc_16, 0) = ((MR_Box) (check_hlds__xml_documentation__Comments_12));
#line 105 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__MIXmlDoc_16, 1) = ((MR_Box) (check_hlds__xml_documentation__ModuleComment_13));
#line 105 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__MIXmlDoc_16, 2) = ((MR_Box) (check_hlds__xml_documentation__ModuleInfo_4));
#line 105 "xml_documentation.m"
            }
#line 107 "xml_documentation.m"
            {
#line 107 "xml_documentation.m"
              mercury__term_to_xml__write_xml_doc_4_p_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[0], (MR_Word) &check_hlds__xml_documentation_scalar_common_4[0], ((MR_Box) (check_hlds__xml_documentation__Stream_15)), ((MR_Box) (check_hlds__xml_documentation__MIXmlDoc_16)), ((MR_Box) ((MR_Integer) 0)), &check_hlds__xml_documentation__conv0_STATE_VARIABLE_IO_20);
            }
#line 104 "xml_documentation.m"
          }
#line 95 "xml_documentation.m"
      }
#line 86 "xml_documentation.m"
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
